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
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_f_32;
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
ATerm term_w_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_r_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
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
ATerm term_w_24;
ATerm term_r_24;
ATerm term_b_24;
ATerm term_a_23;
ATerm term_y_22;
ATerm term_o_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_j_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_e_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
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
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
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
ATerm term_z_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_u_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
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
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_a_9, term_v_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_b_10, term_c_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_i_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_10, term_o_10, term_p_10);
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
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_f_11, term_h_11);
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
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_c_12, term_d_12);
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
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_r_12);
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
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_e_14, term_i_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_b_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_m_15);
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
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
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
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_s_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_b_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_y_17);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_d_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_d_18);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_n_26);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
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
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_f_32, term_d_18);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm f_6 (ATerm n_28, ATerm o_28, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm q_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm t_6 (ATerm x_64 (ATerm), ATerm u_164, ATerm v_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t);
static ATerm u_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm j_82 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_7 (ATerm y_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm w_6 (ATerm d_78 (ATerm), ATerm v_29, ATerm t_29, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm b_19, ATerm c_19, ATerm t);
ATerm at_last_1_0 (ATerm o_70 (ATerm), ATerm t);
static ATerm i_6 (ATerm w_69 (ATerm), ATerm p_19, ATerm h_196, ATerm t);
ATerm at_suffix_1_0 (ATerm h_70 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm a_70 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm k_94 (ATerm), ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm l_79 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm k_79 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm m_79 (ATerm), ATerm t);
static ATerm k_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm l_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm r_1 (ATerm t);
static ATerm m_6 (ATerm j_31, ATerm k_31, ATerm l_31, ATerm t);
static ATerm n_6 (ATerm o_79 (ATerm), ATerm t_31, ATerm s_31, ATerm t);
static ATerm p_6 (ATerm u_33, ATerm v_33, ATerm t);
static ATerm p_21 (ATerm f_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_6 (ATerm t_17, ATerm t);
static ATerm r_6 (ATerm d_34, ATerm e_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_24 (ATerm e_22, ATerm t);
static ATerm c_24 (ATerm i_22, ATerm j_22, ATerm k_22, ATerm t);
static ATerm d_24 (ATerm u_22, ATerm v_22, ATerm w_22, ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm x_28 (ATerm p_27, ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm x_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm r_30, ATerm s_30, ATerm t);
ATerm end_scope_1_0 (ATerm a_78 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_77 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_81 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm w_81 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_7 (ATerm m_32, ATerm n_32, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_7 (ATerm m_30, ATerm n_30, ATerm l_30, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_6 (ATerm h_28, ATerm i_28, ATerm t);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_79 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm need_help_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_7 (ATerm m_49, ATerm n_49, ATerm t);
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm d_7 (ATerm d_32, ATerm e_32, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_85 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm parse_options_1_0 (ATerm i_85 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm n_28, ATerm o_28, ATerm t)
{
  ATerm w_4 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_28, o_28);
      LocalPopChoice(t_8);
    }
  else
    {
      t = w_4;
      t = SSL_subtr(n_28, o_28);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,t_0 = NULL;
  t = term_u_8;
  {
    ATerm v_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = v_8;
        t = term_a_9;
      }
  }
  b_0 = t;
  t = term_a_9;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_a_9);
  t = f_6(b_0, t_0, t);
  j_0 = t;
  t = SSL_int_to_string(j_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_u_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_1 = NULL;
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
          b_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_9);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_1, (ATerm) ATinsert(ATempty, term_e_9));
      t = p_6(b_1, f_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm q_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
static ATerm t_6 (ATerm x_64 (ATerm), ATerm u_164, ATerm v_17, ATerm t)
{
  ATerm k_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_164, term_f_9);
  t = s_6(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, v_17);
  t = x_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm f_0 (ATerm t)
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
  t = q_6(o_1, p_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  n_1 = t;
  t = xtc_new_file_0_0(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_1, n_1);
  t = t_6(f_0, m_1, n_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
  t = xtc_transform_file_2_0(i_81, j_81, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(x_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), q_0), term_i_9);
        s_0 = t;
        t = SSL_concat_strings(s_0);
      }
    }
  else
    {
      ATerm i_1 = NULL,j_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_2);
      i_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_n_9), i_1), term_m_9), x_2);
      j_1 = t;
      t = SSL_concat_strings(j_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm e_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = z_69(t);
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
    ATerm o_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_16), term_v_15), term_r_15), term_n_15), term_i_15), term_e_15), term_x_14), term_r_14), term_k_14), term_x_13), term_o_13), term_j_13), term_a_13), term_w_12), term_s_12), term_n_12), term_j_12), term_f_12), term_w_11), term_s_11), term_m_11), term_i_11), term_c_11), term_y_10), term_q_10), term_m_10), term_d_10), term_w_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = o_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm j_3 = NULL,x_3 = NULL;
  j_3 = t;
  {
    ATerm j_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm x_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_16);
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = x_3;
              {
                ATerm b_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_d_17;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_e_17);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_e_17));
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              t = j_3;
            }
        }
      }
    else
      {
        t = j_16;
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
ATerm fork_and_wait_1_0 (ATerm m_63 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  h_4 = t;
  {
    ATerm f_17 = t;
    int g_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = m_63(t);
        LocalPopChoice(g_17);
      }
    else
      {
        t = f_17;
        t = SSL_waitpid(h_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_17 = ATgetArgument(t, 0);
            if(((ATgetType(h_17) != AT_INT) || (ATgetInt((ATermInt) h_17) != 0)))
              _fail(t);
            {
              ATerm j_17 = ATgetArgument(t, 1);
            }
            {
              ATerm l_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = j_82(t);
  t = xtc_find_0_0(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm n_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
      t = u_6(l_4, m_4, t);
      t = term_m_17;
      n_4 = t;
      t = SSL_exit(n_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = m_4;
  return(t);
}
ATerm at_end_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm q_5 (ATerm t)
  {
    ATerm m_5 = NULL,o_5 = NULL,p_5 = NULL;
    p_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_5 = ATgetFirst((ATermList) t);
        o_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,k_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(p_5);
          f_2 = t;
          t = o_5;
          t = q_5(t);
          k_2 = t;
          t = (ATerm) ATinsert(CheckATermList(k_2), m_5);
          a_2 = t;
          t = SSLsetAnnotations(a_2, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_5;
        t = d_70(t);
      }
    return(t);
  }
  t = q_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,t_4 = NULL;
  p_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_4;
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
          q_4 = ATgetFirst((ATermList) t);
          if(((t_4 != NULL) && (t_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm k_7 (ATerm y_5, ATerm t)
{
  ATerm z_5 = NULL;
  t = SSL_explode_term(y_5);
  if(match_cons(t, sym__2))
    {
      ATerm p_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_17) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm c_6 = NULL,v_6 = NULL,f_7 = NULL;
  f_7 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = v_6;
              return(t);
            }
            t = c_6;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = k_7(f_7, t);
          }
      }
    }
  else
    {
      t = k_7(f_7, t);
    }
  return(t);
}
static ATerm w_6 (ATerm d_78 (ATerm), ATerm v_29, ATerm t_29, ATerm t)
{
  ATerm q_7 = NULL,s_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,c_8 = NULL;
  x_7 = t;
  t = d_78(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_7, v_29, t_29);
  t = e_7(q_7, v_29, t_29, t);
  {
    ATerm s_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = term_y_17;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_y_17);
        t = d_7(q_7, d_8, t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = s_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_7 = ATgetFirst((ATermList) t);
      w_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_17;
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(w_7), (ATerm) ATinsert(CheckATermList(s_7), v_29));
  c_8 = t;
  t = SSL_table_put(q_7, y_7, c_8);
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
  t = term_z_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,n_8 = NULL,q_8 = NULL;
  t = P__tmpdir_0_0(t);
  h_8 = t;
  t = term_a_18;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, term_a_18);
  t = c_7(h_8, q_8, t);
  j_8 = t;
  t = term_b_18;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, term_b_18);
  t = c_7(j_8, n_8, t);
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
  t = w_6(x_0, f_8, g_8, t);
  t = SSL_close(e_8);
  t = f_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,w_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_8 = NULL,z_8 = NULL;
      t = s_8;
      t = xtc_new_file_0_0(t);
      x_8 = t;
      t = r_0(t);
      z_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_8, (ATerm) ATinsert(ATinsert(ATempty, x_8), term_e_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
    }
  else
    {
      ATerm c_9 = NULL,d_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8;
      t = xtc_new_file_0_0(t);
      c_9 = t;
      t = r_0(t);
      d_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_9), term_e_18), w_8), term_f_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_9);
    }
  return(t);
}
static ATerm g_6 (ATerm b_19, ATerm c_19, ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  t = c_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_19;
    }
  else
    {
      ATerm k_3 = NULL,p_3 = NULL,c_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_10 = ATgetFirst((ATermList) t);
          k_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_19);
      k_3 = t;
      t = k_10;
      {
        static ATerm a_4 (ATerm t)
        {
          ATerm g_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_3 = NULL;
              q_3 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_3;
              LocalPopChoice(i_18);
            }
          else
            {
              t = g_18;
              {
                ATerm t_3 = NULL;
                t = Cons_2_0(_id, a_4, t);
                t_3 = t;
                t = (ATerm) ATinsert(CheckATermList(t_3), b_19);
              }
            }
          return(t);
        }
        t = a_4(t);
      }
      p_3 = t;
      t = (ATerm) ATinsert(CheckATermList(p_3), j_10);
      c_2 = t;
      t = SSLsetAnnotations(c_2, k_3);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm o_70 (ATerm), ATerm t)
{
  static ATerm b_12 (ATerm t)
  {
    ATerm x_11 = NULL,y_11 = NULL,a_12 = NULL;
    x_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_11 = ATgetFirst((ATermList) t);
        a_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_18 = t;
      int k_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_4 = NULL,j_2 = NULL;
          t = SSLgetAnnotations(x_11);
          s_4 = t;
          t = a_12;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_12), y_11);
          j_2 = t;
          t = SSLsetAnnotations(j_2, s_4);
          t = o_70(t);
          LocalPopChoice(k_18);
        }
      else
        {
          t = j_18;
          {
            ATerm s_5 = NULL,w_5 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(x_11);
            s_5 = t;
            t = a_12;
            t = b_12(t);
            w_5 = t;
            t = (ATerm) ATinsert(CheckATermList(w_5), y_11);
            l_2 = t;
            t = SSLsetAnnotations(l_2, s_5);
          }
        }
    }
    return(t);
  }
  t = b_12(t);
  return(t);
}
static ATerm i_6 (ATerm w_69 (ATerm), ATerm p_19, ATerm h_196, ATerm t)
{
  static ATerm y_0 (ATerm t)
  {
    ATerm e_12 = NULL;
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_19, e_12);
    t = w_69(t);
    t = e_12;
    return(t);
  }
  t = h_196;
  t = SRTS_one(y_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  static ATerm i_13 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_70(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,b_7 = NULL,m_7 = NULL,o_2 = NULL;
          e_13 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_13 = ATgetFirst((ATermList) t);
              g_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_13);
          b_7 = t;
          t = g_13;
          t = i_13(t);
          m_7 = t;
          t = (ATerm) ATinsert(CheckATermList(m_7), f_13);
          o_2 = t;
          t = SSLsetAnnotations(o_2, b_7);
        }
      }
    return(t);
  }
  t = i_13(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  static ATerm z_0 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,h_14 = NULL,l_14 = NULL,t_2 = NULL,q_2 = NULL;
    l_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_14 = ATgetFirst((ATermList) t);
        b_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_14);
    y_13 = t;
    t = a_14;
    t = a_70(t);
    c_14 = t;
    t = (ATerm) ATinsert(CheckATermList(b_14), c_14);
    q_2 = t;
    t = SSLsetAnnotations(q_2, y_13);
    h_14 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_13 = ATgetFirst((ATermList) t);
        u_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_14);
    s_13 = t;
    t = u_13;
    if(((q_13 != NULL) && (q_13 != t)))
      _fail(t);
    else
      q_13 = t;
    t = (ATerm) ATinsert(CheckATermList(u_13), t_13);
    t_2 = t;
    t = SSLsetAnnotations(t_2, s_13);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(z_0, t);
  r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_13, not_null(q_13));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm k_94 (ATerm), ATerm t)
{
  ATerm a_15 = NULL,l_15 = NULL;
  ATerm o_18 = t;
  int p_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(k_94, t);
      LocalPopChoice(p_18);
    }
  else
    {
      t = o_18;
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      a_15 = ATgetArgument(t, 0);
      l_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_18 = ATgetFirst((ATermList) t);
              ATerm s_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_15;
          t = list_tokenize_1_0(k_94, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_18 = ATgetFirst((ATermList) t);
          ATerm u_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, a_15);
        }
      else
        {
          ATerm z_15 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_18 = ATgetFirst((ATermList) t);
              ATerm x_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_15;
          t = list_tokenize_1_0(k_94, t);
          z_15 = t;
          t = (ATerm) ATinsert(CheckATermList(z_15), a_15);
        }
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm l_16 = NULL;
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      if((l_16 != ATgetArgument(t, 1)))
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
  ATerm m_16 = NULL;
  m_16 = t;
  t = SSL_implode_string(m_16);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,c_3 = NULL;
  i_16 = t;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      g_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_16);
  c_16 = t;
  t = SSL_explode_string(g_16);
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, h_16);
  c_3 = t;
  t = SSLsetAnnotations(c_3, c_16);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_16;
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm k_16 = NULL;
      k_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, a_16);
      t = i_6(c_1, k_16, a_16, t);
      return(t);
    }
    t = list_tokenize_1_0(a_1, t);
  }
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm u_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_18 = ATgetFirst((ATermList) t);
      u_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_16;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,q_16 = NULL,t_16 = NULL;
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_18), o_16);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(e_1, t);
  n_16 = t;
  t = term_a_19;
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, n_16);
  t = g_6(t_16, n_16, t);
  q_16 = t;
  t = SSL_concat_strings(q_16);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_16 = NULL;
  static ATerm h_1 (ATerm t)
  {
    ATerm w_16 = NULL,c_17 = NULL;
    w_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), w_16);
    t = d_7(not_null(v_16), w_16, t);
    c_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_16, c_17);
    return(t);
  }
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = SSL_table_keys(v_16);
  t = map_1_0(h_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm k_17 = NULL;
  k_17 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_17, term_k_15);
        t = geq_0_0(t);
        t = k_17;
        t = l_79(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = k_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_h_12);
        t = geq_0_0(t);
        t = c_18;
        t = k_79(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = c_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_18 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_18, term_o_10);
        t = geq_0_0(t);
        t = n_18;
        t = m_79(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = n_18;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = v_73(t);
  {
    static ATerm l_1 (ATerm t)
    {
      ATerm v_18 = NULL;
      v_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, v_18);
      t = u_73(t);
      return(t);
    }
    t = fetch_1_0(l_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm l_6 (ATerm r_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm f_20 (ATerm t)
  {
    ATerm x_19 = NULL,a_20 = NULL,c_20 = NULL;
    x_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_20 = ATgetFirst((ATermList) t);
            c_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_19 = t;
          int k_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = k_6(r_73, q_1, a_20, c_20, t);
              }
              t = f_20(t);
              LocalPopChoice(k_19);
            }
          else
            {
              t = j_19;
              {
                ATerm z_7 = NULL,k_8 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(x_19);
                z_7 = t;
                t = c_20;
                t = f_20(t);
                k_8 = t;
                t = (ATerm) ATinsert(CheckATermList(k_8), a_20);
                m_3 = t;
                t = SSLsetAnnotations(m_3, z_7);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = f_20(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      if((q_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm j_31, ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,m_20 = NULL;
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
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
        t = (ATerm) ATmakeAppl(sym__2, j_31, k_31);
        t = d_7(j_31, k_31, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATempty;
      }
  }
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, l_31);
  t = l_6(r_1, m_20, l_31, t);
  k_20 = t;
  t = SSL_table_put(j_31, k_31, k_20);
  t = j_20;
  return(t);
}
static ATerm n_6 (ATerm o_79 (ATerm), ATerm t_31, ATerm s_31, ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    ATerm r_20 = NULL,s_20 = NULL;
    if(match_cons(t, sym__2))
      {
        r_20 = ATgetArgument(t, 0);
        s_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_31, r_20, s_20);
    t = o_79(t);
    return(t);
  }
  t = s_31;
  t = map_1_0(s_1, t);
  return(t);
}
static ATerm p_6 (ATerm u_33, ATerm v_33, ATerm t)
{
  t = SSL_access(u_33, v_33);
  return(t);
}
static ATerm p_21 (ATerm f_21, ATerm t)
{
  t = SSL_fclose(f_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_21 = NULL,m_21 = NULL;
  m_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_21 = ATgetArgument(t, 0);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_21);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = p_21(m_21, t);
          }
      }
    }
  else
    {
      t = p_21(m_21, t);
    }
  return(t);
}
static ATerm o_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm r_6 (ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm q_21 = NULL;
  t = SSL_fopen(d_34, e_34);
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_21 = NULL;
  t = SSL_stdin_stream();
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  t = SSL_stdout_stream();
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = SSL_stderr_stream();
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_21);
  return(t);
}
static ATerm a_24 (ATerm e_22, ATerm t)
{
  ATerm f_22 = NULL;
  t = SSL_explode_term(e_22);
  if(match_cons(t, sym__2))
    {
      ATerm s_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_19 = ATgetArgument(t, 1);
        if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
          {
            f_22 = ATgetFirst((ATermList) t_19);
            {
              ATerm u_19 = (ATerm) ATgetNext((ATermList) t_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_24 (ATerm i_22, ATerm j_22, ATerm k_22, ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,r_22 = NULL,r_3 = NULL;
  t = SSLgetAnnotations(k_22);
  n_22 = t;
  t = i_22;
  if(match_cons(t, sym_Path_1))
    {
      r_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_22, j_22);
  r_3 = t;
  t = SSLsetAnnotations(r_3, n_22);
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(l_22, m_22, t);
  return(t);
}
static ATerm d_24 (ATerm u_22, ATerm v_22, ATerm w_22, ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL,c_23 = NULL,m_23 = NULL,s_3 = NULL;
  t = SSLgetAnnotations(w_22);
  c_23 = t;
  t = SSL_is_string(u_22);
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, v_22);
  s_3 = t;
  t = SSLsetAnnotations(s_3, c_23);
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(x_22, z_22, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm s_23 = NULL,u_23 = NULL,w_23 = NULL;
  s_23 = t;
  if(match_cons(t, sym__2))
    {
      u_23 = ATgetArgument(t, 0);
      w_23 = ATgetArgument(t, 1);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_24(s_23, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_24(u_23, w_23, s_23, t);
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  t = d_24(u_23, w_23, s_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_24(s_23, t);
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = NULL;
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_24, term_g_20);
      t = s_6(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = debug_1_0(t_1, t);
      _fail(t);
    }
  f_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(g_24, t);
  e_24 = t;
  t = f_24;
  t = fclose_0_0(t);
  t = e_24;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_h_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24 = NULL,o_24 = NULL;
      n_24 = t;
      t = (ATerm) ATinsert(ATempty, term_o_20);
      o_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_24, (ATerm) ATinsert(ATempty, term_o_20));
      t = p_6(n_24, o_24, t);
      LocalPopChoice(n_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_20;
      {
        ATerm p_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = t;
            if((PushChoice() == 0))
              {
                ATerm u_24 = NULL,v_24 = NULL;
                u_24 = t;
                t = (ATerm) ATinsert(ATempty, term_e_9);
                v_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_24, (ATerm) ATinsert(ATempty, term_e_9));
                t = p_6(u_24, v_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_20;
              }
            t = debug_1_0(v_1, t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = p_20;
            t = debug_1_0(y_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
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
static ATerm g_2 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,u_25 = NULL;
  q_25 = t;
  t = term_d_17;
  r_25 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  u_25 = t;
  t = SSL_printnl(r_25, u_25);
  t = q_25;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,b_26 = NULL;
  if(match_cons(t, sym__3))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
      b_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(x_25, y_25, b_26, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,f_26 = NULL;
  c_26 = t;
  t = term_d_17;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  f_26 = t;
  t = SSL_printnl(d_26, f_26);
  t = c_26;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  t = term_d_17;
  h_26 = t;
  t = (ATerm) ATinsert(ATempty, term_x_20);
  i_26 = t;
  t = SSL_printnl(h_26, i_26);
  t = g_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,m_25 = NULL,n_25 = NULL;
  y_24 = t;
  t = if_verbose5_1_0(z_1, t);
  {
    ATerm z_20 = t;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL,p_25 = NULL;
        t = term_a_21;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Imported_1, y_24));
        t = d_7(o_25, p_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_20;
      }
  }
  a_25 = t;
  t = term_a_21;
  j_25 = t;
  t = term_b_21;
  m_25 = t;
  t = (ATerm) ATinsert(ATempty, y_24);
  n_25 = t;
  t = SSL_table_put(j_25, m_25, n_25);
  t = a_25;
  t = if_verbose4_1_0(d_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(g_2, t);
  z_24 = t;
  t = term_a_21;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, z_24);
  t = n_6(h_2, i_25, z_24, t);
  t = if_verbose6_1_0(i_2, t);
  t = term_a_21;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, y_24);
  g_25 = t;
  t = (ATerm) ATempty;
  h_25 = t;
  t = SSL_table_put(f_25, g_25, h_25);
  t = (ATerm) ATmakeAppl(sym__3, term_a_21, (ATerm)ATmakeAppl(sym_Imported_1, y_24), (ATerm) ATempty);
  t = if_verbose4_1_0(m_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_77 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_26;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL,k_9 = NULL,l_9 = NULL,z_4 = NULL;
            t = SSLgetAnnotations(w_26);
            h_9 = t;
            t = x_26;
            t = j_77(t);
            k_9 = t;
            t = y_26;
            t = filter_1_0(j_77, t);
            l_9 = t;
            t = (ATerm) ATinsert(CheckATermList(l_9), k_9);
            z_4 = t;
            t = SSLsetAnnotations(z_4, h_9);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = y_26;
            t = filter_1_0(j_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm s_67 (ATerm), ATerm t_67 (ATerm), ATerm t)
{
  static ATerm b_27 (ATerm t)
  {
    ATerm e_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_67(t);
        t = b_27(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = e_21;
        t = t_67(t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_21;
      t = get_config_0_0(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm l_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_27 = NULL;
            t = term_o_21;
            c_27 = t;
            t = SSL_getenv(c_27);
            LocalPopChoice(n_21);
          }
        else
          {
            t = l_21;
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
  t = term_r_21;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  t = term_a_21;
  j_27 = t;
  t = term_s_21;
  k_27 = t;
  t = term_u_21;
  t = d_7(j_27, k_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_21;
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
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
  ATerm e_27 = NULL;
  t = if_verbose5_1_0(n_2, t);
  e_27 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL,g_27 = NULL;
        t = term_a_21;
        f_27 = t;
        t = term_b_21;
        g_27 = t;
        t = term_b_22;
        t = d_7(f_27, g_27, t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          ATerm i_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_27 = t;
          t = repeat_2_0(r_2, _id, t);
          t = i_27;
        }
      }
  }
  t = e_27;
  t = if_verbose5_1_0(s_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm x_28 (ATerm p_27, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t = term_a_21;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_27);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, p_27));
  t = d_7(u_27, v_27, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_22 = ATgetFirst((ATermList) t);
      if(match_cons(d_22, sym__2))
        {
          ATerm h_22 = ATgetArgument(d_22, 0);
          t_27 = ATgetArgument(d_22, 1);
        }
      else
        _fail(t);
      {
        ATerm g_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_27;
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
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_27 = NULL,y_27 = NULL,z_27 = NULL;
      t = if_verbose5_1_0(v_2, t);
      t = xtc_load_0_0(t);
      z_27 = t;
      if(match_cons(t, sym__2))
        {
          w_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_28 = NULL,e_28 = NULL,f_28 = NULL;
                t = term_a_21;
                e_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_27);
                f_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATmakeAppl(sym_Tool_1, w_27));
                t = d_7(e_28, f_28, t);
                {
                  static ATerm b_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_27 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(b_3, t);
                }
                t = not_null(c_28);
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
                t = x_28(z_27, t);
              }
          }
        }
      else
        {
          t = x_28(z_27, t);
        }
      t = if_verbose5_1_0(d_3, t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm q_28 = NULL,y_9 = NULL,a_10 = NULL;
        q_28 = t;
        t = term_d_17;
        y_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_23), q_28), term_y_22);
        a_10 = t;
        t = SSL_printnl(y_9, a_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_23), q_28), term_y_22);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,f_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL;
        t = d_30;
        t = o_0(t);
        l_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, f_30, l_10);
        t = x_6(f_30, l_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_30);
        LocalPopChoice(d_23);
      }
    else
      {
        t = b_23;
        {
          ATerm e_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_10 = NULL;
              t = d_30;
              t = o_0(t);
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
                            if((f_30 != t))
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
              t = (ATerm) ATmakeAppl(sym__2, f_30, u_10);
              t = x_6(f_30, u_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_30);
              LocalPopChoice(f_23);
            }
          else
            {
              t = e_23;
              t = d_30;
              t = o_0(t);
              if((f_30 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_30);
            }
        }
      }
  }
  return(t);
}
static ATerm y_6 (ATerm r_30, ATerm s_30, ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  v_30 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
        t = d_7(r_30, s_30, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_23 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_23);
        t = SSL_table_put(r_30, s_30, u_30);
        t = (ATerm) ATmakeAppl(sym__3, r_30, s_30, u_30);
      }
    else
      {
        t = h_23;
        t = SSL_table_remove(r_30, s_30);
        t = (ATerm) ATmakeAppl(sym__2, r_30, s_30);
      }
  }
  t = v_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  z_30 = t;
  t = a_78(t);
  y_30 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_31 = NULL;
        t = term_y_17;
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, term_y_17);
        t = d_7(y_30, b_31, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_y_17;
  a_31 = t;
  t = SSL_table_put(y_30, a_31, w_30);
  t = x_30;
  {
    static ATerm l_3 (ATerm t)
    {
      ATerm c_31 = NULL;
      c_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, c_31);
      t = y_6(y_30, c_31, t);
      return(t);
    }
    t = map_1_0(l_3, t);
  }
  t = z_30;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_78(t);
      t = w_78(t);
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = w_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,y_31 = NULL;
  o_31 = t;
  t = z_77(t);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_31, term_y_17);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_17;
        c_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_y_17);
        t = d_7(i_31, c_32, t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
  }
  p_31 = t;
  t = term_y_17;
  q_31 = t;
  t = (ATerm) ATinsert(CheckATermList(p_31), (ATerm) ATempty);
  y_31 = t;
  t = SSL_table_put(i_31, q_31, y_31);
  t = o_31;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_z_17;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  {
    ATerm v_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_33);
        LocalPopChoice(x_23);
      }
    else
      {
        t = v_23;
        t = a_33;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm h_32 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm i_32 = NULL;
    i_32 = t;
    {
      ATerm y_23 = t;
      int z_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_32 = NULL,q_32 = NULL;
          t = term_z_17;
          l_32 = t;
          t = term_y_17;
          q_32 = t;
          t = term_b_24;
          t = d_7(l_32, q_32, t);
          LocalPopChoice(z_23);
        }
      else
        {
          t = y_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((h_32 != NULL) && (h_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          h_32 = ATgetFirst((ATermList) t);
        {
          ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = h_32;
    t = map_1_0(u_3, t);
    t = i_32;
    t = end_scope_1_0(v_3, t);
    return(t);
  }
  t = begin_scope_1_0(n_3, t);
  t = restore_always_2_0(v_81, o_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_18;
      t = get_config_0_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = term_r_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  static ATerm w_3 (ATerm t)
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL;
        t = term_f_18;
        t = get_config_0_0(t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_33);
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        t = term_b_9;
      }
    t = w_81(t);
    t = copy_to_1_0(y_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(w_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_33 = NULL,k_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
  g_33 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  k_33 = t;
  t = term_d_17;
  p_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), k_33), term_w_24);
  q_33 = t;
  t = SSL_printnl(p_33, q_33);
  t = term_a_9;
  o_33 = t;
  t = SSL_exit(o_33);
  t = g_33;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  if(match_string(t, "-k"))
    {
      t = s_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_33;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_33 = NULL,w_33 = NULL,x_33 = NULL;
  t_33 = t;
  t = SSL_string_to_int(t_33);
  w_33 = t;
  t = term_b_25;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, w_33);
  t = g_7(x_33, w_33, t);
  t = t_33;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, b_4, c_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  if(match_string(t, "-S"))
    {
      t = z_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_33;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  t = term_u_8;
  a_34 = t;
  t = term_d_25;
  b_34 = t;
  t = term_e_25;
  t = g_7(a_34, b_34, t);
  t = term_k_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm c_34 = NULL,h_34 = NULL,i_34 = NULL;
  c_34 = t;
  t = SSL_string_to_int(c_34);
  h_34 = t;
  t = term_u_8;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, h_34);
  t = g_7(i_34, h_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_34);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  t = term_t_25;
  j_34 = t;
  t = term_d_18;
  k_34 = t;
  t = term_v_25;
  t = g_7(j_34, k_34, t);
  t = term_w_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, f_4, t);
      LocalPopChoice(e_26);
    }
  else
    {
      t = a_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_4, j_4, k_4, t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = Option_3_0(o_4, r_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm g_7 (ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm l_34 = NULL;
  t = term_l_26;
  l_34 = t;
  t = SSL_table_put(l_34, m_32, n_32);
  t = (ATerm) ATmakeAppl(sym__3, term_l_26, m_32, n_32);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_34 = NULL,r_34 = NULL,v_34 = NULL;
      t = term_d_18;
      t = e_0(t);
      q_34 = t;
      t = term_m_26;
      r_34 = t;
      t = term_n_26;
      v_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, q_34);
      t = e_7(r_34, v_34, q_34, t);
      _fail(t);
    }
  else
    {
      ATerm y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_34 = ATgetFirst((ATermList) t);
          p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_34;
      t = c_0(t);
      t = term_d_18;
      t = d_0(t);
      y_34 = t;
      t = (ATerm) ATinsert(CheckATermList(p_34), y_34);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  if(match_string(t, "-o"))
    {
      t = h_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_35;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_e_18;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, i_35);
  t = g_7(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_35);
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
static ATerm e_7 (ATerm m_30, ATerm n_30, ATerm l_30, ATerm t)
{
  ATerm m_35 = NULL,q_35 = NULL,r_35 = NULL;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
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
        t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
        t = d_7(m_30, n_30, t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
  }
  q_35 = t;
  t = (ATerm) ATinsert(CheckATermList(q_35), l_30);
  r_35 = t;
  t = SSL_table_put(m_30, n_30, r_35);
  t = m_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
      t = term_d_18;
      t = n_0(t);
      k_36 = t;
      t = term_m_26;
      l_36 = t;
      t = term_n_26;
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_26, term_n_26, k_36);
      t = e_7(l_36, m_36, k_36, t);
      _fail(t);
    }
  else
    {
      ATerm q_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      t = k_0(t);
      t = d_36;
      t = l_0(t);
      q_36 = t;
      t = (ATerm) ATinsert(CheckATermList(e_36), q_36);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  if(match_string(t, "-i"))
    {
      t = s_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_36 = NULL,v_36 = NULL;
  t_36 = t;
  t = term_f_18;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, t_36);
  t = g_7(v_36, t_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_36);
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
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_18;
  t = whoami_0_0(t);
  w_36 = t;
  t = term_d_17;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_26), w_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = term_a_9;
  x_36 = t;
  t = SSL_exit(x_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_28, i_28);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = SSL_addr(h_28, i_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_37;
      t = f_76(t);
    }
  else
    {
      ATerm g_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_37 = ATgetFirst((ATermList) t);
          d_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_37;
      t = foldr_2_0(f_76, g_76, t);
      g_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_37, g_37);
      t = g_76(t);
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
  t = term_d_25;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      q_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(p_11, q_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_37 = NULL,d_11 = NULL,g_11 = NULL;
  t = times_0_0(t);
  g_11 = t;
  t = SSL_explode_term(g_11);
  if(match_cons(t, sym__2))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  t = foldr_2_0(d_5, f_5, t);
  j_37 = t;
  t = SSL_TicksToSeconds(j_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_37;
        if((v_37 != t))
          {
            _fail(t);
          }
        t = u_37;
        LocalPopChoice(l_27);
      }
    else
      {
        t = h_27;
        t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
        {
          ATerm m_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_37, w_37);
              LocalPopChoice(n_27);
            }
          else
            {
              t = m_27;
              t = SSL_gtr(v_37, w_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  {
    ATerm o_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_38 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        c_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_38, term_a_9);
        t = geq_0_0(t);
        t = a_38;
        t = h_79(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = o_27;
        t = a_38;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL;
  t = run_time_0_0(t);
  e_38 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  f_38 = t;
  t = term_d_17;
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), e_38), term_m_9), f_38);
  i_38 = t;
  t = SSL_printnl(h_38, i_38);
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), e_38), term_m_9), f_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_25;
  j_38 = t;
  t = SSL_exit(j_38);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_38 = ATgetArgument(t, 0);
          {
            ATerm q_12 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(s_38);
            q_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_38);
            e_5 = t;
            t = SSLsetAnnotations(e_5, q_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_28;
      t = get_config_0_0(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = s_27;
      t = fetch_1_0(i_5, t);
    }
  t = l_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_38 = ATgetFirst((ATermList) t);
      w_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_39 = NULL,b_39 = NULL;
        static ATerm j_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_39)), not_null(b_39));
          return(t);
        }
        t = w_38;
        t = i_0(t);
        if(((a_39 != NULL) && (a_39 != t)))
          _fail(t);
        else
          a_39 = t;
        t = v_38;
        t = g_0(t);
        if(((b_39 != NULL) && (b_39 != t)))
          _fail(t);
        else
          b_39 = t;
        t = w_38;
        t = reverse_acc_2_0(g_0, j_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,h_5 = NULL;
  h_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_39);
  f_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_39);
  h_5 = t;
  t = SSLsetAnnotations(h_5, f_39);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_39), term_b_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  ATerm d_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_26;
      t = get_config_0_0(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = d_28;
      t = fetch_1_0(n_5, t);
    }
  t = term_j_28;
  t = echo_0_0(t);
  t = term_m_26;
  d_39 = t;
  t = term_n_26;
  e_39 = t;
  t = term_k_28;
  t = d_7(d_39, e_39, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm g_40 (ATerm t)
  {
    ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
    d_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_40 = ATgetFirst((ATermList) t);
        f_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_28 = t;
      int m_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_13 = NULL,l_13 = NULL,k_5 = NULL;
          t = SSLgetAnnotations(d_40);
          h_13 = t;
          t = e_40;
          t = x_69(t);
          l_13 = t;
          t = (ATerm) ATinsert(CheckATermList(f_40), l_13);
          k_5 = t;
          t = SSLsetAnnotations(k_5, h_13);
          LocalPopChoice(m_28);
        }
      else
        {
          t = l_28;
          {
            ATerm d_14 = NULL,j_14 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(d_40);
            d_14 = t;
            t = f_40;
            t = g_40(t);
            j_14 = t;
            t = (ATerm) ATinsert(CheckATermList(j_14), e_40);
            l_5 = t;
            t = SSLsetAnnotations(l_5, d_14);
          }
        }
    }
    return(t);
  }
  t = g_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
  k_40 = t;
  {
    ATerm p_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_28 = ATgetFirst((ATermList) t);
                ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_40;
          }
        LocalPopChoice(r_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATinsert(ATempty, k_40);
      }
  }
  l_40 = t;
  t = term_r_24;
  m_40 = t;
  t = SSL_printnl(m_40, l_40);
  t = k_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm m_49, ATerm n_49, ATerm t)
{
  t = SSL_strcat(m_49, n_49);
  return(t);
}
ATerm debug_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL;
  q_40 = t;
  t = v_64(t);
  r_40 = t;
  t = term_d_17;
  s_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_40), r_40);
  t_40 = t;
  t = SSL_printnl(s_40, t_40);
  t = q_40;
  return(t);
}
ATerm map_1_0 (ATerm n_69 (ATerm), ATerm t)
{
  static ATerm i_41 (ATerm t)
  {
    ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
    f_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_41;
      }
    else
      {
        ATerm u_14 = NULL,c_15 = NULL,d_15 = NULL,q_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_41 = ATgetFirst((ATermList) t);
            h_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_41);
        u_14 = t;
        t = g_41;
        t = n_69(t);
        c_15 = t;
        t = h_41;
        t = i_41(t);
        d_15 = t;
        t = (ATerm) ATinsert(CheckATermList(d_15), c_15);
        q_9 = t;
        t = SSLsetAnnotations(q_9, u_14);
      }
    return(t);
  }
  t = i_41(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_41 = NULL;
      q_41 = t;
      t = SSL_is_string(q_41);
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
              ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
              w_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_41 = ATgetArgument(t, 0);
                  t = x_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_41 = ATgetArgument(t, 0);
                      t = x_41;
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
                      ATerm c_42 = NULL,d_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_41 = ATgetArgument(t, 0);
                          y_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_41;
                      t = eval_config_0_0(t);
                      c_42 = t;
                      t = y_41;
                      t = eval_config_0_0(t);
                      d_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_42, d_42);
                      t = c_7(c_42, d_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_table_get(d_32, e_32);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  h_42 = t;
  t = term_l_26;
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_26, h_42);
  t = d_7(i_42, h_42, t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL,k_42 = NULL;
        t = eval_config_0_0(t);
        j_42 = t;
        t = term_l_26;
        k_42 = t;
        t = SSL_table_put(k_42, h_42, j_42);
        t = j_42;
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
  ATerm n_42 = NULL,o_42 = NULL;
  t = term_g_29;
  n_42 = t;
  t = term_d_18;
  o_42 = t;
  t = term_h_29;
  t = g_7(n_42, o_42, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  t = term_g_29;
  r_42 = t;
  t = term_d_18;
  s_42 = t;
  t = term_h_29;
  t = g_7(r_42, s_42, t);
  t = term_j_29;
  p_42 = t;
  t = term_d_18;
  q_42 = t;
  t = term_k_29;
  t = g_7(p_42, q_42, t);
  t = term_l_29;
  return(t);
}
static ATerm h_6 (ATerm t)
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
      t = Option_3_0(d_6, e_6, h_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_56 (ATerm), ATerm o_56 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,s_9 = NULL;
  y_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_42 = ATgetFirst((ATermList) t);
      v_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_42);
  t_42 = t;
  t = u_42;
  t = n_56(t);
  w_42 = t;
  t = v_42;
  t = o_56(t);
  x_42 = t;
  t = (ATerm) ATinsert(CheckATermList(x_42), w_42);
  s_9 = t;
  t = SSLsetAnnotations(s_9, t_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,i_43 = NULL,j_43 = NULL,x_9 = NULL;
  d_43 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_29;
        t = j_85(t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
      }
  }
  t = d_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_43 = ATgetFirst((ATermList) t);
      g_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_43);
  e_43 = t;
  t = term_v_26;
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, f_43);
  t = g_7(j_43, f_43, t);
  t = g_43;
  {
    static ATerm t_43 (ATerm t)
    {
      ATerm s_29 = t;
      int u_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_29 = t;
          int x_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_43 = NULL;
              m_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_43;
              LocalPopChoice(x_29);
            }
          else
            {
              t = w_29;
              t = j_85(t);
              t = Cons_2_0(_id, t_43, t);
            }
          LocalPopChoice(u_29);
        }
      else
        {
          t = s_29;
          {
            ATerm p_43 = NULL,q_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_43 = ATgetFirst((ATermList) t);
                q_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_43), (ATerm) ATmakeAppl(sym_Undefined_1, p_43));
          }
        }
      return(t);
    }
    t = t_43(t);
  }
  i_43 = t;
  t = (ATerm) ATinsert(CheckATermList(i_43), (ATerm) ATmakeAppl(sym_Program_1, f_43));
  x_9 = t;
  t = SSLsetAnnotations(x_9, e_43);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  if(match_string(t, "--help"))
    {
      t = f_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_44;
        }
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL;
  t = term_a_28;
  g_44 = t;
  t = term_d_18;
  h_44 = t;
  t = term_y_29;
  t = g_7(g_44, h_44, t);
  t = term_z_29;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_85 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  a_44 = t;
  t = term_m_26;
  c_44 = t;
  t = term_n_26;
  d_44 = t;
  t = (ATerm) ATempty;
  e_44 = t;
  t = SSL_table_put(c_44, d_44, e_44);
  t = a_44;
  {
    static ATerm j_6 (ATerm t)
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_85(t);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          {
            ATerm e_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_7, h_7, i_7, t);
                LocalPopChoice(g_30);
              }
            else
              {
                t = e_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_6, t);
  }
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_44 = NULL;
        o_44 = t;
        {
          ATerm j_30 = t;
          int k_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_16 = NULL;
              t = o_44;
              {
                ATerm o_30 = t;
                int p_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_a_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_30);
                  }
                else
                  {
                    t = o_30;
                    t = fetch_1_0(j_7, t);
                  }
              }
              t = o_44;
              t = default_system_usage_0_0(t);
              t = term_d_25;
              f_16 = t;
              t = SSL_exit(f_16);
              LocalPopChoice(k_30);
            }
          else
            {
              t = j_30;
              {
                ATerm s_16 = NULL;
                t = term_g_29;
                t = get_config_0_0(t);
                t = o_44;
                t = default_system_about_0_0(t);
                t = term_d_25;
                s_16 = t;
                t = SSL_exit(s_16);
              }
            }
        }
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        {
          ATerm q_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
              static ATerm l_7 (ATerm t)
              {
                ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,e_10 = NULL;
                u_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_44);
                s_44 = t;
                t = t_44;
                if(((y_43 != NULL) && (y_43 != t)))
                  _fail(t);
                else
                  y_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_44);
                e_10 = t;
                t = SSLsetAnnotations(e_10, s_44);
                return(t);
              }
              t = fetch_1_0(l_7, t);
              t = term_d_17;
              q_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_d_31);
              r_44 = t;
              t = SSL_printnl(q_44, r_44);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_d_31));
              t = default_system_usage_0_0(t);
              t = term_a_9;
              p_44 = t;
              t = SSL_exit(p_44);
              LocalPopChoice(t_30);
            }
          else
            {
              t = q_30;
            }
        }
      }
  }
  z_43 = t;
  t = term_m_26;
  b_44 = t;
  t = SSL_table_destroy(b_44);
  t = z_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  t = parse_options_1_0(n_83, t);
  z_44 = t;
  t = term_e_31;
  c_45 = t;
  t = SSL_table_create(c_45);
  t = term_e_31;
  a_45 = t;
  t = term_f_31;
  b_45 = t;
  t = SSL_table_put(a_45, b_45, z_44);
  t = z_44;
  t = p_83(t);
  {
    ATerm g_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_83, t);
        LocalPopChoice(h_31);
      }
    else
      {
        t = g_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_83(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm r_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = r_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm x_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_7, r_7, t_7, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = x_31;
                  {
                    ATerm a_32 = t;
                    int b_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(b_32);
                      }
                    else
                      {
                        t = a_32;
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
static ATerm o_7 (ATerm t)
{
  t = xtc_io_1_0(u_7, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  t = term_f_32;
  k_45 = t;
  t = term_d_18;
  l_45 = t;
  t = term_g_32;
  t = g_7(k_45, l_45, t);
  t = term_j_32;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_45 = NULL,t_45 = NULL;
      t_45 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_45 = ATgetArgument(t, 0);
          {
            ATerm a_17 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(t_45);
            a_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_45);
            h_10 = t;
            t = SSLsetAnnotations(h_10, a_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_45;
        }
      LocalPopChoice(p_32);
      t = xtc_transform_file_2_0(v_7, a_8, t);
    }
  else
    {
      t = o_32;
      t = xtc_transform_term_2_0(b_8, l_8, t);
    }
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_46 = NULL,c_46 = NULL;
        c_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_46 = ATgetArgument(t, 0);
            {
              ATerm i_17 = NULL,r_10 = NULL;
              t = SSLgetAnnotations(c_46);
              i_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_46);
              r_10 = t;
              t = SSLsetAnnotations(r_10, i_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_46;
          }
        LocalPopChoice(s_32);
        t = xtc_transform_file_2_0(m_8, pass_verbose_0_0, t);
      }
    else
      {
        t = r_32;
        t = xtc_transform_term_2_0(o_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL,j_46 = NULL;
        j_46 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_46 = ATgetArgument(t, 0);
            {
              ATerm u_17 = NULL,s_10 = NULL;
              t = SSLgetAnnotations(j_46);
              u_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_46);
              s_10 = t;
              t = SSLsetAnnotations(s_10, u_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_46;
          }
        LocalPopChoice(u_32);
        t = xtc_transform_file_2_0(p_8, pass_verbose_0_0, t);
      }
    else
      {
        t = t_32;
        t = xtc_transform_term_2_0(r_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm u_45 = NULL;
  t = term_w_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  u_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_45), term_x_32);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm v_45 = NULL;
  t = term_w_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  v_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_45), term_x_32);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_7, default_usage_0_0, _id, o_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
