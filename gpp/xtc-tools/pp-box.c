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
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_k_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_r_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_d_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_h_30;
ATerm term_y_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_h_28;
ATerm term_a_28;
ATerm term_u_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_o_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_g_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_x_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_m_19;
ATerm term_y_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_e_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_x_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_u_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_y_10, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_n_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_w_11, term_x_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_f_12, term_g_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_m_12, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_s_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_e_14, term_f_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_m_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_s_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_o_16, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_f_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_w_17, term_x_17);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_m_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_w_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_e_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_m_19);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_n_25);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_z_25, term_y_19);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_w_26);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_a_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_l_26, term_m_26);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_g_29, term_y_19);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym__2, term_l_29, term_y_19);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym__2, term_a_28, term_y_19);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__3, term_l_26, term_m_26, (ATerm) ATempty);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_g_29);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_y_19);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_z_19);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.pp.af", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm e_7 (ATerm e_20, ATerm s_221, ATerm t);
ATerm at_suffix_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm a_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm h_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm n_6 (ATerm o_29, ATerm p_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm v_6 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm y_6 (ATerm t_82 (ATerm), ATerm f_190, ATerm k_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t);
static ATerm z_6 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm i_104 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm r_16 (ATerm x_15, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_7 (ATerm x_96 (ATerm), ATerm w_30, ATerm u_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t);
static ATerm o_6 (ATerm k_48, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm q_6 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm r_6 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm h_1 (ATerm t);
static ATerm s_6 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t);
static ATerm t_6 (ATerm g_101 (ATerm), ATerm s_44, ATerm r_44, ATerm t);
static ATerm g_7 (ATerm d_50, ATerm e_50, ATerm t);
static ATerm r_23 (ATerm l_23, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_6 (ATerm g_18, ATerm t);
static ATerm f_7 (ATerm t_66, ATerm u_66, ATerm t);
static ATerm w_6 (ATerm p_50, ATerm q_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_25 (ATerm e_24, ATerm t);
static ATerm y_25 (ATerm i_24, ATerm l_24, ATerm m_24, ATerm t);
static ATerm a_26 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm t);
static ATerm x_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm e_32 (ATerm g_31, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm o_7 (ATerm e_45, ATerm f_45, ATerm t);
static ATerm i_7 (ATerm q_43, ATerm r_43, ATerm t);
ATerm end_scope_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_96 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_7 (ATerm r_48, ATerm s_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_7 (ATerm l_43, ATerm m_43, ATerm k_43, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_7 (ATerm i_29, ATerm j_29, ATerm t);
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t);
static ATerm s_7 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t);
static ATerm t_7 (ATerm g_48, ATerm h_48, ATerm t);
ATerm lookup_table_0_1 (ATerm x_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_48, ATerm m_48, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_7 (ATerm i_48, ATerm j_48, ATerm t);
static ATerm m_7 (ATerm n_48, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm io_pp_box_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_2 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = t_1;
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
        t = (ATerm) ATmakeAppl(sym__2, u_1, e_0);
        t = h_7(u_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
        LocalPopChoice(a_8);
      }
    else
      {
        t = p_2;
        {
          ATerm c_8 = t;
          int d_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_0 = NULL;
              t = t_1;
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
                            if((u_1 != t))
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
              t = (ATerm) ATmakeAppl(sym__2, u_1, w_0);
              t = h_7(u_1, w_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
              LocalPopChoice(d_8);
            }
          else
            {
              t = c_8;
              t = t_1;
              t = p_0(t);
              if((u_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_2 = NULL,l_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_2;
    }
  else
    {
      t = l_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm e_7 (ATerm e_20, ATerm s_221, ATerm t)
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
  t = s_221;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm g_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_88(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = g_8;
        {
          ATerm e_3 = NULL,f_3 = NULL,k_3 = NULL,m_1 = NULL,p_1 = NULL,u_0 = NULL;
          e_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              f_3 = ATgetFirst((ATermList) t);
              k_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_3);
          m_1 = t;
          t = k_3;
          t = l_3(t);
          p_1 = t;
          t = (ATerm) ATinsert(CheckATermList(p_1), f_3);
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
  ATerm q_3 = NULL,s_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,f_4 = NULL,g_4 = NULL,z_0 = NULL,y_0 = NULL;
    g_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_4 = ATgetFirst((ATermList) t);
        c_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_4);
    z_3 = t;
    t = b_4;
    t = x_87(t);
    d_4 = t;
    t = (ATerm) ATinsert(CheckATermList(c_4), d_4);
    y_0 = t;
    t = SSLsetAnnotations(y_0, z_3);
    f_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_3 = ATgetFirst((ATermList) t);
        y_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_4);
    v_3 = t;
    t = y_3;
    if(((q_3 != NULL) && (q_3 != t)))
      _fail(t);
    else
      q_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_3), w_3);
    z_0 = t;
    t = SSLsetAnnotations(z_0, v_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, not_null(q_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm a_115 (ATerm), ATerm t)
{
  ATerm q_4 = NULL,t_4 = NULL;
  ATerm k_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(a_115, t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = k_8;
      {
        ATerm m_4 = NULL;
        m_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4;
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
          t = list_tokenize_1_0(a_115, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_8 = ATgetFirst((ATermList) t);
          ATerm r_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_4);
        }
      else
        {
          ATerm e_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_8 = ATgetFirst((ATermList) t);
              ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_4;
          t = list_tokenize_1_0(a_115, t);
          e_5 = t;
          t = (ATerm) ATinsert(CheckATermList(e_5), q_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm q_5 = NULL;
  q_5 = t;
  t = SSL_implode_string(q_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL,g_1 = NULL;
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  h_5 = t;
  t = SSL_explode_string(k_5);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_5, l_5);
  g_1 = t;
  t = SSLsetAnnotations(g_1, h_5);
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm p_5 = NULL;
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_5, f_5);
      t = e_7(p_5, f_5, t);
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
    ATerm a_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL;
        t = SSL_filemode(n_7);
        if(match_cons(t, sym__2))
          {
            y_1 = ATgetArgument(t, 0);
            {
              ATerm d_9 = ATgetArgument(t, 1);
              if(((ATgetType(d_9) != AT_INT) || (ATgetInt((ATermInt) d_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = y_1;
        LocalPopChoice(c_9);
      }
    else
      {
        t = a_9;
        {
          ATerm g_2 = NULL,j_2 = NULL;
          t = term_e_9;
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_9, n_7);
          t = f_7(j_2, n_7, t);
          g_2 = t;
          t = SSL_perror(g_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm h_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm y_7 = NULL,b_8 = NULL;
  b_8 = t;
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL,h_8 = NULL;
        t = (ATerm) ATinsert(ATempty, term_o_9);
        h_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_o_9));
        t = g_7(v_14, h_8, t);
        t = filemode_0_0(t);
        e_8 = t;
        t = SSL_S_ISDIR(e_8);
        t = b_8;
        LocalPopChoice(k_9);
        {
          ATerm i_8 = NULL,l_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_s_9), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          i_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_8), term_t_9), v_14);
          l_8 = t;
          t = SSL_concat_strings(l_8);
        }
      }
    else
      {
        t = j_9;
        t = v_14;
      }
  }
  y_7 = t;
  t = SSL_copy(w_14, y_7);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL,b_9 = NULL;
      t = term_w_9;
      y_8 = t;
      t = term_x_9;
      b_9 = t;
      t = term_b_10;
      t = o_7(y_8, b_9, t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = term_g_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_2 = NULL,s_2 = NULL;
      t = term_x_9;
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,c_3 = NULL;
            t = term_w_9;
            t_2 = t;
            t = term_x_9;
            c_3 = t;
            t = term_b_10;
            t = o_7(t_2, c_3, t);
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
            t = term_g_10;
          }
      }
      r_2 = t;
      t = term_m_10;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_10, r_2);
      t = h_7(s_2, r_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm n_6 (ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_29, p_29);
      LocalPopChoice(t_10);
    }
  else
    {
      t = q_10;
      t = SSL_subtr(o_29, p_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm g_9 = NULL,i_9 = NULL,n_9 = NULL,p_9 = NULL;
  t = term_u_10;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 = NULL,r_9 = NULL;
        t = term_w_9;
        q_9 = t;
        t = term_u_10;
        r_9 = t;
        t = term_x_10;
        t = o_7(q_9, r_9, t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = term_y_10;
      }
  }
  i_9 = t;
  t = term_y_10;
  p_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_9, term_y_10);
  t = n_6(i_9, p_9, t);
  n_9 = t;
  t = SSL_int_to_string(n_9);
  g_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_9), term_u_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_m_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_o_9);
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_10, (ATerm) ATinsert(ATempty, term_o_9));
      t = g_7(a_10, c_10, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm d_10 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_10);
  return(t);
}
static ATerm y_6 (ATerm t_82 (ATerm), ATerm f_190, ATerm k_18, ATerm t)
{
  ATerm e_10 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_190, term_z_10);
  t = x_6(t);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_10, k_18);
  t = t_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      if(match_cons(a_11, sym_Stream_1))
        {
          k_10 = ATgetArgument(a_11, 0);
        }
      else
        _fail(t);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(k_10, l_10, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,i_10 = NULL;
  i_10 = t;
  t = xtc_new_file_0_0(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_10, i_10);
  t = y_6(n_0, f_10, i_10, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_10);
  t = xtc_transform_file_2_0(e_103, f_103, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm n_14, ATerm o_14, ATerm t)
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
        ATerm j_3 = NULL,m_3 = NULL;
        t = SSL_int_to_string(b_12);
        j_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), j_3), term_b_11);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_12), term_e_11), i_4), term_d_11), b_12);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm h_12 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = w_87(t);
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(h_12);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_11 = ATgetArgument(t, 0);
              if((i_12 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_17), term_t_17), term_o_17), term_j_17), term_w_16), term_q_16), term_j_16), term_f_16), term_z_15), term_n_15), term_f_15), term_b_15), term_x_14), term_q_14), term_h_14), term_b_14), term_v_13), term_o_13), term_j_13), term_f_13), term_y_12), term_t_12), term_p_12), term_j_12), term_z_11), term_u_11), term_q_11), term_l_11);
        t = fetch_elem_1_0(t_0, t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_12 = NULL,e_13 = NULL;
  o_12 = t;
  {
    ATerm z_17 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            e_13 = ATgetArgument(t, 1);
            {
              ATerm f_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        {
          ATerm j_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL,i_5 = NULL,n_5 = NULL;
              t = e_13;
              {
                ATerm n_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_5 = t;
              t = term_o_18;
              i_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_p_18);
              n_5 = t;
              t = SSL_printnl(i_5, n_5);
              t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATinsert(ATempty, a_5), term_p_18));
              LocalPopChoice(m_18);
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
        t = z_17;
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
  ATerm r_13 = NULL,u_13 = NULL;
  u_13 = t;
  t = fork_0_0(t);
  r_13 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_13;
        t = g_81(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = SSL_waitpid(r_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            if(((ATgetType(s_18) != AT_INT) || (ATgetInt((ATermInt) s_18) != 0)))
              _fail(t);
            {
              ATerm u_18 = ATgetArgument(t, 1);
            }
            {
              ATerm x_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL;
  y_13 = t;
  t = i_104(t);
  t = xtc_find_0_0(t);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_13, y_13);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      ATerm d_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_13, y_13);
      t = z_6(w_13, y_13, t);
      t = term_y_18;
      d_14 = t;
      t = SSL_exit(d_14);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = y_13;
  return(t);
}
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  static ATerm r_15 (ATerm t);
  static ATerm r_15 (ATerm t)
  {
    ATerm m_15 = NULL,p_15 = NULL,q_15 = NULL;
    q_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_15 = ATgetFirst((ATermList) t);
        p_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_5 = NULL,y_5 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(q_15);
          u_5 = t;
          t = p_15;
          t = r_15(t);
          y_5 = t;
          t = (ATerm) ATinsert(CheckATermList(y_5), m_15);
          i_1 = t;
          t = SSLsetAnnotations(i_1, u_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_15;
        t = b_88(t);
      }
    return(t);
  }
  t = r_15(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_14;
    }
  else
    {
      static ATerm x_0 (ATerm t);
      static ATerm x_0 (ATerm t)
      {
        t = not_null(l_14);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_14 = ATgetFirst((ATermList) t);
          if(((l_14 != NULL) && (l_14 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_14;
      t = at_end_1_0(x_0, t);
    }
  return(t);
}
static ATerm r_16 (ATerm x_15, ATerm t)
{
  ATerm y_15 = NULL;
  t = SSL_explode_term(x_15);
  if(match_cons(t, sym__2))
    {
      ATerm b_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_16 = NULL,m_16 = NULL,n_16 = NULL;
  n_16 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_1 (ATerm t);
            static ATerm b_1 (ATerm t)
            {
              t = m_16;
              return(t);
            }
            t = a_16;
            t = at_end_1_0(b_1, t);
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = r_16(n_16, t);
          }
      }
    }
  else
    {
      t = r_16(n_16, t);
    }
  return(t);
}
static ATerm b_7 (ATerm x_96 (ATerm), ATerm w_30, ATerm u_30, ATerm t)
{
  ATerm v_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,h_17 = NULL;
  b_17 = t;
  t = x_96(t);
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_16, w_30, u_30);
  t = p_7(v_16, w_30, u_30, t);
  {
    ATerm h_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL;
        t = term_m_19;
        i_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_16, term_m_19);
        t = o_7(v_16, i_17, t);
        {
          ATerm n_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = n_19;
            }
        }
        LocalPopChoice(j_19);
      }
    else
      {
        t = h_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_16 = ATgetFirst((ATermList) t);
      a_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_16, term_m_19, (ATerm) ATinsert(CheckATermList(a_17), (ATerm) ATinsert(CheckATermList(x_16), w_30)));
  t = lookup_table_0_1(v_16, t);
  h_17 = t;
  t = term_m_19;
  c_17 = t;
  t = (ATerm) ATinsert(CheckATermList(a_17), (ATerm) ATinsert(CheckATermList(x_16), w_30));
  d_17 = t;
  t = h_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(c_17, d_17, e_17, t);
  t = b_17;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_17 = NULL,k_6 = NULL;
      s_17 = t;
      t = term_u_19;
      k_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_17, term_u_19);
      t = f_7(s_17, k_6, t);
      l_17 = t;
      t = SSL_mkstemp(l_17);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm v_17 = NULL;
        t = term_v_19;
        v_17 = t;
        t = SSL_perror(v_17);
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
  t = term_w_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_18 = NULL,h_18 = NULL,i_18 = NULL,l_18 = NULL,t_18 = NULL;
  t = P__tmpdir_0_0(t);
  l_18 = t;
  t = term_x_19;
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_18, term_x_19);
  t = f_7(l_18, t_18, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      h_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_y_19;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_18, term_y_19);
  t = b_7(c_1, h_18, i_18, t);
  t = SSL_close(c_18);
  t = h_18;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_18 = NULL,a_19 = NULL;
      t = v_18;
      t = xtc_new_file_0_0(t);
      z_18 = t;
      t = r_0(t);
      a_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_19, (ATerm) ATinsert(ATinsert(ATempty, z_18), term_x_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_18);
    }
  else
    {
      ATerm c_19 = NULL,d_19 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_18;
      t = xtc_new_file_0_0(t);
      c_19 = t;
      t = r_0(t);
      d_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_19), term_x_9), w_18), term_z_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
    }
  return(t);
}
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,i_19 = NULL,k_19 = NULL,l_19 = NULL;
  g_19 = t;
  t = r_82(t);
  i_19 = t;
  t = term_o_18;
  k_19 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_19), i_19);
  l_19 = t;
  t = SSL_printnl(k_19, l_19);
  t = g_19;
  return(t);
}
static ATerm o_6 (ATerm k_48, ATerm t)
{
  t = SSL_hashtable_keys(k_48);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL;
    s_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), s_19);
    t = o_7(not_null(o_19), s_19, t);
    t_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_19, t_19);
    return(t);
  }
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = lookup_table_0_1(o_19, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_6(p_19, t);
  t = map_1_0(d_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm f_20 = NULL;
  f_20 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_20 = NULL,l_20 = NULL,m_20 = NULL;
        t = term_w_9;
        l_20 = t;
        t = term_u_10;
        m_20 = t;
        t = term_x_10;
        t = o_7(l_20, m_20, t);
        j_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, term_f_17);
        t = geq_0_0(t);
        t = f_20;
        t = d_101(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = f_20;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm p_20 = NULL;
  p_20 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_20 = NULL,w_20 = NULL,y_20 = NULL;
        t = term_w_9;
        w_20 = t;
        t = term_u_10;
        y_20 = t;
        t = term_x_10;
        t = o_7(w_20, y_20, t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_20, term_q_13);
        t = geq_0_0(t);
        t = p_20;
        t = c_101(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = p_20;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
        t = term_w_9;
        h_21 = t;
        t = term_u_10;
        i_21 = t;
        t = term_x_10;
        t = o_7(h_21, i_21, t);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_21, term_w_11);
        t = geq_0_0(t);
        t = b_21;
        t = e_101(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = b_21;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = z_91(t);
  {
    static ATerm e_1 (ATerm t);
    static ATerm e_1 (ATerm t)
    {
      ATerm k_21 = NULL;
      k_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, k_21);
      t = y_91(t);
      return(t);
    }
    t = fetch_1_0(e_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm r_6 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm f_22 (ATerm t);
  static ATerm f_22 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL,c_22 = NULL;
    z_21 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_22 = ATgetFirst((ATermList) t);
            c_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_21;
              {
                static ATerm f_1 (ATerm t);
                static ATerm f_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = q_6(v_91, f_1, a_22, c_22, t);
              }
              t = f_22(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = i_20;
              {
                ATerm d_7 = NULL,w_7 = NULL,d_2 = NULL;
                t = SSLgetAnnotations(z_21);
                d_7 = t;
                t = c_22;
                t = f_22(t);
                w_7 = t;
                t = (ATerm) ATinsert(CheckATermList(w_7), a_22);
                d_2 = t;
                t = SSLsetAnnotations(d_2, d_7);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = f_22(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      if((z_22 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,r_22 = NULL,s_22 = NULL;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
        t = o_7(i_44, j_44, t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
  }
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_22, k_44);
  t = r_6(h_1, r_22, k_44, t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_44, j_44, p_22);
  t = lookup_table_0_1(i_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(j_44, p_22, s_22, t);
  t = o_22;
  return(t);
}
static ATerm t_6 (ATerm g_101 (ATerm), ATerm s_44, ATerm r_44, ATerm t)
{
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    ATerm a_23 = NULL,b_23 = NULL;
    if(match_cons(t, sym__2))
      {
        a_23 = ATgetArgument(t, 0);
        b_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_44, a_23, b_23);
    t = g_101(t);
    return(t);
  }
  t = r_44;
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm g_7 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_access(d_50, e_50);
  return(t);
}
static ATerm r_23 (ATerm l_23, ATerm t)
{
  t = SSL_fclose(l_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL;
  p_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_23 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_23);
            LocalPopChoice(u_20);
          }
        else
          {
            t = s_20;
            t = r_23(p_23, t);
          }
      }
    }
  else
    {
      t = r_23(p_23, t);
    }
  return(t);
}
static ATerm u_6 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm f_7 (ATerm t_66, ATerm u_66, ATerm t)
{
  t = SSL_strcat(t_66, u_66);
  return(t);
}
static ATerm w_6 (ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm s_23 = NULL;
  t = SSL_fopen(p_50, q_50);
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = SSL_stdin_stream();
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  t = SSL_stdout_stream();
  u_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  t = SSL_stderr_stream();
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_23);
  return(t);
}
static ATerm v_25 (ATerm e_24, ATerm t)
{
  ATerm f_24 = NULL;
  t = SSL_explode_term(e_24);
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            f_24 = ATgetFirst((ATermList) x_20);
            {
              ATerm z_20 = (ATerm) ATgetNext((ATermList) x_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_24;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_24;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_24;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_24;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_25 (ATerm i_24, ATerm l_24, ATerm m_24, ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,t_24 = NULL,y_24 = NULL,u_2 = NULL;
  t = SSLgetAnnotations(m_24);
  t_24 = t;
  t = i_24;
  if(match_cons(t, sym_Path_1))
    {
      y_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_24, l_24);
  u_2 = t;
  t = SSLsetAnnotations(u_2, t_24);
  if(match_cons(t, sym__2))
    {
      o_24 = ATgetArgument(t, 0);
      p_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(o_24, p_24, t);
  return(t);
}
static ATerm a_26 (ATerm a_25, ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,i_25 = NULL,v_2 = NULL;
  t = SSLgetAnnotations(c_25);
  f_25 = t;
  t = SSL_is_string(a_25);
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_25, b_25);
  v_2 = t;
  t = SSLsetAnnotations(v_2, f_25);
  if(match_cons(t, sym__2))
    {
      d_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(d_25, e_25, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL,u_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym__2))
    {
      t_25 = ATgetArgument(t, 0);
      u_25 = ATgetArgument(t, 1);
      {
        ATerm a_21 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_25(r_25, t);
            LocalPopChoice(c_21);
          }
        else
          {
            t = a_21;
            {
              ATerm d_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_25(t_25, u_25, r_25, t);
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = d_21;
                  t = a_26(t_25, u_25, r_25, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_25(r_25, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,f_26 = NULL,n_26 = NULL;
  n_26 = t;
  {
    ATerm f_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_26, term_l_21);
        t = x_6(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = f_21;
        {
          ATerm v_8 = NULL,z_8 = NULL;
          t = term_m_21;
          z_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, n_26);
          t = f_7(z_8, n_26, t);
          v_8 = t;
          t = SSL_perror(v_8);
          _fail(t);
        }
      }
  }
  d_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(f_26, t);
  c_26 = t;
  t = d_26;
  t = fclose_0_0(t);
  t = c_26;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_n_21;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_26 = NULL,x_26 = NULL;
      q_26 = t;
      t = (ATerm) ATinsert(ATempty, term_r_21);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_26, (ATerm) ATinsert(ATempty, term_r_21));
      t = g_7(q_26, x_26, t);
      LocalPopChoice(q_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = t;
            if((PushChoice() == 0))
              {
                ATerm a_27 = NULL,c_27 = NULL;
                a_27 = t;
                t = (ATerm) ATinsert(ATempty, term_o_9);
                c_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_27, (ATerm) ATinsert(ATempty, term_o_9));
                t = g_7(a_27, c_27, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_21;
              }
            t = debug_1_0(k_1, t);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = debug_1_0(l_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_w_21;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  t = term_o_18;
  f_28 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  g_28 = t;
  t = SSL_printnl(f_28, g_28);
  t = e_28;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym__3))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
      l_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_6(j_28, k_28, l_28, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,r_28 = NULL;
  n_28 = t;
  t = term_o_18;
  o_28 = t;
  t = (ATerm) ATinsert(ATempty, term_y_21);
  r_28 = t;
  t = SSL_printnl(o_28, r_28);
  t = n_28;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,v_28 = NULL;
  s_28 = t;
  t = term_o_18;
  t_28 = t;
  t = (ATerm) ATinsert(ATempty, term_x_21);
  v_28 = t;
  t = SSL_printnl(t_28, v_28);
  t = s_28;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,i_27 = NULL,l_27 = NULL,n_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,v_27 = NULL,w_27 = NULL,z_27 = NULL,b_28 = NULL;
  d_27 = t;
  t = if_verbose5_1_0(n_1, t);
  {
    ATerm b_22 = t;
    if((PushChoice() == 0))
      {
        ATerm c_28 = NULL,d_28 = NULL;
        t = term_d_22;
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_27);
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Imported_1, d_27));
        t = o_7(c_28, d_28, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_22;
      }
  }
  f_27 = t;
  t = term_d_22;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, term_e_22, (ATerm) ATinsert(ATempty, d_27));
  t = lookup_table_0_1(t_27, t);
  b_28 = t;
  t = term_e_22;
  v_27 = t;
  t = (ATerm) ATinsert(ATempty, d_27);
  w_27 = t;
  t = b_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(v_27, w_27, z_27, t);
  t = f_27;
  t = if_verbose4_1_0(q_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  e_27 = t;
  t = term_d_22;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, e_27);
  t = t_6(v_1, s_27, e_27, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_d_22;
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, (ATerm)ATmakeAppl(sym_Imported_1, d_27), (ATerm) ATempty);
  t = lookup_table_0_1(g_27, t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_27);
  i_27 = t;
  t = (ATerm) ATempty;
  l_27 = t;
  t = r_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(i_27, l_27, n_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, (ATerm)ATmakeAppl(sym_Imported_1, d_27), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_29;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_29 = ATgetFirst((ATermList) t);
          u_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL,l_9 = NULL,m_9 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(s_29);
            h_9 = t;
            t = t_29;
            t = c_96(t);
            l_9 = t;
            t = u_29;
            t = filter_1_0(c_96, t);
            m_9 = t;
            t = (ATerm) ATinsert(CheckATermList(m_9), l_9);
            y_2 = t;
            t = SSLsetAnnotations(y_2, h_9);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = u_29;
            t = filter_1_0(c_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  static ATerm z_29 (ATerm t);
  static ATerm z_29 (ATerm t)
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        t = z_29(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = p_85(t);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_30 = NULL,d_30 = NULL;
      t = term_w_9;
      c_30 = t;
      t = term_m_22;
      d_30 = t;
      t = term_n_22;
      t = o_7(c_30, d_30, t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm q_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_30 = NULL;
            t = term_u_22;
            g_30 = t;
            t = SSL_getenv(g_30);
            LocalPopChoice(t_22);
          }
        else
          {
            t = q_22;
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
  t = term_v_22;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm n_30 = NULL,b_31 = NULL;
  t = term_d_22;
  n_30 = t;
  t = term_w_22;
  b_31 = t;
  t = term_x_22;
  t = o_7(n_30, b_31, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm y_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_22;
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  t = if_verbose5_1_0(z_1, t);
  i_30 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_30 = NULL,k_30 = NULL;
        t = term_d_22;
        j_30 = t;
        t = term_e_22;
        k_30 = t;
        t = term_f_23;
        t = o_7(j_30, k_30, t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm m_30 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          m_30 = t;
          t = repeat_2_0(b_2, _id, t);
          t = m_30;
        }
      }
  }
  t = i_30;
  t = if_verbose5_1_0(c_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm e_32 (ATerm g_31, ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  t = term_d_22;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_31);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, g_31));
  t = o_7(j_31, k_31, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_23 = ATgetFirst((ATermList) t);
      if(match_cons(h_23, sym__2))
        {
          ATerm j_23 = ATgetArgument(h_23, 0);
          i_31 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm i_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_31;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_d_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_31 = NULL,n_31 = NULL,p_31 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      p_31 = t;
      if(match_cons(t, sym__2))
        {
          l_31 = ATgetArgument(t, 0);
          n_31 = ATgetArgument(t, 1);
          {
            ATerm q_23 = t;
            int w_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_31 = NULL,t_31 = NULL,w_31 = NULL;
                t = term_d_22;
                t_31 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_31);
                w_31 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, l_31));
                t = o_7(t_31, w_31, t);
                {
                  static ATerm k_2 (ATerm t);
                  static ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((n_31 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((s_31 != NULL) && (s_31 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_31 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                }
                t = not_null(s_31);
                LocalPopChoice(w_23);
              }
            else
              {
                t = q_23;
                t = e_32(p_31, t);
              }
          }
        }
      else
        {
          t = e_32(p_31, t);
        }
      t = if_verbose5_1_0(m_2, t);
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      {
        ATerm d_32 = NULL,y_9 = NULL,z_9 = NULL;
        d_32 = t;
        t = term_o_18;
        y_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), d_32), term_x_23);
        z_9 = t;
        t = SSL_printnl(y_9, z_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), d_32), term_x_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_7 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm g_32 = NULL;
  t = lookup_table_0_1(e_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(f_45, g_32, t);
  return(t);
}
static ATerm i_7 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  j_32 = t;
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        t = o_7(q_43, r_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_24 = ATgetFirst((ATermList) t);
            i_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_24);
        {
          ATerm k_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, i_32);
          t = lookup_table_0_1(q_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_7(r_43, i_32, k_32, t);
          t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, i_32);
        }
      }
    else
      {
        t = z_23;
        {
          ATerm m_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
          t = lookup_table_0_1(q_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_7(r_43, m_32, t);
          t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        }
      }
  }
  t = j_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL;
  s_32 = t;
  t = u_96(t);
  q_32 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_32 = NULL;
        t = term_m_19;
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_32, term_m_19);
        t = o_7(q_32, w_32, t);
        {
          ATerm g_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_24;
            }
        }
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_32 = ATgetFirst((ATermList) t);
      o_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_32, term_m_19, o_32);
  t = lookup_table_0_1(q_32, t);
  v_32 = t;
  t = term_m_19;
  t_32 = t;
  t = v_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(t_32, o_32, u_32, t);
  t = p_32;
  {
    static ATerm w_2 (ATerm t);
    static ATerm w_2 (ATerm t)
    {
      ATerm x_32 = NULL;
      x_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_32, x_32);
      t = i_7(q_32, x_32, t);
      return(t);
    }
    t = map_1_0(w_2, t);
  }
  t = s_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm h_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_100(t);
      t = o_100(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = h_24;
      t = o_100(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,i_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
  i_33 = t;
  t = t_96(t);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, term_m_19);
  {
    ATerm k_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_24 = ATgetArgument(t, 0);
            ATerm r_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_m_19;
        w_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_33, term_m_19);
        t = o_7(b_33, w_33, t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATempty;
      }
  }
  l_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_33, term_m_19, (ATerm) ATinsert(CheckATermList(l_33), (ATerm) ATempty));
  t = lookup_table_0_1(b_33, t);
  p_33 = t;
  t = term_m_19;
  m_33 = t;
  t = (ATerm) ATinsert(CheckATermList(l_33), (ATerm) ATempty);
  n_33 = t;
  t = p_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(m_33, n_33, o_33, t);
  t = i_33;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_w_19;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  {
    ATerm s_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_34);
        LocalPopChoice(u_24);
      }
    else
      {
        t = s_24;
        t = i_34;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm a_34 = NULL;
  static ATerm z_2 (ATerm t);
  static ATerm z_2 (ATerm t)
  {
    ATerm b_34 = NULL;
    b_34 = t;
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_34 = NULL,f_34 = NULL;
          t = term_w_19;
          e_34 = t;
          t = term_m_19;
          f_34 = t;
          t = term_x_24;
          t = o_7(e_34, f_34, t);
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_34 != NULL) && (a_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_34 = ATgetFirst((ATermList) t);
        {
          ATerm z_24 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_34;
    t = map_1_0(b_3, t);
    t = b_34;
    t = end_scope_1_0(d_3, t);
    return(t);
  }
  t = begin_scope_1_0(x_2, t);
  t = restore_always_2_0(r_103, z_2, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  t = term_y_19;
  t = whoami_0_0(t);
  n_34 = t;
  t = term_o_18;
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_25), n_34), term_g_25);
  q_34 = t;
  t = SSL_printnl(p_34, q_34);
  t = term_y_10;
  o_34 = t;
  t = SSL_exit(o_34);
  t = m_34;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-k"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = SSL_string_to_int(v_34);
  w_34 = t;
  t = term_j_25;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, w_34);
  t = r_7(x_34, w_34, t);
  t = v_34;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, i_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-S"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_u_10;
  a_35 = t;
  t = term_n_25;
  b_35 = t;
  t = term_q_25;
  t = r_7(a_35, b_35, t);
  t = term_s_25;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm e_35 = NULL,h_35 = NULL,i_35 = NULL;
  e_35 = t;
  t = SSL_string_to_int(e_35);
  h_35 = t;
  t = term_u_10;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, h_35);
  t = r_7(i_35, h_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_35);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL;
  t = term_z_25;
  j_35 = t;
  t = term_y_19;
  k_35 = t;
  t = term_b_26;
  t = r_7(j_35, k_35, t);
  t = term_e_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, r_3, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_3, u_3, x_3, t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = Option_3_0(a_4, e_4, h_4, t);
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  t = term_w_9;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, r_48, s_48);
  t = lookup_table_0_1(n_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(r_48, s_48, o_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_9, r_48, s_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,x_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
      t = term_y_19;
      t = g_0(t);
      z_35 = t;
      t = term_l_26;
      a_36 = t;
      t = term_m_26;
      b_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_26, term_m_26, z_35);
      t = p_7(a_36, b_36, z_35, t);
      _fail(t);
    }
  else
    {
      ATerm e_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_35 = ATgetFirst((ATermList) t);
          x_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_35;
      t = d_0(t);
      t = term_y_19;
      t = f_0(t);
      e_36 = t;
      t = (ATerm) ATinsert(CheckATermList(x_35), e_36);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  if(match_string(t, "-o"))
    {
      t = h_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_36;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm i_36 = NULL,n_36 = NULL;
  i_36 = t;
  t = term_x_9;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, i_36);
  t = r_7(n_36, i_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_36);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, n_4, t);
  return(t);
}
static ATerm p_7 (ATerm l_43, ATerm m_43, ATerm k_43, ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,x_36 = NULL,z_36 = NULL,a_37 = NULL;
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
  {
    ATerm p_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            ATerm t_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
        t = o_7(l_43, m_43, t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = p_26;
        t = (ATerm) ATempty;
      }
  }
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_43, m_43, (ATerm) ATinsert(CheckATermList(u_36), k_43));
  t = lookup_table_0_1(l_43, t);
  a_37 = t;
  t = (ATerm) ATinsert(CheckATermList(u_36), k_43);
  x_36 = t;
  t = a_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(m_43, x_36, z_36, t);
  t = t_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,p_37 = NULL,r_37 = NULL,s_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_37 = NULL,v_37 = NULL,y_37 = NULL;
      t = term_y_19;
      t = o_0(t);
      t_37 = t;
      t = term_l_26;
      v_37 = t;
      t = term_m_26;
      y_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_l_26, term_m_26, t_37);
      t = p_7(v_37, y_37, t_37, t);
      _fail(t);
    }
  else
    {
      ATerm c_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          p_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_37 = ATgetFirst((ATermList) t);
          s_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_37;
      t = l_0(t);
      t = r_37;
      t = m_0(t);
      c_38 = t;
      t = (ATerm) ATinsert(CheckATermList(s_37), c_38);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "-i"))
    {
      t = e_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  f_38 = t;
  t = term_z_19;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, f_38);
  t = r_7(g_38, f_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_38);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_19;
  t = whoami_0_0(t);
  h_38 = t;
  t = term_o_18;
  j_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_26), h_38);
  k_38 = t;
  t = SSL_printnl(j_38, k_38);
  t = term_y_10;
  i_38 = t;
  t = SSL_exit(i_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  t = term_w_9;
  l_38 = t;
  t = term_w_26;
  m_38 = t;
  t = term_y_26;
  t = o_7(l_38, m_38, t);
  return(t);
}
static ATerm j_7 (ATerm i_29, ATerm j_29, ATerm t)
{
  ATerm z_26 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_29, j_29);
      LocalPopChoice(b_27);
    }
  else
    {
      t = z_26;
      t = SSL_addr(i_29, j_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_38;
      t = y_94(t);
    }
  else
    {
      ATerm t_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_38 = ATgetFirst((ATermList) t);
          q_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_38;
      t = foldr_2_0(y_94, z_94, t);
      t_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_38, t_38);
      t = z_94(t);
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
  t = term_n_25;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      r_10 = ATgetArgument(t, 0);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(r_10, s_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_38 = NULL,n_10 = NULL,o_10 = NULL;
  t = times_0_0(t);
  o_10 = t;
  t = SSL_explode_term(o_10);
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      n_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_10;
  t = foldr_2_0(s_4, u_4, t);
  w_38 = t;
  t = SSL_TicksToSeconds(w_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  if(match_cons(t, sym__2))
    {
      i_39 = ATgetArgument(t, 0);
      j_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_39;
        if((i_39 != t))
          {
            _fail(t);
          }
        t = h_39;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
        {
          ATerm m_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_39, j_39);
              LocalPopChoice(o_27);
            }
          else
            {
              t = m_27;
              t = SSL_gtr(i_39, j_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm q_39 = NULL;
  q_39 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL,t_39 = NULL,w_39 = NULL;
        t = term_w_9;
        t_39 = t;
        t = term_u_10;
        w_39 = t;
        t = term_x_10;
        t = o_7(t_39, w_39, t);
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_39, term_y_10);
        t = geq_0_0(t);
        t = q_39;
        t = z_100(t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = q_39;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm z_39 = NULL,b_40 = NULL,d_40 = NULL,e_40 = NULL;
  t = run_time_0_0(t);
  z_39 = t;
  t = term_y_19;
  t = whoami_0_0(t);
  b_40 = t;
  t = term_o_18;
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_27), z_39), term_d_11), b_40);
  e_40 = t;
  t = SSL_printnl(d_40, e_40);
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_27), z_39), term_d_11), b_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_25;
  f_40 = t;
  t = SSL_exit(f_40);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL;
  q_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_40 = ATgetArgument(t, 0);
          {
            ATerm o_11 = NULL,a_3 = NULL;
            t = SSLgetAnnotations(q_40);
            o_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_40);
            a_3 = t;
            t = SSLsetAnnotations(a_3, o_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL,j_40 = NULL;
      t = term_w_9;
      i_40 = t;
      t = term_a_28;
      j_40 = t;
      t = term_h_28;
      t = o_7(i_40, j_40, t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = fetch_1_0(w_4, t);
    }
  t = k_105(t);
  return(t);
}
static ATerm s_7 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_hashtable_put(f_48, d_48, e_48);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_40);
  return(t);
}
static ATerm t_7 (ATerm g_48, ATerm h_48, ATerm t)
{
  t = SSL_hashtable_get(h_48, g_48);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_44, ATerm t)
{
  ATerm b_41 = NULL;
  t = table_hashtable_0_0(t);
  b_41 = t;
  {
    ATerm i_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_11 = NULL;
        t = b_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_7(x_44, y_11, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = i_28;
        {
          ATerm l_12 = NULL;
          t = x_44;
          t = table_create_0_0(t);
          t = b_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(x_44, l_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_hashtable_create(l_48, m_48);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL;
  f_41 = t;
  t = term_p_28;
  j_41 = t;
  t = term_q_28;
  k_41 = t;
  t = f_41;
  t = new_hashtable_0_2(j_41, k_41, t);
  g_41 = t;
  t = f_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(f_41, g_41, h_41, t);
  t = f_41;
  return(t);
}
static ATerm l_7 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm l_41 = NULL;
  t = SSL_hashtable_remove(j_48, i_48);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_41);
  return(t);
}
static ATerm m_7 (ATerm n_48, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_hashtable_destroy(n_48);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  t = SSL_table_hashtable();
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  o_41 = t;
  t = table_hashtable_0_0(t);
  p_41 = t;
  t = lookup_table_0_1(o_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(r_41, t);
  t = p_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(o_41, q_41, t);
  t = o_41;
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm g_42 (ATerm t);
  static ATerm g_42 (ATerm t)
  {
    ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL;
    d_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_42;
      }
    else
      {
        ATerm u_12 = NULL,z_12 = NULL,a_13 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_42 = ATgetFirst((ATermList) t);
            f_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        u_12 = t;
        t = e_42;
        t = k_87(t);
        z_12 = t;
        t = f_42;
        t = g_42(t);
        a_13 = t;
        t = (ATerm) ATinsert(CheckATermList(a_13), z_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, u_12);
      }
    return(t);
  }
  t = g_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_42 = ATgetFirst((ATermList) t);
      k_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_42 = NULL,p_42 = NULL;
        static ATerm x_4 (ATerm t);
        static ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_42)), not_null(p_42));
          return(t);
        }
        t = k_42;
        t = j_0(t);
        if(((o_42 != NULL) && (o_42 != t)))
          _fail(t);
        else
          o_42 = t;
        t = j_42;
        t = h_0(t);
        if(((p_42 != NULL) && (p_42 != t)))
          _fail(t);
        else
          p_42 = t;
        t = k_42;
        t = reverse_acc_2_0(h_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_19;
      t = j_0(t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,c_6 = NULL;
  x_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_42);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_42);
  c_6 = t;
  t = SSLsetAnnotations(c_6, v_42);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_42), term_u_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_42 = NULL,u_42 = NULL;
      t = term_w_9;
      t_42 = t;
      t = term_w_26;
      u_42 = t;
      t = term_y_26;
      t = o_7(t_42, u_42, t);
      LocalPopChoice(x_28);
    }
  else
    {
      t = w_28;
      t = fetch_1_0(y_4, t);
    }
  t = term_y_28;
  t = echo_0_0(t);
  t = term_l_26;
  r_42 = t;
  t = term_m_26;
  s_42 = t;
  t = term_z_28;
  t = o_7(r_42, s_42, t);
  t = reverse_acc_2_0(_id, z_4, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm h_44 (ATerm t);
  static ATerm h_44 (ATerm t)
  {
    ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
    e_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_44 = ATgetFirst((ATermList) t);
        g_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_29 = t;
      int b_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = NULL,t_13 = NULL,e_6 = NULL;
          t = SSLgetAnnotations(e_44);
          m_13 = t;
          t = f_44;
          t = u_87(t);
          t_13 = t;
          t = (ATerm) ATinsert(CheckATermList(g_44), t_13);
          e_6 = t;
          t = SSLsetAnnotations(e_6, m_13);
          LocalPopChoice(b_29);
        }
      else
        {
          t = a_29;
          {
            ATerm g_14 = NULL,r_14 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(e_44);
            g_14 = t;
            t = g_44;
            t = h_44(t);
            r_14 = t;
            t = (ATerm) ATinsert(CheckATermList(r_14), f_44);
            h_6 = t;
            t = SSLsetAnnotations(h_6, g_14);
          }
        }
    }
    return(t);
  }
  t = h_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm q_44 = NULL,v_44 = NULL,w_44 = NULL;
  q_44 = t;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = q_44;
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
            t = q_44;
          }
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATinsert(ATempty, q_44);
      }
  }
  v_44 = t;
  t = term_g_10;
  w_44 = t;
  t = SSL_printnl(w_44, v_44);
  t = q_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  t = term_w_9;
  g_45 = t;
  t = term_w_26;
  h_45 = t;
  t = term_y_26;
  t = o_7(g_45, h_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  t = term_g_29;
  i_45 = t;
  t = term_y_19;
  j_45 = t;
  t = term_h_29;
  t = r_7(i_45, j_45, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  t = term_g_29;
  m_45 = t;
  t = term_y_19;
  n_45 = t;
  t = term_h_29;
  t = r_7(m_45, n_45, t);
  t = term_l_29;
  k_45 = t;
  t = term_y_19;
  l_45 = t;
  t = term_m_29;
  t = r_7(k_45, l_45, t);
  t = term_n_29;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_5, d_5, o_5, t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = r_29;
      t = Option_3_0(r_5, s_5, t_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,k_7 = NULL;
  t_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_45 = ATgetFirst((ATermList) t);
      q_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  o_45 = t;
  t = p_45;
  t = z_73(t);
  r_45 = t;
  t = q_45;
  t = a_74(t);
  s_45 = t;
  t = (ATerm) ATinsert(CheckATermList(s_45), r_45);
  k_7 = t;
  t = SSLsetAnnotations(k_7, o_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,d_46 = NULL,e_46 = NULL,x_7 = NULL;
  y_45 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_29;
        t = i_107(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
      }
  }
  t = y_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_46 = ATgetFirst((ATermList) t);
      b_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_45);
  z_45 = t;
  t = term_w_26;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_26, a_46);
  t = r_7(e_46, a_46, t);
  t = b_46;
  {
    static ATerm o_46 (ATerm t);
    static ATerm o_46 (ATerm t)
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_46 = NULL;
              h_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_46;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              t = i_107(t);
              t = Cons_2_0(_id, o_46, t);
            }
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm k_46 = NULL,l_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_46 = ATgetFirst((ATermList) t);
                l_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_46), (ATerm) ATmakeAppl(sym_Undefined_1, k_46));
          }
        }
      return(t);
    }
    t = o_46(t);
  }
  d_46 = t;
  t = (ATerm) ATinsert(CheckATermList(d_46), (ATerm) ATmakeAppl(sym_Program_1, a_46));
  x_7 = t;
  t = SSLsetAnnotations(x_7, z_45);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_47 = NULL;
  b_47 = t;
  if(match_string(t, "--help"))
    {
      t = b_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_47;
        }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  t = term_a_28;
  c_47 = t;
  t = term_y_19;
  d_47 = t;
  t = term_h_30;
  t = r_7(c_47, d_47, t);
  t = term_l_30;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_o_30;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL;
  v_46 = t;
  t = term_l_26;
  w_46 = t;
  t = term_p_30;
  t = lookup_table_0_1(w_46, t);
  a_47 = t;
  t = term_m_26;
  x_46 = t;
  t = (ATerm) ATempty;
  y_46 = t;
  t = a_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(x_46, y_46, z_46, t);
  t = v_46;
  {
    static ATerm v_5 (ATerm t);
    static ATerm v_5 (ATerm t)
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          {
            ATerm s_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_5, x_5, z_5, t);
                LocalPopChoice(t_30);
              }
            else
              {
                t = s_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_5, t);
  }
  {
    ATerm v_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_47 = NULL;
        o_47 = t;
        {
          ATerm y_30 = t;
          int z_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_15 = NULL;
              t = o_47;
              {
                ATerm a_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_15 = NULL,k_15 = NULL;
                    t = term_w_9;
                    j_15 = t;
                    t = term_a_28;
                    k_15 = t;
                    t = term_h_28;
                    t = o_7(j_15, k_15, t);
                    LocalPopChoice(c_31);
                  }
                else
                  {
                    t = a_31;
                    t = fetch_1_0(a_6, t);
                  }
              }
              t = o_47;
              t = default_system_usage_0_0(t);
              t = term_n_25;
              i_15 = t;
              t = SSL_exit(i_15);
              LocalPopChoice(z_30);
            }
          else
            {
              t = y_30;
              {
                ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
                t = term_w_9;
                u_15 = t;
                t = term_g_29;
                v_15 = t;
                t = term_d_31;
                t = o_7(u_15, v_15, t);
                t = o_47;
                t = default_system_about_0_0(t);
                t = term_n_25;
                t_15 = t;
                t = SSL_exit(t_15);
              }
            }
        }
        LocalPopChoice(x_30);
      }
    else
      {
        t = v_30;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
              static ATerm b_6 (ATerm t);
              static ATerm b_6 (ATerm t)
              {
                ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,p_8 = NULL;
                u_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_47);
                s_47 = t;
                t = t_47;
                if(((t_46 != NULL) && (t_46 != t)))
                  _fail(t);
                else
                  t_46 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_47);
                p_8 = t;
                t = SSLsetAnnotations(p_8, s_47);
                return(t);
              }
              t = fetch_1_0(b_6, t);
              t = term_o_18;
              q_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_46)), term_h_31);
              r_47 = t;
              t = SSL_printnl(q_47, r_47);
              t = (ATerm) ATmakeAppl(sym__2, term_o_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_46)), term_h_31));
              t = default_system_usage_0_0(t);
              t = term_y_10;
              p_47 = t;
              t = SSL_exit(p_47);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
            }
        }
      }
  }
  u_46 = t;
  t = term_l_26;
  t = table_destroy_0_0(t);
  t = u_46;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,o_48 = NULL;
  t = parse_options_1_0(m_105, t);
  z_47 = t;
  t = term_m_31;
  t = table_create_0_0(t);
  t = term_m_31;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_31, term_o_31, z_47);
  t = lookup_table_0_1(a_48, t);
  o_48 = t;
  t = term_o_31;
  b_48 = t;
  t = o_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(b_48, z_47, c_48, t);
  t = z_47;
  t = o_105(t);
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_105, t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm u_31 = t;
          int v_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_31);
            }
          else
            {
              t = u_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm b_32 = t;
              int c_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_6, i_6, j_6, t);
                  LocalPopChoice(c_32);
                }
              else
                {
                  t = b_32;
                  {
                    ATerm f_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = f_32;
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
static ATerm f_6 (ATerm t)
{
  t = xtc_temp_files_1_0(l_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_l_32;
  y_48 = t;
  t = term_y_19;
  z_48 = t;
  t = term_n_32;
  t = r_7(y_48, z_48, t);
  t = term_r_32;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
      t = term_w_9;
      c_49 = t;
      t = term_z_19;
      d_49 = t;
      t = term_c_33;
      t = o_7(c_49, d_49, t);
      b_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_49);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = term_m_10;
    }
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_49 = NULL,k_49 = NULL;
        k_49 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_49 = ATgetArgument(t, 0);
            {
              ATerm d_16 = NULL,s_8 = NULL;
              t = SSLgetAnnotations(k_49);
              d_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_49);
              s_8 = t;
              t = SSLsetAnnotations(s_8, d_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_49;
          }
        LocalPopChoice(e_33);
        t = xtc_transform_file_2_0(m_6, p_6, t);
      }
    else
      {
        t = d_33;
        t = xtc_transform_term_2_0(a_7, c_7, t);
      }
  }
  {
    ATerm f_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_49 = NULL,u_49 = NULL;
        u_49 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_49 = ATgetArgument(t, 0);
            {
              ATerm k_16 = NULL,t_8 = NULL;
              t = SSLgetAnnotations(u_49);
              k_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_49);
              t_8 = t;
              t = SSLsetAnnotations(t_8, k_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_49;
          }
        LocalPopChoice(g_33);
        t = xtc_transform_file_2_0(q_7, pass_verbose_0_0, t);
      }
    else
      {
        t = f_33;
        t = xtc_transform_term_2_0(u_7, pass_verbose_0_0, t);
      }
  }
  {
    ATerm h_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL,c_50 = NULL;
        c_50 = t;
        if(match_cons(t, sym_FILE_1))
          {
            b_50 = ATgetArgument(t, 0);
            {
              ATerm y_16 = NULL,f_9 = NULL;
              t = SSLgetAnnotations(c_50);
              y_16 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_50);
              f_9 = t;
              t = SSLsetAnnotations(f_9, y_16);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = c_50;
          }
        LocalPopChoice(j_33);
        t = xtc_transform_file_2_0(v_7, pass_verbose_0_0, t);
      }
    else
      {
        t = h_33;
        t = xtc_transform_term_2_0(z_7, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_49 = NULL;
  t = term_q_33;
  t = xtc_find_0_0(t);
  l_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_49), term_r_33);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm m_49 = NULL;
  t = term_q_33;
  t = xtc_find_0_0(t);
  m_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_49), term_r_33);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_s_33;
  return(t);
}
static ATerm u_7 (ATerm t)
{
  t = term_s_33;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_t_33;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm io_pp_box_0_0 (ATerm t)
{
  t = option_wrap_4_0(d_6, default_usage_0_0, _id, f_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_box_0_0(t);
  return(t);
}
