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
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_e_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_30;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_i_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_h_28;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_w_26;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_v_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_y_20;
ATerm term_r_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_i_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_a_8;
ATerm term_x_7;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_o_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_r_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_8, term_q_8, term_r_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_8, term_a_9, term_b_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_9, term_g_9, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_9, term_k_9, term_l_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_9, term_s_9, term_t_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_9, term_x_9, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_10, term_f_10, term_g_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_10, term_k_10, term_l_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_c_11, term_d_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_o_11, term_q_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_v_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_l_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_x_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_c_13, term_d_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_s_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_a_14, term_e_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_x_15, term_y_15);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_a_18);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_b_22);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_h_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_e_21, term_f_21);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym__2, term_r_17, term_f_17);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_w_24, term_v_17);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_c_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_c_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_m_25);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_h_28, term_v_17);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_v_17);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_v_17);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__3, term_k_25, term_m_25, (ATerm) ATempty);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_h_28);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym__2, term_x_31, term_v_17);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_o_7, term_w_17);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm n_6 (ATerm a_76 (ATerm), ATerm w_177, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t);
static ATerm o_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_81 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm p_74 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_97 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm c_10 (ATerm n_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_6 (ATerm m_91 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_75 (ATerm), ATerm t);
static ATerm c_6 (ATerm n_47, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_94 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_94 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm v_94 (ATerm), ATerm t);
static ATerm e_6 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm f_6 (ATerm b_85 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm a_1 (ATerm t);
static ATerm g_6 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t);
static ATerm h_6 (ATerm x_94 (ATerm), ATerm i_44, ATerm h_44, ATerm t);
static ATerm j_6 (ATerm w_48, ATerm x_48, ATerm t);
static ATerm m_17 (ATerm y_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_6 (ATerm z_17, ATerm t);
static ATerm r_6 (ATerm q_32, ATerm r_32, ATerm t);
static ATerm l_6 (ATerm f_49, ATerm g_49, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_19 (ATerm f_18, ATerm t);
static ATerm u_19 (ATerm n_18, ATerm o_18, ATerm r_18, ATerm t);
static ATerm v_19 (ATerm b_19, ATerm c_19, ATerm d_19, ATerm t);
static ATerm m_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_89 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm b_25 (ATerm t_23, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_6 (ATerm u_44, ATerm v_44, ATerm t);
static ATerm t_6 (ATerm g_43, ATerm h_43, ATerm t);
ATerm end_scope_1_0 (ATerm j_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_91 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm f_97 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_7 (ATerm t_47, ATerm u_47, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_7 (ATerm b_43, ATerm c_43, ATerm a_43, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_6 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_94 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm need_help_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm d_7 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm t);
static ATerm e_7 (ATerm j_47, ATerm k_47, ATerm t);
ATerm lookup_table_0_1 (ATerm n_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_47, ATerm p_47, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_6 (ATerm l_47, ATerm m_47, ATerm t);
static ATerm x_6 (ATerm q_47, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_80 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_81 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_100 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm parse_options_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm astratego2text_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,a_2 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = u_1;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, a_2, e_0);
        t = s_6(a_2, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
        LocalPopChoice(y_6);
      }
    else
      {
        t = v_6;
        {
          ATerm b_7 = t;
          int f_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_0 = NULL;
              t = u_1;
              t = r_0(t);
              u_0 = t;
              {
                ATerm i_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((a_2 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_2, u_0);
              t = s_6(a_2, u_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
              LocalPopChoice(f_7);
            }
          else
            {
              t = b_7;
              t = u_1;
              t = r_0(t);
              if((a_2 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_2);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 = NULL,v_2 = NULL;
      t = term_o_7;
      u_2 = t;
      t = term_r_7;
      v_2 = t;
      t = term_u_7;
      t = z_6(u_2, v_2, t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      t = term_x_7;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_1 = NULL,j_1 = NULL;
      t = term_r_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 = NULL,l_1 = NULL;
            t = term_o_7;
            k_1 = t;
            t = term_r_7;
            l_1 = t;
            t = term_u_7;
            t = z_6(k_1, l_1, t);
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = term_x_7;
          }
      }
      d_1 = t;
      t = term_a_8;
      j_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, d_1);
      t = s_6(j_1, d_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_2 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_c_8);
      b_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_2, (ATerm) ATinsert(ATempty, term_c_8));
      t = j_6(z_2, b_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm c_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_3);
  return(t);
}
static ATerm n_6 (ATerm a_76 (ATerm), ATerm w_177, ATerm d_18, ATerm t)
{
  ATerm f_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_177, term_d_8);
  t = m_6(t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, d_18);
  t = a_76(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_8 = ATgetArgument(t, 0);
      if(match_cons(e_8, sym_Stream_1))
        {
          l_3 = ATgetArgument(e_8, 0);
        }
      else
        _fail(t);
      n_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(l_3, n_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,k_3 = NULL;
  k_3 = t;
  t = xtc_new_file_0_0(t);
  h_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, k_3);
  t = n_6(b_0, h_3, k_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_3);
  t = xtc_transform_file_2_0(s_96, t_96, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL;
  m_4 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_4 = ATgetArgument(t, 0);
      {
        ATerm q_1 = NULL,r_1 = NULL;
        t = SSL_int_to_string(r_4);
        q_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_8), q_1), term_f_8);
        r_1 = t;
        t = SSL_concat_strings(r_1);
      }
    }
  else
    {
      ATerm j_2 = NULL,k_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_4 = ATgetArgument(t, 0);
          s_4 = ATgetArgument(t, 1);
          t_4 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(s_4);
      j_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_4), term_k_8), j_2), term_h_8), r_4);
      k_2 = t;
      t = SSL_concat_strings(k_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm w_4 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = c_81(t);
    if(((w_4 != NULL) && (w_4 != t)))
      _fail(t);
    else
      w_4 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(w_4);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm a_5 = NULL;
  a_5 = t;
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_8 = ATgetArgument(t, 0);
              if((a_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_8 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_16), term_c_16), term_u_15), term_q_15), term_k_15), term_e_15), term_z_14), term_s_14), term_o_14), term_i_14), term_w_13), term_l_13), term_e_13), term_z_12), term_m_12), term_h_12), term_z_11), term_r_11), term_e_11), term_v_10), term_q_10), term_i_10), term_a_10), term_v_9), term_m_9), term_i_9), term_e_9), term_s_8);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, a_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm f_5 = NULL,r_5 = NULL;
  f_5 = t;
  {
    ATerm h_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_16 = ATgetArgument(t, 0);
            r_5 = ATgetArgument(t, 1);
            {
              ATerm m_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(j_16);
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,i_3 = NULL,j_3 = NULL;
              t = r_5;
              {
                ATerm q_16 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_16;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_3 = t;
              t = term_r_16;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_s_16);
              j_3 = t;
              t = SSL_printnl(i_3, j_3);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_s_16));
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = f_5;
            }
        }
      }
    else
      {
        t = h_16;
        t = f_5;
      }
  }
  t = f_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL;
  h_7 = t;
  t = fork_0_0(t);
  g_7 = t;
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_7;
        t = p_74(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = SSL_waitpid(g_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_16 = ATgetArgument(t, 0);
            if(((ATgetType(v_16) != AT_INT) || (ATgetInt((ATermInt) v_16) != 0)))
              _fail(t);
            {
              ATerm w_16 = ATgetArgument(t, 1);
            }
            {
              ATerm x_16 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = t_97(t);
  t = xtc_find_0_0(t);
  j_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_7, m_7);
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm n_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_7, m_7);
      t = o_6(j_7, m_7, t);
      t = term_z_16;
      n_7 = t;
      t = SSL_exit(n_7);
      return(t);
    }
    t = fork_and_wait_1_0(h_0, t);
  }
  t = m_7;
  return(t);
}
ATerm at_end_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  static ATerm z_8 (ATerm t)
  {
    ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL;
    y_8 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_8 = ATgetFirst((ATermList) t);
        x_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_3 = NULL,c_4 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(y_8);
          r_3 = t;
          t = x_8;
          t = z_8(t);
          c_4 = t;
          t = (ATerm) ATinsert(CheckATermList(c_4), v_8);
          x_0 = t;
          t = SSLsetAnnotations(x_0, r_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_8;
        t = h_81(t);
      }
    return(t);
  }
  t = z_8(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_7 = NULL,s_7 = NULL,t_7 = NULL;
  q_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_7;
    }
  else
    {
      static ATerm j_0 (ATerm t)
      {
        t = not_null(t_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_7 = ATgetFirst((ATermList) t);
          if(((t_7 != NULL) && (t_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_7;
      t = at_end_1_0(j_0, t);
    }
  return(t);
}
static ATerm c_10 (ATerm n_9, ATerm t)
{
  ATerm o_9 = NULL;
  t = SSL_explode_term(n_9);
  if(match_cons(t, sym__2))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,u_9 = NULL;
  u_9 = t;
  if(match_cons(t, sym__2))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_0 (ATerm t)
            {
              t = r_9;
              return(t);
            }
            t = q_9;
            t = at_end_1_0(m_0, t);
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = c_10(u_9, t);
          }
      }
    }
  else
    {
      t = c_10(u_9, t);
    }
  return(t);
}
static ATerm q_6 (ATerm m_91 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
  n_10 = t;
  t = m_91(t);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_10, j_35, h_35);
  t = a_7(d_10, j_35, h_35, t);
  {
    ATerm d_17 = t;
    int e_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_10 = NULL;
        t = term_f_17;
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_f_17);
        t = z_6(d_10, z_10, t);
        LocalPopChoice(e_17);
      }
    else
      {
        t = d_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_10 = ATgetFirst((ATermList) t);
      m_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_10, term_f_17, (ATerm) ATinsert(CheckATermList(m_10), (ATerm) ATinsert(CheckATermList(e_10), j_35)));
  t = lookup_table_0_1(d_10, t);
  y_10 = t;
  t = term_f_17;
  o_10 = t;
  t = (ATerm) ATinsert(CheckATermList(m_10), (ATerm) ATinsert(CheckATermList(e_10), j_35));
  w_10 = t;
  t = y_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(o_10, w_10, x_10, t);
  t = n_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_11 = NULL;
  ATerm g_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_11 = NULL,q_4 = NULL;
      f_11 = t;
      t = term_i_17;
      q_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_11, term_i_17);
      t = r_6(f_11, q_4, t);
      b_11 = t;
      t = SSL_mkstemp(b_11);
      LocalPopChoice(h_17);
    }
  else
    {
      t = g_17;
      {
        ATerm h_11 = NULL;
        t = term_l_17;
        h_11 = t;
        t = SSL_perror(h_11);
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
static ATerm q_0 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,p_11 = NULL;
  t = P__tmpdir_0_0(t);
  m_11 = t;
  t = term_s_17;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_11, term_s_17);
  t = r_6(m_11, p_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      j_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_17;
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_11, term_v_17);
  t = q_6(q_0, k_11, l_11, t);
  t = SSL_close(j_11);
  t = k_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL;
  s_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_11 = NULL,y_11 = NULL;
      t = s_11;
      t = xtc_new_file_0_0(t);
      w_11 = t;
      t = v_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, (ATerm) ATinsert(ATinsert(ATempty, w_11), term_r_7));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
    }
  else
    {
      ATerm e_12 = NULL,f_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_11;
      t = xtc_new_file_0_0(t);
      e_12 = t;
      t = v_0(t);
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_12), term_r_7), u_11), term_w_17));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_12);
    }
  return(t);
}
ATerm debug_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  k_12 = t;
  t = y_75(t);
  n_12 = t;
  t = term_r_16;
  o_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_12), n_12);
  p_12 = t;
  t = SSL_printnl(o_12, p_12);
  t = k_12;
  return(t);
}
static ATerm c_6 (ATerm n_47, ATerm t)
{
  t = SSL_hashtable_keys(n_47);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  static ATerm s_0 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL;
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), u_12);
    t = z_6(not_null(q_12), u_12, t);
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_12, v_12);
    return(t);
  }
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = lookup_table_0_1(q_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(r_12, t);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
        t = term_o_7;
        g_13 = t;
        t = term_a_18;
        h_13 = t;
        t = term_b_18;
        t = z_6(g_13, h_13, t);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, term_n_15);
        t = geq_0_0(t);
        t = y_12;
        t = u_94(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = y_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  {
    ATerm c_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,q_13 = NULL,r_13 = NULL;
        t = term_o_7;
        q_13 = t;
        t = term_a_18;
        r_13 = t;
        t = term_b_18;
        t = z_6(q_13, r_13, t);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, term_v_11);
        t = geq_0_0(t);
        t = m_13;
        t = t_94(t);
        LocalPopChoice(e_18);
      }
    else
      {
        t = c_18;
        t = m_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm z_13 = NULL;
  z_13 = t;
  {
    ATerm g_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
        t = term_o_7;
        c_14 = t;
        t = term_a_18;
        d_14 = t;
        t = term_b_18;
        t = z_6(c_14, d_14, t);
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_14, term_k_9);
        t = geq_0_0(t);
        t = z_13;
        t = v_94(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = g_18;
        t = z_13;
      }
  }
  return(t);
}
static ATerm e_6 (ATerm e_85 (ATerm), ATerm f_85 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = f_85(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm f_14 = NULL;
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, f_14);
      t = e_85(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm f_6 (ATerm b_85 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm p_15 (ATerm t)
  {
    ATerm a_15 = NULL,g_15 = NULL,l_15 = NULL;
    a_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            l_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_15;
              {
                static ATerm z_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = e_6(b_85, z_0, g_15, l_15, t);
              }
              t = p_15(t);
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              {
                ATerm c_5 = NULL,g_5 = NULL,c_1 = NULL;
                t = SSLgetAnnotations(a_15);
                c_5 = t;
                t = l_15;
                t = p_15(t);
                g_5 = t;
                t = (ATerm) ATinsert(CheckATermList(g_5), g_15);
                c_1 = t;
                t = SSLsetAnnotations(c_1, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = p_15(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      i_16 = ATgetArgument(t, 0);
      if((i_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm y_43, ATerm z_43, ATerm a_44, ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            ATerm q_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
        t = z_6(y_43, z_43, t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
  }
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, a_44);
  t = f_6(a_1, a_16, a_44, t);
  z_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_43, z_43, z_15);
  t = lookup_table_0_1(y_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(z_43, z_15, b_16, t);
  t = w_15;
  return(t);
}
static ATerm h_6 (ATerm x_94 (ATerm), ATerm i_44, ATerm h_44, ATerm t)
{
  static ATerm b_1 (ATerm t)
  {
    ATerm k_16 = NULL,n_16 = NULL;
    if(match_cons(t, sym__2))
      {
        k_16 = ATgetArgument(t, 0);
        n_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_44, k_16, n_16);
    t = x_94(t);
    return(t);
  }
  t = h_44;
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm j_6 (ATerm w_48, ATerm x_48, ATerm t)
{
  t = SSL_access(w_48, x_48);
  return(t);
}
static ATerm m_17 (ATerm y_16, ATerm t)
{
  t = SSL_fclose(y_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_17 = ATgetArgument(t, 0);
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_17);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            t = m_17(k_17, t);
          }
      }
    }
  else
    {
      t = m_17(k_17, t);
    }
  return(t);
}
static ATerm i_6 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm r_6 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
static ATerm l_6 (ATerm f_49, ATerm g_49, ATerm t)
{
  ATerm n_17 = NULL;
  t = SSL_fopen(f_49, g_49);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_17 = NULL;
  t = SSL_stdin_stream();
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_stdout_stream();
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  t = SSL_stderr_stream();
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_17);
  return(t);
}
static ATerm t_19 (ATerm f_18, ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            h_18 = ATgetFirst((ATermList) y_18);
            {
              ATerm a_19 = (ATerm) ATgetNext((ATermList) y_18);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_19 (ATerm n_18, ATerm o_18, ATerm r_18, ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,z_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(r_18);
  u_18 = t;
  t = n_18;
  if(match_cons(t, sym_Path_1))
    {
      z_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_18, o_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, u_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(s_18, t_18, t);
  return(t);
}
static ATerm v_19 (ATerm b_19, ATerm c_19, ATerm d_19, ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,j_19 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(d_19);
  g_19 = t;
  t = SSL_is_string(b_19);
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_19, c_19);
  g_1 = t;
  t = SSLsetAnnotations(g_1, g_19);
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(e_19, f_19, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,s_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_19(l_19, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm k_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_19(m_19, s_19, l_19, t);
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = k_19;
                  t = v_19(m_19, s_19, l_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_19(l_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL,f_20 = NULL;
  f_20 = t;
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_20, term_q_19);
        t = m_6(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm d_6 = NULL,p_6 = NULL;
          t = term_r_19;
          p_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_19, f_20);
          t = r_6(p_6, f_20, t);
          d_6 = t;
          t = SSL_perror(d_6);
          _fail(t);
        }
      }
  }
  z_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_6(a_20, t);
  x_19 = t;
  t = z_19;
  t = fclose_0_0(t);
  t = x_19;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,l_20 = NULL;
      k_20 = t;
      t = (ATerm) ATinsert(ATempty, term_d_20);
      l_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_20, (ATerm) ATinsert(ATempty, term_d_20));
      t = j_6(k_20, l_20, t);
      LocalPopChoice(c_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_20;
      {
        ATerm e_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = t;
            if((PushChoice() == 0))
              {
                ATerm m_20 = NULL,n_20 = NULL;
                m_20 = t;
                t = (ATerm) ATinsert(ATempty, term_c_8);
                n_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(ATempty, term_c_8));
                t = j_6(m_20, n_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_20;
              }
            t = debug_1_0(e_1, t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = e_20;
            t = debug_1_0(h_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_i_20;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_j_20;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  t = term_r_16;
  n_21 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  o_21 = t;
  t = SSL_printnl(n_21, o_21);
  t = m_21;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__3))
    {
      q_21 = ATgetArgument(t, 0);
      r_21 = ATgetArgument(t, 1);
      t_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_6(q_21, r_21, t_21, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = term_r_16;
  w_21 = t;
  t = (ATerm) ATinsert(ATempty, term_y_20);
  x_21 = t;
  t = SSL_printnl(w_21, x_21);
  t = v_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  t = term_r_16;
  z_21 = t;
  t = (ATerm) ATinsert(ATempty, term_r_20);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = y_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,h_21 = NULL;
  o_20 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm d_21 = t;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL,l_21 = NULL;
        t = term_e_21;
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_20);
        l_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Imported_1, o_20));
        t = z_6(i_21, l_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_21;
      }
  }
  q_20 = t;
  t = term_e_21;
  z_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, term_f_21, (ATerm) ATinsert(ATempty, o_20));
  t = lookup_table_0_1(z_20, t);
  h_21 = t;
  t = term_f_21;
  a_21 = t;
  t = (ATerm) ATinsert(ATempty, o_20);
  b_21 = t;
  t = h_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(a_21, b_21, c_21, t);
  t = q_20;
  t = if_verbose4_1_0(n_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_1, t);
  p_20 = t;
  t = term_e_21;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, p_20);
  t = h_6(t_1, x_20, p_20, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_e_21;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, o_20), (ATerm) ATempty);
  t = lookup_table_0_1(s_20, t);
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, o_20);
  t_20 = t;
  t = (ATerm) ATempty;
  u_20 = t;
  t = w_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(t_20, u_20, v_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_21, (ATerm)ATmakeAppl(sym_Imported_1, o_20), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  r_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_22 = ATgetFirst((ATermList) t);
          t_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 = NULL,v_7 = NULL,w_7 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(r_22);
            p_7 = t;
            t = s_22;
            t = i_89(t);
            v_7 = t;
            t = t_22;
            t = filter_1_0(i_89, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), v_7);
            s_1 = t;
            t = SSLsetAnnotations(s_1, p_7);
            LocalPopChoice(j_21);
          }
        else
          {
            t = g_21;
            t = t_22;
            t = filter_1_0(i_89, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm v_78 (ATerm), ATerm w_78 (ATerm), ATerm t)
{
  static ATerm w_22 (ATerm t)
  {
    ATerm k_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_78(t);
        t = w_22(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = k_21;
        t = w_78(t);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22 = NULL,a_23 = NULL;
      t = term_o_7;
      z_22 = t;
      t = term_b_22;
      a_23 = t;
      t = term_c_22;
      t = z_6(z_22, a_23, t);
      LocalPopChoice(u_21);
    }
  else
    {
      t = s_21;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 = NULL;
            t = term_f_22;
            b_23 = t;
            t = SSL_getenv(b_23);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = XTC_REPOSITORY();
          }
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
  t = term_g_22;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  t = term_e_21;
  k_23 = t;
  t = term_h_22;
  l_23 = t;
  t = term_i_22;
  t = z_6(k_23, l_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_22;
      }
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
  t = term_k_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_23 = NULL;
  t = if_verbose5_1_0(x_1, t);
  d_23 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_23 = NULL,i_23 = NULL;
        t = term_e_21;
        g_23 = t;
        t = term_f_21;
        i_23 = t;
        t = term_n_22;
        t = z_6(g_23, i_23, t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm j_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_23 = t;
          t = repeat_2_0(z_1, _id, t);
          t = j_23;
        }
      }
  }
  t = d_23;
  t = if_verbose5_1_0(b_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm b_25 (ATerm t_23, ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  t = term_e_21;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_23);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, t_23));
  t = z_6(x_23, y_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_22 = ATgetFirst((ATermList) t);
      if(match_cons(p_22, sym__2))
        {
          ATerm u_22 = ATgetArgument(p_22, 0);
          w_23 = ATgetArgument(p_22, 1);
        }
      else
        _fail(t);
      {
        ATerm q_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_23;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_e_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_24 = NULL,g_24 = NULL,i_24 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      i_24 = t;
      if(match_cons(t, sym__2))
        {
          d_24 = ATgetArgument(t, 0);
          g_24 = ATgetArgument(t, 1);
          {
            ATerm c_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_24 = NULL,m_24 = NULL,o_24 = NULL;
                t = term_e_21;
                m_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_24);
                o_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATmakeAppl(sym_Tool_1, d_24));
                t = z_6(m_24, o_24, t);
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((g_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_24 != NULL) && (l_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_2, t);
                }
                t = not_null(l_24);
                LocalPopChoice(e_23);
              }
            else
              {
                t = c_23;
                t = b_25(i_24, t);
              }
          }
        }
      else
        {
          t = b_25(i_24, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
        ATerm z_24 = NULL,i_8 = NULL,j_8 = NULL;
        z_24 = t;
        t = term_r_16;
        i_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_23), z_24), term_f_23);
        j_8 = t;
        t = SSL_printnl(i_8, j_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_23), z_24), term_f_23);
        t = if_verbose5_1_0(n_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_6 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm l_25 = NULL;
  t = lookup_table_0_1(u_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_7(v_44, l_25, t);
  return(t);
}
static ATerm t_6 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  p_25 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        t = z_6(g_43, h_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_23 = ATgetFirst((ATermList) t);
            o_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_23);
        {
          ATerm q_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, g_43, h_43, o_25);
          t = lookup_table_0_1(g_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_7(h_43, o_25, q_25, t);
          t = (ATerm) ATmakeAppl(sym__3, g_43, h_43, o_25);
        }
      }
    else
      {
        t = m_23;
        {
          ATerm s_25 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
          t = lookup_table_0_1(g_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_6(h_43, s_25, t);
          t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
        }
      }
  }
  t = p_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_91 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,z_25 = NULL,a_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
  a_26 = t;
  t = j_91(t);
  z_25 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_f_17;
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_25, term_f_17);
        t = z_6(z_25, h_26, t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      w_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_25, term_f_17, w_25);
  t = lookup_table_0_1(z_25, t);
  f_26 = t;
  t = term_f_17;
  d_26 = t;
  t = f_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(d_26, w_25, e_26, t);
  t = x_25;
  {
    static ATerm r_2 (ATerm t)
    {
      ATerm i_26 = NULL;
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, i_26);
      t = t_6(z_25, i_26, t);
      return(t);
    }
    t = map_1_0(r_2, t);
  }
  t = a_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_94(t);
      t = f_94(t);
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      t = f_94(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_91 (ATerm), ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL;
  s_26 = t;
  t = i_91(t);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_26, term_f_17);
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            ATerm a_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_17;
        f_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_26, term_f_17);
        t = z_6(r_26, f_27, t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = (ATerm) ATempty;
      }
  }
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_26, term_f_17, (ATerm) ATinsert(CheckATermList(t_26), (ATerm) ATempty));
  t = lookup_table_0_1(r_26, t);
  z_26 = t;
  t = term_f_17;
  u_26 = t;
  t = (ATerm) ATinsert(CheckATermList(t_26), (ATerm) ATempty);
  x_26 = t;
  t = z_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(u_26, x_26, y_26, t);
  t = s_26;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_r_17;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_27 = NULL;
  t_27 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_27);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        t = t_27;
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_r_17;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm f_97 (ATerm), ATerm t)
{
  ATerm k_27 = NULL;
  static ATerm t_2 (ATerm t)
  {
    ATerm l_27 = NULL;
    l_27 = t;
    {
      ATerm e_24 = t;
      int f_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_27 = NULL,p_27 = NULL;
          t = term_r_17;
          o_27 = t;
          t = term_f_17;
          p_27 = t;
          t = term_h_24;
          t = z_6(o_27, p_27, t);
          LocalPopChoice(f_24);
        }
      else
        {
          t = e_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_27 != NULL) && (k_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_27 = ATgetFirst((ATermList) t);
        {
          ATerm j_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = k_27;
    t = map_1_0(x_2, t);
    t = l_27;
    t = end_scope_1_0(y_2, t);
    return(t);
  }
  t = begin_scope_1_0(s_2, t);
  t = restore_always_2_0(f_97, t_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  y_27 = t;
  t = term_v_17;
  t = whoami_0_0(t);
  z_27 = t;
  t = term_r_16;
  b_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_24), z_27), term_k_24);
  c_28 = t;
  t = SSL_printnl(b_28, c_28);
  t = term_q_8;
  a_28 = t;
  t = SSL_exit(a_28);
  t = y_27;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  if(match_string(t, "-k"))
    {
      t = e_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_28;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,i_28 = NULL;
  f_28 = t;
  t = SSL_string_to_int(f_28);
  g_28 = t;
  t = term_p_24;
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_24, g_28);
  t = c_7(i_28, g_28, t);
  t = f_28;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, d_3, g_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  if(match_string(t, "-S"))
    {
      t = l_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_28;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  t = term_a_18;
  m_28 = t;
  t = term_r_24;
  n_28 = t;
  t = term_s_24;
  t = c_7(m_28, n_28, t);
  t = term_t_24;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_u_24;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm o_28 = NULL,r_28 = NULL,s_28 = NULL;
  o_28 = t;
  t = SSL_string_to_int(o_28);
  r_28 = t;
  t = term_a_18;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, r_28);
  t = c_7(s_28, r_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_28);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  t = term_w_24;
  t_28 = t;
  t = term_v_17;
  u_28 = t;
  t = term_x_24;
  t = c_7(t_28, u_28, t);
  t = term_y_24;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, o_3, p_3, t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_3, s_3, t_3, t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            t = Option_3_0(u_3, w_3, y_3, t);
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t_47, ATerm u_47, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = term_o_7;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_7, t_47, u_47);
  t = lookup_table_0_1(x_28, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(t_47, u_47, y_28, t);
  t = (ATerm) ATmakeAppl(sym__3, term_o_7, t_47, u_47);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL;
      t = term_v_17;
      t = i_0(t);
      e_29 = t;
      t = term_k_25;
      f_29 = t;
      t = term_m_25;
      g_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_25, term_m_25, e_29);
      t = a_7(f_29, g_29, e_29, t);
      _fail(t);
    }
  else
    {
      ATerm j_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_29 = ATgetFirst((ATermList) t);
          d_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_29;
      t = d_0(t);
      t = term_v_17;
      t = g_0(t);
      j_29 = t;
      t = (ATerm) ATinsert(CheckATermList(d_29), j_29);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm l_29 = NULL;
  l_29 = t;
  if(match_string(t, "-o"))
    {
      t = l_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_29;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  t = term_r_7;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_7, n_29);
  t = c_7(o_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_29);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, b_4, f_4, t);
  return(t);
}
static ATerm a_7 (ATerm b_43, ATerm c_43, ATerm a_43, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,v_29 = NULL,w_29 = NULL;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
  {
    ATerm r_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_25 = ATgetArgument(t, 0);
            ATerm v_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_43, c_43);
        t = z_6(b_43, c_43, t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = r_25;
        t = (ATerm) ATempty;
      }
  }
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_43, c_43, (ATerm) ATinsert(CheckATermList(r_29), a_43));
  t = lookup_table_0_1(b_43, t);
  w_29 = t;
  t = (ATerm) ATinsert(CheckATermList(r_29), a_43);
  s_29 = t;
  t = w_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(c_43, s_29, v_29, t);
  t = q_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,q_30 = NULL,r_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_30 = NULL,t_30 = NULL,v_30 = NULL;
      t = term_v_17;
      t = p_0(t);
      s_30 = t;
      t = term_k_25;
      t_30 = t;
      t = term_m_25;
      v_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_25, term_m_25, s_30);
      t = a_7(t_30, v_30, s_30, t);
      _fail(t);
    }
  else
    {
      ATerm b_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_30 = ATgetFirst((ATermList) t);
          m_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_30 = ATgetFirst((ATermList) t);
          r_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_30;
      t = n_0(t);
      t = q_30;
      t = o_0(t);
      b_31 = t;
      t = (ATerm) ATinsert(CheckATermList(r_30), b_31);
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  if(match_string(t, "-i"))
    {
      t = d_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_31;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  e_31 = t;
  t = term_w_17;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_17, e_31);
  t = c_7(f_31, e_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_31);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_4, h_4, i_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_17;
  t = whoami_0_0(t);
  h_31 = t;
  t = term_r_16;
  j_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_26), h_31);
  k_31 = t;
  t = SSL_printnl(j_31, k_31);
  t = term_q_8;
  i_31 = t;
  t = SSL_exit(i_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_31 = NULL,o_31 = NULL;
  t = term_o_7;
  l_31 = t;
  t = term_c_26;
  o_31 = t;
  t = term_g_26;
  t = z_6(l_31, o_31, t);
  return(t);
}
static ATerm u_6 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_31;
      t = e_88(t);
    }
  else
    {
      ATerm v_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_31 = ATgetFirst((ATermList) t);
          s_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_31;
      t = foldr_2_0(e_88, f_88, t);
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_31, v_31);
      t = f_88(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(c_9, d_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_32 = NULL,u_8 = NULL,w_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_8;
  t = foldr_2_0(j_4, k_4, t);
  c_32 = t;
  t = SSL_TicksToSeconds(c_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_32 = NULL,w_32 = NULL,y_32 = NULL;
  t_32 = t;
  if(match_cons(t, sym__2))
    {
      w_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_32;
        if((w_32 != t))
          {
            _fail(t);
          }
        t = t_32;
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        t = (ATerm) ATmakeAppl(sym__2, w_32, y_32);
        {
          ATerm o_26 = t;
          int p_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_32, y_32);
              LocalPopChoice(p_26);
            }
          else
            {
              t = o_26;
              t = SSL_gtr(w_32, y_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_32, y_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm c_33 = NULL;
  c_33 = t;
  {
    ATerm q_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
        t = term_o_7;
        g_33 = t;
        t = term_a_18;
        h_33 = t;
        t = term_b_18;
        t = z_6(g_33, h_33, t);
        f_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_q_8);
        t = geq_0_0(t);
        t = c_33;
        t = q_94(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = q_26;
        t = c_33;
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,u_33 = NULL,x_33 = NULL;
  t = run_time_0_0(t);
  p_33 = t;
  t = term_v_17;
  t = whoami_0_0(t);
  q_33 = t;
  t = term_r_16;
  u_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), p_33), term_h_8), q_33);
  x_33 = t;
  t = SSL_printnl(u_33, x_33);
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_26), p_33), term_h_8), q_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_24;
  a_34 = t;
  t = SSL_exit(a_34);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm s_34 = NULL,u_34 = NULL;
  u_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_34 = ATgetArgument(t, 0);
          {
            ATerm y_9 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(u_34);
            y_9 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_34);
            d_2 = t;
            t = SSLsetAnnotations(d_2, y_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_34 = NULL,i_34 = NULL;
      t = term_o_7;
      h_34 = t;
      t = term_c_27;
      i_34 = t;
      t = term_d_27;
      t = z_6(h_34, i_34, t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      t = fetch_1_0(n_4, t);
    }
  t = v_98(t);
  return(t);
}
static ATerm d_7 (ATerm g_47, ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm w_34 = NULL;
  t = SSL_hashtable_put(i_47, g_47, h_47);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_34);
  return(t);
}
static ATerm e_7 (ATerm j_47, ATerm k_47, ATerm t)
{
  t = SSL_hashtable_get(k_47, j_47);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_44, ATerm t)
{
  ATerm t_35 = NULL;
  t = table_hashtable_0_0(t);
  t_35 = t;
  {
    ATerm e_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = t_35;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_7(n_44, h_10, t);
        LocalPopChoice(g_27);
      }
    else
      {
        t = e_27;
        {
          ATerm p_10 = NULL;
          t = n_44;
          t = table_create_0_0(t);
          t = t_35;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_7(n_44, p_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_hashtable_create(o_47, p_47);
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_35);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,b_36 = NULL,c_36 = NULL;
  x_35 = t;
  t = term_h_27;
  b_36 = t;
  t = term_i_27;
  c_36 = t;
  t = x_35;
  t = new_hashtable_0_2(b_36, c_36, t);
  y_35 = t;
  t = x_35;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(x_35, y_35, z_35, t);
  t = x_35;
  return(t);
}
static ATerm w_6 (ATerm l_47, ATerm m_47, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_hashtable_remove(m_47, l_47);
  d_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_36);
  return(t);
}
static ATerm x_6 (ATerm q_47, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_hashtable_destroy(q_47);
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_table_hashtable();
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  g_36 = t;
  t = table_hashtable_0_0(t);
  h_36 = t;
  t = lookup_table_0_1(g_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(j_36, t);
  t = h_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(g_36, i_36, t);
  t = g_36;
  return(t);
}
ATerm map_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  static ATerm y_36 (ATerm t)
  {
    ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
    v_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_36;
      }
    else
      {
        ATerm u_10 = NULL,g_11 = NULL,n_11 = NULL,h_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_36 = ATgetFirst((ATermList) t);
            x_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_36);
        u_10 = t;
        t = w_36;
        t = q_80(t);
        g_11 = t;
        t = x_36;
        t = y_36(t);
        n_11 = t;
        t = (ATerm) ATinsert(CheckATermList(n_11), g_11);
        h_2 = t;
        t = SSLsetAnnotations(h_2, u_10);
      }
    return(t);
  }
  t = y_36(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_37 = ATgetFirst((ATermList) t);
      c_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_37 = NULL,h_37 = NULL;
        static ATerm o_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(h_37));
          return(t);
        }
        t = c_37;
        t = l_0(t);
        if(((g_37 != NULL) && (g_37 != t)))
          _fail(t);
        else
          g_37 = t;
        t = b_37;
        t = k_0(t);
        if(((h_37 != NULL) && (h_37 != t)))
          _fail(t);
        else
          h_37 = t;
        t = c_37;
        t = reverse_acc_2_0(k_0, o_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_17;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL,m_2 = NULL;
  p_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_37);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_37);
  m_2 = t;
  t = SSLsetAnnotations(m_2, n_37);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_j_27);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,m_37 = NULL;
      t = term_o_7;
      l_37 = t;
      t = term_c_26;
      m_37 = t;
      t = term_g_26;
      t = z_6(l_37, m_37, t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = fetch_1_0(p_4, t);
    }
  t = term_q_27;
  t = echo_0_0(t);
  t = term_k_25;
  j_37 = t;
  t = term_m_25;
  k_37 = t;
  t = term_r_27;
  t = z_6(j_37, k_37, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(v_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  static ATerm v_38 (ATerm t)
  {
    ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
    s_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_38 = ATgetFirst((ATermList) t);
        u_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_12 = NULL,g_12 = NULL,o_2 = NULL;
          t = SSLgetAnnotations(s_38);
          a_12 = t;
          t = t_38;
          t = a_81(t);
          g_12 = t;
          t = (ATerm) ATinsert(CheckATermList(u_38), g_12);
          o_2 = t;
          t = SSLsetAnnotations(o_2, a_12);
          LocalPopChoice(u_27);
        }
      else
        {
          t = s_27;
          {
            ATerm w_12 = NULL,b_13 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(s_38);
            w_12 = t;
            t = u_38;
            t = v_38(t);
            b_13 = t;
            t = (ATerm) ATinsert(CheckATermList(b_13), t_38);
            w_2 = t;
            t = SSLsetAnnotations(w_2, w_12);
          }
        }
    }
    return(t);
  }
  t = v_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_27 = ATgetFirst((ATermList) t);
                ATerm d_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_38;
          }
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = (ATerm) ATinsert(ATempty, z_38);
      }
  }
  a_39 = t;
  t = term_x_7;
  b_39 = t;
  t = SSL_printnl(b_39, a_39);
  t = z_38;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_o_7;
  f_39 = t;
  t = term_c_26;
  g_39 = t;
  t = term_g_26;
  t = z_6(f_39, g_39, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  t = term_h_28;
  h_39 = t;
  t = term_v_17;
  i_39 = t;
  t = term_j_28;
  t = c_7(h_39, i_39, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL;
  t = term_h_28;
  l_39 = t;
  t = term_v_17;
  m_39 = t;
  t = term_j_28;
  t = c_7(l_39, m_39, t);
  t = term_p_28;
  j_39 = t;
  t = term_v_17;
  k_39 = t;
  t = term_q_28;
  t = c_7(j_39, k_39, t);
  t = term_v_28;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, z_4, t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      t = Option_3_0(b_5, d_5, e_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_67 (ATerm), ATerm l_67 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,v_3 = NULL;
  s_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_39 = ATgetFirst((ATermList) t);
      p_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  n_39 = t;
  t = o_39;
  t = k_67(t);
  q_39 = t;
  t = p_39;
  t = l_67(t);
  r_39 = t;
  t = (ATerm) ATinsert(CheckATermList(r_39), q_39);
  v_3 = t;
  t = SSLsetAnnotations(v_3, n_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,c_40 = NULL,d_40 = NULL,x_3 = NULL;
  x_39 = t;
  {
    ATerm b_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_29;
        t = t_100(t);
        LocalPopChoice(h_29);
      }
    else
      {
        t = b_29;
      }
  }
  t = x_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_39 = ATgetFirst((ATermList) t);
      a_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  y_39 = t;
  t = term_c_26;
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, z_39);
  t = c_7(d_40, z_39, t);
  t = a_40;
  {
    static ATerm n_40 (ATerm t)
    {
      ATerm k_29 = t;
      int m_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_29 = t;
          int t_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_40 = NULL;
              g_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_40;
              LocalPopChoice(t_29);
            }
          else
            {
              t = p_29;
              t = t_100(t);
              t = Cons_2_0(_id, n_40, t);
            }
          LocalPopChoice(m_29);
        }
      else
        {
          t = k_29;
          {
            ATerm j_40 = NULL,k_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_40 = ATgetFirst((ATermList) t);
                k_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_40), (ATerm) ATmakeAppl(sym_Undefined_1, j_40));
          }
        }
      return(t);
    }
    t = n_40(t);
  }
  c_40 = t;
  t = (ATerm) ATinsert(CheckATermList(c_40), (ATerm) ATmakeAppl(sym_Program_1, z_39));
  x_3 = t;
  t = SSLsetAnnotations(x_3, y_39);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  if(match_string(t, "--help"))
    {
      t = a_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_41;
        }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  t = term_c_27;
  b_41 = t;
  t = term_v_17;
  c_41 = t;
  t = term_u_29;
  t = c_7(b_41, c_41, t);
  t = term_x_29;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_100 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  u_40 = t;
  t = term_k_25;
  v_40 = t;
  t = term_z_29;
  t = lookup_table_0_1(v_40, t);
  z_40 = t;
  t = term_m_25;
  w_40 = t;
  t = (ATerm) ATempty;
  x_40 = t;
  t = z_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(w_40, x_40, y_40, t);
  t = u_40;
  {
    static ATerm h_5 (ATerm t)
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_100(t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm c_30 = t;
            int d_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_5, j_5, k_5, t);
                LocalPopChoice(d_30);
              }
            else
              {
                t = c_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_5, t);
  }
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_41 = NULL;
        n_41 = t;
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_13 = NULL;
              t = n_41;
              {
                ATerm i_30 = t;
                int j_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_13 = NULL,u_13 = NULL;
                    t = term_o_7;
                    t_13 = t;
                    t = term_c_27;
                    u_13 = t;
                    t = term_d_27;
                    t = z_6(t_13, u_13, t);
                    LocalPopChoice(j_30);
                  }
                else
                  {
                    t = i_30;
                    t = fetch_1_0(l_5, t);
                  }
              }
              t = n_41;
              t = default_system_usage_0_0(t);
              t = term_r_24;
              p_13 = t;
              t = SSL_exit(p_13);
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              {
                ATerm y_13 = NULL,g_14 = NULL,h_14 = NULL;
                t = term_o_7;
                g_14 = t;
                t = term_h_28;
                h_14 = t;
                t = term_k_30;
                t = z_6(g_14, h_14, t);
                t = n_41;
                t = default_system_about_0_0(t);
                t = term_r_24;
                y_13 = t;
                t = SSL_exit(y_13);
              }
            }
        }
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
              static ATerm m_5 (ATerm t)
              {
                ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,a_4 = NULL;
                t_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_41);
                r_41 = t;
                t = s_41;
                if(((s_40 != NULL) && (s_40 != t)))
                  _fail(t);
                else
                  s_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_41);
                a_4 = t;
                t = SSLsetAnnotations(a_4, r_41);
                return(t);
              }
              t = fetch_1_0(m_5, t);
              t = term_r_16;
              p_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_40)), term_p_30);
              q_41 = t;
              t = SSL_printnl(p_41, q_41);
              t = (ATerm) ATmakeAppl(sym__2, term_r_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_40)), term_p_30));
              t = default_system_usage_0_0(t);
              t = term_q_8;
              o_41 = t;
              t = SSL_exit(o_41);
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
            }
        }
      }
  }
  t_40 = t;
  t = term_k_25;
  t = table_destroy_0_0(t);
  t = t_40;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_98 (ATerm), ATerm y_98 (ATerm), ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  t = parse_options_1_0(x_98, t);
  y_41 = t;
  t = term_u_30;
  t = table_create_0_0(t);
  t = term_u_30;
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_30, term_w_30, y_41);
  t = lookup_table_0_1(z_41, t);
  c_42 = t;
  t = term_w_30;
  a_42 = t;
  t = c_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(a_42, y_41, b_42, t);
  t = y_41;
  t = z_98(t);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_98, t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_99(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm c_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = c_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm p_31 = t;
              int t_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(p_5, q_5, s_5, t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = p_31;
                  {
                    ATerm u_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = u_31;
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
static ATerm o_5 (ATerm t)
{
  t = xtc_temp_files_1_0(t_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL;
  t = term_x_31;
  i_42 = t;
  t = term_v_17;
  j_42 = t;
  t = term_y_31;
  t = c_7(i_42, j_42, t);
  t = term_z_31;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm b_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
      t = term_o_7;
      m_42 = t;
      t = term_w_17;
      n_42 = t;
      t = term_e_32;
      t = z_6(m_42, n_42, t);
      l_42 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_42);
      LocalPopChoice(d_32);
    }
  else
    {
      t = b_32;
      t = term_a_8;
    }
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL,v_42 = NULL;
        v_42 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_42 = ATgetArgument(t, 0);
            {
              ATerm x_14 = NULL,d_4 = NULL;
              t = SSLgetAnnotations(v_42);
              x_14 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_42);
              d_4 = t;
              t = SSLsetAnnotations(d_4, x_14);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_42;
          }
        LocalPopChoice(g_32);
        t = xtc_transform_file_2_0(u_5, v_5, t);
      }
    else
      {
        t = f_32;
        t = xtc_transform_term_2_0(w_5, x_5, t);
      }
  }
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_43 = NULL,o_43 = NULL;
        o_43 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_43 = ATgetArgument(t, 0);
            {
              ATerm f_15 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(o_43);
              f_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_43);
              e_4 = t;
              t = SSLsetAnnotations(e_4, f_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_43;
          }
        LocalPopChoice(i_32);
        t = xtc_transform_file_2_0(y_5, z_5, t);
      }
    else
      {
        t = h_32;
        t = xtc_transform_term_2_0(a_6, b_6, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm d_43 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  d_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_43), term_l_32);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm e_43 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  e_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_43), term_l_32);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_5, default_usage_0_0, _id, o_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
