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
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_h_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_b_29;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_a_26;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_l_24;
ATerm term_f_24;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
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
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_u_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_e_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_a_10, term_b_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_h_10, term_i_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_10, term_w_10, term_y_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_c_12, term_d_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_t_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_d_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_x_14, term_y_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_m_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_v_15, term_x_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(46);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_d_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_k_21);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_e_17);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_u_8, term_x_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_p_17);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_c_26);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_p_17);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_p_17);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_p_17);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_p_17);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm f_6 (ATerm l_28, ATerm m_28, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm p_6 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm s_6 (ATerm t_64 (ATerm), ATerm l_164, ATerm t_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t);
static ATerm t_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm i_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_81 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_7 (ATerm w_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_6 (ATerm z_77 (ATerm), ATerm t_29, ATerm r_29, ATerm t);
static ATerm x_8 (ATerm h_8, ATerm t);
static ATerm z_8 (ATerm j_8, ATerm k_8, ATerm l_8, ATerm t);
static ATerm x_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm g_6 (ATerm z_18, ATerm a_19, ATerm t);
ATerm at_last_1_0 (ATerm k_70 (ATerm), ATerm t);
static ATerm i_6 (ATerm s_69 (ATerm), ATerm n_19, ATerm y_195, ATerm t);
ATerm at_suffix_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm w_69 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm g_94 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm h_79 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm i_79 (ATerm), ATerm t);
static ATerm k_6 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm l_6 (ATerm n_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
static ATerm s_1 (ATerm t);
static ATerm m_6 (ATerm h_31, ATerm i_31, ATerm j_31, ATerm t);
static ATerm n_6 (ATerm k_79 (ATerm), ATerm r_31, ATerm q_31, ATerm t);
static ATerm w_6 (ATerm s_33, ATerm t_33, ATerm t);
static ATerm t_22 (ATerm g_22, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_6 (ATerm r_17, ATerm t);
static ATerm q_6 (ATerm a_34, ATerm b_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_25 (ATerm o_23, ATerm t);
static ATerm r_25 (ATerm w_23, ATerm x_23, ATerm y_23, ATerm t);
static ATerm v_25 (ATerm u_24, ATerm v_24, ATerm y_24, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm f_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm w_30 (ATerm d_29, ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm x_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm p_30, ATerm q_30, ATerm t);
ATerm end_scope_1_0 (ATerm w_77 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_77 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_81 (ATerm), ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm g_81 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_7 (ATerm k_32, ATerm l_32, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_7 (ATerm k_30, ATerm l_30, ATerm j_30, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_6 (ATerm f_28, ATerm g_28, ATerm t);
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm need_help_1_0 (ATerm h_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_7 (ATerm i_49, ATerm j_49, ATerm t);
ATerm debug_1_0 (ATerm r_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm d_7 (ATerm b_32, ATerm c_32, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_85 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm parse_options_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm l_28, ATerm m_28, ATerm t)
{
  ATerm v_4 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_28, m_28);
      LocalPopChoice(t_8);
    }
  else
    {
      t = v_4;
      t = SSL_subtr(l_28, m_28);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,j_0 = NULL,t_0 = NULL;
  t = term_u_8;
  {
    ATerm y_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = y_8;
        t = term_e_9;
      }
  }
  b_0 = t;
  t = term_e_9;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_e_9);
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
      t = term_f_9;
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
      t = (ATerm) ATinsert(ATempty, term_g_9);
      f_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_1, (ATerm) ATinsert(ATempty, term_g_9));
      t = w_6(b_1, f_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm p_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_1);
  return(t);
}
static ATerm s_6 (ATerm t_64 (ATerm), ATerm l_164, ATerm t_17, ATerm t)
{
  ATerm k_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_164, term_i_9);
  t = r_6(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_1, t_17);
  t = t_64(t);
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if(match_cons(j_9, sym_Stream_1))
        {
          o_1 = ATgetArgument(j_9, 0);
        }
      else
        _fail(t);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(o_1, p_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  m_1 = t;
  t = xtc_new_file_0_0(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_1, m_1);
  t = s_6(f_0, n_1, m_1, t);
  t = SSL_close_file(n_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_82 (ATerm), ATerm d_82 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(c_82, d_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,s_0 = NULL;
        t = SSL_int_to_string(x_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_9), q_0), term_l_9);
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
          z_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_2);
      i_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_o_9), i_1), term_n_9), x_2);
      j_1 = t;
      t = SSL_concat_strings(j_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_69 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = v_69(t);
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
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_9 = ATgetArgument(t, 0);
              if((e_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_15), term_n_15), term_h_15), term_d_15), term_v_14), term_q_14), term_k_14), term_e_14), term_y_13), term_p_13), term_l_13), term_g_13), term_c_13), term_y_12), term_u_12), term_q_12), term_m_12), term_g_12), term_y_11), term_u_11), term_q_11), term_k_11), term_e_11), term_z_10), term_p_10), term_k_10), term_e_10), term_x_9);
        t = fetch_elem_1_0(m_0, t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_3 = NULL,u_3 = NULL;
  i_3 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_16 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm i_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_16);
        {
          ATerm j_16 = t;
          int k_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
              t = u_3;
              {
                ATerm l_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              u_1 = t;
              t = term_n_16;
              w_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_1), term_o_16);
              x_1 = t;
              t = SSL_printnl(w_1, x_1);
              t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, u_1), term_o_16));
              LocalPopChoice(k_16);
            }
          else
            {
              t = j_16;
              t = i_3;
            }
        }
      }
    else
      {
        t = e_16;
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
ATerm fork_and_wait_1_0 (ATerm i_63 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = i_63(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            if(((ATgetType(r_16) != AT_INT) || (ATgetInt((ATermInt) r_16) != 0)))
              _fail(t);
            {
              ATerm t_16 = ATgetArgument(t, 1);
            }
            {
              ATerm u_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL;
  k_4 = t;
  t = t_81(t);
  t = xtc_find_0_0(t);
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm l_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
      t = t_6(i_4, k_4, t);
      t = term_w_16;
      l_4 = t;
      t = SSL_exit(l_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = k_4;
  return(t);
}
ATerm at_end_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    ATerm k_5 = NULL,l_5 = NULL,m_5 = NULL;
    m_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_5 = ATgetFirst((ATermList) t);
        l_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_2 = NULL,j_2 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(m_5);
          e_2 = t;
          t = l_5;
          t = p_5(t);
          j_2 = t;
          t = (ATerm) ATinsert(CheckATermList(j_2), k_5);
          a_2 = t;
          t = SSLsetAnnotations(a_2, e_2);
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
  t = p_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,r_4 = NULL;
  n_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_4;
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
          o_4 = ATgetFirst((ATermList) t);
          if(((r_4 != NULL) && (r_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_4;
      t = at_end_1_0(v_0, t);
    }
  return(t);
}
static ATerm j_7 (ATerm w_5, ATerm t)
{
  ATerm z_5 = NULL;
  t = SSL_explode_term(w_5);
  if(match_cons(t, sym__2))
    {
      ATerm x_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_16) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm c_6 = NULL,e_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym__2))
    {
      c_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      {
        ATerm y_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t)
            {
              t = e_6;
              return(t);
            }
            t = c_6;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(a_17);
          }
        else
          {
            t = y_16;
            t = j_7(h_6, t);
          }
      }
    }
  else
    {
      t = j_7(h_6, t);
    }
  return(t);
}
static ATerm v_6 (ATerm z_77 (ATerm), ATerm t_29, ATerm r_29, ATerm t)
{
  ATerm k_7 = NULL,n_7 = NULL,s_7 = NULL,v_7 = NULL,y_7 = NULL,z_7 = NULL;
  v_7 = t;
  t = z_77(t);
  k_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_7, t_29, r_29);
  t = e_7(k_7, t_29, r_29, t);
  {
    ATerm b_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL;
        t = term_e_17;
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_e_17);
        t = d_7(k_7, a_8, t);
        LocalPopChoice(d_17);
      }
    else
      {
        t = b_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_7 = ATgetFirst((ATermList) t);
      s_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_17;
  y_7 = t;
  t = (ATerm) ATinsert(CheckATermList(s_7), (ATerm) ATinsert(CheckATermList(n_7), t_29));
  z_7 = t;
  t = SSL_table_put(k_7, y_7, z_7);
  t = v_7;
  return(t);
}
static ATerm x_8 (ATerm h_8, ATerm t)
{
  t = h_8;
  {
    ATerm f_17 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            ATerm h_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_17;
      }
  }
  t = term_i_17;
  t = debug_1_0(x_0, t);
  t = (ATerm) ATmakeAppl(sym__2, h_8, term_i_9);
  t = open_file_0_0(t);
  return(t);
}
static ATerm z_8 (ATerm j_8, ATerm k_8, ATerm l_8, ATerm t)
{
  t = SSL_open_file(j_8, k_8);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,w_8 = NULL;
  r_8 = t;
  if(match_cons(t, sym__2))
    {
      s_8 = ATgetArgument(t, 0);
      w_8 = ATgetArgument(t, 1);
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_8(r_8, t);
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            t = z_8(s_8, w_8, r_8, t);
          }
      }
    }
  else
    {
      t = x_8(r_8, t);
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
  ATerm c_9 = NULL,d_9 = NULL,h_9 = NULL;
  t = term_p_17;
  t = new_0_0(t);
  c_9 = t;
  t = term_q_17;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, term_q_17);
  t = c_7(c_9, d_9, t);
  h_9 = t;
  {
    ATerm s_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_9 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_9);
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATempty, term_g_9));
        t = w_6(h_9, k_9, t);
        t = new_file_0_0(t);
        LocalPopChoice(v_17);
      }
    else
      {
        t = s_17;
        t = h_9;
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  t = new_file_0_0(t);
  s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_i_9);
  t = open_file_0_0(t);
  t = term_p_17;
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_9, term_p_17);
  t = v_6(y_0, s_9, t_9, t);
  t = s_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_3 = NULL,l_3 = NULL;
      t = u_10;
      t = xtc_new_file_0_0(t);
      h_3 = t;
      t = r_0(t);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_a_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(h_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
    }
  else
    {
      ATerm w_3 = NULL,a_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_10;
      t = xtc_new_file_0_0(t);
      w_3 = t;
      t = r_0(t);
      a_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_3), term_a_18), v_10), term_b_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(w_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_3);
    }
  return(t);
}
static ATerm g_6 (ATerm z_18, ATerm a_19, ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  t = a_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_19;
    }
  else
    {
      ATerm p_4 = NULL,w_4 = NULL,h_2 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_12 = ATgetFirst((ATermList) t);
          b_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_19);
      p_4 = t;
      t = b_12;
      {
        static ATerm f_5 (ATerm t)
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_4 = NULL;
              x_4 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_4;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              {
                ATerm a_5 = NULL;
                t = Cons_2_0(_id, f_5, t);
                a_5 = t;
                t = (ATerm) ATinsert(CheckATermList(a_5), z_18);
              }
            }
          return(t);
        }
        t = f_5(t);
      }
      w_4 = t;
      t = (ATerm) ATinsert(CheckATermList(w_4), a_12);
      h_2 = t;
      t = SSLsetAnnotations(h_2, p_4);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm k_70 (ATerm), ATerm t)
{
  static ATerm t_13 (ATerm t)
  {
    ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
    q_13 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_13 = ATgetFirst((ATermList) t);
        s_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_5 = NULL,k_2 = NULL;
          t = SSLgetAnnotations(q_13);
          u_5 = t;
          t = s_13;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_13), r_13);
          k_2 = t;
          t = SSLsetAnnotations(k_2, u_5);
          t = k_70(t);
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          {
            ATerm h_7 = NULL,o_7 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(q_13);
            h_7 = t;
            t = s_13;
            t = t_13(t);
            o_7 = t;
            t = (ATerm) ATinsert(CheckATermList(o_7), r_13);
            l_2 = t;
            t = SSLsetAnnotations(l_2, h_7);
          }
        }
    }
    return(t);
  }
  t = t_13(t);
  return(t);
}
static ATerm i_6 (ATerm s_69 (ATerm), ATerm n_19, ATerm y_195, ATerm t)
{
  static ATerm z_0 (ATerm t)
  {
    ATerm b_14 = NULL;
    b_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_19, b_14);
    t = s_69(t);
    t = b_14;
    return(t);
  }
  t = y_195;
  t = SRTS_one(z_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm l_15 (ATerm t)
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        {
          ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,b_8 = NULL,e_8 = NULL,o_2 = NULL;
          z_14 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_15 = ATgetFirst((ATermList) t);
              b_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_14);
          b_8 = t;
          t = b_15;
          t = l_15(t);
          e_8 = t;
          t = (ATerm) ATinsert(CheckATermList(e_8), a_15);
          o_2 = t;
          t = SSLsetAnnotations(o_2, b_8);
        }
      }
    return(t);
  }
  t = l_15(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm q_15 = NULL,u_15 = NULL,w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,t_2 = NULL,s_2 = NULL;
    g_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_16 = ATgetFirst((ATermList) t);
        b_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_16);
    z_15 = t;
    t = a_16;
    t = w_69(t);
    c_16 = t;
    t = (ATerm) ATinsert(CheckATermList(b_16), c_16);
    s_2 = t;
    t = SSLsetAnnotations(s_2, z_15);
    d_16 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_15 = ATgetFirst((ATermList) t);
        w_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_16);
    q_15 = t;
    t = w_15;
    if(((o_15 != NULL) && (o_15 != t)))
      _fail(t);
    else
      o_15 = t;
    t = (ATerm) ATinsert(CheckATermList(w_15), u_15);
    t_2 = t;
    t = SSLsetAnnotations(t_2, q_15);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(a_1, t);
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, not_null(o_15));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,z_16 = NULL;
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(g_94, t);
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm m_16 = NULL;
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_16, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_16;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_18 = ATgetFirst((ATermList) t);
              ATerm b_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_16;
          t = list_tokenize_1_0(g_94, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm c_19 = ATgetFirst((ATermList) t);
          ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_16;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, s_16);
        }
      else
        {
          ATerm u_17 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_19 = ATgetFirst((ATermList) t);
              ATerm f_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = z_16;
          t = list_tokenize_1_0(g_94, t);
          u_17 = t;
          t = (ATerm) ATinsert(CheckATermList(u_17), s_16);
        }
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_18 = NULL;
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      if((k_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_implode_string(n_18);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm w_17 = NULL,z_17 = NULL,c_18 = NULL,d_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,b_3 = NULL;
  i_18 = t;
  if(match_cons(t, sym__2))
    {
      d_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_18);
  c_18 = t;
  t = SSL_explode_string(g_18);
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, h_18);
  b_3 = t;
  t = SSLsetAnnotations(b_3, c_18);
  if(match_cons(t, sym__2))
    {
      w_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_17;
  {
    static ATerm c_1 (ATerm t)
    {
      ATerm j_18 = NULL;
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_18, w_17);
      t = i_6(d_1, j_18, w_17, t);
      return(t);
    }
    t = list_tokenize_1_0(c_1, t);
  }
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm y_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_19 = ATgetFirst((ATermList) t);
      y_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_18;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,w_18 = NULL,x_18 = NULL;
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_19), q_18);
  t = string_tokenize_0_0(t);
  t = at_last_1_0(h_1, t);
  p_18 = t;
  t = term_i_19;
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, p_18);
  t = g_6(x_18, p_18, t);
  w_18 = t;
  t = SSL_concat_strings(w_18);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_19 = NULL;
  static ATerm l_1 (ATerm t)
  {
    ATerm m_19 = NULL,q_19 = NULL;
    m_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), m_19);
    t = d_7(not_null(l_19), m_19, t);
    q_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_19, q_19);
    return(t);
  }
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = SSL_table_keys(l_19);
  t = map_1_0(l_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_79 (ATerm), ATerm t)
{
  ATerm s_19 = NULL;
  s_19 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_19, term_x_14);
        t = geq_0_0(t);
        t = s_19;
        t = h_79(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = s_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_20, term_i_12);
        t = geq_0_0(t);
        t = b_20;
        t = g_79(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = b_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm h_20 = NULL;
  h_20 = t;
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        j_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, term_n_10);
        t = geq_0_0(t);
        t = h_20;
        t = i_79(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = h_20;
      }
  }
  return(t);
}
static ATerm k_6 (ATerm q_73 (ATerm), ATerm r_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  t = r_73(t);
  {
    static ATerm q_1 (ATerm t)
    {
      ATerm m_20 = NULL;
      m_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, m_20);
      t = q_73(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
  }
  t = n_24;
  return(t);
}
static ATerm l_6 (ATerm n_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm l_21 (ATerm t)
  {
    ATerm a_21 = NULL,b_21 = NULL,e_21 = NULL;
    a_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_21 = ATgetFirst((ATermList) t);
            e_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_21;
              {
                static ATerm r_1 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = k_6(n_73, r_1, b_21, e_21, t);
              }
              t = l_21(t);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                ATerm v_8 = NULL,b_9 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(a_21);
                v_8 = t;
                t = e_21;
                t = l_21(t);
                b_9 = t;
                t = (ATerm) ATinsert(CheckATermList(b_9), b_21);
                j_3 = t;
                t = SSLsetAnnotations(j_3, v_8);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = l_21(t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      if((u_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm h_31, ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
        t = d_7(h_31, i_31, t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
  }
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, j_31);
  t = l_6(s_1, q_21, j_31, t);
  p_21 = t;
  t = SSL_table_put(h_31, i_31, p_21);
  t = o_21;
  return(t);
}
static ATerm n_6 (ATerm k_79 (ATerm), ATerm r_31, ATerm q_31, ATerm t)
{
  static ATerm t_1 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL;
    if(match_cons(t, sym__2))
      {
        v_21 = ATgetArgument(t, 0);
        w_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, r_31, v_21, w_21);
    t = k_79(t);
    return(t);
  }
  t = q_31;
  t = map_1_0(t_1, t);
  return(t);
}
static ATerm w_6 (ATerm s_33, ATerm t_33, ATerm t)
{
  t = SSL_access(s_33, t_33);
  return(t);
}
static ATerm t_22 (ATerm g_22, ATerm t)
{
  t = SSL_fclose(g_22);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL;
  l_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_22 = ATgetArgument(t, 0);
      {
        ATerm c_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_22);
            LocalPopChoice(d_20);
          }
        else
          {
            t = c_20;
            t = t_22(l_22, t);
          }
      }
    }
  else
    {
      t = t_22(l_22, t);
    }
  return(t);
}
static ATerm o_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm q_6 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm v_22 = NULL;
  t = SSL_fopen(a_34, b_34);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  t = SSL_stdin_stream();
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_23 = NULL;
  t = SSL_stdout_stream();
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_stderr_stream();
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
static ATerm n_25 (ATerm o_23, ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_explode_term(o_23);
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_20 = ATgetArgument(t, 1);
        if(((ATgetType(g_20) == AT_LIST) && !(ATisEmpty(g_20))))
          {
            p_23 = ATgetFirst((ATermList) g_20);
            {
              ATerm i_20 = (ATerm) ATgetNext((ATermList) g_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_25 (ATerm w_23, ATerm x_23, ATerm y_23, ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,e_24 = NULL,q_24 = NULL,m_3 = NULL;
  t = SSLgetAnnotations(y_23);
  e_24 = t;
  t = w_23;
  if(match_cons(t, sym_Path_1))
    {
      q_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_24, x_23);
  m_3 = t;
  t = SSLsetAnnotations(m_3, e_24);
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(a_24, b_24, t);
  return(t);
}
static ATerm v_25 (ATerm u_24, ATerm v_24, ATerm y_24, ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL,g_25 = NULL,o_3 = NULL;
  t = SSLgetAnnotations(y_24);
  b_25 = t;
  t = SSL_is_string(u_24);
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_25, v_24);
  o_3 = t;
  t = SSLsetAnnotations(o_3, b_25);
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_6(z_24, a_25, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm i_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym__2))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_25(i_25, t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            {
              ATerm n_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_25(l_25, m_25, i_25, t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = n_20;
                  t = v_25(l_25, m_25, i_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_25(i_25, t);
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL;
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, term_s_20);
      t = r_6(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = debug_1_0(v_1, t);
      _fail(t);
    }
  x_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(y_25, t);
  w_25 = t;
  t = x_25;
  t = fclose_0_0(t);
  t = w_25;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = term_u_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL,e_26 = NULL;
      b_26 = t;
      t = (ATerm) ATinsert(ATempty, term_x_20);
      e_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, (ATerm) ATinsert(ATempty, term_x_20));
      t = w_6(b_26, e_26, t);
      LocalPopChoice(w_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = v_20;
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_21 = t;
            if((PushChoice() == 0))
              {
                ATerm f_26 = NULL,g_26 = NULL;
                f_26 = t;
                t = (ATerm) ATinsert(ATempty, term_g_9);
                g_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_26, (ATerm) ATinsert(ATempty, term_g_9));
                t = w_6(f_26, g_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_21;
              }
            t = debug_1_0(y_1, t);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = debug_1_0(z_1, t);
          }
      }
      t = (ATerm) ATempty;
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
  t = term_d_21;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
  u_26 = t;
  t = term_n_16;
  v_26 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  w_26 = t;
  t = SSL_printnl(v_26, w_26);
  t = u_26;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym__3))
    {
      x_26 = ATgetArgument(t, 0);
      y_26 = ATgetArgument(t, 1);
      z_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_6(x_26, y_26, z_26, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,e_27 = NULL;
  a_27 = t;
  t = term_n_16;
  b_27 = t;
  t = (ATerm) ATinsert(ATempty, term_h_21);
  e_27 = t;
  t = SSL_printnl(b_27, e_27);
  t = a_27;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  f_27 = t;
  t = term_n_16;
  g_27 = t;
  t = (ATerm) ATinsert(ATempty, term_g_21);
  h_27 = t;
  t = SSL_printnl(g_27, h_27);
  t = f_27;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  h_26 = t;
  t = if_verbose5_1_0(b_2, t);
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL,s_26 = NULL;
        t = term_j_21;
        r_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, h_26);
        s_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Imported_1, h_26));
        t = d_7(r_26, s_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
      }
  }
  j_26 = t;
  t = term_j_21;
  o_26 = t;
  t = term_k_21;
  p_26 = t;
  t = (ATerm) ATinsert(ATempty, h_26);
  q_26 = t;
  t = SSL_table_put(o_26, p_26, q_26);
  t = j_26;
  t = if_verbose4_1_0(d_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(g_2, t);
  i_26 = t;
  t = term_j_21;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_21, i_26);
  t = n_6(i_2, n_26, i_26, t);
  t = if_verbose6_1_0(m_2, t);
  t = term_j_21;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, h_26);
  l_26 = t;
  t = (ATerm) ATempty;
  m_26 = t;
  t = SSL_table_put(k_26, l_26, m_26);
  t = (ATerm) ATmakeAppl(sym__3, term_j_21, (ATerm)ATmakeAppl(sym_Imported_1, h_26), (ATerm) ATempty);
  t = if_verbose4_1_0(n_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm f_77 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,h_28 = NULL;
  z_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_27;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_28 = ATgetFirst((ATermList) t);
          h_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL,c_10 = NULL,d_10 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(z_27);
            y_9 = t;
            t = a_28;
            t = f_77(t);
            c_10 = t;
            t = h_28;
            t = filter_1_0(f_77, t);
            d_10 = t;
            t = (ATerm) ATinsert(CheckATermList(d_10), c_10);
            y_4 = t;
            t = SSLsetAnnotations(y_4, y_9);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = h_28;
            t = filter_1_0(f_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm t)
{
  static ATerm k_28 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_67(t);
        t = k_28(t);
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = p_67(t);
      }
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_21;
      t = get_config_0_0(t);
      LocalPopChoice(x_21);
    }
  else
    {
      t = t_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_28 = NULL;
            t = term_b_22;
            o_28 = t;
            t = SSL_getenv(o_28);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = XTC_REPOSITORY();
          }
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
  t = term_c_22;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = term_j_21;
  x_28 = t;
  t = term_d_22;
  y_28 = t;
  t = term_e_22;
  t = d_7(x_28, y_28, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
  }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_28 = NULL;
  t = if_verbose5_1_0(p_2, t);
  q_28 = t;
  {
    ATerm i_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL,t_28 = NULL;
        t = term_j_21;
        r_28 = t;
        t = term_k_21;
        t_28 = t;
        t = term_m_22;
        t = d_7(r_28, t_28, t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = i_22;
        {
          ATerm u_28 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          u_28 = t;
          t = repeat_2_0(r_2, _id, t);
          t = u_28;
        }
      }
  }
  t = q_28;
  t = if_verbose5_1_0(u_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm w_30 (ATerm d_29, ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
  t = term_j_21;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, d_29);
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Tool_1, d_29));
  t = d_7(h_29, i_29, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_22 = ATgetFirst((ATermList) t);
      if(match_cons(o_22, sym__2))
        {
          ATerm q_22 = ATgetArgument(o_22, 0);
          g_29 = ATgetArgument(o_22, 1);
        }
      else
        _fail(t);
      {
        ATerm p_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_29;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_j_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int u_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,w_29 = NULL;
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      w_29 = t;
      if(match_cons(t, sym__2))
        {
          j_29 = ATgetArgument(t, 0);
          k_29 = ATgetArgument(t, 1);
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                t = term_j_21;
                a_30 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_29);
                b_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_21, (ATerm) ATmakeAppl(sym_Tool_1, j_29));
                t = d_7(a_30, b_30, t);
                {
                  static ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_29 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_29 != NULL) && (z_29 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_3, t);
                }
                t = not_null(z_29);
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = w_30(w_29, t);
              }
          }
        }
      else
        {
          t = w_30(w_29, t);
        }
      t = if_verbose5_1_0(g_3, t);
      LocalPopChoice(u_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_30 = NULL,q_10 = NULL,r_10 = NULL;
        v_30 = t;
        t = term_n_16;
        q_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), v_30), term_z_22);
        r_10 = t;
        t = SSL_printnl(q_10, r_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_23), v_30), term_z_22);
        t = if_verbose5_1_0(n_3, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm x_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,m_32 = NULL;
  j_32 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_11 = NULL;
        t = j_32;
        t = o_0(t);
        b_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = b_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = b_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, m_32, b_11);
        t = x_6(m_32, b_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_32);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_11 = NULL;
              t = j_32;
              t = o_0(t);
              i_11 = t;
              {
                ATerm h_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_11 = NULL;
                    j_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = j_11;
                          }
                        else
                          {
                            t = j_11;
                            if((m_32 != t))
                              {
                                _fail(t);
                              }
                            t = j_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_32, i_11);
              t = x_6(m_32, i_11, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_32);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              t = j_32;
              t = o_0(t);
              if((m_32 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_32);
            }
        }
      }
  }
  return(t);
}
static ATerm y_6 (ATerm p_30, ATerm q_30, ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  c_33 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
        t = d_7(p_30, q_30, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_23 = ATgetFirst((ATermList) t);
            b_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_23);
        t = SSL_table_put(p_30, q_30, b_33);
        t = (ATerm) ATmakeAppl(sym__3, p_30, q_30, b_33);
      }
    else
      {
        t = i_23;
        t = SSL_table_remove(p_30, q_30);
        t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
      }
  }
  t = c_33;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  j_33 = t;
  t = w_77(t);
  i_33 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL;
        t = term_e_17;
        l_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, term_e_17);
        t = d_7(i_33, l_33, t);
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
      e_33 = ATgetFirst((ATermList) t);
      d_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_e_17;
  k_33 = t;
  t = SSL_table_put(i_33, k_33, d_33);
  t = e_33;
  {
    static ATerm q_3 (ATerm t)
    {
      ATerm m_33 = NULL;
      m_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_33, m_33);
      t = y_6(i_33, m_33, t);
      return(t);
    }
    t = map_1_0(q_3, t);
  }
  t = j_33;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_78(t);
      t = s_78(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = n_23;
      t = s_78(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,u_33 = NULL;
  p_33 = t;
  t = v_77(t);
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_33, term_e_17);
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_23 = ATgetArgument(t, 0);
            ATerm u_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_17;
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_33, term_e_17);
        t = d_7(o_33, y_33, t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = (ATerm) ATempty;
      }
  }
  q_33 = t;
  t = term_e_17;
  r_33 = t;
  t = (ATerm) ATinsert(CheckATermList(q_33), (ATerm) ATempty);
  u_33 = t;
  t = SSL_table_put(o_33, r_33, u_33);
  t = p_33;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_x_17;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  {
    ATerm v_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_34);
        LocalPopChoice(z_23);
      }
    else
      {
        t = v_23;
        t = n_34;
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm f_34 = NULL;
  static ATerm s_3 (ATerm t)
  {
    ATerm g_34 = NULL;
    g_34 = t;
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_34 = NULL,i_34 = NULL;
          t = term_x_17;
          h_34 = t;
          t = term_e_17;
          i_34 = t;
          t = term_f_24;
          t = d_7(h_34, i_34, t);
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_34 != NULL) && (f_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_34 = ATgetFirst((ATermList) t);
        {
          ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = f_34;
    t = map_1_0(t_3, t);
    t = g_34;
    t = end_scope_1_0(v_3, t);
    return(t);
  }
  t = begin_scope_1_0(r_3, t);
  t = restore_always_2_0(f_81, s_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_18;
      t = get_config_0_0(t);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = term_l_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  static ATerm x_3 (ATerm t)
  {
    ATerm m_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_34 = NULL;
        t = term_b_18;
        t = get_config_0_0(t);
        x_34 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_34);
        LocalPopChoice(p_24);
      }
    else
      {
        t = m_24;
        t = term_f_9;
      }
    t = g_81(t);
    t = copy_to_1_0(y_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL,f_35 = NULL,g_35 = NULL;
  b_35 = t;
  t = term_p_17;
  t = whoami_0_0(t);
  c_35 = t;
  t = term_n_16;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_24), c_35), term_r_24);
  g_35 = t;
  t = SSL_printnl(f_35, g_35);
  t = term_e_9;
  d_35 = t;
  t = SSL_exit(d_35);
  t = b_35;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  if(match_string(t, "-k"))
    {
      t = j_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_35;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm k_35 = NULL,m_35 = NULL,n_35 = NULL;
  k_35 = t;
  t = SSL_string_to_int(k_35);
  m_35 = t;
  t = term_t_24;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_24, m_35);
  t = g_7(n_35, m_35, t);
  t = k_35;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, b_4, c_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  if(match_string(t, "-S"))
    {
      t = s_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_35;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  t = term_u_8;
  t_35 = t;
  t = term_x_24;
  u_35 = t;
  t = term_c_25;
  t = g_7(t_35, u_35, t);
  t = term_d_25;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_e_25;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  t = SSL_string_to_int(v_35);
  w_35 = t;
  t = term_u_8;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, w_35);
  t = g_7(x_35, w_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_35);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_h_25;
  y_35 = t;
  t = term_p_17;
  z_35 = t;
  t = term_j_25;
  t = g_7(y_35, z_35, t);
  t = term_k_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, g_4, h_4, t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_4, m_4, q_4, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = Option_3_0(s_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm g_7 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm a_36 = NULL;
  t = term_u_25;
  a_36 = t;
  t = SSL_table_put(a_36, k_32, l_32);
  t = (ATerm) ATmakeAppl(sym__3, term_u_25, k_32, l_32);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
      t = term_p_17;
      t = e_0(t);
      k_36 = t;
      t = term_a_26;
      l_36 = t;
      t = term_c_26;
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_26, term_c_26, k_36);
      t = e_7(l_36, m_36, k_36, t);
      _fail(t);
    }
  else
    {
      ATerm p_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_36 = ATgetFirst((ATermList) t);
          j_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      t = c_0(t);
      t = term_p_17;
      t = d_0(t);
      p_36 = t;
      t = (ATerm) ATinsert(CheckATermList(j_36), p_36);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  if(match_string(t, "-o"))
    {
      t = s_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  t = term_a_18;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, t_36);
  t = g_7(u_36, t_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_36);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, b_5, d_5, t);
  return(t);
}
static ATerm e_7 (ATerm k_30, ATerm l_30, ATerm j_30, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_30, l_30);
  {
    ATerm t_26 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm i_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_30, l_30);
        t = d_7(k_30, l_30, t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATempty;
      }
  }
  x_36 = t;
  t = (ATerm) ATinsert(CheckATermList(x_36), j_30);
  y_36 = t;
  t = SSL_table_put(k_30, l_30, y_36);
  t = w_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
      t = term_p_17;
      t = n_0(t);
      j_37 = t;
      t = term_a_26;
      k_37 = t;
      t = term_c_26;
      l_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_26, term_c_26, j_37);
      t = e_7(k_37, l_37, j_37, t);
      _fail(t);
    }
  else
    {
      ATerm p_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_37 = ATgetFirst((ATermList) t);
          g_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      t = k_0(t);
      t = h_37;
      t = l_0(t);
      p_37 = t;
      t = (ATerm) ATinsert(CheckATermList(i_37), p_37);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  if(match_string(t, "-i"))
    {
      t = r_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_37;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  s_37 = t;
  t = term_b_18;
  t_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_18, s_37);
  t = g_7(t_37, s_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_37);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, i_5, n_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_17;
  t = whoami_0_0(t);
  u_37 = t;
  t = term_n_16;
  w_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_27), u_37);
  x_37 = t;
  t = SSL_printnl(w_37, x_37);
  t = term_e_9;
  v_37 = t;
  t = SSL_exit(v_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_27;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm f_28, ATerm g_28, ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_28, g_28);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = SSL_addr(f_28, g_28);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL;
  z_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_37;
      t = b_76(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_38 = ATgetFirst((ATermList) t);
          b_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_38;
      t = foldr_2_0(b_76, c_76, t);
      e_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_38, e_38);
      t = c_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      j_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(j_12, l_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_38 = NULL,e_12 = NULL,f_12 = NULL;
  t = times_0_0(t);
  f_12 = t;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      e_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  t = foldr_2_0(o_5, q_5, t);
  h_38 = t;
  t = SSL_TicksToSeconds(h_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_38;
        if((t_38 != t))
          {
            _fail(t);
          }
        t = s_38;
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
        {
          ATerm r_27 = t;
          int s_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_38, u_38);
              LocalPopChoice(s_27);
            }
          else
            {
              t = r_27;
              t = SSL_gtr(t_38, u_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_38, u_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm y_38 = NULL;
  y_38 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_39 = NULL;
        t = term_u_8;
        t = get_config_0_0(t);
        a_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_39, term_e_9);
        t = geq_0_0(t);
        t = y_38;
        t = d_79(t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = y_38;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = run_time_0_0(t);
  c_39 = t;
  t = term_p_17;
  t = whoami_0_0(t);
  d_39 = t;
  t = term_n_16;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_27), c_39), term_n_9), d_39);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_27), c_39), term_n_9), d_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_24;
  h_39 = t;
  t = SSL_exit(h_39);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  q_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_39 = ATgetArgument(t, 0);
          {
            ATerm j_13 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(q_39);
            j_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_39);
            c_5 = t;
            t = SSLsetAnnotations(c_5, j_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_27;
      t = get_config_0_0(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = fetch_1_0(s_5, t);
    }
  t = h_83(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_39 = ATgetFirst((ATermList) t);
      u_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_39 = NULL,z_39 = NULL;
        static ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_39)), not_null(z_39));
          return(t);
        }
        t = u_39;
        t = i_0(t);
        if(((y_39 != NULL) && (y_39 != t)))
          _fail(t);
        else
          y_39 = t;
        t = t_39;
        t = g_0(t);
        if(((z_39 != NULL) && (z_39 != t)))
          _fail(t);
        else
          z_39 = t;
        t = u_39;
        t = reverse_acc_2_0(g_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,e_5 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_40);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_40);
  e_5 = t;
  t = SSLsetAnnotations(e_5, d_40);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_40), term_b_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_27;
      t = get_config_0_0(t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      t = fetch_1_0(v_5, t);
    }
  t = term_e_28;
  t = echo_0_0(t);
  t = term_a_26;
  b_40 = t;
  t = term_c_26;
  c_40 = t;
  t = term_i_28;
  t = d_7(b_40, c_40, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    b_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_41 = ATgetFirst((ATermList) t);
        d_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL,c_14 = NULL,h_5 = NULL;
          t = SSLgetAnnotations(b_41);
          w_13 = t;
          t = c_41;
          t = t_69(t);
          c_14 = t;
          t = (ATerm) ATinsert(CheckATermList(d_41), c_14);
          h_5 = t;
          t = SSLsetAnnotations(h_5, w_13);
          LocalPopChoice(n_28);
        }
      else
        {
          t = j_28;
          {
            ATerm r_14 = NULL,c_15 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(b_41);
            r_14 = t;
            t = d_41;
            t = e_41(t);
            c_15 = t;
            t = (ATerm) ATinsert(CheckATermList(c_15), c_41);
            j_5 = t;
            t = SSLsetAnnotations(j_5, r_14);
          }
        }
    }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  {
    ATerm p_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_28 = ATgetFirst((ATermList) t);
                ATerm w_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_41;
          }
        LocalPopChoice(s_28);
      }
    else
      {
        t = p_28;
        t = (ATerm) ATinsert(ATempty, i_41);
      }
  }
  j_41 = t;
  t = term_l_24;
  k_41 = t;
  t = SSL_printnl(k_41, j_41);
  t = i_41;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm i_49, ATerm j_49, ATerm t)
{
  t = SSL_strcat(i_49, j_49);
  return(t);
}
ATerm debug_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  t = r_64(t);
  p_41 = t;
  t = term_n_16;
  q_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_41), p_41);
  r_41 = t;
  t = SSL_printnl(q_41, r_41);
  t = o_41;
  return(t);
}
ATerm map_1_0 (ATerm j_69 (ATerm), ATerm t)
{
  static ATerm g_42 (ATerm t)
  {
    ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
    d_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_42;
      }
    else
      {
        ATerm k_15 = NULL,s_15 = NULL,t_15 = NULL,g_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_42 = ATgetFirst((ATermList) t);
            f_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        k_15 = t;
        t = e_42;
        t = j_69(t);
        s_15 = t;
        t = f_42;
        t = g_42(t);
        t_15 = t;
        t = (ATerm) ATinsert(CheckATermList(t_15), s_15);
        g_10 = t;
        t = SSLsetAnnotations(g_10, k_15);
      }
    return(t);
  }
  t = g_42(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
    }
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL;
      o_42 = t;
      t = SSL_is_string(o_42);
      LocalPopChoice(e_29);
    }
  else
    {
      t = c_29;
      {
        ATerm f_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_6, t);
            LocalPopChoice(l_29);
          }
        else
          {
            t = f_29;
            {
              ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
              u_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_42 = ATgetArgument(t, 0);
                  t = v_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_42 = ATgetArgument(t, 0);
                      t = v_42;
                      {
                        ATerm m_29 = t;
                        int n_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_29);
                          }
                        else
                          {
                            t = m_29;
                            t = debug_1_0(b_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_43 = NULL,b_43 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_42 = ATgetArgument(t, 0);
                          w_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_42;
                      t = eval_config_0_0(t);
                      a_43 = t;
                      t = w_42;
                      t = eval_config_0_0(t);
                      b_43 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_43, b_43);
                      t = c_7(a_43, b_43, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm b_32, ATerm c_32, ATerm t)
{
  t = SSL_table_get(b_32, c_32);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL;
  f_43 = t;
  t = term_u_25;
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_25, f_43);
  t = d_7(g_43, f_43, t);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_43 = NULL,i_43 = NULL;
        t = eval_config_0_0(t);
        h_43 = t;
        t = term_u_25;
        i_43 = t;
        t = SSL_table_put(i_43, f_43, h_43);
        t = h_43;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  t = term_q_29;
  l_43 = t;
  t = term_p_17;
  m_43 = t;
  t = term_s_29;
  t = g_7(l_43, m_43, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_u_29;
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
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = term_q_29;
  p_43 = t;
  t = term_p_17;
  q_43 = t;
  t = term_s_29;
  t = g_7(p_43, q_43, t);
  t = term_v_29;
  n_43 = t;
  t = term_p_17;
  o_43 = t;
  t = term_x_29;
  t = g_7(n_43, o_43, t);
  t = term_y_29;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, j_6, u_6, t);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = Option_3_0(a_7, b_7, f_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_56 (ATerm), ATerm k_56 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,j_10 = NULL;
  w_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_43);
  r_43 = t;
  t = s_43;
  t = j_56(t);
  u_43 = t;
  t = t_43;
  t = k_56(t);
  v_43 = t;
  t = (ATerm) ATinsert(CheckATermList(v_43), u_43);
  j_10 = t;
  t = SSLsetAnnotations(j_10, r_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL,h_44 = NULL,l_10 = NULL;
  b_44 = t;
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_30;
        t = f_85(t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
      }
  }
  t = b_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_44 = ATgetFirst((ATermList) t);
      e_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_44);
  c_44 = t;
  t = term_l_27;
  h_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, d_44);
  t = g_7(h_44, d_44, t);
  t = e_44;
  {
    static ATerm r_44 (ATerm t)
    {
      ATerm i_30 = t;
      int m_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_44 = NULL;
              k_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_44;
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              t = f_85(t);
              t = Cons_2_0(_id, r_44, t);
            }
          LocalPopChoice(m_30);
        }
      else
        {
          t = i_30;
          {
            ATerm n_44 = NULL,o_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_44 = ATgetFirst((ATermList) t);
                o_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_44), (ATerm) ATmakeAppl(sym_Undefined_1, n_44));
          }
        }
      return(t);
    }
    t = r_44(t);
  }
  g_44 = t;
  t = (ATerm) ATinsert(CheckATermList(g_44), (ATerm) ATmakeAppl(sym_Program_1, d_44));
  l_10 = t;
  t = SSLsetAnnotations(l_10, c_44);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  if(match_string(t, "--help"))
    {
      t = d_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_45;
        }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  t = term_y_27;
  e_45 = t;
  t = term_p_17;
  f_45 = t;
  t = term_r_30;
  t = g_7(e_45, f_45, t);
  t = term_s_30;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_30;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  y_44 = t;
  t = term_a_26;
  a_45 = t;
  t = term_c_26;
  b_45 = t;
  t = (ATerm) ATempty;
  c_45 = t;
  t = SSL_table_put(a_45, b_45, c_45);
  t = y_44;
  {
    static ATerm i_7 (ATerm t)
    {
      ATerm u_30 = t;
      int x_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_85(t);
          LocalPopChoice(x_30);
        }
      else
        {
          t = u_30;
          {
            ATerm y_30 = t;
            int z_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_7, m_7, p_7, t);
                LocalPopChoice(z_30);
              }
            else
              {
                t = y_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
  }
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_45 = NULL;
        m_45 = t;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_16 = NULL;
              t = m_45;
              {
                ATerm e_31 = t;
                int f_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(f_31);
                  }
                else
                  {
                    t = e_31;
                    t = fetch_1_0(q_7, t);
                  }
              }
              t = m_45;
              t = default_system_usage_0_0(t);
              t = term_x_24;
              v_16 = t;
              t = SSL_exit(v_16);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm c_17 = NULL;
                t = term_q_29;
                t = get_config_0_0(t);
                t = m_45;
                t = default_system_about_0_0(t);
                t = term_x_24;
                c_17 = t;
                t = SSL_exit(c_17);
              }
            }
        }
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        {
          ATerm g_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
              static ATerm r_7 (ATerm t)
              {
                ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,t_10 = NULL;
                s_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_45);
                q_45 = t;
                t = r_45;
                if(((w_44 != NULL) && (w_44 != t)))
                  _fail(t);
                else
                  w_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_45);
                t_10 = t;
                t = SSLsetAnnotations(t_10, q_45);
                return(t);
              }
              t = fetch_1_0(r_7, t);
              t = term_n_16;
              o_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_l_31);
              p_45 = t;
              t = SSL_printnl(o_45, p_45);
              t = (ATerm) ATmakeAppl(sym__2, term_n_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_44)), term_l_31));
              t = default_system_usage_0_0(t);
              t = term_e_9;
              n_45 = t;
              t = SSL_exit(n_45);
              LocalPopChoice(k_31);
            }
          else
            {
              t = g_31;
            }
        }
      }
  }
  x_44 = t;
  t = term_a_26;
  z_44 = t;
  t = SSL_table_destroy(z_44);
  t = x_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL;
  t = parse_options_1_0(j_83, t);
  x_45 = t;
  t = term_m_31;
  a_46 = t;
  t = SSL_table_create(a_46);
  t = term_m_31;
  y_45 = t;
  t = term_n_31;
  z_45 = t;
  t = SSL_table_put(y_45, z_45, x_45);
  t = x_45;
  t = l_83(t);
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_83, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_83(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm w_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(x_31);
          }
        else
          {
            t = w_31;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_7, x_7, c_8, t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  {
                    ATerm a_32 = t;
                    int d_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_32);
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
static ATerm u_7 (ATerm t)
{
  t = xtc_io_1_0(d_8, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  t = term_e_32;
  i_46 = t;
  t = term_p_17;
  j_46 = t;
  t = term_f_32;
  t = g_7(i_46, j_46, t);
  t = term_g_32;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_h_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm i_32 = t;
  int n_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_46 = NULL,r_46 = NULL;
      r_46 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm j_17 = NULL,x_10 = NULL;
            t = SSLgetAnnotations(r_46);
            j_17 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_46);
            x_10 = t;
            t = SSLsetAnnotations(x_10, j_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_46;
        }
      LocalPopChoice(n_32);
      t = xtc_transform_file_2_0(f_8, g_8, t);
    }
  else
    {
      t = i_32;
      t = xtc_transform_term_2_0(i_8, m_8, t);
    }
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_46 = NULL,a_47 = NULL;
        a_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_46 = ATgetArgument(t, 0);
            {
              ATerm y_17 = NULL,l_11 = NULL;
              t = SSLgetAnnotations(a_47);
              y_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_46);
              l_11 = t;
              t = SSLsetAnnotations(l_11, y_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_47;
          }
        LocalPopChoice(p_32);
        t = xtc_transform_file_2_0(n_8, pass_verbose_0_0, t);
      }
    else
      {
        t = o_32;
        t = xtc_transform_term_2_0(o_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_47 = NULL,h_47 = NULL;
        h_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_47 = ATgetArgument(t, 0);
            {
              ATerm o_18 = NULL,m_11 = NULL;
              t = SSLgetAnnotations(h_47);
              o_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_47);
              m_11 = t;
              t = SSLsetAnnotations(m_11, o_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_47;
          }
        LocalPopChoice(r_32);
        t = xtc_transform_file_2_0(p_8, pass_verbose_0_0, t);
      }
    else
      {
        t = q_32;
        t = xtc_transform_term_2_0(q_8, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm s_46 = NULL;
  t = term_t_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  s_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_46), term_u_32);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm t_46 = NULL;
  t = term_t_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  t_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_46), term_u_32);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(t_7, default_usage_0_0, _id, u_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
