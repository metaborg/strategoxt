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
ATerm term_r_32;
ATerm term_q_32;
ATerm term_m_32;
ATerm term_g_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_q_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_i_27;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_c_24;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_e_22;
ATerm term_b_22;
ATerm term_x_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_a_19;
ATerm term_t_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_n_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
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
ATerm term_r_14;
ATerm term_q_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
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
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
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
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_h_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_n_8, term_k_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_y_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_q_10, term_r_10);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_10, term_u_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_a_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_11, term_k_11);
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
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_u_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_l_12, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_p_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_b_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_q_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_v_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_x_21);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_h_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_n_16);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_h_8, term_t_24);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_24);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_l_25, term_s_17);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_a_26);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_s_17);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_s_17);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_u_27, term_s_17);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_s_17);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.tbl", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm x_5 (ATerm g_33, ATerm h_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_6 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm h_6 (ATerm t_64 (ATerm), ATerm v_163, ATerm t_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t);
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm i_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm d_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_7 (ATerm q_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm k_6 (ATerm j_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t);
static ATerm q_8 (ATerm z_7, ATerm t);
static ATerm s_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm t);
static ATerm y_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm p_80 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm r_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm q_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm s_80 (ATerm), ATerm t);
static ATerm z_5 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm a_6 (ATerm n_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm b_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t);
static ATerm c_6 (ATerm u_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t);
static ATerm l_6 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm o_15 (ATerm f_15, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm r_17, ATerm t);
static ATerm f_6 (ATerm v_38, ATerm w_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_17 (ATerm g_16, ATerm t);
static ATerm p_17 (ATerm o_16, ATerm q_16, ATerm r_16, ATerm t);
static ATerm q_17 (ATerm z_16, ATerm a_17, ATerm b_17, ATerm t);
static ATerm g_6 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm q_22 (ATerm p_21, ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm a_95 (ATerm), ATerm t);
static ATerm m_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm k_35, ATerm l_35, ATerm t);
ATerm end_scope_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_79 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_82 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm q_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_6 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_6 (ATerm a_33, ATerm b_33, ATerm t);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_80 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm need_help_1_0 (ATerm r_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_6 (ATerm v_31, ATerm w_31, ATerm t);
ATerm debug_1_0 (ATerm r_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm s_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_86 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm w_4 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_33, h_33);
      LocalPopChoice(g_8);
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
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,q_0 = NULL;
  t = term_h_8;
  {
    ATerm i_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = i_8;
        t = term_n_8;
      }
  }
  b_0 = t;
  t = term_n_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_n_8);
  t = x_5(b_0, q_0, t);
  j_0 = t;
  t = SSL_int_to_string(j_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_h_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_8;
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
      t = (ATerm) ATinsert(ATempty, term_r_8);
      d_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_r_8));
      t = l_6(w_0, d_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm e_1 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_1);
  return(t);
}
static ATerm h_6 (ATerm t_64 (ATerm), ATerm v_163, ATerm t_17, ATerm t)
{
  ATerm f_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_163, term_t_8);
  t = g_6(t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, t_17);
  t = t_64(t);
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          i_1 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      k_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(i_1, k_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, g_1);
  t = h_6(f_0, h_1, g_1, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_83, n_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm i_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(v_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_8), s_0), term_v_8);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm n_1 = NULL,o_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_2 = ATgetArgument(t, 0);
          w_2 = ATgetArgument(t, 1);
          x_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_2);
      n_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_c_9), n_1), term_x_8), v_2);
      o_1 = t;
      t = SSL_concat_strings(o_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm a_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = v_69(t);
    if(((a_3 != NULL) && (a_3 != t)))
      _fail(t);
    else
      a_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(a_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm e_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if((b_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_15), term_e_15), term_a_15), term_w_14), term_r_14), term_i_14), term_y_13), term_q_13), term_l_13), term_h_13), term_d_13), term_z_12), term_t_12), term_o_12), term_i_12), term_d_12), term_x_11), term_q_11), term_l_11), term_c_11), term_w_10), term_s_10), term_l_10), term_h_10), term_d_10), term_z_9), term_v_9), term_l_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = e_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm k_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_15 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm q_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_15);
        {
          ATerm t_15 = t;
          int v_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm x_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_15;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_y_15;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_z_15);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_z_15));
              LocalPopChoice(v_15);
            }
          else
            {
              t = t_15;
              t = k_3;
            }
        }
      }
    else
      {
        t = k_15;
        t = k_3;
      }
  }
  t = k_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  d_4 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = i_63(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = SSL_waitpid(d_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_16 = ATgetArgument(t, 0);
            if(((ATgetType(c_16) != AT_INT) || (ATgetInt((ATermInt) c_16) != 0)))
              _fail(t);
            {
              ATerm d_16 = ATgetArgument(t, 1);
            }
            {
              ATerm e_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = d_83(t);
  t = xtc_find_0_0(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm m_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_4, h_4);
      t = i_6(g_4, h_4, t);
      t = term_f_16;
      m_4 = t;
      t = SSL_exit(m_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = h_4;
  return(t);
}
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  static ATerm n_5 (ATerm t)
  {
    ATerm j_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_2 = NULL,r_2 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(m_5);
          i_2 = t;
          t = l_5;
          t = n_5(t);
          r_2 = t;
          t = (ATerm) ATinsert(CheckATermList(r_2), j_5);
          z_1 = t;
          t = SSLsetAnnotations(z_1, i_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_5;
        t = z_69(t);
      }
    return(t);
  }
  t = n_5(t);
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
      static ATerm v_0 (ATerm t)
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
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm h_7 (ATerm q_6, ATerm t)
{
  ATerm u_6 = NULL;
  t = SSL_explode_term(q_6);
  if(match_cons(t, sym__2))
    {
      ATerm h_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = a_7;
              return(t);
            }
            t = z_6;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            t = h_7(b_7, t);
          }
      }
    }
  else
    {
      t = h_7(b_7, t);
    }
  return(t);
}
static ATerm k_6 (ATerm j_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t)
{
  ATerm i_7 = NULL,m_7 = NULL,n_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  t = j_79(t);
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_7, o_34, m_34);
  t = t_6(i_7, o_34, m_34, t);
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL;
        t = term_n_16;
        s_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_n_16);
        t = s_6(i_7, s_7, t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_7 = ATgetFirst((ATermList) t);
      n_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_16;
  q_7 = t;
  t = (ATerm) ATinsert(CheckATermList(n_7), (ATerm) ATinsert(CheckATermList(m_7), o_34));
  r_7 = t;
  t = SSL_table_put(i_7, q_7, r_7);
  t = p_7;
  return(t);
}
static ATerm q_8 (ATerm z_7, ATerm t)
{
  t = z_7;
  {
    ATerm p_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            ATerm w_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_16;
      }
  }
  t = term_y_16;
  t = debug_1_0(y_0, t);
  t = (ATerm) ATmakeAppl(sym__2, z_7, term_t_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm s_8 (ATerm b_8, ATerm c_8, ATerm d_8, ATerm t)
{
  t = SSL_open_file(b_8, c_8);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
  j_8 = t;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      l_8 = ATgetArgument(t, 1);
      {
        ATerm g_17 = t;
        int i_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_8(j_8, t);
            LocalPopChoice(i_17);
          }
        else
          {
            t = g_17;
            t = s_8(k_8, l_8, j_8, t);
          }
      }
    }
  else
    {
      t = q_8(j_8, t);
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = term_s_17;
  t = new_0_0(t);
  z_8 = t;
  t = term_y_17;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, term_y_17);
  t = r_6(z_8, a_9, t);
  b_9 = t;
  {
    ATerm a_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_r_8);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATempty, term_r_8));
        t = l_6(b_9, f_9, t);
        t = new_file_0_0(t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = a_18;
        t = b_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = new_file_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_t_8);
  t = open_file_0_0(t);
  t = term_s_17;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_s_17);
  t = k_6(z_0, s_9, t_9, t);
  t = s_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,i_3 = NULL;
      t = n_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = r_0(t);
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_m_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm z_3 = NULL,b_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_10;
      t = xtc_new_file_0_0(t);
      z_3 = t;
      t = r_0(t);
      b_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_m_18), p_10), term_t_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(z_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_3);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm b_11 = NULL;
  b_11 = t;
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_11, term_x_9);
        t = geq_0_0(t);
        t = b_11;
        t = p_80(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = w_18;
        t = b_11;
      }
  }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(a_1, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL;
    i_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), i_11);
    t = s_6(not_null(f_11), i_11, t);
    j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_11, j_11);
    return(t);
  }
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSL_table_keys(f_11);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_u_14);
        t = geq_0_0(t);
        t = m_11;
        t = r_80(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = m_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm w_11 = NULL;
  w_11 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_12, term_s_11);
        t = geq_0_0(t);
        t = w_11;
        t = q_80(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = w_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm g_12 = NULL;
  g_12 = t;
  {
    ATerm h_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        k_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, term_b_10);
        t = geq_0_0(t);
        t = g_12;
        t = s_80(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = h_19;
        t = g_12;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  t = r_73(t);
  {
    static ATerm c_1 (ATerm t)
    {
      ATerm m_12 = NULL;
      m_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, m_12);
      t = q_73(t);
      return(t);
    }
    t = fetch_1_0(c_1, t);
  }
  t = n_24;
  return(t);
}
static ATerm a_6 (ATerm n_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm x_13 (ATerm t)
  {
    ATerm o_13 = NULL,r_13 = NULL,s_13 = NULL;
    o_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_13 = ATgetFirst((ATermList) t);
            s_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_19 = t;
          int o_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_13;
              {
                static ATerm j_1 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = z_5(n_73, j_1, r_13, s_13, t);
              }
              t = x_13(t);
              LocalPopChoice(o_19);
            }
          else
            {
              t = n_19;
              {
                ATerm n_4 = NULL,v_4 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(o_13);
                n_4 = t;
                t = s_13;
                t = x_13(t);
                v_4 = t;
                t = (ATerm) ATinsert(CheckATermList(v_4), r_13);
                c_2 = t;
                t = SSLsetAnnotations(c_2, n_4);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = x_13(t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm n_14 = NULL;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      if((n_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm a_14 = NULL,d_14 = NULL,e_14 = NULL;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            ATerm u_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        t = s_6(c_36, d_36, t);
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
  }
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_14, e_36);
  t = a_6(l_1, e_14, e_36, t);
  d_14 = t;
  t = SSL_table_put(c_36, d_36, d_14);
  t = a_14;
  return(t);
}
static ATerm c_6 (ATerm u_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t)
{
  static ATerm m_1 (ATerm t)
  {
    ATerm o_14 = NULL,p_14 = NULL;
    if(match_cons(t, sym__2))
      {
        o_14 = ATgetArgument(t, 0);
        p_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_36, o_14, p_14);
    t = u_80(t);
    return(t);
  }
  t = l_36;
  t = map_1_0(m_1, t);
  return(t);
}
static ATerm l_6 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_access(n_38, o_38);
  return(t);
}
static ATerm o_15 (ATerm f_15, ATerm t)
{
  t = SSL_fclose(f_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  m_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_15 = ATgetArgument(t, 0);
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_15);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = o_15(m_15, t);
          }
      }
    }
  else
    {
      t = o_15(m_15, t);
    }
  return(t);
}
static ATerm d_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm f_6 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm r_15 = NULL;
  t = SSL_fopen(v_38, w_38);
  r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_15 = NULL;
  t = SSL_stdin_stream();
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_15 = NULL;
  t = SSL_stdout_stream();
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_stderr_stream();
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_15);
  return(t);
}
static ATerm o_17 (ATerm g_16, ATerm t)
{
  ATerm j_16 = NULL;
  t = SSL_explode_term(g_16);
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
          {
            j_16 = ATgetFirst((ATermList) y_19);
            {
              ATerm z_19 = (ATerm) ATgetNext((ATermList) y_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_17 (ATerm o_16, ATerm q_16, ATerm r_16, ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,x_16 = NULL,e_2 = NULL;
  t = SSLgetAnnotations(r_16);
  u_16 = t;
  t = o_16;
  if(match_cons(t, sym_Path_1))
    {
      x_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_16, q_16);
  e_2 = t;
  t = SSLsetAnnotations(e_2, u_16);
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(s_16, t_16, t);
  return(t);
}
static ATerm q_17 (ATerm z_16, ATerm a_17, ATerm b_17, ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,h_17 = NULL,f_2 = NULL;
  t = SSLgetAnnotations(b_17);
  e_17 = t;
  t = SSL_is_string(z_16);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_17, a_17);
  f_2 = t;
  t = SSLsetAnnotations(f_2, e_17);
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(c_17, d_17, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,n_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_17(j_17, t);
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm c_20 = t;
              int d_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_17(k_17, n_17, j_17, t);
                  LocalPopChoice(d_20);
                }
              else
                {
                  t = c_20;
                  t = q_17(k_17, n_17, j_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_17(j_17, t);
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL;
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_17 = NULL;
      x_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_17, term_h_20);
      t = g_6(t);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = debug_1_0(p_1, t);
      _fail(t);
    }
  v_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(w_17, t);
  u_17 = t;
  t = v_17;
  t = fclose_0_0(t);
  t = u_17;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_17 = NULL,b_18 = NULL;
      z_17 = t;
      t = (ATerm) ATinsert(ATempty, term_r_20);
      b_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_17, (ATerm) ATinsert(ATempty, term_r_20));
      t = l_6(z_17, b_18, t);
      LocalPopChoice(o_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_20;
      {
        ATerm u_20 = t;
        int w_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_20 = t;
            if((PushChoice() == 0))
              {
                ATerm c_18 = NULL,d_18 = NULL;
                c_18 = t;
                t = (ATerm) ATinsert(ATempty, term_r_8);
                d_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_18, (ATerm) ATinsert(ATempty, term_r_8));
                t = l_6(c_18, d_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_20;
              }
            t = debug_1_0(q_1, t);
            LocalPopChoice(w_20);
          }
        else
          {
            t = u_20;
            t = debug_1_0(r_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_z_20;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_y_15;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  x_18 = t;
  t = SSL_printnl(v_18, x_18);
  t = u_18;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__3))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_6(z_18, b_19, c_19, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  t = term_y_15;
  j_19 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  k_19 = t;
  t = SSL_printnl(j_19, k_19);
  t = i_19;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_19 = NULL,p_19 = NULL,t_19 = NULL;
  l_19 = t;
  t = term_y_15;
  p_19 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  t_19 = t;
  t = SSL_printnl(p_19, t_19);
  t = l_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  e_18 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm f_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_18 = NULL,s_18 = NULL;
        t = term_g_21;
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, e_18);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Imported_1, e_18));
        t = s_6(r_18, s_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_21;
      }
  }
  g_18 = t;
  t = term_g_21;
  o_18 = t;
  t = term_h_21;
  p_18 = t;
  t = (ATerm) ATinsert(ATempty, e_18);
  q_18 = t;
  t = SSL_table_put(o_18, p_18, q_18);
  t = g_18;
  t = if_verbose4_1_0(v_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(a_2, t);
  f_18 = t;
  t = term_g_21;
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, f_18);
  t = c_6(b_2, n_18, f_18, t);
  t = if_verbose6_1_0(d_2, t);
  t = term_g_21;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, e_18);
  j_18 = t;
  t = (ATerm) ATempty;
  k_18 = t;
  t = SSL_table_put(i_18, j_18, k_18);
  t = (ATerm) ATmakeAppl(sym__3, term_g_21, (ATerm)ATmakeAppl(sym_Imported_1, e_18), (ATerm) ATempty);
  t = if_verbose4_1_0(g_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_20 = ATgetFirst((ATermList) t);
          k_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_5 = NULL,x_6 = NULL,y_6 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(i_20);
            y_5 = t;
            t = j_20;
            t = f_77(t);
            x_6 = t;
            t = k_20;
            t = filter_1_0(f_77, t);
            y_6 = t;
            t = (ATerm) ATinsert(CheckATermList(y_6), x_6);
            l_2 = t;
            t = SSLsetAnnotations(l_2, y_5);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = k_20;
            t = filter_1_0(f_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t)
{
  static ATerm p_20 (ATerm t)
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_67(t);
        t = p_20(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = p_67(t);
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_21;
      t = get_config_0_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = term_u_21;
            q_20 = t;
            t = SSL_getenv(q_20);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm b_21 = NULL,d_21 = NULL;
  t = term_g_21;
  b_21 = t;
  t = term_x_21;
  d_21 = t;
  t = term_b_22;
  t = s_6(b_21, d_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = if_verbose5_1_0(h_2, t);
  s_20 = t;
  {
    ATerm f_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,v_20 = NULL;
        t = term_g_21;
        t_20 = t;
        t = term_h_21;
        v_20 = t;
        t = term_j_22;
        t = s_6(t_20, v_20, t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = f_22;
        {
          ATerm y_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_20 = t;
          t = repeat_2_0(k_2, _id, t);
          t = y_20;
        }
      }
  }
  t = s_20;
  t = if_verbose5_1_0(m_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm q_22 (ATerm p_21, ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,w_21 = NULL;
  t = term_g_21;
  t_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_21);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, p_21));
  t = s_6(t_21, w_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_22 = ATgetFirst((ATermList) t);
      if(match_cons(l_22, sym__2))
        {
          ATerm n_22 = ATgetArgument(l_22, 0);
          s_21 = ATgetArgument(l_22, 1);
        }
      else
        _fail(t);
      {
        ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_21;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_g_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      a_22 = t;
      if(match_cons(t, sym__2))
        {
          y_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          {
            ATerm t_22 = t;
            int u_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_22 = NULL,g_22 = NULL,h_22 = NULL;
                t = term_g_21;
                g_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_21);
                h_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATmakeAppl(sym_Tool_1, y_21));
                t = s_6(g_22, h_22, t);
                {
                  static ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((z_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                }
                t = not_null(d_22);
                LocalPopChoice(u_22);
              }
            else
              {
                t = t_22;
                t = q_22(a_22, t);
              }
          }
        }
      else
        {
          t = q_22(a_22, t);
        }
      t = if_verbose5_1_0(z_2, t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm p_22 = NULL,o_7 = NULL,t_7 = NULL;
        p_22 = t;
        t = term_y_15;
        o_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), p_22), term_v_22);
        t_7 = t;
        t = SSL_printnl(o_7, t_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), p_22), term_v_22);
        t = if_verbose5_1_0(d_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_x_22;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_23 = NULL,g_23 = NULL;
      g_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_23 = ATgetArgument(t, 0);
          {
            ATerm x_7 = NULL,n_2 = NULL;
            t = SSLgetAnnotations(g_23);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_23);
            n_2 = t;
            t = SSLsetAnnotations(n_2, x_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_23;
        }
      LocalPopChoice(z_22);
      {
        static ATerm g_3 (ATerm t)
        {
          ATerm h_23 = NULL,k_23 = NULL;
          t = term_s_17;
          t = a_95(t);
          t = xtc_find_0_0(t);
          h_23 = t;
          t = term_s_17;
          t = pass_v_verbose_0_0(t);
          k_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(k_23), h_23), term_b_23), term_a_23);
          return(t);
        }
        t = xtc_transform_file_2_0(f_3, g_3, t);
      }
    }
  else
    {
      t = y_22;
      {
        static ATerm m_3 (ATerm t)
        {
          ATerm m_23 = NULL,p_23 = NULL;
          t = term_s_17;
          t = a_95(t);
          t = xtc_find_0_0(t);
          m_23 = t;
          t = term_s_17;
          t = pass_v_verbose_0_0(t);
          p_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(p_23), m_23), term_b_23), term_a_23);
          return(t);
        }
        t = xtc_transform_term_2_0(j_3, m_3, t);
      }
    }
  return(t);
}
static ATerm m_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,q_24 = NULL;
  m_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_8 = NULL;
        t = m_24;
        t = o_0(t);
        p_8 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_8;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_8;
          }
        t = (ATerm) ATmakeAppl(sym__2, q_24, p_8);
        t = m_6(q_24, p_8, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_24);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm e_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_8 = NULL;
              t = m_24;
              t = o_0(t);
              y_8 = t;
              {
                ATerm j_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_9 = NULL;
                    d_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = d_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = d_9;
                          }
                        else
                          {
                            t = d_9;
                            if((q_24 != t))
                              {
                                _fail(t);
                              }
                            t = d_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_24, y_8);
              t = m_6(q_24, y_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_24);
              LocalPopChoice(i_23);
            }
          else
            {
              t = e_23;
              t = m_24;
              t = o_0(t);
              if((q_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_24);
            }
        }
      }
  }
  return(t);
}
static ATerm n_6 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  w_24 = t;
  {
    ATerm l_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
        t = s_6(k_35, l_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_23 = ATgetFirst((ATermList) t);
            v_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_23);
        t = SSL_table_put(k_35, l_35, v_24);
        t = (ATerm) ATmakeAppl(sym__3, k_35, l_35, v_24);
      }
    else
      {
        t = l_23;
        t = SSL_table_remove(k_35, l_35);
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
      }
  }
  t = w_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,c_25 = NULL;
  a_25 = t;
  t = g_79(t);
  z_24 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        t = term_n_16;
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, term_n_16);
        t = s_6(z_24, d_25, t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_24 = ATgetFirst((ATermList) t);
      x_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_16;
  c_25 = t;
  t = SSL_table_put(z_24, c_25, x_24);
  t = y_24;
  {
    static ATerm o_3 (ATerm t)
    {
      ATerm e_25 = NULL;
      e_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_24, e_25);
      t = n_6(z_24, e_25, t);
      return(t);
    }
    t = map_1_0(o_3, t);
  }
  t = a_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_80(t);
      t = c_80(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      t = c_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,m_25 = NULL;
  h_25 = t;
  t = f_79(t);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_25, term_n_16);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_23 = ATgetArgument(t, 0);
            ATerm x_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_16;
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_25, term_n_16);
        t = s_6(g_25, q_25, t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
  }
  i_25 = t;
  t = term_n_16;
  j_25 = t;
  t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATempty);
  m_25 = t;
  t = SSL_table_put(g_25, j_25, m_25);
  t = h_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_26);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = f_26;
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_l_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  static ATerm q_3 (ATerm t)
  {
    ATerm y_25 = NULL;
    y_25 = t;
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_25 = NULL,b_26 = NULL;
          t = term_l_18;
          z_25 = t;
          t = term_n_16;
          b_26 = t;
          t = term_c_24;
          t = s_6(z_25, b_26, t);
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_25 != NULL) && (w_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_25 = ATgetFirst((ATermList) t);
        {
          ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_25;
    t = map_1_0(s_3, t);
    t = y_25;
    t = end_scope_1_0(t_3, t);
    return(t);
  }
  t = begin_scope_1_0(p_3, t);
  t = restore_always_2_0(p_82, q_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_18;
      t = get_config_0_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = term_g_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm q_82 (ATerm), ATerm t)
{
  static ATerm v_3 (ATerm t)
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        t = term_t_18;
        t = get_config_0_0(t);
        o_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_26);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        t = term_o_8;
      }
    t = q_82(t);
    t = copy_to_1_0(w_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(v_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  p_26 = t;
  t = term_s_17;
  t = whoami_0_0(t);
  q_26 = t;
  t = term_y_15;
  t_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), q_26), term_l_24);
  u_26 = t;
  t = SSL_printnl(t_26, u_26);
  t = term_n_8;
  s_26 = t;
  t = SSL_exit(s_26);
  t = p_26;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-k"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm y_26 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  t = SSL_string_to_int(y_26);
  b_27 = t;
  t = term_r_24;
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, b_27);
  t = v_6(c_27, b_27, t);
  t = y_26;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  if(match_string(t, "-S"))
    {
      t = e_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_27;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  t = term_h_8;
  f_27 = t;
  t = term_t_24;
  g_27 = t;
  t = term_u_24;
  t = v_6(f_27, g_27, t);
  t = term_b_25;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_27 = NULL,j_27 = NULL,k_27 = NULL;
  h_27 = t;
  t = SSL_string_to_int(h_27);
  j_27 = t;
  t = term_h_8;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_8, j_27);
  t = v_6(k_27, j_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_27);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_k_25;
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
  ATerm l_27 = NULL,m_27 = NULL;
  t = term_l_25;
  l_27 = t;
  t = term_s_17;
  m_27 = t;
  t = term_n_25;
  t = v_6(l_27, m_27, t);
  t = term_o_25;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, f_4, i_4, t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            t = Option_3_0(o_4, s_4, t_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_6 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm n_27 = NULL;
  t = term_v_25;
  n_27 = t;
  t = SSL_table_put(n_27, f_37, g_37);
  t = (ATerm) ATmakeAppl(sym__3, term_v_25, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL;
      t = term_s_17;
      t = e_0(t);
      s_27 = t;
      t = term_x_25;
      t_27 = t;
      t = term_a_26;
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_a_26, s_27);
      t = t_6(t_27, w_27, s_27, t);
      _fail(t);
    }
  else
    {
      ATerm b_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_27 = ATgetFirst((ATermList) t);
          r_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_27;
      t = c_0(t);
      t = term_s_17;
      t = d_0(t);
      b_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_27), b_28);
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  if(match_string(t, "-o"))
    {
      t = g_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_28;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL;
  j_28 = t;
  t = term_m_18;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, j_28);
  t = v_6(m_28, j_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_28);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, x_4, y_4, t);
  return(t);
}
static ATerm t_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_26 = ATgetArgument(t, 0);
            ATerm h_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
        t = s_6(f_35, g_35, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATempty;
      }
  }
  r_28 = t;
  t = (ATerm) ATinsert(CheckATermList(r_28), e_35);
  s_28 = t;
  t = SSL_table_put(f_35, g_35, s_28);
  t = q_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
      t = term_s_17;
      t = n_0(t);
      l_29 = t;
      t = term_x_25;
      m_29 = t;
      t = term_a_26;
      n_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_25, term_a_26, l_29);
      t = t_6(m_29, n_29, l_29, t);
      _fail(t);
    }
  else
    {
      ATerm r_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          i_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_29;
      t = k_0(t);
      t = j_29;
      t = l_0(t);
      r_29 = t;
      t = (ATerm) ATinsert(CheckATermList(k_29), r_29);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm t_29 = NULL;
  t_29 = t;
  if(match_string(t, "-i"))
    {
      t = t_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_29;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  u_29 = t;
  t = term_t_18;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, u_29);
  t = v_6(v_29, u_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_29);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, c_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_17;
  t = whoami_0_0(t);
  w_29 = t;
  t = term_y_15;
  y_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_26), w_29);
  z_29 = t;
  t = SSL_printnl(y_29, z_29);
  t = term_n_8;
  x_29 = t;
  t = SSL_exit(x_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_33, b_33);
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = SSL_addr(a_33, b_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_30;
      t = b_76(t);
    }
  else
    {
      ATerm g_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_30 = ATgetFirst((ATermList) t);
          d_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_30;
      t = foldr_2_0(b_76, c_76, t);
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_30, g_30);
      t = c_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(q_9, r_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_9 = NULL,n_9 = NULL;
  t = times_0_0(t);
  n_9 = t;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      m_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_9;
  t = foldr_2_0(e_5, g_5, t);
  l_30 = t;
  t = SSL_TicksToSeconds(l_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_30;
        if((x_30 != t))
          {
            _fail(t);
          }
        t = w_30;
        LocalPopChoice(v_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
        {
          ATerm w_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_30, y_30);
              LocalPopChoice(z_26);
            }
          else
            {
              t = w_26;
              t = SSL_gtr(x_30, y_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  {
    ATerm a_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_31 = NULL;
        t = term_h_8;
        t = get_config_0_0(t);
        e_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_31, term_n_8);
        t = geq_0_0(t);
        t = c_31;
        t = n_80(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = a_27;
        t = c_31;
      }
  }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,j_31 = NULL,k_31 = NULL;
  t = run_time_0_0(t);
  g_31 = t;
  t = term_s_17;
  t = whoami_0_0(t);
  h_31 = t;
  t = term_y_15;
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_27), g_31), term_x_8), h_31);
  k_31 = t;
  t = SSL_printnl(j_31, k_31);
  t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_27), g_31), term_x_8), h_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_24;
  l_31 = t;
  t = SSL_exit(l_31);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_31 = ATgetArgument(t, 0);
          {
            ATerm o_10 = NULL,s_2 = NULL;
            t = SSLgetAnnotations(u_31);
            o_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_31);
            s_2 = t;
            t = SSLsetAnnotations(s_2, o_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_27;
      t = get_config_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      t = fetch_1_0(k_5, t);
    }
  t = r_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_31 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_32 = NULL,f_32 = NULL;
        static ATerm o_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(f_32));
          return(t);
        }
        t = a_32;
        t = i_0(t);
        if(((e_32 != NULL) && (e_32 != t)))
          _fail(t);
        else
          e_32 = t;
        t = z_31;
        t = g_0(t);
        if(((f_32 != NULL) && (f_32 != t)))
          _fail(t);
        else
          f_32 = t;
        t = a_32;
        t = reverse_acc_2_0(g_0, o_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,y_2 = NULL;
  l_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_32);
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_32);
  y_2 = t;
  t = SSLsetAnnotations(y_2, j_32);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm n_32 = NULL;
  n_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_32), term_v_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL;
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_26;
      t = get_config_0_0(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(p_5, t);
    }
  t = term_z_27;
  t = echo_0_0(t);
  t = term_x_25;
  h_32 = t;
  t = term_a_26;
  i_32 = t;
  t = term_a_28;
  t = s_6(h_32, i_32, t);
  t = reverse_acc_2_0(_id, q_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  static ATerm o_33 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
    l_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_33 = ATgetFirst((ATermList) t);
        n_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_10 = NULL,h_11 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(l_33);
          z_10 = t;
          t = m_33;
          t = t_69(t);
          h_11 = t;
          t = (ATerm) ATinsert(CheckATermList(n_33), h_11);
          l_3 = t;
          t = SSLsetAnnotations(l_3, z_10);
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          {
            ATerm v_11 = NULL,c_12 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(l_33);
            v_11 = t;
            t = n_33;
            t = o_33(t);
            c_12 = t;
            t = (ATerm) ATinsert(CheckATermList(c_12), m_33);
            n_3 = t;
            t = SSLsetAnnotations(n_3, v_11);
          }
        }
    }
    return(t);
  }
  t = o_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  {
    ATerm e_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_28 = ATgetFirst((ATermList) t);
                ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_33;
          }
        LocalPopChoice(f_28);
      }
    else
      {
        t = e_28;
        t = (ATerm) ATinsert(ATempty, s_33);
      }
  }
  t_33 = t;
  t = term_g_24;
  u_33 = t;
  t = SSL_printnl(u_33, t_33);
  t = s_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = SSL_strcat(v_31, w_31);
  return(t);
}
ATerm debug_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  y_33 = t;
  t = r_64(t);
  z_33 = t;
  t = term_y_15;
  a_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_33), z_33);
  b_34 = t;
  t = SSL_printnl(a_34, b_34);
  t = y_33;
  return(t);
}
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm t)
{
  static ATerm m_35 (ATerm t)
  {
    ATerm z_34 = NULL,h_35 = NULL,i_35 = NULL;
    z_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_34;
      }
    else
      {
        ATerm p_12 = NULL,u_12 = NULL,v_12 = NULL,r_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_35 = ATgetFirst((ATermList) t);
            i_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_34);
        p_12 = t;
        t = h_35;
        t = j_69(t);
        u_12 = t;
        t = i_35;
        t = m_35(t);
        v_12 = t;
        t = (ATerm) ATinsert(CheckATermList(v_12), u_12);
        r_3 = t;
        t = SSLsetAnnotations(r_3, p_12);
      }
    return(t);
  }
  t = m_35(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL;
      u_35 = t;
      t = SSL_is_string(u_35);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm a_36 = NULL,b_36 = NULL,h_36 = NULL;
              a_36 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_36 = ATgetArgument(t, 0);
                  t = b_36;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_36 = ATgetArgument(t, 0);
                      t = b_36;
                      {
                        ATerm v_28 = t;
                        int w_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_28);
                          }
                        else
                          {
                            t = v_28;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_36 = NULL,q_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_36 = ATgetArgument(t, 0);
                          h_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_36;
                      t = eval_config_0_0(t);
                      p_36 = t;
                      t = h_36;
                      t = eval_config_0_0(t);
                      q_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_36, q_36);
                      t = r_6(p_36, q_36, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  t = SSL_table_get(w_36, x_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t = term_v_25;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, u_36);
  t = s_6(v_36, u_36, t);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_36 = NULL,z_36 = NULL;
        t = eval_config_0_0(t);
        y_36 = t;
        t = term_v_25;
        z_36 = t;
        t = SSL_table_put(z_36, u_36, y_36);
        t = y_36;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_z_28;
  c_37 = t;
  t = term_s_17;
  d_37 = t;
  t = term_a_29;
  t = v_6(c_37, d_37, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  t = term_z_28;
  i_37 = t;
  t = term_s_17;
  j_37 = t;
  t = term_a_29;
  t = v_6(i_37, j_37, t);
  t = term_a_19;
  e_37 = t;
  t = term_s_17;
  h_37 = t;
  t = term_c_29;
  t = v_6(e_37, h_37, t);
  t = term_d_29;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(g_29);
    }
  else
    {
      t = f_29;
      t = Option_3_0(j_6, p_6, w_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,t_37 = NULL,u_37 = NULL,a_5 = NULL;
  u_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_37 = ATgetFirst((ATermList) t);
      m_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_37);
  k_37 = t;
  t = l_37;
  t = j_56(t);
  n_37 = t;
  t = m_37;
  t = k_56(t);
  t_37 = t;
  t = (ATerm) ATinsert(CheckATermList(t_37), n_37);
  a_5 = t;
  t = SSLsetAnnotations(a_5, k_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_86 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL,d_5 = NULL;
  z_37 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_29;
        t = p_86(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  t = z_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_38 = ATgetFirst((ATermList) t);
      f_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_37);
  d_38 = t;
  t = term_k_26;
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, e_38);
  t = v_6(i_38, e_38, t);
  t = f_38;
  {
    static ATerm u_38 (ATerm t)
    {
      ATerm s_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_38 = NULL;
              l_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_38;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = p_86(t);
              t = Cons_2_0(_id, u_38, t);
            }
          LocalPopChoice(a_30);
        }
      else
        {
          t = s_29;
          {
            ATerm q_38 = NULL,r_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_38 = ATgetFirst((ATermList) t);
                r_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_38), (ATerm) ATmakeAppl(sym_Undefined_1, q_38));
          }
        }
      return(t);
    }
    t = u_38(t);
  }
  h_38 = t;
  t = (ATerm) ATinsert(CheckATermList(h_38), (ATerm) ATmakeAppl(sym_Program_1, e_38));
  d_5 = t;
  t = SSLsetAnnotations(d_5, d_38);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm k_39 = NULL;
  k_39 = t;
  if(match_string(t, "--help"))
    {
      t = k_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_39;
        }
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  t = term_u_27;
  r_39 = t;
  t = term_s_17;
  s_39 = t;
  t = term_h_30;
  t = v_6(r_39, s_39, t);
  t = term_i_30;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_j_30;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
  f_39 = t;
  t = term_x_25;
  h_39 = t;
  t = term_a_26;
  i_39 = t;
  t = (ATerm) ATempty;
  j_39 = t;
  t = SSL_table_put(h_39, i_39, j_39);
  t = f_39;
  {
    static ATerm c_7 (ATerm t)
    {
      ATerm k_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_86(t);
          LocalPopChoice(m_30);
        }
      else
        {
          t = k_30;
          {
            ATerm n_30 = t;
            int o_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_7, e_7, f_7, t);
                LocalPopChoice(o_30);
              }
            else
              {
                t = n_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_7, t);
  }
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL;
        d_40 = t;
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_13 = NULL;
              t = d_40;
              {
                ATerm t_30 = t;
                int u_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_u_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_30);
                  }
                else
                  {
                    t = t_30;
                    t = fetch_1_0(g_7, t);
                  }
              }
              t = d_40;
              t = default_system_usage_0_0(t);
              t = term_t_24;
              u_13 = t;
              t = SSL_exit(u_13);
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              {
                ATerm c_14 = NULL;
                t = term_z_28;
                t = get_config_0_0(t);
                t = d_40;
                t = default_system_about_0_0(t);
                t = term_t_24;
                c_14 = t;
                t = SSL_exit(c_14);
              }
            }
        }
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        {
          ATerm v_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_40 = NULL,f_40 = NULL,h_40 = NULL;
              static ATerm j_7 (ATerm t)
              {
                ATerm i_40 = NULL,j_40 = NULL,n_40 = NULL,f_5 = NULL;
                n_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_40);
                i_40 = t;
                t = j_40;
                if(((d_39 != NULL) && (d_39 != t)))
                  _fail(t);
                else
                  d_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_40);
                f_5 = t;
                t = SSLsetAnnotations(f_5, i_40);
                return(t);
              }
              t = fetch_1_0(j_7, t);
              t = term_y_15;
              f_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_a_31);
              h_40 = t;
              t = SSL_printnl(f_40, h_40);
              t = (ATerm) ATmakeAppl(sym__2, term_y_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_39)), term_a_31));
              t = default_system_usage_0_0(t);
              t = term_n_8;
              e_40 = t;
              t = SSL_exit(e_40);
              LocalPopChoice(z_30);
            }
          else
            {
              t = v_30;
            }
        }
      }
  }
  e_39 = t;
  t = term_x_25;
  g_39 = t;
  t = SSL_table_destroy(g_39);
  t = e_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t = parse_options_1_0(t_84, t);
  s_40 = t;
  t = term_b_31;
  v_40 = t;
  t = SSL_table_create(v_40);
  t = term_b_31;
  t_40 = t;
  t = term_d_31;
  u_40 = t;
  t = SSL_table_put(t_40, u_40, s_40);
  t = s_40;
  t = v_84(t);
  {
    ATerm f_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_84, t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = f_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_84(t);
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
static ATerm k_7 (ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            {
              ATerm s_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_7, v_7, w_7, t);
                  LocalPopChoice(x_31);
                }
              else
                {
                  t = s_31;
                  {
                    ATerm y_31 = t;
                    int b_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(b_32);
                      }
                    else
                      {
                        t = y_31;
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
static ATerm l_7 (ATerm t)
{
  t = xtc_io_1_0(y_7, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_c_32;
  e_41 = t;
  t = term_s_17;
  f_41 = t;
  t = term_d_32;
  t = v_6(e_41, f_41, t);
  t = term_g_32;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = xtc_sglr_1_0(a_8, t);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_41 = NULL,o_41 = NULL;
        o_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_41 = ATgetArgument(t, 0);
            {
              ATerm s_14 = NULL,h_5 = NULL;
              t = SSLgetAnnotations(o_41);
              s_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_41);
              h_5 = t;
              t = SSLsetAnnotations(h_5, s_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_41;
          }
        LocalPopChoice(p_32);
        t = xtc_transform_file_2_0(e_8, pass_verbose_0_0, t);
      }
    else
      {
        t = o_32;
        t = xtc_transform_term_2_0(f_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_7, default_usage_0_0, _id, l_7, t);
  return(t);
}
