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
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_k_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_a_31;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_w_29;
ATerm term_n_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_d_28;
ATerm term_a_28;
ATerm term_o_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_z_24;
ATerm term_x_24;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_f_19;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
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
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_f_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_y_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_i_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_b_12, term_c_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_q_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_u_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_k_13, term_l_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_w_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_u_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_v_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_j_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_u_19);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_d_22);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_m_22);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_v_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("visamb.pp.af", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.pp.af", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_f_19);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_h_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_u_25, term_n_19);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_u_26);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_a_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_g_26);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_n_19);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_n_19);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_n_19);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, (ATerm) ATempty);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_z_28);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_n_19);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_p_19);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Vis-amb", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm c_7 (ATerm e_20, ATerm f_224, ATerm t);
ATerm at_suffix_1_0 (ATerm w_89 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm o_89 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm f_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_6 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm n_6 (ATerm k_84 (ATerm), ATerm s_192, ATerm k_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t);
static ATerm o_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_82 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm k_107 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_16 (ATerm o_15, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_6 (ATerm z_99 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t);
static ATerm q_6 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm f_104 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm e_104 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm g_104 (ATerm), ATerm t);
static ATerm s_6 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm t_6 (ATerm m_93 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm u_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm v_6 (ATerm i_104 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm e_7 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm h_23 (ATerm b_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_6 (ATerm g_18, ATerm t);
static ATerm d_7 (ATerm y_32, ATerm z_32, ATerm t);
static ATerm x_6 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_25 (ATerm u_23, ATerm t);
static ATerm j_25 (ATerm a_24, ATerm c_24, ATerm d_24, ATerm t);
static ATerm m_25 (ATerm q_24, ATerm r_24, ATerm s_24, ATerm t);
static ATerm y_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_97 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm f_31 (ATerm i_30, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm build_pp_tables_0_0 (ATerm t);
static ATerm m_7 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm g_7 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm w_99 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_99 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm t_106 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm p_53, ATerm q_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm need_help_1_0 (ATerm m_108 (ATerm), ATerm t);
static ATerm q_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm r_7 (ATerm e_53, ATerm f_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_7 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm k_7 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_110 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm parse_options_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,r_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_2 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = o_1;
        t = p_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, r_1, e_0);
        t = f_7(r_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
        LocalPopChoice(c_8);
      }
    else
      {
        t = q_2;
        {
          ATerm g_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = o_1;
              t = p_0(t);
              y_0 = t;
              {
                ATerm i_8 = t;
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
                            if((r_1 != t))
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
                    t = i_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_1, y_0);
              t = f_7(r_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
              LocalPopChoice(h_8);
            }
          else
            {
              t = g_8;
              t = o_1;
              t = p_0(t);
              if((r_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      m_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_2;
    }
  else
    {
      t = m_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm c_7 (ATerm e_20, ATerm f_224, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((e_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = f_224;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  static ATerm n_3 (ATerm t);
  static ATerm n_3 (ATerm t)
  {
    ATerm j_8 = t;
    int l_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_89(t);
        LocalPopChoice(l_8);
      }
    else
      {
        t = j_8;
        {
          ATerm f_3 = NULL,k_3 = NULL,l_3 = NULL,m_1 = NULL,q_1 = NULL,u_0 = NULL;
          f_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_3 = ATgetFirst((ATermList) t);
              l_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_3);
          m_1 = t;
          t = l_3;
          t = n_3(t);
          q_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_1), k_3);
          u_0 = t;
          t = SSLsetAnnotations(u_0, m_1);
        }
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm o_89 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,v_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm w_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,z_0 = NULL,w_0 = NULL;
    h_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_4 = ATgetFirst((ATermList) t);
        d_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_4);
    b_4 = t;
    t = c_4;
    t = o_89(t);
    f_4 = t;
    t = (ATerm) ATinsert(CheckATermList(d_4), f_4);
    w_0 = t;
    t = SSLsetAnnotations(w_0, b_4);
    g_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_3 = ATgetFirst((ATermList) t);
        z_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_4);
    w_3 = t;
    t = z_3;
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), y_3);
    z_0 = t;
    t = SSLsetAnnotations(z_0, w_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_3, not_null(s_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,u_4 = NULL;
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(t_98, t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_4 = NULL;
        o_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_8 = ATgetFirst((ATermList) t);
              ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_4;
          t = list_tokenize_1_0(t_98, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_8 = ATgetFirst((ATermList) t);
          ATerm u_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, r_4);
        }
      else
        {
          ATerm f_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm v_8 = ATgetFirst((ATermList) t);
              ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_4;
          t = list_tokenize_1_0(t_98, t);
          f_5 = t;
          t = (ATerm) ATinsert(CheckATermList(f_5), r_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t_5 = t;
  t = SSL_implode_string(t_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,p_5 = NULL,e_1 = NULL;
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  j_5 = t;
  t = SSL_explode_string(l_5);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, m_5);
  e_1 = t;
  t = SSLsetAnnotations(e_1, j_5);
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm q_5 = NULL;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_5, g_5);
      t = c_7(q_5, g_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm s_7 = NULL;
  s_7 = t;
  {
    ATerm z_8 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = SSL_filemode(s_7);
        if(match_cons(t, sym__2))
          {
            b_2 = ATgetArgument(t, 0);
            {
              ATerm e_9 = ATgetArgument(t, 1);
              if(((ATgetType(e_9) != AT_INT) || (ATgetInt((ATermInt) e_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_2;
        LocalPopChoice(c_9);
      }
    else
      {
        t = z_8;
        {
          ATerm h_2 = NULL,i_2 = NULL;
          t = term_f_9;
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_9, s_7);
          t = d_7(i_2, s_7, t);
          h_2 = t;
          t = SSL_perror(h_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm f_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm x_7 = NULL,a_8 = NULL;
  a_8 = t;
  {
    ATerm j_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL,e_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_n_9);
        e_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_n_9));
        t = e_7(v_14, e_8, t);
        t = filemode_0_0(t);
        d_8 = t;
        t = SSL_S_ISDIR(d_8);
        t = a_8;
        LocalPopChoice(m_9);
        {
          ATerm f_8 = NULL,k_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_o_9), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          f_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_8), term_p_9), v_14);
          k_8 = t;
          t = SSL_concat_strings(k_8);
        }
      }
    else
      {
        t = j_9;
        t = v_14;
      }
  }
  x_7 = t;
  t = SSL_copy(w_14, x_7);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_9 = NULL,g_9 = NULL;
      t = term_x_9;
      d_9 = t;
      t = term_a_10;
      g_9 = t;
      t = term_b_10;
      t = m_7(d_9, g_9, t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      t = term_c_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = term_a_10;
      {
        ATerm f_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            t = term_x_9;
            t_2 = t;
            t = term_a_10;
            u_2 = t;
            t = term_b_10;
            t = m_7(t_2, u_2, t);
            LocalPopChoice(i_10);
          }
        else
          {
            t = f_10;
            t = term_c_10;
          }
      }
      r_2 = t;
      t = term_j_10;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_10, r_2);
      t = f_7(s_2, r_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm k_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_9;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm s_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_n_9);
      s_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, (ATerm) ATinsert(ATempty, term_n_9));
      t = e_7(l_9, s_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm t_9 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_9);
  return(t);
}
static ATerm n_6 (ATerm k_84 (ATerm), ATerm s_192, ATerm k_18, ATerm t)
{
  ATerm u_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_192, term_l_10);
  t = y_6(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_9, k_18);
  t = k_84(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym_Stream_1))
        {
          d_10 = ATgetArgument(m_10, 0);
        }
      else
        _fail(t);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(d_10, e_10, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  w_9 = t;
  t = xtc_new_file_0_0(t);
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
  t = n_6(n_0, v_9, w_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_9);
  t = xtc_transform_file_2_0(g_106, h_106, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,o_11 = NULL,p_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_11 = ATgetArgument(t, 0);
      {
        ATerm i_3 = NULL,j_3 = NULL;
        t = SSL_int_to_string(h_11);
        i_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_10), i_3), term_n_10);
        j_3 = t;
        t = SSL_concat_strings(j_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          h_11 = ATgetArgument(t, 0);
          o_11 = ATgetArgument(t, 1);
          p_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_11);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_11), term_r_10), i_4), term_q_10), h_11);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_89 (ATerm), ATerm t)
{
  ATerm s_11 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = n_89(t);
    if(((s_11 != NULL) && (s_11 != t)))
      _fail(t);
    else
      s_11 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(s_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  {
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_10 = ATgetArgument(t, 0);
              if((t_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_17), term_h_17), term_d_17), term_s_16), term_n_16), term_e_16), term_a_16), term_s_15), term_j_15), term_y_14), term_s_14), term_m_14), term_h_14), term_a_14), term_t_13), term_n_13), term_g_13), term_c_13), term_y_12), term_r_12), term_m_12), term_i_12), term_d_12), term_x_11), term_r_11), term_k_11), term_e_11), term_a_11);
        t = fetch_elem_1_0(t_0, t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, t_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_12 = NULL,t_12 = NULL;
  a_12 = t;
  {
    ATerm o_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            t_12 = ATgetArgument(t, 1);
            {
              ATerm w_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_17);
        {
          ATerm x_17 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_4 = NULL,b_5 = NULL,i_5 = NULL;
              t = t_12;
              {
                ATerm f_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_4 = t;
              t = term_h_18;
              b_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_4), term_i_18);
              i_5 = t;
              t = SSL_printnl(b_5, i_5);
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, z_4), term_i_18));
              LocalPopChoice(e_18);
            }
          else
            {
              t = x_17;
              t = a_12;
            }
        }
      }
    else
      {
        t = o_17;
        t = a_12;
      }
  }
  t = a_12;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,o_13 = NULL;
  o_13 = t;
  t = fork_0_0(t);
  h_13 = t;
  {
    ATerm j_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_13;
        t = x_82(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = j_18;
        t = SSL_waitpid(h_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            if(((ATgetType(m_18) != AT_INT) || (ATgetInt((ATermInt) m_18) != 0)))
              _fail(t);
            {
              ATerm t_18 = ATgetArgument(t, 1);
            }
            {
              ATerm u_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,y_13 = NULL;
  y_13 = t;
  t = k_107(t);
  t = xtc_find_0_0(t);
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_13, y_13);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      ATerm z_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_13, y_13);
      t = o_6(s_13, y_13, t);
      t = term_y_10;
      z_13 = t;
      t = SSL_exit(z_13);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = y_13;
  return(t);
}
ATerm at_end_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  static ATerm h_15 (ATerm t);
  static ATerm h_15 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL,g_15 = NULL;
    g_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_15 = ATgetFirst((ATermList) t);
        c_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_5 = NULL,x_5 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(g_15);
          u_5 = t;
          t = c_15;
          t = h_15(t);
          x_5 = t;
          t = (ATerm) ATinsert(CheckATermList(x_5), b_15);
          i_1 = t;
          t = SSLsetAnnotations(i_1, u_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_15;
        t = s_89(t);
      }
    return(t);
  }
  t = h_15(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
  b_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_14;
    }
  else
    {
      static ATerm x_0 (ATerm t);
      static ATerm x_0 (ATerm t)
      {
        t = not_null(d_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          if(((d_14 != NULL) && (d_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_14;
      t = at_end_1_0(x_0, t);
    }
  return(t);
}
static ATerm f_16 (ATerm o_15, ATerm t)
{
  ATerm p_15 = NULL;
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_15;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL,z_15 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      {
        ATerm a_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_1 (ATerm t);
            static ATerm a_1 (ATerm t)
            {
              t = x_15;
              return(t);
            }
            t = u_15;
            t = at_end_1_0(a_1, t);
            LocalPopChoice(c_19);
          }
        else
          {
            t = a_19;
            t = f_16(z_15, t);
          }
      }
    }
  else
    {
      t = f_16(z_15, t);
    }
  return(t);
}
static ATerm z_6 (ATerm z_99 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,r_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  r_16 = t;
  t = z_99(t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_16, u_35, s_35);
  t = n_7(k_16, u_35, s_35, t);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL;
        t = term_f_19;
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_16, term_f_19);
        t = m_7(k_16, y_16, t);
        {
          ATerm g_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_19;
            }
        }
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_16 = ATgetFirst((ATermList) t);
      m_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_16, term_f_19, (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATinsert(CheckATermList(l_16), u_35)));
  t = lookup_table_0_1(k_16, t);
  x_16 = t;
  t = term_f_19;
  u_16 = t;
  t = (ATerm) ATinsert(CheckATermList(m_16), (ATerm) ATinsert(CheckATermList(l_16), u_35));
  v_16 = t;
  t = x_16;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(u_16, v_16, w_16, t);
  t = r_16;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm c_17 = NULL;
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_17 = NULL,i_6 = NULL;
      m_17 = t;
      t = term_j_19;
      i_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_17, term_j_19);
      t = d_7(m_17, i_6, t);
      c_17 = t;
      t = SSL_mkstemp(c_17);
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm n_17 = NULL;
        t = term_k_19;
        n_17 = t;
        t = SSL_perror(n_17);
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
static ATerm c_1 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL;
  t = P__tmpdir_0_0(t);
  u_17 = t;
  t = term_m_19;
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_17, term_m_19);
  t = d_7(u_17, v_17, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_19;
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_17, term_n_19);
  t = z_6(c_1, q_17, t_17, t);
  t = SSL_close(p_17);
  t = q_17;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  y_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_18 = NULL,d_18 = NULL;
      t = y_17;
      t = xtc_new_file_0_0(t);
      c_18 = t;
      t = r_0(t);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_18, (ATerm) ATinsert(ATinsert(ATempty, c_18), term_a_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_18);
    }
  else
    {
      ATerm n_18 = NULL,o_18 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_17;
      t = xtc_new_file_0_0(t);
      n_18 = t;
      t = r_0(t);
      o_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_18), term_a_10), z_17), term_p_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_18);
    }
  return(t);
}
ATerm debug_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  p_18 = t;
  t = i_84(t);
  q_18 = t;
  t = term_h_18;
  r_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_18), q_18);
  s_18 = t;
  t = SSL_printnl(r_18, s_18);
  t = p_18;
  return(t);
}
static ATerm q_6 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm x_18 = NULL,y_18 = NULL;
    x_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), x_18);
    t = m_7(not_null(v_18), x_18, t);
    y_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_18, y_18);
    return(t);
  }
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  t = lookup_table_0_1(v_18, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_6(w_18, t);
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm b_19 = NULL;
  b_19 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = term_x_9;
        q_19 = t;
        t = term_u_19;
        r_19 = t;
        t = term_v_19;
        t = m_7(q_19, r_19, t);
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_19, term_p_16);
        t = geq_0_0(t);
        t = b_19;
        t = f_104(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = b_19;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_104 (ATerm), ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
        t = term_x_9;
        l_20 = t;
        t = term_u_19;
        m_20 = t;
        t = term_v_19;
        t = m_7(l_20, m_20, t);
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_20, term_e_13);
        t = geq_0_0(t);
        t = d_20;
        t = e_104(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = d_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  t_20 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
        t = term_x_9;
        x_20 = t;
        t = term_u_19;
        y_20 = t;
        t = term_v_19;
        t = m_7(x_20, y_20, t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_20, term_m_11);
        t = geq_0_0(t);
        t = t_20;
        t = g_104(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = t_20;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm p_93 (ATerm), ATerm q_93 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = q_93(t);
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm a_21 = NULL;
      a_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, a_21);
      t = p_93(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm t_6 (ATerm m_93 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm s_21 (ATerm t);
  static ATerm s_21 (ATerm t)
  {
    ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
    m_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_21 = ATgetFirst((ATermList) t);
            o_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_20 = t;
          int b_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_21;
              {
                static ATerm g_1 (ATerm t);
                static ATerm g_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = s_6(m_93, g_1, n_21, o_21, t);
              }
              t = s_21(t);
              LocalPopChoice(b_20);
            }
          else
            {
              t = a_20;
              {
                ATerm b_7 = NULL,u_7 = NULL,t_1 = NULL;
                t = SSLgetAnnotations(m_21);
                b_7 = t;
                t = o_21;
                t = s_21(t);
                u_7 = t;
                t = (ATerm) ATinsert(CheckATermList(u_7), n_21);
                t_1 = t;
                t = SSLsetAnnotations(t_1, b_7);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = s_21(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      p_22 = ATgetArgument(t, 0);
      if((p_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm z_21 = NULL,f_22 = NULL,g_22 = NULL,i_22 = NULL;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm c_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = m_7(g_49, h_49, t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = c_20;
        t = (ATerm) ATempty;
      }
  }
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, i_49);
  t = t_6(h_1, g_22, i_49, t);
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, f_22);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(h_49, f_22, i_22, t);
  t = z_21;
  return(t);
}
static ATerm v_6 (ATerm i_104 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm q_22 = NULL,r_22 = NULL;
    if(match_cons(t, sym__2))
      {
        q_22 = ATgetArgument(t, 0);
        r_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, q_22, r_22);
    t = i_104(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm e_7 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm h_23 (ATerm b_23, ATerm t)
{
  t = SSL_fclose(b_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_23 = ATgetArgument(t, 0);
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_23);
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            t = h_23(f_23, t);
          }
      }
    }
  else
    {
      t = h_23(f_23, t);
    }
  return(t);
}
static ATerm w_6 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm d_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
static ATerm x_6 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm i_23 = NULL;
  t = SSL_fopen(n_55, o_55);
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = SSL_stdin_stream();
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_23 = NULL;
  t = SSL_stdout_stream();
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_23 = NULL;
  t = SSL_stderr_stream();
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_23);
  return(t);
}
static ATerm i_25 (ATerm u_23, ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_explode_term(u_23);
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            v_23 = ATgetFirst((ATermList) o_20);
            {
              ATerm p_20 = (ATerm) ATgetNext((ATermList) o_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_25 (ATerm a_24, ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,o_24 = NULL,v_2 = NULL;
  t = SSLgetAnnotations(d_24);
  j_24 = t;
  t = a_24;
  if(match_cons(t, sym_Path_1))
    {
      o_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_24, c_24);
  v_2 = t;
  t = SSLsetAnnotations(v_2, j_24);
  if(match_cons(t, sym__2))
    {
      h_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(h_24, i_24, t);
  return(t);
}
static ATerm m_25 (ATerm q_24, ATerm r_24, ATerm s_24, ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL,a_25 = NULL,w_2 = NULL;
  t = SSLgetAnnotations(s_24);
  v_24 = t;
  t = SSL_is_string(q_24);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_25, r_24);
  w_2 = t;
  t = SSLsetAnnotations(w_2, v_24);
  if(match_cons(t, sym__2))
    {
      t_24 = ATgetArgument(t, 0);
      u_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(t_24, u_24, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,g_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_25(c_25, t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm s_20 = t;
              int u_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_25(d_25, g_25, c_25, t);
                  LocalPopChoice(u_20);
                }
              else
                {
                  t = s_20;
                  t = m_25(d_25, g_25, c_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_25(c_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_25 = NULL,w_25 = NULL,x_25 = NULL,d_26 = NULL;
  d_26 = t;
  {
    ATerm v_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_26, term_b_21);
        t = y_6(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = v_20;
        {
          ATerm q_8 = NULL,s_8 = NULL;
          t = term_c_21;
          s_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_21, d_26);
          t = d_7(s_8, d_26, t);
          q_8 = t;
          t = SSL_perror(q_8);
          _fail(t);
        }
      }
  }
  w_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(x_25, t);
  t_25 = t;
  t = w_25;
  t = fclose_0_0(t);
  t = t_25;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_d_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_26 = NULL,o_26 = NULL;
      m_26 = t;
      t = (ATerm) ATinsert(ATempty, term_h_21);
      o_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_26, (ATerm) ATinsert(ATempty, term_h_21));
      t = e_7(m_26, o_26, t);
      LocalPopChoice(g_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_21;
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_21 = t;
            if((PushChoice() == 0))
              {
                ATerm p_26 = NULL,q_26 = NULL;
                p_26 = t;
                t = (ATerm) ATinsert(ATempty, term_n_9);
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_26, (ATerm) ATinsert(ATempty, term_n_9));
                t = e_7(p_26, q_26, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_21;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            t = debug_1_0(l_1, t);
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
  t = term_l_21;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm u_27 = NULL,x_27 = NULL,y_27 = NULL;
  u_27 = t;
  t = term_h_18;
  x_27 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  y_27 = t;
  t = SSL_printnl(x_27, y_27);
  t = u_27;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm z_27 = NULL,b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__3))
    {
      z_27 = ATgetArgument(t, 0);
      b_28 = ATgetArgument(t, 1);
      c_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_6(z_27, b_28, c_28, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  t = term_h_18;
  g_28 = t;
  t = (ATerm) ATinsert(ATempty, term_r_21);
  h_28 = t;
  t = SSL_printnl(g_28, h_28);
  t = f_28;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,q_28 = NULL;
  j_28 = t;
  t = term_h_18;
  k_28 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  q_28 = t;
  t = SSL_printnl(k_28, q_28);
  t = j_28;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,w_26 = NULL,z_26 = NULL,b_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  r_26 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm t_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,t_27 = NULL;
        t = term_u_21;
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_26);
        t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATmakeAppl(sym_Imported_1, r_26));
        t = m_7(s_27, t_27, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_21;
      }
  }
  w_26 = t;
  t = term_u_21;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_21, term_v_21, (ATerm) ATinsert(ATempty, r_26));
  t = lookup_table_0_1(k_27, t);
  r_27 = t;
  t = term_v_21;
  n_27 = t;
  t = (ATerm) ATinsert(ATempty, r_26);
  p_27 = t;
  t = r_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(n_27, p_27, q_27, t);
  t = w_26;
  t = if_verbose4_1_0(s_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_1, t);
  s_26 = t;
  t = term_u_21;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, s_26);
  t = v_6(w_1, j_27, s_26, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_u_21;
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_21, (ATerm)ATmakeAppl(sym_Imported_1, r_26), (ATerm) ATempty);
  t = lookup_table_0_1(z_26, t);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_26);
  b_27 = t;
  t = (ATerm) ATempty;
  f_27 = t;
  t = h_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(b_27, f_27, g_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_21, (ATerm)ATmakeAppl(sym_Imported_1, r_26), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_97 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,k_29 = NULL;
  g_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_29;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_9 = NULL,i_9 = NULL,k_9 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(g_29);
            a_9 = t;
            t = h_29;
            t = t_97(t);
            i_9 = t;
            t = k_29;
            t = filter_1_0(t_97, t);
            k_9 = t;
            t = (ATerm) ATinsert(CheckATermList(k_9), i_9);
            z_2 = t;
            t = SSLsetAnnotations(z_2, a_9);
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = k_29;
            t = filter_1_0(t_97, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  static ATerm p_29 (ATerm t);
  static ATerm p_29 (ATerm t)
  {
    ATerm y_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_87(t);
        t = p_29(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = y_21;
        t = g_87(t);
      }
    return(t);
  }
  t = p_29(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_29 = NULL,s_29 = NULL;
      t = term_x_9;
      q_29 = t;
      t = term_d_22;
      s_29 = t;
      t = term_e_22;
      t = m_7(q_29, s_29, t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm h_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_29 = NULL;
            t = term_k_22;
            t_29 = t;
            t = SSL_getenv(t_29);
            LocalPopChoice(j_22);
          }
        else
          {
            t = h_22;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL;
  t = term_u_21;
  b_30 = t;
  t = term_m_22;
  c_30 = t;
  t = term_n_22;
  t = m_7(b_30, c_30, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_22;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_29 = NULL;
  t = if_verbose5_1_0(z_1, t);
  x_29 = t;
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_29 = NULL,z_29 = NULL;
        t = term_u_21;
        y_29 = t;
        t = term_v_21;
        z_29 = t;
        t = term_v_22;
        t = m_7(y_29, z_29, t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        {
          ATerm a_30 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_30 = t;
          t = repeat_2_0(c_2, _id, t);
          t = a_30;
        }
      }
  }
  t = x_29;
  t = if_verbose5_1_0(d_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm f_31 (ATerm i_30, ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  t = term_u_21;
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATmakeAppl(sym_Tool_1, i_30));
  t = m_7(m_30, n_30, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_22 = ATgetFirst((ATermList) t);
      if(match_cons(x_22, sym__2))
        {
          ATerm z_22 = ATgetArgument(x_22, 0);
          l_30 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_30;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_u_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_30 = NULL,r_30 = NULL,s_30 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      s_30 = t;
      if(match_cons(t, sym__2))
        {
          o_30 = ATgetArgument(t, 0);
          r_30 = ATgetArgument(t, 1);
          {
            ATerm g_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
                t = term_u_21;
                y_30 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_30);
                z_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATmakeAppl(sym_Tool_1, o_30));
                t = m_7(y_30, z_30, t);
                {
                  static ATerm j_2 (ATerm t);
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_30 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((x_30 != NULL) && (x_30 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(j_2, t);
                }
                t = not_null(x_30);
                LocalPopChoice(m_23);
              }
            else
              {
                t = g_23;
                t = f_31(s_30, t);
              }
          }
        }
      else
        {
          t = f_31(s_30, t);
        }
      t = if_verbose5_1_0(k_2, t);
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_31 = NULL,y_9 = NULL,z_9 = NULL;
        e_31 = t;
        t = term_h_18;
        y_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), e_31), term_n_23);
        z_9 = t;
        t = SSL_printnl(y_9, z_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_23), e_31), term_n_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm build_pp_tables_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL;
  t = term_p_23;
  t = xtc_find_0_0(t);
  h_31 = t;
  t = term_q_23;
  t = xtc_find_0_0(t);
  i_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_31), term_r_23), h_31), term_r_23);
  return(t);
}
static ATerm m_7 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm p_31 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(d_50, p_31, t);
  return(t);
}
static ATerm g_7 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  t_31 = t;
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = m_7(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_23 = ATgetFirst((ATermList) t);
            s_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_23);
        {
          ATerm u_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, s_31);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_7(p_48, s_31, u_31, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, s_31);
        }
      }
    else
      {
        t = s_23;
        {
          ATerm w_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_7(p_48, w_31, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = t_31;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,i_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  l_32 = t;
  t = w_99(t);
  i_32 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL;
        t = term_f_19;
        p_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_32, term_f_19);
        t = m_7(i_32, p_32, t);
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
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_32 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, i_32, term_f_19, a_32);
  t = lookup_table_0_1(i_32, t);
  o_32 = t;
  t = term_f_19;
  m_32 = t;
  t = o_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(m_32, a_32, n_32, t);
  t = b_32;
  {
    static ATerm x_2 (ATerm t);
    static ATerm x_2 (ATerm t)
    {
      ATerm q_32 = NULL;
      q_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_32, q_32);
      t = g_7(i_32, q_32, t);
      return(t);
    }
    t = map_1_0(x_2, t);
  }
  t = l_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm t)
{
  ATerm b_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_103(t);
      t = q_103(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = b_24;
      t = q_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,a_33 = NULL,b_33 = NULL,d_33 = NULL,e_33 = NULL;
  w_32 = t;
  t = v_99(t);
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, term_f_19);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_24 = ATgetArgument(t, 0);
            ATerm l_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_19;
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_32, term_f_19);
        t = m_7(v_32, k_33, t);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
  }
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_32, term_f_19, (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATempty));
  t = lookup_table_0_1(v_32, t);
  e_33 = t;
  t = term_f_19;
  a_33 = t;
  t = (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATempty);
  b_33 = t;
  t = e_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(a_33, b_33, d_33, t);
  t = w_32;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_l_19;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_33);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = u_33;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_l_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm n_33 = NULL;
  static ATerm a_3 (ATerm t);
  static ATerm a_3 (ATerm t)
  {
    ATerm o_33 = NULL;
    o_33 = t;
    {
      ATerm p_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = NULL,q_33 = NULL;
          t = term_l_19;
          p_33 = t;
          t = term_f_19;
          q_33 = t;
          t = term_x_24;
          t = m_7(p_33, q_33, t);
          LocalPopChoice(w_24);
        }
      else
        {
          t = p_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_33 != NULL) && (n_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_33 = ATgetFirst((ATermList) t);
        {
          ATerm y_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_33;
    t = map_1_0(c_3, t);
    t = o_33;
    t = end_scope_1_0(d_3, t);
    return(t);
  }
  t = begin_scope_1_0(y_2, t);
  t = restore_always_2_0(t_106, a_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  z_33 = t;
  t = term_n_19;
  t = whoami_0_0(t);
  a_34 = t;
  t = term_h_18;
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_25), a_34), term_z_24);
  d_34 = t;
  t = SSL_printnl(c_34, d_34);
  t = term_y_10;
  b_34 = t;
  t = SSL_exit(b_34);
  t = z_33;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  if(match_string(t, "-k"))
    {
      t = f_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_34;
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  t = SSL_string_to_int(i_34);
  j_34 = t;
  t = term_e_25;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, j_34);
  t = p_7(k_34, j_34, t);
  t = i_34;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_f_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, g_3, h_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  if(match_string(t, "-S"))
    {
      t = o_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_34;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_u_19;
  r_34 = t;
  t = term_h_25;
  s_34 = t;
  t = term_n_25;
  t = p_7(r_34, s_34, t);
  t = term_q_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,x_34 = NULL;
  t_34 = t;
  t = SSL_string_to_int(t_34);
  u_34 = t;
  t = term_u_19;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_19, u_34);
  t = p_7(x_34, u_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_34);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  t = term_u_25;
  y_34 = t;
  t = term_n_19;
  z_34 = t;
  t = term_v_25;
  t = p_7(y_34, z_34, t);
  t = term_y_25;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_3, o_3, p_3, t);
      LocalPopChoice(b_26);
    }
  else
    {
      t = a_26;
      {
        ATerm c_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_3, t_3, u_3, t);
            LocalPopChoice(e_26);
          }
        else
          {
            t = c_26;
            t = Option_3_0(x_3, a_4, e_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm a_35 = NULL,d_35 = NULL;
  t = term_x_9;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_9, p_53, q_53);
  t = lookup_table_0_1(a_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(p_53, q_53, d_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_9, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,l_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
      t = term_n_19;
      t = g_0(t);
      x_35 = t;
      t = term_f_26;
      y_35 = t;
      t = term_g_26;
      z_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, x_35);
      t = n_7(y_35, z_35, x_35, t);
      _fail(t);
    }
  else
    {
      ATerm d_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_35;
      t = d_0(t);
      t = term_n_19;
      t = f_0(t);
      d_36 = t;
      t = (ATerm) ATinsert(CheckATermList(l_35), d_36);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm f_36 = NULL;
  f_36 = t;
  if(match_string(t, "-o"))
    {
      t = f_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_36;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_36 = NULL,n_36 = NULL;
  k_36 = t;
  t = term_a_10;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, k_36);
  t = p_7(n_36, k_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_36);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
static ATerm n_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL,w_36 = NULL,x_36 = NULL,b_37 = NULL;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_26 = ATgetArgument(t, 0);
            ATerm l_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = m_7(j_48, k_48, t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATempty;
      }
  }
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(u_36), i_48));
  t = lookup_table_0_1(j_48, t);
  b_37 = t;
  t = (ATerm) ATinsert(CheckATermList(u_36), i_48);
  w_36 = t;
  t = b_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(k_48, w_36, x_36, t);
  t = r_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_37 = NULL,v_37 = NULL,w_37 = NULL;
      t = term_n_19;
      t = o_0(t);
      s_37 = t;
      t = term_f_26;
      v_37 = t;
      t = term_g_26;
      w_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_26, term_g_26, s_37);
      t = n_7(v_37, w_37, s_37, t);
      _fail(t);
    }
  else
    {
      ATerm a_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          o_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_37 = ATgetFirst((ATermList) t);
          q_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_37;
      t = l_0(t);
      t = p_37;
      t = m_0(t);
      a_38 = t;
      t = (ATerm) ATinsert(CheckATermList(q_37), a_38);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  if(match_string(t, "-i"))
    {
      t = c_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_38;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  d_38 = t;
  t = term_p_19;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, d_38);
  t = p_7(e_38, d_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_38);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, p_4, q_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_19;
  t = whoami_0_0(t);
  f_38 = t;
  t = term_h_18;
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_26), f_38);
  i_38 = t;
  t = SSL_printnl(h_38, i_38);
  t = term_y_10;
  g_38 = t;
  t = SSL_exit(g_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  t = term_x_9;
  j_38 = t;
  t = term_u_26;
  k_38 = t;
  t = term_v_26;
  t = m_7(j_38, k_38, t);
  return(t);
}
static ATerm h_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
  m_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_38;
      t = p_96(t);
    }
  else
    {
      ATerm r_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_38 = ATgetFirst((ATermList) t);
          o_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      t = foldr_2_0(p_96, q_96, t);
      r_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_38, r_38);
      t = q_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_10 = NULL,t_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(p_10, t_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_38 = NULL,g_10 = NULL,h_10 = NULL;
  t = times_0_0(t);
  h_10 = t;
  t = SSL_explode_term(h_10);
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_10;
  t = foldr_2_0(s_4, t_4, t);
  u_38 = t;
  t = SSL_TicksToSeconds(u_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_39;
        if((g_39 != t))
          {
            _fail(t);
          }
        t = f_39;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = (ATerm) ATmakeAppl(sym__2, g_39, h_39);
        {
          ATerm e_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_39, h_39);
              LocalPopChoice(i_27);
            }
          else
            {
              t = e_27;
              t = SSL_gtr(g_39, h_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_39, h_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
        t = term_x_9;
        o_39 = t;
        t = term_u_19;
        p_39 = t;
        t = term_v_19;
        t = m_7(o_39, p_39, t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_39, term_y_10);
        t = geq_0_0(t);
        t = l_39;
        t = b_104(t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        t = l_39;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,u_39 = NULL,y_39 = NULL;
  t = run_time_0_0(t);
  r_39 = t;
  t = term_n_19;
  t = whoami_0_0(t);
  s_39 = t;
  t = term_h_18;
  u_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), r_39), term_q_10), s_39);
  y_39 = t;
  t = SSL_printnl(u_39, y_39);
  t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_27), r_39), term_q_10), s_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_25;
  z_39 = t;
  t = SSL_exit(z_39);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL;
  m_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_40 = ATgetArgument(t, 0);
          {
            ATerm n_11 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(m_40);
            n_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_40);
            b_3 = t;
            t = SSLsetAnnotations(b_3, n_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_40 = NULL,f_40 = NULL;
      t = term_x_9;
      e_40 = t;
      t = term_a_28;
      f_40 = t;
      t = term_d_28;
      t = m_7(e_40, f_40, t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = fetch_1_0(w_4, t);
    }
  t = m_108(t);
  return(t);
}
static ATerm q_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_40);
  return(t);
}
static ATerm r_7 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm x_40 = NULL;
  t = table_hashtable_0_0(t);
  x_40 = t;
  {
    ATerm e_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL;
        t = x_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_7(v_49, z_11, t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = e_28;
        {
          ATerm g_12 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = x_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_7(v_49, g_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL;
  b_41 = t;
  t = term_l_28;
  f_41 = t;
  t = term_m_28;
  g_41 = t;
  t = b_41;
  t = new_hashtable_0_2(f_41, g_41, t);
  c_41 = t;
  t = b_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(b_41, c_41, d_41, t);
  t = b_41;
  return(t);
}
static ATerm j_7 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm h_41 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_41);
  return(t);
}
static ATerm k_7 (ATerm l_53, ATerm t)
{
  ATerm i_41 = NULL;
  t = SSL_hashtable_destroy(l_53);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_table_hashtable();
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  k_41 = t;
  t = table_hashtable_0_0(t);
  l_41 = t;
  t = lookup_table_0_1(k_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(n_41, t);
  t = l_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(k_41, m_41, t);
  t = k_41;
  return(t);
}
ATerm map_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm c_42 (ATerm t);
  static ATerm c_42 (ATerm t)
  {
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
    z_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_41;
      }
    else
      {
        ATerm n_12 = NULL,v_12 = NULL,w_12 = NULL,q_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_42 = ATgetFirst((ATermList) t);
            b_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_41);
        n_12 = t;
        t = a_42;
        t = b_89(t);
        v_12 = t;
        t = b_42;
        t = c_42(t);
        w_12 = t;
        t = (ATerm) ATinsert(CheckATermList(w_12), v_12);
        q_3 = t;
        t = SSLsetAnnotations(q_3, n_12);
      }
    return(t);
  }
  t = c_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_42 = ATgetFirst((ATermList) t);
      g_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_42 = NULL,l_42 = NULL;
        static ATerm x_4 (ATerm t);
        static ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), not_null(l_42));
          return(t);
        }
        t = g_42;
        t = j_0(t);
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = f_42;
        t = h_0(t);
        if(((l_42 != NULL) && (l_42 != t)))
          _fail(t);
        else
          l_42 = t;
        t = g_42;
        t = reverse_acc_2_0(h_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_19;
      t = j_0(t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL,d_6 = NULL;
  t_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_42);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_42);
  d_6 = t;
  t = SSLsetAnnotations(d_6, r_42);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_42), term_n_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL;
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_42 = NULL,q_42 = NULL;
      t = term_x_9;
      p_42 = t;
      t = term_u_26;
      q_42 = t;
      t = term_v_26;
      t = m_7(p_42, q_42, t);
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      t = fetch_1_0(y_4, t);
    }
  t = term_r_28;
  t = echo_0_0(t);
  t = term_f_26;
  n_42 = t;
  t = term_g_26;
  o_42 = t;
  t = term_s_28;
  t = m_7(n_42, o_42, t);
  t = reverse_acc_2_0(_id, a_5, t);
  t = map_1_0(c_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  static ATerm s_43 (ATerm t);
  static ATerm s_43 (ATerm t)
  {
    ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
    p_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_43 = ATgetFirst((ATermList) t);
        r_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_13 = NULL,m_13 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(p_43);
          j_13 = t;
          t = q_43;
          t = l_89(t);
          m_13 = t;
          t = (ATerm) ATinsert(CheckATermList(r_43), m_13);
          h_6 = t;
          t = SSLsetAnnotations(h_6, j_13);
          LocalPopChoice(u_28);
        }
      else
        {
          t = t_28;
          {
            ATerm x_13 = NULL,i_14 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(p_43);
            x_13 = t;
            t = r_43;
            t = s_43(t);
            i_14 = t;
            t = (ATerm) ATinsert(CheckATermList(i_14), q_43);
            j_6 = t;
            t = SSLsetAnnotations(j_6, x_13);
          }
        }
    }
    return(t);
  }
  t = s_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_28 = ATgetFirst((ATermList) t);
                ATerm y_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_43;
          }
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        t = (ATerm) ATinsert(ATempty, w_43);
      }
  }
  x_43 = t;
  t = term_c_10;
  y_43 = t;
  t = SSL_printnl(y_43, x_43);
  t = w_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  t = term_x_9;
  c_44 = t;
  t = term_u_26;
  d_44 = t;
  t = term_v_26;
  t = m_7(c_44, d_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  t = term_z_28;
  e_44 = t;
  t = term_n_19;
  f_44 = t;
  t = term_a_29;
  t = p_7(e_44, f_44, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_b_29;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  t = term_z_28;
  i_44 = t;
  t = term_n_19;
  j_44 = t;
  t = term_a_29;
  t = p_7(i_44, j_44, t);
  t = term_c_29;
  g_44 = t;
  t = term_n_19;
  h_44 = t;
  t = term_d_29;
  t = p_7(g_44, h_44, t);
  t = term_e_29;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, n_5, t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = Option_3_0(o_5, r_5, s_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,o_7 = NULL;
  p_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_44 = ATgetFirst((ATermList) t);
      m_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_44);
  k_44 = t;
  t = l_44;
  t = q_75(t);
  n_44 = t;
  t = m_44;
  t = r_75(t);
  o_44 = t;
  t = (ATerm) ATinsert(CheckATermList(o_44), n_44);
  o_7 = t;
  t = SSLsetAnnotations(o_7, k_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,z_44 = NULL,a_45 = NULL,w_7 = NULL;
  u_44 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_29;
        t = k_110(t);
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
      }
  }
  t = u_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_44 = ATgetFirst((ATermList) t);
      x_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_44);
  v_44 = t;
  t = term_u_26;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_26, w_44);
  t = p_7(a_45, w_44, t);
  t = x_44;
  {
    static ATerm k_45 (ATerm t);
    static ATerm k_45 (ATerm t)
    {
      ATerm o_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_45 = NULL;
              d_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_45;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
              t = k_110(t);
              t = Cons_2_0(_id, k_45, t);
            }
          LocalPopChoice(r_29);
        }
      else
        {
          t = o_29;
          {
            ATerm g_45 = NULL,h_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_45 = ATgetFirst((ATermList) t);
                h_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_45), (ATerm) ATmakeAppl(sym_Undefined_1, g_45));
          }
        }
      return(t);
    }
    t = k_45(t);
  }
  z_44 = t;
  t = (ATerm) ATinsert(CheckATermList(z_44), (ATerm) ATmakeAppl(sym_Program_1, w_44));
  w_7 = t;
  t = SSLsetAnnotations(w_7, v_44);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_45 = NULL;
  x_45 = t;
  if(match_string(t, "--help"))
    {
      t = x_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_45;
        }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_a_28;
  y_45 = t;
  t = term_n_19;
  z_45 = t;
  t = term_w_29;
  t = p_7(y_45, z_45, t);
  t = term_d_30;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  r_45 = t;
  t = term_f_26;
  s_45 = t;
  t = term_f_30;
  t = lookup_table_0_1(s_45, t);
  w_45 = t;
  t = term_g_26;
  t_45 = t;
  t = (ATerm) ATempty;
  u_45 = t;
  t = w_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(t_45, u_45, v_45, t);
  t = r_45;
  {
    static ATerm v_5 (ATerm t);
    static ATerm v_5 (ATerm t)
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_110(t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, y_5, z_5, t);
                LocalPopChoice(k_30);
              }
            else
              {
                t = j_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
  }
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_46 = NULL;
        k_46 = t;
        {
          ATerm t_30 = t;
          int u_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_15 = NULL;
              t = k_46;
              {
                ATerm v_30 = t;
                int w_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_15 = NULL,f_15 = NULL;
                    t = term_x_9;
                    e_15 = t;
                    t = term_a_28;
                    f_15 = t;
                    t = term_d_28;
                    t = m_7(e_15, f_15, t);
                    LocalPopChoice(w_30);
                  }
                else
                  {
                    t = v_30;
                    t = fetch_1_0(a_6, t);
                  }
              }
              t = k_46;
              t = default_system_usage_0_0(t);
              t = term_h_25;
              d_15 = t;
              t = SSL_exit(d_15);
              LocalPopChoice(u_30);
            }
          else
            {
              t = t_30;
              {
                ATerm m_15 = NULL,n_15 = NULL,r_15 = NULL;
                t = term_x_9;
                n_15 = t;
                t = term_z_28;
                r_15 = t;
                t = term_a_31;
                t = m_7(n_15, r_15, t);
                t = k_46;
                t = default_system_about_0_0(t);
                t = term_h_25;
                m_15 = t;
                t = SSL_exit(m_15);
              }
            }
        }
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        {
          ATerm b_31 = t;
          int c_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
              static ATerm b_6 (ATerm t);
              static ATerm b_6 (ATerm t)
              {
                ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL,r_8 = NULL;
                q_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_46);
                o_46 = t;
                t = p_46;
                if(((p_45 != NULL) && (p_45 != t)))
                  _fail(t);
                else
                  p_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_46);
                r_8 = t;
                t = SSLsetAnnotations(r_8, o_46);
                return(t);
              }
              t = fetch_1_0(b_6, t);
              t = term_h_18;
              m_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_45)), term_d_31);
              n_46 = t;
              t = SSL_printnl(m_46, n_46);
              t = (ATerm) ATmakeAppl(sym__2, term_h_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_45)), term_d_31));
              t = default_system_usage_0_0(t);
              t = term_y_10;
              l_46 = t;
              t = SSL_exit(l_46);
              LocalPopChoice(c_31);
            }
          else
            {
              t = b_31;
            }
        }
      }
  }
  q_45 = t;
  t = term_f_26;
  t = table_destroy_0_0(t);
  t = q_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = parse_options_1_0(o_108, t);
  v_46 = t;
  t = term_g_31;
  t = table_create_0_0(t);
  t = term_g_31;
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_31, term_j_31, v_46);
  t = lookup_table_0_1(w_46, t);
  z_46 = t;
  t = term_j_31;
  x_46 = t;
  t = z_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(x_46, v_46, y_46, t);
  t = v_46;
  t = q_108(t);
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_108, t);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_108(t);
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
static ATerm c_6 (ATerm t)
{
  ATerm o_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_31);
    }
  else
    {
      t = o_31;
      {
        ATerm r_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = r_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(f_6, g_6, k_6, t);
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = x_31;
                  {
                    ATerm z_31 = t;
                    int c_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(c_32);
                      }
                    else
                      {
                        t = z_31;
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
static ATerm e_6 (ATerm t)
{
  t = xtc_temp_files_1_0(l_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  t = term_d_32;
  h_47 = t;
  t = term_n_19;
  i_47 = t;
  t = term_e_32;
  t = p_7(h_47, i_47, t);
  t = term_f_32;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm h_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
      t = term_x_9;
      l_47 = t;
      t = term_p_19;
      m_47 = t;
      t = term_k_32;
      t = m_7(l_47, m_47, t);
      k_47 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_47);
      LocalPopChoice(j_32);
    }
  else
    {
      t = h_32;
      t = term_j_10;
    }
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL,t_47 = NULL;
        t_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            s_47 = ATgetArgument(t, 0);
            {
              ATerm w_15 = NULL,x_8 = NULL;
              t = SSLgetAnnotations(t_47);
              w_15 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_47);
              x_8 = t;
              t = SSLsetAnnotations(x_8, w_15);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = t_47;
          }
        LocalPopChoice(s_32);
        t = xtc_transform_file_2_0(p_6, r_6, t);
      }
    else
      {
        t = r_32;
        t = xtc_transform_term_2_0(a_7, i_7, t);
      }
  }
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL,a_48 = NULL;
        a_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_47 = ATgetArgument(t, 0);
            {
              ATerm i_16 = NULL,y_8 = NULL;
              t = SSLgetAnnotations(a_48);
              i_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_47);
              y_8 = t;
              t = SSLsetAnnotations(y_8, i_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_48;
          }
        LocalPopChoice(u_32);
        t = xtc_transform_file_2_0(l_7, build_pp_tables_0_0, t);
      }
    else
      {
        t = t_32;
        t = xtc_transform_term_2_0(t_7, build_pp_tables_0_0, t);
      }
  }
  {
    ATerm c_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_48 = NULL,s_48 = NULL;
        s_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            r_48 = ATgetArgument(t, 0);
            {
              ATerm t_16 = NULL,h_9 = NULL;
              t = SSLgetAnnotations(s_48);
              t_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_48);
              h_9 = t;
              t = SSLsetAnnotations(h_9, t_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_48;
          }
        LocalPopChoice(f_33);
        t = xtc_transform_file_2_0(v_7, y_7, t);
      }
    else
      {
        t = c_33;
        t = xtc_transform_term_2_0(z_7, b_8, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(c_6, default_usage_0_0, _id, e_6, t);
  return(t);
}
