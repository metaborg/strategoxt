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
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_l_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_f_23;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_h_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
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
ATerm term_e_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
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
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_p_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_t_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_stdin_0);
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
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_9, term_s_9, term_u_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_b_10, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_10, term_f_10, term_h_10);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_10, term_n_10, term_t_10);
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
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_v_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_m_12, term_n_12);
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
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_z_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_u_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_z_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_l_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_y_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_m_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_p_16, term_u_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
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
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_x_17, term_y_17);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
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
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_t_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_e_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_h_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_p_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_x_24);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_c_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_o_25);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_y_23);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_t_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_g_24);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_d_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_c_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym__2, term_l_28, term_n_28);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_g_24);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_x_32, term_g_24);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_g_24);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__3, term_l_28, term_n_28, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_u_32);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_g_36, term_g_24);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_h_24);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm v_14, ATerm w_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm s_6 (ATerm v_17, ATerm w_17, ATerm t);
static ATerm t_6 (ATerm k_79 (ATerm), ATerm o_188, ATerm f_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t);
static ATerm u_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm z_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_79 (ATerm), ATerm t);
static ATerm w_6 (ATerm o_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t);
static ATerm y_6 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm j_25, ATerm i_25, ATerm t);
static ATerm z_6 (ATerm m_88 (ATerm), ATerm f_25, ATerm e_25, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm a_7 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t);
static ATerm b_7 (ATerm h_99 (ATerm), ATerm w_46, ATerm v_46, ATerm t);
static ATerm f_7 (ATerm x_51, ATerm y_51, ATerm t);
static ATerm d_12 (ATerm u_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_7 (ATerm b_18, ATerm t);
static ATerm d_7 (ATerm g_52, ATerm h_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_14 (ATerm x_12, ATerm t);
static ATerm x_14 (ATerm j_13, ATerm p_13, ATerm q_13, ATerm t);
static ATerm a_15 (ATerm b_14, ATerm c_14, ATerm d_14, ATerm t);
static ATerm e_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm w_20 (ATerm m_19, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm d_102 (ATerm), ATerm t);
static ATerm g_7 (ATerm z_94 (ATerm), ATerm l_35, ATerm j_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm h_7 (ATerm s_32, ATerm t_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm sglr_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm q_7 (ATerm i_47, ATerm j_47, ATerm t);
static ATerm k_7 (ATerm u_45, ATerm v_45, ATerm t);
ATerm end_scope_1_0 (ATerm w_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_94 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm u_50, ATerm v_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm r_7 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_33 (ATerm j_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_7 (ATerm a_51, ATerm z_50, ATerm t);
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
static ATerm l_7 (ATerm x_33, ATerm y_33, ATerm t);
ATerm foldr_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm u_7 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm t);
static ATerm v_7 (ATerm k_50, ATerm l_50, ATerm t);
ATerm lookup_table_0_1 (ATerm b_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_50, ATerm q_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_7 (ATerm m_50, ATerm n_50, ATerm t);
static ATerm o_7 (ATerm r_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = n_1;
        t = t_0(t);
        e_0 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_0;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_0;
          }
        t = (ATerm) ATmakeAppl(sym__2, o_1, e_0);
        t = j_7(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        {
          ATerm k_8 = t;
          int l_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 = NULL;
              t = n_1;
              t = t_0(t);
              a_1 = t;
              {
                ATerm m_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_1 = NULL;
                    b_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_1;
                          }
                        else
                          {
                            t = b_1;
                            if((o_1 != t))
                              {
                                _fail(t);
                              }
                            t = b_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, a_1);
              t = j_7(o_1, a_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(l_8);
            }
          else
            {
              t = k_8;
              t = n_1;
              t = t_0(t);
              if((o_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            }
        }
      }
  }
  return(t);
}
static ATerm j_7 (ATerm v_14, ATerm w_14, ATerm t)
{
  t = SSL_copy(v_14, w_14);
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
      t = term_t_8;
      x_2 = t;
      t = term_v_8;
      t = q_7(w_2, x_2, t);
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
      ATerm l_1 = NULL,m_1 = NULL;
      t = term_t_8;
      {
        ATerm y_8 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 = NULL,r_1 = NULL;
            t = term_p_8;
            p_1 = t;
            t = term_t_8;
            r_1 = t;
            t = term_v_8;
            t = q_7(p_1, r_1, t);
            LocalPopChoice(c_9);
          }
        else
          {
            t = y_8;
            t = term_w_8;
          }
      }
      l_1 = t;
      t = term_d_9;
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_9, l_1);
      t = j_7(m_1, l_1, t);
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
      t = term_d_9;
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
      t = f_7(b_3, d_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm v_17, ATerm w_17, ATerm t)
{
  ATerm e_3 = NULL;
  t = SSL_write_term_to_stream_baf(v_17, w_17);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_3);
  return(t);
}
static ATerm t_6 (ATerm k_79 (ATerm), ATerm o_188, ATerm f_18, ATerm t)
{
  ATerm f_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_188, term_h_9);
  t = e_7(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, f_18);
  t = k_79(t);
  t = fclose_0_0(t);
  t = f_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm j_3 = NULL,l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if(match_cons(i_9, sym_Stream_1))
        {
          j_3 = ATgetArgument(i_9, 0);
        }
      else
        _fail(t);
      l_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(j_3, l_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL;
  h_3 = t;
  t = xtc_new_file_0_0(t);
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
  t = t_6(b_0, g_3, h_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_3);
  t = xtc_transform_file_2_0(c_101, d_101, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL;
  n_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_4 = ATgetArgument(t, 0);
      {
        ATerm z_1 = NULL,a_2 = NULL;
        t = SSL_int_to_string(o_4);
        z_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), z_1), term_j_9);
        a_2 = t;
        t = SSL_concat_strings(a_2);
      }
    }
  else
    {
      ATerm l_2 = NULL,m_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_4 = ATgetArgument(t, 0);
          q_4 = ATgetArgument(t, 1);
          r_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(q_4);
      l_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_4), term_m_9), l_2), term_l_9), o_4);
      m_2 = t;
      t = SSL_concat_strings(m_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = n_84(t);
    if(((v_4 != NULL) && (v_4 != t)))
      _fail(t);
    else
      v_4 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
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
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), term_t_17), term_p_17), term_l_17), term_h_17), term_v_16), term_n_15), term_i_15), term_b_15), term_p_14), term_a_14), term_v_13), term_m_13), term_g_13), term_b_13), term_v_12), term_o_12), term_g_12), term_y_11), term_s_11), term_o_11), term_j_11), term_c_11), term_y_10), term_u_10), term_i_10), term_d_10), term_v_9);
        t = fetch_elem_1_0(f_0, t);
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
    ATerm a_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_18 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
            {
              ATerm e_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_18);
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_3 = NULL,m_3 = NULL,n_3 = NULL;
              t = r_5;
              {
                ATerm l_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              i_3 = t;
              t = term_m_18;
              m_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_3), term_n_18);
              n_3 = t;
              t = SSL_printnl(m_3, n_3);
              t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_n_18));
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              t = i_5;
            }
        }
      }
    else
      {
        t = a_18;
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
ATerm fork_and_wait_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm a_6 = NULL,c_6 = NULL;
  c_6 = t;
  t = fork_0_0(t);
  a_6 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = c_6;
        t = z_77(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = SSL_waitpid(a_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            if(((ATgetType(u_18) != AT_INT) || (ATgetInt((ATermInt) u_18) != 0)))
              _fail(t);
            {
              ATerm x_18 = ATgetArgument(t, 1);
            }
            {
              ATerm y_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_6;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,p_6 = NULL;
  i_6 = t;
  t = i_79(t);
  j_6 = t;
  t = term_m_18;
  k_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_6), j_6);
  p_6 = t;
  t = SSL_printnl(k_6, p_6);
  t = i_6;
  return(t);
}
static ATerm w_6 (ATerm o_50, ATerm t)
{
  t = SSL_hashtable_keys(o_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_6 = NULL,v_6 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    ATerm x_6 = NULL,m_7 = NULL;
    x_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), x_6);
    t = q_7(not_null(q_6), x_6, t);
    m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_6, m_7);
    return(t);
  }
  if(((q_6 != NULL) && (q_6 != t)))
    _fail(t);
  else
    q_6 = t;
  t = lookup_table_0_1(q_6, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(v_6, t);
  t = map_1_0(i_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm x_7 = NULL;
  x_7 = t;
  {
    ATerm c_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_8 = NULL,d_8 = NULL,e_8 = NULL;
        t = term_p_8;
        d_8 = t;
        t = term_f_19;
        e_8 = t;
        t = term_g_19;
        t = q_7(d_8, e_8, t);
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, term_j_17);
        t = geq_0_0(t);
        t = x_7;
        t = e_99(t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = c_19;
        t = x_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm j_8 = NULL;
  j_8 = t;
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
        t = q_7(r_8, s_8, t);
        q_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_8, term_m_12);
        t = geq_0_0(t);
        t = j_8;
        t = d_99(t);
        LocalPopChoice(i_19);
      }
    else
      {
        t = h_19;
        t = j_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
        t = term_p_8;
        a_9 = t;
        t = term_f_19;
        b_9 = t;
        t = term_g_19;
        t = q_7(a_9, b_9, t);
        z_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_8, term_n_10);
        t = geq_0_0(t);
        t = x_8;
        t = f_99(t);
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
static ATerm y_6 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm j_25, ATerm i_25, ATerm t)
{
  t = q_88(t);
  {
    static ATerm j_0 (ATerm t);
    static ATerm j_0 (ATerm t)
    {
      ATerm f_9 = NULL;
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_25, f_9);
      t = p_88(t);
      return(t);
    }
    t = fetch_1_0(j_0, t);
  }
  t = i_25;
  return(t);
}
static ATerm z_6 (ATerm m_88 (ATerm), ATerm f_25, ATerm e_25, ATerm t)
{
  static ATerm g_10 (ATerm t);
  static ATerm g_10 (ATerm t)
  {
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
    x_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_9 = ATgetFirst((ATermList) t);
            z_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_9;
              {
                static ATerm k_0 (ATerm t);
                static ATerm k_0 (ATerm t)
                {
                  t = e_25;
                  return(t);
                }
                t = y_6(m_88, k_0, y_9, z_9, t);
              }
              t = g_10(t);
              LocalPopChoice(n_19);
            }
          else
            {
              t = l_19;
              {
                ATerm w_3 = NULL,c_4 = NULL,o_0 = NULL;
                t = SSLgetAnnotations(x_9);
                w_3 = t;
                t = z_9;
                t = g_10(t);
                c_4 = t;
                t = (ATerm) ATinsert(CheckATermList(c_4), y_9);
                o_0 = t;
                t = SSLsetAnnotations(o_0, w_3);
              }
            }
        }
      }
    return(t);
  }
  t = f_25;
  t = g_10(t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm a_7 (ATerm m_46, ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm l_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL;
  l_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_19 = ATgetArgument(t, 0);
            ATerm s_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
        t = q_7(m_46, n_46, t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATempty;
      }
  }
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_10, o_46);
  t = z_6(n_0, p_10, o_46, t);
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_46, n_46, o_10);
  t = lookup_table_0_1(m_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(n_46, o_10, q_10, t);
  t = l_10;
  return(t);
}
static ATerm b_7 (ATerm h_99 (ATerm), ATerm w_46, ATerm v_46, ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL;
    if(match_cons(t, sym__2))
      {
        e_11 = ATgetArgument(t, 0);
        f_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, w_46, e_11, f_11);
    t = h_99(t);
    return(t);
  }
  t = v_46;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm f_7 (ATerm x_51, ATerm y_51, ATerm t)
{
  t = SSL_access(x_51, y_51);
  return(t);
}
static ATerm d_12 (ATerm u_11, ATerm t)
{
  t = SSL_fclose(u_11);
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
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_11);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
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
static ATerm c_7 (ATerm b_18, ATerm t)
{
  t = SSL_read_term_from_stream(b_18);
  return(t);
}
static ATerm d_7 (ATerm g_52, ATerm h_52, ATerm t)
{
  ATerm e_12 = NULL;
  t = SSL_fopen(g_52, h_52);
  e_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_12);
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
  ATerm k_12 = NULL;
  t = SSL_stderr_stream();
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
static ATerm s_14 (ATerm x_12, ATerm t)
{
  ATerm y_12 = NULL;
  t = SSL_explode_term(x_12);
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_19 = ATgetArgument(t, 1);
        if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
          {
            y_12 = ATgetFirst((ATermList) z_19);
            {
              ATerm a_20 = (ATerm) ATgetNext((ATermList) z_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_14 (ATerm j_13, ATerm p_13, ATerm q_13, ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,y_13 = NULL,x_0 = NULL;
  t = SSLgetAnnotations(q_13);
  t_13 = t;
  t = j_13;
  if(match_cons(t, sym_Path_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_13, p_13);
  x_0 = t;
  t = SSLsetAnnotations(x_0, t_13);
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(r_13, s_13, t);
  return(t);
}
static ATerm a_15 (ATerm b_14, ATerm c_14, ATerm d_14, ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,j_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(d_14);
  g_14 = t;
  t = SSL_is_string(b_14);
  j_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_14, c_14);
  y_0 = t;
  t = SSLsetAnnotations(y_0, g_14);
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(e_14, f_14, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL,r_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym__2))
    {
      q_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_14(m_14, t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_14(q_14, r_14, m_14, t);
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
                  t = a_15(q_14, r_14, m_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_14(m_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,l_15 = NULL;
  l_15 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_15, term_j_20);
        t = e_7(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm e_5 = NULL,f_5 = NULL;
          t = term_k_20;
          f_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, l_15);
          t = h_7(f_5, l_15, t);
          e_5 = t;
          t = SSL_perror(e_5);
          _fail(t);
        }
      }
  }
  d_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(e_15, t);
  c_15 = t;
  t = d_15;
  t = fclose_0_0(t);
  t = c_15;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_l_20;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_p_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_15 = NULL,p_15 = NULL;
      o_15 = t;
      t = (ATerm) ATinsert(ATempty, term_s_20);
      p_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_15, (ATerm) ATinsert(ATempty, term_s_20));
      t = f_7(o_15, p_15, t);
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
            ATerm x_20 = t;
            if((PushChoice() == 0))
              {
                ATerm q_15 = NULL,t_15 = NULL;
                q_15 = t;
                t = (ATerm) ATinsert(ATempty, term_g_9);
                t_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_15, (ATerm) ATinsert(ATempty, term_g_9));
                t = f_7(q_15, t_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_20;
              }
            t = debug_1_0(v_0, t);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = debug_1_0(z_0, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(e_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
  l_16 = t;
  t = term_m_18;
  m_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  n_16 = t;
  t = SSL_printnl(m_16, n_16);
  t = l_16;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__3))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      s_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(q_16, r_16, s_16, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_16 = NULL,w_16 = NULL,x_16 = NULL;
  t_16 = t;
  t = term_m_18;
  w_16 = t;
  t = (ATerm) ATinsert(ATempty, term_d_21);
  x_16 = t;
  t = SSL_printnl(w_16, x_16);
  t = t_16;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,d_17 = NULL;
  y_16 = t;
  t = term_m_18;
  z_16 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  d_17 = t;
  t = SSL_printnl(z_16, d_17);
  t = y_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL;
  u_15 = t;
  t = if_verbose5_1_0(c_1, t);
  {
    ATerm e_21 = t;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL,k_16 = NULL;
        t = term_f_21;
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_15);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Imported_1, u_15));
        t = q_7(j_16, k_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_21;
      }
  }
  w_15 = t;
  t = term_f_21;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, term_h_21, (ATerm) ATinsert(ATempty, u_15));
  t = lookup_table_0_1(d_16, t);
  i_16 = t;
  t = term_h_21;
  e_16 = t;
  t = (ATerm) ATinsert(ATempty, u_15);
  f_16 = t;
  t = i_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(e_16, f_16, g_16, t);
  t = w_15;
  t = if_verbose4_1_0(f_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(i_1, t);
  v_15 = t;
  t = term_f_21;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, v_15);
  t = b_7(k_1, c_16, v_15, t);
  t = if_verbose6_1_0(q_1, t);
  t = term_f_21;
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, (ATerm)ATmakeAppl(sym_Imported_1, u_15), (ATerm) ATempty);
  t = lookup_table_0_1(x_15, t);
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_15);
  y_15 = t;
  t = (ATerm) ATempty;
  z_15 = t;
  t = b_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(y_15, z_15, a_16, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_21, (ATerm)ATmakeAppl(sym_Imported_1, u_15), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL;
  g_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL,b_6 = NULL,e_6 = NULL,d_1 = NULL;
            t = SSLgetAnnotations(g_18);
            t_5 = t;
            t = h_18;
            t = t_92(t);
            b_6 = t;
            t = i_18;
            t = filter_1_0(t_92, t);
            e_6 = t;
            t = (ATerm) ATinsert(CheckATermList(e_6), b_6);
            d_1 = t;
            t = SSLsetAnnotations(d_1, t_5);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = i_18;
            t = filter_1_0(t_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  static ATerm q_18 (ATerm t);
  static ATerm q_18 (ATerm t)
  {
    ATerm k_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_82(t);
        t = q_18(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = k_21;
        t = g_82(t);
      }
    return(t);
  }
  t = q_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_18 = NULL,s_18 = NULL;
      t = term_p_8;
      r_18 = t;
      t = term_t_21;
      s_18 = t;
      t = term_v_21;
      t = q_7(r_18, s_18, t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_18 = NULL;
            t = term_b_22;
            t_18 = t;
            t = SSL_getenv(t_18);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
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
  t = term_d_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL;
  t = term_f_21;
  b_19 = t;
  t = term_e_22;
  d_19 = t;
  t = term_f_22;
  t = q_7(b_19, d_19, t);
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
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = if_verbose5_1_0(t_1, t);
  v_18 = t;
  {
    ATerm k_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_18 = NULL,z_18 = NULL;
        t = term_f_21;
        w_18 = t;
        t = term_h_21;
        z_18 = t;
        t = term_t_22;
        t = q_7(w_18, z_18, t);
        LocalPopChoice(q_22);
      }
    else
      {
        t = k_22;
        {
          ATerm a_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_19 = t;
          t = repeat_2_0(w_1, _id, t);
          t = a_19;
        }
      }
  }
  t = v_18;
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
  t = term_w_22;
  return(t);
}
static ATerm w_20 (ATerm m_19, ATerm t)
{
  ATerm o_19 = NULL,w_19 = NULL,x_19 = NULL;
  t = term_f_21;
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_19);
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, m_19));
  t = q_7(w_19, x_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_22 = ATgetFirst((ATermList) t);
      if(match_cons(y_22, sym__2))
        {
          ATerm e_23 = ATgetArgument(y_22, 0);
          o_19 = ATgetArgument(y_22, 1);
        }
      else
        _fail(t);
      {
        ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_f_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL,b_20 = NULL,c_20 = NULL;
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      c_20 = t;
      if(match_cons(t, sym__2))
        {
          y_19 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
          {
            ATerm k_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
                t = term_f_21;
                n_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, y_19);
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_21, (ATerm) ATmakeAppl(sym_Tool_1, y_19));
                t = q_7(n_20, o_20, t);
                {
                  static ATerm d_2 (ATerm t);
                  static ATerm d_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_2, t);
                }
                t = not_null(m_20);
                LocalPopChoice(p_23);
              }
            else
              {
                t = k_23;
                t = w_20(c_20, t);
              }
          }
        }
      else
        {
          t = w_20(c_20, t);
        }
      t = if_verbose5_1_0(e_2, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = g_23;
      {
        ATerm v_20 = NULL,o_6 = NULL,r_6 = NULL;
        v_20 = t;
        t = term_m_18;
        o_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), v_20), term_s_23);
        r_6 = t;
        t = SSL_printnl(o_6, r_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_23), v_20), term_s_23);
        t = if_verbose5_1_0(h_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  z_20 = t;
  t = d_102(t);
  t = xtc_find_0_0(t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
  {
    static ATerm j_2 (ATerm t);
    static ATerm j_2 (ATerm t)
    {
      ATerm g_21 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
      t = u_6(y_20, z_20, t);
      t = term_v_23;
      g_21 = t;
      t = SSL_exit(g_21);
      return(t);
    }
    t = fork_and_wait_1_0(j_2, t);
  }
  t = z_20;
  return(t);
}
static ATerm g_7 (ATerm z_94 (ATerm), ATerm l_35, ATerm j_35, ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,u_21 = NULL,w_21 = NULL,z_21 = NULL;
  p_21 = t;
  t = z_94(t);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_21, l_35, j_35);
  t = r_7(l_21, l_35, j_35, t);
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_22 = NULL;
        t = term_y_23;
        a_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_21, term_y_23);
        t = q_7(l_21, a_22, t);
        {
          ATerm z_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_23;
            }
        }
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
      m_21 = ATgetFirst((ATermList) t);
      o_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_21, term_y_23, (ATerm) ATinsert(CheckATermList(o_21), (ATerm) ATinsert(CheckATermList(m_21), l_35)));
  t = lookup_table_0_1(l_21, t);
  z_21 = t;
  t = term_y_23;
  q_21 = t;
  t = (ATerm) ATinsert(CheckATermList(o_21), (ATerm) ATinsert(CheckATermList(m_21), l_35));
  u_21 = t;
  t = z_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_21, u_21, w_21, t);
  t = p_21;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm c_22 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_22 = NULL,y_7 = NULL;
      i_22 = t;
      t = term_c_24;
      y_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_22, term_c_24);
      t = h_7(i_22, y_7, t);
      c_22 = t;
      t = SSL_mkstemp(c_22);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm j_22 = NULL;
        t = term_d_24;
        j_22 = t;
        t = SSL_perror(j_22);
        _fail(t);
      }
    }
  return(t);
}
static ATerm h_7 (ATerm s_32, ATerm t_32, ATerm t)
{
  t = SSL_strcat(s_32, t_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  t = P__tmpdir_0_0(t);
  o_22 = t;
  t = term_f_24;
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, term_f_24);
  t = h_7(o_22, p_22, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      m_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_g_24;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, term_g_24);
  t = g_7(k_2, m_22, n_22, t);
  t = SSL_close(l_22);
  t = m_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_22 = NULL,v_22 = NULL;
      t = r_22;
      t = xtc_new_file_0_0(t);
      u_22 = t;
      t = w_0(t);
      v_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_22, (ATerm) ATinsert(ATinsert(ATempty, u_22), term_t_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_22);
    }
  else
    {
      ATerm x_22 = NULL,z_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_22;
      t = xtc_new_file_0_0(t);
      x_22 = t;
      t = w_0(t);
      z_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_22), term_t_8), s_22), term_h_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
    }
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_23 = NULL,h_23 = NULL,i_23 = NULL;
      t = term_p_8;
      h_23 = t;
      t = term_p_24;
      i_23 = t;
      t = term_q_24;
      t = q_7(h_23, i_23, t);
      c_23 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, c_23), term_u_24);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = (ATerm) ATempty;
    }
  a_23 = t;
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_23 = NULL,m_23 = NULL;
        t = term_p_8;
        l_23 = t;
        t = term_x_24;
        m_23 = t;
        t = term_y_24;
        t = q_7(l_23, m_23, t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = (ATerm) ATempty;
      }
  }
  b_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_23), a_23), (ATerm) ATinsert(ATempty, term_z_24));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_23 = NULL,o_23 = NULL;
      t = term_p_8;
      n_23 = t;
      t = term_c_25;
      o_23 = t;
      t = term_d_25;
      t = q_7(n_23, o_23, t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      {
        ATerm q_23 = NULL,r_23 = NULL,t_23 = NULL;
        t = term_m_18;
        r_23 = t;
        t = (ATerm) ATinsert(ATempty, term_g_25);
        t_23 = t;
        t = SSL_printnl(r_23, t_23);
        t = term_s_9;
        q_23 = t;
        t = SSL_exit(q_23);
        t = (ATerm) ATinsert(ATempty, term_g_25);
      }
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm sglr_2_0 (ATerm s_76 (ATerm), ATerm t_76 (ATerm), ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_24 = NULL,j_24 = NULL;
      j_24 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_24 = ATgetArgument(t, 0);
          {
            ATerm g_8 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(j_24);
            g_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_24);
            h_1 = t;
            t = SSLsetAnnotations(h_1, g_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_24;
        }
      LocalPopChoice(l_25);
      {
        static ATerm o_2 (ATerm t);
        static ATerm o_2 (ATerm t)
        {
          ATerm k_24 = NULL,n_24 = NULL,o_24 = NULL;
          o_24 = t;
          t = s_76(t);
          k_24 = t;
          t = o_24;
          t = t_76(t);
          n_24 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_24), k_24), term_c_25);
          return(t);
        }
        t = xtc_transform_file_2_0(n_2, o_2, t);
      }
    }
  else
    {
      t = k_25;
      {
        static ATerm r_2 (ATerm t);
        static ATerm r_2 (ATerm t)
        {
          ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
          t_24 = t;
          t = s_76(t);
          r_24 = t;
          t = t_24;
          t = t_76(t);
          s_24 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(s_24), r_24), term_c_25);
          return(t);
        }
        t = xtc_transform_term_2_0(p_2, r_2, t);
      }
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_o_25;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,v_25 = NULL;
        t = term_p_8;
        u_25 = t;
        t = term_o_25;
        v_25 = t;
        t = term_r_25;
        t = q_7(u_25, v_25, t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_o_25;
  {
    ATerm s_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL,x_25 = NULL;
        t = term_p_8;
        w_25 = t;
        t = term_o_25;
        x_25 = t;
        t = term_r_25;
        t = q_7(w_25, x_25, t);
        LocalPopChoice(y_25);
      }
    else
      {
        t = s_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL,t_25 = NULL;
        t_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_25 = ATgetArgument(t, 0);
            {
              ATerm u_8 = NULL,j_1 = NULL;
              t = SSLgetAnnotations(t_25);
              u_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_25);
              j_1 = t;
              t = SSLsetAnnotations(j_1, u_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_25;
          }
        LocalPopChoice(b_26);
        t = xtc_transform_file_2_0(s_2, t_2, t);
      }
    else
      {
        t = a_26;
        t = xtc_transform_term_2_0(v_2, z_2, t);
      }
  }
  return(t);
}
static ATerm q_7 (ATerm i_47, ATerm j_47, ATerm t)
{
  ATerm z_25 = NULL;
  t = lookup_table_0_1(i_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(j_47, z_25, t);
  return(t);
}
static ATerm k_7 (ATerm u_45, ATerm v_45, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  f_26 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
        t = q_7(u_45, v_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_26 = ATgetFirst((ATermList) t);
            e_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_26);
        {
          ATerm i_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_45, v_45, e_26);
          t = lookup_table_0_1(u_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(v_45, e_26, i_26, t);
          t = (ATerm) ATmakeAppl(sym__3, u_45, v_45, e_26);
        }
      }
    else
      {
        t = c_26;
        {
          ATerm k_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
          t = lookup_table_0_1(u_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_7(v_45, k_26, t);
          t = (ATerm) ATmakeAppl(sym__2, u_45, v_45);
        }
      }
  }
  t = f_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  r_26 = t;
  t = w_94(t);
  q_26 = t;
  {
    ATerm h_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        t = term_y_23;
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_26, term_y_23);
        t = q_7(q_26, x_26, t);
        {
          ATerm l_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_26;
            }
        }
        LocalPopChoice(j_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_26, term_y_23, m_26);
  t = lookup_table_0_1(q_26, t);
  u_26 = t;
  t = term_y_23;
  s_26 = t;
  t = u_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_26, m_26, t_26, t);
  t = n_26;
  {
    static ATerm a_3 (ATerm t);
    static ATerm a_3 (ATerm t)
    {
      ATerm y_26 = NULL;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_26, y_26);
      t = k_7(q_26, y_26, t);
      return(t);
    }
    t = map_1_0(a_3, t);
  }
  t = r_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm o_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_98(t);
      t = p_98(t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = o_26;
      t = p_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  b_27 = t;
  t = v_94(t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, term_y_23);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_26 = ATgetArgument(t, 0);
            ATerm c_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_23;
        q_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_y_23);
        t = q_7(a_27, q_27, t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATempty;
      }
  }
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_27, term_y_23, (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty));
  t = lookup_table_0_1(a_27, t);
  j_27 = t;
  t = term_y_23;
  g_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty);
  h_27 = t;
  t = j_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(g_27, h_27, i_27, t);
  t = b_27;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  {
    ATerm d_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_28);
        LocalPopChoice(f_27);
      }
    else
      {
        t = d_27;
        t = h_28;
      }
  }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm u_27 = NULL;
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    ATerm v_27 = NULL;
    v_27 = t;
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_27 = NULL,b_28 = NULL;
          t = term_e_24;
          w_27 = t;
          t = term_y_23;
          b_28 = t;
          t = term_m_27;
          t = q_7(w_27, b_28, t);
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_27 != NULL) && (u_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_27 = ATgetFirst((ATermList) t);
        {
          ATerm n_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_27;
    t = map_1_0(o_3, t);
    t = v_27;
    t = end_scope_1_0(p_3, t);
    return(t);
  }
  t = begin_scope_1_0(c_3, t);
  t = restore_always_2_0(p_101, k_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_28 = NULL,m_28 = NULL,p_28 = NULL,r_28 = NULL,v_28 = NULL;
  k_28 = t;
  t = term_g_24;
  t = whoami_0_0(t);
  m_28 = t;
  t = term_m_18;
  r_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_27), m_28), term_o_27);
  v_28 = t;
  t = SSL_printnl(r_28, v_28);
  t = term_s_9;
  p_28 = t;
  t = SSL_exit(p_28);
  t = k_28;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm x_28 = NULL;
  x_28 = t;
  if(match_string(t, "-k"))
    {
      t = x_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_28;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,d_29 = NULL;
  z_28 = t;
  t = SSL_string_to_int(z_28);
  a_29 = t;
  t = term_r_27;
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_27, a_29);
  t = t_7(d_29, a_29, t);
  t = z_28;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_s_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, u_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  if(match_string(t, "-S"))
    {
      t = g_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_29;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  t = term_f_19;
  h_29 = t;
  t = term_t_27;
  i_29 = t;
  t = term_x_27;
  t = t_7(h_29, i_29, t);
  t = term_y_27;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,n_29 = NULL;
  j_29 = t;
  t = SSL_string_to_int(j_29);
  k_29 = t;
  t = term_f_19;
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, k_29);
  t = t_7(n_29, k_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_29);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_a_28;
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
  ATerm o_29 = NULL,p_29 = NULL;
  t = term_u_24;
  o_29 = t;
  t = term_g_24;
  p_29 = t;
  t = term_c_28;
  t = t_7(o_29, p_29, t);
  t = term_d_28;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, x_3, y_3, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm i_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_3, b_4, e_4, t);
            LocalPopChoice(j_28);
          }
        else
          {
            t = i_28;
            t = Option_3_0(f_4, h_4, i_4, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  t = term_p_8;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, u_50, v_50);
  t = lookup_table_0_1(r_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(u_50, v_50, s_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, u_50, v_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
      t = term_g_24;
      t = h_0(t);
      g_30 = t;
      t = term_l_28;
      h_30 = t;
      t = term_n_28;
      i_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_n_28, g_30);
      t = r_7(h_30, i_30, g_30, t);
      _fail(t);
    }
  else
    {
      ATerm n_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_29 = ATgetFirst((ATermList) t);
          a_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_29;
      t = d_0(t);
      t = term_g_24;
      t = g_0(t);
      n_30 = t;
      t = (ATerm) ATinsert(CheckATermList(a_30), n_30);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "-o"))
    {
      t = p_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_30;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  q_30 = t;
  t = term_t_8;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, q_30);
  t = t_7(r_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_30);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_4, k_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  if(match_string(t, "-i"))
    {
      t = v_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_30;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  w_30 = t;
  t = term_h_24;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_24, w_30);
  t = t_7(x_30, w_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_30);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, p_4, s_4, t);
  return(t);
}
static ATerm r_7 (ATerm p_45, ATerm q_45, ATerm o_45, ATerm t)
{
  ATerm b_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,i_31 = NULL;
  b_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_28 = ATgetArgument(t, 0);
            ATerm w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = q_7(p_45, q_45, t);
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = (ATerm) ATempty;
      }
  }
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, (ATerm) ATinsert(CheckATermList(e_31), o_45));
  t = lookup_table_0_1(p_45, t);
  i_31 = t;
  t = (ATerm) ATinsert(CheckATermList(e_31), o_45);
  f_31 = t;
  t = i_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(q_45, f_31, g_31, t);
  t = b_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_31 = NULL,w_31 = NULL,y_31 = NULL;
      t = term_g_24;
      t = r_0(t);
      v_31 = t;
      t = term_l_28;
      w_31 = t;
      t = term_n_28;
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_28, term_n_28, v_31);
      t = r_7(w_31, y_31, v_31, t);
      _fail(t);
    }
  else
    {
      ATerm d_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_31 = ATgetFirst((ATermList) t);
          u_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_31;
      t = p_0(t);
      t = t_31;
      t = q_0(t);
      d_32 = t;
      t = (ATerm) ATinsert(CheckATermList(u_31), d_32);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm e_33 (ATerm t);
  static ATerm e_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    d_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_33 = ATgetFirst((ATermList) t);
        c_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_9 = NULL,a_10 = NULL,v_1 = NULL;
          t = SSLgetAnnotations(d_33);
          t_9 = t;
          t = c_33;
          t = e_33(t);
          a_10 = t;
          t = (ATerm) ATinsert(CheckATermList(a_10), b_33);
          v_1 = t;
          t = SSLsetAnnotations(v_1, t_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_33;
        t = s_84(t);
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_32;
    }
  else
    {
      static ATerm t_4 (ATerm t);
      static ATerm t_4 (ATerm t)
      {
        t = not_null(j_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_32 = ATgetFirst((ATermList) t);
          if(((j_32 != NULL) && (j_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      t = at_end_1_0(t_4, t);
    }
  return(t);
}
static ATerm t_33 (ATerm j_33, ATerm t)
{
  ATerm k_33 = NULL;
  t = SSL_explode_term(j_33);
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_4 (ATerm t);
            static ATerm u_4 (ATerm t)
            {
              t = n_33;
              return(t);
            }
            t = m_33;
            t = at_end_1_0(u_4, t);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            t = t_33(o_33, t);
          }
      }
    }
  else
    {
      t = t_33(o_33, t);
    }
  return(t);
}
static ATerm i_7 (ATerm a_51, ATerm z_50, ATerm t)
{
  ATerm u_33 = NULL,d_34 = NULL,g_34 = NULL,h_34 = NULL;
  t = a_51;
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_34 = NULL;
        t = term_p_8;
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_8, a_51);
        t = q_7(j_34, a_51, t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
  }
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_50, d_34);
  t = conc_0_0(t);
  u_33 = t;
  t = term_p_8;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, a_51, u_33);
  t = lookup_table_0_1(g_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(a_51, u_33, h_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, a_51, u_33);
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
  ATerm k_34 = NULL,l_34 = NULL;
  k_34 = t;
  t = term_c_25;
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_25, k_34);
  t = t_7(l_34, k_34, t);
  t = k_34;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_l_29;
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
  ATerm m_34 = NULL,q_34 = NULL,r_34 = NULL;
  m_34 = t;
  t = term_x_24;
  q_34 = t;
  t = (ATerm) ATinsert(ATempty, m_34);
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, (ATerm) ATinsert(ATempty, m_34));
  t = i_7(q_34, r_34, t);
  t = m_34;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_m_29;
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
  ATerm s_34 = NULL,t_34 = NULL,v_34 = NULL;
  s_34 = t;
  t = term_o_25;
  t_34 = t;
  t = (ATerm) ATinsert(ATempty, s_34);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, (ATerm) ATinsert(ATempty, s_34));
  t = i_7(t_34, v_34, t);
  t = s_34;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_q_29;
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
  ATerm w_34 = NULL,x_34 = NULL;
  w_34 = t;
  t = term_p_24;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, w_34);
  t = t_7(x_34, w_34, t);
  t = w_34;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(x_4, y_4, z_4, t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm y_29 = t;
              int b_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_5, g_5, h_5, t);
                  LocalPopChoice(b_30);
                }
              else
                {
                  t = y_29;
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
  ATerm y_34 = NULL,b_35 = NULL,c_35 = NULL,o_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_24;
  t = whoami_0_0(t);
  y_34 = t;
  t = term_m_18;
  c_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_30), y_34);
  o_35 = t;
  t = SSL_printnl(c_35, o_35);
  t = term_s_9;
  b_35 = t;
  t = SSL_exit(b_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_p_8;
  p_35 = t;
  t = term_d_30;
  q_35 = t;
  t = term_e_30;
  t = q_7(p_35, q_35, t);
  return(t);
}
static ATerm l_7 (ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm f_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_33, y_33);
      LocalPopChoice(j_30);
    }
  else
    {
      t = f_30;
      t = SSL_addr(x_33, y_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,u_35 = NULL,v_35 = NULL;
  s_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_35;
      t = p_91(t);
    }
  else
    {
      ATerm y_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_35 = ATgetFirst((ATermList) t);
          v_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_35;
      t = foldr_2_0(p_91, q_91, t);
      y_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_35, y_35);
      t = q_91(t);
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
  t = term_t_27;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(r_10, s_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_36 = NULL,j_10 = NULL,k_10 = NULL;
  t = times_0_0(t);
  k_10 = t;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  t = foldr_2_0(m_5, n_5, t);
  d_36 = t;
  t = SSL_TicksToSeconds(d_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_36 = NULL,v_36 = NULL,w_36 = NULL;
  s_36 = t;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_36;
        if((v_36 != t))
          {
            _fail(t);
          }
        t = s_36;
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
        {
          ATerm o_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_36, w_36);
              LocalPopChoice(s_30);
            }
          else
            {
              t = o_30;
              t = SSL_gtr(v_36, w_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
        t = term_p_8;
        i_37 = t;
        t = term_f_19;
        j_37 = t;
        t = term_g_19;
        t = q_7(i_37, j_37, t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_37, term_s_9);
        t = geq_0_0(t);
        t = c_37;
        t = a_99(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = c_37;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,p_37 = NULL,q_37 = NULL;
  t = run_time_0_0(t);
  l_37 = t;
  t = term_g_24;
  t = whoami_0_0(t);
  m_37 = t;
  t = term_m_18;
  p_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), l_37), term_l_9), m_37);
  q_37 = t;
  t = SSL_printnl(p_37, q_37);
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_30), l_37), term_l_9), m_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_27;
  v_37 = t;
  t = SSL_exit(v_37);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm p_38 = NULL,s_38 = NULL;
  s_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_38 = ATgetArgument(t, 0);
          {
            ATerm l_11 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(s_38);
            l_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_38);
            f_2 = t;
            t = SSLsetAnnotations(f_2, l_11);
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
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_38 = NULL,f_38 = NULL;
      t = term_p_8;
      c_38 = t;
      t = term_c_31;
      f_38 = t;
      t = term_d_31;
      t = q_7(c_38, f_38, t);
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = fetch_1_0(p_5, t);
    }
  t = f_103(t);
  return(t);
}
static ATerm u_7 (ATerm h_50, ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm u_38 = NULL;
  t = SSL_hashtable_put(j_50, h_50, i_50);
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_38);
  return(t);
}
static ATerm v_7 (ATerm k_50, ATerm l_50, ATerm t)
{
  t = SSL_hashtable_get(l_50, k_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_47, ATerm t)
{
  ATerm j_39 = NULL;
  t = table_hashtable_0_0(t);
  j_39 = t;
  {
    ATerm h_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        t = j_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_7(b_47, w_11, t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = h_31;
        {
          ATerm l_12 = NULL;
          t = b_47;
          t = table_create_0_0(t);
          t = j_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(b_47, l_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm m_39 = NULL;
  t = SSL_hashtable_create(p_50, q_50);
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL;
  n_39 = t;
  t = term_k_31;
  r_39 = t;
  t = term_l_31;
  s_39 = t;
  t = n_39;
  t = new_hashtable_0_2(r_39, s_39, t);
  o_39 = t;
  t = n_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(n_39, o_39, p_39, t);
  t = n_39;
  return(t);
}
static ATerm n_7 (ATerm m_50, ATerm n_50, ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_hashtable_remove(n_50, m_50);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_39);
  return(t);
}
static ATerm o_7 (ATerm r_50, ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_hashtable_destroy(r_50);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_39 = NULL;
  t = SSL_table_hashtable();
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_39);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  t = table_hashtable_0_0(t);
  x_39 = t;
  t = lookup_table_0_1(w_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(z_39, t);
  t = x_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(w_39, y_39, t);
  t = w_39;
  return(t);
}
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  static ATerm r_40 (ATerm t);
  static ATerm r_40 (ATerm t)
  {
    ATerm l_40 = NULL,p_40 = NULL,q_40 = NULL;
    l_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_40;
      }
    else
      {
        ATerm q_12 = NULL,t_12 = NULL,u_12 = NULL,q_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_40 = ATgetFirst((ATermList) t);
            q_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_40);
        q_12 = t;
        t = p_40;
        t = b_84(t);
        t_12 = t;
        t = q_40;
        t = r_40(t);
        u_12 = t;
        t = (ATerm) ATinsert(CheckATermList(u_12), t_12);
        q_2 = t;
        t = SSLsetAnnotations(q_2, q_12);
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_41 = NULL,c_41 = NULL;
        static ATerm q_5 (ATerm t);
        static ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_41)), not_null(c_41));
          return(t);
        }
        t = x_40;
        t = m_0(t);
        if(((b_41 != NULL) && (b_41 != t)))
          _fail(t);
        else
          b_41 = t;
        t = w_40;
        t = l_0(t);
        if(((c_41 != NULL) && (c_41 != t)))
          _fail(t);
        else
          c_41 = t;
        t = x_40;
        t = reverse_acc_2_0(l_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_24;
      t = m_0(t);
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
  ATerm r_41 = NULL;
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_41), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_41 = NULL,k_41 = NULL;
      t = term_p_8;
      j_41 = t;
      t = term_d_30;
      k_41 = t;
      t = term_e_30;
      t = q_7(j_41, k_41, t);
      g_41 = t;
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
      {
        static ATerm s_5 (ATerm t);
        static ATerm s_5 (ATerm t)
        {
          ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,y_2 = NULL;
          n_41 = t;
          if(match_cons(t, sym_Program_1))
            {
              m_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_41);
          l_41 = t;
          t = m_41;
          if(((g_41 != NULL) && (g_41 != t)))
            _fail(t);
          else
            g_41 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, m_41);
          y_2 = t;
          t = SSLsetAnnotations(y_2, l_41);
          return(t);
        }
        t = fetch_1_0(s_5, t);
      }
    }
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_31), not_null(g_41)), term_x_31);
        t = echo_0_0(t);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
      }
  }
  t = term_a_32;
  t = echo_0_0(t);
  t = term_l_28;
  h_41 = t;
  t = term_n_28;
  i_41 = t;
  t = term_b_32;
  t = q_7(h_41, i_41, t);
  t = reverse_acc_2_0(_id, u_5, t);
  t = map_1_0(v_5, t);
  {
    ATerm c_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_32), term_k_32), term_g_32), term_f_32);
        t = echo_0_0(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = c_32;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  static ATerm q_42 (ATerm t);
  static ATerm q_42 (ATerm t)
  {
    ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL;
    n_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_42 = ATgetFirst((ATermList) t);
        p_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_13 = NULL,k_13 = NULL,s_3 = NULL;
          t = SSLgetAnnotations(n_42);
          e_13 = t;
          t = o_42;
          t = l_84(t);
          k_13 = t;
          t = (ATerm) ATinsert(CheckATermList(p_42), k_13);
          s_3 = t;
          t = SSLsetAnnotations(s_3, e_13);
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          {
            ATerm k_14 = NULL,u_14 = NULL,t_3 = NULL;
            t = SSLgetAnnotations(n_42);
            k_14 = t;
            t = p_42;
            t = q_42(t);
            u_14 = t;
            t = (ATerm) ATinsert(CheckATermList(u_14), o_42);
            t_3 = t;
            t = SSLsetAnnotations(t_3, k_14);
          }
        }
    }
    return(t);
  }
  t = q_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
  u_42 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_42;
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
            t = u_42;
          }
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        t = (ATerm) ATinsert(ATempty, u_42);
      }
  }
  v_42 = t;
  t = term_w_8;
  w_42 = t;
  t = SSL_printnl(w_42, v_42);
  t = u_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_p_8;
  a_43 = t;
  t = term_d_30;
  b_43 = t;
  t = term_e_30;
  t = q_7(a_43, b_43, t);
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
  ATerm c_43 = NULL,d_43 = NULL;
  t = term_u_32;
  c_43 = t;
  t = term_g_24;
  d_43 = t;
  t = term_v_32;
  t = t_7(c_43, d_43, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  t = term_u_32;
  g_43 = t;
  t = term_g_24;
  h_43 = t;
  t = term_v_32;
  t = t_7(g_43, h_43, t);
  t = term_x_32;
  e_43 = t;
  t = term_g_24;
  f_43 = t;
  t = term_y_32;
  t = t_7(e_43, f_43, t);
  t = term_z_32;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
      t = Option_3_0(z_5, d_6, f_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,a_4 = NULL;
  n_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_43 = ATgetFirst((ATermList) t);
      k_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_43);
  i_43 = t;
  t = j_43;
  t = o_70(t);
  l_43 = t;
  t = k_43;
  t = p_70(t);
  m_43 = t;
  t = (ATerm) ATinsert(CheckATermList(m_43), l_43);
  a_4 = t;
  t = SSLsetAnnotations(a_4, i_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,x_43 = NULL,y_43 = NULL,d_4 = NULL;
  s_43 = t;
  {
    ATerm h_33 = t;
    int i_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_33;
        t = d_105(t);
        LocalPopChoice(i_33);
      }
    else
      {
        t = h_33;
      }
  }
  t = s_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_43 = ATgetFirst((ATermList) t);
      v_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_43);
  t_43 = t;
  t = term_d_30;
  y_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_30, u_43);
  t = t_7(y_43, u_43, t);
  t = v_43;
  {
    static ATerm i_44 (ATerm t);
    static ATerm i_44 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_44 = NULL;
              b_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_44;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              t = d_105(t);
              t = Cons_2_0(_id, i_44, t);
            }
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm e_44 = NULL,f_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_44 = ATgetFirst((ATermList) t);
                f_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_44), (ATerm) ATmakeAppl(sym_Undefined_1, e_44));
          }
        }
      return(t);
    }
    t = i_44(t);
  }
  x_43 = t;
  t = (ATerm) ATinsert(CheckATermList(x_43), (ATerm) ATmakeAppl(sym_Program_1, u_43));
  d_4 = t;
  t = SSLsetAnnotations(d_4, t_43);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  if(match_string(t, "--help"))
    {
      t = v_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_44;
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  t = term_c_31;
  w_44 = t;
  t = term_g_24;
  x_44 = t;
  t = term_v_33;
  t = t_7(w_44, x_44, t);
  t = term_w_33;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  p_44 = t;
  t = term_l_28;
  q_44 = t;
  t = term_a_34;
  t = lookup_table_0_1(q_44, t);
  u_44 = t;
  t = term_n_28;
  r_44 = t;
  t = (ATerm) ATempty;
  s_44 = t;
  t = u_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_44, s_44, t_44, t);
  t = p_44;
  {
    static ATerm g_6 (ATerm t);
    static ATerm g_6 (ATerm t)
    {
      ATerm b_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_105(t);
          LocalPopChoice(c_34);
        }
      else
        {
          t = b_34;
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_6, l_6, m_6, t);
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_6, t);
  }
  {
    ATerm i_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL;
        j_45 = t;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_15 = NULL;
              t = j_45;
              {
                ATerm u_34 = t;
                int z_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_16 = NULL,o_16 = NULL;
                    t = term_p_8;
                    h_16 = t;
                    t = term_c_31;
                    o_16 = t;
                    t = term_d_31;
                    t = q_7(h_16, o_16, t);
                    LocalPopChoice(z_34);
                  }
                else
                  {
                    t = u_34;
                    t = fetch_1_0(n_6, t);
                  }
              }
              t = j_45;
              t = default_system_usage_0_0(t);
              t = term_t_27;
              s_15 = t;
              t = SSL_exit(s_15);
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
                t = term_p_8;
                b_17 = t;
                t = term_u_32;
                c_17 = t;
                t = term_a_35;
                t = q_7(b_17, c_17, t);
                t = j_45;
                t = default_system_about_0_0(t);
                t = term_t_27;
                a_17 = t;
                t = SSL_exit(a_17);
              }
            }
        }
        LocalPopChoice(n_34);
      }
    else
      {
        t = i_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_45 = NULL,s_45 = NULL,w_45 = NULL;
              static ATerm p_7 (ATerm t);
              static ATerm p_7 (ATerm t)
              {
                ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,g_4 = NULL;
                z_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_45);
                x_45 = t;
                t = y_45;
                if(((n_44 != NULL) && (n_44 != t)))
                  _fail(t);
                else
                  n_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_45);
                g_4 = t;
                t = SSLsetAnnotations(g_4, x_45);
                return(t);
              }
              t = fetch_1_0(p_7, t);
              t = term_m_18;
              s_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_44)), term_f_35);
              w_45 = t;
              t = SSL_printnl(s_45, w_45);
              t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_44)), term_f_35));
              t = default_system_usage_0_0(t);
              t = term_s_9;
              r_45 = t;
              t = SSL_exit(r_45);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
            }
        }
      }
  }
  o_44 = t;
  t = term_l_28;
  t = table_destroy_0_0(t);
  t = o_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  t = parse_options_1_0(h_103, t);
  e_46 = t;
  t = term_g_35;
  t = table_create_0_0(t);
  t = term_g_35;
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_35, term_h_35, e_46);
  t = lookup_table_0_1(f_46, t);
  i_46 = t;
  t = term_h_35;
  g_46 = t;
  t = i_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(g_46, e_46, h_46, t);
  t = e_46;
  t = j_103(t);
  {
    ATerm i_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_103, t);
        LocalPopChoice(k_35);
      }
    else
      {
        t = i_35;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm r_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(t_35);
    }
  else
    {
      t = r_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm z_35 = t;
              int a_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(a_36);
                }
              else
                {
                  t = z_35;
                  {
                    ATerm b_36 = t;
                    int c_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_7, b_8, c_8, t);
                        LocalPopChoice(c_36);
                      }
                    else
                      {
                        t = b_36;
                        {
                          ATerm e_36 = t;
                          int f_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_36);
                            }
                          else
                            {
                              t = e_36;
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
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL;
  t = term_g_36;
  k_46 = t;
  t = term_g_24;
  l_46 = t;
  t = term_h_36;
  t = t_7(k_46, l_46, t);
  t = term_i_36;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_j_36;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
      t = term_p_8;
      t_46 = t;
      t = term_h_24;
      u_46 = t;
      t = term_m_36;
      t = q_7(t_46, u_46, t);
      s_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_46);
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      t = term_d_9;
    }
  t = parse_and_implode_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_7, default_usage_0_0, _id, w_7, t);
  return(t);
}
