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
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_p_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_j_29;
ATerm term_y_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_m_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_w_23;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
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
ATerm term_i_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_f_8;
ATerm term_c_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_i_8, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_q_9, term_r_9);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_9, term_d_10, term_e_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_j_10, term_k_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_r_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_11, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_z_11, term_a_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_t_12, term_u_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_c_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_k_14, term_l_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_x_14, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_h_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_t_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_g_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_h_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_i_20);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_j_22, term_c_22);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_f_8, term_n_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_25);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_q_8);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_f_25);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_q_8);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_q_8);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_s_27, term_q_8);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_width_0_0 (ATerm t);
static ATerm d_6 (ATerm o_33, ATerm p_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm s_85 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm f_6 (ATerm s_66 (ATerm), ATerm r_167, ATerm x_17, ATerm t);
static ATerm v_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t);
static ATerm g_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_65 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_97 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_97 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_97 (ATerm), ATerm t);
static ATerm j_6 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm k_6 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm l_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm m_6 (ATerm o_82 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm q_6 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm l_10 (ATerm a_10, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm t_17, ATerm t);
static ATerm o_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_13 (ATerm f_11, ATerm t);
static ATerm j_13 (ATerm v_11, ATerm w_11, ATerm x_11, ATerm t);
static ATerm k_13 (ATerm q_12, ATerm r_12, ATerm v_12, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm d_19 (ATerm i_18, ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm j_85 (ATerm), ATerm t);
static ATerm r_6 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm t_6 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_84 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm w_84 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_27 (ATerm r_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_6 (ATerm p_38, ATerm o_38, ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm need_help_1_0 (ATerm r_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_6 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm c_7 (ATerm j_38, ATerm k_38, ATerm t);
static ATerm z_6 (ATerm a_38, ATerm b_38, ATerm t);
static ATerm a_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_88 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_88 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_8;
      t = get_config_0_0(t);
      LocalPopChoice(b_8);
      {
        ATerm b_0 = NULL;
        b_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, b_0), term_c_8);
      }
    }
  else
    {
      t = a_8;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_6 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm d_8 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_33, p_33);
      LocalPopChoice(e_8);
    }
  else
    {
      t = d_8;
      t = SSL_subtr(o_33, p_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_0 = NULL,j_0 = NULL,m_0 = NULL,q_0 = NULL;
  t = term_f_8;
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = term_i_8;
      }
  }
  j_0 = t;
  t = term_i_8;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_0, term_i_8);
  t = d_6(j_0, q_0, t);
  m_0 = t;
  t = SSL_int_to_string(m_0);
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_f_8);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_j_8;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_j_8;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm l_8 = t;
  int m_8 = stack_ptr;
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
      LocalPopChoice(m_8);
      {
        static ATerm h_0 (ATerm t)
        {
          ATerm h_1 = NULL,i_1 = NULL,p_1 = NULL;
          t = term_q_8;
          t = s_85(t);
          p_1 = t;
          t = SSL_int_to_string(p_1);
          h_1 = t;
          t = term_q_8;
          t = pass_verbose_0_0(t);
          i_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, h_1), term_c_8), i_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(a_0, h_0, t);
      }
    }
  else
    {
      t = l_8;
      {
        static ATerm u_0 (ATerm t)
        {
          ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL;
          t = term_q_8;
          t = s_85(t);
          t_1 = t;
          t = SSL_int_to_string(t_1);
          q_1 = t;
          t = term_q_8;
          t = pass_verbose_0_0(t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, q_1), term_c_8), r_1);
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
  ATerm m_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_8);
      r_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATempty, term_s_8));
      t = q_6(m_2, r_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm s_2 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_2);
  return(t);
}
static ATerm f_6 (ATerm s_66 (ATerm), ATerm r_167, ATerm x_17, ATerm t)
{
  ATerm t_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_167, term_t_8);
  t = p_6(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, x_17);
  t = s_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          w_2 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(w_2, x_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_84 (ATerm), ATerm j_84 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  v_2 = t;
  t = xtc_new_file_0_0(t);
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_2, v_2);
  t = f_6(v_0, u_2, v_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, u_2);
  t = xtc_transform_file_2_0(i_84, j_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  v_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_3 = ATgetArgument(t, 0);
      {
        ATerm j_1 = NULL,k_1 = NULL;
        t = SSL_int_to_string(x_3);
        j_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), j_1), term_v_8);
        k_1 = t;
        t = SSL_concat_strings(k_1);
      }
    }
  else
    {
      ATerm c_2 = NULL,d_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_3 = ATgetArgument(t, 0);
          y_3 = ATgetArgument(t, 1);
          z_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_3);
      c_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_3), term_z_8), c_2), term_y_8), x_3);
      d_2 = t;
      t = SSL_concat_strings(d_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm e_4 = NULL;
  static ATerm x_0 (ATerm t)
  {
    t = u_71(t);
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    return(t);
  }
  t = fetch_1_0(x_0, t);
  t = not_null(e_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  {
    ATerm a_9 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm e_9 = ATgetArgument(t, 0);
              if((f_4 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_16), term_q_16), term_m_16), term_i_16), term_e_16), term_x_15), term_o_15), term_c_15), term_r_14), term_h_14), term_x_13), term_t_13), term_m_13), term_a_13), term_n_12), term_i_12), term_c_12), term_t_11), term_p_11), term_j_11), term_d_11), term_z_10), term_t_10), term_o_10), term_h_10), term_y_9), term_u_9), term_l_9);
        t = fetch_elem_1_0(z_0, t);
        LocalPopChoice(d_9);
      }
    else
      {
        t = a_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_4 = NULL,w_4 = NULL;
  l_4 = t;
  {
    ATerm x_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_17 = ATgetArgument(t, 0);
            w_4 = ATgetArgument(t, 1);
            {
              ATerm b_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_16);
        {
          ATerm c_17 = t;
          int d_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL,l_2 = NULL,o_2 = NULL;
              t = w_4;
              {
                ATerm e_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_2 = t;
              t = term_g_17;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_2), term_h_17);
              o_2 = t;
              t = SSL_printnl(l_2, o_2);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, j_2), term_h_17));
              LocalPopChoice(d_17);
            }
          else
            {
              t = c_17;
              t = l_4;
            }
        }
      }
    else
      {
        t = x_16;
        t = l_4;
      }
  }
  t = l_4;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL;
  j_5 = t;
  t = fork_0_0(t);
  i_5 = t;
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_5;
        t = h_65(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        t = SSL_waitpid(i_5);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_17 = ATgetArgument(t, 0);
            if(((ATgetType(l_17) != AT_INT) || (ATgetInt((ATermInt) l_17) != 0)))
              _fail(t);
            {
              ATerm q_17 = ATgetArgument(t, 1);
            }
            {
              ATerm v_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm m_5 = NULL,o_5 = NULL;
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), m_5);
    t = z_6(not_null(l_5), m_5, t);
    o_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_5, o_5);
    return(t);
  }
  if(((l_5 != NULL) && (l_5 != t)))
    _fail(t);
  else
    l_5 = t;
  t = SSL_table_keys(l_5);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_97 (ATerm), ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_5 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        t_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_5, term_g_16);
        t = geq_0_0(t);
        t = r_5;
        t = p_97(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        t = r_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm x_5 = NULL;
  x_5 = t;
  {
    ATerm z_17 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_7 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        b_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_7, term_z_11);
        t = geq_0_0(t);
        t = x_5;
        t = o_97(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = z_17;
        t = x_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_97 (ATerm), ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        o_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_7, term_d_10);
        t = geq_0_0(t);
        t = h_7;
        t = q_97(t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        t = h_7;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = r_75(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm t_7 = NULL;
      t_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, t_7);
      t = q_75(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = t_24;
  return(t);
}
static ATerm k_6 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm w_8 (ATerm t)
  {
    ATerm k_8 = NULL,n_8 = NULL,p_8 = NULL;
    k_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_8 = ATgetFirst((ATermList) t);
            p_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_8;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = j_6(n_75, d_1, n_8, p_8, t);
              }
              t = w_8(t);
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              {
                ATerm a_3 = NULL,e_3 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(k_8);
                a_3 = t;
                t = p_8;
                t = w_8(t);
                e_3 = t;
                t = (ATerm) ATinsert(CheckATermList(e_3), n_8);
                y_0 = t;
                t = SSLsetAnnotations(y_0, a_3);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = w_8(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      if((n_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm b_9 = NULL,g_9 = NULL,h_9 = NULL;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            ATerm k_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = z_6(g_37, h_37, t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = (ATerm) ATempty;
      }
  }
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, i_37);
  t = k_6(f_1, h_9, i_37, t);
  g_9 = t;
  t = SSL_table_put(g_37, h_37, g_9);
  t = b_9;
  return(t);
}
static ATerm m_6 (ATerm o_82 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm o_9 = NULL,p_9 = NULL;
    if(match_cons(t, sym__2))
      {
        o_9 = ATgetArgument(t, 0);
        p_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, o_9, p_9);
    t = o_82(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm q_6 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm l_10 (ATerm a_10, ATerm t)
{
  t = SSL_fclose(a_10);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  g_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_10 = ATgetArgument(t, 0);
      {
        ATerm l_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_10);
            LocalPopChoice(s_18);
          }
        else
          {
            t = l_18;
            t = l_10(g_10, t);
          }
      }
    }
  else
    {
      t = l_10(g_10, t);
    }
  return(t);
}
static ATerm n_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm o_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm m_10 = NULL;
  t = SSL_fopen(a_40, b_40);
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  t = SSL_stdin_stream();
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stdout_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  t = SSL_stderr_stream();
  u_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_10);
  return(t);
}
static ATerm i_13 (ATerm f_11, ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_explode_term(f_11);
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_18 = ATgetArgument(t, 1);
        if(((ATgetType(x_18) == AT_LIST) && !(ATisEmpty(x_18))))
          {
            m_11 = ATgetFirst((ATermList) x_18);
            {
              ATerm y_18 = (ATerm) ATgetNext((ATermList) x_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_13 (ATerm v_11, ATerm w_11, ATerm x_11, ATerm t)
{
  ATerm d_12 = NULL,h_12 = NULL,j_12 = NULL,o_12 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(x_11);
  j_12 = t;
  t = v_11;
  if(match_cons(t, sym_Path_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_12, w_11);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_12);
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(d_12, h_12, t);
  return(t);
}
static ATerm k_13 (ATerm q_12, ATerm r_12, ATerm v_12, ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,c_13 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(v_12);
  z_12 = t;
  t = SSL_is_string(q_12);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_13, r_12);
  u_1 = t;
  t = SSLsetAnnotations(u_1, z_12);
  if(match_cons(t, sym__2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(x_12, y_12, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  f_13 = t;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_13(f_13, t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm b_19 = t;
              int e_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_13(g_13, h_13, f_13, t);
                  LocalPopChoice(e_19);
                }
              else
                {
                  t = b_19;
                  t = k_13(g_13, h_13, f_13, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_13(f_13, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,y_13 = NULL;
  y_13 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_13, term_i_19);
        t = p_6(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        {
          ATerm q_4 = NULL,r_4 = NULL;
          t = term_j_19;
          r_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_19, y_13);
          t = y_6(r_4, y_13, t);
          q_4 = t;
          t = SSL_perror(q_4);
          _fail(t);
        }
      }
  }
  p_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(q_13, t);
  o_13 = t;
  t = p_13;
  t = fclose_0_0(t);
  t = o_13;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_k_19;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 = NULL,d_14 = NULL;
      b_14 = t;
      t = (ATerm) ATinsert(ATempty, term_r_19);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_14, (ATerm) ATinsert(ATempty, term_r_19));
      t = q_6(b_14, d_14, t);
      LocalPopChoice(o_19);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_19;
      {
        ATerm s_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_19 = t;
            if((PushChoice() == 0))
              {
                ATerm e_14 = NULL,j_14 = NULL;
                e_14 = t;
                t = (ATerm) ATinsert(ATempty, term_s_8);
                j_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_14, (ATerm) ATinsert(ATempty, term_s_8));
                t = q_6(e_14, j_14, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_19;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(t_19);
          }
        else
          {
            t = s_19;
            t = debug_1_0(n_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
  k_15 = t;
  t = term_g_17;
  l_15 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  m_15 = t;
  t = SSL_printnl(l_15, m_15);
  t = k_15;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__3))
    {
      n_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
      r_15 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_6(n_15, q_15, r_15, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_15 = NULL,u_15 = NULL,v_15 = NULL;
  s_15 = t;
  t = term_g_17;
  u_15 = t;
  t = (ATerm) ATinsert(ATempty, term_d_20);
  v_15 = t;
  t = SSL_printnl(u_15, v_15);
  t = s_15;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  t = term_g_17;
  b_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_20);
  c_16 = t;
  t = SSL_printnl(b_16, c_16);
  t = a_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_14 = NULL,p_14 = NULL,q_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,w_14 = NULL,y_14 = NULL,z_14 = NULL,g_15 = NULL;
  m_14 = t;
  t = if_verbose5_1_0(o_1, t);
  {
    ATerm f_20 = t;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL,j_15 = NULL;
        t = term_h_20;
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_14);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATmakeAppl(sym_Imported_1, m_14));
        t = z_6(i_15, j_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_20;
      }
  }
  q_14 = t;
  t = term_h_20;
  y_14 = t;
  t = term_i_20;
  z_14 = t;
  t = (ATerm) ATinsert(ATempty, m_14);
  g_15 = t;
  t = SSL_table_put(y_14, z_14, g_15);
  t = q_14;
  t = if_verbose4_1_0(v_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(x_1, t);
  p_14 = t;
  t = term_h_20;
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, p_14);
  t = m_6(y_1, w_14, p_14, t);
  t = if_verbose6_1_0(z_1, t);
  t = term_h_20;
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_14);
  t_14 = t;
  t = (ATerm) ATempty;
  u_14 = t;
  t = SSL_table_put(s_14, t_14, u_14);
  t = (ATerm) ATmakeAppl(sym__3, term_h_20, (ATerm)ATmakeAppl(sym_Imported_1, m_14), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,y_16 = NULL;
  u_16 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_16;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_16 = ATgetFirst((ATermList) t);
          y_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_5 = NULL,n_5 = NULL,p_5 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(u_16);
            e_5 = t;
            t = v_16;
            t = i_79(t);
            n_5 = t;
            t = y_16;
            t = filter_1_0(i_79, t);
            p_5 = t;
            t = (ATerm) ATinsert(CheckATermList(p_5), n_5);
            h_3 = t;
            t = SSLsetAnnotations(h_3, e_5);
            LocalPopChoice(m_20);
          }
        else
          {
            t = j_20;
            t = y_16;
            t = filter_1_0(i_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  static ATerm f_17 (ATerm t)
  {
    ATerm s_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_69(t);
        t = f_17(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = s_20;
        t = o_69(t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_21;
      t = get_config_0_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_17 = NULL;
            t = term_f_21;
            k_17 = t;
            t = SSL_getenv(k_17);
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
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_g_21;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm u_17 = NULL,a_18 = NULL;
  t = term_h_20;
  u_17 = t;
  t = term_h_21;
  a_18 = t;
  t = term_i_21;
  t = z_6(u_17, a_18, t);
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
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_17 = NULL;
  t = if_verbose5_1_0(b_2, t);
  m_17 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,r_17 = NULL;
        t = term_h_20;
        p_17 = t;
        t = term_i_20;
        r_17 = t;
        t = term_n_21;
        t = z_6(p_17, r_17, t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm s_17 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          s_17 = t;
          t = repeat_2_0(f_2, _id, t);
          t = s_17;
        }
      }
  }
  t = m_17;
  t = if_verbose5_1_0(g_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm d_19 (ATerm i_18, ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  t = term_h_20;
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_18);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATmakeAppl(sym_Tool_1, i_18));
  t = z_6(n_18, o_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_21 = ATgetFirst((ATermList) t);
      if(match_cons(p_21, sym__2))
        {
          ATerm r_21 = ATgetArgument(p_21, 0);
          m_18 = ATgetArgument(p_21, 1);
        }
      else
        _fail(t);
      {
        ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_18;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_h_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
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
      ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      r_18 = t;
      if(match_cons(t, sym__2))
        {
          p_18 = ATgetArgument(t, 0);
          q_18 = ATgetArgument(t, 1);
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
                t = term_h_20;
                v_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_18);
                w_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATmakeAppl(sym_Tool_1, p_18));
                t = z_6(v_18, w_18, t);
                {
                  static ATerm n_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_18 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_18 != NULL) && (u_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(n_2, t);
                }
                t = not_null(u_18);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = d_19(r_18, t);
              }
          }
        }
      else
        {
          t = d_19(r_18, t);
        }
      t = if_verbose5_1_0(p_2, t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm c_19 = NULL,c_6 = NULL,h_6 = NULL;
        c_19 = t;
        t = term_g_17;
        c_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), c_19), term_x_21);
        h_6 = t;
        t = SSL_printnl(c_6, h_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_21), c_19), term_x_21);
        t = if_verbose5_1_0(y_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,m_19 = NULL;
  m_19 = t;
  t = j_85(t);
  t = xtc_find_0_0(t);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_19, m_19);
  {
    static ATerm b_3 (ATerm t)
    {
      ATerm p_19 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_19, m_19);
      t = g_6(f_19, m_19, t);
      t = term_z_21;
      p_19 = t;
      t = SSL_exit(p_19);
      return(t);
    }
    t = fork_and_wait_1_0(b_3, t);
  }
  t = m_19;
  return(t);
}
static ATerm r_6 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm q_19 = NULL,u_19 = NULL,v_19 = NULL,x_19 = NULL,y_19 = NULL,a_20 = NULL;
  x_19 = t;
  t = m_81(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_19, w_34, u_34);
  t = a_7(q_19, w_34, u_34, t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        t = term_c_22;
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_19, term_c_22);
        t = z_6(q_19, e_20, t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_19 = ATgetFirst((ATermList) t);
      v_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  y_19 = t;
  t = (ATerm) ATinsert(CheckATermList(v_19), (ATerm) ATinsert(CheckATermList(u_19), w_34));
  a_20 = t;
  t = SSL_table_put(q_19, y_19, a_20);
  t = x_19;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_20 = NULL;
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,e_7 = NULL;
      k_20 = t;
      t = term_h_22;
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_20, term_h_22);
      t = y_6(k_20, e_7, t);
      g_20 = t;
      t = SSL_mkstemp(g_20);
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm l_20 = NULL;
        t = term_i_22;
        l_20 = t;
        t = SSL_perror(l_20);
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
static ATerm c_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  t = P__tmpdir_0_0(t);
  q_20 = t;
  t = term_k_22;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_20, term_k_22);
  t = y_6(q_20, r_20, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_q_8;
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, term_q_8);
  t = r_6(c_3, o_20, p_20, t);
  t = SSL_close(n_20);
  t = o_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_20 = NULL,x_20 = NULL;
      t = t_20;
      t = xtc_new_file_0_0(t);
      v_20 = t;
      t = r_0(t);
      x_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_20, (ATerm) ATinsert(ATinsert(ATempty, v_20), term_l_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_20);
    }
  else
    {
      ATerm a_21 = NULL,b_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_20;
      t = xtc_new_file_0_0(t);
      a_21 = t;
      t = r_0(t);
      b_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_21), term_l_22), u_20), term_m_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_21);
    }
  return(t);
}
static ATerm s_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,g_22 = NULL;
  d_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        t = d_22;
        t = o_0(t);
        l_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_22, l_7);
        t = s_6(g_22, l_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
        LocalPopChoice(p_22);
      }
    else
      {
        t = n_22;
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 = NULL;
              t = d_22;
              t = o_0(t);
              v_7 = t;
              {
                ATerm t_22 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_7 = NULL;
                    w_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_7;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_7;
                          }
                        else
                          {
                            t = w_7;
                            if((g_22 != t))
                              {
                                _fail(t);
                              }
                            t = w_7;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_22;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_22, v_7);
              t = s_6(g_22, v_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              t = d_22;
              t = o_0(t);
              if((g_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_22);
            }
        }
      }
  }
  return(t);
}
static ATerm t_6 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm o_22 = NULL,s_22 = NULL;
  s_22 = t;
  {
    ATerm v_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = z_6(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_23 = ATgetFirst((ATermList) t);
            o_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_22);
        t = SSL_table_put(o_36, p_36, o_22);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, o_22);
      }
    else
      {
        t = v_22;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = s_22;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm u_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,b_23 = NULL;
  y_22 = t;
  t = j_81(t);
  x_22 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL;
        t = term_c_22;
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, term_c_22);
        t = z_6(x_22, c_23, t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_22 = ATgetFirst((ATermList) t);
      u_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_22;
  b_23 = t;
  t = SSL_table_put(x_22, b_23, u_22);
  t = w_22;
  {
    static ATerm d_3 (ATerm t)
    {
      ATerm d_23 = NULL;
      d_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_22, d_23);
      t = t_6(x_22, d_23, t);
      return(t);
    }
    t = map_1_0(d_3, t);
  }
  t = y_22;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,q_23 = NULL;
  j_23 = t;
  t = i_81(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, term_c_22);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_23 = ATgetArgument(t, 0);
            ATerm p_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_22;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_c_22);
        t = z_6(g_23, u_23, t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATempty;
      }
  }
  k_23 = t;
  t = term_c_22;
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(k_23), (ATerm) ATempty);
  q_23 = t;
  t = SSL_table_put(g_23, l_23, q_23);
  t = j_23;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_24);
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        t = h_24;
      }
  }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_84 (ATerm), ATerm t)
{
  ATerm z_23 = NULL;
  static ATerm g_3 (ATerm t)
  {
    ATerm a_24 = NULL;
    a_24 = t;
    {
      ATerm t_23 = t;
      int v_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_24 = NULL,c_24 = NULL;
          t = term_j_22;
          b_24 = t;
          t = term_c_22;
          c_24 = t;
          t = term_w_23;
          t = z_6(b_24, c_24, t);
          LocalPopChoice(v_23);
        }
      else
        {
          t = t_23;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_23 != NULL) && (z_23 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_23 = ATgetFirst((ATermList) t);
        {
          ATerm x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_23;
    t = map_1_0(i_3, t);
    t = a_24;
    t = end_scope_1_0(k_3, t);
    return(t);
  }
  t = begin_scope_1_0(f_3, t);
  t = restore_always_2_0(v_84, g_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm y_23 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_22;
      t = get_config_0_0(t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = y_23;
      t = term_e_24;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  static ATerm m_3 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL;
        t = term_m_22;
        t = get_config_0_0(t);
        m_24 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = term_r_8;
      }
    t = w_84(t);
    t = copy_to_1_0(o_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(m_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = NULL,c_25 = NULL;
      c_25 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_25 = ATgetArgument(t, 0);
          {
            ATerm o_8 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(c_25);
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_25);
            j_3 = t;
            t = SSLsetAnnotations(j_3, o_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_25;
        }
      LocalPopChoice(j_24);
      t = xtc_transform_file_2_0(r_3, t_3, t);
    }
  else
    {
      t = i_24;
      t = xtc_transform_term_2_0(a_4, b_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_l_24;
  t = get_config_0_0(t);
  t = map_1_0(w_3, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_25), term_l_24);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_l_24;
  t = get_config_0_0(t);
  t = map_1_0(c_4, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_25), term_l_24);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(p_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  i_25 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  j_25 = t;
  t = term_g_17;
  l_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_24), j_25), term_n_24);
  m_25 = t;
  t = SSL_printnl(l_25, m_25);
  t = term_i_8;
  k_25 = t;
  t = SSL_exit(k_25);
  t = i_25;
  return(t);
}
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm m_26 (ATerm t)
  {
    ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
    l_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_26 = ATgetFirst((ATermList) t);
        k_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_9 = NULL,f_9 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(l_26);
          c_9 = t;
          t = k_26;
          t = m_26(t);
          f_9 = t;
          t = (ATerm) ATinsert(CheckATermList(f_9), j_26);
          l_3 = t;
          t = SSLsetAnnotations(l_3, c_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_26;
        t = z_71(t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
  o_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_25;
    }
  else
    {
      static ATerm d_4 (ATerm t)
      {
        t = not_null(q_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          if(((q_25 != NULL) && (q_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_25;
      t = at_end_1_0(d_4, t);
    }
  return(t);
}
static ATerm i_27 (ATerm r_26, ATerm t)
{
  ATerm t_26 = NULL;
  t = SSL_explode_term(r_26);
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,z_26 = NULL;
  z_26 = t;
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
      {
        ATerm s_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_4 (ATerm t)
            {
              t = x_26;
              return(t);
            }
            t = w_26;
            t = at_end_1_0(g_4, t);
            LocalPopChoice(v_24);
          }
        else
          {
            t = s_24;
            t = i_27(z_26, t);
          }
      }
    }
  else
    {
      t = i_27(z_26, t);
    }
  return(t);
}
static ATerm u_6 (ATerm p_38, ATerm o_38, ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  t = p_38;
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = (ATerm) ATempty;
      }
  }
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, k_27);
  t = conc_0_0(t);
  j_27 = t;
  t = term_y_24;
  l_27 = t;
  t = SSL_table_put(l_27, p_38, j_27);
  t = (ATerm) ATmakeAppl(sym__3, term_y_24, p_38, j_27);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL;
  n_27 = t;
  t = term_l_24;
  o_27 = t;
  t = (ATerm) ATinsert(ATempty, n_27);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, (ATerm) ATinsert(ATempty, n_27));
  t = u_6(o_27, p_27, t);
  t = n_27;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, i_4, j_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
      t = term_q_8;
      t = n_0(t);
      a_28 = t;
      t = term_a_25;
      b_28 = t;
      t = term_f_25;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_f_25, a_28);
      t = a_7(b_28, c_28, a_28, t);
      _fail(t);
    }
  else
    {
      ATerm h_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_27 = ATgetFirst((ATermList) t);
          x_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_27;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_27 = ATgetFirst((ATermList) t);
          z_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_27;
      t = k_0(t);
      t = y_27;
      t = l_0(t);
      h_28 = t;
      t = (ATerm) ATinsert(CheckATermList(z_27), h_28);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-k"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  t = SSL_string_to_int(k_28);
  l_28 = t;
  t = term_g_25;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_25, l_28);
  t = c_7(m_28, l_28, t);
  t = k_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, n_4, o_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-S"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm r_28 = NULL,u_28 = NULL;
  t = term_f_8;
  r_28 = t;
  t = term_n_25;
  u_28 = t;
  t = term_r_25;
  t = c_7(r_28, u_28, t);
  t = term_s_25;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_t_25;
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
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  t = SSL_string_to_int(v_28);
  w_28 = t;
  t = term_f_8;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_8, w_28);
  t = c_7(x_28, w_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_28);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_u_25;
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
  ATerm b_29 = NULL,e_29 = NULL;
  t = term_v_25;
  b_29 = t;
  t = term_q_8;
  e_29 = t;
  t = term_w_25;
  t = c_7(b_29, e_29, t);
  t = term_x_25;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_4, t_4, v_4, t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_4, y_4, z_4, t);
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            t = Option_3_0(a_5, b_5, c_5, t);
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  if(match_string(t, "-o"))
    {
      t = k_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_29;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  t = term_l_22;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_22, l_29);
  t = c_7(m_29, l_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_29);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, f_5, g_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm q_29 = NULL;
  q_29 = t;
  if(match_string(t, "-i"))
    {
      t = q_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_29;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  t = term_m_22;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_22, r_29);
  t = c_7(s_29, r_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_29);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, k_5, q_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  if(match_string(t, "-w"))
    {
      t = a_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = a_30;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  b_30 = t;
  t = term_c_8;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_8, b_30);
  t = c_7(c_30, b_30, t);
  t = b_30;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm i_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = i_26;
            {
              ATerm o_26 = t;
              int p_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(p_26);
                }
              else
                {
                  t = o_26;
                  {
                    ATerm q_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(s_26);
                      }
                    else
                      {
                        t = q_26;
                        t = ArgOption_3_0(s_5, u_5, v_5, t);
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
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_8;
  t = whoami_0_0(t);
  d_30 = t;
  t = term_g_17;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_26), d_30);
  g_30 = t;
  t = SSL_printnl(f_30, g_30);
  t = term_i_8;
  e_30 = t;
  t = SSL_exit(e_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_26;
  t = get_config_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm y_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(a_27);
    }
  else
    {
      t = y_26;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_30;
      t = e_78(t);
    }
  else
    {
      ATerm n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_30 = ATgetFirst((ATermList) t);
          k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = foldr_2_0(e_78, f_78, t);
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_30, n_30);
      t = f_78(t);
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
  t = term_n_25;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(b_10, c_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_30 = NULL,s_9 = NULL,t_9 = NULL;
  t = times_0_0(t);
  t_9 = t;
  t = SSL_explode_term(t_9);
  if(match_cons(t, sym__2))
    {
      ATerm b_27 = ATgetArgument(t, 0);
      s_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_9;
  t = foldr_2_0(w_5, y_5, t);
  q_30 = t;
  t = SSL_TicksToSeconds(q_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_31;
        if((c_31 != t))
          {
            _fail(t);
          }
        t = b_31;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
        {
          ATerm e_27 = t;
          int f_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_31, d_31);
              LocalPopChoice(f_27);
            }
          else
            {
              t = e_27;
              t = SSL_gtr(c_31, d_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_31, d_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL;
        t = term_f_8;
        t = get_config_0_0(t);
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_31, term_i_8);
        t = geq_0_0(t);
        t = h_31;
        t = l_97(t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = h_31;
      }
  }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,o_31 = NULL,p_31 = NULL;
  t = run_time_0_0(t);
  l_31 = t;
  t = term_q_8;
  t = whoami_0_0(t);
  m_31 = t;
  t = term_g_17;
  o_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), l_31), term_y_8), m_31);
  p_31 = t;
  t = SSL_printnl(o_31, p_31);
  t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_27), l_31), term_y_8), m_31));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_25;
  q_31 = t;
  t = SSL_exit(q_31);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  z_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_31 = ATgetArgument(t, 0);
          {
            ATerm y_10 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(z_31);
            y_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_31);
            n_3 = t;
            t = SSLsetAnnotations(n_3, y_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_27;
      t = get_config_0_0(t);
      LocalPopChoice(r_27);
    }
  else
    {
      t = q_27;
      t = fetch_1_0(a_6, t);
    }
  t = r_86(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,f_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_32 = ATgetFirst((ATermList) t);
      f_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_32 = NULL,k_32 = NULL;
        static ATerm b_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_32)), not_null(k_32));
          return(t);
        }
        t = f_32;
        t = i_0(t);
        if(((j_32 != NULL) && (j_32 != t)))
          _fail(t);
        else
          j_32 = t;
        t = c_32;
        t = g_0(t);
        if(((k_32 != NULL) && (k_32 != t)))
          _fail(t);
        else
          k_32 = t;
        t = f_32;
        t = reverse_acc_2_0(g_0, b_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,q_3 = NULL;
  q_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_32);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_32);
  q_3 = t;
  t = SSLsetAnnotations(q_3, o_32);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_32), term_t_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_26;
      t = get_config_0_0(t);
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = fetch_1_0(i_6, t);
    }
  t = term_d_28;
  t = echo_0_0(t);
  t = term_a_25;
  m_32 = t;
  t = term_f_25;
  n_32 = t;
  t = term_e_28;
  t = z_6(m_32, n_32, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(x_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  static ATerm t_33 (ATerm t)
  {
    ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
    q_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_33 = ATgetFirst((ATermList) t);
        s_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_28 = t;
      int g_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_11 = NULL,k_11 = NULL,s_3 = NULL;
          t = SSLgetAnnotations(q_33);
          h_11 = t;
          t = r_33;
          t = s_71(t);
          k_11 = t;
          t = (ATerm) ATinsert(CheckATermList(s_33), k_11);
          s_3 = t;
          t = SSLsetAnnotations(s_3, h_11);
          LocalPopChoice(g_28);
        }
      else
        {
          t = f_28;
          {
            ATerm y_11 = NULL,b_12 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(q_33);
            y_11 = t;
            t = s_33;
            t = t_33(t);
            b_12 = t;
            t = (ATerm) ATinsert(CheckATermList(b_12), r_33);
            u_3 = t;
            t = SSLsetAnnotations(u_3, y_11);
          }
        }
    }
    return(t);
  }
  t = t_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  {
    ATerm i_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_28 = ATgetFirst((ATermList) t);
                ATerm q_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_33;
          }
        LocalPopChoice(n_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATinsert(ATempty, x_33);
      }
  }
  y_33 = t;
  t = term_e_24;
  z_33 = t;
  t = SSL_printnl(z_33, y_33);
  t = x_33;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_26;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
  d_34 = t;
  t = q_66(t);
  e_34 = t;
  t = term_g_17;
  f_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_34), e_34);
  g_34 = t;
  t = SSL_printnl(f_34, g_34);
  t = d_34;
  return(t);
}
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  static ATerm g_35 (ATerm t)
  {
    ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
    d_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_35;
      }
    else
      {
        ATerm s_12 = NULL,w_12 = NULL,d_13 = NULL,m_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_35 = ATgetFirst((ATermList) t);
            f_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_35);
        s_12 = t;
        t = e_35;
        t = i_71(t);
        w_12 = t;
        t = f_35;
        t = g_35(t);
        d_13 = t;
        t = (ATerm) ATinsert(CheckATermList(d_13), w_12);
        m_4 = t;
        t = SSLsetAnnotations(m_4, s_12);
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL;
      o_35 = t;
      t = SSL_is_string(o_35);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_7, t);
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            {
              ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
              u_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_35 = ATgetArgument(t, 0);
                  t = v_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_35 = ATgetArgument(t, 0);
                      t = v_35;
                      {
                        ATerm f_29 = t;
                        int g_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(g_29);
                          }
                        else
                          {
                            t = f_29;
                            t = debug_1_0(f_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_36 = NULL,c_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_35 = ATgetArgument(t, 0);
                          w_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_35;
                      t = eval_config_0_0(t);
                      a_36 = t;
                      t = w_35;
                      t = eval_config_0_0(t);
                      c_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_36, c_36);
                      t = y_6(a_36, c_36, t);
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
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  t = term_y_24;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_24, q_36);
  t = z_6(r_36, q_36, t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,t_36 = NULL;
        t = eval_config_0_0(t);
        s_36 = t;
        t = term_y_24;
        t_36 = t;
        t = SSL_table_put(t_36, q_36, s_36);
        t = s_36;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
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
static ATerm i_7 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = term_j_29;
  w_36 = t;
  t = term_q_8;
  x_36 = t;
  t = term_n_29;
  t = c_7(w_36, x_36, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_o_29;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  t = term_j_29;
  a_37 = t;
  t = term_q_8;
  b_37 = t;
  t = term_n_29;
  t = c_7(a_37, b_37, t);
  t = term_p_29;
  y_36 = t;
  t = term_q_8;
  z_36 = t;
  t = term_t_29;
  t = c_7(y_36, z_36, t);
  t = term_u_29;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_7, i_7, j_7, t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = Option_3_0(k_7, m_7, n_7, t);
    }
  return(t);
}
static ATerm c_7 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm c_37 = NULL;
  t = term_y_24;
  c_37 = t;
  t = SSL_table_put(c_37, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_y_24, j_38, k_38);
  return(t);
}
static ATerm z_6 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
static ATerm a_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,l_37 = NULL;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_30 = ATgetArgument(t, 0);
            ATerm l_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = z_6(j_36, k_36, t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = (ATerm) ATempty;
      }
  }
  f_37 = t;
  t = (ATerm) ATinsert(CheckATermList(f_37), i_36);
  l_37 = t;
  t = SSL_table_put(j_36, k_36, l_37);
  t = e_37;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      t = term_q_8;
      t = e_0(t);
      x_37 = t;
      t = term_a_25;
      y_37 = t;
      t = term_f_25;
      z_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_25, term_f_25, x_37);
      t = a_7(y_37, z_37, x_37, t);
      _fail(t);
    }
  else
    {
      ATerm e_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_37 = ATgetFirst((ATermList) t);
          w_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_37;
      t = c_0(t);
      t = term_q_8;
      t = d_0(t);
      e_38 = t;
      t = (ATerm) ATinsert(CheckATermList(w_37), e_38);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,l_38 = NULL,m_38 = NULL,p_4 = NULL;
  m_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_38 = ATgetFirst((ATermList) t);
      h_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  f_38 = t;
  t = g_38;
  t = i_58(t);
  i_38 = t;
  t = h_38;
  t = j_58(t);
  l_38 = t;
  t = (ATerm) ATinsert(CheckATermList(l_38), i_38);
  p_4 = t;
  t = SSLsetAnnotations(p_4, f_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,d_39 = NULL,e_39 = NULL,u_4 = NULL;
  y_38 = t;
  {
    ATerm m_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_30;
        t = p_88(t);
        LocalPopChoice(o_30);
      }
    else
      {
        t = m_30;
      }
  }
  t = y_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_39 = ATgetFirst((ATermList) t);
      b_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_38);
  z_38 = t;
  t = term_v_26;
  e_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, a_39);
  t = c_7(e_39, a_39, t);
  t = b_39;
  {
    static ATerm p_39 (ATerm t)
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_39 = NULL;
              h_39 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_39;
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              t = p_88(t);
              t = Cons_2_0(_id, p_39, t);
            }
          LocalPopChoice(s_30);
        }
      else
        {
          t = r_30;
          {
            ATerm k_39 = NULL,l_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_39 = ATgetFirst((ATermList) t);
                l_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_39), (ATerm) ATmakeAppl(sym_Undefined_1, k_39));
          }
        }
      return(t);
    }
    t = p_39(t);
  }
  d_39 = t;
  t = (ATerm) ATinsert(CheckATermList(d_39), (ATerm) ATmakeAppl(sym_Program_1, a_39));
  u_4 = t;
  t = SSLsetAnnotations(u_4, z_38);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  if(match_string(t, "--help"))
    {
      t = h_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_40;
        }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_s_27;
  i_40 = t;
  t = term_q_8;
  j_40 = t;
  t = term_v_30;
  t = c_7(i_40, j_40, t);
  t = term_w_30;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL;
  y_39 = t;
  t = term_a_25;
  e_40 = t;
  t = term_f_25;
  f_40 = t;
  t = (ATerm) ATempty;
  g_40 = t;
  t = SSL_table_put(e_40, f_40, g_40);
  t = y_39;
  {
    static ATerm p_7 (ATerm t)
    {
      ATerm y_30 = t;
      int z_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_88(t);
          LocalPopChoice(z_30);
        }
      else
        {
          t = y_30;
          {
            ATerm a_31 = t;
            int e_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, s_7, t);
                LocalPopChoice(e_31);
              }
            else
              {
                t = a_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
  }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_40 = NULL;
        t_40 = t;
        {
          ATerm i_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_15 = NULL;
              t = t_40;
              {
                ATerm n_31 = t;
                int r_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_s_27;
                    t = get_config_0_0(t);
                    LocalPopChoice(r_31);
                  }
                else
                  {
                    t = n_31;
                    t = fetch_1_0(u_7, t);
                  }
              }
              t = t_40;
              t = default_system_usage_0_0(t);
              t = term_n_25;
              a_15 = t;
              t = SSL_exit(a_15);
              LocalPopChoice(k_31);
            }
          else
            {
              t = i_31;
              {
                ATerm e_15 = NULL;
                t = term_j_29;
                t = get_config_0_0(t);
                t = t_40;
                t = default_system_about_0_0(t);
                t = term_n_25;
                e_15 = t;
                t = SSL_exit(e_15);
              }
            }
        }
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
              static ATerm y_7 (ATerm t)
              {
                ATerm x_40 = NULL,e_41 = NULL,f_41 = NULL,x_7 = NULL;
                f_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_41);
                x_40 = t;
                t = e_41;
                if(((w_39 != NULL) && (w_39 != t)))
                  _fail(t);
                else
                  w_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_41);
                x_7 = t;
                t = SSLsetAnnotations(x_7, x_40);
                return(t);
              }
              t = fetch_1_0(y_7, t);
              t = term_g_17;
              v_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_39)), term_u_31);
              w_40 = t;
              t = SSL_printnl(v_40, w_40);
              t = (ATerm) ATmakeAppl(sym__2, term_g_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_39)), term_u_31));
              t = default_system_usage_0_0(t);
              t = term_i_8;
              u_40 = t;
              t = SSL_exit(u_40);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
            }
        }
      }
  }
  x_39 = t;
  t = term_a_25;
  z_39 = t;
  t = SSL_table_destroy(z_39);
  t = x_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,o_41 = NULL,p_41 = NULL;
  t = parse_options_1_0(t_86, t);
  k_41 = t;
  t = term_v_31;
  p_41 = t;
  t = SSL_table_create(p_41);
  t = term_v_31;
  l_41 = t;
  t = term_w_31;
  o_41 = t;
  t = SSL_table_put(l_41, o_41, k_41);
  t = k_41;
  t = v_86(t);
  {
    ATerm x_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_86, t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = x_31;
        {
          ATerm b_32 = t;
          int g_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_86(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_32);
            }
          else
            {
              t = b_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0_0(t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = pp_options_0_0(t);
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_7, default_usage_0_0, _id, ast2text_0_0, t);
  return(t);
}
