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
ATerm term_c_33;
ATerm term_b_33;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_a_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_i_28;
ATerm term_e_28;
ATerm term_l_27;
ATerm term_g_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_g_19;
ATerm term_y_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
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
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_d_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_q_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_u_10, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_o_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_e_12, term_f_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_k_12, term_l_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_z_12, term_a_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_k_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_y_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_f_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_q_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_u_15, term_x_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_g_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_h_17, term_k_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_u_17, term_v_17);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_r_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_b_23);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_g_22);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_g_19);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_u_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_s_19);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_g_27);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_i_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_v_26, term_w_26);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_s_19);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_s_19);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_i_28, term_s_19);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__3, term_v_26, term_w_26, (ATerm) ATempty);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_q_29);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_k_32, term_s_19);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_t_19);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_7 (ATerm e_20, ATerm c_221, ATerm t);
ATerm at_suffix_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm c_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm k_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm q_6 (ATerm m_34, ATerm n_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm y_6 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm b_7 (ATerm t_82 (ATerm), ATerm p_189, ATerm k_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
static ATerm c_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm t_105 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_16 (ATerm y_15, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_7 (ATerm i_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm m_102 (ATerm), ATerm t);
static ATerm d_1 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t);
static ATerm r_6 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm n_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm p_102 (ATerm), ATerm t);
static ATerm t_6 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm u_6 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm v_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm w_6 (ATerm r_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm j_7 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm f_24 (ATerm x_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_6 (ATerm g_18, ATerm t);
static ATerm i_7 (ATerm y_32, ATerm z_32, ATerm t);
static ATerm z_6 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_26 (ATerm p_24, ATerm t);
static ATerm k_26 (ATerm w_24, ATerm x_24, ATerm y_24, ATerm t);
static ATerm l_26 (ATerm r_25, ATerm t_25, ATerm w_25, ATerm t);
static ATerm a_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm i_32 (ATerm f_31, ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm r_7 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm l_7 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm f_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_98 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_7 (ATerm p_53, ATerm q_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t);
static ATerm v_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm w_7 (ATerm e_53, ATerm f_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_7 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm p_7 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_108 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm parse_options_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,v_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_2 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = n_1;
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
        t = (ATerm) ATmakeAppl(sym__2, v_1, e_0);
        t = k_7(v_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
        LocalPopChoice(a_8);
      }
    else
      {
        t = q_2;
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = n_1;
              t = p_0(t);
              w_0 = t;
              {
                ATerm f_8 = t;
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
                            if((v_1 != t))
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
                    t = f_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, v_1, w_0);
              t = k_7(v_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = n_1;
              t = p_0(t);
              if((v_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      j_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_2;
    }
  else
    {
      t = j_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_7 (ATerm e_20, ATerm c_221, ATerm t)
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
  t = c_221;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm g_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_88(t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = g_8;
        {
          ATerm f_3 = NULL,i_3 = NULL,j_3 = NULL,m_1 = NULL,q_1 = NULL,u_0 = NULL;
          f_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_3 = ATgetFirst((ATermList) t);
              j_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_3);
          m_1 = t;
          t = j_3;
          t = l_3(t);
          q_1 = t;
          t = (ATerm) ATinsert(CheckATermList(q_1), i_3);
          u_0 = t;
          t = SSLsetAnnotations(u_0, m_1);
        }
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm r_3 = NULL,s_3 = NULL,u_3 = NULL,w_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,z_0 = NULL,y_0 = NULL;
    f_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_3 = ATgetFirst((ATermList) t);
        a_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_4);
    w_3 = t;
    t = z_3;
    t = x_87(t);
    c_4 = t;
    t = (ATerm) ATinsert(CheckATermList(a_4), c_4);
    y_0 = t;
    t = SSLsetAnnotations(y_0, w_3);
    d_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_3 = ATgetFirst((ATermList) t);
        u_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_4);
    r_3 = t;
    t = u_3;
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = (ATerm) ATinsert(CheckATermList(u_3), s_3);
    z_0 = t;
    t = SSLsetAnnotations(z_0, r_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, not_null(o_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,t_4 = NULL;
  ATerm j_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(c_97, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = j_8;
      {
        ATerm l_4 = NULL;
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_8 = ATgetFirst((ATermList) t);
              ATerm o_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_4;
          t = list_tokenize_1_0(c_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm p_8 = ATgetFirst((ATermList) t);
          ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, p_4);
        }
      else
        {
          ATerm g_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_8 = ATgetFirst((ATermList) t);
              ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_4;
          t = list_tokenize_1_0(c_97, t);
          g_5 = t;
          t = (ATerm) ATinsert(CheckATermList(g_5), p_4);
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
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,o_5 = NULL,p_5 = NULL,i_1 = NULL;
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
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, o_5);
  i_1 = t;
  t = SSLsetAnnotations(i_1, j_5);
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm q_5 = NULL;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_5, h_5);
      t = h_7(q_5, h_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  f_7 = t;
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL;
        t = SSL_filemode(f_7);
        if(match_cons(t, sym__2))
          {
            z_1 = ATgetArgument(t, 0);
            {
              ATerm c_9 = ATgetArgument(t, 1);
              if(((ATgetType(c_9) != AT_INT) || (ATgetInt((ATermInt) c_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_1;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        {
          ATerm g_2 = NULL,k_2 = NULL;
          t = term_d_9;
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_9, f_7);
          t = i_7(k_2, f_7, t);
          g_2 = t;
          t = SSL_perror(g_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm y_7 = NULL,b_8 = NULL;
  b_8 = t;
  {
    ATerm h_9 = t;
    int j_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL,h_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_k_9);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_k_9));
        t = j_7(v_14, h_8, t);
        t = filemode_0_0(t);
        e_8 = t;
        t = SSL_S_ISDIR(e_8);
        t = b_8;
        LocalPopChoice(j_9);
        {
          ATerm k_8 = NULL,l_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_q_9), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          k_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_8), term_r_9), v_14);
          l_8 = t;
          t = SSL_concat_strings(l_8);
        }
      }
    else
      {
        t = h_9;
        t = v_14;
      }
  }
  y_7 = t;
  t = SSL_copy(w_14, y_7);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL;
      t = term_v_9;
      a_9 = t;
      t = term_w_9;
      b_9 = t;
      t = term_x_9;
      t = r_7(a_9, b_9, t);
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = term_z_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = term_w_9;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            t = term_v_9;
            t_2 = t;
            t = term_w_9;
            u_2 = t;
            t = term_x_9;
            t = r_7(t_2, u_2, t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            t = term_z_9;
          }
      }
      r_2 = t;
      t = term_f_10;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_10, r_2);
      t = k_7(s_2, r_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_8;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm q_6 (ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_34, n_34);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = SSL_subtr(m_34, n_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL,m_9 = NULL,n_9 = NULL;
  t = term_q_10;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL,u_9 = NULL;
        t = term_v_9;
        p_9 = t;
        t = term_q_10;
        u_9 = t;
        t = term_t_10;
        t = r_7(p_9, u_9, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = term_u_10;
      }
  }
  g_9 = t;
  t = term_u_10;
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_9, term_u_10);
  t = q_6(g_9, n_9, t);
  m_9 = t;
  t = SSL_int_to_string(m_9);
  f_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_9), term_q_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm a_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_k_9);
      a_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_9, (ATerm) ATinsert(ATempty, term_k_9));
      t = j_7(y_9, a_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm y_6 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm h_10 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_10);
  return(t);
}
static ATerm b_7 (ATerm t_82 (ATerm), ATerm p_189, ATerm k_18, ATerm t)
{
  ATerm i_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_189, term_v_10);
  t = a_7(t);
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_10, k_18);
  t = t_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_10 = ATgetArgument(t, 0);
      if(match_cons(w_10, sym_Stream_1))
        {
          l_10 = ATgetArgument(w_10, 0);
        }
      else
        _fail(t);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(l_10, m_10, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm j_10 = NULL,k_10 = NULL;
  k_10 = t;
  t = xtc_new_file_0_0(t);
  j_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_10, k_10);
  t = b_7(n_0, j_10, k_10, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_10);
  t = xtc_transform_file_2_0(p_104, q_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL;
  a_12 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm k_3 = NULL,m_3 = NULL;
        t = SSL_int_to_string(b_12);
        k_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_11), k_3), term_x_10);
        m_3 = t;
        t = SSL_concat_strings(m_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_12 = ATgetArgument(t, 0);
          c_12 = ATgetArgument(t, 1);
          d_12 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_12);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_12), term_c_11), i_4), term_b_11), b_12);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = w_87(t);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(i_12);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  j_12 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_11 = ATgetArgument(t, 0);
              if((j_12 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_17), term_q_17), term_m_17), term_e_17), term_w_16), term_q_16), term_h_16), term_a_16), term_r_15), term_j_15), term_e_15), term_a_15), term_t_14), term_p_14), term_i_14), term_b_14), term_t_13), term_l_13), term_g_13), term_b_13), term_w_12), term_s_12), term_m_12), term_g_12), term_x_11), term_t_11), term_p_11), term_l_11);
        t = fetch_elem_1_0(t_0, t);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_12 = NULL,y_12 = NULL;
  o_12 = t;
  {
    ATerm y_17 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm f_18 = ATgetArgument(t, 0);
            y_12 = ATgetArgument(t, 1);
            {
              ATerm h_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        {
          ATerm j_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_5 = NULL,e_5 = NULL,f_5 = NULL;
              t = y_12;
              {
                ATerm o_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              c_5 = t;
              t = term_p_18;
              e_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_q_18);
              f_5 = t;
              t = SSL_printnl(e_5, f_5);
              t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, c_5), term_q_18));
              LocalPopChoice(l_18);
            }
          else
            {
              t = j_18;
              t = o_12;
            }
        }
      }
    else
      {
        t = y_17;
        t = o_12;
      }
  }
  t = o_12;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,s_13 = NULL;
  s_13 = t;
  t = fork_0_0(t);
  n_13 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = s_13;
        t = g_81(t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = SSL_waitpid(n_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            if(((ATgetType(v_18) != AT_INT) || (ATgetInt((ATermInt) v_18) != 0)))
              _fail(t);
            {
              ATerm w_18 = ATgetArgument(t, 1);
            }
            {
              ATerm x_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = s_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL;
  w_13 = t;
  t = t_105(t);
  t = xtc_find_0_0(t);
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      ATerm x_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_13, w_13);
      t = c_7(v_13, w_13, t);
      t = term_y_18;
      x_13 = t;
      t = SSL_exit(x_13);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = w_13;
  return(t);
}
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  static ATerm p_15 (ATerm t);
  static ATerm p_15 (ATerm t)
  {
    ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL;
    o_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_15 = ATgetFirst((ATermList) t);
        n_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_5 = NULL,x_5 = NULL,k_1 = NULL;
          t = SSLgetAnnotations(o_15);
          u_5 = t;
          t = n_15;
          t = p_15(t);
          x_5 = t;
          t = (ATerm) ATinsert(CheckATermList(x_5), l_15);
          k_1 = t;
          t = SSLsetAnnotations(k_1, u_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_15;
        t = b_88(t);
      }
    return(t);
  }
  t = p_15(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_13 = NULL,c_14 = NULL,e_14 = NULL;
  z_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_13;
    }
  else
    {
      static ATerm x_0 (ATerm t);
      static ATerm x_0 (ATerm t)
      {
        t = not_null(e_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_14 = ATgetFirst((ATermList) t);
          if(((e_14 != NULL) && (e_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_14;
      t = at_end_1_0(x_0, t);
    }
  return(t);
}
static ATerm i_16 (ATerm y_15, ATerm t)
{
  ATerm z_15 = NULL;
  t = SSL_explode_term(y_15);
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_15;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_1 (ATerm t);
            static ATerm b_1 (ATerm t)
            {
              t = e_16;
              return(t);
            }
            t = b_16;
            t = at_end_1_0(b_1, t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = i_16(f_16, t);
          }
      }
    }
  else
    {
      t = i_16(f_16, t);
    }
  return(t);
}
static ATerm e_7 (ATerm i_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,d_17 = NULL,f_17 = NULL,i_17 = NULL;
  y_16 = t;
  t = i_98(t);
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_16, u_35, s_35);
  t = s_7(u_16, u_35, s_35, t);
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL;
        t = term_g_19;
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_16, term_g_19);
        t = r_7(u_16, j_17, t);
        {
          ATerm h_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_19;
            }
        }
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_16 = ATgetFirst((ATermList) t);
      x_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_16, term_g_19, (ATerm) ATinsert(CheckATermList(x_16), (ATerm) ATinsert(CheckATermList(v_16), u_35)));
  t = lookup_table_0_1(u_16, t);
  i_17 = t;
  t = term_g_19;
  z_16 = t;
  t = (ATerm) ATinsert(CheckATermList(x_16), (ATerm) ATinsert(CheckATermList(v_16), u_35));
  d_17 = t;
  t = i_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(z_16, d_17, f_17, t);
  t = y_16;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  ATerm i_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL,k_6 = NULL;
      r_17 = t;
      t = term_m_19;
      k_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_17, term_m_19);
      t = i_7(r_17, k_6, t);
      l_17 = t;
      t = SSL_mkstemp(l_17);
      LocalPopChoice(k_19);
    }
  else
    {
      t = i_19;
      {
        ATerm t_17 = NULL;
        t = term_n_19;
        t_17 = t;
        t = SSL_perror(t_17);
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
  t = term_p_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_17 = NULL,z_17 = NULL,c_18 = NULL,e_18 = NULL,i_18 = NULL;
  t = P__tmpdir_0_0(t);
  e_18 = t;
  t = term_r_19;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_18, term_r_19);
  t = i_7(e_18, i_18, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_19;
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_17, term_s_19);
  t = e_7(c_1, z_17, c_18, t);
  t = SSL_close(x_17);
  t = z_17;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_18 = NULL,s_18 = NULL;
      t = m_18;
      t = xtc_new_file_0_0(t);
      r_18 = t;
      t = r_0(t);
      s_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATinsert(ATinsert(ATempty, r_18), term_w_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_18);
    }
  else
    {
      ATerm c_19 = NULL,d_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_18;
      t = xtc_new_file_0_0(t);
      c_19 = t;
      t = r_0(t);
      d_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_19), term_w_9), n_18), term_t_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm j_19 = NULL;
  j_19 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL,o_19 = NULL,q_19 = NULL;
        t = term_v_9;
        o_19 = t;
        t = term_q_10;
        q_19 = t;
        t = term_t_10;
        t = r_7(o_19, q_19, t);
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, term_r_11);
        t = geq_0_0(t);
        t = j_19;
        t = m_102(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = j_19;
      }
  }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(d_1, t);
  return(t);
}
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,i_20 = NULL,j_20 = NULL;
  b_20 = t;
  t = r_82(t);
  c_20 = t;
  t = term_p_18;
  i_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_20), c_20);
  j_20 = t;
  t = SSL_printnl(i_20, j_20);
  t = b_20;
  return(t);
}
static ATerm r_6 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_20 = NULL,p_20 = NULL;
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm s_20 = NULL,t_20 = NULL;
    s_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), s_20);
    t = r_7(not_null(k_20), s_20, t);
    t_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_20, t_20);
    return(t);
  }
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = lookup_table_0_1(k_20, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(p_20, t);
  t = map_1_0(e_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm v_20 = NULL;
  v_20 = t;
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
        t = term_v_9;
        y_20 = t;
        t = term_q_10;
        z_20 = t;
        t = term_t_10;
        t = r_7(y_20, z_20, t);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_20, term_b_17);
        t = geq_0_0(t);
        t = v_20;
        t = o_102(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = v_20;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
        t = term_v_9;
        i_21 = t;
        t = term_q_10;
        j_21 = t;
        t = term_t_10;
        t = r_7(i_21, j_21, t);
        h_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_21, term_q_13);
        t = geq_0_0(t);
        t = f_21;
        t = n_102(t);
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = f_21;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  {
    ATerm d_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
        t = term_v_9;
        s_21 = t;
        t = term_q_10;
        t_21 = t;
        t = term_t_10;
        t = r_7(s_21, t_21, t);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_21, term_v_11);
        t = geq_0_0(t);
        t = p_21;
        t = p_102(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = d_20;
        t = p_21;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = z_91(t);
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm v_21 = NULL;
      v_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, v_21);
      t = y_91(t);
      return(t);
    }
    t = fetch_1_0(f_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm u_6 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm n_22 (ATerm t);
  static ATerm n_22 (ATerm t)
  {
    ATerm h_22 = NULL,i_22 = NULL,k_22 = NULL;
    h_22 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_22 = ATgetFirst((ATermList) t);
            k_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_22;
              {
                static ATerm g_1 (ATerm t);
                static ATerm g_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = t_6(v_91, g_1, i_22, k_22, t);
              }
              t = n_22(t);
              LocalPopChoice(h_20);
            }
          else
            {
              t = g_20;
              {
                ATerm s_6 = NULL,t_7 = NULL,c_2 = NULL;
                t = SSLgetAnnotations(h_22);
                s_6 = t;
                t = k_22;
                t = n_22(t);
                t_7 = t;
                t = (ATerm) ATinsert(CheckATermList(t_7), i_22);
                c_2 = t;
                t = SSLsetAnnotations(c_2, s_6);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = n_22(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      if((h_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,z_22 = NULL,a_23 = NULL;
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_20 = ATgetArgument(t, 0);
            ATerm o_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = r_7(g_49, h_49, t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = (ATerm) ATempty;
      }
  }
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_22, i_49);
  t = u_6(h_1, z_22, i_49, t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, x_22);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(h_49, x_22, a_23, t);
  t = w_22;
  return(t);
}
static ATerm w_6 (ATerm r_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm i_23 = NULL,l_23 = NULL;
    if(match_cons(t, sym__2))
      {
        i_23 = ATgetArgument(t, 0);
        l_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, i_23, l_23);
    t = r_102(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm j_7 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm f_24 (ATerm x_23, ATerm t)
{
  t = SSL_fclose(x_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_24 = NULL,d_24 = NULL;
  d_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_24);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = f_24(d_24, t);
          }
      }
    }
  else
    {
      t = f_24(d_24, t);
    }
  return(t);
}
static ATerm x_6 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm i_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
static ATerm z_6 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_fopen(n_55, o_55);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_24);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_stdin_stream();
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_24 = NULL;
  t = SSL_stdout_stream();
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_24 = NULL;
  t = SSL_stderr_stream();
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_24);
  return(t);
}
static ATerm j_26 (ATerm p_24, ATerm t)
{
  ATerm r_24 = NULL;
  t = SSL_explode_term(p_24);
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_20 = ATgetArgument(t, 1);
        if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
          {
            r_24 = ATgetFirst((ATermList) w_20);
            {
              ATerm a_21 = (ATerm) ATgetNext((ATermList) w_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_26 (ATerm w_24, ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,d_25 = NULL,h_25 = NULL,w_2 = NULL;
  t = SSLgetAnnotations(y_24);
  d_25 = t;
  t = w_24;
  if(match_cons(t, sym_Path_1))
    {
      h_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_25, x_24);
  w_2 = t;
  t = SSLsetAnnotations(w_2, d_25);
  if(match_cons(t, sym__2))
    {
      z_24 = ATgetArgument(t, 0);
      a_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(z_24, a_25, t);
  return(t);
}
static ATerm l_26 (ATerm r_25, ATerm t_25, ATerm w_25, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL,c_26 = NULL,x_2 = NULL;
  t = SSLgetAnnotations(w_25);
  z_25 = t;
  t = SSL_is_string(r_25);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_26, t_25);
  x_2 = t;
  t = SSLsetAnnotations(x_2, z_25);
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(x_25, y_25, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym__2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      {
        ATerm b_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_26(e_26, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = b_21;
            {
              ATerm d_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_26(f_26, g_26, e_26, t);
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = d_21;
                  t = l_26(f_26, g_26, e_26, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_26(e_26, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_26 = NULL,q_26 = NULL,s_26 = NULL,c_27 = NULL;
  c_27 = t;
  {
    ATerm g_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_l_21);
        t = a_7(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = g_21;
        {
          ATerm r_8 = NULL,s_8 = NULL;
          t = term_m_21;
          s_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, c_27);
          t = i_7(s_8, c_27, t);
          r_8 = t;
          t = SSL_perror(r_8);
          _fail(t);
        }
      }
  }
  q_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(s_26, t);
  n_26 = t;
  t = q_26;
  t = fclose_0_0(t);
  t = n_26;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_27 = NULL,h_27 = NULL;
      f_27 = t;
      t = (ATerm) ATinsert(ATempty, term_w_21);
      h_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_27, (ATerm) ATinsert(ATempty, term_w_21));
      t = j_7(f_27, h_27, t);
      LocalPopChoice(u_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_21 = t;
            if((PushChoice() == 0))
              {
                ATerm i_27 = NULL,j_27 = NULL;
                i_27 = t;
                t = (ATerm) ATinsert(ATempty, term_k_9);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_27, (ATerm) ATinsert(ATempty, term_k_9));
                t = j_7(i_27, j_27, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_21;
              }
            t = debug_1_0(l_1, t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(t_1, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm r_28 = NULL,t_28 = NULL,u_28 = NULL;
  r_28 = t;
  t = term_p_18;
  t_28 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  u_28 = t;
  t = SSL_printnl(t_28, u_28);
  t = r_28;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym__3))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
      x_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_6(v_28, w_28, x_28, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm y_28 = NULL,b_29 = NULL,c_29 = NULL;
  y_28 = t;
  t = term_p_18;
  b_29 = t;
  t = (ATerm) ATinsert(ATempty, term_d_22);
  c_29 = t;
  t = SSL_printnl(b_29, c_29);
  t = y_28;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_29 = NULL,f_29 = NULL,g_29 = NULL;
  d_29 = t;
  t = term_p_18;
  f_29 = t;
  t = (ATerm) ATinsert(ATempty, term_c_22);
  g_29 = t;
  t = SSL_printnl(f_29, g_29);
  t = d_29;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm k_27 = NULL,p_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,a_28 = NULL,d_28 = NULL,f_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  k_27 = t;
  t = if_verbose5_1_0(p_1, t);
  {
    ATerm e_22 = t;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL,o_28 = NULL;
        t = term_f_22;
        n_28 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, k_27);
        o_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Imported_1, k_27));
        t = r_7(n_28, o_28, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_22;
      }
  }
  s_27 = t;
  t = term_f_22;
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, term_g_22, (ATerm) ATinsert(ATempty, k_27));
  t = lookup_table_0_1(d_28, t);
  l_28 = t;
  t = term_g_22;
  f_28 = t;
  t = (ATerm) ATinsert(ATempty, k_27);
  j_28 = t;
  t = l_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(f_28, j_28, k_28, t);
  t = s_27;
  t = if_verbose4_1_0(s_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_1, t);
  p_27 = t;
  t = term_f_22;
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, p_27);
  t = w_6(w_1, a_28, p_27, t);
  t = if_verbose6_1_0(x_1, t);
  t = term_f_22;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, k_27), (ATerm) ATempty);
  t = lookup_table_0_1(u_27, t);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, k_27);
  v_27 = t;
  t = (ATerm) ATempty;
  w_27 = t;
  t = y_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(v_27, w_27, x_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_22, (ATerm)ATmakeAppl(sym_Imported_1, k_27), (ATerm) ATempty);
  t = if_verbose4_1_0(y_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  c_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_30;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_30 = ATgetFirst((ATermList) t);
          e_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm j_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 = NULL,l_9 = NULL,o_9 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(c_30);
            i_9 = t;
            t = d_30;
            t = c_96(t);
            l_9 = t;
            t = e_30;
            t = filter_1_0(c_96, t);
            o_9 = t;
            t = (ATerm) ATinsert(CheckATermList(o_9), l_9);
            a_3 = t;
            t = SSLsetAnnotations(a_3, i_9);
            LocalPopChoice(l_22);
          }
        else
          {
            t = j_22;
            t = e_30;
            t = filter_1_0(c_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  static ATerm j_30 (ATerm t);
  static ATerm j_30 (ATerm t)
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        t = j_30(t);
        LocalPopChoice(o_22);
      }
    else
      {
        t = m_22;
        t = p_85(t);
      }
    return(t);
  }
  t = j_30(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_30 = NULL,l_30 = NULL;
      t = term_v_9;
      k_30 = t;
      t = term_r_22;
      l_30 = t;
      t = term_s_22;
      t = r_7(k_30, l_30, t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_30 = NULL;
            t = term_v_22;
            o_30 = t;
            t = SSL_getenv(o_30);
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm x_30 = NULL,a_31 = NULL;
  t = term_f_22;
  x_30 = t;
  t = term_b_23;
  a_31 = t;
  t = term_c_23;
  t = r_7(x_30, a_31, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_23;
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
  t = term_e_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = if_verbose5_1_0(a_2, t);
  s_30 = t;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_30 = NULL,u_30 = NULL;
        t = term_f_22;
        t_30 = t;
        t = term_g_22;
        u_30 = t;
        t = term_j_23;
        t = r_7(t_30, u_30, t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm w_30 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          w_30 = t;
          t = repeat_2_0(d_2, _id, t);
          t = w_30;
        }
      }
  }
  t = s_30;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm i_32 (ATerm f_31, ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  t = term_f_22;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, f_31);
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, f_31));
  t = r_7(i_31, j_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_23 = ATgetFirst((ATermList) t);
      if(match_cons(m_23, sym__2))
        {
          ATerm o_23 = ATgetArgument(m_23, 0);
          h_31 = ATgetArgument(m_23, 1);
        }
      else
        _fail(t);
      {
        ATerm n_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_31;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_f_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_31 = NULL,r_31 = NULL,t_31 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      t_31 = t;
      if(match_cons(t, sym__2))
        {
          p_31 = ATgetArgument(t, 0);
          r_31 = ATgetArgument(t, 1);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_31 = NULL,x_31 = NULL,a_32 = NULL;
                t = term_f_22;
                x_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_31);
                a_32 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_22, (ATerm) ATmakeAppl(sym_Tool_1, p_31));
                t = r_7(x_31, a_32, t);
                {
                  static ATerm m_2 (ATerm t);
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_31 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(m_2, t);
                }
                t = not_null(w_31);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = i_32(t_31, t);
              }
          }
        }
      else
        {
          t = i_32(t_31, t);
        }
      t = if_verbose5_1_0(n_2, t);
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm h_32 = NULL,b_10 = NULL,c_10 = NULL;
        h_32 = t;
        t = term_p_18;
        b_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), h_32), term_u_23);
        c_10 = t;
        t = SSL_printnl(b_10, c_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), h_32), term_u_23);
        t = if_verbose5_1_0(p_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_w_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_32 = NULL,s_32 = NULL;
      s_32 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_32 = ATgetArgument(t, 0);
          {
            ATerm g_10 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(s_32);
            g_10 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_32);
            d_3 = t;
            t = SSLsetAnnotations(d_3, g_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_32;
        }
      LocalPopChoice(z_23);
      {
        static ATerm z_2 (ATerm t);
        static ATerm z_2 (ATerm t)
        {
          ATerm t_32 = NULL,u_32 = NULL;
          t = term_s_19;
          t = y_115(t);
          t = xtc_find_0_0(t);
          t_32 = t;
          t = term_s_19;
          t = pass_v_verbose_0_0(t);
          u_32 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_32), t_32), term_c_24), term_a_24);
          return(t);
        }
        t = xtc_transform_file_2_0(y_2, z_2, t);
      }
    }
  else
    {
      t = y_23;
      {
        static ATerm c_3 (ATerm t);
        static ATerm c_3 (ATerm t)
        {
          ATerm x_32 = NULL,a_33 = NULL;
          t = term_s_19;
          t = y_115(t);
          t = xtc_find_0_0(t);
          x_32 = t;
          t = term_s_19;
          t = pass_v_verbose_0_0(t);
          a_33 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_33), x_32), term_c_24), term_a_24);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, c_3, t);
      }
    }
  return(t);
}
static ATerm r_7 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm d_33 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(d_50, d_33, t);
  return(t);
}
static ATerm l_7 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  g_33 = t;
  {
    ATerm e_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = r_7(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_24 = ATgetFirst((ATermList) t);
            f_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_24);
        {
          ATerm h_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, f_33);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(p_48, f_33, h_33, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, f_33);
        }
      }
    else
      {
        t = e_24;
        {
          ATerm l_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_7(p_48, l_33, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = g_33;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL;
  y_33 = t;
  t = f_98(t);
  x_33 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL;
        t = term_g_19;
        c_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_g_19);
        t = r_7(x_33, c_34, t);
        {
          ATerm o_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_24;
            }
        }
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_33 = ATgetFirst((ATermList) t);
      v_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_33, term_g_19, v_33);
  t = lookup_table_0_1(x_33, t);
  b_34 = t;
  t = term_g_19;
  z_33 = t;
  t = b_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(z_33, v_33, a_34, t);
  t = w_33;
  {
    static ATerm e_3 (ATerm t);
    static ATerm e_3 (ATerm t)
    {
      ATerm d_34 = NULL;
      d_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_33, d_34);
      t = l_7(x_33, d_34, t);
      return(t);
    }
    t = map_1_0(e_3, t);
  }
  t = y_33;
  return(t);
}
ATerm restore_always_2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_101(t);
      t = z_101(t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = q_24;
      t = z_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,o_34 = NULL,q_34 = NULL,r_34 = NULL,u_34 = NULL,v_34 = NULL;
  l_34 = t;
  t = e_98(t);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_34, term_g_19);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_24 = ATgetArgument(t, 0);
            ATerm b_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_19;
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_34, term_g_19);
        t = r_7(k_34, z_34, t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = (ATerm) ATempty;
      }
  }
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_34, term_g_19, (ATerm) ATinsert(CheckATermList(o_34), (ATerm) ATempty));
  t = lookup_table_0_1(k_34, t);
  v_34 = t;
  t = term_g_19;
  q_34 = t;
  t = (ATerm) ATinsert(CheckATermList(o_34), (ATerm) ATempty);
  r_34 = t;
  t = v_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(q_34, r_34, u_34, t);
  t = l_34;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  {
    ATerm c_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(l_35);
        LocalPopChoice(e_25);
      }
    else
      {
        t = c_25;
        t = l_35;
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_p_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm d_35 = NULL;
  static ATerm h_3 (ATerm t);
  static ATerm h_3 (ATerm t)
  {
    ATerm e_35 = NULL;
    e_35 = t;
    {
      ATerm f_25 = t;
      int g_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_35 = NULL,g_35 = NULL;
          t = term_p_19;
          f_35 = t;
          t = term_g_19;
          g_35 = t;
          t = term_i_25;
          t = r_7(f_35, g_35, t);
          LocalPopChoice(g_25);
        }
      else
        {
          t = f_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_35 != NULL) && (d_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_35 = ATgetFirst((ATermList) t);
        {
          ATerm j_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_35;
    t = map_1_0(q_3, t);
    t = e_35;
    t = end_scope_1_0(t_3, t);
    return(t);
  }
  t = begin_scope_1_0(g_3, t);
  t = restore_always_2_0(c_105, h_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  z_35 = t;
  t = term_s_19;
  t = whoami_0_0(t);
  a_36 = t;
  t = term_p_18;
  c_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_25), a_36), term_m_25);
  d_36 = t;
  t = SSL_printnl(c_36, d_36);
  t = term_u_10;
  b_36 = t;
  t = SSL_exit(b_36);
  t = z_35;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  if(match_string(t, "-k"))
    {
      t = h_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_36;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  t = SSL_string_to_int(k_36);
  l_36 = t;
  t = term_q_25;
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, l_36);
  t = u_7(m_36, l_36, t);
  t = k_36;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, x_3, y_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  if(match_string(t, "-S"))
    {
      t = q_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_36;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  t = term_q_10;
  r_36 = t;
  t = term_u_25;
  s_36 = t;
  t = term_v_25;
  t = u_7(r_36, s_36, t);
  t = term_a_26;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm t_36 = NULL,w_36 = NULL,x_36 = NULL;
  t_36 = t;
  t = SSL_string_to_int(t_36);
  w_36 = t;
  t = term_q_10;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_10, w_36);
  t = u_7(x_36, w_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_36);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_37 = NULL,c_37 = NULL;
  t = term_h_26;
  a_37 = t;
  t = term_s_19;
  c_37 = t;
  t = term_i_26;
  t = u_7(a_37, c_37, t);
  t = term_m_26;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_4, e_4, g_4, t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = p_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, k_4, m_4, t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = Option_3_0(n_4, o_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  t = term_v_9;
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_9, p_53, q_53);
  t = lookup_table_0_1(d_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(p_53, q_53, e_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_v_9, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_37 = NULL,q_37 = NULL,t_37 = NULL;
      t = term_s_19;
      t = g_0(t);
      l_37 = t;
      t = term_v_26;
      q_37 = t;
      t = term_w_26;
      t_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_26, term_w_26, l_37);
      t = s_7(q_37, t_37, l_37, t);
      _fail(t);
    }
  else
    {
      ATerm a_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_37;
      t = d_0(t);
      t = term_s_19;
      t = f_0(t);
      a_38 = t;
      t = (ATerm) ATinsert(CheckATermList(k_37), a_38);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm d_38 = NULL;
  d_38 = t;
  if(match_string(t, "-o"))
    {
      t = d_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_38;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  h_38 = t;
  t = term_w_9;
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, h_38);
  t = u_7(i_38, h_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_38);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, u_4, t);
  return(t);
}
static ATerm s_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm k_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,s_38 = NULL;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_27 = ATgetArgument(t, 0);
            ATerm b_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = r_7(j_48, k_48, t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = (ATerm) ATempty;
      }
  }
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(n_38), i_48));
  t = lookup_table_0_1(j_48, t);
  s_38 = t;
  t = (ATerm) ATinsert(CheckATermList(n_38), i_48);
  o_38 = t;
  t = s_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(k_48, o_38, p_38, t);
  t = k_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
      t = term_s_19;
      t = o_0(t);
      h_39 = t;
      t = term_v_26;
      i_39 = t;
      t = term_w_26;
      j_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_26, term_w_26, h_39);
      t = s_7(i_39, j_39, h_39, t);
      _fail(t);
    }
  else
    {
      ATerm n_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_39 = ATgetFirst((ATermList) t);
          e_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_39 = ATgetFirst((ATermList) t);
          g_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_39;
      t = l_0(t);
      t = f_39;
      t = m_0(t);
      n_39 = t;
      t = (ATerm) ATinsert(CheckATermList(g_39), n_39);
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_39 = NULL;
  p_39 = t;
  if(match_string(t, "-i"))
    {
      t = p_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_39;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  q_39 = t;
  t = term_t_19;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_19, q_39);
  t = u_7(r_39, q_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_39);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_4, w_4, x_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_19;
  t = whoami_0_0(t);
  s_39 = t;
  t = term_p_18;
  u_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_27), s_39);
  v_39 = t;
  t = SSL_printnl(u_39, v_39);
  t = term_u_10;
  t_39 = t;
  t = SSL_exit(t_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_v_9;
  w_39 = t;
  t = term_g_27;
  x_39 = t;
  t = term_l_27;
  t = r_7(w_39, x_39, t);
  return(t);
}
static ATerm m_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
  z_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_39;
      t = y_94(t);
    }
  else
    {
      ATerm e_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_40 = ATgetFirst((ATermList) t);
          b_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_40;
      t = foldr_2_0(y_94, z_94, t);
      e_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_40, e_40);
      t = z_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm f_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(f_11, h_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_40 = NULL,y_10 = NULL,z_10 = NULL;
  t = times_0_0(t);
  z_10 = t;
  t = SSL_explode_term(z_10);
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10;
  t = foldr_2_0(y_4, z_4, t);
  h_40 = t;
  t = SSL_TicksToSeconds(h_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym__2))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_40;
        if((t_40 != t))
          {
            _fail(t);
          }
        t = s_40;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
        {
          ATerm t_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_40, u_40);
              LocalPopChoice(z_27);
            }
          else
            {
              t = t_27;
              t = SSL_gtr(t_40, u_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm b_41 = NULL;
  b_41 = t;
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_41 = NULL,g_41 = NULL,h_41 = NULL;
        t = term_v_9;
        g_41 = t;
        t = term_q_10;
        h_41 = t;
        t = term_t_10;
        t = r_7(g_41, h_41, t);
        d_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_41, term_u_10);
        t = geq_0_0(t);
        t = b_41;
        t = k_102(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = b_41;
      }
  }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL;
  t = run_time_0_0(t);
  j_41 = t;
  t = term_s_19;
  t = whoami_0_0(t);
  k_41 = t;
  t = term_p_18;
  m_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_41), term_b_11), k_41);
  n_41 = t;
  t = SSL_printnl(m_41, n_41);
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_41), term_b_11), k_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_25;
  o_41 = t;
  t = SSL_exit(o_41);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  z_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_41 = ATgetArgument(t, 0);
          {
            ATerm z_11 = NULL,n_3 = NULL;
            t = SSLgetAnnotations(z_41);
            z_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_41);
            n_3 = t;
            t = SSLsetAnnotations(n_3, z_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,s_41 = NULL;
      t = term_v_9;
      r_41 = t;
      t = term_i_28;
      s_41 = t;
      t = term_m_28;
      t = r_7(r_41, s_41, t);
      LocalPopChoice(h_28);
    }
  else
    {
      t = g_28;
      t = fetch_1_0(b_5, t);
    }
  t = v_106(t);
  return(t);
}
static ATerm v_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm b_42 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_42);
  return(t);
}
static ATerm w_7 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm k_42 = NULL;
  t = table_hashtable_0_0(t);
  k_42 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL;
        t = k_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_7(v_49, n_12, t);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        {
          ATerm c_13 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = k_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(v_49, c_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_42);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,s_42 = NULL,t_42 = NULL;
  o_42 = t;
  t = term_s_28;
  s_42 = t;
  t = term_z_28;
  t_42 = t;
  t = o_42;
  t = new_hashtable_0_2(s_42, t_42, t);
  p_42 = t;
  t = o_42;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(o_42, p_42, q_42, t);
  t = o_42;
  return(t);
}
static ATerm o_7 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_42);
  return(t);
}
static ATerm p_7 (ATerm l_53, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_hashtable_destroy(l_53);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_42 = NULL;
  t = SSL_table_hashtable();
  w_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  x_42 = t;
  t = table_hashtable_0_0(t);
  y_42 = t;
  t = lookup_table_0_1(x_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(a_43, t);
  t = y_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(x_42, z_42, t);
  t = x_42;
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm p_43 (ATerm t);
  static ATerm p_43 (ATerm t)
  {
    ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
    m_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_43;
      }
    else
      {
        ATerm j_13 = NULL,o_13 = NULL,p_13 = NULL,a_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_43 = ATgetFirst((ATermList) t);
            o_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_43);
        j_13 = t;
        t = n_43;
        t = k_87(t);
        o_13 = t;
        t = o_43;
        t = p_43(t);
        p_13 = t;
        t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
        a_6 = t;
        t = SSLsetAnnotations(a_6, j_13);
      }
    return(t);
  }
  t = p_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_43 = NULL,y_43 = NULL;
        static ATerm d_5 (ATerm t);
        static ATerm d_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_43)), not_null(y_43));
          return(t);
        }
        t = t_43;
        t = j_0(t);
        if(((x_43 != NULL) && (x_43 != t)))
          _fail(t);
        else
          x_43 = t;
        t = s_43;
        t = h_0(t);
        if(((y_43 != NULL) && (y_43 != t)))
          _fail(t);
        else
          y_43 = t;
        t = t_43;
        t = reverse_acc_2_0(h_0, d_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_19;
      t = j_0(t);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,c_6 = NULL;
  g_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_44);
  e_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_44);
  c_6 = t;
  t = SSLsetAnnotations(c_6, e_44);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm i_44 = NULL;
  i_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_44), term_a_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL;
  ATerm e_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_44 = NULL,d_44 = NULL;
      t = term_v_9;
      c_44 = t;
      t = term_g_27;
      d_44 = t;
      t = term_l_27;
      t = r_7(c_44, d_44, t);
      LocalPopChoice(h_29);
    }
  else
    {
      t = e_29;
      t = fetch_1_0(m_5, t);
    }
  t = term_i_29;
  t = echo_0_0(t);
  t = term_v_26;
  a_44 = t;
  t = term_w_26;
  b_44 = t;
  t = term_j_29;
  t = r_7(a_44, b_44, t);
  t = reverse_acc_2_0(_id, n_5, t);
  t = map_1_0(r_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm f_45 (ATerm t);
  static ATerm f_45 (ATerm t)
  {
    ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
    c_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_45 = ATgetFirst((ATermList) t);
        e_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_14 = NULL,l_14 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(c_45);
          g_14 = t;
          t = d_45;
          t = u_87(t);
          l_14 = t;
          t = (ATerm) ATinsert(CheckATermList(e_45), l_14);
          i_6 = t;
          t = SSLsetAnnotations(i_6, g_14);
          LocalPopChoice(l_29);
        }
      else
        {
          t = k_29;
          {
            ATerm x_14 = NULL,g_15 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(c_45);
            x_14 = t;
            t = e_45;
            t = f_45(t);
            g_15 = t;
            t = (ATerm) ATinsert(CheckATermList(g_15), d_45);
            n_6 = t;
            t = SSLsetAnnotations(n_6, x_14);
          }
        }
    }
    return(t);
  }
  t = f_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
  j_45 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_29 = ATgetFirst((ATermList) t);
                ATerm p_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_45;
          }
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATinsert(ATempty, j_45);
      }
  }
  k_45 = t;
  t = term_z_9;
  l_45 = t;
  t = SSL_printnl(l_45, k_45);
  t = j_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL;
  t = term_v_9;
  p_45 = t;
  t = term_g_27;
  q_45 = t;
  t = term_l_27;
  t = r_7(p_45, q_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  t = term_q_29;
  r_45 = t;
  t = term_s_19;
  s_45 = t;
  t = term_r_29;
  t = u_7(r_45, s_45, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL;
  t = term_q_29;
  v_45 = t;
  t = term_s_19;
  w_45 = t;
  t = term_r_29;
  t = u_7(v_45, w_45, t);
  t = term_w_19;
  t_45 = t;
  t = term_s_19;
  u_45 = t;
  t = term_t_29;
  t = u_7(t_45, u_45, t);
  t = term_u_29;
  return(t);
}
static ATerm b_6 (ATerm t)
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
      t = Option_3_0(s_5, v_5, w_5, t);
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      t = Option_3_0(y_5, z_5, b_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,x_7 = NULL;
  c_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_45 = ATgetFirst((ATermList) t);
      z_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  x_45 = t;
  t = y_45;
  t = z_73(t);
  a_46 = t;
  t = z_45;
  t = a_74(t);
  b_46 = t;
  t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
  x_7 = t;
  t = SSLsetAnnotations(x_7, x_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_108 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,m_46 = NULL,n_46 = NULL,t_8 = NULL;
  h_46 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_30;
        t = t_108(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
  }
  t = h_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_46 = ATgetFirst((ATermList) t);
      k_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_46);
  i_46 = t;
  t = term_g_27;
  n_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_27, j_46);
  t = u_7(n_46, j_46, t);
  t = k_46;
  {
    static ATerm x_46 (ATerm t);
    static ATerm x_46 (ATerm t)
    {
      ATerm b_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_46 = NULL;
              q_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_46;
              LocalPopChoice(h_30);
            }
          else
            {
              t = g_30;
              t = t_108(t);
              t = Cons_2_0(_id, x_46, t);
            }
          LocalPopChoice(f_30);
        }
      else
        {
          t = b_30;
          {
            ATerm t_46 = NULL,u_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_46 = ATgetFirst((ATermList) t);
                u_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATmakeAppl(sym_Undefined_1, t_46));
          }
        }
      return(t);
    }
    t = x_46(t);
  }
  m_46 = t;
  t = (ATerm) ATinsert(CheckATermList(m_46), (ATerm) ATmakeAppl(sym_Program_1, j_46));
  t_8 = t;
  t = SSLsetAnnotations(t_8, i_46);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  if(match_string(t, "--help"))
    {
      t = k_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_47;
        }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  t = term_i_28;
  l_47 = t;
  t = term_s_19;
  m_47 = t;
  t = term_i_30;
  t = u_7(l_47, m_47, t);
  t = term_m_30;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  e_47 = t;
  t = term_v_26;
  f_47 = t;
  t = term_p_30;
  t = lookup_table_0_1(f_47, t);
  j_47 = t;
  t = term_w_26;
  g_47 = t;
  t = (ATerm) ATempty;
  h_47 = t;
  t = j_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(g_47, h_47, i_47, t);
  t = e_47;
  {
    static ATerm d_6 (ATerm t);
    static ATerm d_6 (ATerm t)
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_108(t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          {
            ATerm v_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_6, f_6, g_6, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = v_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_6, t);
  }
  {
    ATerm z_30 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_47 = NULL;
        x_47 = t;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_15 = NULL;
              t = x_47;
              {
                ATerm e_31 = t;
                int g_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_15 = NULL,w_15 = NULL;
                    t = term_v_9;
                    v_15 = t;
                    t = term_i_28;
                    w_15 = t;
                    t = term_m_28;
                    t = r_7(v_15, w_15, t);
                    LocalPopChoice(g_31);
                  }
                else
                  {
                    t = e_31;
                    t = fetch_1_0(h_6, t);
                  }
              }
              t = x_47;
              t = default_system_usage_0_0(t);
              t = term_u_25;
              t_15 = t;
              t = SSL_exit(t_15);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
                t = term_v_9;
                k_16 = t;
                t = term_q_29;
                l_16 = t;
                t = term_k_31;
                t = r_7(k_16, l_16, t);
                t = x_47;
                t = default_system_about_0_0(t);
                t = term_u_25;
                j_16 = t;
                t = SSL_exit(j_16);
              }
            }
        }
        LocalPopChoice(b_31);
      }
    else
      {
        t = z_30;
        {
          ATerm l_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
              static ATerm j_6 (ATerm t);
              static ATerm j_6 (ATerm t)
              {
                ATerm c_48 = NULL,d_48 = NULL,l_48 = NULL,v_8 = NULL;
                l_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_48);
                c_48 = t;
                t = d_48;
                if(((c_47 != NULL) && (c_47 != t)))
                  _fail(t);
                else
                  c_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_48);
                v_8 = t;
                t = SSLsetAnnotations(v_8, c_48);
                return(t);
              }
              t = fetch_1_0(j_6, t);
              t = term_p_18;
              z_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_47)), term_n_31);
              a_48 = t;
              t = SSL_printnl(z_47, a_48);
              t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_47)), term_n_31));
              t = default_system_usage_0_0(t);
              t = term_u_10;
              y_47 = t;
              t = SSL_exit(y_47);
              LocalPopChoice(m_31);
            }
          else
            {
              t = l_31;
            }
        }
      }
  }
  d_47 = t;
  t = term_v_26;
  t = table_destroy_0_0(t);
  t = d_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  t = parse_options_1_0(x_106, t);
  t_48 = t;
  t = term_o_31;
  t = table_create_0_0(t);
  t = term_o_31;
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_31, term_q_31, t_48);
  t = lookup_table_0_1(u_48, t);
  x_48 = t;
  t = term_q_31;
  v_48 = t;
  t = x_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(v_48, t_48, w_48, t);
  t = t_48;
  t = z_106(t);
  {
    ATerm s_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_106, t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = s_31;
        {
          ATerm v_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_31);
            }
          else
            {
              t = v_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm z_31 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(b_32);
    }
  else
    {
      t = z_31;
      {
        ATerm c_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_32);
          }
        else
          {
            t = c_32;
            {
              ATerm e_32 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_6, p_6, d_7, t);
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = e_32;
                  {
                    ATerm g_32 = t;
                    int j_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(j_32);
                      }
                    else
                      {
                        t = g_32;
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
static ATerm m_6 (ATerm t)
{
  t = xtc_temp_files_1_0(g_7, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  t = term_k_32;
  b_49 = t;
  t = term_s_19;
  c_49 = t;
  t = term_l_32;
  t = u_7(b_49, c_49, t);
  t = term_m_32;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_49 = NULL,f_49 = NULL,l_49 = NULL;
      t = term_v_9;
      f_49 = t;
      t = term_t_19;
      l_49 = t;
      t = term_q_32;
      t = r_7(f_49, l_49, t);
      e_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_49);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      t = term_f_10;
    }
  t = xtc_sglr_1_0(n_7, t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_49 = NULL,a_50 = NULL;
        a_50 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_49 = ATgetArgument(t, 0);
            {
              ATerm p_16 = NULL,e_9 = NULL;
              t = SSLgetAnnotations(a_50);
              p_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_49);
              e_9 = t;
              t = SSLsetAnnotations(e_9, p_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_50;
          }
        LocalPopChoice(w_32);
        t = xtc_transform_file_2_0(q_7, pass_verbose_0_0, t);
      }
    else
      {
        t = v_32;
        t = xtc_transform_term_2_0(z_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_b_33;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_6, default_usage_0_0, _id, m_6, t);
  return(t);
}
