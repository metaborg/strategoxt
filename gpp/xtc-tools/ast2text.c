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
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
}
ATerm term_f_32;
ATerm term_d_32;
ATerm term_v_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_u_30;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_j_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_d_22;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_q_19;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
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
ATerm term_k_15;
ATerm term_j_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
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
ATerm term_k_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_b_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_9, term_h_8, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_t_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_10, term_b_10, term_c_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_10, term_i_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_r_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_w_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_i_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_q_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_l_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_c_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_h_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_t_20);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_q_22);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_e_8, term_l_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_p_8);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_i_25);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_p_8);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_p_8);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_p_8);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_width_0_0 (ATerm t);
static ATerm c_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm m_83 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm e_6 (ATerm z_64 (ATerm), ATerm v_164, ATerm v_17, ATerm t);
static ATerm v_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t);
static ATerm f_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm o_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t);
static ATerm i_6 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm j_6 (ATerm t_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm k_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm l_6 (ATerm m_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm p_6 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm j_10 (ATerm y_9, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_6 (ATerm t_17, ATerm t);
static ATerm n_6 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_13 (ATerm d_11, ATerm t);
static ATerm h_13 (ATerm t_11, ATerm u_11, ATerm v_11, ATerm t);
static ATerm i_13 (ATerm o_12, ATerm p_12, ATerm s_12, ATerm t);
static ATerm o_6 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm s_18 (ATerm s_17, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm h_83 (ATerm), ATerm t);
static ATerm q_6 (ATerm p_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm r_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm m_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_79 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_82 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm u_82 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_26 (ATerm z_25, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_6 (ATerm n_37, ATerm m_37, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_6 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm x_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm b_7 (ATerm h_37, ATerm i_37, ATerm t);
static ATerm y_6 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm z_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm z_7 = t;
  int a_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_8;
      t = get_config_0_0(t);
      LocalPopChoice(a_8);
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_b_8);
      }
    }
  else
    {
      t = z_7;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = SSL_subtr(i_33, j_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL,m_0 = NULL,q_0 = NULL;
  t = term_e_8;
  {
    ATerm f_8 = t;
    int g_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(g_8);
      }
    else
      {
        t = f_8;
        t = term_h_8;
      }
  }
  j_0 = t;
  t = term_h_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_0, term_h_8);
  t = c_6(j_0, q_0, t);
  m_0 = t;
  t = SSL_int_to_string(m_0);
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_e_8);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_1 = NULL,g_1 = NULL;
      g_1 = t;
      if(match_cons(t, sym_FILE_1))
        {
          e_1 = ATgetArgument(t, 0);
          {
            ATerm s_0 = NULL,w_0 = NULL;
            t = SSLgetAnnotations(g_1);
            s_0 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
            w_0 = t;
            t = SSLsetAnnotations(w_0, s_0);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_1;
        }
      LocalPopChoice(l_8);
      {
        static ATerm h_0 (ATerm t)
        {
          ATerm h_1 = NULL,i_1 = NULL,p_1 = NULL;
          t = term_p_8;
          t = m_83(t);
          p_1 = t;
          t = SSL_int_to_string(p_1);
          h_1 = t;
          t = term_p_8;
          t = pass_verbose_0_0(t);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, h_1), term_b_8), i_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(a_0, h_0, t);
      }
    }
  else
    {
      t = k_8;
      {
        static ATerm u_0 (ATerm t)
        {
          ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL;
          t = term_p_8;
          t = m_83(t);
          t_1 = t;
          t = SSL_int_to_string(t_1);
          q_1 = t;
          t = term_p_8;
          t = pass_verbose_0_0(t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, q_1), term_b_8), r_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(t_0, u_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_8);
      p_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATempty, term_r_8));
      t = p_6(l_2, p_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm q_2 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_2);
  return(t);
}
static ATerm e_6 (ATerm z_64 (ATerm), ATerm v_164, ATerm v_17, ATerm t)
{
  ATerm r_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_164, term_t_8);
  t = o_6(t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_2, v_17);
  t = z_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          u_2 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(u_2, v_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_82 (ATerm), ATerm h_82 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL;
  t_2 = t;
  t = xtc_new_file_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, t_2);
  t = e_6(v_0, s_2, t_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_2);
  t = xtc_transform_file_2_0(g_82, h_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  u_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_3 = ATgetArgument(t, 0);
      {
        ATerm j_1 = NULL,k_1 = NULL;
        t = SSL_int_to_string(w_3);
        j_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), j_1), term_w_8);
        k_1 = t;
        t = SSL_concat_strings(k_1);
      }
    }
  else
    {
      ATerm c_2 = NULL,d_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_3 = ATgetArgument(t, 0);
          x_3 = ATgetArgument(t, 1);
          y_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_3);
      c_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_3), term_z_8), c_2), term_y_8), w_3);
      d_2 = t;
      t = SSL_concat_strings(d_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm d_4 = NULL;
  static ATerm x_0 (ATerm t)
  {
    t = b_70(t);
    if(((d_4 != NULL) && (d_4 != t)))
      _fail(t);
    else
      d_4 = t;
    return(t);
  }
  t = fetch_1_0(x_0, t);
  t = not_null(d_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if((e_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), term_t_16), term_n_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_j_15), term_y_14), term_p_14), term_s_13), term_l_13), term_z_12), term_r_12), term_l_12), term_b_12), term_w_11), term_o_11), term_i_11), term_e_11), term_y_10), term_t_10), term_m_10), term_d_10), term_z_9), term_u_9), term_q_9);
        t = fetch_elem_1_0(z_0, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_4 = NULL,v_4 = NULL;
  k_4 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            v_4 = ATgetArgument(t, 1);
            {
              ATerm e_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_17);
        {
          ATerm h_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL,n_2 = NULL,o_2 = NULL;
              t = v_4;
              {
                ATerm k_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_2 = t;
              t = term_l_17;
              n_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_2), term_m_17);
              o_2 = t;
              t = SSL_printnl(n_2, o_2);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, j_2), term_m_17));
              LocalPopChoice(j_17);
            }
          else
            {
              t = h_17;
              t = k_4;
            }
        }
      }
    else
      {
        t = b_17;
        t = k_4;
      }
  }
  t = k_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm o_63 (ATerm), ATerm t)
{
  ATerm f_5 = NULL,h_5 = NULL;
  h_5 = t;
  t = fork_0_0(t);
  f_5 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_5;
        t = o_63(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = SSL_waitpid(f_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_17 = ATgetArgument(t, 0);
            if(((ATgetType(r_17) != AT_INT) || (ATgetInt((ATermInt) r_17) != 0)))
              _fail(t);
            {
              ATerm u_17 = ATgetArgument(t, 1);
            }
            {
              ATerm w_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm k_5 = NULL,m_5 = NULL;
    k_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), k_5);
    t = y_6(not_null(j_5), k_5, t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_5, m_5);
    return(t);
  }
  if(((j_5 != NULL) && (j_5 != t)))
    _fail(t);
  else
    j_5 = t;
  t = SSL_table_keys(j_5);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm o_5 = NULL;
  o_5 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_5, term_e_16);
        t = geq_0_0(t);
        t = o_5;
        t = g_95(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = o_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    ATerm z_17 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        w_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_6, term_y_11);
        t = geq_0_0(t);
        t = v_5;
        t = f_95(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = z_17;
        t = v_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_7 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        j_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_7, term_b_10);
        t = geq_0_0(t);
        t = f_7;
        t = h_95(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        t = f_7;
      }
  }
  return(t);
}
static ATerm i_6 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = x_73(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm p_7 = NULL;
      p_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, p_7);
      t = w_73(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm j_6 (ATerm t_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm v_8 (ATerm t)
  {
    ATerm j_8 = NULL,m_8 = NULL,o_8 = NULL;
    j_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_8 = ATgetFirst((ATermList) t);
            o_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_8;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = i_6(t_73, d_1, m_8, o_8, t);
              }
              t = v_8(t);
              LocalPopChoice(n_18);
            }
          else
            {
              t = j_18;
              {
                ATerm b_3 = NULL,g_3 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(j_8);
                b_3 = t;
                t = o_8;
                t = v_8(t);
                g_3 = t;
                t = (ATerm) ATinsert(CheckATermList(g_3), m_8);
                y_0 = t;
                t = SSLsetAnnotations(y_0, b_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = v_8(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      if((l_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm a_9 = NULL,e_9 = NULL,f_9 = NULL;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_18 = ATgetArgument(t, 0);
            ATerm t_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = y_6(e_36, f_36, t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATempty;
      }
  }
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, g_36);
  t = j_6(f_1, f_9, g_36, t);
  e_9 = t;
  t = SSL_table_put(e_36, f_36, e_9);
  t = a_9;
  return(t);
}
static ATerm l_6 (ATerm m_80 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm m_9 = NULL,n_9 = NULL;
    if(match_cons(t, sym__2))
      {
        m_9 = ATgetArgument(t, 0);
        n_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, m_9, n_9);
    t = m_80(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm p_6 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_access(p_38, q_38);
  return(t);
}
static ATerm j_10 (ATerm y_9, ATerm t)
{
  t = SSL_fclose(y_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  f_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_10 = ATgetArgument(t, 0);
      {
        ATerm w_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_10);
            LocalPopChoice(b_19);
          }
        else
          {
            t = w_18;
            t = j_10(f_10, t);
          }
      }
    }
  else
    {
      t = j_10(f_10, t);
    }
  return(t);
}
static ATerm m_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm n_6 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm k_10 = NULL;
  t = SSL_fopen(y_38, z_38);
  k_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  t = SSL_stdin_stream();
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_10 = NULL;
  t = SSL_stdout_stream();
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stderr_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
static ATerm g_13 (ATerm d_11, ATerm t)
{
  ATerm k_11 = NULL;
  t = SSL_explode_term(d_11);
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            k_11 = ATgetFirst((ATermList) e_19);
            {
              ATerm f_19 = (ATerm) ATgetNext((ATermList) e_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_13 (ATerm t_11, ATerm u_11, ATerm v_11, ATerm t)
{
  ATerm c_12 = NULL,g_12 = NULL,h_12 = NULL,k_12 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(v_11);
  h_12 = t;
  t = t_11;
  if(match_cons(t, sym_Path_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_12, u_11);
  c_1 = t;
  t = SSLsetAnnotations(c_1, h_12);
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(c_12, g_12, t);
  return(t);
}
static ATerm i_13 (ATerm o_12, ATerm p_12, ATerm s_12, ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,a_13 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(s_12);
  x_12 = t;
  t = SSL_is_string(o_12);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, p_12);
  u_1 = t;
  t = SSLsetAnnotations(u_1, x_12);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(v_12, w_12, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
      {
        ATerm g_19 = t;
        int h_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_13(d_13, t);
            LocalPopChoice(h_19);
          }
        else
          {
            t = g_19;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_13(e_13, f_13, d_13, t);
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  t = i_13(e_13, f_13, d_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_13(d_13, t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_q_19;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_13 = NULL,m_13 = NULL,n_13 = NULL;
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL;
      o_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_13, term_y_19);
      t = o_6(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = v_19;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  m_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(n_13, t);
  j_13 = t;
  t = m_13;
  t = fclose_0_0(t);
  t = j_13;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_13 = NULL,u_13 = NULL;
      t_13 = t;
      t = (ATerm) ATinsert(ATempty, term_g_20);
      u_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_13, (ATerm) ATinsert(ATempty, term_g_20));
      t = p_6(t_13, u_13, t);
      LocalPopChoice(e_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_20;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = t;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL,w_13 = NULL;
                v_13 = t;
                t = (ATerm) ATinsert(ATempty, term_r_8);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATinsert(ATempty, term_r_8));
                t = p_6(v_13, w_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_20;
              }
            t = debug_1_0(n_1, t);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_n_20;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,b_15 = NULL;
  t_14 = t;
  t = term_l_17;
  u_14 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  b_15 = t;
  t = SSL_printnl(u_14, b_15);
  t = t_14;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__3))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      f_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_6(d_15, e_15, f_15, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  t = term_l_17;
  h_15 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  i_15 = t;
  t = SSL_printnl(h_15, i_15);
  t = g_15;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  t = term_l_17;
  m_15 = t;
  t = (ATerm) ATinsert(ATempty, term_p_20);
  n_15 = t;
  t = SSL_printnl(m_15, n_15);
  t = l_15;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,d_14 = NULL,e_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,m_14 = NULL;
  x_13 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm r_20 = t;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL,s_14 = NULL;
        t = term_s_20;
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_13);
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATmakeAppl(sym_Imported_1, x_13));
        t = y_6(q_14, s_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_20;
      }
  }
  z_13 = t;
  t = term_s_20;
  j_14 = t;
  t = term_t_20;
  k_14 = t;
  t = (ATerm) ATinsert(ATempty, x_13);
  m_14 = t;
  t = SSL_table_put(j_14, k_14, m_14);
  t = z_13;
  t = if_verbose4_1_0(w_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  y_13 = t;
  t = term_s_20;
  i_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, y_13);
  t = l_6(z_1, i_14, y_13, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_s_20;
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_13);
  d_14 = t;
  t = (ATerm) ATempty;
  e_14 = t;
  t = SSL_table_put(a_14, d_14, e_14);
  t = (ATerm) ATmakeAppl(sym__3, term_s_20, (ATerm)ATmakeAppl(sym_Imported_1, x_13), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,l_16 = NULL,m_16 = NULL;
  j_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 = NULL,d_5 = NULL,e_5 = NULL,f_3 = NULL;
            t = SSLgetAnnotations(j_16);
            s_4 = t;
            t = l_16;
            t = l_77(t);
            d_5 = t;
            t = m_16;
            t = filter_1_0(l_77, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), d_5);
            f_3 = t;
            t = SSLsetAnnotations(f_3, s_4);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = m_16;
            t = filter_1_0(l_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t)
{
  static ATerm p_16 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_67(t);
        t = p_16(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = v_67(t);
      }
    return(t);
  }
  t = p_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_21;
      t = get_config_0_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_16 = NULL;
            t = term_f_21;
            q_16 = t;
            t = SSL_getenv(q_16);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL;
  t = term_s_20;
  g_17 = t;
  t = term_h_21;
  i_17 = t;
  t = term_i_21;
  t = y_6(g_17, i_17, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_21;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_16 = NULL;
  t = if_verbose5_1_0(e_2, t);
  u_16 = t;
  {
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_16 = NULL,a_17 = NULL;
        t = term_s_20;
        v_16 = t;
        t = term_t_20;
        a_17 = t;
        t = term_q_21;
        t = y_6(v_16, a_17, t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm f_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_17 = t;
          t = repeat_2_0(g_2, _id, t);
          t = f_17;
        }
      }
  }
  t = u_16;
  t = if_verbose5_1_0(h_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
static ATerm s_18 (ATerm s_17, ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  t = term_s_20;
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_17);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATmakeAppl(sym_Tool_1, s_17));
  t = y_6(b_18, c_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_21 = ATgetFirst((ATermList) t);
      if(match_cons(w_21, sym__2))
        {
          ATerm a_22 = ATgetArgument(w_21, 0);
          a_18 = ATgetArgument(w_21, 1);
        }
      else
        _fail(t);
      {
        ATerm z_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_18;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_u_21;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_s_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_18 = NULL,e_18 = NULL,h_18 = NULL;
      t = if_verbose5_1_0(k_2, t);
      t = xtc_load_0_0(t);
      h_18 = t;
      if(match_cons(t, sym__2))
        {
          d_18 = ATgetArgument(t, 0);
          e_18 = ATgetArgument(t, 1);
          {
            ATerm i_22 = t;
            int j_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
                t = term_s_20;
                l_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_18);
                m_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATmakeAppl(sym_Tool_1, d_18));
                t = y_6(l_18, m_18, t);
                {
                  static ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((k_18 != NULL) && (k_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_2, t);
                }
                t = not_null(k_18);
                LocalPopChoice(j_22);
              }
            else
              {
                t = i_22;
                t = s_18(h_18, t);
              }
          }
        }
      else
        {
          t = s_18(h_18, t);
        }
      t = if_verbose5_1_0(x_2, t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm r_18 = NULL,x_5 = NULL,y_5 = NULL;
        r_18 = t;
        t = term_l_17;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), r_18), term_l_22);
        y_5 = t;
        t = SSL_printnl(x_5, y_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), r_18), term_l_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  v_18 = t;
  t = h_83(t);
  t = xtc_find_0_0(t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
  {
    static ATerm c_3 (ATerm t)
    {
      ATerm x_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
      t = f_6(u_18, v_18, t);
      t = term_n_22;
      x_18 = t;
      t = SSL_exit(x_18);
      return(t);
    }
    t = fork_and_wait_1_0(c_3, t);
  }
  t = v_18;
  return(t);
}
static ATerm q_6 (ATerm p_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,c_19 = NULL,k_19 = NULL,l_19 = NULL;
  c_19 = t;
  t = p_79(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_18, q_34, o_34);
  t = z_6(y_18, q_34, o_34, t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL;
        t = term_q_22;
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_18, term_q_22);
        t = y_6(y_18, m_19, t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_18 = ATgetFirst((ATermList) t);
      a_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_22;
  k_19 = t;
  t = (ATerm) ATinsert(CheckATermList(a_19), (ATerm) ATinsert(CheckATermList(z_18), q_34));
  l_19 = t;
  t = SSL_table_put(y_18, k_19, l_19);
  t = c_19;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,w_19 = NULL;
  t = P__tmpdir_0_0(t);
  r_19 = t;
  t = term_t_22;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_19, term_t_22);
  t = x_6(r_19, w_19, t);
  t_19 = t;
  t = term_u_22;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, term_u_22);
  t = x_6(t_19, u_19, t);
  s_19 = t;
  t = SSL_mkstemp(s_19);
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_8;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, term_p_8);
  t = q_6(d_3, o_19, p_19, t);
  t = SSL_close(n_19);
  t = o_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,d_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_20 = NULL,h_20 = NULL;
      t = a_20;
      t = xtc_new_file_0_0(t);
      f_20 = t;
      t = r_0(t);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, (ATerm) ATinsert(ATinsert(ATempty, f_20), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
    }
  else
    {
      ATerm k_20 = NULL,l_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_20;
      t = xtc_new_file_0_0(t);
      k_20 = t;
      t = r_0(t);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_20), term_v_22), d_20), term_w_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
    }
  return(t);
}
static ATerm r_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  d_21 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_6 = NULL;
        t = d_21;
        t = o_0(t);
        h_6 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_6;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_6;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_21, h_6);
        t = r_6(e_21, h_6, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_21);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm z_22 = t;
          int d_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_7 = NULL;
              t = d_21;
              t = o_0(t);
              k_7 = t;
              {
                ATerm e_23 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_7 = NULL;
                    l_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_7;
                          }
                        else
                          {
                            t = l_7;
                            if((e_21 != t))
                              {
                                _fail(t);
                              }
                            t = l_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_23;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, e_21, k_7);
              t = r_6(e_21, k_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_21);
              LocalPopChoice(d_23);
            }
          else
            {
              t = z_22;
              t = d_21;
              t = o_0(t);
              if((e_21 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_21);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL;
  m_21 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = y_6(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_23 = ATgetFirst((ATermList) t);
            j_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_23);
        t = SSL_table_put(m_35, n_35, j_21);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, j_21);
      }
    else
      {
        t = g_23;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = m_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL;
  t_21 = t;
  t = m_79(t);
  s_21 = t;
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        t = term_q_22;
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_21, term_q_22);
        t = y_6(s_21, x_21, t);
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
      r_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_22;
  v_21 = t;
  t = SSL_table_put(s_21, v_21, p_21);
  t = r_21;
  {
    static ATerm e_3 (ATerm t)
    {
      ATerm y_21 = NULL;
      y_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, y_21);
      t = s_6(s_21, y_21, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = t_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
      t = i_80(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = i_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,g_22 = NULL,h_22 = NULL,k_22 = NULL;
  c_22 = t;
  t = l_79(t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_22, term_q_22);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_22;
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_22, term_q_22);
        t = y_6(b_22, s_22, t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
  }
  g_22 = t;
  t = term_q_22;
  h_22 = t;
  t = (ATerm) ATinsert(CheckATermList(g_22), (ATerm) ATempty);
  k_22 = t;
  t = SSL_table_put(b_22, h_22, k_22);
  t = c_22;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_23);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = j_23;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  ATerm a_23 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm b_23 = NULL;
    b_23 = t;
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_23 = NULL,f_23 = NULL;
          t = term_r_22;
          c_23 = t;
          t = term_q_22;
          f_23 = t;
          t = term_x_23;
          t = y_6(c_23, f_23, t);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_23 != NULL) && (a_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_23 = ATgetFirst((ATermList) t);
        {
          ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_23;
    t = map_1_0(l_3, t);
    t = b_23;
    t = end_scope_1_0(n_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(t_82, j_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_22;
      t = get_config_0_0(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = term_b_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm u_82 (ATerm), ATerm t)
{
  static ATerm o_3 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_23 = NULL;
        t = term_w_22;
        t = get_config_0_0(t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_23);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = term_q_8;
      }
    t = u_82(t);
    t = copy_to_1_0(q_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_24 = NULL,d_24 = NULL;
      d_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          c_24 = ATgetArgument(t, 0);
          {
            ATerm x_7 = NULL,i_3 = NULL;
            t = SSLgetAnnotations(d_24);
            x_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_24);
            i_3 = t;
            t = SSLsetAnnotations(i_3, x_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_24;
        }
      LocalPopChoice(o_24);
      t = xtc_transform_file_2_0(v_3, z_3, t);
    }
  else
    {
      t = i_24;
      t = xtc_transform_term_2_0(b_4, c_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_s_24;
  t = get_config_0_0(t);
  t = map_1_0(a_4, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_24), term_s_24);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_s_24;
  t = get_config_0_0(t);
  t = map_1_0(f_4, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_24), term_s_24);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(s_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,n_24 = NULL,u_24 = NULL,v_24 = NULL;
  j_24 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  k_24 = t;
  t = term_l_17;
  u_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_24), k_24), term_t_24);
  v_24 = t;
  t = SSL_printnl(u_24, v_24);
  t = term_h_8;
  n_24 = t;
  t = SSL_exit(n_24);
  t = j_24;
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  static ATerm t_25 (ATerm t)
  {
    ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
    s_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_25 = ATgetFirst((ATermList) t);
        r_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_8 = NULL,s_8 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(s_25);
          n_8 = t;
          t = r_25;
          t = t_25(t);
          s_8 = t;
          t = (ATerm) ATinsert(CheckATermList(s_8), q_25);
          k_3 = t;
          t = SSLsetAnnotations(k_3, n_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_25;
        t = f_70(t);
      }
    return(t);
  }
  t = t_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_24;
    }
  else
    {
      static ATerm g_4 (ATerm t)
      {
        t = not_null(a_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          if(((a_25 != NULL) && (a_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = at_end_1_0(g_4, t);
    }
  return(t);
}
static ATerm i_26 (ATerm z_25, ATerm t)
{
  ATerm a_26 = NULL;
  t = SSL_explode_term(z_25);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  f_26 = t;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_4 (ATerm t)
            {
              t = e_26;
              return(t);
            }
            t = d_26;
            t = at_end_1_0(h_4, t);
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            t = i_26(f_26, t);
          }
      }
    }
  else
    {
      t = i_26(f_26, t);
    }
  return(t);
}
static ATerm t_6 (ATerm n_37, ATerm m_37, ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,n_26 = NULL;
  t = n_37;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        t = (ATerm) ATempty;
      }
  }
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, k_26);
  t = conc_0_0(t);
  j_26 = t;
  t = term_f_25;
  n_26 = t;
  t = SSL_table_put(n_26, n_37, j_26);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, n_37, j_26);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = term_s_24;
  p_26 = t;
  t = (ATerm) ATinsert(ATempty, o_26);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_24, (ATerm) ATinsert(ATempty, o_26));
  t = t_6(p_26, q_26, t);
  t = o_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, m_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_27 = NULL,d_27 = NULL,e_27 = NULL;
      t = term_p_8;
      t = n_0(t);
      b_27 = t;
      t = term_h_25;
      d_27 = t;
      t = term_i_25;
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, b_27);
      t = z_6(d_27, e_27, b_27, t);
      _fail(t);
    }
  else
    {
      ATerm o_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_26 = ATgetFirst((ATermList) t);
          x_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_26 = ATgetFirst((ATermList) t);
          a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_26;
      t = k_0(t);
      t = y_26;
      t = l_0(t);
      o_27 = t;
      t = (ATerm) ATinsert(CheckATermList(a_27), o_27);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  if(match_string(t, "-k"))
    {
      t = r_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_27;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  t = SSL_string_to_int(s_27);
  t_27 = t;
  t = term_j_25;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, t_27);
  t = b_7(u_27, t_27, t);
  t = s_27;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_27 = NULL;
  x_27 = t;
  if(match_string(t, "-S"))
    {
      t = x_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_27;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  t = term_e_8;
  a_28 = t;
  t = term_l_25;
  b_28 = t;
  t = term_m_25;
  t = b_7(a_28, b_28, t);
  t = term_n_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  t = SSL_string_to_int(c_28);
  d_28 = t;
  t = term_e_8;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, d_28);
  t = b_7(e_28, d_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_28);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  t = term_u_25;
  f_28 = t;
  t = term_p_8;
  g_28 = t;
  t = term_v_25;
  t = b_7(f_28, g_28, t);
  t = term_w_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_4, u_4, w_4, t);
      LocalPopChoice(b_26);
    }
  else
    {
      t = y_25;
      {
        ATerm c_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = c_26;
            t = Option_3_0(a_5, b_5, c_5, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-o"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  t = term_v_22;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, k_28);
  t = b_7(l_28, k_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_28);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_5, i_5, l_5, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm n_28 = NULL;
  n_28 = t;
  if(match_string(t, "-i"))
    {
      t = n_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_28;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_w_22;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_22, o_28);
  t = b_7(p_28, o_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_28);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, p_5, q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-w"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm s_28 = NULL,v_28 = NULL;
  s_28 = t;
  t = term_b_8;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_8, s_28);
  t = b_7(v_28, s_28, t);
  t = s_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            {
              ATerm w_26 = t;
              int z_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(z_26);
                }
              else
                {
                  t = w_26;
                  {
                    ATerm c_27 = t;
                    int f_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(f_27);
                      }
                    else
                      {
                        t = c_27;
                        t = ArgOption_3_0(s_5, t_5, u_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  t = whoami_0_0(t);
  y_28 = t;
  t = term_l_17;
  a_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), y_28);
  b_29 = t;
  t = SSL_printnl(a_29, b_29);
  t = term_h_8;
  z_28 = t;
  t = SSL_exit(z_28);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_27;
  t = get_config_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL,o_29 = NULL;
  i_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_29;
      t = h_76(t);
    }
  else
    {
      ATerm r_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_29 = ATgetFirst((ATermList) t);
          o_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_29;
      t = foldr_2_0(h_76, i_76, t);
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, r_29);
      t = i_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_9 = NULL,o_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(i_9, o_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_29 = NULL,b_9 = NULL,c_9 = NULL;
  t = times_0_0(t);
  c_9 = t;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_9;
  t = foldr_2_0(w_5, z_5, t);
  w_29 = t;
  t = SSL_TicksToSeconds(w_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  n_30 = t;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_30;
        if((o_30 != t))
          {
            _fail(t);
          }
        t = n_30;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = (ATerm) ATmakeAppl(sym__2, o_30, p_30);
        {
          ATerm n_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_30, p_30);
              LocalPopChoice(p_27);
            }
          else
            {
              t = n_27;
              t = SSL_gtr(o_30, p_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_30, p_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_95 (ATerm), ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  {
    ATerm q_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_30, term_h_8);
        t = geq_0_0(t);
        t = t_30;
        t = c_95(t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = q_27;
        t = t_30;
      }
  }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = run_time_0_0(t);
  x_30 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  y_30 = t;
  t = term_l_17;
  a_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_27), x_30), term_y_8), y_30);
  b_31 = t;
  t = SSL_printnl(a_31, b_31);
  t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_27), x_30), term_y_8), y_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_25;
  c_31 = t;
  t = SSL_exit(c_31);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  l_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_31 = ATgetArgument(t, 0);
          {
            ATerm n_10 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(l_31);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_31);
            m_3 = t;
            t = SSLsetAnnotations(m_3, n_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_28;
      t = get_config_0_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      t = fetch_1_0(b_6, t);
    }
  t = p_84(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_31 = NULL,u_31 = NULL;
        static ATerm g_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_31)), not_null(u_31));
          return(t);
        }
        t = p_31;
        t = i_0(t);
        if(((t_31 != NULL) && (t_31 != t)))
          _fail(t);
        else
          t_31 = t;
        t = o_31;
        t = g_0(t);
        if(((u_31 != NULL) && (u_31 != t)))
          _fail(t);
        else
          u_31 = t;
        t = p_31;
        t = reverse_acc_2_0(g_0, g_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,p_3 = NULL;
  c_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_32);
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_32);
  p_3 = t;
  t = SSLsetAnnotations(p_3, a_32);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_32), term_i_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_31 = NULL,z_31 = NULL;
  ATerm m_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_27;
      t = get_config_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = m_28;
      t = fetch_1_0(v_6, t);
    }
  t = term_t_28;
  t = echo_0_0(t);
  t = term_h_25;
  w_31 = t;
  t = term_i_25;
  z_31 = t;
  t = term_u_28;
  t = y_6(w_31, z_31, t);
  t = reverse_acc_2_0(_id, a_7, t);
  t = map_1_0(c_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  static ATerm b_33 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
    y_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_32 = ATgetFirst((ATermList) t);
        a_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_10 = NULL,a_11 = NULL,r_3 = NULL;
          t = SSLgetAnnotations(y_32);
          x_10 = t;
          t = z_32;
          t = z_69(t);
          a_11 = t;
          t = (ATerm) ATinsert(CheckATermList(a_33), a_11);
          r_3 = t;
          t = SSLsetAnnotations(r_3, x_10);
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm j_11 = NULL,p_11 = NULL,t_3 = NULL;
            t = SSLgetAnnotations(y_32);
            j_11 = t;
            t = a_33;
            t = b_33(t);
            p_11 = t;
            t = (ATerm) ATinsert(CheckATermList(p_11), z_32);
            t_3 = t;
            t = SSLsetAnnotations(t_3, j_11);
          }
        }
    }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_33 = NULL,k_33 = NULL,l_33 = NULL;
  h_33 = t;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_29 = ATgetFirst((ATermList) t);
                ATerm f_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_33;
          }
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATinsert(ATempty, h_33);
      }
  }
  k_33 = t;
  t = term_b_24;
  l_33 = t;
  t = SSL_printnl(l_33, k_33);
  t = h_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm x_64 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = x_64(t);
  q_33 = t;
  t = term_l_17;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  static ATerm h_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    e_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_34;
      }
    else
      {
        ATerm a_12 = NULL,e_12 = NULL,f_12 = NULL,l_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_34 = ATgetFirst((ATermList) t);
            g_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_34);
        a_12 = t;
        t = f_34;
        t = p_69(t);
        e_12 = t;
        t = g_34;
        t = h_34(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        l_4 = t;
        t = SSLsetAnnotations(l_4, a_12);
      }
    return(t);
  }
  t = h_34(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = g_29;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_35 = NULL;
      b_35 = t;
      t = SSL_is_string(b_35);
      LocalPopChoice(m_29);
    }
  else
    {
      t = k_29;
      {
        ATerm n_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_7, t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = n_29;
            {
              ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
              r_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  s_35 = ATgetArgument(t, 0);
                  t = s_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      s_35 = ATgetArgument(t, 0);
                      t = s_35;
                      {
                        ATerm q_29 = t;
                        int s_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(s_29);
                          }
                        else
                          {
                            t = q_29;
                            t = debug_1_0(e_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_35 = NULL,y_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          s_35 = ATgetArgument(t, 0);
                          t_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = s_35;
                      t = eval_config_0_0(t);
                      x_35 = t;
                      t = t_35;
                      t = eval_config_0_0(t);
                      y_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_35, y_35);
                      t = x_6(x_35, y_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  c_36 = t;
  t = term_f_25;
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, c_36);
  t = y_6(d_36, c_36, t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_36 = NULL,k_36 = NULL;
        t = eval_config_0_0(t);
        j_36 = t;
        t = term_f_25;
        k_36 = t;
        t = SSL_table_put(k_36, c_36, j_36);
        t = j_36;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  t = term_v_29;
  r_36 = t;
  t = term_p_8;
  s_36 = t;
  t = term_x_29;
  t = b_7(r_36, s_36, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t = term_v_29;
  v_36 = t;
  t = term_p_8;
  w_36 = t;
  t = term_x_29;
  t = b_7(v_36, w_36, t);
  t = term_z_29;
  t_36 = t;
  t = term_p_8;
  u_36 = t;
  t = term_a_30;
  t = b_7(t_36, u_36, t);
  t = term_b_30;
  return(t);
}
static ATerm o_7 (ATerm t)
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
      t = Option_3_0(g_7, h_7, i_7, t);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = Option_3_0(m_7, n_7, o_7, t);
    }
  return(t);
}
static ATerm b_7 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm x_36 = NULL;
  t = term_f_25;
  x_36 = t;
  t = SSL_table_put(x_36, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, h_37, i_37);
  return(t);
}
static ATerm y_6 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
static ATerm z_6 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_30 = ATgetArgument(t, 0);
            ATerm i_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = y_6(h_35, i_35, t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATempty;
      }
  }
  c_37 = t;
  t = (ATerm) ATinsert(CheckATermList(c_37), g_35);
  d_37 = t;
  t = SSL_table_put(h_35, i_35, d_37);
  t = b_37;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,o_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_37 = NULL,v_37 = NULL,w_37 = NULL;
      t = term_p_8;
      t = e_0(t);
      p_37 = t;
      t = term_h_25;
      v_37 = t;
      t = term_i_25;
      w_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, p_37);
      t = z_6(v_37, w_37, p_37, t);
      _fail(t);
    }
  else
    {
      ATerm z_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_37 = ATgetFirst((ATermList) t);
          o_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_37;
      t = c_0(t);
      t = term_p_8;
      t = d_0(t);
      z_37 = t;
      t = (ATerm) ATinsert(CheckATermList(o_37), z_37);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,n_4 = NULL;
  f_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_38 = ATgetFirst((ATermList) t);
      c_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  a_38 = t;
  t = b_38;
  t = p_56(t);
  d_38 = t;
  t = c_38;
  t = q_56(t);
  e_38 = t;
  t = (ATerm) ATinsert(CheckATermList(e_38), d_38);
  n_4 = t;
  t = SSLsetAnnotations(n_4, a_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,r_38 = NULL,s_38 = NULL,t_4 = NULL;
  k_38 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_30;
        t = n_86(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
      }
  }
  t = k_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_38 = ATgetFirst((ATermList) t);
      n_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_38);
  l_38 = t;
  t = term_h_27;
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, m_38);
  t = b_7(s_38, m_38, t);
  t = n_38;
  {
    static ATerm g_39 (ATerm t)
    {
      ATerm m_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_38 = NULL;
              v_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_38;
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              t = n_86(t);
              t = Cons_2_0(_id, g_39, t);
            }
          LocalPopChoice(q_30);
        }
      else
        {
          t = m_30;
          {
            ATerm c_39 = NULL,d_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_39 = ATgetFirst((ATermList) t);
                d_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_39), (ATerm) ATmakeAppl(sym_Undefined_1, c_39));
          }
        }
      return(t);
    }
    t = g_39(t);
  }
  r_38 = t;
  t = (ATerm) ATinsert(CheckATermList(r_38), (ATerm) ATmakeAppl(sym_Program_1, m_38));
  t_4 = t;
  t = SSLsetAnnotations(t_4, l_38);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  if(match_string(t, "--help"))
    {
      t = b_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_40;
        }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  t = term_h_28;
  c_40 = t;
  t = term_p_8;
  d_40 = t;
  t = term_u_30;
  t = b_7(c_40, d_40, t);
  t = term_w_30;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_z_30;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  q_39 = t;
  t = term_h_25;
  s_39 = t;
  t = term_i_25;
  t_39 = t;
  t = (ATerm) ATempty;
  u_39 = t;
  t = SSL_table_put(s_39, t_39, u_39);
  t = q_39;
  {
    static ATerm q_7 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_86(t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = d_31;
          {
            ATerm f_31 = t;
            int g_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, s_7, t_7, t);
                LocalPopChoice(g_31);
              }
            else
              {
                t = f_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_7, t);
  }
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        m_40 = t;
        {
          ATerm j_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_14 = NULL;
              t = m_40;
              {
                ATerm n_31 = t;
                int q_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_h_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_31);
                  }
                else
                  {
                    t = n_31;
                    t = fetch_1_0(v_7, t);
                  }
              }
              t = m_40;
              t = default_system_usage_0_0(t);
              t = term_l_25;
              h_14 = t;
              t = SSL_exit(h_14);
              LocalPopChoice(m_31);
            }
          else
            {
              t = j_31;
              {
                ATerm v_14 = NULL;
                t = term_v_29;
                t = get_config_0_0(t);
                t = m_40;
                t = default_system_about_0_0(t);
                t = term_l_25;
                v_14 = t;
                t = SSL_exit(v_14);
              }
            }
        }
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm r_31 = t;
          int s_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
              static ATerm w_7 (ATerm t)
              {
                ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,u_7 = NULL;
                u_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_40);
                s_40 = t;
                t = t_40;
                if(((l_39 != NULL) && (l_39 != t)))
                  _fail(t);
                else
                  l_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_40);
                u_7 = t;
                t = SSLsetAnnotations(u_7, s_40);
                return(t);
              }
              t = fetch_1_0(w_7, t);
              t = term_l_17;
              p_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_v_31);
              q_40 = t;
              t = SSL_printnl(p_40, q_40);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_39)), term_v_31));
              t = default_system_usage_0_0(t);
              t = term_h_8;
              o_40 = t;
              t = SSL_exit(o_40);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
            }
        }
      }
  }
  m_39 = t;
  t = term_h_25;
  r_39 = t;
  t = SSL_table_destroy(r_39);
  t = m_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  t = parse_options_1_0(r_84, t);
  z_40 = t;
  t = term_d_32;
  c_41 = t;
  t = SSL_table_create(c_41);
  t = term_d_32;
  a_41 = t;
  t = term_f_32;
  b_41 = t;
  t = SSL_table_put(a_41, b_41, z_40);
  t = z_40;
  t = t_84(t);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_84, t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_84(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
