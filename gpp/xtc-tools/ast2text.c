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
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_o_8;
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
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_9, term_h_8, term_p_9);
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
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_9, term_w_9, term_x_9);
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
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_h_10, term_i_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_q_10);
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
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_b_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_m_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_g_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_u_12, term_y_12);
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
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_o_8);
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
  term_x_29 = (ATerm) ATmakeAppl(sym__2, term_v_29, term_o_8);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_o_8);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_o_8);
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
static ATerm d_6 (ATerm k_33, ATerm l_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_abox2text_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm f_6 (ATerm w_65 (ATerm), ATerm x_165, ATerm v_17, ATerm t);
static ATerm u_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t);
static ATerm g_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm y_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm i_96 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm h_96 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm j_96 (ATerm), ATerm t);
static ATerm j_6 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm k_6 (ATerm q_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm l_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t);
static ATerm m_6 (ATerm o_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t);
static ATerm q_6 (ATerm n_39, ATerm o_39, ATerm t);
static ATerm k_10 (ATerm z_9, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm t_17, ATerm t);
static ATerm o_6 (ATerm v_39, ATerm w_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_13 (ATerm e_11, ATerm t);
static ATerm h_13 (ATerm u_11, ATerm v_11, ATerm w_11, ATerm t);
static ATerm i_13 (ATerm p_12, ATerm q_12, ATerm t_12, ATerm t);
static ATerm p_6 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_78 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_18 (ATerm s_17, ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm j_84 (ATerm), ATerm t);
static ATerm r_6 (ATerm m_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm t_6 (ATerm k_36, ATerm l_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_83 (ATerm), ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm w_83 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_26 (ATerm z_25, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_6 (ATerm l_38, ATerm k_38, ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_96 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_6 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm u_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm c_7 (ATerm f_38, ATerm g_38, ATerm t);
static ATerm z_6 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm a_7 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t);
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
static ATerm d_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm c_8 = t;
  int d_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_33, l_33);
      LocalPopChoice(d_8);
    }
  else
    {
      t = c_8;
      t = SSL_subtr(k_33, l_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL;
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
  e_0 = t;
  t = term_h_8;
  j_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_0, term_h_8);
  t = d_6(e_0, j_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  c_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_0), term_e_8);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_i_8;
  return(t);
}
ATerm xtc_abox2text_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm j_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_1 = NULL,h_1 = NULL;
      h_1 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_1 = ATgetArgument(t, 0);
          {
            ATerm m_0 = NULL,x_0 = NULL;
            t = SSLgetAnnotations(h_1);
            m_0 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
            x_0 = t;
            t = SSLsetAnnotations(x_0, m_0);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_1;
        }
      LocalPopChoice(l_8);
      {
        static ATerm h_0 (ATerm t)
        {
          ATerm i_1 = NULL,j_1 = NULL,q_1 = NULL;
          t = term_o_8;
          t = o_84(t);
          q_1 = t;
          t = SSL_int_to_string(q_1);
          i_1 = t;
          t = term_o_8;
          t = pass_verbose_0_0(t);
          j_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, i_1), term_b_8), j_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_file_2_0(a_0, h_0, t);
      }
    }
  else
    {
      t = j_8;
      {
        static ATerm s_0 (ATerm t)
        {
          ATerm r_1 = NULL,s_1 = NULL,u_1 = NULL;
          t = term_o_8;
          t = o_84(t);
          u_1 = t;
          t = SSL_int_to_string(u_1);
          r_1 = t;
          t = term_o_8;
          t = pass_verbose_0_0(t);
          s_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATempty, r_1), term_b_8), s_1);
          t = conc_0_0(t);
          return(t);
        }
        t = xtc_transform_term_2_0(q_0, s_0, t);
      }
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm q_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_8);
      q_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATempty, term_s_8));
      t = q_6(m_2, q_2, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm r_2 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_2);
  return(t);
}
static ATerm f_6 (ATerm w_65 (ATerm), ATerm x_165, ATerm v_17, ATerm t)
{
  ATerm s_2 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_165, term_t_8);
  t = p_6(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, v_17);
  t = w_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_8 = ATgetArgument(t, 0);
      if(match_cons(u_8, sym_Stream_1))
        {
          v_2 = ATgetArgument(u_8, 0);
        }
      else
        _fail(t);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(v_2, w_2, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  u_2 = t;
  t = xtc_new_file_0_0(t);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_2, u_2);
  t = f_6(u_0, t_2, u_2, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_2);
  t = xtc_transform_file_2_0(i_83, j_83, t);
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
        ATerm g_1 = NULL,k_1 = NULL;
        t = SSL_int_to_string(x_3);
        g_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_8), g_1), term_v_8);
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
ATerm fetch_elem_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm e_4 = NULL;
  static ATerm w_0 (ATerm t)
  {
    t = y_70(t);
    if(((e_4 != NULL) && (e_4 != t)))
      _fail(t);
    else
      e_4 = t;
    return(t);
  }
  t = fetch_1_0(w_0, t);
  t = not_null(e_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_4 = NULL;
  f_4 = t;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_9 = ATgetArgument(t, 0);
              if((f_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm k_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), term_t_16), term_n_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_j_15), term_y_14), term_p_14), term_s_13), term_l_13), term_z_12), term_r_12), term_k_12), term_b_12), term_t_11), term_o_11), term_i_11), term_d_11), term_y_10), term_s_10), term_j_10), term_d_10), term_y_9), term_u_9), term_q_9);
        t = fetch_elem_1_0(y_0, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
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
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            w_4 = ATgetArgument(t, 1);
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
              ATerm j_2 = NULL,l_2 = NULL,o_2 = NULL;
              t = w_4;
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
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_2), term_m_17);
              o_2 = t;
              t = SSL_printnl(l_2, o_2);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, j_2), term_m_17));
              LocalPopChoice(j_17);
            }
          else
            {
              t = h_17;
              t = l_4;
            }
        }
      }
    else
      {
        t = b_17;
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
ATerm fork_and_wait_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL;
  i_5 = t;
  t = fork_0_0(t);
  g_5 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_5;
        t = l_64(t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = SSL_waitpid(g_5);
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
        t = i_5;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm l_5 = NULL,n_5 = NULL;
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), l_5);
    t = z_6(not_null(k_5), l_5, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, n_5);
    return(t);
  }
  if(((k_5 != NULL) && (k_5 != t)))
    _fail(t);
  else
    k_5 = t;
  t = SSL_table_keys(k_5);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_5, term_e_16);
        t = geq_0_0(t);
        t = p_5;
        t = i_96(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = p_5;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_96 (ATerm), ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm z_17 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        x_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_6, term_y_11);
        t = geq_0_0(t);
        t = w_5;
        t = h_96(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = z_17;
        t = w_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 = NULL;
        t = term_e_8;
        t = get_config_0_0(t);
        k_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_7, term_b_10);
        t = geq_0_0(t);
        t = g_7;
        t = j_96(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        t = g_7;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t_74 (ATerm), ATerm u_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = u_74(t);
  {
    static ATerm b_1 (ATerm t)
    {
      ATerm q_7 = NULL;
      q_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, q_7);
      t = t_74(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm k_6 (ATerm q_74 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm w_8 (ATerm t)
  {
    ATerm k_8 = NULL,n_8 = NULL,p_8 = NULL;
    k_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
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
          ATerm j_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_8;
              {
                static ATerm c_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = j_6(q_74, c_1, n_8, p_8, t);
              }
              t = w_8(t);
              LocalPopChoice(n_18);
            }
          else
            {
              t = j_18;
              {
                ATerm a_3 = NULL,f_3 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(k_8);
                a_3 = t;
                t = p_8;
                t = w_8(t);
                f_3 = t;
                t = (ATerm) ATinsert(CheckATermList(f_3), n_8);
                z_0 = t;
                t = SSLsetAnnotations(z_0, a_3);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = w_8(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      if((m_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm c_37, ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm b_9 = NULL,f_9 = NULL,g_9 = NULL;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
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
        t = (ATerm) ATmakeAppl(sym__2, c_37, d_37);
        t = z_6(c_37, d_37, t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATempty;
      }
  }
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, e_37);
  t = k_6(e_1, g_9, e_37, t);
  f_9 = t;
  t = SSL_table_put(c_37, d_37, f_9);
  t = b_9;
  return(t);
}
static ATerm m_6 (ATerm o_81 (ATerm), ATerm m_37, ATerm l_37, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm n_9 = NULL,o_9 = NULL;
    if(match_cons(t, sym__2))
      {
        n_9 = ATgetArgument(t, 0);
        o_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_37, n_9, o_9);
    t = o_81(t);
    return(t);
  }
  t = l_37;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm q_6 (ATerm n_39, ATerm o_39, ATerm t)
{
  t = SSL_access(n_39, o_39);
  return(t);
}
static ATerm k_10 (ATerm z_9, ATerm t)
{
  t = SSL_fclose(z_9);
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
        ATerm w_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(f_10);
            LocalPopChoice(b_19);
          }
        else
          {
            t = w_18;
            t = k_10(g_10, t);
          }
      }
    }
  else
    {
      t = k_10(g_10, t);
    }
  return(t);
}
static ATerm n_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm o_6 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm l_10 = NULL;
  t = SSL_fopen(v_39, w_39);
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  t = SSL_stdin_stream();
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdout_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  t = SSL_stderr_stream();
  t_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
  return(t);
}
static ATerm g_13 (ATerm e_11, ATerm t)
{
  ATerm l_11 = NULL;
  t = SSL_explode_term(e_11);
  if(match_cons(t, sym__2))
    {
      ATerm d_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) == AT_LIST) && !(ATisEmpty(e_19))))
          {
            l_11 = ATgetFirst((ATermList) e_19);
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
  t = l_11;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_11;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_11;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_11;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_13 (ATerm u_11, ATerm v_11, ATerm w_11, ATerm t)
{
  ATerm d_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(w_11);
  i_12 = t;
  t = u_11;
  if(match_cons(t, sym_Path_1))
    {
      l_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, v_11);
  d_1 = t;
  t = SSLsetAnnotations(d_1, i_12);
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
static ATerm i_13 (ATerm p_12, ATerm q_12, ATerm t_12, ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,a_13 = NULL,v_1 = NULL;
  t = SSLgetAnnotations(t_12);
  x_12 = t;
  t = SSL_is_string(p_12);
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, q_12);
  v_1 = t;
  t = SSLsetAnnotations(v_1, x_12);
  if(match_cons(t, sym__2))
    {
      v_12 = ATgetArgument(t, 0);
      w_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(v_12, w_12, t);
  return(t);
}
static ATerm p_6 (ATerm t)
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
      t = p_6(t);
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
  t = n_6(n_13, t);
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
      t = q_6(t_13, u_13, t);
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
                t = (ATerm) ATinsert(ATempty, term_s_8);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_13, (ATerm) ATinsert(ATempty, term_s_8));
                t = q_6(v_13, w_13, t);
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
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
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
  t = l_6(d_15, e_15, f_15, t);
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
  t = if_verbose5_1_0(p_1, t);
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
        t = z_6(q_14, s_14, t);
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
  t = m_6(z_1, i_14, y_13, t);
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
ATerm filter_1_0 (ATerm i_78 (ATerm), ATerm t)
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
            ATerm r_4 = NULL,a_5 = NULL,e_5 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(j_16);
            r_4 = t;
            t = l_16;
            t = i_78(t);
            a_5 = t;
            t = m_16;
            t = filter_1_0(i_78, t);
            e_5 = t;
            t = (ATerm) ATinsert(CheckATermList(e_5), a_5);
            g_3 = t;
            t = SSLsetAnnotations(g_3, r_4);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = m_16;
            t = filter_1_0(i_78, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm r_68 (ATerm), ATerm s_68 (ATerm), ATerm t)
{
  static ATerm p_16 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_68(t);
        t = p_16(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = s_68(t);
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
  t = z_6(g_17, i_17, t);
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
        t = z_6(v_16, a_17, t);
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
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
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
  t = z_6(b_18, c_18, t);
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
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
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
                t = z_6(l_18, m_18, t);
                {
                  static ATerm p_2 (ATerm t)
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
                  t = fetch_1_0(p_2, t);
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
        ATerm r_18 = NULL,v_5 = NULL,y_5 = NULL;
        r_18 = t;
        t = term_l_17;
        v_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), r_18), term_l_22);
        y_5 = t;
        t = SSL_printnl(v_5, y_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), r_18), term_l_22);
        t = if_verbose5_1_0(z_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  v_18 = t;
  t = j_84(t);
  t = xtc_find_0_0(t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
  {
    static ATerm c_3 (ATerm t)
    {
      ATerm x_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_18, v_18);
      t = g_6(u_18, v_18, t);
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
static ATerm r_6 (ATerm m_80 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,c_19 = NULL,k_19 = NULL,l_19 = NULL;
  c_19 = t;
  t = m_80(t);
  y_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_18, s_34, q_34);
  t = a_7(y_18, s_34, q_34, t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL;
        t = term_q_22;
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_18, term_q_22);
        t = z_6(y_18, m_19, t);
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
  t = (ATerm) ATinsert(CheckATermList(a_19), (ATerm) ATinsert(CheckATermList(z_18), s_34));
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
  t = y_6(r_19, w_19, t);
  t_19 = t;
  t = term_u_22;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, term_u_22);
  t = y_6(t_19, u_19, t);
  s_19 = t;
  t = SSL_mkstemp(s_19);
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_o_8;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, term_o_8);
  t = r_6(d_3, o_19, p_19, t);
  t = SSL_close(n_19);
  t = o_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL,d_20 = NULL;
  a_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_20 = NULL,h_20 = NULL;
      t = a_20;
      t = xtc_new_file_0_0(t);
      f_20 = t;
      t = v_0(t);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, (ATerm) ATinsert(ATinsert(ATempty, f_20), term_v_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
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
      t = v_0(t);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_20), term_v_22), d_20), term_w_22));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_20);
    }
  return(t);
}
static ATerm s_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
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
        t = r_0(t);
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
        t = s_6(e_21, h_6, t);
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
              ATerm j_7 = NULL;
              t = d_21;
              t = r_0(t);
              j_7 = t;
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
              t = (ATerm) ATmakeAppl(sym__2, e_21, j_7);
              t = s_6(e_21, j_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_21);
              LocalPopChoice(d_23);
            }
          else
            {
              t = z_22;
              t = d_21;
              t = r_0(t);
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
static ATerm t_6 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm j_21 = NULL,m_21 = NULL;
  m_21 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = z_6(k_36, l_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_23 = ATgetFirst((ATermList) t);
            j_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_23);
        t = SSL_table_put(k_36, l_36, j_21);
        t = (ATerm) ATmakeAppl(sym__3, k_36, l_36, j_21);
      }
    else
      {
        t = g_23;
        t = SSL_table_remove(k_36, l_36);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  t = m_21;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm p_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL;
  t_21 = t;
  t = j_80(t);
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
        t = z_6(s_21, x_21, t);
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
      t = t_6(s_21, y_21, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = t_21;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_81(t);
      t = k_81(t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = k_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,g_22 = NULL,h_22 = NULL,k_22 = NULL;
  c_22 = t;
  t = i_80(t);
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
        t = z_6(b_22, s_22, t);
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
static ATerm k_3 (ATerm t)
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
static ATerm m_3 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm a_23 = NULL;
  static ATerm i_3 (ATerm t)
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
          t = z_6(c_23, f_23, t);
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
    t = map_1_0(k_3, t);
    t = b_23;
    t = end_scope_1_0(m_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(v_83, i_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
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
ATerm xtc_io_1_0 (ATerm w_83 (ATerm), ATerm t)
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
    t = w_83(t);
    t = copy_to_1_0(p_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(o_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
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
            ATerm w_7 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(d_24);
            w_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_24);
            j_3 = t;
            t = SSLsetAnnotations(j_3, w_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_24;
        }
      LocalPopChoice(o_24);
      t = xtc_transform_file_2_0(t_3, w_3, t);
    }
  else
    {
      t = i_24;
      t = xtc_transform_term_2_0(b_4, c_4, t);
    }
  t = xtc_abox2text_1_0(pass_width_0_0, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm w_3 (ATerm t)
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
  t = map_1_0(d_4, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_24), term_s_24);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  t = xtc_io_1_0(r_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,n_24 = NULL,u_24 = NULL,v_24 = NULL;
  j_24 = t;
  t = term_o_8;
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
ATerm at_end_1_0 (ATerm c_71 (ATerm), ATerm t)
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
          ATerm m_8 = NULL,r_8 = NULL,l_3 = NULL;
          t = SSLgetAnnotations(s_25);
          m_8 = t;
          t = r_25;
          t = t_25(t);
          r_8 = t;
          t = (ATerm) ATinsert(CheckATermList(r_8), q_25);
          l_3 = t;
          t = SSLsetAnnotations(l_3, m_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_25;
        t = c_71(t);
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
static ATerm u_6 (ATerm l_38, ATerm k_38, ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,n_26 = NULL;
  t = l_38;
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
  t = (ATerm) ATmakeAppl(sym__2, k_38, k_26);
  t = conc_0_0(t);
  j_26 = t;
  t = term_f_25;
  n_26 = t;
  t = SSL_table_put(n_26, l_38, j_26);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, l_38, j_26);
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
  t = u_6(p_26, q_26, t);
  t = o_26;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_27 = NULL,d_27 = NULL,e_27 = NULL;
      t = term_o_8;
      t = p_0(t);
      b_27 = t;
      t = term_h_25;
      d_27 = t;
      t = term_i_25;
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, b_27);
      t = a_7(d_27, e_27, b_27, t);
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
      t = n_0(t);
      t = y_26;
      t = o_0(t);
      o_27 = t;
      t = (ATerm) ATinsert(CheckATermList(a_27), o_27);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
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
  t = c_7(u_27, t_27, t);
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
  t = ArgOption_3_0(n_4, p_4, q_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
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
static ATerm t_4 (ATerm t)
{
  ATerm a_28 = NULL,b_28 = NULL;
  t = term_e_8;
  a_28 = t;
  t = term_l_25;
  b_28 = t;
  t = term_m_25;
  t = c_7(a_28, b_28, t);
  t = term_n_25;
  return(t);
}
static ATerm v_4 (ATerm t)
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
  t = c_7(e_28, d_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_28);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  t = term_u_25;
  f_28 = t;
  t = term_o_8;
  g_28 = t;
  t = term_v_25;
  t = c_7(f_28, g_28, t);
  t = term_w_25;
  return(t);
}
static ATerm d_5 (ATerm t)
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
      t = Option_3_0(s_4, t_4, v_4, t);
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
            t = Option_3_0(b_5, c_5, d_5, t);
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
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
static ATerm h_5 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL;
  k_28 = t;
  t = term_v_22;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_22, k_28);
  t = c_7(l_28, k_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_28);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, h_5, j_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
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
static ATerm o_5 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_w_22;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_22, o_28);
  t = c_7(p_28, o_28, t);
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
  t = ArgOption_3_0(m_5, o_5, q_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
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
  t = c_7(v_28, s_28, t);
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
                        t = ArgOption_3_0(r_5, t_5, u_5, t);
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
  t = term_o_8;
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
static ATerm v_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_77 (ATerm), ATerm f_77 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL,o_29 = NULL;
  i_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_29;
      t = e_77(t);
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
      t = foldr_2_0(e_77, f_77, t);
      r_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_29, r_29);
      t = f_77(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  if(match_cons(t, sym__2))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(i_9, j_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_29 = NULL,a_9 = NULL,c_9 = NULL;
  t = times_0_0(t);
  c_9 = t;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_9;
  t = foldr_2_0(x_5, z_5, t);
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
ATerm if_verbose1_1_0 (ATerm e_96 (ATerm), ATerm t)
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
        t = e_96(t);
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
  t = term_o_8;
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
            ATerm n_10 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(l_31);
            n_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_31);
            n_3 = t;
            t = SSLsetAnnotations(n_3, n_10);
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
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm t)
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
  t = r_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_31 = ATgetFirst((ATermList) t);
      p_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_31 = NULL,u_31 = NULL;
        static ATerm c_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_31)), not_null(u_31));
          return(t);
        }
        t = p_31;
        t = l_0(t);
        if(((t_31 != NULL) && (t_31 != t)))
          _fail(t);
        else
          t_31 = t;
        t = o_31;
        t = k_0(t);
        if(((u_31 != NULL) && (u_31 != t)))
          _fail(t);
        else
          u_31 = t;
        t = p_31;
        t = reverse_acc_2_0(k_0, c_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_8;
      t = l_0(t);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_31 = NULL,b_32 = NULL,c_32 = NULL,q_3 = NULL;
  c_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_32);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_32);
  q_3 = t;
  t = SSLsetAnnotations(q_3, y_31);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_32 = NULL;
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_32), term_i_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
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
      t = fetch_1_0(i_6, t);
    }
  t = term_t_28;
  t = echo_0_0(t);
  t = term_h_25;
  w_31 = t;
  t = term_i_25;
  x_31 = t;
  t = term_u_28;
  t = z_6(w_31, x_31, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(b_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_70 (ATerm), ATerm t)
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
          ATerm x_10 = NULL,a_11 = NULL,s_3 = NULL;
          t = SSLgetAnnotations(y_32);
          x_10 = t;
          t = z_32;
          t = w_70(t);
          a_11 = t;
          t = (ATerm) ATinsert(CheckATermList(a_33), a_11);
          s_3 = t;
          t = SSLsetAnnotations(s_3, x_10);
          LocalPopChoice(x_28);
        }
      else
        {
          t = w_28;
          {
            ATerm j_11 = NULL,p_11 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(y_32);
            j_11 = t;
            t = a_33;
            t = b_33(t);
            p_11 = t;
            t = (ATerm) ATinsert(CheckATermList(p_11), z_32);
            u_3 = t;
            t = SSLsetAnnotations(u_3, j_11);
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
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL;
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
  i_33 = t;
  t = term_b_24;
  j_33 = t;
  t = SSL_printnl(j_33, i_33);
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
static ATerm y_6 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm u_65 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  p_33 = t;
  t = u_65(t);
  q_33 = t;
  t = term_l_17;
  r_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_33), q_33);
  s_33 = t;
  t = SSL_printnl(r_33, s_33);
  t = p_33;
  return(t);
}
ATerm map_1_0 (ATerm m_70 (ATerm), ATerm t)
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
        ATerm a_12 = NULL,e_12 = NULL,f_12 = NULL,m_4 = NULL;
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
        t = m_70(t);
        e_12 = t;
        t = g_34;
        t = h_34(t);
        f_12 = t;
        t = (ATerm) ATinsert(CheckATermList(f_12), e_12);
        m_4 = t;
        t = SSLsetAnnotations(m_4, a_12);
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
      ATerm a_35 = NULL;
      a_35 = t;
      t = SSL_is_string(a_35);
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
              ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
              g_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  h_35 = ATgetArgument(t, 0);
                  t = h_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      h_35 = ATgetArgument(t, 0);
                      t = h_35;
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
                      ATerm m_35 = NULL,n_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          h_35 = ATgetArgument(t, 0);
                          i_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = h_35;
                      t = eval_config_0_0(t);
                      m_35 = t;
                      t = i_35;
                      t = eval_config_0_0(t);
                      n_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
                      t = y_6(m_35, n_35, t);
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
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  t = term_f_25;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, r_35);
  t = z_6(s_35, r_35, t);
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_35 = NULL,u_35 = NULL;
        t = eval_config_0_0(t);
        t_35 = t;
        t = term_f_25;
        u_35 = t;
        t = SSL_table_put(u_35, r_35, t_35);
        t = t_35;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_v_29;
  y_35 = t;
  t = term_o_8;
  z_35 = t;
  t = term_x_29;
  t = c_7(y_35, z_35, t);
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
  ATerm h_36 = NULL,i_36 = NULL,m_36 = NULL,n_36 = NULL;
  t = term_v_29;
  m_36 = t;
  t = term_o_8;
  n_36 = t;
  t = term_x_29;
  t = c_7(m_36, n_36, t);
  t = term_z_29;
  h_36 = t;
  t = term_o_8;
  i_36 = t;
  t = term_a_30;
  t = c_7(h_36, i_36, t);
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
      t = Option_3_0(f_7, h_7, i_7, t);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = Option_3_0(m_7, n_7, o_7, t);
    }
  return(t);
}
static ATerm c_7 (ATerm f_38, ATerm g_38, ATerm t)
{
  ATerm o_36 = NULL;
  t = term_f_25;
  o_36 = t;
  t = SSL_table_put(o_36, f_38, g_38);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, f_38, g_38);
  return(t);
}
static ATerm z_6 (ATerm w_37, ATerm x_37, ATerm t)
{
  t = SSL_table_get(w_37, x_37);
  return(t);
}
static ATerm a_7 (ATerm f_36, ATerm g_36, ATerm e_36, ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL;
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
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
        t = (ATerm) ATmakeAppl(sym__2, f_36, g_36);
        t = z_6(f_36, g_36, t);
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATempty;
      }
  }
  r_36 = t;
  t = (ATerm) ATinsert(CheckATermList(r_36), e_36);
  s_36 = t;
  t = SSL_table_put(f_36, g_36, s_36);
  t = q_36;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_37 = NULL,b_37 = NULL,h_37 = NULL;
      t = term_o_8;
      t = i_0(t);
      a_37 = t;
      t = term_h_25;
      b_37 = t;
      t = term_i_25;
      h_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_25, term_i_25, a_37);
      t = a_7(b_37, h_37, a_37, t);
      _fail(t);
    }
  else
    {
      ATerm k_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_36 = ATgetFirst((ATermList) t);
          z_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_36;
      t = d_0(t);
      t = term_o_8;
      t = g_0(t);
      k_37 = t;
      t = (ATerm) ATinsert(CheckATermList(z_36), k_37);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,o_4 = NULL;
  u_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_37 = ATgetFirst((ATermList) t);
      r_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_37);
  p_37 = t;
  t = q_37;
  t = m_57(t);
  s_37 = t;
  t = r_37;
  t = n_57(t);
  t_37 = t;
  t = (ATerm) ATinsert(CheckATermList(t_37), s_37);
  o_4 = t;
  t = SSLsetAnnotations(o_4, p_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL,i_38 = NULL,j_38 = NULL,u_4 = NULL;
  b_38 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_30;
        t = p_87(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
      }
  }
  t = b_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_38);
  c_38 = t;
  t = term_h_27;
  j_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, d_38);
  t = c_7(j_38, d_38, t);
  t = e_38;
  {
    static ATerm a_39 (ATerm t)
    {
      ATerm m_30 = t;
      int q_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_38 = NULL;
              t_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_38;
              LocalPopChoice(s_30);
            }
          else
            {
              t = r_30;
              t = p_87(t);
              t = Cons_2_0(_id, a_39, t);
            }
          LocalPopChoice(q_30);
        }
      else
        {
          t = m_30;
          {
            ATerm w_38 = NULL,x_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_38 = ATgetFirst((ATermList) t);
                x_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_38), (ATerm) ATmakeAppl(sym_Undefined_1, w_38));
          }
        }
      return(t);
    }
    t = a_39(t);
  }
  i_38 = t;
  t = (ATerm) ATinsert(CheckATermList(i_38), (ATerm) ATmakeAppl(sym_Program_1, d_38));
  u_4 = t;
  t = SSLsetAnnotations(u_4, c_38);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  if(match_string(t, "--help"))
    {
      t = m_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_39;
        }
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  t = term_h_28;
  p_39 = t;
  t = term_o_8;
  q_39 = t;
  t = term_u_30;
  t = c_7(p_39, q_39, t);
  t = term_w_30;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_z_30;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
  h_39 = t;
  t = term_h_25;
  j_39 = t;
  t = term_i_25;
  k_39 = t;
  t = (ATerm) ATempty;
  l_39 = t;
  t = SSL_table_put(j_39, k_39, l_39);
  t = h_39;
  {
    static ATerm p_7 (ATerm t)
    {
      ATerm d_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_87(t);
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
    t = parse_options_p__1_0(p_7, t);
  }
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_40 = NULL;
        b_40 = t;
        {
          ATerm j_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_14 = NULL;
              t = b_40;
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
                    t = fetch_1_0(u_7, t);
                  }
              }
              t = b_40;
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
                t = b_40;
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
              ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL;
              static ATerm x_7 (ATerm t)
              {
                ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,v_7 = NULL;
                h_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_40);
                f_40 = t;
                t = g_40;
                if(((f_39 != NULL) && (f_39 != t)))
                  _fail(t);
                else
                  f_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_40);
                v_7 = t;
                t = SSLsetAnnotations(v_7, f_40);
                return(t);
              }
              t = fetch_1_0(x_7, t);
              t = term_l_17;
              d_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_39)), term_v_31);
              e_40 = t;
              t = SSL_printnl(d_40, e_40);
              t = (ATerm) ATmakeAppl(sym__2, term_l_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_39)), term_v_31));
              t = default_system_usage_0_0(t);
              t = term_h_8;
              c_40 = t;
              t = SSL_exit(c_40);
              LocalPopChoice(s_31);
            }
          else
            {
              t = r_31;
            }
        }
      }
  }
  g_39 = t;
  t = term_h_25;
  i_39 = t;
  t = SSL_table_destroy(i_39);
  t = g_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,y_40 = NULL;
  t = parse_options_1_0(t_85, t);
  p_40 = t;
  t = term_d_32;
  y_40 = t;
  t = SSL_table_create(y_40);
  t = term_d_32;
  q_40 = t;
  t = term_f_32;
  r_40 = t;
  t = SSL_table_put(q_40, r_40, p_40);
  t = p_40;
  t = v_85(t);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_85, t);
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
              t = w_85(t);
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
