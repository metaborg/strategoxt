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
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_d_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_h_24;
ATerm term_z_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_e_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_f_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_a_19;
ATerm term_k_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_m_16;
ATerm term_f_16;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
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
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
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
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_o_4;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_9, term_d_9, term_i_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_l_9, term_m_9);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_9, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_9, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_c_10, term_d_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_10, term_g_10, term_h_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_n_10, term_o_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_11, term_i_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_v_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_p_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_j_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_j_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_s_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_q_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_x_20);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.pp.af", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_m_16);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_w_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_24);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_c_25, term_n_17);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_t_25, term_u_25);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_n_17);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_n_17);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_m_27, term_n_17);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_n_17);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm t_5 (ATerm l_17, ATerm m_17, ATerm t);
static ATerm u_5 (ATerm r_64 (ATerm), ATerm x_164, ATerm t_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm write_to_0_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t);
static ATerm v_5 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_7 (ATerm r_5, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_6 (ATerm h_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t);
static ATerm i_8 (ATerm v_7, ATerm t);
static ATerm l_8 (ATerm z_7, ATerm b_8, ATerm c_8, ATerm t);
static ATerm y_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_80 (ATerm), ATerm t);
static ATerm y_5 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t);
static ATerm z_5 (ATerm l_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm a_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t);
static ATerm b_6 (ATerm s_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t);
static ATerm g_6 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm t_14 (ATerm n_14, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_6 (ATerm r_17, ATerm t);
static ATerm d_6 (ATerm v_38, ATerm w_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_17 (ATerm j_15, ATerm t);
static ATerm e_17 (ATerm p_15, ATerm u_15, ATerm z_15, ATerm t);
static ATerm f_17 (ATerm o_16, ATerm p_16, ATerm q_16, ATerm t);
static ATerm e_6 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm h_22 (ATerm e_21, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm h_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm k_35, ATerm l_35, ATerm t);
ATerm end_scope_1_0 (ATerm e_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_82 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm o_82 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm f_37, ATerm g_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm a_33, ATerm b_33, ATerm t);
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_80 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_6 (ATerm v_31, ATerm w_31, ATerm t);
ATerm debug_1_0 (ATerm p_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm n_6 (ATerm w_36, ATerm x_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_o_4;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm t_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_8);
      t_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATempty, term_e_8));
      t = g_6(m_0, t_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm t_5 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm u_0 = NULL;
  t = SSL_write_term_to_stream_baf(l_17, m_17);
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_0);
  return(t);
}
static ATerm u_5 (ATerm r_64 (ATerm), ATerm x_164, ATerm t_17, ATerm t)
{
  ATerm v_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_164, term_j_8);
  t = e_6(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, t_17);
  t = r_64(t);
  t = fclose_0_0(t);
  t = t_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm c_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if(match_cons(k_8, sym_Stream_1))
        {
          c_1 = ATgetArgument(k_8, 0);
        }
      else
        _fail(t);
      f_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(c_1, f_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm w_0 = NULL,z_0 = NULL;
  w_0 = t;
  t = xtc_new_file_0_0(t);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_0, w_0);
  t = u_5(a_0, z_0, w_0, t);
  t = SSL_close_file(z_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(k_83, l_83, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_2 = ATgetArgument(t, 0);
      {
        ATerm j_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(r_2);
        j_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), j_0), term_q_8);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_2 = ATgetArgument(t, 0);
          s_2 = ATgetArgument(t, 1);
          t_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_2);
      j_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_2), term_t_8), j_1), term_s_8), r_2);
      k_1 = t;
      t = SSL_concat_strings(k_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  ATerm w_2 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = t_69(t);
    if(((w_2 != NULL) && (w_2 != t)))
      _fail(t);
    else
      w_2 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(w_2);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  {
    ATerm v_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_9 = ATgetArgument(t, 0);
              if((x_2 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm b_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_15), term_d_15), term_w_14), term_k_14), term_e_14), term_a_14), term_v_13), term_n_13), term_f_13), term_b_13), term_w_12), term_r_12), term_j_12), term_f_12), term_a_12), term_w_11), term_q_11), term_k_11), term_d_11), term_x_10), term_s_10), term_i_10), term_e_10), term_a_10), term_v_9), term_r_9), term_n_9), term_j_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = v_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, x_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,q_3 = NULL;
  g_3 = t;
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_15 = ATgetArgument(t, 0);
            q_3 = ATgetArgument(t, 1);
            {
              ATerm o_15 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_15);
        {
          ATerm q_15 = t;
          int r_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_1 = NULL,x_1 = NULL,z_1 = NULL;
              t = q_3;
              {
                ATerm s_15 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_15;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              v_1 = t;
              t = term_t_15;
              x_1 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_1), term_v_15);
              z_1 = t;
              t = SSL_printnl(x_1, z_1);
              t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_v_15));
              LocalPopChoice(r_15);
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
        t = l_15;
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
ATerm fork_and_wait_1_0 (ATerm g_63 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  b_4 = t;
  t = fork_0_0(t);
  a_4 = t;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_4;
        t = g_63(t);
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        t = SSL_waitpid(a_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_15 = ATgetArgument(t, 0);
            if(((ATgetType(y_15) != AT_INT) || (ATgetInt((ATermInt) y_15) != 0)))
              _fail(t);
            {
              ATerm b_16 = ATgetArgument(t, 1);
            }
            {
              ATerm e_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL;
  e_4 = t;
  t = b_83(t);
  t = xtc_find_0_0(t);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm f_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_4, e_4);
      t = v_5(d_4, e_4, t);
      t = term_f_16;
      f_4 = t;
      t = SSL_exit(f_4);
      return(t);
    }
    t = fork_and_wait_1_0(h_0, t);
  }
  t = e_4;
  return(t);
}
ATerm at_end_1_0 (ATerm x_69 (ATerm), ATerm t)
{
  static ATerm m_5 (ATerm t)
  {
    ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL;
    j_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_5 = ATgetFirst((ATermList) t);
        i_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_2 = NULL,p_2 = NULL,o_1 = NULL;
          t = SSLgetAnnotations(j_5);
          f_2 = t;
          t = i_5;
          t = m_5(t);
          p_2 = t;
          t = (ATerm) ATinsert(CheckATermList(p_2), h_5);
          o_1 = t;
          t = SSLsetAnnotations(o_1, f_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_5;
        t = x_69(t);
      }
    return(t);
  }
  t = m_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  j_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_4;
    }
  else
    {
      static ATerm s_0 (ATerm t)
      {
        t = not_null(l_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_4 = ATgetFirst((ATermList) t);
          if(((l_4 != NULL) && (l_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_4;
      t = at_end_1_0(s_0, t);
    }
  return(t);
}
static ATerm a_7 (ATerm r_5, ATerm t)
{
  ATerm s_6 = NULL;
  t = SSL_explode_term(r_5);
  if(match_cons(t, sym__2))
    {
      ATerm g_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_6 = NULL,v_6 = NULL,w_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      v_6 = ATgetArgument(t, 1);
      {
        ATerm h_16 = t;
        int i_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = v_6;
              return(t);
            }
            t = u_6;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(i_16);
          }
        else
          {
            t = h_16;
            t = a_7(w_6, t);
          }
      }
    }
  else
    {
      t = a_7(w_6, t);
    }
  return(t);
}
static ATerm f_6 (ATerm h_79 (ATerm), ATerm o_34, ATerm m_34, ATerm t)
{
  ATerm b_7 = NULL,d_7 = NULL,e_7 = NULL,h_7 = NULL,i_7 = NULL,k_7 = NULL;
  h_7 = t;
  t = h_79(t);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_7, o_34, m_34);
  t = o_6(b_7, o_34, m_34, t);
  {
    ATerm j_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL;
        t = term_m_16;
        n_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_7, term_m_16);
        t = n_6(b_7, n_7, t);
        LocalPopChoice(l_16);
      }
    else
      {
        t = j_16;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_7 = ATgetFirst((ATermList) t);
      e_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_m_16;
  i_7 = t;
  t = (ATerm) ATinsert(CheckATermList(e_7), (ATerm) ATinsert(CheckATermList(d_7), o_34));
  k_7 = t;
  t = SSL_table_put(b_7, i_7, k_7);
  t = h_7;
  return(t);
}
static ATerm i_8 (ATerm v_7, ATerm t)
{
  t = v_7;
  {
    ATerm n_16 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_16 = ATgetArgument(t, 0);
            ATerm t_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_16;
      }
  }
  t = term_w_16;
  t = debug_1_0(y_0, t);
  t = (ATerm) ATmakeAppl(sym__2, v_7, term_j_8);
  t = open_file_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm z_7, ATerm b_8, ATerm c_8, ATerm t)
{
  t = SSL_open_file(z_7, b_8);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_x_16;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
      {
        ATerm z_16 = t;
        int h_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_8(f_8, t);
            LocalPopChoice(h_17);
          }
        else
          {
            t = z_16;
            t = l_8(g_8, h_8, f_8, t);
          }
      }
    }
  else
    {
      t = i_8(f_8, t);
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
  ATerm o_8 = NULL,p_8 = NULL,u_8 = NULL;
  t = term_n_17;
  t = new_0_0(t);
  o_8 = t;
  t = term_s_17;
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_s_17);
  t = m_6(o_8, p_8, t);
  u_8 = t;
  {
    ATerm v_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_e_8);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_8, (ATerm) ATinsert(ATempty, term_e_8));
        t = g_6(u_8, z_8, t);
        t = new_file_0_0(t);
        LocalPopChoice(x_17);
      }
    else
      {
        t = v_17;
        t = u_8;
      }
  }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  t = new_file_0_0(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, term_j_8);
  t = open_file_0_0(t);
  t = term_n_17;
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, term_n_17);
  t = f_6(a_1, f_9, g_9, t);
  t = f_9;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  l_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,e_3 = NULL;
      t = l_10;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = r_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_f_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(d_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
    }
  else
    {
      ATerm r_3 = NULL,v_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_10;
      t = xtc_new_file_0_0(t);
      r_3 = t;
      t = r_0(t);
      v_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_3, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_3), term_f_18), m_10), term_k_18));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(r_3);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
    }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  static ATerm b_1 (ATerm t)
  {
    ATerm q_10 = NULL,r_10 = NULL;
    q_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), q_10);
    t = n_6(not_null(p_10), q_10, t);
    r_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_10, r_10);
    return(t);
  }
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  t = SSL_table_keys(p_10);
  t = map_1_0(b_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  {
    ATerm m_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_11 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        c_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, term_i_14);
        t = geq_0_0(t);
        t = y_10;
        t = p_80(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = m_18;
        t = y_10;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm f_11 = NULL;
  f_11 = t;
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        j_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_11, term_n_11);
        t = geq_0_0(t);
        t = f_11;
        t = o_80(t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = f_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_t_9);
        t = geq_0_0(t);
        t = p_11;
        t = q_80(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = p_11;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm o_24, ATerm n_24, ATerm t)
{
  t = p_73(t);
  {
    static ATerm d_1 (ATerm t)
    {
      ATerm u_11 = NULL;
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, u_11);
      t = o_73(t);
      return(t);
    }
    t = fetch_1_0(d_1, t);
  }
  t = n_24;
  return(t);
}
static ATerm z_5 (ATerm l_73 (ATerm), ATerm k_24, ATerm j_24, ATerm t)
{
  static ATerm x_12 (ATerm t)
  {
    ATerm n_12 = NULL,o_12 = NULL,s_12 = NULL;
    n_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_12 = ATgetFirst((ATermList) t);
            s_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_19 = t;
          int g_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_12;
              {
                static ATerm e_1 (ATerm t)
                {
                  t = j_24;
                  return(t);
                }
                t = y_5(l_73, e_1, o_12, s_12, t);
              }
              t = x_12(t);
              LocalPopChoice(g_19);
            }
          else
            {
              t = f_19;
              {
                ATerm p_4 = NULL,s_4 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(n_12);
                p_4 = t;
                t = s_12;
                t = x_12(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), o_12);
                q_1 = t;
                t = SSLsetAnnotations(q_1, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = k_24;
  t = x_12(t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      if((p_13 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm c_36, ATerm d_36, ATerm e_36, ATerm t)
{
  ATerm i_13 = NULL,k_13 = NULL,l_13 = NULL;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            ATerm k_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_36, d_36);
        t = n_6(c_36, d_36, t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATempty;
      }
  }
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_13, e_36);
  t = z_5(g_1, l_13, e_36, t);
  k_13 = t;
  t = SSL_table_put(c_36, d_36, k_13);
  t = i_13;
  return(t);
}
static ATerm b_6 (ATerm s_80 (ATerm), ATerm m_36, ATerm l_36, ATerm t)
{
  static ATerm h_1 (ATerm t)
  {
    ATerm s_13 = NULL,t_13 = NULL;
    if(match_cons(t, sym__2))
      {
        s_13 = ATgetArgument(t, 0);
        t_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_36, s_13, t_13);
    t = s_80(t);
    return(t);
  }
  t = l_36;
  t = map_1_0(h_1, t);
  return(t);
}
static ATerm g_6 (ATerm n_38, ATerm o_38, ATerm t)
{
  t = SSL_access(n_38, o_38);
  return(t);
}
static ATerm t_14 (ATerm n_14, ATerm t)
{
  t = SSL_fclose(n_14);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  r_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_14 = ATgetArgument(t, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_14);
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            t = t_14(r_14, t);
          }
      }
    }
  else
    {
      t = t_14(r_14, t);
    }
  return(t);
}
static ATerm c_6 (ATerm r_17, ATerm t)
{
  t = SSL_read_term_from_stream(r_17);
  return(t);
}
static ATerm d_6 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm u_14 = NULL;
  t = SSL_fopen(v_38, w_38);
  u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_14);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_14 = NULL;
  t = SSL_stdin_stream();
  x_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_14);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  t = SSL_stdout_stream();
  y_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_14);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  t = SSL_stderr_stream();
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_14);
  return(t);
}
static ATerm d_17 (ATerm j_15, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_explode_term(j_15);
  if(match_cons(t, sym__2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(((ATgetType(o_19) == AT_LIST) && !(ATisEmpty(o_19))))
          {
            k_15 = ATgetFirst((ATermList) o_19);
            {
              ATerm p_19 = (ATerm) ATgetNext((ATermList) o_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_15;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_15;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_15;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_15;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_17 (ATerm p_15, ATerm u_15, ATerm z_15, ATerm t)
{
  ATerm a_16 = NULL,c_16 = NULL,d_16 = NULL,k_16 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(z_15);
  d_16 = t;
  t = p_15;
  if(match_cons(t, sym_Path_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_16, u_15);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_16);
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(a_16, c_16, t);
  return(t);
}
static ATerm f_17 (ATerm o_16, ATerm p_16, ATerm q_16, ATerm t)
{
  ATerm r_16 = NULL,u_16 = NULL,v_16 = NULL,y_16 = NULL,y_1 = NULL;
  t = SSLgetAnnotations(q_16);
  v_16 = t;
  t = SSL_is_string(o_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, p_16);
  y_1 = t;
  t = SSLsetAnnotations(y_1, v_16);
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(r_16, u_16, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym__2))
    {
      b_17 = ATgetArgument(t, 0);
      c_17 = ATgetArgument(t, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_17(a_17, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm s_19 = t;
              int v_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_17(b_17, c_17, a_17, t);
                  LocalPopChoice(v_19);
                }
              else
                {
                  t = s_19;
                  t = f_17(b_17, c_17, a_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_17(a_17, t);
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL,j_17 = NULL;
  ATerm x_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_17 = NULL;
      k_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_17, term_a_20);
      t = e_6(t);
      LocalPopChoice(z_19);
    }
  else
    {
      t = x_19;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  i_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(j_17, t);
  g_17 = t;
  t = i_17;
  t = fclose_0_0(t);
  t = g_17;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL,p_17 = NULL;
      o_17 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      p_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_17, (ATerm) ATinsert(ATempty, term_g_20));
      t = g_6(o_17, p_17, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_20 = t;
            if((PushChoice() == 0))
              {
                ATerm q_17 = NULL,u_17 = NULL;
                q_17 = t;
                t = (ATerm) ATinsert(ATempty, term_e_8);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_17, (ATerm) ATinsert(ATempty, term_e_8));
                t = g_6(q_17, u_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_20;
              }
            t = debug_1_0(l_1, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = debug_1_0(m_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL;
  n_18 = t;
  t = term_t_15;
  p_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  q_18 = t;
  t = SSL_printnl(p_18, q_18);
  t = n_18;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__3))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      t_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_6(r_18, s_18, t_18, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  u_18 = t;
  t = term_t_15;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  w_18 = t;
  t = SSL_printnl(v_18, w_18);
  t = u_18;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  t = term_t_15;
  y_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  z_18 = t;
  t = SSL_printnl(y_18, z_18);
  t = x_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL;
  w_17 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL,l_18 = NULL;
        t = term_v_20;
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_17);
        l_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_20, (ATerm) ATmakeAppl(sym_Imported_1, w_17));
        t = n_6(j_18, l_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
  }
  a_18 = t;
  t = term_v_20;
  g_18 = t;
  t = term_x_20;
  h_18 = t;
  t = (ATerm) ATinsert(ATempty, w_17);
  i_18 = t;
  t = SSL_table_put(g_18, h_18, i_18);
  t = a_18;
  t = if_verbose4_1_0(r_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_1, t);
  z_17 = t;
  t = term_v_20;
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_20, z_17);
  t = b_6(w_1, e_18, z_17, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_v_20;
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_17);
  c_18 = t;
  t = (ATerm) ATempty;
  d_18 = t;
  t = SSL_table_put(b_18, c_18, d_18);
  t = (ATerm) ATmakeAppl(sym__3, term_v_20, (ATerm)ATmakeAppl(sym_Imported_1, w_17), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,y_19 = NULL;
  t_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_19 = ATgetFirst((ATermList) t);
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_5 = NULL,p_6 = NULL,r_6 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(t_19);
            x_5 = t;
            t = u_19;
            t = d_77(t);
            p_6 = t;
            t = y_19;
            t = filter_1_0(d_77, t);
            r_6 = t;
            t = (ATerm) ATinsert(CheckATermList(r_6), p_6);
            i_2 = t;
            t = SSLsetAnnotations(i_2, x_5);
            LocalPopChoice(z_20);
          }
        else
          {
            t = y_20;
            t = y_19;
            t = filter_1_0(d_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm t)
{
  static ATerm f_20 (ATerm t)
  {
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_67(t);
        t = f_20(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        t = n_67(t);
      }
    return(t);
  }
  t = f_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_21;
      t = get_config_0_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = c_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = NULL;
            t = term_n_21;
            h_20 = t;
            t = SSL_getenv(h_20);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
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
  t = term_p_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_20 = NULL,w_20 = NULL;
  t = term_v_20;
  u_20 = t;
  t = term_q_21;
  w_20 = t;
  t = term_r_21;
  t = n_6(u_20, w_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm s_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_21;
      }
  }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = if_verbose5_1_0(c_2, t);
  m_20 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,s_20 = NULL;
        t = term_v_20;
        o_20 = t;
        t = term_x_20;
        s_20 = t;
        t = term_y_21;
        t = n_6(o_20, s_20, t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm t_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_20 = t;
          t = repeat_2_0(e_2, _id, t);
          t = t_20;
        }
      }
  }
  t = m_20;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm h_22 (ATerm e_21, ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,k_21 = NULL;
  t = term_v_20;
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_21);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_20, (ATerm) ATmakeAppl(sym_Tool_1, e_21));
  t = n_6(h_21, k_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_22 = ATgetFirst((ATermList) t);
      if(match_cons(b_22, sym__2))
        {
          ATerm d_22 = ATgetArgument(b_22, 0);
          g_21 = ATgetArgument(b_22, 1);
        }
      else
        _fail(t);
      {
        ATerm c_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_21;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_v_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_e_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL;
      t = if_verbose5_1_0(j_2, t);
      t = xtc_load_0_0(t);
      o_21 = t;
      if(match_cons(t, sym__2))
        {
          l_21 = ATgetArgument(t, 0);
          m_21 = ATgetArgument(t, 1);
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_21 = NULL,u_21 = NULL,z_21 = NULL;
                t = term_v_20;
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_21);
                z_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_v_20, (ATerm) ATmakeAppl(sym_Tool_1, l_21));
                t = n_6(u_21, z_21, t);
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_21 != NULL) && (t_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(t_21);
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
                t = h_22(o_21, t);
              }
          }
        }
      else
        {
          t = h_22(o_21, t);
        }
      t = if_verbose5_1_0(o_2, t);
      LocalPopChoice(i_22);
    }
  else
    {
      t = f_22;
      {
        ATerm g_22 = NULL,m_7 = NULL,o_7 = NULL;
        g_22 = t;
        t = term_t_15;
        m_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_22), g_22), term_n_22);
        o_7 = t;
        t = SSL_printnl(m_7, o_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_22), g_22), term_n_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  t = term_p_22;
  t = xtc_find_0_0(t);
  j_22 = t;
  t = term_q_22;
  t = xtc_find_0_0(t);
  k_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_22), term_r_22), j_22), term_r_22);
  return(t);
}
static ATerm h_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_copy(l_14, m_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL;
        t = g_23;
        t = o_0(t);
        t_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = t_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = t_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_23, t_7);
        t = h_6(h_23, t_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_8 = NULL;
              t = g_23;
              t = o_0(t);
              m_8 = t;
              {
                ATerm w_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_8 = NULL;
                    n_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = n_8;
                          }
                        else
                          {
                            t = n_8;
                            if((h_23 != t))
                              {
                                _fail(t);
                              }
                            t = n_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_23, m_8);
              t = h_6(h_23, m_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = g_23;
              t = o_0(t);
              if((h_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
            }
        }
      }
  }
  return(t);
}
static ATerm i_6 (ATerm k_35, ATerm l_35, ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  o_23 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
        t = n_6(k_35, l_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_22 = ATgetFirst((ATermList) t);
            n_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
        t = SSL_table_put(k_35, l_35, n_23);
        t = (ATerm) ATmakeAppl(sym__3, k_35, l_35, n_23);
      }
    else
      {
        t = x_22;
        t = SSL_table_remove(k_35, l_35);
        t = (ATerm) ATmakeAppl(sym__2, k_35, l_35);
      }
  }
  t = o_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL;
  s_23 = t;
  t = e_79(t);
  r_23 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_m_16;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_23, term_m_16);
        t = n_6(r_23, u_23, t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_23 = ATgetFirst((ATermList) t);
      p_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_m_16;
  t_23 = t;
  t = SSL_table_put(r_23, t_23, p_23);
  t = q_23;
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm v_23 = NULL;
      v_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_23, v_23);
      t = i_6(r_23, v_23, t);
      return(t);
    }
    t = map_1_0(b_3, t);
  }
  t = s_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_79(t);
      t = a_80(t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      t = a_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  y_23 = t;
  t = d_79(t);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, term_m_16);
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_23 = ATgetArgument(t, 0);
            ATerm j_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_16;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_23, term_m_16);
        t = n_6(x_23, g_24, t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATempty;
      }
  }
  a_24 = t;
  t = term_m_16;
  b_24 = t;
  t = (ATerm) ATinsert(CheckATermList(a_24), (ATerm) ATempty);
  c_24 = t;
  t = SSL_table_put(x_23, b_24, c_24);
  t = y_23;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_24);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = y_24;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_y_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm q_24 = NULL;
  static ATerm f_3 (ATerm t)
  {
    ATerm s_24 = NULL;
    s_24 = t;
    {
      ATerm m_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_24 = NULL,u_24 = NULL;
          t = term_y_17;
          t_24 = t;
          t = term_m_16;
          u_24 = t;
          t = term_z_23;
          t = n_6(t_24, u_24, t);
          LocalPopChoice(w_23);
        }
      else
        {
          t = m_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_24 != NULL) && (q_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_24 = ATgetFirst((ATermList) t);
        {
          ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_24;
    t = map_1_0(h_3, t);
    t = s_24;
    t = end_scope_1_0(i_3, t);
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(n_82, f_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_18;
      t = get_config_0_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = term_h_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  static ATerm j_3 (ATerm t)
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_25);
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
        t = term_o_4;
      }
    t = o_82(t);
    t = copy_to_1_0(l_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,p_25 = NULL;
  e_25 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  g_25 = t;
  t = term_t_15;
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_24), g_25), term_m_24);
  p_25 = t;
  t = SSL_printnl(i_25, p_25);
  t = term_d_9;
  h_25 = t;
  t = SSL_exit(h_25);
  t = e_25;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  if(match_string(t, "-k"))
    {
      t = r_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_25;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm s_25 = NULL,w_25 = NULL,x_25 = NULL;
  s_25 = t;
  t = SSL_string_to_int(s_25);
  w_25 = t;
  t = term_r_24;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, w_25);
  t = q_6(x_25, w_25, t);
  t = s_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, o_3, p_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm z_25 = NULL;
  z_25 = t;
  if(match_string(t, "-S"))
    {
      t = z_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_25;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  t = term_a_19;
  b_26 = t;
  t = term_w_24;
  c_26 = t;
  t = term_x_24;
  t = q_6(b_26, c_26, t);
  t = term_z_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_a_25;
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
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = SSL_string_to_int(f_26);
  g_26 = t;
  t = term_a_19;
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, g_26);
  t = q_6(h_26, g_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_26);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_b_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  t = term_c_25;
  i_26 = t;
  t = term_n_17;
  j_26 = t;
  t = term_f_25;
  t = q_6(i_26, j_26, t);
  t = term_j_25;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_3, t_3, u_3, t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_3, x_3, y_3, t);
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = Option_3_0(z_3, c_4, g_4, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm k_26 = NULL;
  t = term_q_25;
  k_26 = t;
  t = SSL_table_put(k_26, f_37, g_37);
  t = (ATerm) ATmakeAppl(sym__3, term_q_25, f_37, g_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
      t = term_n_17;
      t = e_0(t);
      q_26 = t;
      t = term_t_25;
      r_26 = t;
      t = term_u_25;
      s_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, q_26);
      t = o_6(r_26, s_26, q_26, t);
      _fail(t);
    }
  else
    {
      ATerm v_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_26 = ATgetFirst((ATermList) t);
          p_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_26;
      t = c_0(t);
      t = term_n_17;
      t = d_0(t);
      v_26 = t;
      t = (ATerm) ATinsert(CheckATermList(p_26), v_26);
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  if(match_string(t, "-o"))
    {
      t = x_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_26;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm a_27 = NULL,d_27 = NULL;
  a_27 = t;
  t = term_f_18;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_18, a_27);
  t = q_6(d_27, a_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_27);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, m_4, t);
  return(t);
}
static ATerm o_6 (ATerm f_35, ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,k_27 = NULL;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
  {
    ATerm y_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_26 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_35, g_35);
        t = n_6(f_35, g_35, t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = y_25;
        t = (ATerm) ATempty;
      }
  }
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), e_35);
  k_27 = t;
  t = SSL_table_put(f_35, g_35, k_27);
  t = f_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL,f_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
      t = term_n_17;
      t = n_0(t);
      j_28 = t;
      t = term_t_25;
      k_28 = t;
      t = term_u_25;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, j_28);
      t = o_6(k_28, l_28, j_28, t);
      _fail(t);
    }
  else
    {
      ATerm p_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_27 = ATgetFirst((ATermList) t);
          a_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_28 = ATgetFirst((ATermList) t);
          f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_27;
      t = k_0(t);
      t = b_28;
      t = l_0(t);
      p_28 = t;
      t = (ATerm) ATinsert(CheckATermList(f_28), p_28);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-i"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = term_k_18;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, s_28);
  t = q_6(t_28, s_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_28);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_17;
  t = whoami_0_0(t);
  u_28 = t;
  t = term_t_15;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_26), u_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = term_d_9;
  v_28 = t;
  t = SSL_exit(v_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_33, b_33);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      t = SSL_addr(a_33, b_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_75 (ATerm), ATerm a_76 (ATerm), ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_28;
      t = z_75(t);
    }
  else
    {
      ATerm e_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_29 = ATgetFirst((ATermList) t);
          b_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_29;
      t = foldr_2_0(z_75, a_76, t);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_29, e_29);
      t = a_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      e_9 = ATgetArgument(t, 0);
      h_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(e_9, h_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_29 = NULL,x_8 = NULL,y_8 = NULL;
  t = times_0_0(t);
  y_8 = t;
  t = SSL_explode_term(y_8);
  if(match_cons(t, sym__2))
    {
      ATerm w_26 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8;
  t = foldr_2_0(t_4, u_4, t);
  h_29 = t;
  t = SSL_TicksToSeconds(h_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  u_29 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_29;
        if((v_29 != t))
          {
            _fail(t);
          }
        t = u_29;
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
        {
          ATerm b_27 = t;
          int c_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_29, w_29);
              LocalPopChoice(c_27);
            }
          else
            {
              t = b_27;
              t = SSL_gtr(v_29, w_29);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_29, w_29);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm e_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_30 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        c_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_30, term_d_9);
        t = geq_0_0(t);
        t = a_30;
        t = l_80(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = e_27;
        t = a_30;
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,h_30 = NULL,i_30 = NULL;
  t = run_time_0_0(t);
  e_30 = t;
  t = term_n_17;
  t = whoami_0_0(t);
  f_30 = t;
  t = term_t_15;
  h_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_27), e_30), term_s_8), f_30);
  i_30 = t;
  t = SSL_printnl(h_30, i_30);
  t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_27), e_30), term_s_8), f_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_24;
  j_30 = t;
  t = SSL_exit(j_30);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_30;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_30 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(s_30);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_30);
            k_2 = t;
            t = SSLsetAnnotations(k_2, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_30;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm j_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_27;
      t = get_config_0_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = j_27;
      t = fetch_1_0(x_4, t);
    }
  t = p_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_31 = NULL,b_31 = NULL;
        static ATerm z_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_31)), not_null(b_31));
          return(t);
        }
        t = w_30;
        t = i_0(t);
        if(((a_31 != NULL) && (a_31 != t)))
          _fail(t);
        else
          a_31 = t;
        t = v_30;
        t = g_0(t);
        if(((b_31 != NULL) && (b_31 != t)))
          _fail(t);
        else
          b_31 = t;
        t = w_30;
        t = reverse_acc_2_0(g_0, z_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,m_2 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_31);
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_31);
  m_2 = t;
  t = SSLsetAnnotations(m_2, f_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_31), term_n_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  ATerm o_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_26;
      t = get_config_0_0(t);
      LocalPopChoice(p_27);
    }
  else
    {
      t = o_27;
      t = fetch_1_0(c_5, t);
    }
  t = term_q_27;
  t = echo_0_0(t);
  t = term_t_25;
  d_31 = t;
  t = term_u_25;
  e_31 = t;
  t = term_r_27;
  t = n_6(d_31, e_31, t);
  t = reverse_acc_2_0(_id, d_5, t);
  t = map_1_0(f_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  static ATerm i_32 (ATerm t)
  {
    ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
    f_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_32 = ATgetFirst((ATermList) t);
        h_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_27 = t;
      int t_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_10 = NULL,t_10 = NULL,u_2 = NULL;
          t = SSLgetAnnotations(f_32);
          j_10 = t;
          t = g_32;
          t = r_69(t);
          t_10 = t;
          t = (ATerm) ATinsert(CheckATermList(h_32), t_10);
          u_2 = t;
          t = SSLsetAnnotations(u_2, j_10);
          LocalPopChoice(t_27);
        }
      else
        {
          t = s_27;
          {
            ATerm h_11 = NULL,l_11 = NULL,v_2 = NULL;
            t = SSLgetAnnotations(f_32);
            h_11 = t;
            t = h_32;
            t = i_32(t);
            l_11 = t;
            t = (ATerm) ATinsert(CheckATermList(l_11), g_32);
            v_2 = t;
            t = SSLsetAnnotations(v_2, h_11);
          }
        }
    }
    return(t);
  }
  t = i_32(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_27 = ATgetFirst((ATermList) t);
                ATerm x_27 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_32;
          }
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATinsert(ATempty, m_32);
      }
  }
  n_32 = t;
  t = term_h_24;
  o_32 = t;
  t = SSL_printnl(o_32, n_32);
  t = m_32;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm v_31, ATerm w_31, ATerm t)
{
  t = SSL_strcat(v_31, w_31);
  return(t);
}
ATerm debug_1_0 (ATerm p_64 (ATerm), ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  s_32 = t;
  t = p_64(t);
  t_32 = t;
  t = term_t_15;
  u_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_32), t_32);
  v_32 = t;
  t = SSL_printnl(u_32, v_32);
  t = s_32;
  return(t);
}
ATerm map_1_0 (ATerm h_69 (ATerm), ATerm t)
{
  static ATerm m_33 (ATerm t)
  {
    ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
    j_33 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_33;
      }
    else
      {
        ATerm e_12 = NULL,k_12 = NULL,l_12 = NULL,k_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_33 = ATgetFirst((ATermList) t);
            l_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_33);
        e_12 = t;
        t = k_33;
        t = h_69(t);
        k_12 = t;
        t = l_33;
        t = m_33(t);
        l_12 = t;
        t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
        k_3 = t;
        t = SSLsetAnnotations(k_3, e_12);
      }
    return(t);
  }
  t = m_33(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm y_27 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = y_27;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
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
      ATerm u_33 = NULL;
      u_33 = t;
      t = SSL_is_string(u_33);
      LocalPopChoice(g_28);
    }
  else
    {
      t = e_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_5, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            {
              ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
              a_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_34 = ATgetArgument(t, 0);
                  t = b_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_34 = ATgetArgument(t, 0);
                      t = b_34;
                      {
                        ATerm m_28 = t;
                        int n_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_28);
                          }
                        else
                          {
                            t = m_28;
                            t = debug_1_0(k_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_34 = NULL,s_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_34 = ATgetArgument(t, 0);
                          c_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_34;
                      t = eval_config_0_0(t);
                      r_34 = t;
                      t = c_34;
                      t = eval_config_0_0(t);
                      s_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_34, s_34);
                      t = m_6(r_34, s_34, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm w_36, ATerm x_36, ATerm t)
{
  t = SSL_table_get(w_36, x_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_34 = NULL,y_34 = NULL;
  w_34 = t;
  t = term_q_25;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, w_34);
  t = n_6(y_34, w_34, t);
  {
    ATerm o_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,h_35 = NULL;
        t = eval_config_0_0(t);
        z_34 = t;
        t = term_q_25;
        h_35 = t;
        t = SSL_table_put(h_35, w_34, z_34);
        t = z_34;
        LocalPopChoice(q_28);
      }
    else
      {
        t = o_28;
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
static ATerm n_5 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  t = term_y_28;
  n_35 = t;
  t = term_n_17;
  o_35 = t;
  t = term_c_29;
  t = q_6(n_35, o_35, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_d_29;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  t = term_y_28;
  r_35 = t;
  t = term_n_17;
  s_35 = t;
  t = term_c_29;
  t = q_6(r_35, s_35, t);
  t = term_f_29;
  p_35 = t;
  t = term_n_17;
  q_35 = t;
  t = term_g_29;
  t = q_6(p_35, q_35, t);
  t = term_i_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, n_5, o_5, t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      t = Option_3_0(p_5, q_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,n_3 = NULL;
  y_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_35 = ATgetFirst((ATermList) t);
      v_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_35);
  t_35 = t;
  t = u_35;
  t = h_56(t);
  w_35 = t;
  t = v_35;
  t = i_56(t);
  x_35 = t;
  t = (ATerm) ATinsert(CheckATermList(x_35), w_35);
  n_3 = t;
  t = SSLsetAnnotations(n_3, t_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,p_36 = NULL,r_36 = NULL,s_36 = NULL,v_4 = NULL;
  i_36 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_29;
        t = n_86(t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
      }
  }
  t = i_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_36 = ATgetFirst((ATermList) t);
      p_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  j_36 = t;
  t = term_n_26;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, k_36);
  t = q_6(s_36, k_36, t);
  t = p_36;
  {
    static ATerm e_37 (ATerm t)
    {
      ATerm p_29 = t;
      int q_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_29 = t;
          int s_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_36 = NULL;
              v_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_36;
              LocalPopChoice(s_29);
            }
          else
            {
              t = r_29;
              t = n_86(t);
              t = Cons_2_0(_id, e_37, t);
            }
          LocalPopChoice(q_29);
        }
      else
        {
          t = p_29;
          {
            ATerm a_37 = NULL,b_37 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_37 = ATgetFirst((ATermList) t);
                b_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_37), (ATerm) ATmakeAppl(sym_Undefined_1, a_37));
          }
        }
      return(t);
    }
    t = e_37(t);
  }
  r_36 = t;
  t = (ATerm) ATinsert(CheckATermList(r_36), (ATerm) ATmakeAppl(sym_Program_1, k_36));
  v_4 = t;
  t = SSLsetAnnotations(v_4, j_36);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  if(match_string(t, "--help"))
    {
      t = x_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_37;
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  t = term_m_27;
  y_37 = t;
  t = term_n_17;
  z_37 = t;
  t = term_t_29;
  t = q_6(y_37, z_37, t);
  t = term_x_29;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  n_37 = t;
  t = term_t_25;
  u_37 = t;
  t = term_u_25;
  v_37 = t;
  t = (ATerm) ATempty;
  w_37 = t;
  t = SSL_table_put(u_37, v_37, w_37);
  t = n_37;
  {
    static ATerm w_5 (ATerm t)
    {
      ATerm z_29 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_86(t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = z_29;
          {
            ATerm d_30 = t;
            int g_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, l_6, t_6, t);
                LocalPopChoice(g_30);
              }
            else
              {
                t = d_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_5, t);
  }
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_38 = NULL;
        j_38 = t;
        {
          ATerm m_30 = t;
          int n_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL;
              t = j_38;
              {
                ATerm o_30 = t;
                int p_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_30);
                  }
                else
                  {
                    t = o_30;
                    t = fetch_1_0(x_6, t);
                  }
              }
              t = j_38;
              t = default_system_usage_0_0(t);
              t = term_w_24;
              h_13 = t;
              t = SSL_exit(h_13);
              LocalPopChoice(n_30);
            }
          else
            {
              t = m_30;
              {
                ATerm u_13 = NULL;
                t = term_y_28;
                t = get_config_0_0(t);
                t = j_38;
                t = default_system_about_0_0(t);
                t = term_w_24;
                u_13 = t;
                t = SSL_exit(u_13);
              }
            }
        }
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm q_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
              static ATerm y_6 (ATerm t)
              {
                ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,y_4 = NULL;
                r_38 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_38 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_38);
                p_38 = t;
                t = q_38;
                if(((l_37 != NULL) && (l_37 != t)))
                  _fail(t);
                else
                  l_37 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_38);
                y_4 = t;
                t = SSLsetAnnotations(y_4, p_38);
                return(t);
              }
              t = fetch_1_0(y_6, t);
              t = term_t_15;
              l_38 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), term_u_30);
              m_38 = t;
              t = SSL_printnl(l_38, m_38);
              t = (ATerm) ATmakeAppl(sym__2, term_t_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_37)), term_u_30));
              t = default_system_usage_0_0(t);
              t = term_d_9;
              k_38 = t;
              t = SSL_exit(k_38);
              LocalPopChoice(t_30);
            }
          else
            {
              t = q_30;
            }
        }
      }
  }
  m_37 = t;
  t = term_t_25;
  t_37 = t;
  t = SSL_table_destroy(t_37);
  t = m_37;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = parse_options_1_0(r_84, t);
  a_39 = t;
  t = term_x_30;
  d_39 = t;
  t = SSL_table_create(d_39);
  t = term_x_30;
  b_39 = t;
  t = term_y_30;
  c_39 = t;
  t = SSL_table_put(b_39, c_39, a_39);
  t = a_39;
  t = t_84(t);
  {
    ATerm z_30 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_84, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = z_30;
        {
          ATerm i_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_31);
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
static ATerm z_6 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm p_31 = t;
              int q_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_7, g_7, j_7, t);
                  LocalPopChoice(q_31);
                }
              else
                {
                  t = p_31;
                  {
                    ATerm r_31 = t;
                    int s_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_31);
                      }
                    else
                      {
                        t = r_31;
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
static ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  t = term_t_31;
  r_39 = t;
  t = term_n_17;
  s_39 = t;
  t = term_u_31;
  t = q_6(r_39, s_39, t);
  t = term_x_31;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_y_31;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_40 = NULL,e_40 = NULL;
      e_40 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_40 = ATgetArgument(t, 0);
          {
            ATerm y_13 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(e_40);
            y_13 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_40);
            a_5 = t;
            t = SSLsetAnnotations(a_5, y_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_40;
        }
      LocalPopChoice(a_32);
      t = xtc_transform_file_2_0(p_7, q_7, t);
    }
  else
    {
      t = z_31;
      t = xtc_transform_term_2_0(r_7, s_7, t);
    }
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_40 = NULL,p_40 = NULL;
        p_40 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_40 = ATgetArgument(t, 0);
            {
              ATerm v_14 = NULL,b_5 = NULL;
              t = SSLgetAnnotations(p_40);
              v_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_40);
              b_5 = t;
              t = SSLsetAnnotations(b_5, v_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_40;
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(u_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(w_7, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_40 = NULL,b_41 = NULL;
        b_41 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_40 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,e_5 = NULL;
              t = SSLgetAnnotations(b_41);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_40);
              e_5 = t;
              t = SSLsetAnnotations(e_5, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_41;
          }
        LocalPopChoice(e_32);
        t = xtc_transform_file_2_0(x_7, y_7, t);
      }
    else
      {
        t = d_32;
        t = xtc_transform_term_2_0(a_8, d_8, t);
      }
  }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_6, default_usage_0_0, _id, c_7, t);
  return(t);
}
