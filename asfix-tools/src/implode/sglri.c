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
Symbol sym_Path_1;
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
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
ATerm term_h_35;
ATerm term_g_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_z_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_v_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_n_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_8, term_a_9, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_9, term_g_9, term_h_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_9, term_p_9, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_9, term_v_9, term_y_9);
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
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_y_10, term_z_10);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_j_11, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_q_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_x_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_f_12, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
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
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_l_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_t_13, term_u_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_n_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_q_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_c_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_r_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_f_17, term_g_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_n_18);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_m_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_a_22);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_n_23);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_s_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_z_23);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_p_24);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_b_23);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_j_23);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_k_23);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_d_27);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_27);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_i_23);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_x_29);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_o_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym__2, term_c_28, term_d_28);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_z_31, term_i_23);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_i_23);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_i_23);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_z_31);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_i_23);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm read_from_0_0 (ATerm t);
static ATerm e_6 (ATerm p_17, ATerm q_17, ATerm t);
static ATerm f_6 (ATerm y_66 (ATerm), ATerm k_174, ATerm z_17, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t);
static ATerm g_6 (ATerm h_14, ATerm i_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm a_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm n_65 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm w_66 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm l_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm k_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm m_83 (ATerm), ATerm t);
static ATerm j_6 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm k_6 (ATerm z_75 (ATerm), ATerm z_24, ATerm y_24, ATerm t);
static ATerm z_0 (ATerm t);
static ATerm l_6 (ATerm p_37, ATerm q_37, ATerm r_37, ATerm t);
static ATerm m_6 (ATerm o_83 (ATerm), ATerm z_37, ATerm y_37, ATerm t);
static ATerm q_6 (ATerm v_39, ATerm w_39, ATerm t);
static ATerm j_9 (ATerm x_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm v_17, ATerm t);
static ATerm o_6 (ATerm e_40, ATerm f_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_12 (ATerm c_10, ATerm t);
static ATerm d_12 (ATerm m_10, ATerm n_10, ATerm o_10, ATerm t);
static ATerm e_12 (ATerm a_11, ATerm b_11, ATerm e_11, ATerm t);
static ATerm p_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm u_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm b_18 (ATerm q_16, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm r_6 (ATerm y_81 (ATerm), ATerm f_35, ATerm d_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm s_6 (ATerm m_32, ATerm n_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm sglr_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm u_6 (ATerm p_14, ATerm q_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm x_36, ATerm y_36, ATerm t);
ATerm end_scope_1_0 (ATerm v_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_81 (ATerm), ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm v_85 (ATerm), ATerm t);
static ATerm n_3 (ATerm t);
ATerm xtc_io_1_0 (ATerm w_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_7 (ATerm s_38, ATerm t_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm a_7 (ATerm s_36, ATerm t_36, ATerm r_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm f_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_31 (ATerm i_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_6 (ATerm y_38, ATerm x_38, ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_6 (ATerm r_33, ATerm s_33, ATerm t);
ATerm foldr_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm h_83 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm need_help_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_6 (ATerm j_38, ATerm k_38, ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_89 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm parse_options_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
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
      t = term_h_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_8);
      u_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_0, (ATerm) ATinsert(ATempty, term_j_8));
      t = q_6(m_0, u_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_6 (ATerm p_17, ATerm q_17, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(p_17, q_17);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
static ATerm f_6 (ATerm y_66 (ATerm), ATerm k_174, ATerm z_17, ATerm t)
{
  ATerm x_0 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_174, term_k_8);
  t = p_6(t);
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_0, z_17);
  t = y_66(t);
  t = fclose_0_0(t);
  t = z_17;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if(match_cons(n_8, sym_Stream_1))
        {
          c_1 = ATgetArgument(n_8, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6(c_1, e_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm t)
{
  ATerm y_0 = NULL,b_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, b_1);
  t = f_6(a_0, y_0, b_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
  t = xtc_transform_file_2_0(i_85, j_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm h_14, ATerm i_14, ATerm t)
{
  t = SSL_execvp(h_14, i_14);
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
        ATerm j_0 = NULL,l_0 = NULL;
        t = SSL_int_to_string(w_2);
        j_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_8), j_0), term_o_8);
        l_0 = t;
        t = SSL_concat_strings(l_0);
      }
    }
  else
    {
      ATerm k_1 = NULL,l_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_2 = ATgetArgument(t, 0);
          x_2 = ATgetArgument(t, 1);
          y_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_2);
      k_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_2), term_t_8), k_1), term_s_8), w_2);
      l_1 = t;
      t = SSL_concat_strings(l_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm b_3 = NULL;
  static ATerm b_0 (ATerm t)
  {
    t = a_72(t);
    if(((b_3 != NULL) && (b_3 != t)))
      _fail(t);
    else
      b_3 = t;
    return(t);
  }
  t = fetch_1_0(b_0, t);
  t = not_null(b_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_8 = ATgetArgument(t, 0);
              if((c_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm y_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_17), term_x_16), term_t_16), term_o_16), term_k_16), term_e_16), term_r_15), term_i_15), term_e_15), term_a_15), term_d_14), term_m_13), term_d_13), term_y_12), term_u_12), term_p_12), term_j_12), term_y_11), term_r_11), term_l_11), term_c_11), term_v_10), term_l_10), term_h_10), term_z_9), term_t_9), term_i_9), term_c_9);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL,r_3 = NULL;
  g_3 = t;
  {
    ATerm i_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            r_3 = ATgetArgument(t, 1);
            {
              ATerm o_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_17);
        {
          ATerm r_17 = t;
          int s_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
              t = r_3;
              {
                ATerm t_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_1 = t;
              t = term_u_17;
              b_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_w_17);
              c_2 = t;
              t = SSL_printnl(b_2, c_2);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_w_17));
              LocalPopChoice(s_17);
            }
          else
            {
              t = r_17;
              t = g_3;
            }
        }
      }
    else
      {
        t = i_17;
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
ATerm fork_and_wait_1_0 (ATerm n_65 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  f_4 = t;
  t = fork_0_0(t);
  e_4 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = f_4;
        t = n_65(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = SSL_waitpid(e_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            if(((ATgetType(c_18) != AT_INT) || (ATgetInt((ATermInt) c_18) != 0)))
              _fail(t);
            {
              ATerm e_18 = ATgetArgument(t, 1);
            }
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = f_4;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm w_66 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  i_4 = t;
  t = w_66(t);
  j_4 = t;
  t = term_u_17;
  k_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_4), j_4);
  l_4 = t;
  t = SSL_printnl(k_4, l_4);
  t = i_4;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_4 = NULL;
  static ATerm h_0 (ATerm t)
  {
    ATerm o_4 = NULL,p_4 = NULL;
    o_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_4), o_4);
    t = z_6(not_null(m_4), o_4, t);
    p_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
    return(t);
  }
  if(((m_4 != NULL) && (m_4 != t)))
    _fail(t);
  else
    m_4 = t;
  t = SSL_table_keys(m_4);
  t = map_1_0(h_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL,v_4 = NULL,a_5 = NULL;
        t = term_l_18;
        v_4 = t;
        t = term_n_18;
        a_5 = t;
        t = term_t_18;
        t = z_6(v_4, a_5, t);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, term_m_16);
        t = geq_0_0(t);
        t = s_4;
        t = l_83(t);
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        t = s_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_5 = NULL,k_5 = NULL,l_5 = NULL;
        t = term_l_18;
        k_5 = t;
        t = term_n_18;
        l_5 = t;
        t = term_t_18;
        t = z_6(k_5, l_5, t);
        g_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_5, term_f_12);
        t = geq_0_0(t);
        t = e_5;
        t = k_83(t);
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = e_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  ATerm p_5 = NULL;
  p_5 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_5 = NULL,t_5 = NULL,u_5 = NULL;
        t = term_l_18;
        t_5 = t;
        t = term_n_18;
        u_5 = t;
        t = term_t_18;
        t = z_6(t_5, u_5, t);
        s_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_5, term_v_9);
        t = geq_0_0(t);
        t = p_5;
        t = m_83(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = p_5;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  t = d_76(t);
  {
    static ATerm q_0 (ATerm t)
    {
      ATerm x_5 = NULL;
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_25, x_5);
      t = c_76(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
  }
  t = c_25;
  return(t);
}
static ATerm k_6 (ATerm z_75 (ATerm), ATerm z_24, ATerm y_24, ATerm t)
{
  static ATerm t_7 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL,p_7 = NULL;
    k_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_7 = ATgetFirst((ATermList) t);
            p_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_18 = t;
          int c_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_7;
              {
                static ATerm s_0 (ATerm t)
                {
                  t = y_24;
                  return(t);
                }
                t = j_6(z_75, s_0, l_7, p_7, t);
              }
              t = t_7(t);
              LocalPopChoice(c_19);
            }
          else
            {
              t = z_18;
              {
                ATerm i_2 = NULL,l_2 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(k_7);
                i_2 = t;
                t = p_7;
                t = t_7(t);
                l_2 = t;
                t = (ATerm) ATinsert(CheckATermList(l_2), l_7);
                g_0 = t;
                t = SSLsetAnnotations(g_0, i_2);
              }
            }
        }
      }
    return(t);
  }
  t = z_24;
  t = t_7(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      if((i_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm p_37, ATerm q_37, ATerm r_37, ATerm t)
{
  ATerm a_8 = NULL,d_8 = NULL,e_8 = NULL;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_37, q_37);
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
        t = (ATerm) ATmakeAppl(sym__2, p_37, q_37);
        t = z_6(p_37, q_37, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, r_37);
  t = k_6(z_0, e_8, r_37, t);
  d_8 = t;
  t = SSL_table_put(p_37, q_37, d_8);
  t = a_8;
  return(t);
}
static ATerm m_6 (ATerm o_83 (ATerm), ATerm z_37, ATerm y_37, ATerm t)
{
  static ATerm a_1 (ATerm t)
  {
    ATerm l_8 = NULL,m_8 = NULL;
    if(match_cons(t, sym__2))
      {
        l_8 = ATgetArgument(t, 0);
        m_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, z_37, l_8, m_8);
    t = o_83(t);
    return(t);
  }
  t = y_37;
  t = map_1_0(a_1, t);
  return(t);
}
static ATerm q_6 (ATerm v_39, ATerm w_39, ATerm t)
{
  t = SSL_access(v_39, w_39);
  return(t);
}
static ATerm j_9 (ATerm x_8, ATerm t)
{
  t = SSL_fclose(x_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_9 = ATgetArgument(t, 0);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_9);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = j_9(f_9, t);
          }
      }
    }
  else
    {
      t = j_9(f_9, t);
    }
  return(t);
}
static ATerm n_6 (ATerm v_17, ATerm t)
{
  t = SSL_read_term_from_stream(v_17);
  return(t);
}
static ATerm o_6 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm l_9 = NULL;
  t = SSL_fopen(e_40, f_40);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_9 = NULL;
  t = SSL_stdin_stream();
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_stdout_stream();
  o_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_9 = NULL;
  t = SSL_stderr_stream();
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
static ATerm a_12 (ATerm c_10, ATerm t)
{
  ATerm d_10 = NULL;
  t = SSL_explode_term(c_10);
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            d_10 = ATgetFirst((ATermList) k_19);
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
  t = d_10;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_12 (ATerm m_10, ATerm n_10, ATerm o_10, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,x_10 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(o_10);
  r_10 = t;
  t = m_10;
  if(match_cons(t, sym_Path_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, n_10);
  n_1 = t;
  t = SSLsetAnnotations(n_1, r_10);
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(p_10, q_10, t);
  return(t);
}
static ATerm e_12 (ATerm a_11, ATerm b_11, ATerm e_11, ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,n_11 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(e_11);
  h_11 = t;
  t = SSL_is_string(a_11);
  n_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, b_11);
  p_1 = t;
  t = SSLsetAnnotations(p_1, h_11);
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(f_11, g_11, t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm p_11 = NULL,u_11 = NULL,w_11 = NULL;
  p_11 = t;
  if(match_cons(t, sym__2))
    {
      u_11 = ATgetArgument(t, 0);
      w_11 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_12(p_11, t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            {
              ATerm p_19 = t;
              int q_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_12(u_11, w_11, p_11, t);
                  LocalPopChoice(q_19);
                }
              else
                {
                  t = p_19;
                  t = e_12(u_11, w_11, p_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_12(p_11, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,o_12 = NULL,b_13 = NULL;
  b_13 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_13, term_u_19);
        t = p_6(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm u_3 = NULL,w_3 = NULL;
          t = term_w_19;
          w_3 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_19, b_13);
          t = s_6(w_3, b_13, t);
          u_3 = t;
          t = SSL_perror(u_3);
          _fail(t);
        }
      }
  }
  h_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(o_12, t);
  g_12 = t;
  t = h_12;
  t = fclose_0_0(t);
  t = g_12;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL,f_13 = NULL;
      e_13 = t;
      t = (ATerm) ATinsert(ATempty, term_e_20);
      f_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_13, (ATerm) ATinsert(ATempty, term_e_20));
      t = q_6(e_13, f_13, t);
      LocalPopChoice(c_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_20;
      {
        ATerm f_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_20 = t;
            if((PushChoice() == 0))
              {
                ATerm i_13 = NULL,k_13 = NULL;
                i_13 = t;
                t = (ATerm) ATinsert(ATempty, term_j_8);
                k_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_13, (ATerm) ATinsert(ATempty, term_j_8));
                t = q_6(i_13, k_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_20;
              }
            t = debug_1_0(d_1, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = f_20;
            t = debug_1_0(f_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,j_14 = NULL;
  f_14 = t;
  t = term_u_17;
  g_14 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  j_14 = t;
  t = SSL_printnl(g_14, j_14);
  t = f_14;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  if(match_cons(t, sym__3))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
      m_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_6(k_14, l_14, m_14, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
  r_14 = t;
  t = term_u_17;
  s_14 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  t_14 = t;
  t = SSL_printnl(s_14, t_14);
  t = r_14;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t = term_u_17;
  v_14 = t;
  t = (ATerm) ATinsert(ATempty, term_q_20);
  w_14 = t;
  t = SSL_printnl(v_14, w_14);
  t = u_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,s_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  n_13 = t;
  t = if_verbose5_1_0(g_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,c_14 = NULL;
        t = term_e_21;
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, n_13);
        c_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, n_13));
        t = z_6(b_14, c_14, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  p_13 = t;
  t = term_e_21;
  y_13 = t;
  t = term_f_21;
  z_13 = t;
  t = (ATerm) ATinsert(ATempty, n_13);
  a_14 = t;
  t = SSL_table_put(y_13, z_13, a_14);
  t = p_13;
  t = if_verbose4_1_0(i_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_1, t);
  o_13 = t;
  t = term_e_21;
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, o_13);
  t = m_6(o_1, x_13, o_13, t);
  t = if_verbose6_1_0(q_1, t);
  t = term_e_21;
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, n_13);
  v_13 = t;
  t = (ATerm) ATempty;
  w_13 = t;
  t = SSL_table_put(s_13, v_13, w_13);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, n_13), (ATerm) ATempty);
  t = if_verbose4_1_0(r_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_15 = ATgetFirst((ATermList) t);
          l_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 = NULL,r_4 = NULL,w_4 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(j_15);
            h_4 = t;
            t = k_15;
            t = u_79(t);
            r_4 = t;
            t = l_15;
            t = filter_1_0(u_79, t);
            w_4 = t;
            t = (ATerm) ATinsert(CheckATermList(w_4), r_4);
            v_1 = t;
            t = SSLsetAnnotations(v_1, h_4);
            LocalPopChoice(h_21);
          }
        else
          {
            t = g_21;
            t = l_15;
            t = filter_1_0(u_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm t)
{
  static ATerm o_15 (ATerm t)
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_69(t);
        t = o_15(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = u_69(t);
      }
    return(t);
  }
  t = o_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL,s_15 = NULL;
      t = term_l_18;
      p_15 = t;
      t = term_m_21;
      s_15 = t;
      t = term_n_21;
      t = z_6(p_15, s_15, t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_15 = NULL;
            t = term_w_21;
            t_15 = t;
            t = SSL_getenv(t_15);
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
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm f_16 = NULL,i_16 = NULL;
  t = term_e_21;
  f_16 = t;
  t = term_a_22;
  i_16 = t;
  t = term_b_22;
  t = z_6(f_16, i_16, t);
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
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_15 = NULL;
  t = if_verbose5_1_0(s_1, t);
  v_15 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_15 = NULL,a_16 = NULL;
        t = term_e_21;
        z_15 = t;
        t = term_f_21;
        a_16 = t;
        t = term_g_22;
        t = z_6(z_15, a_16, t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm b_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_16 = t;
          t = repeat_2_0(u_1, _id, t);
          t = b_16;
        }
      }
  }
  t = v_15;
  t = if_verbose5_1_0(w_1, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm b_18 (ATerm q_16, ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  t = term_e_21;
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_16);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, q_16));
  t = z_6(a_17, b_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_22 = ATgetFirst((ATermList) t);
      if(match_cons(i_22, sym__2))
        {
          ATerm k_22 = ATgetArgument(i_22, 0);
          z_16 = ATgetArgument(i_22, 1);
        }
      else
        _fail(t);
      {
        ATerm j_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_16;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
      t = if_verbose5_1_0(a_2, t);
      t = xtc_load_0_0(t);
      e_17 = t;
      if(match_cons(t, sym__2))
        {
          c_17 = ATgetArgument(t, 0);
          d_17 = ATgetArgument(t, 1);
          {
            ATerm o_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_17 = NULL,l_17 = NULL,m_17 = NULL;
                t = term_e_21;
                l_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_17);
                m_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, c_17));
                t = z_6(l_17, m_17, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_17 != NULL) && (j_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(j_17);
                LocalPopChoice(s_22);
              }
            else
              {
                t = o_22;
                t = b_18(e_17, t);
              }
          }
        }
      else
        {
          t = b_18(e_17, t);
        }
      t = if_verbose5_1_0(f_2, t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      {
        ATerm a_18 = NULL,i_5 = NULL,j_5 = NULL;
        a_18 = t;
        t = term_u_17;
        i_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), a_18), term_t_22);
        j_5 = t;
        t = SSL_printnl(i_5, j_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_22), a_18), term_t_22);
        t = if_verbose5_1_0(h_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm d_18 = NULL,g_18 = NULL;
  g_18 = t;
  t = j_86(t);
  t = xtc_find_0_0(t);
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_18, g_18);
  {
    static ATerm k_2 (ATerm t)
    {
      ATerm h_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_18, g_18);
      t = g_6(d_18, g_18, t);
      t = term_x_22;
      h_18 = t;
      t = SSL_exit(h_18);
      return(t);
    }
    t = fork_and_wait_1_0(k_2, t);
  }
  t = g_18;
  return(t);
}
static ATerm r_6 (ATerm y_81 (ATerm), ATerm f_35, ATerm d_35, ATerm t)
{
  ATerm i_18 = NULL,m_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  t = y_81(t);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_18, f_35, d_35);
  t = a_7(i_18, f_35, d_35, t);
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_18 = NULL;
        t = term_b_23;
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_18, term_b_23);
        t = z_6(i_18, s_18, t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_18 = ATgetFirst((ATermList) t);
      o_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_23;
  q_18 = t;
  t = (ATerm) ATinsert(CheckATermList(o_18), (ATerm) ATinsert(CheckATermList(m_18), f_35));
  r_18 = t;
  t = SSL_table_put(i_18, q_18, r_18);
  t = p_18;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_19 = NULL,v_5 = NULL;
      a_19 = t;
      t = term_e_23;
      v_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_19, term_e_23);
      t = s_6(a_19, v_5, t);
      u_18 = t;
      t = SSL_mkstemp(u_18);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm b_19 = NULL;
        t = term_f_23;
        b_19 = t;
        t = SSL_perror(b_19);
        _fail(t);
      }
    }
  return(t);
}
static ATerm s_6 (ATerm m_32, ATerm n_32, ATerm t)
{
  t = SSL_strcat(m_32, n_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_19 = NULL,t_19 = NULL,v_19 = NULL,x_19 = NULL,y_19 = NULL;
  t = P__tmpdir_0_0(t);
  x_19 = t;
  t = term_h_23;
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_19, term_h_23);
  t = s_6(x_19, y_19, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_i_23;
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, term_i_23);
  t = r_6(m_2, t_19, v_19, t);
  t = SSL_close(o_19);
  t = t_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,g_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_20 = NULL,l_20 = NULL;
      t = d_20;
      t = xtc_new_file_0_0(t);
      i_20 = t;
      t = v_0(t);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(ATinsert(ATempty, i_20), term_j_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_20);
    }
  else
    {
      ATerm n_20 = NULL,o_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          g_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_20;
      t = xtc_new_file_0_0(t);
      n_20 = t;
      t = v_0(t);
      o_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_20), term_j_23), g_20), term_k_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_20);
    }
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm p_20 = NULL,s_20 = NULL;
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
      t = term_l_18;
      u_20 = t;
      t = term_n_23;
      v_20 = t;
      t = term_o_23;
      t = z_6(u_20, v_20, t);
      t_20 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, t_20), term_p_23);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      t = (ATerm) ATempty;
    }
  p_20 = t;
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL;
        t = term_l_18;
        w_20 = t;
        t = term_s_23;
        x_20 = t;
        t = term_t_23;
        t = z_6(w_20, x_20, t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = (ATerm) ATempty;
      }
  }
  s_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_20), p_20), (ATerm) ATinsert(ATempty, term_u_23));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_20 = NULL,z_20 = NULL;
      t = term_l_18;
      y_20 = t;
      t = term_z_23;
      z_20 = t;
      t = term_a_24;
      t = z_6(y_20, z_20, t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
        t = term_u_17;
        b_21 = t;
        t = (ATerm) ATinsert(ATempty, term_b_24);
        c_21 = t;
        t = SSL_printnl(b_21, c_21);
        t = term_a_9;
        a_21 = t;
        t = SSL_exit(a_21);
        t = (ATerm) ATinsert(ATempty, term_b_24);
      }
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm sglr_2_0 (ATerm g_64 (ATerm), ATerm h_64 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,p_21 = NULL;
      p_21 = t;
      if(match_cons(t, sym_FILE_1))
        {
          o_21 = ATgetArgument(t, 0);
          {
            ATerm b_6 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(p_21);
            b_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, o_21);
            x_1 = t;
            t = SSLsetAnnotations(x_1, b_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_21;
        }
      LocalPopChoice(m_24);
      {
        static ATerm p_2 (ATerm t)
        {
          ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
          u_21 = t;
          t = g_64(t);
          s_21 = t;
          t = u_21;
          t = h_64(t);
          t_21 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_21), s_21), term_z_23);
          return(t);
        }
        t = xtc_transform_file_2_0(n_2, p_2, t);
      }
    }
  else
    {
      t = g_24;
      {
        static ATerm r_2 (ATerm t)
        {
          ATerm v_21 = NULL,x_21 = NULL,y_21 = NULL;
          y_21 = t;
          t = g_64(t);
          v_21 = t;
          t = y_21;
          t = h_64(t);
          x_21 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(x_21), v_21), term_z_23);
          return(t);
        }
        t = xtc_transform_term_2_0(q_2, r_2, t);
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_p_24;
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL,u_22 = NULL;
        t = term_l_18;
        r_22 = t;
        t = term_p_24;
        u_22 = t;
        t = term_s_24;
        t = z_6(r_22, u_22, t);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_p_24;
  {
    ATerm u_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_22 = NULL,y_22 = NULL;
        t = term_l_18;
        v_22 = t;
        t = term_p_24;
        y_22 = t;
        t = term_s_24;
        t = z_6(v_22, y_22, t);
        LocalPopChoice(x_24);
      }
    else
      {
        t = u_24;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  {
    ATerm a_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL,q_22 = NULL;
        q_22 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_22 = ATgetArgument(t, 0);
            {
              ATerm m_7 = NULL,o_2 = NULL;
              t = SSLgetAnnotations(q_22);
              m_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_22);
              o_2 = t;
              t = SSLsetAnnotations(o_2, m_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_22;
          }
        LocalPopChoice(e_25);
        t = xtc_transform_file_2_0(t_2, z_2, t);
      }
    else
      {
        t = a_25;
        t = xtc_transform_term_2_0(d_3, e_3, t);
      }
  }
  return(t);
}
static ATerm u_6 (ATerm p_14, ATerm q_14, ATerm t)
{
  t = SSL_copy(p_14, q_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = x_23;
        t = r_0(t);
        z_7 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = z_7;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = z_7;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_23, z_7);
        t = u_6(y_23, z_7, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_8 = NULL;
              t = x_23;
              t = r_0(t);
              p_8 = t;
              {
                ATerm k_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_8 = NULL;
                    q_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_8;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_8;
                          }
                        else
                          {
                            t = q_8;
                            if((y_23 != t))
                              {
                                _fail(t);
                              }
                            t = q_8;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_23, p_8);
              t = u_6(y_23, p_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = x_23;
              t = r_0(t);
              if((y_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_23);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm x_36, ATerm y_36, ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_36, y_36);
        t = z_6(x_36, y_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_25 = ATgetFirst((ATermList) t);
            c_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_25);
        t = SSL_table_put(x_36, y_36, c_24);
        t = (ATerm) ATmakeAppl(sym__3, x_36, y_36, c_24);
      }
    else
      {
        t = l_25;
        t = SSL_table_remove(x_36, y_36);
        t = (ATerm) ATmakeAppl(sym__2, x_36, y_36);
      }
  }
  t = d_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  j_24 = t;
  t = v_81(t);
  i_24 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL;
        t = term_b_23;
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_24, term_b_23);
        t = z_6(i_24, l_24, t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_24 = ATgetFirst((ATermList) t);
      f_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_23;
  k_24 = t;
  t = SSL_table_put(i_24, k_24, f_24);
  t = h_24;
  {
    static ATerm f_3 (ATerm t)
    {
      ATerm n_24 = NULL;
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_24, n_24);
      t = v_6(i_24, n_24, t);
      return(t);
    }
    t = map_1_0(f_3, t);
  }
  t = j_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_82(t);
      t = w_82(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = w_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,v_24 = NULL,w_24 = NULL,b_25 = NULL,f_25 = NULL;
  v_24 = t;
  t = u_81(t);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_24, term_b_23);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_25 = ATgetArgument(t, 0);
            ATerm x_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_23;
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_24, term_b_23);
        t = z_6(t_24, q_25, t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = (ATerm) ATempty;
      }
  }
  w_24 = t;
  t = term_b_23;
  b_25 = t;
  t = (ATerm) ATinsert(CheckATermList(w_24), (ATerm) ATempty);
  f_25 = t;
  t = SSL_table_put(t_24, b_25, f_25);
  t = v_24;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_26);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = g_26;
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm w_25 = NULL;
  static ATerm i_3 (ATerm t)
  {
    ATerm y_25 = NULL;
    y_25 = t;
    {
      ATerm d_26 = t;
      int e_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_25 = NULL,c_26 = NULL;
          t = term_g_23;
          z_25 = t;
          t = term_b_23;
          c_26 = t;
          t = term_f_26;
          t = z_6(z_25, c_26, t);
          LocalPopChoice(e_26);
        }
      else
        {
          t = d_26;
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
          ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_25;
    t = map_1_0(j_3, t);
    t = y_25;
    t = end_scope_1_0(l_3, t);
    return(t);
  }
  t = begin_scope_1_0(h_3, t);
  t = restore_always_2_0(v_85, i_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_26 = NULL,s_26 = NULL;
      t = term_l_18;
      q_26 = t;
      t = term_j_23;
      s_26 = t;
      t = term_k_26;
      t = z_6(q_26, s_26, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = term_m_26;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  static ATerm m_3 (ATerm t)
  {
    ATerm n_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL,o_26 = NULL,p_26 = NULL;
        t = term_l_18;
        o_26 = t;
        t = term_k_23;
        p_26 = t;
        t = term_u_26;
        t = z_6(o_26, p_26, t);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_26);
        LocalPopChoice(r_26);
      }
    else
      {
        t = n_26;
        t = term_h_8;
      }
    t = w_85(t);
    t = copy_to_1_0(n_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(m_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,a_27 = NULL;
  t_26 = t;
  t = term_i_23;
  t = whoami_0_0(t);
  w_26 = t;
  t = term_u_17;
  y_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_26), w_26), term_v_26);
  a_27 = t;
  t = SSL_printnl(y_26, a_27);
  t = term_a_9;
  x_26 = t;
  t = SSL_exit(x_26);
  t = t_26;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-k"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  t = SSL_string_to_int(i_27);
  j_27 = t;
  t = term_b_27;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, j_27);
  t = c_7(k_27, j_27, t);
  t = i_27;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, s_3, t_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-S"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  t = term_n_18;
  p_27 = t;
  t = term_d_27;
  q_27 = t;
  t = term_e_27;
  t = c_7(p_27, q_27, t);
  t = term_f_27;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  t = SSL_string_to_int(r_27);
  s_27 = t;
  t = term_n_18;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, s_27);
  t = c_7(t_27, s_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_27);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  t = term_p_23;
  w_27 = t;
  t = term_i_23;
  x_27 = t;
  t = term_m_27;
  t = c_7(w_27, x_27, t);
  t = term_n_27;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, x_3, y_3, t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = v_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, a_4, b_4, t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = Option_3_0(c_4, d_4, g_4, t);
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm y_27 = NULL;
  t = term_l_18;
  y_27 = t;
  t = SSL_table_put(y_27, s_38, t_38);
  t = (ATerm) ATmakeAppl(sym__3, term_l_18, s_38, t_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_28 = NULL,j_28 = NULL,k_28 = NULL;
      t = term_i_23;
      t = e_0(t);
      h_28 = t;
      t = term_c_28;
      j_28 = t;
      t = term_d_28;
      k_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, h_28);
      t = a_7(j_28, k_28, h_28, t);
      _fail(t);
    }
  else
    {
      ATerm p_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_28 = ATgetFirst((ATermList) t);
          g_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_28;
      t = c_0(t);
      t = term_i_23;
      t = d_0(t);
      p_28 = t;
      t = (ATerm) ATinsert(CheckATermList(g_28), p_28);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm r_28 = NULL;
  r_28 = t;
  if(match_string(t, "-o"))
    {
      t = r_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_28;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = term_j_23;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_23, s_28);
  t = c_7(t_28, s_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_28);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, q_4, t_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_28 = NULL;
  v_28 = t;
  if(match_string(t, "-i"))
    {
      t = v_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_28;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  w_28 = t;
  t = term_k_23;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_23, w_28);
  t = c_7(x_28, w_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_28);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_4, y_4, z_4, t);
  return(t);
}
static ATerm a_7 (ATerm s_36, ATerm t_36, ATerm r_36, ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            ATerm o_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_36, t_36);
        t = z_6(s_36, t_36, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
  }
  c_29 = t;
  t = (ATerm) ATinsert(CheckATermList(c_29), r_36);
  d_29 = t;
  t = SSL_table_put(s_36, t_36, d_29);
  t = b_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
      t = term_i_23;
      t = p_0(t);
      q_29 = t;
      t = term_c_28;
      r_29 = t;
      t = term_d_28;
      s_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_28, term_d_28, q_29);
      t = a_7(r_29, s_29, q_29, t);
      _fail(t);
    }
  else
    {
      ATerm w_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_29 = ATgetFirst((ATermList) t);
          p_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_29;
      t = n_0(t);
      t = o_29;
      t = o_0(t);
      w_29 = t;
      t = (ATerm) ATinsert(CheckATermList(p_29), w_29);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  static ATerm e_31 (ATerm t)
  {
    ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL;
    d_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_30 = ATgetFirst((ATermList) t);
        c_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_9 = NULL,q_9 = NULL,s_2 = NULL;
          t = SSLgetAnnotations(d_31);
          k_9 = t;
          t = c_31;
          t = e_31(t);
          q_9 = t;
          t = (ATerm) ATinsert(CheckATermList(q_9), z_30);
          s_2 = t;
          t = SSLsetAnnotations(s_2, k_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_31;
        t = f_72(t);
      }
    return(t);
  }
  t = e_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
  z_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_29;
    }
  else
    {
      static ATerm b_5 (ATerm t)
      {
        t = not_null(b_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_30 = ATgetFirst((ATermList) t);
          if(((b_30 != NULL) && (b_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_30;
      t = at_end_1_0(b_5, t);
    }
  return(t);
}
static ATerm r_31 (ATerm i_31, ATerm t)
{
  ATerm k_31 = NULL;
  t = SSL_explode_term(i_31);
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL;
  o_31 = t;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
      {
        ATerm u_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_5 (ATerm t)
            {
              t = n_31;
              return(t);
            }
            t = m_31;
            t = at_end_1_0(c_5, t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = u_28;
            t = r_31(o_31, t);
          }
      }
    }
  else
    {
      t = r_31(o_31, t);
    }
  return(t);
}
static ATerm t_6 (ATerm y_38, ATerm x_38, ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  t = y_38;
  {
    ATerm z_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL;
        t = term_l_18;
        x_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_18, y_38);
        t = z_6(x_31, y_38, t);
        LocalPopChoice(a_29);
      }
    else
      {
        t = z_28;
        t = (ATerm) ATempty;
      }
  }
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_38, t_31);
  t = conc_0_0(t);
  s_31 = t;
  t = term_l_18;
  u_31 = t;
  t = SSL_table_put(u_31, y_38, s_31);
  t = (ATerm) ATmakeAppl(sym__3, term_l_18, y_38, s_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  t = term_z_23;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_23, a_32);
  t = c_7(b_32, a_32, t);
  t = a_32;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,h_32 = NULL;
  c_32 = t;
  t = term_s_23;
  d_32 = t;
  t = (ATerm) ATinsert(ATempty, c_32);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_23, (ATerm) ATinsert(ATempty, c_32));
  t = t_6(d_32, h_32, t);
  t = c_32;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm k_32 = NULL,o_32 = NULL,p_32 = NULL;
  k_32 = t;
  t = term_p_24;
  o_32 = t;
  t = (ATerm) ATinsert(ATempty, k_32);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, (ATerm) ATinsert(ATempty, k_32));
  t = t_6(o_32, p_32, t);
  t = k_32;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_g_29;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  t = term_n_23;
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, r_32);
  t = c_7(s_32, r_32, t);
  t = r_32;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(d_5, f_5, h_5, t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_5, n_5, o_5, t);
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            {
              ATerm t_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(q_5, r_5, w_5, t);
                  LocalPopChoice(u_29);
                }
              else
                {
                  t = t_29;
                  t = ArgOption_3_0(y_5, z_5, a_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_32 = NULL,x_32 = NULL,y_32 = NULL,c_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_23;
  t = whoami_0_0(t);
  v_32 = t;
  t = term_u_17;
  y_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_29), v_32);
  c_33 = t;
  t = SSL_printnl(y_32, c_33);
  t = term_a_9;
  x_32 = t;
  t = SSL_exit(x_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  t = term_l_18;
  d_33 = t;
  t = term_x_29;
  e_33 = t;
  t = term_y_29;
  t = z_6(d_33, e_33, t);
  return(t);
}
static ATerm w_6 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_33, s_33);
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      t = SSL_addr(r_33, s_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_33;
      t = q_78(t);
    }
  else
    {
      ATerm q_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_33 = ATgetFirst((ATermList) t);
          k_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_33;
      t = foldr_2_0(q_78, r_78, t);
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_33, q_33);
      t = r_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(a_10, b_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_33 = NULL,w_9 = NULL,x_9 = NULL;
  t = times_0_0(t);
  x_9 = t;
  t = SSL_explode_term(x_9);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      w_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_9;
  t = foldr_2_0(c_6, d_6, t);
  y_33 = t;
  t = SSL_TicksToSeconds(y_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym__2))
    {
      k_34 = ATgetArgument(t, 0);
      l_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int g_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_34;
        if((k_34 != t))
          {
            _fail(t);
          }
        t = j_34;
        LocalPopChoice(g_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATmakeAppl(sym__2, k_34, l_34);
        {
          ATerm h_30 = t;
          int i_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_34, l_34);
              LocalPopChoice(i_30);
            }
          else
            {
              t = h_30;
              t = SSL_gtr(k_34, l_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_34, l_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
        t = term_l_18;
        u_34 = t;
        t = term_n_18;
        v_34 = t;
        t = term_t_18;
        t = z_6(u_34, v_34, t);
        t_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_34, term_a_9);
        t = geq_0_0(t);
        t = r_34;
        t = h_83(t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = r_34;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL;
  t = run_time_0_0(t);
  i_35 = t;
  t = term_i_23;
  t = whoami_0_0(t);
  j_35 = t;
  t = term_u_17;
  l_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_30), i_35), term_s_8), j_35);
  m_35 = t;
  t = SSL_printnl(l_35, m_35);
  t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_30), i_35), term_s_8), j_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_27;
  n_35 = t;
  t = SSL_exit(n_35);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  y_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_35 = ATgetArgument(t, 0);
          {
            ATerm d_11 = NULL,u_2 = NULL;
            t = SSLgetAnnotations(y_35);
            d_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_35);
            u_2 = t;
            t = SSLsetAnnotations(u_2, d_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_35 = NULL,r_35 = NULL;
      t = term_l_18;
      q_35 = t;
      t = term_o_30;
      r_35 = t;
      t = term_p_30;
      t = z_6(q_35, r_35, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = fetch_1_0(i_6, t);
    }
  t = l_87(t);
  return(t);
}
ATerm map_1_0 (ATerm o_71 (ATerm), ATerm t)
{
  static ATerm z_36 (ATerm t)
  {
    ATerm m_36 = NULL,u_36 = NULL,v_36 = NULL;
    m_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_36;
      }
    else
      {
        ATerm v_11 = NULL,z_11 = NULL,b_12 = NULL,a_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_36 = ATgetFirst((ATermList) t);
            v_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_36);
        v_11 = t;
        t = u_36;
        t = o_71(t);
        z_11 = t;
        t = v_36;
        t = z_36(t);
        b_12 = t;
        t = (ATerm) ATinsert(CheckATermList(b_12), z_11);
        a_3 = t;
        t = SSLsetAnnotations(a_3, v_11);
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_37 = NULL,i_37 = NULL;
        static ATerm y_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_37)), not_null(i_37));
          return(t);
        }
        t = d_37;
        t = k_0(t);
        if(((h_37 != NULL) && (h_37 != t)))
          _fail(t);
        else
          h_37 = t;
        t = c_37;
        t = i_0(t);
        if(((i_37 != NULL) && (i_37 != t)))
          _fail(t);
        else
          i_37 = t;
        t = d_37;
        t = reverse_acc_2_0(i_0, y_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_23;
      t = k_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_38), term_q_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL;
      t = term_l_18;
      u_37 = t;
      t = term_x_29;
      v_37 = t;
      t = term_y_29;
      t = z_6(u_37, v_37, t);
      m_37 = t;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        static ATerm d_7 (ATerm t)
        {
          ATerm w_37 = NULL,x_37 = NULL,c_38 = NULL,k_3 = NULL;
          c_38 = t;
          if(match_cons(t, sym_Program_1))
            {
              x_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_38);
          w_37 = t;
          t = x_37;
          if(((m_37 != NULL) && (m_37 != t)))
            _fail(t);
          else
            m_37 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, x_37);
          k_3 = t;
          t = SSLsetAnnotations(k_3, w_37);
          return(t);
        }
        t = fetch_1_0(d_7, t);
      }
    }
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_30), not_null(m_37)), term_v_30);
        t = echo_0_0(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
      }
  }
  t = term_x_30;
  t = echo_0_0(t);
  t = term_c_28;
  n_37 = t;
  t = term_d_28;
  o_37 = t;
  t = term_y_30;
  t = z_6(n_37, o_37, t);
  t = reverse_acc_2_0(_id, f_7, t);
  t = map_1_0(g_7, t);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_31), term_h_31), term_g_31), term_f_31);
        t = echo_0_0(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm l_39 (ATerm t)
  {
    ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_39 = ATgetFirst((ATermList) t);
        k_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 = NULL,t_12 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(i_39);
          n_12 = t;
          t = j_39;
          t = y_71(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(k_39), t_12);
          o_3 = t;
          t = SSLsetAnnotations(o_3, n_12);
          LocalPopChoice(p_31);
        }
      else
        {
          t = l_31;
          {
            ATerm j_13 = NULL,q_13 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(i_39);
            j_13 = t;
            t = k_39;
            t = l_39(t);
            q_13 = t;
            t = (ATerm) ATinsert(CheckATermList(q_13), j_39);
            p_3 = t;
            t = SSLsetAnnotations(p_3, j_13);
          }
        }
    }
    return(t);
  }
  t = l_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_39 = NULL,r_39 = NULL,s_39 = NULL;
  p_39 = t;
  {
    ATerm q_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm y_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_39;
          }
        LocalPopChoice(v_31);
      }
    else
      {
        t = q_31;
        t = (ATerm) ATinsert(ATempty, p_39);
      }
  }
  r_39 = t;
  t = term_m_26;
  s_39 = t;
  t = SSL_printnl(s_39, r_39);
  t = p_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  t = term_l_18;
  y_39 = t;
  t = term_x_29;
  z_39 = t;
  t = term_y_29;
  t = z_6(y_39, z_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm j_38, ATerm k_38, ATerm t)
{
  t = SSL_table_get(j_38, k_38);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  t = term_z_31;
  a_40 = t;
  t = term_i_23;
  b_40 = t;
  t = term_e_32;
  t = c_7(a_40, b_40, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,i_40 = NULL,j_40 = NULL;
  t = term_z_31;
  i_40 = t;
  t = term_i_23;
  j_40 = t;
  t = term_e_32;
  t = c_7(i_40, j_40, t);
  t = term_g_32;
  c_40 = t;
  t = term_i_23;
  d_40 = t;
  t = term_i_32;
  t = c_7(c_40, d_40, t);
  t = term_j_32;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, i_7, j_7, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = q_32;
      t = Option_3_0(n_7, o_7, q_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,x_6 = NULL;
  p_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_40 = ATgetFirst((ATermList) t);
      m_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_40);
  k_40 = t;
  t = l_40;
  t = i_58(t);
  n_40 = t;
  t = m_40;
  t = j_58(t);
  o_40 = t;
  t = (ATerm) ATinsert(CheckATermList(o_40), n_40);
  x_6 = t;
  t = SSLsetAnnotations(x_6, k_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,i_41 = NULL,j_41 = NULL,b_7 = NULL;
  x_40 = t;
  {
    ATerm u_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_32;
        t = j_89(t);
        LocalPopChoice(w_32);
      }
    else
      {
        t = u_32;
      }
  }
  t = x_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_40 = ATgetFirst((ATermList) t);
      a_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_40);
  y_40 = t;
  t = term_x_29;
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, z_40);
  t = c_7(j_41, z_40, t);
  t = a_41;
  {
    static ATerm w_41 (ATerm t)
    {
      ATerm a_33 = t;
      int b_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33 = t;
          int g_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_41 = NULL;
              m_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_41;
              LocalPopChoice(g_33);
            }
          else
            {
              t = f_33;
              t = j_89(t);
              t = Cons_2_0(_id, w_41, t);
            }
          LocalPopChoice(b_33);
        }
      else
        {
          t = a_33;
          {
            ATerm p_41 = NULL,s_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_41 = ATgetFirst((ATermList) t);
                s_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_41), (ATerm) ATmakeAppl(sym_Undefined_1, p_41));
          }
        }
      return(t);
    }
    t = w_41(t);
  }
  i_41 = t;
  t = (ATerm) ATinsert(CheckATermList(i_41), (ATerm) ATmakeAppl(sym_Program_1, z_40));
  b_7 = t;
  t = SSLsetAnnotations(b_7, y_40);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm o_42 = NULL;
  o_42 = t;
  if(match_string(t, "--help"))
    {
      t = o_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_42;
        }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_o_30;
  p_42 = t;
  t = term_i_23;
  q_42 = t;
  t = term_h_33;
  t = c_7(p_42, q_42, t);
  t = term_l_33;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,m_42 = NULL,n_42 = NULL;
  e_42 = t;
  t = term_c_28;
  g_42 = t;
  t = term_d_28;
  m_42 = t;
  t = (ATerm) ATempty;
  n_42 = t;
  t = SSL_table_put(g_42, m_42, n_42);
  t = e_42;
  {
    static ATerm r_7 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_89(t);
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          {
            ATerm p_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_7, u_7, v_7, t);
                LocalPopChoice(t_33);
              }
            else
              {
                t = p_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_7, t);
  }
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_43 = NULL;
        d_43 = t;
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL;
              t = d_43;
              {
                ATerm z_33 = t;
                int a_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_14 = NULL,y_14 = NULL;
                    t = term_l_18;
                    x_14 = t;
                    t = term_o_30;
                    y_14 = t;
                    t = term_p_30;
                    t = z_6(x_14, y_14, t);
                    LocalPopChoice(a_34);
                  }
                else
                  {
                    t = z_33;
                    t = fetch_1_0(w_7, t);
                  }
              }
              t = d_43;
              t = default_system_usage_0_0(t);
              t = term_d_27;
              o_14 = t;
              t = SSL_exit(o_14);
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
              {
                ATerm u_15 = NULL,w_15 = NULL,x_15 = NULL;
                t = term_l_18;
                w_15 = t;
                t = term_z_31;
                x_15 = t;
                t = term_b_34;
                t = z_6(w_15, x_15, t);
                t = d_43;
                t = default_system_about_0_0(t);
                t = term_d_27;
                u_15 = t;
                t = SSL_exit(u_15);
              }
            }
        }
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        {
          ATerm c_34 = t;
          int d_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
              static ATerm x_7 (ATerm t)
              {
                ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,e_7 = NULL;
                j_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_43);
                h_43 = t;
                t = i_43;
                if(((c_42 != NULL) && (c_42 != t)))
                  _fail(t);
                else
                  c_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_43);
                e_7 = t;
                t = SSLsetAnnotations(e_7, h_43);
                return(t);
              }
              t = fetch_1_0(x_7, t);
              t = term_u_17;
              f_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_42)), term_e_34);
              g_43 = t;
              t = SSL_printnl(f_43, g_43);
              t = (ATerm) ATmakeAppl(sym__2, term_u_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_42)), term_e_34));
              t = default_system_usage_0_0(t);
              t = term_a_9;
              e_43 = t;
              t = SSL_exit(e_43);
              LocalPopChoice(d_34);
            }
          else
            {
              t = c_34;
            }
        }
      }
  }
  d_42 = t;
  t = term_c_28;
  f_42 = t;
  t = SSL_table_destroy(f_42);
  t = d_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  t = parse_options_1_0(n_87, t);
  o_43 = t;
  t = term_f_34;
  r_43 = t;
  t = SSL_table_create(r_43);
  t = term_f_34;
  p_43 = t;
  t = term_g_34;
  q_43 = t;
  t = SSL_table_put(p_43, q_43, o_43);
  t = o_43;
  t = p_87(t);
  {
    ATerm h_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_87, t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = h_34;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      {
        ATerm q_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = q_34;
            {
              ATerm w_34 = t;
              int x_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_34);
                }
              else
                {
                  t = w_34;
                  {
                    ATerm y_34 = t;
                    int z_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_8, f_8, g_8, t);
                        LocalPopChoice(z_34);
                      }
                    else
                      {
                        t = y_34;
                        {
                          ATerm a_35 = t;
                          int b_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_35);
                            }
                          else
                            {
                              t = a_35;
                              t = keep_option_0_0(t);
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = xtc_io_1_0(parse_and_implode_0_0, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL;
  t = term_c_35;
  t_43 = t;
  t = term_i_23;
  u_43 = t;
  t = term_e_35;
  t = c_7(t_43, u_43, t);
  t = term_g_35;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, b_8, t);
  return(t);
}
