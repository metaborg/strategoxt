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
Symbol sym_Hashtable_1;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_k_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_d_36;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_p_34;
ATerm term_x_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_h_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_d_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_b_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_l_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_f_27;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_p_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_e_23;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_y_20;
ATerm term_s_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_b_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_t_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_a_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_h_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_m_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_l_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_r_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_y_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_o_16, term_p_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_f_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_s_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_e_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_l_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_f_25);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_m_25);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_y_23);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_q_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_f_24);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_z_29);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_y_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_j_28);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_f_24);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_f_24);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_f_24);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__3, term_h_28, term_j_28, (ATerm) ATempty);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_s_32);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_f_24);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_g_24);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm q_14, ATerm r_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_6 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm s_6 (ATerm g_69 (ATerm), ATerm e_177, ATerm a_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t);
static ATerm t_6 (ATerm i_14, ATerm j_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm v_67 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm e_69 (ATerm), ATerm t);
static ATerm v_6 (ATerm s_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_86 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_86 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_86 (ATerm), ATerm t);
static ATerm x_6 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm e_25, ATerm d_25, ATerm t);
static ATerm y_6 (ATerm h_78 (ATerm), ATerm a_25, ATerm z_24, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm z_6 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t);
static ATerm a_7 (ATerm i_86 (ATerm), ATerm a_38, ATerm z_37, ATerm t);
static ATerm e_7 (ATerm b_42, ATerm c_42, ATerm t);
static ATerm d_12 (ATerm w_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_7 (ATerm w_17, ATerm t);
static ATerm c_7 (ATerm k_42, ATerm l_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_14 (ATerm a_13, ATerm t);
static ATerm x_14 (ATerm p_13, ATerm q_13, ATerm r_13, ATerm t);
static ATerm z_14 (ATerm c_14, ATerm d_14, ATerm e_14, ATerm t);
static ATerm d_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm x_20 (ATerm s_19, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm e_89 (ATerm), ATerm t);
static ATerm f_7 (ATerm s_84 (ATerm), ATerm g_35, ATerm e_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm g_7 (ATerm n_32, ATerm o_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm sglr_2_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm p_7 (ATerm m_38, ATerm n_38, ATerm t);
static ATerm j_7 (ATerm y_36, ATerm z_36, ATerm t);
ATerm end_scope_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_84 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm q_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_7 (ATerm y_40, ATerm z_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm q_7 (ATerm t_36, ATerm u_36, ATerm s_36, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_33 (ATerm k_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_7 (ATerm e_41, ATerm d_41, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_7 (ATerm s_33, ATerm t_33, ATerm t);
ATerm foldr_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_86 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm need_help_1_0 (ATerm g_90 (ATerm), ATerm t);
static ATerm t_7 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm t);
static ATerm u_7 (ATerm o_40, ATerm p_40, ATerm t);
ATerm lookup_table_0_1 (ATerm f_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_40, ATerm u_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_7 (ATerm q_40, ATerm r_40, ATerm t);
static ATerm n_7 (ATerm v_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_92 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm parse_options_1_0 (ATerm d_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = n_1;
        t = r_0(t);
        h_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_1, h_0);
        t = i_7(p_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm j_8 = t;
          int k_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = n_1;
              t = r_0(t);
              z_0 = t;
              {
                ATerm l_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_1 = NULL;
                    a_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_1;
                          }
                        else
                          {
                            t = a_1;
                            if((p_1 != t))
                              {
                                _fail(t);
                              }
                            t = a_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_1, z_0);
              t = i_7(p_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
              LocalPopChoice(k_8);
            }
          else
            {
              t = j_8;
              t = n_1;
              t = r_0(t);
              if((p_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
            }
        }
      }
  }
  return(t);
}
static ATerm i_7 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_copy(q_14, r_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 = NULL,x_2 = NULL;
      t = term_p_8;
      w_2 = t;
      t = term_u_8;
      x_2 = t;
      t = term_v_8;
      t = p_7(w_2, x_2, t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      t = term_w_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_1 = NULL,l_1 = NULL;
      t = term_u_8;
      {
        ATerm y_8 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,q_1 = NULL;
            t = term_p_8;
            o_1 = t;
            t = term_u_8;
            q_1 = t;
            t = term_v_8;
            t = p_7(o_1, q_1, t);
            LocalPopChoice(b_9);
          }
        else
          {
            t = y_8;
            t = term_w_8;
          }
      }
      k_1 = t;
      t = term_c_9;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, k_1);
      t = i_7(l_1, k_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm e_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm d_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_9);
      d_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_3, (ATerm) ATinsert(ATempty, term_g_9));
      t = e_7(b_3, d_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_6 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_write_term_to_stream_baf(q_17, r_17);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
static ATerm s_6 (ATerm g_69 (ATerm), ATerm e_177, ATerm a_18, ATerm t)
{
  ATerm f_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_177, term_h_9);
  t = d_7(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, a_18);
  t = g_69(t);
  t = fclose_0_0(t);
  t = a_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm k_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          k_3 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(k_3, m_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,i_3 = NULL;
  i_3 = t;
  t = xtc_new_file_0_0(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, i_3);
  t = s_6(b_0, g_3, i_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_3);
  t = xtc_transform_file_2_0(d_88, e_88, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm i_14, ATerm j_14, ATerm t)
{
  t = SSL_execvp(i_14, j_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = SSL_int_to_string(p_4);
        y_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), y_1), term_j_9);
        z_1 = t;
        t = SSL_concat_strings(z_1);
      }
    }
  else
    {
      ATerm k_2 = NULL,l_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          p_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
          s_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_4);
      k_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_4), term_m_9), k_2), term_l_9), p_4);
      l_2 = t;
      t = SSL_concat_strings(l_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_74 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = i_74(t);
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(v_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm p_9 = ATgetArgument(t, 0);
              if((w_4 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_9 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_18), term_v_17), term_p_17), term_l_17), term_h_17), term_u_16), term_n_15), term_i_15), term_b_15), term_o_14), term_b_14), term_v_13), term_l_13), term_f_13), term_z_12), term_v_12), term_o_12), term_f_12), term_y_11), term_s_11), term_o_11), term_j_11), term_c_11), term_y_10), term_u_10), term_j_10), term_d_10), term_v_9);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_4);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_5 = NULL,r_5 = NULL;
  i_5 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        {
          ATerm g_18 = t;
          int j_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL,l_3 = NULL,n_3 = NULL;
              t = r_5;
              {
                ATerm k_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              h_3 = t;
              t = term_l_18;
              l_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_3), term_m_18);
              n_3 = t;
              t = SSL_printnl(l_3, n_3);
              t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_m_18));
              LocalPopChoice(j_18);
            }
          else
            {
              t = g_18;
              t = i_5;
            }
        }
      }
    else
      {
        t = c_18;
        t = i_5;
      }
  }
  t = i_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm v_67 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL;
  c_6 = t;
  t = fork_0_0(t);
  b_6 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_6;
        t = v_67(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = SSL_waitpid(b_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_18 = ATgetArgument(t, 0);
            if(((ATgetType(q_18) != AT_INT) || (ATgetInt((ATermInt) q_18) != 0)))
              _fail(t);
            {
              ATerm v_18 = ATgetArgument(t, 1);
            }
            {
              ATerm x_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_6;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm e_69 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,o_6 = NULL,p_6 = NULL;
  i_6 = t;
  t = e_69(t);
  j_6 = t;
  t = term_l_18;
  o_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_6), j_6);
  p_6 = t;
  t = SSL_printnl(o_6, p_6);
  t = i_6;
  return(t);
}
static ATerm v_6 (ATerm s_40, ATerm t)
{
  t = SSL_hashtable_keys(s_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL;
  static ATerm l_0 (ATerm t)
  {
    ATerm l_7 = NULL,o_7 = NULL;
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_6), l_7);
    t = p_7(not_null(u_6), l_7, t);
    o_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_7, o_7);
    return(t);
  }
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  t = lookup_table_0_1(u_6, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(w_6, t);
  t = map_1_0(l_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm y_7 = NULL;
  y_7 = t;
  {
    ATerm y_18 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL,d_8 = NULL,g_8 = NULL;
        t = term_p_8;
        d_8 = t;
        t = term_f_19;
        g_8 = t;
        t = term_g_19;
        t = p_7(d_8, g_8, t);
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_8, term_j_17);
        t = geq_0_0(t);
        t = y_7;
        t = f_86(t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = y_18;
        t = y_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
        t = term_p_8;
        r_8 = t;
        t = term_f_19;
        s_8 = t;
        t = term_g_19;
        t = p_7(r_8, s_8, t);
        q_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, term_l_12);
        t = geq_0_0(t);
        t = m_8;
        t = e_86(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = m_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_86 (ATerm), ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,a_9 = NULL,d_9 = NULL;
        t = term_p_8;
        a_9 = t;
        t = term_f_19;
        d_9 = t;
        t = term_g_19;
        t = p_7(a_9, d_9, t);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, term_m_10);
        t = geq_0_0(t);
        t = x_8;
        t = g_86(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = x_8;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm k_78 (ATerm), ATerm l_78 (ATerm), ATerm e_25, ATerm d_25, ATerm t)
{
  t = l_78(t);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm f_9 = NULL;
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_25, f_9);
      t = k_78(t);
      return(t);
    }
    t = fetch_1_0(m_0, t);
  }
  t = d_25;
  return(t);
}
static ATerm y_6 (ATerm h_78 (ATerm), ATerm a_25, ATerm z_24, ATerm t)
{
  static ATerm g_10 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL,b_10 = NULL;
    x_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_9 = ATgetFirst((ATermList) t);
            b_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_9;
              {
                static ATerm q_0 (ATerm t)
                {
                  t = z_24;
                  return(t);
                }
                t = x_6(h_78, q_0, y_9, b_10, t);
              }
              t = g_10(t);
              LocalPopChoice(m_19);
            }
          else
            {
              t = l_19;
              {
                ATerm v_3 = NULL,b_4 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(x_9);
                v_3 = t;
                t = b_10;
                t = g_10(t);
                b_4 = t;
                t = (ATerm) ATinsert(CheckATermList(b_4), y_9);
                g_0 = t;
                t = SSLsetAnnotations(g_0, v_3);
              }
            }
        }
      }
    return(t);
  }
  t = a_25;
  t = g_10(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      if((d_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm q_37, ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,s_10 = NULL;
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_19 = ATgetArgument(t, 0);
            ATerm q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
        t = p_7(q_37, r_37, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATempty;
      }
  }
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_10, s_37);
  t = y_6(s_0, p_10, s_37, t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_37, r_37, o_10);
  t = lookup_table_0_1(q_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(r_37, o_10, s_10, t);
  t = n_10;
  return(t);
}
static ATerm a_7 (ATerm i_86 (ATerm), ATerm a_38, ATerm z_37, ATerm t)
{
  static ATerm u_0 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL;
    if(match_cons(t, sym__2))
      {
        e_11 = ATgetArgument(t, 0);
        f_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, a_38, e_11, f_11);
    t = i_86(t);
    return(t);
  }
  t = z_37;
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm e_7 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_access(b_42, c_42);
  return(t);
}
static ATerm d_12 (ATerm w_11, ATerm t)
{
  t = SSL_fclose(w_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_11 = ATgetArgument(t, 0);
      {
        ATerm r_19 = t;
        int t_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_11);
            LocalPopChoice(t_19);
          }
        else
          {
            t = r_19;
            t = d_12(a_12, t);
          }
      }
    }
  else
    {
      t = d_12(a_12, t);
    }
  return(t);
}
static ATerm b_7 (ATerm w_17, ATerm t)
{
  t = SSL_read_term_from_stream(w_17);
  return(t);
}
static ATerm c_7 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm h_12 = NULL;
  t = SSL_fopen(k_42, l_42);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_stdin_stream();
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stdout_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_stderr_stream();
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
static ATerm w_14 (ATerm a_13, ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_explode_term(a_13);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            h_13 = ATgetFirst((ATermList) v_19);
            {
              ATerm w_19 = (ATerm) ATgetNext((ATermList) v_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_14 (ATerm p_13, ATerm q_13, ATerm r_13, ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,a_14 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(r_13);
  u_13 = t;
  t = p_13;
  if(match_cons(t, sym_Path_1))
    {
      a_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_14, q_13);
  x_0 = t;
  t = SSLsetAnnotations(x_0, u_13);
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(s_13, t_13, t);
  return(t);
}
static ATerm z_14 (ATerm c_14, ATerm d_14, ATerm e_14, ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,m_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(e_14);
  h_14 = t;
  t = SSL_is_string(c_14);
  m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_14, d_14);
  y_0 = t;
  t = SSLsetAnnotations(y_0, h_14);
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(f_14, g_14, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  if(match_cons(t, sym__2))
    {
      t_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_14(s_14, t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = a_20;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_14(t_14, u_14, s_14, t);
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  t = z_14(t_14, u_14, s_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_14(s_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,m_15 = NULL;
  m_15 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_15, term_j_20);
        t = d_7(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm e_5 = NULL,f_5 = NULL;
          t = term_k_20;
          f_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, m_15);
          t = g_7(f_5, m_15, t);
          e_5 = t;
          t = SSL_perror(e_5);
          _fail(t);
        }
      }
  }
  e_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(f_15, t);
  d_15 = t;
  t = e_15;
  t = fclose_0_0(t);
  t = d_15;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15 = NULL,q_15 = NULL;
      p_15 = t;
      t = (ATerm) ATinsert(ATempty, term_s_20);
      q_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_15, (ATerm) ATinsert(ATempty, term_s_20));
      t = e_7(p_15, q_15, t);
      LocalPopChoice(r_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_20;
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_20 = t;
            if((PushChoice() == 0))
              {
                ATerm t_15 = NULL,u_15 = NULL;
                t_15 = t;
                t = (ATerm) ATinsert(ATempty, term_g_9);
                u_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_15, (ATerm) ATinsert(ATempty, term_g_9));
                t = e_7(t_15, u_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_20;
              }
            t = debug_1_0(w_0, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = debug_1_0(b_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,q_16 = NULL;
  m_16 = t;
  t = term_l_18;
  n_16 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  q_16 = t;
  t = SSL_printnl(n_16, q_16);
  t = m_16;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__3))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      t_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6(r_16, s_16, t_16, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  t = term_l_18;
  x_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  y_16 = t;
  t = SSL_printnl(x_16, y_16);
  t = w_16;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_16 = NULL,d_17 = NULL,e_17 = NULL;
  z_16 = t;
  t = term_l_18;
  d_17 = t;
  t = (ATerm) ATinsert(ATempty, term_b_21);
  e_17 = t;
  t = SSL_printnl(d_17, e_17);
  t = z_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL,j_16 = NULL;
  v_15 = t;
  t = if_verbose5_1_0(c_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_16 = NULL,l_16 = NULL;
        t = term_e_21;
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_15);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, v_15));
        t = p_7(k_16, l_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  x_15 = t;
  t = term_e_21;
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, (ATerm) ATinsert(ATempty, v_15));
  t = lookup_table_0_1(e_16, t);
  j_16 = t;
  t = term_f_21;
  f_16 = t;
  t = (ATerm) ATinsert(ATempty, v_15);
  g_16 = t;
  t = j_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(f_16, g_16, i_16, t);
  t = x_15;
  t = if_verbose4_1_0(f_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(i_1, t);
  w_15 = t;
  t = term_e_21;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, w_15);
  t = a_7(j_1, d_16, w_15, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_e_21;
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, v_15), (ATerm) ATempty);
  t = lookup_table_0_1(y_15, t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_15);
  z_15 = t;
  t = (ATerm) ATempty;
  a_16 = t;
  t = c_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(z_15, a_16, b_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, v_15), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,n_18 = NULL;
  h_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_18 = ATgetFirst((ATermList) t);
          n_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 = NULL,a_6 = NULL,d_6 = NULL,e_1 = NULL;
            t = SSLgetAnnotations(h_18);
            s_5 = t;
            t = i_18;
            t = o_82(t);
            a_6 = t;
            t = n_18;
            t = filter_1_0(o_82, t);
            d_6 = t;
            t = (ATerm) ATinsert(CheckATermList(d_6), a_6);
            e_1 = t;
            t = SSLsetAnnotations(e_1, s_5);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = n_18;
            t = filter_1_0(o_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  static ATerm r_18 (ATerm t)
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_72(t);
        t = r_18(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = c_72(t);
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 = NULL,t_18 = NULL;
      t = term_p_8;
      s_18 = t;
      t = term_s_21;
      t_18 = t;
      t = term_t_21;
      t = p_7(s_18, t_18, t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = n_21;
      {
        ATerm v_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL;
            t = term_y_21;
            u_18 = t;
            t = SSL_getenv(u_18);
            LocalPopChoice(x_21);
          }
        else
          {
            t = v_21;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  t = term_e_21;
  d_19 = t;
  t = term_e_22;
  e_19 = t;
  t = term_f_22;
  t = p_7(d_19, e_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_22;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_18 = NULL;
  t = if_verbose5_1_0(t_1, t);
  w_18 = t;
  {
    ATerm i_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_18 = NULL,a_19 = NULL;
        t = term_e_21;
        z_18 = t;
        t = term_f_21;
        a_19 = t;
        t = term_r_22;
        t = p_7(z_18, a_19, t);
        LocalPopChoice(l_22);
      }
    else
      {
        t = i_22;
        {
          ATerm b_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_19 = t;
          t = repeat_2_0(w_1, _id, t);
          t = b_19;
        }
      }
  }
  t = w_18;
  t = if_verbose5_1_0(x_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm x_20 (ATerm s_19, ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  t = term_e_21;
  y_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_19);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, s_19));
  t = p_7(y_19, z_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_22 = ATgetFirst((ATermList) t);
      if(match_cons(x_22, sym__2))
        {
          ATerm d_23 = ATgetArgument(x_22, 0);
          x_19 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_t_22;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_e_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm f_23 = t;
  int g_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      d_20 = t;
      if(match_cons(t, sym__2))
        {
          b_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
                t = term_e_21;
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_20);
                p_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, b_20));
                t = p_7(o_20, p_20, t);
                {
                  static ATerm d_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_2, t);
                }
                t = not_null(n_20);
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                t = x_20(d_20, t);
              }
          }
        }
      else
        {
          t = x_20(d_20, t);
        }
      t = if_verbose5_1_0(e_2, t);
      LocalPopChoice(g_23);
    }
  else
    {
      t = f_23;
      {
        ATerm w_20 = NULL,n_6 = NULL,q_6 = NULL;
        w_20 = t;
        t = term_l_18;
        n_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), w_20), term_p_23);
        q_6 = t;
        t = SSL_printnl(n_6, q_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_23), w_20), term_p_23);
        t = if_verbose5_1_0(g_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,g_21 = NULL;
  g_21 = t;
  t = e_89(t);
  t = xtc_find_0_0(t);
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_20, g_21);
  {
    static ATerm i_2 (ATerm t)
    {
      ATerm l_21 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_20, g_21);
      t = t_6(z_20, g_21, t);
      t = term_u_23;
      l_21 = t;
      t = SSL_exit(l_21);
      return(t);
    }
    t = fork_and_wait_1_0(i_2, t);
  }
  t = g_21;
  return(t);
}
static ATerm f_7 (ATerm s_84 (ATerm), ATerm g_35, ATerm e_35, ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,u_21 = NULL,w_21 = NULL,z_21 = NULL,a_22 = NULL;
  q_21 = t;
  t = s_84(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_21, g_35, e_35);
  t = q_7(m_21, g_35, e_35, t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL;
        t = term_y_23;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_21, term_y_23);
        t = p_7(m_21, b_22, t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_21 = ATgetFirst((ATermList) t);
      p_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_21, term_y_23, (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATinsert(CheckATermList(o_21), g_35)));
  t = lookup_table_0_1(m_21, t);
  a_22 = t;
  t = term_y_23;
  u_21 = t;
  t = (ATerm) ATinsert(CheckATermList(p_21), (ATerm) ATinsert(CheckATermList(o_21), g_35));
  w_21 = t;
  t = a_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(u_21, w_21, z_21, t);
  t = q_21;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm d_22 = NULL;
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_22 = NULL,x_7 = NULL;
      j_22 = t;
      t = term_b_24;
      x_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, term_b_24);
      t = g_7(j_22, x_7, t);
      d_22 = t;
      t = SSL_mkstemp(d_22);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm k_22 = NULL;
        t = term_c_24;
        k_22 = t;
        t = SSL_perror(k_22);
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_7 (ATerm n_32, ATerm o_32, ATerm t)
{
  t = SSL_strcat(n_32, o_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL;
  t = P__tmpdir_0_0(t);
  p_22 = t;
  t = term_e_24;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, term_e_24);
  t = g_7(p_22, q_22, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_24;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, term_f_24);
  t = f_7(j_2, n_22, o_22, t);
  t = SSL_close(m_22);
  t = n_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,u_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_22 = NULL,w_22 = NULL;
      t = s_22;
      t = xtc_new_file_0_0(t);
      v_22 = t;
      t = v_0(t);
      w_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATinsert(ATempty, v_22), term_u_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_22);
    }
  else
    {
      ATerm z_22 = NULL,a_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_22;
      t = xtc_new_file_0_0(t);
      z_22 = t;
      t = v_0(t);
      a_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_22), term_u_8), u_22), term_g_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_22);
    }
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,i_23 = NULL,l_23 = NULL;
      t = term_p_8;
      i_23 = t;
      t = term_l_24;
      l_23 = t;
      t = term_m_24;
      t = p_7(i_23, l_23, t);
      h_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_23), term_p_24);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = (ATerm) ATempty;
    }
  b_23 = t;
  {
    ATerm q_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_23 = NULL,n_23 = NULL;
        t = term_p_8;
        m_23 = t;
        t = term_w_24;
        n_23 = t;
        t = term_x_24;
        t = p_7(m_23, n_23, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
  }
  c_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_23), b_23), (ATerm) ATinsert(ATempty, term_y_24));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,q_23 = NULL;
      t = term_p_8;
      o_23 = t;
      t = term_f_25;
      q_23 = t;
      t = term_g_25;
      t = p_7(o_23, q_23, t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm r_23 = NULL,t_23 = NULL,v_23 = NULL;
        t = term_l_18;
        t_23 = t;
        t = (ATerm) ATinsert(ATempty, term_h_25);
        v_23 = t;
        t = SSL_printnl(t_23, v_23);
        t = term_t_9;
        r_23 = t;
        t = SSL_exit(r_23);
        t = (ATerm) ATinsert(ATempty, term_h_25);
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_i_25;
  return(t);
}
ATerm sglr_2_0 (ATerm o_66 (ATerm), ATerm p_66 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL,k_24 = NULL;
      k_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          j_24 = ATgetArgument(t, 0);
          {
            ATerm f_8 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(k_24);
            f_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_24);
            h_1 = t;
            t = SSLsetAnnotations(h_1, f_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_24;
        }
      LocalPopChoice(k_25);
      {
        static ATerm n_2 (ATerm t)
        {
          ATerm n_24 = NULL,o_24 = NULL,r_24 = NULL;
          r_24 = t;
          t = o_66(t);
          n_24 = t;
          t = r_24;
          t = p_66(t);
          o_24 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(o_24), n_24), term_f_25);
          return(t);
        }
        t = xtc_transform_file_2_0(m_2, n_2, t);
      }
    }
  else
    {
      t = j_25;
      {
        static ATerm q_2 (ATerm t)
        {
          ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
          u_24 = t;
          t = o_66(t);
          s_24 = t;
          t = u_24;
          t = p_66(t);
          t_24 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_24), s_24), term_f_25);
          return(t);
        }
        t = xtc_transform_term_2_0(p_2, q_2, t);
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_m_25;
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_25 = NULL,w_25 = NULL;
        t = term_p_8;
        v_25 = t;
        t = term_m_25;
        w_25 = t;
        t = term_p_25;
        t = p_7(v_25, w_25, t);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_l_25;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_m_25;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_25 = NULL,y_25 = NULL;
        t = term_p_8;
        x_25 = t;
        t = term_m_25;
        y_25 = t;
        t = term_p_25;
        t = p_7(x_25, y_25, t);
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  {
    ATerm s_25 = t;
    int z_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_25 = NULL,u_25 = NULL;
        u_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_25 = ATgetArgument(t, 0);
            {
              ATerm t_8 = NULL,m_1 = NULL;
              t = SSLgetAnnotations(u_25);
              t_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_25);
              m_1 = t;
              t = SSLsetAnnotations(m_1, t_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_25;
          }
        LocalPopChoice(z_25);
        t = xtc_transform_file_2_0(r_2, t_2, t);
      }
    else
      {
        t = s_25;
        t = xtc_transform_term_2_0(v_2, z_2, t);
      }
  }
  return(t);
}
static ATerm p_7 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm d_26 = NULL;
  t = lookup_table_0_1(m_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(n_38, d_26, t);
  return(t);
}
static ATerm j_7 (ATerm y_36, ATerm z_36, ATerm t)
{
  ATerm f_26 = NULL,i_26 = NULL;
  i_26 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        t = p_7(y_36, z_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_26 = ATgetFirst((ATermList) t);
            f_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_26);
        {
          ATerm l_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, y_36, z_36, f_26);
          t = lookup_table_0_1(y_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(z_36, f_26, l_26, t);
          t = (ATerm) ATmakeAppl(sym__3, y_36, z_36, f_26);
        }
      }
    else
      {
        t = a_26;
        {
          ATerm n_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
          t = lookup_table_0_1(y_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_7(z_36, n_26, t);
          t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        }
      }
  }
  t = i_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL;
  s_26 = t;
  t = p_84(t);
  r_26 = t;
  {
    ATerm e_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL;
        t = term_y_23;
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, term_y_23);
        t = p_7(r_26, y_26, t);
        LocalPopChoice(g_26);
      }
    else
      {
        t = e_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_26 = ATgetFirst((ATermList) t);
      p_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_26, term_y_23, p_26);
  t = lookup_table_0_1(r_26, t);
  x_26 = t;
  t = term_y_23;
  t_26 = t;
  t = x_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(t_26, p_26, u_26, t);
  t = q_26;
  {
    static ATerm a_3 (ATerm t)
    {
      ATerm z_26 = NULL;
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_26, z_26);
      t = j_7(r_26, z_26, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  t = s_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_85(t);
      t = q_85(t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = h_26;
      t = q_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,l_27 = NULL;
  e_27 = t;
  t = o_84(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, term_y_23);
  {
    ATerm k_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_26 = ATgetArgument(t, 0);
            ATerm v_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_23;
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_y_23);
        t = p_7(b_27, r_27, t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATempty;
      }
  }
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_27, term_y_23, (ATerm) ATinsert(CheckATermList(g_27), (ATerm) ATempty));
  t = lookup_table_0_1(b_27, t);
  l_27 = t;
  t = term_y_23;
  h_27 = t;
  t = (ATerm) ATinsert(CheckATermList(g_27), (ATerm) ATempty);
  i_27 = t;
  t = l_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(h_27, i_27, j_27, t);
  t = e_27;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm i_28 = NULL;
  i_28 = t;
  {
    ATerm w_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_28);
        LocalPopChoice(a_27);
      }
    else
      {
        t = w_26;
        t = i_28;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_88 (ATerm), ATerm t)
{
  ATerm v_27 = NULL;
  static ATerm j_3 (ATerm t)
  {
    ATerm w_27 = NULL;
    w_27 = t;
    {
      ATerm c_27 = t;
      int d_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_28 = NULL,e_28 = NULL;
          t = term_d_24;
          b_28 = t;
          t = term_y_23;
          e_28 = t;
          t = term_f_27;
          t = p_7(b_28, e_28, t);
          LocalPopChoice(d_27);
        }
      else
        {
          t = c_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_27 != NULL) && (v_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_27 = ATgetFirst((ATermList) t);
        {
          ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_27;
    t = map_1_0(o_3, t);
    t = w_27;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(q_88, j_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_28 = NULL,p_28 = NULL,r_28 = NULL,v_28 = NULL,w_28 = NULL;
  m_28 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  p_28 = t;
  t = term_l_18;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_27), p_28), term_m_27);
  w_28 = t;
  t = SSL_printnl(v_28, w_28);
  t = term_t_9;
  r_28 = t;
  t = SSL_exit(r_28);
  t = m_28;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  if(match_string(t, "-k"))
    {
      t = z_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_28;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_29 = NULL,d_29 = NULL,f_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  d_29 = t;
  t = term_o_27;
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, d_29);
  t = s_7(f_29, d_29, t);
  t = a_29;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, t_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "-S"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  t = term_f_19;
  i_29 = t;
  t = term_q_27;
  j_29 = t;
  t = term_s_27;
  t = s_7(i_29, j_29, t);
  t = term_t_27;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_u_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm k_29 = NULL,n_29 = NULL,o_29 = NULL;
  k_29 = t;
  t = SSL_string_to_int(k_29);
  n_29 = t;
  t = term_f_19;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, n_29);
  t = s_7(o_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_29 = NULL,r_29 = NULL;
  t = term_p_24;
  p_29 = t;
  t = term_f_24;
  r_29 = t;
  t = term_y_27;
  t = s_7(p_29, r_29, t);
  t = term_z_27;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_a_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, y_3, t);
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm f_28 = t;
        int g_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, c_4, e_4, t);
            LocalPopChoice(g_28);
          }
        else
          {
            t = f_28;
            t = Option_3_0(f_4, h_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm s_7 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm s_29 = NULL,v_29 = NULL;
  t = term_p_8;
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, y_40, z_40);
  t = lookup_table_0_1(s_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(y_40, z_40, v_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, y_40, z_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_30 = NULL,g_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
      t = term_f_24;
      t = e_0(t);
      h_30 = t;
      t = term_h_28;
      i_30 = t;
      t = term_j_28;
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_j_28, h_30);
      t = q_7(i_30, j_30, h_30, t);
      _fail(t);
    }
  else
    {
      ATerm o_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_30 = ATgetFirst((ATermList) t);
          g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_30;
      t = c_0(t);
      t = term_f_24;
      t = d_0(t);
      o_30 = t;
      t = (ATerm) ATinsert(CheckATermList(g_30), o_30);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  if(match_string(t, "-o"))
    {
      t = q_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_30;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  r_30 = t;
  t = term_u_8;
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, r_30);
  t = s_7(s_30, r_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_30);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_k_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  if(match_string(t, "-i"))
    {
      t = w_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_30;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm x_30 = NULL,a_31 = NULL;
  x_30 = t;
  t = term_g_24;
  a_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_24, x_30);
  t = s_7(a_31, x_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, o_4, r_4, t);
  return(t);
}
static ATerm q_7 (ATerm t_36, ATerm u_36, ATerm s_36, ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL,j_31 = NULL;
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_36, u_36);
        t = p_7(t_36, u_36, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATempty;
      }
  }
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_36, u_36, (ATerm) ATinsert(CheckATermList(f_31), s_36));
  t = lookup_table_0_1(t_36, t);
  j_31 = t;
  t = (ATerm) ATinsert(CheckATermList(f_31), s_36);
  g_31 = t;
  t = j_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(u_36, g_31, i_31, t);
  t = e_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_31 = NULL,y_31 = NULL,a_32 = NULL;
      t = term_f_24;
      t = p_0(t);
      w_31 = t;
      t = term_h_28;
      y_31 = t;
      t = term_j_28;
      a_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_28, term_j_28, w_31);
      t = q_7(y_31, a_32, w_31, t);
      _fail(t);
    }
  else
    {
      ATerm e_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_31 = ATgetFirst((ATermList) t);
          t_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      t = n_0(t);
      t = u_31;
      t = o_0(t);
      e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(v_31), e_32);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  static ATerm f_33 (ATerm t)
  {
    ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
    e_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_33 = ATgetFirst((ATermList) t);
        d_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_9 = NULL,z_9 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(e_33);
          s_9 = t;
          t = d_33;
          t = f_33(t);
          z_9 = t;
          t = (ATerm) ATinsert(CheckATermList(z_9), c_33);
          v_1 = t;
          t = SSLsetAnnotations(v_1, s_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_33;
        t = n_74(t);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_32;
    }
  else
    {
      static ATerm t_4 (ATerm t)
      {
        t = not_null(k_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_32 = ATgetFirst((ATermList) t);
          if(((k_32 != NULL) && (k_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = at_end_1_0(t_4, t);
    }
  return(t);
}
static ATerm w_33 (ATerm k_33, ATerm t)
{
  ATerm l_33 = NULL;
  t = SSL_explode_term(k_33);
  if(match_cons(t, sym__2))
    {
      ATerm t_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  p_33 = t;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
      {
        ATerm u_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_4 (ATerm t)
            {
              t = o_33;
              return(t);
            }
            t = n_33;
            t = at_end_1_0(u_4, t);
            LocalPopChoice(x_28);
          }
        else
          {
            t = u_28;
            t = w_33(p_33, t);
          }
      }
    }
  else
    {
      t = w_33(p_33, t);
    }
  return(t);
}
static ATerm h_7 (ATerm e_41, ATerm d_41, ATerm t)
{
  ATerm d_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  t = e_41;
  {
    ATerm y_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL;
        t = term_p_8;
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_8, e_41);
        t = p_7(k_34, e_41, t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = y_28;
        t = (ATerm) ATempty;
      }
  }
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, g_34);
  t = conc_0_0(t);
  d_34 = t;
  t = term_p_8;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, e_41, d_34);
  t = lookup_table_0_1(h_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(e_41, d_34, i_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, e_41, d_34);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  l_34 = t;
  t = term_f_25;
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, l_34);
  t = s_7(m_34, l_34, t);
  t = l_34;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  t = term_w_24;
  r_34 = t;
  t = (ATerm) ATinsert(ATempty, q_34);
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, (ATerm) ATinsert(ATempty, q_34));
  t = h_7(r_34, s_34, t);
  t = q_34;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  t = term_m_25;
  u_34 = t;
  t = (ATerm) ATinsert(ATempty, t_34);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATinsert(ATempty, t_34));
  t = h_7(u_34, v_34, t);
  t = t_34;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_g_29;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm x_34 = NULL,j_35 = NULL;
  x_34 = t;
  t = term_l_24;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_24, x_34);
  t = s_7(j_35, x_34, t);
  t = x_34;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_4, y_4, z_4, t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = m_29;
      {
        ATerm t_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(u_29);
          }
        else
          {
            t = t_29;
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_5, g_5, h_5, t);
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  t = ArgOption_3_0(j_5, k_5, l_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_24;
  t = whoami_0_0(t);
  m_35 = t;
  t = term_l_18;
  o_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_29), m_35);
  p_35 = t;
  t = SSL_printnl(o_35, p_35);
  t = term_t_9;
  n_35 = t;
  t = SSL_exit(n_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_p_8;
  q_35 = t;
  t = term_z_29;
  r_35 = t;
  t = term_b_30;
  t = p_7(q_35, r_35, t);
  return(t);
}
static ATerm k_7 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_33, t_33);
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
      t = SSL_addr(s_33, t_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_35;
      t = k_81(t);
    }
  else
    {
      ATerm b_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_35 = ATgetFirst((ATermList) t);
          w_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_35;
      t = foldr_2_0(k_81, l_81, t);
      b_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_35, b_36);
      t = l_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      q_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(q_10, r_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_36 = NULL,i_10 = NULL,k_10 = NULL;
  t = times_0_0(t);
  k_10 = t;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      i_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_10;
  t = foldr_2_0(m_5, n_5, t);
  e_36 = t;
  t = SSL_TicksToSeconds(e_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL;
  e_37 = t;
  if(match_cons(t, sym__2))
    {
      h_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_37;
        if((h_37 != t))
          {
            _fail(t);
          }
        t = e_37;
        LocalPopChoice(k_30);
      }
    else
      {
        t = f_30;
        t = (ATerm) ATmakeAppl(sym__2, h_37, i_37);
        {
          ATerm l_30 = t;
          int m_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_37, i_37);
              LocalPopChoice(m_30);
            }
          else
            {
              t = l_30;
              t = SSL_gtr(h_37, i_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_37, i_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  {
    ATerm n_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 = NULL,d_38 = NULL,e_38 = NULL;
        t = term_p_8;
        d_38 = t;
        t = term_f_19;
        e_38 = t;
        t = term_g_19;
        t = p_7(d_38, e_38, t);
        y_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_37, term_t_9);
        t = geq_0_0(t);
        t = o_37;
        t = b_86(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = n_30;
        t = o_37;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,p_38 = NULL,q_38 = NULL;
  t = run_time_0_0(t);
  k_38 = t;
  t = term_f_24;
  t = whoami_0_0(t);
  l_38 = t;
  t = term_l_18;
  p_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_30), k_38), term_l_9), l_38);
  q_38 = t;
  t = SSL_printnl(p_38, q_38);
  t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_30), k_38), term_l_9), l_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_27;
  r_38 = t;
  t = SSL_exit(r_38);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm m_39 = NULL,o_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_39 = ATgetArgument(t, 0);
          {
            ATerm l_11 = NULL,o_2 = NULL;
            t = SSLgetAnnotations(o_39);
            l_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_39);
            o_2 = t;
            t = SSLsetAnnotations(o_2, l_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_38 = NULL,w_38 = NULL;
      t = term_p_8;
      v_38 = t;
      t = term_y_30;
      w_38 = t;
      t = term_z_30;
      t = p_7(v_38, w_38, t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      t = fetch_1_0(p_5, t);
    }
  t = g_90(t);
  return(t);
}
static ATerm t_7 (ATerm l_40, ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_hashtable_put(n_40, l_40, m_40);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_39);
  return(t);
}
static ATerm u_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  t = SSL_hashtable_get(p_40, o_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_38, ATerm t)
{
  ATerm h_40 = NULL;
  t = table_hashtable_0_0(t);
  h_40 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_11 = NULL;
        t = h_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            v_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_7(f_38, v_11, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm k_12 = NULL;
          t = f_38;
          t = table_create_0_0(t);
          t = h_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(f_38, k_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_hashtable_create(t_40, u_40);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,f_41 = NULL,h_41 = NULL,i_41 = NULL;
  b_41 = t;
  t = term_d_31;
  h_41 = t;
  t = term_h_31;
  i_41 = t;
  t = b_41;
  t = new_hashtable_0_2(h_41, i_41, t);
  c_41 = t;
  t = b_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(b_41, c_41, f_41, t);
  t = b_41;
  return(t);
}
static ATerm m_7 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_hashtable_remove(r_40, q_40);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_41);
  return(t);
}
static ATerm n_7 (ATerm v_40, ATerm t)
{
  ATerm k_41 = NULL;
  t = SSL_hashtable_destroy(v_40);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_table_hashtable();
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  m_41 = t;
  t = table_hashtable_0_0(t);
  n_41 = t;
  t = lookup_table_0_1(m_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(p_41, t);
  t = n_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(m_41, o_41, t);
  t = m_41;
  return(t);
}
ATerm map_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  static ATerm h_42 (ATerm t)
  {
    ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
    e_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_42;
      }
    else
      {
        ATerm q_12 = NULL,t_12 = NULL,u_12 = NULL,s_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_42 = ATgetFirst((ATermList) t);
            g_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_42);
        q_12 = t;
        t = f_42;
        t = w_73(t);
        t_12 = t;
        t = g_42;
        t = h_42(t);
        u_12 = t;
        t = (ATerm) ATinsert(CheckATermList(u_12), t_12);
        s_2 = t;
        t = SSLsetAnnotations(s_2, q_12);
      }
    return(t);
  }
  t = h_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_42 = NULL,z_42 = NULL;
        static ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_42)), not_null(z_42));
          return(t);
        }
        t = p_42;
        t = k_0(t);
        if(((w_42 != NULL) && (w_42 != t)))
          _fail(t);
        else
          w_42 = t;
        t = o_42;
        t = i_0(t);
        if(((z_42 != NULL) && (z_42 != t)))
          _fail(t);
        else
          z_42 = t;
        t = p_42;
        t = reverse_acc_2_0(i_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_24;
      t = k_0(t);
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_43), term_k_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,o_43 = NULL;
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL,q_43 = NULL;
      t = term_p_8;
      p_43 = t;
      t = term_z_29;
      q_43 = t;
      t = term_b_30;
      t = p_7(p_43, q_43, t);
      g_43 = t;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        static ATerm t_5 (ATerm t)
        {
          ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,y_2 = NULL;
          t_43 = t;
          if(match_cons(t, sym_Program_1))
            {
              s_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_43);
          r_43 = t;
          t = s_43;
          if(((g_43 != NULL) && (g_43 != t)))
            _fail(t);
          else
            g_43 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, s_43);
          y_2 = t;
          t = SSLsetAnnotations(y_2, r_43);
          return(t);
        }
        t = fetch_1_0(t_5, t);
      }
    }
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_31), not_null(g_43)), term_p_31);
        t = echo_0_0(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
      }
  }
  t = term_r_31;
  t = echo_0_0(t);
  t = term_h_28;
  h_43 = t;
  t = term_j_28;
  o_43 = t;
  t = term_x_31;
  t = p_7(h_43, o_43, t);
  t = reverse_acc_2_0(_id, u_5, t);
  t = map_1_0(v_5, t);
  {
    ATerm z_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), term_f_32), term_d_32), term_c_32);
        t = echo_0_0(t);
        LocalPopChoice(b_32);
      }
    else
      {
        t = z_31;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  static ATerm h_45 (ATerm t)
  {
    ATerm c_45 = NULL,f_45 = NULL,g_45 = NULL;
    c_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_45 = ATgetFirst((ATermList) t);
        g_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_32 = t;
      int l_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = NULL,g_13 = NULL,s_3 = NULL;
          t = SSLgetAnnotations(c_45);
          d_13 = t;
          t = f_45;
          t = g_74(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(g_45), g_13);
          s_3 = t;
          t = SSLsetAnnotations(s_3, d_13);
          LocalPopChoice(l_32);
        }
      else
        {
          t = h_32;
          {
            ATerm z_13 = NULL,v_14 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(c_45);
            z_13 = t;
            t = g_45;
            t = h_45(t);
            v_14 = t;
            t = (ATerm) ATinsert(CheckATermList(v_14), f_45);
            u_3 = t;
            t = SSLsetAnnotations(u_3, z_13);
          }
        }
    }
    return(t);
  }
  t = h_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  {
    ATerm m_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_32 = ATgetFirst((ATermList) t);
                ATerm r_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_45;
          }
        LocalPopChoice(p_32);
      }
    else
      {
        t = m_32;
        t = (ATerm) ATinsert(ATempty, l_45);
      }
  }
  m_45 = t;
  t = term_w_8;
  n_45 = t;
  t = SSL_printnl(n_45, m_45);
  t = l_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_p_8;
  r_45 = t;
  t = term_z_29;
  s_45 = t;
  t = term_b_30;
  t = p_7(r_45, s_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  t = term_s_32;
  t_45 = t;
  t = term_f_24;
  u_45 = t;
  t = term_t_32;
  t = s_7(t_45, u_45, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_u_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL;
  t = term_s_32;
  x_45 = t;
  t = term_f_24;
  y_45 = t;
  t = term_t_32;
  t = s_7(x_45, y_45, t);
  t = term_v_32;
  v_45 = t;
  t = term_f_24;
  w_45 = t;
  t = term_w_32;
  t = s_7(v_45, w_45, t);
  t = term_x_32;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = Option_3_0(z_5, e_6, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,a_4 = NULL;
  e_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_46 = ATgetFirst((ATermList) t);
      b_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_46);
  z_45 = t;
  t = a_46;
  t = p_60(t);
  c_46 = t;
  t = b_46;
  t = q_60(t);
  d_46 = t;
  t = (ATerm) ATinsert(CheckATermList(d_46), c_46);
  a_4 = t;
  t = SSLsetAnnotations(a_4, z_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_92 (ATerm), ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,o_46 = NULL,p_46 = NULL,d_4 = NULL;
  j_46 = t;
  {
    ATerm b_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_33;
        t = e_92(t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = b_33;
      }
  }
  t = j_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_46 = ATgetFirst((ATermList) t);
      m_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_46);
  k_46 = t;
  t = term_z_29;
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_29, l_46);
  t = s_7(p_46, l_46, t);
  t = m_46;
  {
    static ATerm z_46 (ATerm t)
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_46 = NULL;
              s_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_46;
              LocalPopChoice(q_33);
            }
          else
            {
              t = m_33;
              t = e_92(t);
              t = Cons_2_0(_id, z_46, t);
            }
          LocalPopChoice(j_33);
        }
      else
        {
          t = i_33;
          {
            ATerm v_46 = NULL,w_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_46 = ATgetFirst((ATermList) t);
                w_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_46), (ATerm) ATmakeAppl(sym_Undefined_1, v_46));
          }
        }
      return(t);
    }
    t = z_46(t);
  }
  o_46 = t;
  t = (ATerm) ATinsert(CheckATermList(o_46), (ATerm) ATmakeAppl(sym_Program_1, l_46));
  d_4 = t;
  t = SSLsetAnnotations(d_4, k_46);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm m_47 = NULL;
  m_47 = t;
  if(match_string(t, "--help"))
    {
      t = m_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_47;
        }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL;
  t = term_y_30;
  n_47 = t;
  t = term_f_24;
  o_47 = t;
  t = term_r_33;
  t = s_7(n_47, o_47, t);
  t = term_u_33;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_v_33;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  g_47 = t;
  t = term_h_28;
  h_47 = t;
  t = term_x_33;
  t = lookup_table_0_1(h_47, t);
  l_47 = t;
  t = term_j_28;
  i_47 = t;
  t = (ATerm) ATempty;
  j_47 = t;
  t = l_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(i_47, j_47, k_47, t);
  t = g_47;
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_92(t);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm a_34 = t;
            int b_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_6, k_6, l_6, t);
                LocalPopChoice(b_34);
              }
            else
              {
                t = a_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
  }
  {
    ATerm c_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL;
        z_47 = t;
        {
          ATerm f_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_15 = NULL;
              t = z_47;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_15 = NULL,h_16 = NULL;
                    t = term_p_8;
                    s_15 = t;
                    t = term_y_30;
                    h_16 = t;
                    t = term_z_30;
                    t = p_7(s_15, h_16, t);
                    LocalPopChoice(o_34);
                  }
                else
                  {
                    t = n_34;
                    t = fetch_1_0(m_6, t);
                  }
              }
              t = z_47;
              t = default_system_usage_0_0(t);
              t = term_q_27;
              r_15 = t;
              t = SSL_exit(r_15);
              LocalPopChoice(j_34);
            }
          else
            {
              t = f_34;
              {
                ATerm v_16 = NULL,a_17 = NULL,b_17 = NULL;
                t = term_p_8;
                a_17 = t;
                t = term_s_32;
                b_17 = t;
                t = term_p_34;
                t = p_7(a_17, b_17, t);
                t = z_47;
                t = default_system_about_0_0(t);
                t = term_q_27;
                v_16 = t;
                t = SSL_exit(v_16);
              }
            }
        }
        LocalPopChoice(e_34);
      }
    else
      {
        t = c_34;
        {
          ATerm w_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
              static ATerm r_7 (ATerm t)
              {
                ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,g_4 = NULL;
                f_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    e_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(f_48);
                d_48 = t;
                t = e_48;
                if(((e_47 != NULL) && (e_47 != t)))
                  _fail(t);
                else
                  e_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, e_48);
                g_4 = t;
                t = SSLsetAnnotations(g_4, d_48);
                return(t);
              }
              t = fetch_1_0(r_7, t);
              t = term_l_18;
              b_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_47)), term_z_34);
              c_48 = t;
              t = SSL_printnl(b_48, c_48);
              t = (ATerm) ATmakeAppl(sym__2, term_l_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_47)), term_z_34));
              t = default_system_usage_0_0(t);
              t = term_t_9;
              a_48 = t;
              t = SSL_exit(a_48);
              LocalPopChoice(y_34);
            }
          else
            {
              t = w_34;
            }
        }
      }
  }
  f_47 = t;
  t = term_h_28;
  t = table_destroy_0_0(t);
  t = f_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_90 (ATerm), ATerm j_90 (ATerm), ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  t = parse_options_1_0(i_90, t);
  k_48 = t;
  t = term_a_35;
  t = table_create_0_0(t);
  t = term_a_35;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_35, term_b_35, k_48);
  t = lookup_table_0_1(l_48, t);
  o_48 = t;
  t = term_b_35;
  m_48 = t;
  t = o_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(m_48, k_48, n_48, t);
  t = k_48;
  t = k_90(t);
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_90, t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        {
          ATerm f_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_35);
            }
          else
            {
              t = f_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm i_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(k_35);
    }
  else
    {
      t = i_35;
      {
        ATerm l_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_35);
          }
        else
          {
            t = l_35;
            {
              ATerm t_35 = t;
              int x_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_35);
                }
              else
                {
                  t = t_35;
                  {
                    ATerm y_35 = t;
                    int z_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_7, a_8, b_8, t);
                        LocalPopChoice(z_35);
                      }
                    else
                      {
                        t = y_35;
                        {
                          ATerm a_36 = t;
                          int c_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(c_36);
                            }
                          else
                            {
                              t = a_36;
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
static ATerm w_7 (ATerm t)
{
  t = xtc_temp_files_1_0(e_8, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  t = term_d_36;
  q_48 = t;
  t = term_f_24;
  r_48 = t;
  t = term_f_36;
  t = s_7(q_48, r_48, t);
  t = term_g_36;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
      t = term_p_8;
      u_48 = t;
      t = term_g_24;
      v_48 = t;
      t = term_k_36;
      t = p_7(u_48, v_48, t);
      t_48 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_48);
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      t = term_c_9;
    }
  t = parse_and_implode_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
