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
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_j_31;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_d_30;
ATerm term_y_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_p_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_x_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_s_24;
ATerm term_p_24;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_t_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_b_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_t_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_b_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_10, term_i_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_11, term_m_11, term_n_11);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_r_11, term_t_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_d_12, term_f_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_o_12, term_u_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_c_13);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_m_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_t_17, term_v_17);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_b_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_j_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_q_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym__2, term_v_22, term_n_22);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_d_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_25);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_c_23);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_h_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_y_27);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_y_24);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_c_23);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_c_23);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_y_27, term_c_23);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__3, term_v_24, term_y_24, (ATerm) ATempty);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_z_28);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_d_23);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm h_7 (ATerm e_20, ATerm p_223, ATerm t);
ATerm at_suffix_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm a_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm k_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_11 (ATerm c_11, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_6 (ATerm m_34, ATerm n_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_6 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm s_6 (ATerm r_82 (ATerm), ATerm c_192, ATerm k_18, ATerm t);
static ATerm w_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t);
static ATerm t_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm e_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm p_82 (ATerm), ATerm t);
static ATerm v_6 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm m_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm l_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm x_6 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm y_6 (ATerm t_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm z_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm a_7 (ATerm p_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm j_7 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm z_21 (ATerm s_21, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_7 (ATerm g_18, ATerm t);
static ATerm c_7 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_24 (ATerm q_22, ATerm t);
static ATerm d_24 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm t);
static ATerm e_24 (ATerm n_23, ATerm o_23, ATerm p_23, ATerm t);
static ATerm d_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm a_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm f_30 (ATerm b_29, ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm e_7 (ATerm g_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm i_7 (ATerm y_32, ATerm z_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm abox2text_0_0 (ATerm t);
static ATerm r_7 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm l_7 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_98 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm need_help_1_0 (ATerm t_106 (ATerm), ATerm t);
static ATerm v_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm w_7 (ATerm e_53, ATerm f_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_7 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm p_7 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm u_7 (ATerm p_53, ATerm q_53, ATerm t);
static ATerm s_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,j_1 = NULL;
  h_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_2 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = h_1;
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
        t = (ATerm) ATmakeAppl(sym__2, j_1, e_0);
        t = k_7(j_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
        LocalPopChoice(w_6);
      }
    else
      {
        t = q_2;
        {
          ATerm f_7 = t;
          int g_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_1 = NULL;
              t = h_1;
              t = p_0(t);
              d_1 = t;
              {
                ATerm q_7 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_1 = NULL;
                    g_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_1;
                          }
                        else
                          {
                            t = g_1;
                            if((j_1 != t))
                              {
                                _fail(t);
                              }
                            t = g_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_1, d_1);
              t = k_7(j_1, d_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              LocalPopChoice(g_7);
            }
          else
            {
              t = f_7;
              t = h_1;
              t = p_0(t);
              if((j_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_1 = ATgetFirst((ATermList) t);
      z_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_1;
    }
  else
    {
      t = z_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm h_7 (ATerm e_20, ATerm p_223, ATerm t)
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
  t = p_223;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  static ATerm n_3 (ATerm t);
  static ATerm n_3 (ATerm t)
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_88(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        {
          ATerm h_3 = NULL,i_3 = NULL,m_3 = NULL,r_1 = NULL,u_1 = NULL,k_0 = NULL;
          h_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_3 = ATgetFirst((ATermList) t);
              m_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_3);
          r_1 = t;
          t = m_3;
          t = n_3(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), i_3);
          k_0 = t;
          t = SSLsetAnnotations(k_0, r_1);
        }
      }
    return(t);
  }
  t = n_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm t_3 = NULL,v_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL,g_4 = NULL,v_0 = NULL,t_0 = NULL;
    g_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_4 = ATgetFirst((ATermList) t);
        b_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_4);
    z_3 = t;
    t = a_4;
    t = v_87(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(b_4), d_4);
    t_0 = t;
    t = SSLsetAnnotations(t_0, z_3);
    e_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_4);
    t_3 = t;
    t = y_3;
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), v_3);
    v_0 = t;
    t = SSLsetAnnotations(v_0, t_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, not_null(q_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm s_4 = NULL,v_4 = NULL;
  ATerm b_8 = t;
  int c_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(a_97, t);
      LocalPopChoice(c_8);
    }
  else
    {
      t = b_8;
      {
        ATerm n_4 = NULL;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm e_8 = ATgetFirst((ATermList) t);
              ATerm f_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_4;
          t = list_tokenize_1_0(a_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm i_8 = ATgetFirst((ATermList) t);
          ATerm j_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, s_4);
        }
      else
        {
          ATerm g_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_8 = ATgetFirst((ATermList) t);
              ATerm o_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_4;
          t = list_tokenize_1_0(a_97, t);
          g_5 = t;
          t = (ATerm) ATinsert(CheckATermList(g_5), s_4);
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
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL,p_5 = NULL,a_1 = NULL;
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
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_5, n_5);
  a_1 = t;
  t = SSLsetAnnotations(a_1, j_5);
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
  ATerm n_7 = NULL;
  n_7 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL;
        t = SSL_filemode(n_7);
        if(match_cons(t, sym__2))
          {
            f_2 = ATgetArgument(t, 0);
            {
              ATerm r_8 = ATgetArgument(t, 1);
              if(((ATgetType(r_8) != AT_INT) || (ATgetInt((ATermInt) r_8) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_2;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm m_2 = NULL,n_2 = NULL;
          t = term_t_8;
          n_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_8, n_7);
          t = i_7(n_2, n_7, t);
          m_2 = t;
          t = SSL_perror(m_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm k_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  a_8 = t;
  {
    ATerm v_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL,g_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_8);
        g_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_y_8));
        t = j_7(v_14, g_8, t);
        t = filemode_0_0(t);
        d_8 = t;
        t = SSL_S_ISDIR(d_8);
        t = a_8;
        LocalPopChoice(x_8);
        {
          ATerm h_8 = NULL,k_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_8), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          h_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_8), term_b_9), v_14);
          k_8 = t;
          t = SSL_concat_strings(k_8);
        }
      }
    else
      {
        t = v_8;
        t = v_14;
      }
  }
  z_7 = t;
  t = SSL_copy(w_14, z_7);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm f_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_9 = NULL,g_9 = NULL;
      t = term_i_9;
      e_9 = t;
      t = term_j_9;
      g_9 = t;
      t = term_k_9;
      t = r_7(e_9, g_9, t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = f_9;
      t = term_l_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = term_j_9;
      {
        ATerm m_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            t = term_i_9;
            t_2 = t;
            t = term_j_9;
            u_2 = t;
            t = term_k_9;
            t = r_7(t_2, u_2, t);
            LocalPopChoice(s_9);
          }
        else
          {
            t = m_9;
            t = term_l_9;
          }
      }
      r_2 = t;
      t = term_t_9;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_9, r_2);
      t = k_7(s_2, r_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm u_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_9;
      t = copy_to_1_0(n_0, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  static ATerm w_10 (ATerm t);
  static ATerm w_10 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
    v_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_10 = ATgetFirst((ATermList) t);
        u_10 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_3 = NULL,p_3 = NULL,e_1 = NULL;
          t = SSLgetAnnotations(v_10);
          j_3 = t;
          t = u_10;
          t = w_10(t);
          p_3 = t;
          t = (ATerm) ATinsert(CheckATermList(p_3), t_10);
          e_1 = t;
          t = SSLsetAnnotations(e_1, j_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_10;
        t = z_87(t);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_9 = NULL,q_9 = NULL,r_9 = NULL;
  n_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_9;
    }
  else
    {
      static ATerm s_0 (ATerm t);
      static ATerm s_0 (ATerm t)
      {
        t = not_null(r_9);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_9 = ATgetFirst((ATermList) t);
          if(((r_9 != NULL) && (r_9 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_9;
      t = at_end_1_0(s_0, t);
    }
  return(t);
}
static ATerm p_11 (ATerm c_11, ATerm t)
{
  ATerm d_11 = NULL;
  t = SSL_explode_term(c_11);
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,k_11 = NULL;
  k_11 = t;
  if(match_cons(t, sym__2))
    {
      g_11 = ATgetArgument(t, 0);
      h_11 = ATgetArgument(t, 1);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_0 (ATerm t);
            static ATerm u_0 (ATerm t)
            {
              t = h_11;
              return(t);
            }
            t = g_11;
            t = at_end_1_0(u_0, t);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = p_11(k_11, t);
          }
      }
    }
  else
    {
      t = p_11(k_11, t);
    }
  return(t);
}
static ATerm q_6 (ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_34, n_34);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = SSL_subtr(m_34, n_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  t = term_b_10;
  {
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,y_11 = NULL;
        t = term_i_9;
        x_11 = t;
        t = term_b_10;
        y_11 = t;
        t = term_f_10;
        t = r_7(x_11, y_11, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        t = term_g_10;
      }
  }
  u_11 = t;
  t = term_g_10;
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_11, term_g_10);
  t = q_6(u_11, w_11, t);
  v_11 = t;
  t = SSL_int_to_string(v_11);
  s_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_11), term_b_10);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,c_12 = NULL;
      t = term_i_9;
      z_11 = t;
      t = term_j_10;
      c_12 = t;
      t = term_k_10;
      t = r_7(z_11, c_12, t);
      LocalPopChoice(i_10);
      {
        ATerm e_12 = NULL;
        e_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_12), term_j_10);
      }
    }
  else
    {
      t = h_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_8);
      p_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_12, (ATerm) ATinsert(ATempty, term_y_8));
      t = j_7(n_12, p_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_6 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm q_12 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_12);
  return(t);
}
static ATerm s_6 (ATerm r_82 (ATerm), ATerm c_192, ATerm k_18, ATerm t)
{
  ATerm r_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_192, term_l_10);
  t = d_7(t);
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_12, k_18);
  t = r_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym_Stream_1))
        {
          x_12 = ATgetArgument(m_10, 0);
        }
      else
        _fail(t);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(x_12, y_12, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_104 (ATerm), ATerm o_104 (ATerm), ATerm t)
{
  ATerm s_12 = NULL,v_12 = NULL;
  v_12 = t;
  t = xtc_new_file_0_0(t);
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_12, v_12);
  t = s_6(w_0, s_12, v_12, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_12);
  t = xtc_transform_file_2_0(n_104, o_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,d_15 = NULL,e_15 = NULL;
  t_14 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_14 = ATgetArgument(t, 0);
      {
        ATerm i_4 = NULL,j_4 = NULL;
        t = SSL_int_to_string(u_14);
        i_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_10), i_4), term_n_10);
        j_4 = t;
        t = SSL_concat_strings(j_4);
      }
    }
  else
    {
      ATerm m_5 = NULL,o_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_14 = ATgetArgument(t, 0);
          d_15 = ATgetArgument(t, 1);
          e_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_15);
      m_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_15), term_q_10), m_5), term_p_10), u_14);
      o_5 = t;
      t = SSL_concat_strings(o_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  ATerm h_15 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    t = u_87(t);
    if(((h_15 != NULL) && (h_15 != t)))
      _fail(t);
    else
      h_15 = t;
    return(t);
  }
  t = fetch_1_0(x_0, t);
  t = not_null(h_15);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_15 = NULL;
  i_15 = t;
  {
    ATerm s_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_0 (ATerm t);
        static ATerm y_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm z_10 = ATgetArgument(t, 0);
              if((i_15 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm a_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_17), term_p_17), term_h_17), term_c_17), term_v_16), term_p_16), term_k_16), term_e_16), term_z_15), term_t_15), term_m_15), term_g_15), term_z_14), term_q_14), term_k_14), term_f_14), term_b_14), term_w_13), term_s_13), term_o_13), term_i_13), term_d_13), term_w_12), term_l_12), term_g_12), term_a_12), term_o_11), term_j_11);
        t = fetch_elem_1_0(y_0, t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_15);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_15 = NULL,y_15 = NULL;
  n_15 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            y_15 = ATgetArgument(t, 1);
            {
              ATerm c_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_17);
        {
          ATerm d_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_5 = NULL,b_6 = NULL,c_6 = NULL;
              t = y_15;
              {
                ATerm j_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              x_5 = t;
              t = term_m_18;
              b_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_5), term_n_18);
              c_6 = t;
              t = SSL_printnl(b_6, c_6);
              t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, x_5), term_n_18));
              LocalPopChoice(f_18);
            }
          else
            {
              t = d_18;
              t = n_15;
            }
        }
      }
    else
      {
        t = x_17;
        t = n_15;
      }
  }
  t = n_15;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm e_81 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,q_16 = NULL;
  q_16 = t;
  t = fork_0_0(t);
  o_16 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_16;
        t = e_81(t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = SSL_waitpid(o_16);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            if(((ATgetType(r_18) != AT_INT) || (ATgetInt((ATermInt) r_18) != 0)))
              _fail(t);
            {
              ATerm s_18 = ATgetArgument(t, 1);
            }
            {
              ATerm w_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = q_16;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm p_82 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL;
  u_16 = t;
  t = p_82(t);
  z_16 = t;
  t = term_m_18;
  a_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_16), z_16);
  b_17 = t;
  t = SSL_printnl(a_17, b_17);
  t = u_16;
  return(t);
}
static ATerm v_6 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_17 = NULL,j_17 = NULL;
  static ATerm z_0 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm k_17 = NULL,l_17 = NULL;
    k_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_17), k_17);
    t = r_7(not_null(g_17), k_17, t);
    l_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
    return(t);
  }
  if(((g_17 != NULL) && (g_17 != t)))
    _fail(t);
  else
    g_17 = t;
  t = lookup_table_0_1(g_17, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(j_17, t);
  t = map_1_0(z_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm n_17 = NULL;
  n_17 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL;
        t = term_i_9;
        s_17 = t;
        t = term_b_10;
        u_17 = t;
        t = term_f_10;
        t = r_7(s_17, u_17, t);
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, term_x_16);
        t = geq_0_0(t);
        t = n_17;
        t = m_102(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = n_17;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm e_18 = NULL;
  e_18 = t;
  {
    ATerm z_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,i_18 = NULL,l_18 = NULL;
        t = term_i_9;
        i_18 = t;
        t = term_b_10;
        l_18 = t;
        t = term_f_10;
        t = r_7(i_18, l_18, t);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_z_13);
        t = geq_0_0(t);
        t = e_18;
        t = l_102(t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = z_18;
        t = e_18;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
        t = term_i_9;
        u_18 = t;
        t = term_b_10;
        v_18 = t;
        t = term_f_10;
        t = r_7(u_18, v_18, t);
        t_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_18, term_d_12);
        t = geq_0_0(t);
        t = q_18;
        t = n_102(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = q_18;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = x_91(t);
  {
    static ATerm b_1 (ATerm t);
    static ATerm b_1 (ATerm t)
    {
      ATerm a_19 = NULL;
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, a_19);
      t = w_91(t);
      return(t);
    }
    t = fetch_1_0(b_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm y_6 (ATerm t_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm n_20 (ATerm t);
  static ATerm n_20 (ATerm t)
  {
    ATerm p_19 = NULL,q_19 = NULL,c_20 = NULL;
    p_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_19 = ATgetFirst((ATermList) t);
            c_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_19;
              {
                static ATerm c_1 (ATerm t);
                static ATerm c_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = x_6(t_91, c_1, q_19, c_20, t);
              }
              t = n_20(t);
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              {
                ATerm m_6 = NULL,p_6 = NULL,n_1 = NULL;
                t = SSLgetAnnotations(p_19);
                m_6 = t;
                t = c_20;
                t = n_20(t);
                p_6 = t;
                t = (ATerm) ATinsert(CheckATermList(p_6), q_19);
                n_1 = t;
                t = SSLsetAnnotations(n_1, m_6);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = n_20(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      if((g_21 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm s_20 = NULL,u_20 = NULL,v_20 = NULL,y_20 = NULL;
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = r_7(g_49, h_49, t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        t = (ATerm) ATempty;
      }
  }
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, i_49);
  t = y_6(f_1, v_20, i_49, t);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, u_20);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(h_49, u_20, y_20, t);
  t = s_20;
  return(t);
}
static ATerm a_7 (ATerm p_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm i_1 (ATerm t);
  static ATerm i_1 (ATerm t)
  {
    ATerm h_21 = NULL,k_21 = NULL;
    if(match_cons(t, sym__2))
      {
        h_21 = ATgetArgument(t, 0);
        k_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, h_21, k_21);
    t = p_102(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(i_1, t);
  return(t);
}
static ATerm j_7 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm z_21 (ATerm s_21, ATerm t)
{
  t = SSL_fclose(s_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  w_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_21 = ATgetArgument(t, 0);
      {
        ATerm k_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_21);
            LocalPopChoice(l_19);
          }
        else
          {
            t = k_19;
            t = z_21(w_21, t);
          }
      }
    }
  else
    {
      t = z_21(w_21, t);
    }
  return(t);
}
static ATerm b_7 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm c_7 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm a_22 = NULL;
  t = SSL_fopen(n_55, o_55);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = SSL_stdin_stream();
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_22 = NULL;
  t = SSL_stdout_stream();
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_stderr_stream();
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
static ATerm c_24 (ATerm q_22, ATerm t)
{
  ATerm s_22 = NULL;
  t = SSL_explode_term(q_22);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            s_22 = ATgetFirst((ATermList) n_19);
            {
              ATerm o_19 = (ATerm) ATgetNext((ATermList) n_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_24 (ATerm x_22, ATerm y_22, ATerm z_22, ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,e_23 = NULL,l_23 = NULL,v_2 = NULL;
  t = SSLgetAnnotations(z_22);
  e_23 = t;
  t = x_22;
  if(match_cons(t, sym_Path_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_23, y_22);
  v_2 = t;
  t = SSLsetAnnotations(v_2, e_23);
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(a_23, b_23, t);
  return(t);
}
static ATerm e_24 (ATerm n_23, ATerm o_23, ATerm p_23, ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,t_23 = NULL,x_23 = NULL,w_2 = NULL;
  t = SSLgetAnnotations(p_23);
  t_23 = t;
  t = SSL_is_string(n_23);
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_23, o_23);
  w_2 = t;
  t = SSLsetAnnotations(w_2, t_23);
  if(match_cons(t, sym__2))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(q_23, r_23, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_24(z_23, t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm t_19 = t;
              int u_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_24(a_24, b_24, z_23, t);
                  LocalPopChoice(u_19);
                }
              else
                {
                  t = t_19;
                  t = e_24(a_24, b_24, z_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_24(z_23, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL,q_24 = NULL;
  q_24 = t;
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_24, term_x_19);
        t = d_7(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm m_8 = NULL,n_8 = NULL;
          t = term_y_19;
          n_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_19, q_24);
          t = i_7(n_8, q_24, t);
          m_8 = t;
          t = SSL_perror(m_8);
          _fail(t);
        }
      }
  }
  h_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(i_24, t);
  g_24 = t;
  t = h_24;
  t = fclose_0_0(t);
  t = g_24;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = NULL,w_24 = NULL;
      t_24 = t;
      t = (ATerm) ATinsert(ATempty, term_f_20);
      w_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, (ATerm) ATinsert(ATempty, term_f_20));
      t = j_7(t_24, w_24, t);
      LocalPopChoice(d_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_20;
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_20 = t;
            if((PushChoice() == 0))
              {
                ATerm x_24 = NULL,z_24 = NULL;
                x_24 = t;
                t = (ATerm) ATinsert(ATempty, term_y_8);
                z_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_24, (ATerm) ATinsert(ATempty, term_y_8));
                t = j_7(x_24, z_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_20;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = debug_1_0(l_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
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
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_k_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  d_26 = t;
  t = term_m_18;
  e_26 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  f_26 = t;
  t = SSL_printnl(e_26, f_26);
  t = d_26;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_26 = NULL,j_26 = NULL,l_26 = NULL;
  if(match_cons(t, sym__3))
    {
      g_26 = ATgetArgument(t, 0);
      j_26 = ATgetArgument(t, 1);
      l_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6(g_26, j_26, l_26, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL;
  m_26 = t;
  t = term_m_18;
  n_26 = t;
  t = (ATerm) ATinsert(ATempty, term_m_20);
  o_26 = t;
  t = SSL_printnl(n_26, o_26);
  t = m_26;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm q_26 = NULL,t_26 = NULL,w_26 = NULL;
  q_26 = t;
  t = term_m_18;
  t_26 = t;
  t = (ATerm) ATinsert(ATempty, term_l_20);
  w_26 = t;
  t = SSL_printnl(t_26, w_26);
  t = q_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,j_25 = NULL,m_25 = NULL,n_25 = NULL,r_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  a_25 = t;
  t = if_verbose5_1_0(m_1, t);
  {
    ATerm o_20 = t;
    if((PushChoice() == 0))
      {
        ATerm z_25 = NULL,c_26 = NULL;
        t = term_p_20;
        z_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_25);
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Imported_1, a_25));
        t = r_7(z_25, c_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_20;
      }
  }
  f_25 = t;
  t = term_p_20;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, term_q_20, (ATerm) ATinsert(ATempty, a_25));
  t = lookup_table_0_1(u_25, t);
  y_25 = t;
  t = term_q_20;
  v_25 = t;
  t = (ATerm) ATinsert(ATempty, a_25);
  w_25 = t;
  t = y_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(v_25, w_25, x_25, t);
  t = f_25;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  e_25 = t;
  t = term_p_20;
  t_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, e_25);
  t = a_7(t_1, t_25, e_25, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_p_20;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, (ATerm)ATmakeAppl(sym_Imported_1, a_25), (ATerm) ATempty);
  t = lookup_table_0_1(g_25, t);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, a_25);
  j_25 = t;
  t = (ATerm) ATempty;
  m_25 = t;
  t = r_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(j_25, m_25, n_25, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_20, (ATerm)ATmakeAppl(sym_Imported_1, a_25), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm a_96 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,s_27 = NULL,t_27 = NULL;
  q_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_27;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 = NULL,c_9 = NULL,d_9 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(q_27);
            w_8 = t;
            t = s_27;
            t = a_96(t);
            c_9 = t;
            t = t_27;
            t = filter_1_0(a_96, t);
            d_9 = t;
            t = (ATerm) ATinsert(CheckATermList(d_9), c_9);
            z_2 = t;
            t = SSLsetAnnotations(z_2, w_8);
            LocalPopChoice(t_20);
          }
        else
          {
            t = r_20;
            t = t_27;
            t = filter_1_0(a_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm t)
{
  static ATerm z_27 (ATerm t);
  static ATerm z_27 (ATerm t)
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_85(t);
        t = z_27(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = n_85(t);
      }
    return(t);
  }
  t = z_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,e_28 = NULL;
      t = term_i_9;
      c_28 = t;
      t = term_b_21;
      e_28 = t;
      t = term_c_21;
      t = r_7(c_28, e_28, t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_28 = NULL;
            t = term_f_21;
            i_28 = t;
            t = SSL_getenv(i_28);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
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
  t = term_i_21;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL;
  t = term_p_20;
  s_28 = t;
  t = term_j_21;
  t_28 = t;
  t = term_l_21;
  t = r_7(s_28, t_28, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_21 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_21;
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
  t = term_n_21;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_28 = NULL;
  t = if_verbose5_1_0(x_1, t);
  m_28 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL,o_28 = NULL;
        t = term_p_20;
        n_28 = t;
        t = term_q_20;
        o_28 = t;
        t = term_q_21;
        t = r_7(n_28, o_28, t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm r_28 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_28 = t;
          t = repeat_2_0(b_2, _id, t);
          t = r_28;
        }
      }
  }
  t = m_28;
  t = if_verbose5_1_0(c_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm f_30 (ATerm b_29, ATerm t)
{
  ATerm e_29 = NULL,k_29 = NULL,l_29 = NULL;
  t = term_p_20;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_29);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, b_29));
  t = r_7(k_29, l_29, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_21 = ATgetFirst((ATermList) t);
      if(match_cons(t_21, sym__2))
        {
          ATerm x_21 = ATgetArgument(t_21, 0);
          e_29 = ATgetArgument(t_21, 1);
        }
      else
        _fail(t);
      {
        ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_29;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_p_20;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
      t = if_verbose5_1_0(e_2, t);
      t = xtc_load_0_0(t);
      o_29 = t;
      if(match_cons(t, sym__2))
        {
          m_29 = ATgetArgument(t, 0);
          n_29 = ATgetArgument(t, 1);
          {
            ATerm g_22 = t;
            int h_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
                t = term_p_20;
                u_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, m_29);
                v_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_20, (ATerm) ATmakeAppl(sym_Tool_1, m_29));
                t = r_7(u_29, v_29, t);
                {
                  static ATerm h_2 (ATerm t);
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_29 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(h_2, t);
                }
                t = not_null(t_29);
                LocalPopChoice(h_22);
              }
            else
              {
                t = g_22;
                t = f_30(o_29, t);
              }
          }
        }
      else
        {
          t = f_30(o_29, t);
        }
      t = if_verbose5_1_0(i_2, t);
      LocalPopChoice(f_22);
    }
  else
    {
      t = c_22;
      {
        ATerm e_30 = NULL,o_9 = NULL,p_9 = NULL;
        e_30 = t;
        t = term_m_18;
        o_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_22), e_30), term_i_22);
        p_9 = t;
        t = SSL_printnl(o_9, p_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_22), e_30), term_i_22);
        t = if_verbose5_1_0(k_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  k_30 = t;
  t = r_105(t);
  t = xtc_find_0_0(t);
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm m_30 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
      t = t_6(j_30, k_30, t);
      t = term_k_22;
      m_30 = t;
      t = SSL_exit(m_30);
      return(t);
    }
    t = fork_and_wait_1_0(o_2, t);
  }
  t = k_30;
  return(t);
}
static ATerm e_7 (ATerm g_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm n_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  s_30 = t;
  t = g_98(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_30, u_35, s_35);
  t = s_7(n_30, u_35, s_35, t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL;
        t = term_n_22;
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_30, term_n_22);
        t = r_7(n_30, x_30, t);
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
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_30 = ATgetFirst((ATermList) t);
      r_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_30, term_n_22, (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATinsert(CheckATermList(q_30), u_35)));
  t = lookup_table_0_1(n_30, t);
  w_30 = t;
  t = term_n_22;
  t_30 = t;
  t = (ATerm) ATinsert(CheckATermList(r_30), (ATerm) ATinsert(CheckATermList(q_30), u_35));
  u_30 = t;
  t = w_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(t_30, u_30, v_30, t);
  t = s_30;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm z_30 = NULL;
  ATerm p_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_31 = NULL,y_9 = NULL;
      f_31 = t;
      t = term_t_22;
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_31, term_t_22);
      t = i_7(f_31, y_9, t);
      z_30 = t;
      t = SSL_mkstemp(z_30);
      LocalPopChoice(r_22);
    }
  else
    {
      t = p_22;
      {
        ATerm g_31 = NULL;
        t = term_u_22;
        g_31 = t;
        t = SSL_perror(g_31);
        _fail(t);
      }
    }
  return(t);
}
static ATerm i_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
  t = P__tmpdir_0_0(t);
  s_31 = t;
  t = term_w_22;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_31, term_w_22);
  t = i_7(s_31, t_31, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_23;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_31, term_c_23);
  t = e_7(p_2, q_31, r_31, t);
  t = SSL_close(i_31);
  t = q_31;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  x_31 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_31 = NULL,a_32 = NULL;
      t = x_31;
      t = xtc_new_file_0_0(t);
      z_31 = t;
      t = r_0(t);
      a_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_32, (ATerm) ATinsert(ATinsert(ATempty, z_31), term_j_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_31);
    }
  else
    {
      ATerm c_32 = NULL,d_32 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_31;
      t = xtc_new_file_0_0(t);
      c_32 = t;
      t = r_0(t);
      d_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_32), term_j_9), y_31), term_d_23));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_32);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  t = term_c_23;
  t = pass_width_0_0(t);
  o_32 = t;
  t = term_c_23;
  t = pass_verbose_0_0(t);
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_32, p_32);
  t = conc_0_0(t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm r_32 = NULL,u_32 = NULL;
  t = term_c_23;
  t = pass_width_0_0(t);
  r_32 = t;
  t = term_c_23;
  t = pass_verbose_0_0(t);
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_32, u_32);
  t = conc_0_0(t);
  return(t);
}
ATerm abox2text_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_32 = NULL,n_32 = NULL;
      n_32 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_32 = ATgetArgument(t, 0);
          {
            ATerm d_10 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(n_32);
            d_10 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_32);
            d_3 = t;
            t = SSLsetAnnotations(d_3, d_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_32;
        }
      LocalPopChoice(h_23);
      t = xtc_transform_file_2_0(x_2, y_2, t);
    }
  else
    {
      t = g_23;
      t = xtc_transform_term_2_0(a_3, b_3, t);
    }
  return(t);
}
static ATerm r_7 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm e_33 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(d_50, e_33, t);
  return(t);
}
static ATerm l_7 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm g_33 = NULL,i_33 = NULL;
  i_33 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = r_7(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_23 = ATgetFirst((ATermList) t);
            g_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(j_23);
        {
          ATerm l_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, g_33);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(p_48, g_33, l_33, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, g_33);
        }
      }
    else
      {
        t = i_23;
        {
          ATerm n_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_7(p_48, n_33, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = i_33;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  v_33 = t;
  t = d_98(t);
  r_33 = t;
  {
    ATerm m_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_34 = NULL;
        t = term_n_22;
        a_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_n_22);
        t = r_7(r_33, a_34, t);
        {
          ATerm u_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_23;
            }
        }
        LocalPopChoice(s_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_33 = ATgetFirst((ATermList) t);
      p_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_33, term_n_22, p_33);
  t = lookup_table_0_1(r_33, t);
  y_33 = t;
  t = term_n_22;
  w_33 = t;
  t = y_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(w_33, p_33, x_33, t);
  t = q_33;
  {
    static ATerm c_3 (ATerm t);
    static ATerm c_3 (ATerm t)
    {
      ATerm b_34 = NULL;
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, b_34);
      t = l_7(r_33, b_34, t);
      return(t);
    }
    t = map_1_0(c_3, t);
  }
  t = v_33;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_101(t);
      t = x_101(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = x_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,o_34 = NULL,p_34 = NULL;
  i_34 = t;
  t = c_98(t);
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_34, term_n_22);
  {
    ATerm y_23 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_24 = ATgetArgument(t, 0);
            ATerm k_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_22;
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_34, term_n_22);
        t = r_7(d_34, u_34, t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = y_23;
        t = (ATerm) ATempty;
      }
  }
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_34, term_n_22, (ATerm) ATinsert(CheckATermList(j_34), (ATerm) ATempty));
  t = lookup_table_0_1(d_34, t);
  p_34 = t;
  t = term_n_22;
  k_34 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), (ATerm) ATempty);
  l_34 = t;
  t = p_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(k_34, l_34, o_34, t);
  t = i_34;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(f_35);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        t = f_35;
      }
  }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm z_34 = NULL;
  static ATerm f_3 (ATerm t);
  static ATerm f_3 (ATerm t)
  {
    ATerm a_35 = NULL;
    a_35 = t;
    {
      ATerm n_24 = t;
      int o_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_35 = NULL,c_35 = NULL;
          t = term_v_22;
          b_35 = t;
          t = term_n_22;
          c_35 = t;
          t = term_p_24;
          t = r_7(b_35, c_35, t);
          LocalPopChoice(o_24);
        }
      else
        {
          t = n_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_34 != NULL) && (z_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_34 = ATgetFirst((ATermList) t);
        {
          ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_34;
    t = map_1_0(g_3, t);
    t = a_35;
    t = end_scope_1_0(k_3, t);
    return(t);
  }
  t = begin_scope_1_0(e_3, t);
  t = restore_always_2_0(a_105, f_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL,x_35 = NULL,a_36 = NULL,b_36 = NULL;
  i_35 = t;
  t = term_c_23;
  t = whoami_0_0(t);
  j_35 = t;
  t = term_m_18;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_24), j_35), term_s_24);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = term_g_10;
  x_35 = t;
  t = SSL_exit(x_35);
  t = i_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,m_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_36 = NULL,q_36 = NULL,s_36 = NULL;
      t = term_c_23;
      t = o_0(t);
      n_36 = t;
      t = term_v_24;
      q_36 = t;
      t = term_y_24;
      s_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_24, term_y_24, n_36);
      t = s_7(q_36, s_36, n_36, t);
      _fail(t);
    }
  else
    {
      ATerm w_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          m_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_36;
      t = l_0(t);
      t = j_36;
      t = m_0(t);
      w_36 = t;
      t = (ATerm) ATinsert(CheckATermList(m_36), w_36);
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-k"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,g_37 = NULL;
  a_37 = t;
  t = SSL_string_to_int(a_37);
  b_37 = t;
  t = term_b_25;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, b_37);
  t = u_7(g_37, b_37, t);
  t = a_37;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, s_3, u_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  if(match_string(t, "-S"))
    {
      t = m_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_37;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_37 = NULL,q_37 = NULL;
  t = term_b_10;
  n_37 = t;
  t = term_d_25;
  q_37 = t;
  t = term_h_25;
  t = u_7(n_37, q_37, t);
  t = term_i_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,x_37 = NULL;
  s_37 = t;
  t = SSL_string_to_int(s_37);
  t_37 = t;
  t = term_b_10;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, t_37);
  t = u_7(x_37, t_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_37);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  t = term_a_26;
  y_37 = t;
  t = term_c_23;
  z_37 = t;
  t = term_b_26;
  t = u_7(y_37, z_37, t);
  t = term_h_26;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int p_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, x_3, c_4, t);
      LocalPopChoice(p_26);
    }
  else
    {
      t = k_26;
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, h_4, k_4, t);
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
            t = Option_3_0(l_4, m_4, o_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
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
static ATerm q_4 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  t = term_j_9;
  f_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_9, e_38);
  t = u_7(f_38, e_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_38);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  if(match_string(t, "-i"))
    {
      t = k_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_38;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  t = term_d_23;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_23, l_38);
  t = u_7(m_38, l_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_38);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_v_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, u_4, w_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_38 = NULL;
  r_38 = t;
  if(match_string(t, "-w"))
    {
      t = r_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = r_38;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  s_38 = t;
  t = term_j_10;
  t_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, s_38);
  t = u_7(t_38, s_38, t);
  t = s_38;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
              ATerm c_27 = t;
              int d_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(d_27);
                }
              else
                {
                  t = c_27;
                  {
                    ATerm e_27 = t;
                    int f_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(f_27);
                      }
                    else
                      {
                        t = e_27;
                        t = ArgOption_3_0(x_4, y_4, z_4, t);
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
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_23;
  t = whoami_0_0(t);
  u_38 = t;
  t = term_m_18;
  w_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_27), u_38);
  x_38 = t;
  t = SSL_printnl(w_38, x_38);
  t = term_g_10;
  v_38 = t;
  t = SSL_exit(v_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  t = term_i_9;
  y_38 = t;
  t = term_h_27;
  z_38 = t;
  t = term_i_27;
  t = r_7(y_38, z_38, t);
  return(t);
}
static ATerm m_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_94 (ATerm), ATerm x_94 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,e_39 = NULL;
  b_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_39;
      t = w_94(t);
    }
  else
    {
      ATerm h_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_39 = ATgetFirst((ATermList) t);
          e_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_39;
      t = foldr_2_0(w_94, x_94, t);
      h_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_39, h_39);
      t = x_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_d_25;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm b_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(b_11, e_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_39 = NULL,r_10 = NULL,x_10 = NULL;
  t = times_0_0(t);
  x_10 = t;
  t = SSL_explode_term(x_10);
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10;
  t = foldr_2_0(a_5, b_5, t);
  m_39 = t;
  t = SSL_TicksToSeconds(m_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  if(match_cons(t, sym__2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_39;
        if((y_39 != t))
          {
            _fail(t);
          }
        t = x_39;
        LocalPopChoice(n_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATmakeAppl(sym__2, y_39, z_39);
        {
          ATerm o_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_39, z_39);
              LocalPopChoice(p_27);
            }
          else
            {
              t = o_27;
              t = SSL_gtr(y_39, z_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_39, z_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_102 (ATerm), ATerm t)
{
  ATerm d_40 = NULL;
  d_40 = t;
  {
    ATerm r_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
        t = term_i_9;
        g_40 = t;
        t = term_b_10;
        h_40 = t;
        t = term_f_10;
        t = r_7(g_40, h_40, t);
        f_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_40, term_g_10);
        t = geq_0_0(t);
        t = d_40;
        t = i_102(t);
        LocalPopChoice(u_27);
      }
    else
      {
        t = r_27;
        t = d_40;
      }
  }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,m_40 = NULL,n_40 = NULL;
  t = run_time_0_0(t);
  j_40 = t;
  t = term_c_23;
  t = whoami_0_0(t);
  k_40 = t;
  t = term_m_18;
  m_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_27), j_40), term_p_10), k_40);
  n_40 = t;
  t = SSL_printnl(m_40, n_40);
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_27), j_40), term_p_10), k_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_25;
  o_40 = t;
  t = SSL_exit(o_40);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  z_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_40 = ATgetArgument(t, 0);
          {
            ATerm h_12 = NULL,o_3 = NULL;
            t = SSLgetAnnotations(z_40);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_40);
            o_3 = t;
            t = SSLsetAnnotations(o_3, h_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm t_106 (ATerm), ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_40 = NULL,s_40 = NULL;
      t = term_i_9;
      r_40 = t;
      t = term_y_27;
      s_40 = t;
      t = term_a_28;
      t = r_7(r_40, s_40, t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = fetch_1_0(d_5, t);
    }
  t = t_106(t);
  return(t);
}
static ATerm v_7 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_41);
  return(t);
}
static ATerm w_7 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm k_41 = NULL;
  t = table_hashtable_0_0(t);
  k_41 = t;
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_12 = NULL;
        t = k_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            t_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_7(v_49, t_12, t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = b_28;
        {
          ATerm b_13 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = k_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(v_49, b_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,s_41 = NULL,t_41 = NULL;
  o_41 = t;
  t = term_f_28;
  s_41 = t;
  t = term_g_28;
  t_41 = t;
  t = o_41;
  t = new_hashtable_0_2(s_41, t_41, t);
  p_41 = t;
  t = o_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(o_41, p_41, q_41, t);
  t = o_41;
  return(t);
}
static ATerm o_7 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_41);
  return(t);
}
static ATerm p_7 (ATerm l_53, ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_hashtable_destroy(l_53);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_41 = NULL;
  t = SSL_table_hashtable();
  w_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  x_41 = t;
  t = table_hashtable_0_0(t);
  y_41 = t;
  t = lookup_table_0_1(x_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(a_42, t);
  t = y_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(x_41, z_41, t);
  t = x_41;
  return(t);
}
ATerm map_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  static ATerm p_42 (ATerm t);
  static ATerm p_42 (ATerm t)
  {
    ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL;
    m_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_42;
      }
    else
      {
        ATerm g_13 = NULL,l_13 = NULL,m_13 = NULL,a_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_42 = ATgetFirst((ATermList) t);
            o_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_42);
        g_13 = t;
        t = n_42;
        t = i_87(t);
        l_13 = t;
        t = o_42;
        t = p_42(t);
        m_13 = t;
        t = (ATerm) ATinsert(CheckATermList(m_13), l_13);
        a_6 = t;
        t = SSLsetAnnotations(a_6, g_13);
      }
    return(t);
  }
  t = p_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_42 = ATgetFirst((ATermList) t);
      t_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_42 = NULL,y_42 = NULL;
        static ATerm e_5 (ATerm t);
        static ATerm e_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_42)), not_null(y_42));
          return(t);
        }
        t = t_42;
        t = j_0(t);
        if(((x_42 != NULL) && (x_42 != t)))
          _fail(t);
        else
          x_42 = t;
        t = s_42;
        t = h_0(t);
        if(((y_42 != NULL) && (y_42 != t)))
          _fail(t);
        else
          y_42 = t;
        t = t_42;
        t = reverse_acc_2_0(h_0, e_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_23;
      t = j_0(t);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,g_6 = NULL;
  g_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_43);
  g_6 = t;
  t = SSLsetAnnotations(g_6, e_43);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm i_43 = NULL;
  i_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_43), term_h_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_43 = NULL,d_43 = NULL;
      t = term_i_9;
      c_43 = t;
      t = term_h_27;
      d_43 = t;
      t = term_i_27;
      t = r_7(c_43, d_43, t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = fetch_1_0(f_5, t);
    }
  t = term_l_28;
  t = echo_0_0(t);
  t = term_v_24;
  a_43 = t;
  t = term_y_24;
  b_43 = t;
  t = term_p_28;
  t = r_7(a_43, b_43, t);
  t = reverse_acc_2_0(_id, r_5, t);
  t = map_1_0(s_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  static ATerm f_44 (ATerm t);
  static ATerm f_44 (ATerm t)
  {
    ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL;
    c_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_44 = ATgetFirst((ATermList) t);
        e_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_28 = t;
      int u_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 = NULL,h_14 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(c_44);
          y_13 = t;
          t = d_44;
          t = s_87(t);
          h_14 = t;
          t = (ATerm) ATinsert(CheckATermList(e_44), h_14);
          i_6 = t;
          t = SSLsetAnnotations(i_6, y_13);
          LocalPopChoice(u_28);
        }
      else
        {
          t = q_28;
          {
            ATerm x_14 = NULL,a_15 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(c_44);
            x_14 = t;
            t = e_44;
            t = f_44(t);
            a_15 = t;
            t = (ATerm) ATinsert(CheckATermList(a_15), d_44);
            l_6 = t;
            t = SSLsetAnnotations(l_6, x_14);
          }
        }
    }
    return(t);
  }
  t = f_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL;
  j_44 = t;
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_44;
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
            t = j_44;
          }
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        t = (ATerm) ATinsert(ATempty, j_44);
      }
  }
  k_44 = t;
  t = term_l_9;
  l_44 = t;
  t = SSL_printnl(l_44, k_44);
  t = j_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL;
  t = term_i_9;
  p_44 = t;
  t = term_h_27;
  q_44 = t;
  t = term_i_27;
  t = r_7(p_44, q_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  t = term_z_28;
  r_44 = t;
  t = term_c_23;
  s_44 = t;
  t = term_a_29;
  t = u_7(r_44, s_44, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_c_29;
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
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  t = term_z_28;
  v_44 = t;
  t = term_c_23;
  w_44 = t;
  t = term_a_29;
  t = u_7(v_44, w_44, t);
  t = term_d_29;
  t_44 = t;
  t = term_c_23;
  u_44 = t;
  t = term_f_29;
  t = u_7(t_44, u_44, t);
  t = term_g_29;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, w_5, t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      t = Option_3_0(y_5, z_5, d_6, t);
    }
  return(t);
}
static ATerm u_7 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  t = term_i_9;
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_9, p_53, q_53);
  t = lookup_table_0_1(x_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(p_53, q_53, y_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_9, p_53, q_53);
  return(t);
}
static ATerm s_7 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_29 = ATgetArgument(t, 0);
            ATerm s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = r_7(j_48, k_48, t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
  }
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(c_45), i_48));
  t = lookup_table_0_1(j_48, t);
  f_45 = t;
  t = (ATerm) ATinsert(CheckATermList(c_45), i_48);
  d_45 = t;
  t = f_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(k_48, d_45, e_45, t);
  t = b_45;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
      t = term_c_23;
      t = g_0(t);
      n_45 = t;
      t = term_v_24;
      o_45 = t;
      t = term_y_24;
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_24, term_y_24, n_45);
      t = s_7(o_45, p_45, n_45, t);
      _fail(t);
    }
  else
    {
      ATerm s_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_45 = ATgetFirst((ATermList) t);
          m_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_45;
      t = d_0(t);
      t = term_c_23;
      t = f_0(t);
      s_45 = t;
      t = (ATerm) ATinsert(CheckATermList(m_45), s_45);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_73 (ATerm), ATerm y_73 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,t_7 = NULL;
  y_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_45 = ATgetFirst((ATermList) t);
      v_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_45);
  t_45 = t;
  t = u_45;
  t = x_73(t);
  w_45 = t;
  t = v_45;
  t = y_73(t);
  x_45 = t;
  t = (ATerm) ATinsert(CheckATermList(x_45), w_45);
  t_7 = t;
  t = SSLsetAnnotations(t_7, t_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_108 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,i_46 = NULL,j_46 = NULL,s_8 = NULL;
  d_46 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_29;
        t = r_108(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
  }
  t = d_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_46 = ATgetFirst((ATermList) t);
      g_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_46);
  e_46 = t;
  t = term_h_27;
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, f_46);
  t = u_7(j_46, f_46, t);
  t = g_46;
  {
    static ATerm t_46 (ATerm t);
    static ATerm t_46 (ATerm t)
    {
      ATerm z_29 = t;
      int a_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_46 = NULL;
              m_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_46;
              LocalPopChoice(c_30);
            }
          else
            {
              t = b_30;
              t = r_108(t);
              t = Cons_2_0(_id, t_46, t);
            }
          LocalPopChoice(a_30);
        }
      else
        {
          t = z_29;
          {
            ATerm p_46 = NULL,q_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_46 = ATgetFirst((ATermList) t);
                q_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_46), (ATerm) ATmakeAppl(sym_Undefined_1, p_46));
          }
        }
      return(t);
    }
    t = t_46(t);
  }
  i_46 = t;
  t = (ATerm) ATinsert(CheckATermList(i_46), (ATerm) ATmakeAppl(sym_Program_1, f_46));
  s_8 = t;
  t = SSLsetAnnotations(s_8, e_46);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  if(match_string(t, "--help"))
    {
      t = g_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_47;
        }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  t = term_y_27;
  h_47 = t;
  t = term_c_23;
  i_47 = t;
  t = term_d_30;
  t = u_7(h_47, i_47, t);
  t = term_g_30;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_108 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL;
  a_47 = t;
  t = term_v_24;
  b_47 = t;
  t = term_i_30;
  t = lookup_table_0_1(b_47, t);
  f_47 = t;
  t = term_y_24;
  c_47 = t;
  t = (ATerm) ATempty;
  d_47 = t;
  t = f_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(c_47, d_47, e_47, t);
  t = a_47;
  {
    static ATerm e_6 (ATerm t);
    static ATerm e_6 (ATerm t)
    {
      ATerm l_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_108(t);
          LocalPopChoice(o_30);
        }
      else
        {
          t = l_30;
          {
            ATerm p_30 = t;
            int y_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, h_6, j_6, t);
                LocalPopChoice(y_30);
              }
            else
              {
                t = p_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_47 = NULL;
        t_47 = t;
        {
          ATerm c_31 = t;
          int d_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_15 = NULL;
              t = t_47;
              {
                ATerm e_31 = t;
                int h_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_15 = NULL,u_15 = NULL;
                    t = term_i_9;
                    r_15 = t;
                    t = term_y_27;
                    u_15 = t;
                    t = term_a_28;
                    t = r_7(r_15, u_15, t);
                    LocalPopChoice(h_31);
                  }
                else
                  {
                    t = e_31;
                    t = fetch_1_0(k_6, t);
                  }
              }
              t = t_47;
              t = default_system_usage_0_0(t);
              t = term_d_25;
              q_15 = t;
              t = SSL_exit(q_15);
              LocalPopChoice(d_31);
            }
          else
            {
              t = c_31;
              {
                ATerm c_16 = NULL,g_16 = NULL,h_16 = NULL;
                t = term_i_9;
                g_16 = t;
                t = term_z_28;
                h_16 = t;
                t = term_j_31;
                t = r_7(g_16, h_16, t);
                t = t_47;
                t = default_system_about_0_0(t);
                t = term_d_25;
                c_16 = t;
                t = SSL_exit(c_16);
              }
            }
        }
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL;
              static ATerm n_6 (ATerm t);
              static ATerm n_6 (ATerm t)
              {
                ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,u_8 = NULL;
                z_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_47);
                x_47 = t;
                t = y_47;
                if(((y_46 != NULL) && (y_46 != t)))
                  _fail(t);
                else
                  y_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_47);
                u_8 = t;
                t = SSLsetAnnotations(u_8, x_47);
                return(t);
              }
              t = fetch_1_0(n_6, t);
              t = term_m_18;
              v_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_m_31);
              w_47 = t;
              t = SSL_printnl(v_47, w_47);
              t = (ATerm) ATmakeAppl(sym__2, term_m_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_46)), term_m_31));
              t = default_system_usage_0_0(t);
              t = term_g_10;
              u_47 = t;
              t = SSL_exit(u_47);
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
            }
        }
      }
  }
  z_46 = t;
  t = term_v_24;
  t = table_destroy_0_0(t);
  t = z_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm t)
{
  ATerm m_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  t = parse_options_1_0(v_106, t);
  m_48 = t;
  t = term_n_31;
  t = table_create_0_0(t);
  t = term_n_31;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_31, term_o_31, m_48);
  t = lookup_table_0_1(q_48, t);
  t_48 = t;
  t = term_o_31;
  r_48 = t;
  t = t_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(r_48, m_48, s_48, t);
  t = m_48;
  t = x_106(t);
  {
    ATerm p_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_106, t);
        LocalPopChoice(u_31);
      }
    else
      {
        t = p_31;
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_31);
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
static ATerm o_6 (ATerm t)
{
  t = xtc_temp_files_1_0(u_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm b_32 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
      t = term_i_9;
      x_48 = t;
      t = term_d_23;
      y_48 = t;
      t = term_f_32;
      t = r_7(x_48, y_48, t);
      w_48 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_48);
      LocalPopChoice(e_32);
    }
  else
    {
      t = b_32;
      t = term_t_9;
    }
  t = abox2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(abox2text_options_0_0, default_usage_0_0, _id, o_6, t);
  return(t);
}
