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
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_v_30;
ATerm term_r_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_u_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_x_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_w_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_w_19;
ATerm term_n_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_c_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_q_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_y_10);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_e_11, term_x_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_a_12, term_d_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_k_13, term_l_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_u_13, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_y_13, term_z_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_j_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_u_14, term_x_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_f_15, term_h_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_c_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_k_16, term_l_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_u_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_o_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_y_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_i_18, term_j_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_v_18, term_w_18);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_x_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_g_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_q_22);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_w_19);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_y_10, term_x_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_26, term_f_20);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_n_27);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_k_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_z_26);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_f_20);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_f_20);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_f_20);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__3, term_w_26, term_z_26, (ATerm) ATempty);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_b_29);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_f_20);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_g_20);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("C.pp.af", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox-format", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm p_7 (ATerm e_20, ATerm s_221, ATerm t);
ATerm at_suffix_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm f_115 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm s_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm x_6 (ATerm o_29, ATerm p_29, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm g_7 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm j_7 (ATerm t_82 (ATerm), ATerm f_190, ATerm k_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t);
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm g_81 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm i_104 (ATerm), ATerm t);
static ATerm r_14 (ATerm g_14, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm x_96 (ATerm), ATerm w_30, ATerm u_30, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_6 (ATerm q_19, ATerm r_19, ATerm t);
ATerm at_last_1_0 (ATerm m_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t);
static ATerm z_24 (ATerm o_23, ATerm p_23, ATerm r_23, ATerm t);
ATerm split_at_dot_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm remove_extension_0_0 (ATerm t);
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t);
static ATerm z_6 (ATerm k_48, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm b_7 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm c_7 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm d_7 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t);
static ATerm e_7 (ATerm g_101 (ATerm), ATerm s_44, ATerm r_44, ATerm t);
static ATerm r_7 (ATerm d_50, ATerm e_50, ATerm t);
static ATerm a_32 (ATerm p_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm g_18, ATerm t);
static ATerm q_7 (ATerm v_66, ATerm w_66, ATerm t);
static ATerm h_7 (ATerm p_50, ATerm q_50, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_34 (ATerm q_32, ATerm t);
static ATerm d_34 (ATerm w_32, ATerm y_32, ATerm z_32, ATerm t);
static ATerm e_34 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm i_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm s_39 (ATerm h_38, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_7 (ATerm e_45, ATerm f_45, ATerm t);
static ATerm t_7 (ATerm q_43, ATerm r_43, ATerm t);
ATerm end_scope_1_0 (ATerm u_96 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_96 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm r_103 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_8 (ATerm r_48, ATerm s_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_8 (ATerm l_43, ATerm m_43, ATerm k_43, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_7 (ATerm i_29, ATerm j_29, ATerm t);
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t);
static ATerm d_8 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t);
static ATerm e_8 (ATerm g_48, ATerm h_48, ATerm t);
ATerm lookup_table_0_1 (ATerm x_44, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_48, ATerm m_48, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_7 (ATerm i_48, ATerm j_48, ATerm t);
static ATerm x_7 (ATerm n_48, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t);
static ATerm i_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm io_pp_c_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
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
    ATerm r_2 = t;
    int l_8 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym__2, o_1, e_0);
        t = s_7(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(l_8);
      }
    else
      {
        t = r_2;
        {
          ATerm n_8 = t;
          int o_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = n_1;
              t = p_0(t);
              z_0 = t;
              {
                ATerm p_8 = t;
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
                    t = p_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, z_0);
              t = s_7(o_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(o_8);
            }
          else
            {
              t = n_8;
              t = n_1;
              t = p_0(t);
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
ATerm last_0_0 (ATerm t)
{
  ATerm e_2 = NULL,l_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_2;
    }
  else
    {
      t = l_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm p_7 (ATerm e_20, ATerm s_221, ATerm t)
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
  static ATerm j_3 (ATerm t);
  static ATerm j_3 (ATerm t)
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_88(t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        {
          ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,l_1 = NULL,u_1 = NULL,t_0 = NULL;
          g_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_3 = ATgetFirst((ATermList) t);
              i_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_3);
          l_1 = t;
          t = i_3;
          t = j_3(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), h_3);
          t_0 = t;
          t = SSLsetAnnotations(t_0, l_1);
        }
      }
    return(t);
  }
  t = j_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm l_3 = NULL,o_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm p_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,c_4 = NULL,y_0 = NULL,x_0 = NULL;
    c_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_3 = ATgetFirst((ATermList) t);
        x_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    u_3 = t;
    t = v_3;
    t = x_87(t);
    y_3 = t;
    t = (ATerm) ATinsert(CheckATermList(x_3), y_3);
    x_0 = t;
    t = SSLsetAnnotations(x_0, u_3);
    a_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_3 = ATgetFirst((ATermList) t);
        t_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_4);
    p_3 = t;
    t = t_3;
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    t = (ATerm) ATinsert(CheckATermList(t_3), r_3);
    y_0 = t;
    t = SSLsetAnnotations(y_0, p_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, not_null(l_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm f_115 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,s_4 = NULL;
  ATerm s_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(f_115, t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = s_8;
      {
        ATerm l_4 = NULL;
        l_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm w_8 = ATgetFirst((ATermList) t);
              ATerm x_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_4;
          t = list_tokenize_1_0(f_115, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm z_8 = ATgetFirst((ATermList) t);
          ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, p_4);
        }
      else
        {
          ATerm b_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_9 = ATgetFirst((ATermList) t);
              ATerm j_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_4;
          t = list_tokenize_1_0(f_115, t);
          b_5 = t;
          t = (ATerm) ATinsert(CheckATermList(b_5), p_4);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  t = SSL_implode_string(r_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,h_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL,d_1 = NULL;
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_5);
  h_5 = t;
  t = SSL_explode_string(n_5);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_5, o_5);
  d_1 = t;
  t = SSLsetAnnotations(d_1, h_5);
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm q_5 = NULL;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_5, c_5);
      t = p_7(q_5, c_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm n_6 = NULL;
  n_6 = t;
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL;
        t = SSL_filemode(n_6);
        if(match_cons(t, sym__2))
          {
            b_2 = ATgetArgument(t, 0);
            {
              ATerm o_9 = ATgetArgument(t, 1);
              if(((ATgetType(o_9) != AT_INT) || (ATgetInt((ATermInt) o_9) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_2;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm i_2 = NULL,j_2 = NULL;
          t = term_q_9;
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, n_6);
          t = q_7(j_2, n_6, t);
          i_2 = t;
          t = SSL_perror(i_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm s_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm u_6 = NULL,w_6 = NULL;
  w_6 = t;
  {
    ATerm r_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,l_7 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_9);
        l_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_v_9));
        t = r_7(v_14, l_7, t);
        t = filemode_0_0(t);
        a_7 = t;
        t = SSL_S_ISDIR(a_7);
        t = w_6;
        LocalPopChoice(t_9);
        {
          ATerm n_7 = NULL,o_7 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_c_10), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          n_7 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_7), term_e_10), v_14);
          o_7 = t;
          t = SSL_concat_strings(o_7);
        }
      }
    else
      {
        t = r_9;
        t = v_14;
      }
  }
  u_6 = t;
  t = SSL_copy(w_14, u_6);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_9 = NULL,b_9 = NULL;
      t = term_h_10;
      a_9 = t;
      t = term_i_10;
      b_9 = t;
      t = term_j_10;
      t = z_7(a_9, b_9, t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_l_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_2 = NULL,s_2 = NULL;
      t = term_i_10;
      {
        ATerm m_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL;
            t = term_h_10;
            t_2 = t;
            t = term_i_10;
            u_2 = t;
            t = term_j_10;
            t = z_7(t_2, u_2, t);
            LocalPopChoice(p_10);
          }
        else
          {
            t = m_10;
            t = term_l_10;
          }
      }
      n_2 = t;
      t = term_r_10;
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_10, n_2);
      t = s_7(s_2, n_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm s_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_8;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm x_6 (ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm t_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_29, p_29);
      LocalPopChoice(v_10);
    }
  else
    {
      t = t_10;
      t = SSL_subtr(o_29, p_29);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,g_9 = NULL,i_9 = NULL;
  t = term_y_10;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_9 = NULL,n_9 = NULL;
        t = term_h_10;
        k_9 = t;
        t = term_y_10;
        n_9 = t;
        t = term_d_11;
        t = z_7(k_9, n_9, t);
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = term_e_11;
      }
  }
  e_9 = t;
  t = term_e_11;
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, term_e_11);
  t = x_6(e_9, i_9, t);
  g_9 = t;
  t = SSL_int_to_string(g_9);
  d_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_9), term_y_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_9);
      u_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_9, (ATerm) ATinsert(ATempty, term_v_9));
      t = r_7(s_9, u_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm g_7 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm w_9 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  w_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_9);
  return(t);
}
static ATerm j_7 (ATerm t_82 (ATerm), ATerm f_190, ATerm k_18, ATerm t)
{
  ATerm x_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_190, term_f_11);
  t = i_7(t);
  x_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_9, k_18);
  t = t_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm b_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if(match_cons(h_11, sym_Stream_1))
        {
          b_10 = ATgetArgument(h_11, 0);
        }
      else
        _fail(t);
      d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(b_10, d_10, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,a_10 = NULL;
  a_10 = t;
  t = xtc_new_file_0_0(t);
  y_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_9, a_10);
  t = j_7(n_0, y_9, a_10, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_9);
  t = xtc_transform_file_2_0(e_103, f_103, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_11 = NULL,i_11 = NULL,p_11 = NULL,q_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      i_11 = ATgetArgument(t, 0);
      {
        ATerm n_3 = NULL,q_3 = NULL;
        t = SSL_int_to_string(i_11);
        n_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_11), n_3), term_j_11);
        q_3 = t;
        t = SSL_concat_strings(q_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          i_11 = ATgetArgument(t, 0);
          p_11 = ATgetArgument(t, 1);
          q_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_11);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_11), term_m_11), i_4), term_l_11), i_11);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm t_11 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = w_87(t);
    if(((t_11 != NULL) && (t_11 != t)))
      _fail(t);
    else
      t_11 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(t_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  b_12 = t;
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_0 (ATerm t);
        static ATerm u_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm r_11 = ATgetArgument(t, 0);
              if((b_12 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm s_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_18), term_s_18), term_l_18), term_z_17), term_u_17), term_q_17), term_m_17), term_g_17), term_c_17), term_y_16), term_n_16), term_f_16), term_x_15), term_q_15), term_k_15), term_b_15), term_p_14), term_e_14), term_w_13), term_q_13), term_m_13), term_g_13), term_z_12), term_v_12), term_r_12), term_l_12), term_e_12), term_y_11);
        t = fetch_elem_1_0(u_0, t);
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_12);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_12 = NULL,a_13 = NULL;
  k_12 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            a_13 = ATgetArgument(t, 1);
            {
              ATerm b_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_18);
        {
          ATerm d_19 = t;
          int e_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = a_13;
              {
                ATerm f_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_5 = t;
              t = term_g_19;
              i_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_5), term_h_19);
              j_5 = t;
              t = SSL_printnl(i_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATempty, f_5), term_h_19));
              LocalPopChoice(e_19);
            }
          else
            {
              t = d_19;
              t = k_12;
            }
        }
      }
    else
      {
        t = y_18;
        t = k_12;
      }
  }
  t = k_12;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  t_13 = t;
  t = fork_0_0(t);
  s_13 = t;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_13;
        t = g_81(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = SSL_waitpid(s_13);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            if(((ATgetType(k_19) != AT_INT) || (ATgetInt((ATermInt) k_19) != 0)))
              _fail(t);
            {
              ATerm l_19 = ATgetArgument(t, 1);
            }
            {
              ATerm m_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_13;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  b_14 = t;
  t = i_104(t);
  t = xtc_find_0_0(t);
  a_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_14, b_14);
  {
    static ATerm v_0 (ATerm t);
    static ATerm v_0 (ATerm t)
    {
      ATerm d_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, a_14, b_14);
      t = k_7(a_14, b_14, t);
      t = term_n_19;
      d_14 = t;
      t = SSL_exit(d_14);
      return(t);
    }
    t = fork_and_wait_1_0(v_0, t);
  }
  t = b_14;
  return(t);
}
static ATerm r_14 (ATerm g_14, ATerm t)
{
  ATerm h_14 = NULL;
  t = SSL_explode_term(g_14);
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_14;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      l_14 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_0 (ATerm t);
            static ATerm w_0 (ATerm t)
            {
              t = l_14;
              return(t);
            }
            t = k_14;
            t = at_end_1_0(w_0, t);
            LocalPopChoice(s_19);
          }
        else
          {
            t = p_19;
            t = r_14(m_14, t);
          }
      }
    }
  else
    {
      t = r_14(m_14, t);
    }
  return(t);
}
static ATerm m_7 (ATerm x_96 (ATerm), ATerm w_30, ATerm u_30, ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,j_15 = NULL;
  a_15 = t;
  t = x_96(t);
  s_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_14, w_30, u_30);
  t = a_8(s_14, w_30, u_30, t);
  {
    ATerm t_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL;
        t = term_w_19;
        l_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_14, term_w_19);
        t = z_7(s_14, l_15, t);
        {
          ATerm x_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_19;
            }
        }
        LocalPopChoice(u_19);
      }
    else
      {
        t = t_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_14 = ATgetFirst((ATermList) t);
      z_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_14, term_w_19, (ATerm) ATinsert(CheckATermList(z_14), (ATerm) ATinsert(CheckATermList(t_14), w_30)));
  t = lookup_table_0_1(s_14, t);
  j_15 = t;
  t = term_w_19;
  d_15 = t;
  t = (ATerm) ATinsert(CheckATermList(z_14), (ATerm) ATinsert(CheckATermList(t_14), w_30));
  e_15 = t;
  t = j_15;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(d_15, e_15, g_15, t);
  t = a_15;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_16 = NULL,t_5 = NULL;
      a_16 = t;
      t = term_a_20;
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_16, term_a_20);
      t = q_7(a_16, t_5, t);
      r_15 = t;
      t = SSL_mkstemp(r_15);
      LocalPopChoice(z_19);
    }
  else
    {
      t = y_19;
      {
        ATerm b_16 = NULL;
        t = term_b_20;
        b_16 = t;
        t = SSL_perror(b_16);
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
static ATerm a_1 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  t = P__tmpdir_0_0(t);
  i_16 = t;
  t = term_d_20;
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_16, term_d_20);
  t = q_7(i_16, j_16, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_20;
  h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_16, term_f_20);
  t = m_7(a_1, e_16, h_16, t);
  t = SSL_close(d_16);
  t = e_16;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_16 = NULL,r_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_16 = NULL,t_16 = NULL;
      t = m_16;
      t = xtc_new_file_0_0(t);
      s_16 = t;
      t = r_0(t);
      t_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_16, (ATerm) ATinsert(ATinsert(ATempty, s_16), term_i_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_16);
    }
  else
    {
      ATerm v_16 = NULL,w_16 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_16;
      t = xtc_new_file_0_0(t);
      v_16 = t;
      t = r_0(t);
      w_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_16), term_i_10), r_16), term_g_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_16);
    }
  return(t);
}
static ATerm y_6 (ATerm q_19, ATerm r_19, ATerm t)
{
  ATerm x_17 = NULL,c_18 = NULL;
  t = r_19;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_19;
    }
  else
    {
      ATerm b_6 = NULL,j_6 = NULL,j_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_17 = ATgetFirst((ATermList) t);
          c_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_19);
      b_6 = t;
      t = c_18;
      {
        static ATerm p_6 (ATerm t);
        static ATerm p_6 (ATerm t)
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_6 = NULL;
              k_6 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_6;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              {
                ATerm l_6 = NULL;
                t = Cons_2_0(_id, p_6, t);
                l_6 = t;
                t = (ATerm) ATinsert(CheckATermList(l_6), q_19);
              }
            }
          return(t);
        }
        t = p_6(t);
      }
      j_6 = t;
      t = (ATerm) ATinsert(CheckATermList(j_6), x_17);
      j_1 = t;
      t = SSLsetAnnotations(j_1, b_6);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  static ATerm p_20 (ATerm t);
  static ATerm p_20 (ATerm t)
  {
    ATerm k_20 = NULL,n_20 = NULL,o_20 = NULL;
    k_20 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_20 = ATgetFirst((ATermList) t);
        o_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_20 = t;
      int l_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_8 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(k_20);
          b_8 = t;
          t = o_20;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(o_20), n_20);
          q_1 = t;
          t = SSLsetAnnotations(q_1, b_8);
          t = m_88(t);
          LocalPopChoice(l_20);
        }
      else
        {
          t = j_20;
          {
            ATerm t_8 = NULL,y_8 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(k_20);
            t_8 = t;
            t = o_20;
            t = p_20(t);
            y_8 = t;
            t = (ATerm) ATinsert(CheckATermList(y_8), n_20);
            r_1 = t;
            t = SSLsetAnnotations(r_1, t_8);
          }
        }
    }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_20 = NULL,z_20 = NULL,b_21 = NULL;
  v_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_20;
    }
  else
    {
      static ATerm c_1 (ATerm t);
      static ATerm c_1 (ATerm t)
      {
        t = not_null(b_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_20 = ATgetFirst((ATermList) t);
          if(((b_21 != NULL) && (b_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_20;
      t = at_end_1_0(c_1, t);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  static ATerm n_22 (ATerm t);
  static ATerm n_22 (ATerm t)
  {
    ATerm h_22 = NULL,i_22 = NULL,l_22 = NULL;
    l_22 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_22 = ATgetFirst((ATermList) t);
        i_22 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_9 = NULL,z_9 = NULL,y_2 = NULL;
          t = SSLgetAnnotations(l_22);
          p_9 = t;
          t = i_22;
          t = n_22(t);
          z_9 = t;
          t = (ATerm) ATinsert(CheckATermList(z_9), h_22);
          y_2 = t;
          t = SSLsetAnnotations(y_2, p_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_22;
        t = b_88(t);
      }
    return(t);
  }
  t = n_22(t);
  return(t);
}
static ATerm z_24 (ATerm o_23, ATerm p_23, ATerm r_23, ATerm t)
{
  ATerm s_23 = NULL,a_3 = NULL;
  t = SSLgetAnnotations(o_23);
  s_23 = t;
  t = r_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_23, r_23);
  a_3 = t;
  t = SSLsetAnnotations(a_3, s_23);
  return(t);
}
ATerm split_at_dot_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,l_23 = NULL,m_23 = NULL,d_3 = NULL;
  z_22 = t;
  t = SSL_explode_string(z_22);
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, y_22);
  {
    static ATerm y_24 (ATerm t);
    static ATerm y_24 (ATerm t)
    {
      ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL;
      b_24 = t;
      if(match_cons(t, sym__2))
        {
          d_24 = ATgetArgument(t, 0);
          e_24 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_23 = ATgetFirst((ATermList) t);
          a_24 = (ATerm) ATgetNext((ATermList) t);
          t = z_23;
          if(match_int(t, 46))
            {
              t = (ATerm) ATmakeAppl(sym__2, d_24, a_24);
            }
          else
            {
              ATerm m_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_24 = NULL;
                  t = d_24;
                  {
                    static ATerm e_1 (ATerm t);
                    static ATerm e_1 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATempty, z_23);
                      return(t);
                    }
                    t = at_end_1_0(e_1, t);
                  }
                  x_24 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_24, a_24);
                  t = y_24(t);
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = m_20;
                  t = z_24(b_24, d_24, e_24, t);
                }
            }
        }
      else
        {
          t = z_24(b_24, d_24, e_24, t);
        }
      return(t);
    }
    t = y_24(t);
  }
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  a_23 = t;
  t = SSL_implode_string(h_23);
  j_23 = t;
  t = SSL_implode_string(i_23);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_23, l_23);
  d_3 = t;
  t = SSLsetAnnotations(d_3, a_23);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm j_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_20 = ATgetFirst((ATermList) t);
      j_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_26;
  return(t);
}
ATerm remove_extension_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  static ATerm m_26 (ATerm t);
  static ATerm m_26 (ATerm t)
  {
    static ATerm n_26 (ATerm g_25, ATerm j_25, ATerm m_25, ATerm t);
    static ATerm n_26 (ATerm g_25, ATerm j_25, ATerm m_25, ATerm t)
    {
      ATerm r_25 = NULL,t_25 = NULL,z_25 = NULL,a_26 = NULL,k_3 = NULL;
      t = SSLgetAnnotations(g_25);
      t_25 = t;
      t = m_25;
      t = m_26(t);
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, j_25), z_25);
      k_3 = t;
      t = SSLsetAnnotations(k_3, t_25);
      a_26 = t;
      t = SSL_explode_term(a_26);
      if(match_cons(t, sym__2))
        {
          ATerm s_20 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) s_20) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          r_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_25;
      t = concat_0_0(t);
      return(t);
    }
    ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
    t = split_at_dot_0_0(t);
    c_26 = t;
    if(match_cons(t, sym__2))
      {
        d_26 = ATgetArgument(t, 0);
        e_26 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_26;
    if(match_string(t, ""))
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATinsert(ATempty, d_26);
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = n_26(c_26, d_26, e_26, t);
          }
      }
    else
      {
        t = n_26(c_26, d_26, e_26, t);
      }
    return(t);
  }
  t = m_26(t);
  t = at_last_1_0(f_1, t);
  d_25 = t;
  t = term_w_20;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, d_25);
  t = y_6(f_25, d_25, t);
  e_25 = t;
  t = SSL_concat_strings(e_25);
  return(t);
}
ATerm debug_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,s_26 = NULL,t_26 = NULL;
  o_26 = t;
  t = r_82(t);
  p_26 = t;
  t = term_g_19;
  s_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_26), p_26);
  t_26 = t;
  t = SSL_printnl(s_26, t_26);
  t = o_26;
  return(t);
}
static ATerm z_6 (ATerm k_48, ATerm t)
{
  t = SSL_hashtable_keys(k_48);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  static ATerm g_1 (ATerm t);
  static ATerm g_1 (ATerm t)
  {
    ATerm c_27 = NULL,d_27 = NULL;
    c_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), c_27);
    t = z_7(not_null(x_26), c_27, t);
    d_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_27, d_27);
    return(t);
  }
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = lookup_table_0_1(x_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_6(y_26, t);
  t = map_1_0(g_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm i_27 = NULL;
  i_27 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
        t = term_h_10;
        l_27 = t;
        t = term_y_10;
        m_27 = t;
        t = term_d_11;
        t = z_7(l_27, m_27, t);
        k_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_27, term_w_17);
        t = geq_0_0(t);
        t = i_27;
        t = d_101(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = i_27;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  {
    ATerm a_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL,u_27 = NULL,v_27 = NULL;
        t = term_h_10;
        u_27 = t;
        t = term_y_10;
        v_27 = t;
        t = term_d_11;
        t = z_7(u_27, v_27, t);
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_i_14);
        t = geq_0_0(t);
        t = p_27;
        t = c_101(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = a_21;
        t = p_27;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
        t = term_h_10;
        e_28 = t;
        t = term_y_10;
        f_28 = t;
        t = term_d_11;
        t = z_7(e_28, f_28, t);
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_28, term_n_12);
        t = geq_0_0(t);
        t = y_27;
        t = e_101(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = y_27;
      }
  }
  return(t);
}
static ATerm b_7 (ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = z_91(t);
  {
    static ATerm h_1 (ATerm t);
    static ATerm h_1 (ATerm t)
    {
      ATerm i_28 = NULL;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, i_28);
      t = y_91(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm c_7 (ATerm v_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm s_29 (ATerm t);
  static ATerm s_29 (ATerm t)
  {
    ATerm c_29 = NULL,g_29 = NULL,k_29 = NULL;
    c_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_29 = ATgetFirst((ATermList) t);
            k_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_21 = t;
          int g_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_29;
              {
                static ATerm i_1 (ATerm t);
                static ATerm i_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = b_7(v_91, i_1, g_29, k_29, t);
              }
              t = s_29(t);
              LocalPopChoice(g_21);
            }
          else
            {
              t = f_21;
              {
                ATerm o_10 = NULL,x_10 = NULL,z_5 = NULL;
                t = SSLgetAnnotations(c_29);
                o_10 = t;
                t = k_29;
                t = s_29(t);
                x_10 = t;
                t = (ATerm) ATinsert(CheckATermList(x_10), g_29);
                z_5 = t;
                t = SSLsetAnnotations(z_5, o_10);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = s_29(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm z_30 = NULL;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      if((z_30 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm i_44, ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL;
  z_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            ATerm k_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_44, j_44);
        t = z_7(i_44, j_44, t);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATempty;
      }
  }
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_30, k_44);
  t = c_7(k_1, c_30, k_44, t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_44, j_44, a_30);
  t = lookup_table_0_1(i_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(j_44, a_30, d_30, t);
  t = z_29;
  return(t);
}
static ATerm e_7 (ATerm g_101 (ATerm), ATerm s_44, ATerm r_44, ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm a_31 = NULL,d_31 = NULL;
    if(match_cons(t, sym__2))
      {
        a_31 = ATgetArgument(t, 0);
        d_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_44, a_31, d_31);
    t = g_101(t);
    return(t);
  }
  t = r_44;
  t = map_1_0(m_1, t);
  return(t);
}
static ATerm r_7 (ATerm d_50, ATerm e_50, ATerm t)
{
  t = SSL_access(d_50, e_50);
  return(t);
}
static ATerm a_32 (ATerm p_31, ATerm t)
{
  t = SSL_fclose(p_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  y_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_31 = ATgetArgument(t, 0);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_31);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = a_32(y_31, t);
          }
      }
    }
  else
    {
      t = a_32(y_31, t);
    }
  return(t);
}
static ATerm f_7 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm q_7 (ATerm v_66, ATerm w_66, ATerm t)
{
  t = SSL_strcat(v_66, w_66);
  return(t);
}
static ATerm h_7 (ATerm p_50, ATerm q_50, ATerm t)
{
  ATerm d_32 = NULL;
  t = SSL_fopen(p_50, q_50);
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_stdin_stream();
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_stdout_stream();
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_32 = NULL;
  t = SSL_stderr_stream();
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_32);
  return(t);
}
static ATerm a_34 (ATerm q_32, ATerm t)
{
  ATerm r_32 = NULL;
  t = SSL_explode_term(q_32);
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
          {
            r_32 = ATgetFirst((ATermList) o_21);
            {
              ATerm p_21 = (ATerm) ATgetNext((ATermList) o_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_34 (ATerm w_32, ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,h_33 = NULL,c_6 = NULL;
  t = SSLgetAnnotations(z_32);
  e_33 = t;
  t = w_32;
  if(match_cons(t, sym_Path_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_33, y_32);
  c_6 = t;
  t = SSLsetAnnotations(c_6, e_33);
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(c_33, d_33, t);
  return(t);
}
static ATerm e_34 (ATerm j_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm m_33 = NULL,o_33 = NULL,q_33 = NULL,t_33 = NULL,d_6 = NULL;
  t = SSLgetAnnotations(l_33);
  q_33 = t;
  t = SSL_is_string(j_33);
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_33, k_33);
  d_6 = t;
  t = SSLsetAnnotations(d_6, q_33);
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_7(m_33, o_33, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
  x_33 = t;
  if(match_cons(t, sym__2))
    {
      y_33 = ATgetArgument(t, 0);
      z_33 = ATgetArgument(t, 1);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_34(x_33, t);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            {
              ATerm s_21 = t;
              int t_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_34(y_33, z_33, x_33, t);
                  LocalPopChoice(t_21);
                }
              else
                {
                  t = s_21;
                  t = e_34(y_33, z_33, x_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_34(x_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,n_34 = NULL;
  n_34 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_34, term_w_21);
        t = i_7(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm v_11 = NULL,w_11 = NULL;
          t = term_x_21;
          w_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_21, n_34);
          t = q_7(w_11, n_34, t);
          v_11 = t;
          t = SSL_perror(v_11);
          _fail(t);
        }
      }
  }
  h_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(i_34, t);
  g_34 = t;
  t = h_34;
  t = fclose_0_0(t);
  t = g_34;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_34 = NULL,r_34 = NULL;
      q_34 = t;
      t = (ATerm) ATinsert(ATempty, term_c_22);
      r_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, (ATerm) ATinsert(ATempty, term_c_22));
      t = r_7(q_34, r_34, t);
      LocalPopChoice(b_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_22;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_22 = t;
            if((PushChoice() == 0))
              {
                ATerm t_34 = NULL,u_34 = NULL;
                t_34 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                u_34 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_34, (ATerm) ATinsert(ATempty, term_v_9));
                t = r_7(t_34, u_34, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = f_22;
              }
            t = debug_1_0(p_1, t);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = debug_1_0(s_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_j_22;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,b_36 = NULL;
  y_35 = t;
  t = term_g_19;
  z_35 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  b_36 = t;
  t = SSL_printnl(z_35, b_36);
  t = y_35;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm c_36 = NULL,f_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym__3))
    {
      c_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      g_36 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_7(c_36, f_36, g_36, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  t = term_g_19;
  i_36 = t;
  t = (ATerm) ATinsert(ATempty, term_m_22);
  j_36 = t;
  t = SSL_printnl(i_36, j_36);
  t = h_36;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,n_36 = NULL;
  k_36 = t;
  t = term_g_19;
  l_36 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  n_36 = t;
  t = SSL_printnl(l_36, n_36);
  t = k_36;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,b_35 = NULL,c_35 = NULL,j_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL;
  v_34 = t;
  t = if_verbose5_1_0(t_1, t);
  {
    ATerm o_22 = t;
    if((PushChoice() == 0))
      {
        ATerm w_35 = NULL,x_35 = NULL;
        t = term_p_22;
        w_35 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_34);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Imported_1, v_34));
        t = z_7(w_35, x_35, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_22;
      }
  }
  x_34 = t;
  t = term_p_22;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_q_22, (ATerm) ATinsert(ATempty, v_34));
  t = lookup_table_0_1(o_35, t);
  s_35 = t;
  t = term_q_22;
  p_35 = t;
  t = (ATerm) ATinsert(ATempty, v_34);
  q_35 = t;
  t = s_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(p_35, q_35, r_35, t);
  t = x_34;
  t = if_verbose4_1_0(w_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  w_34 = t;
  t = term_p_22;
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, w_34);
  t = e_7(z_1, n_35, w_34, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_p_22;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, (ATerm)ATmakeAppl(sym_Imported_1, v_34), (ATerm) ATempty);
  t = lookup_table_0_1(y_34, t);
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, v_34);
  b_35 = t;
  t = (ATerm) ATempty;
  c_35 = t;
  t = m_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(b_35, c_35, j_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, (ATerm)ATmakeAppl(sym_Imported_1, v_34), (ATerm) ATempty);
  t = if_verbose4_1_0(c_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,f_37 = NULL;
  b_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_37;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_37 = ATgetFirst((ATermList) t);
          f_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_12 = NULL,f_12 = NULL,g_12 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(b_37);
            c_12 = t;
            t = c_37;
            t = c_96(t);
            f_12 = t;
            t = f_37;
            t = filter_1_0(c_96, t);
            g_12 = t;
            t = (ATerm) ATinsert(CheckATermList(g_12), f_12);
            h_6 = t;
            t = SSLsetAnnotations(h_6, c_12);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            t = f_37;
            t = filter_1_0(c_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  static ATerm k_37 (ATerm t);
  static ATerm k_37 (ATerm t)
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        t = k_37(t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = p_85(t);
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,o_37 = NULL;
      t = term_h_10;
      l_37 = t;
      t = term_x_22;
      o_37 = t;
      t = term_b_23;
      t = z_7(l_37, o_37, t);
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        ATerm c_23 = t;
        int d_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_37 = NULL;
            t = term_e_23;
            p_37 = t;
            t = SSL_getenv(p_37);
            LocalPopChoice(d_23);
          }
        else
          {
            t = c_23;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  t = term_p_22;
  a_38 = t;
  t = term_g_23;
  b_38 = t;
  t = term_k_23;
  t = z_7(a_38, b_38, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_23;
      }
  }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_37 = NULL;
  t = if_verbose5_1_0(d_2, t);
  r_37 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_37 = NULL,v_37 = NULL;
        t = term_p_22;
        u_37 = t;
        t = term_q_22;
        v_37 = t;
        t = term_v_23;
        t = z_7(u_37, v_37, t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        {
          ATerm y_37 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_37 = t;
          t = repeat_2_0(g_2, _id, t);
          t = y_37;
        }
      }
  }
  t = r_37;
  t = if_verbose5_1_0(h_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm s_39 (ATerm h_38, ATerm t)
{
  ATerm j_38 = NULL,o_38 = NULL,r_38 = NULL;
  t = term_p_22;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, h_38);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Tool_1, h_38));
  t = z_7(o_38, r_38, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_23 = ATgetFirst((ATermList) t);
      if(match_cons(x_23, sym__2))
        {
          ATerm c_24 = ATgetArgument(x_23, 0);
          j_38 = ATgetArgument(x_23, 1);
        }
      else
        _fail(t);
      {
        ATerm y_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_38;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_p_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_38 = NULL,v_38 = NULL,y_38 = NULL;
      t = if_verbose5_1_0(m_2, t);
      t = xtc_load_0_0(t);
      y_38 = t;
      if(match_cons(t, sym__2))
        {
          u_38 = ATgetArgument(t, 0);
          v_38 = ATgetArgument(t, 1);
          {
            ATerm i_24 = t;
            int j_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
                t = term_p_22;
                g_39 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_38);
                h_39 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Tool_1, u_38));
                t = z_7(g_39, h_39, t);
                {
                  static ATerm p_2 (ATerm t);
                  static ATerm p_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_38 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_39 != NULL) && (f_39 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_39 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(p_2, t);
                }
                t = not_null(f_39);
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
                t = s_39(y_38, t);
              }
          }
        }
      else
        {
          t = s_39(y_38, t);
        }
      t = if_verbose5_1_0(q_2, t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm q_39 = NULL,p_12 = NULL,q_12 = NULL;
        q_39 = t;
        t = term_g_19;
        p_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), q_39), term_k_24);
        q_12 = t;
        t = SSL_printnl(p_12, q_12);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_24), q_39), term_k_24);
        t = if_verbose5_1_0(w_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_7 (ATerm e_45, ATerm f_45, ATerm t)
{
  ATerm u_39 = NULL;
  t = lookup_table_0_1(e_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(f_45, u_39, t);
  return(t);
}
static ATerm t_7 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL;
  a_40 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        t = z_7(q_43, r_43, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_24 = ATgetFirst((ATermList) t);
            z_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_24);
        {
          ATerm b_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, z_39);
          t = lookup_table_0_1(q_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(r_43, z_39, b_40, t);
          t = (ATerm) ATmakeAppl(sym__3, q_43, r_43, z_39);
        }
      }
    else
      {
        t = m_24;
        {
          ATerm d_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
          t = lookup_table_0_1(q_43, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_7(r_43, d_40, t);
          t = (ATerm) ATmakeAppl(sym__2, q_43, r_43);
        }
      }
  }
  t = a_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_96 (ATerm), ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  i_40 = t;
  t = u_96(t);
  h_40 = t;
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        t = term_w_19;
        m_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_40, term_w_19);
        t = z_7(h_40, m_40, t);
        {
          ATerm r_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_24;
            }
        }
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_40 = ATgetFirst((ATermList) t);
      f_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_40, term_w_19, f_40);
  t = lookup_table_0_1(h_40, t);
  l_40 = t;
  t = term_w_19;
  j_40 = t;
  t = l_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(j_40, f_40, k_40, t);
  t = g_40;
  {
    static ATerm z_2 (ATerm t);
    static ATerm z_2 (ATerm t)
    {
      ATerm n_40 = NULL;
      n_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_40, n_40);
      t = t_7(h_40, n_40, t);
      return(t);
    }
    t = map_1_0(z_2, t);
  }
  t = i_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_100 (ATerm), ATerm o_100 (ATerm), ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_100(t);
      t = o_100(t);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      t = o_100(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_96 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  q_40 = t;
  t = t_96(t);
  p_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_40, term_w_19);
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_40 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_24 = ATgetArgument(t, 0);
            ATerm a_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_19;
        z_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_40, term_w_19);
        t = z_7(p_40, z_40, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = (ATerm) ATempty;
      }
  }
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_40, term_w_19, (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATempty));
  t = lookup_table_0_1(p_40, t);
  v_40 = t;
  t = term_w_19;
  s_40 = t;
  t = (ATerm) ATinsert(CheckATermList(r_40), (ATerm) ATempty);
  t_40 = t;
  t = v_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(s_40, t_40, u_40, t);
  t = q_40;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_c_20;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_41);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = i_41;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  ATerm c_41 = NULL;
  static ATerm c_3 (ATerm t);
  static ATerm c_3 (ATerm t)
  {
    ATerm d_41 = NULL;
    d_41 = t;
    {
      ATerm h_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_41 = NULL,f_41 = NULL;
          t = term_c_20;
          e_41 = t;
          t = term_w_19;
          f_41 = t;
          t = term_n_25;
          t = z_7(e_41, f_41, t);
          LocalPopChoice(i_25);
        }
      else
        {
          t = h_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_41 != NULL) && (c_41 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_41 = ATgetFirst((ATermList) t);
        {
          ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_41;
    t = map_1_0(e_3, t);
    t = d_41;
    t = end_scope_1_0(f_3, t);
    return(t);
  }
  t = begin_scope_1_0(b_3, t);
  t = restore_always_2_0(r_103, c_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  l_41 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  p_41 = t;
  t = term_g_19;
  r_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_25), p_41), term_s_25);
  s_41 = t;
  t = SSL_printnl(r_41, s_41);
  t = term_e_11;
  q_41 = t;
  t = SSL_exit(q_41);
  t = l_41;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  if(match_string(t, "-k"))
    {
      t = u_41;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_41;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,a_42 = NULL;
  x_41 = t;
  t = SSL_string_to_int(x_41);
  y_41 = t;
  t = term_v_25;
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, y_41);
  t = c_8(a_42, y_41, t);
  t = x_41;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_3, s_3, w_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm d_42 = NULL;
  d_42 = t;
  if(match_string(t, "-S"))
    {
      t = d_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_42;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  t = term_y_10;
  e_42 = t;
  t = term_x_25;
  f_42 = t;
  t = term_y_25;
  t = c_8(e_42, f_42, t);
  t = term_b_26;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  t = SSL_string_to_int(g_42);
  h_42 = t;
  t = term_y_10;
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_10, h_42);
  t = c_8(i_42, h_42, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_42);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_h_26;
  j_42 = t;
  t = term_f_20;
  k_42 = t;
  t = term_i_26;
  t = c_8(j_42, k_42, t);
  t = term_k_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, b_4, d_4, t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            t = Option_3_0(h_4, k_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm c_8 (ATerm r_48, ATerm s_48, ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  t = term_h_10;
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, r_48, s_48);
  t = lookup_table_0_1(l_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(r_48, s_48, m_42, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, r_48, s_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
      t = term_f_20;
      t = g_0(t);
      s_42 = t;
      t = term_w_26;
      t_42 = t;
      t = term_z_26;
      u_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_26, term_z_26, s_42);
      t = a_8(t_42, u_42, s_42, t);
      _fail(t);
    }
  else
    {
      ATerm x_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_42 = ATgetFirst((ATermList) t);
          r_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_42;
      t = d_0(t);
      t = term_f_20;
      t = f_0(t);
      x_42 = t;
      t = (ATerm) ATinsert(CheckATermList(r_42), x_42);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  if(match_string(t, "-o"))
    {
      t = z_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_42;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  a_43 = t;
  t = term_i_10;
  b_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, a_43);
  t = c_8(b_43, a_43, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_43);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, q_4, t);
  return(t);
}
static ATerm a_8 (ATerm l_43, ATerm m_43, ATerm k_43, ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,n_43 = NULL,o_43 = NULL,s_43 = NULL;
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
  {
    ATerm b_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_27 = ATgetArgument(t, 0);
            ATerm g_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_43, m_43);
        t = z_7(l_43, m_43, t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATempty;
      }
  }
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_43, m_43, (ATerm) ATinsert(CheckATermList(f_43), k_43));
  t = lookup_table_0_1(l_43, t);
  s_43 = t;
  t = (ATerm) ATinsert(CheckATermList(f_43), k_43);
  n_43 = t;
  t = s_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(m_43, n_43, o_43, t);
  t = e_43;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
      t = term_f_20;
      t = o_0(t);
      d_44 = t;
      t = term_w_26;
      e_44 = t;
      t = term_z_26;
      f_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_26, term_z_26, d_44);
      t = a_8(e_44, f_44, d_44, t);
      _fail(t);
    }
  else
    {
      ATerm o_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_43 = ATgetFirst((ATermList) t);
          a_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_44 = ATgetFirst((ATermList) t);
          c_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_43;
      t = l_0(t);
      t = b_44;
      t = m_0(t);
      o_44 = t;
      t = (ATerm) ATinsert(CheckATermList(c_44), o_44);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm q_44 = NULL;
  q_44 = t;
  if(match_string(t, "-i"))
    {
      t = q_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_44;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  v_44 = t;
  t = term_g_20;
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, v_44);
  t = c_8(w_44, v_44, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_44);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,g_45 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_20;
  t = whoami_0_0(t);
  b_45 = t;
  t = term_g_19;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_27), b_45);
  g_45 = t;
  t = SSL_printnl(d_45, g_45);
  t = term_e_11;
  c_45 = t;
  t = SSL_exit(c_45);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  t = term_h_10;
  h_45 = t;
  t = term_n_27;
  i_45 = t;
  t = term_o_27;
  t = z_7(h_45, i_45, t);
  return(t);
}
static ATerm u_7 (ATerm i_29, ATerm j_29, ATerm t)
{
  ATerm q_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_29, j_29);
      LocalPopChoice(s_27);
    }
  else
    {
      t = q_27;
      t = SSL_addr(i_29, j_29);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_45;
      t = y_94(t);
    }
  else
    {
      ATerm p_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_45 = ATgetFirst((ATermList) t);
          m_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_45;
      t = foldr_2_0(y_94, z_94, t);
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_45, p_45);
      t = z_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(match_cons(t, sym__2))
    {
      i_13 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(i_13, j_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_45 = NULL,c_13 = NULL,d_13 = NULL;
  t = times_0_0(t);
  d_13 = t;
  t = SSL_explode_term(d_13);
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_13;
  t = foldr_2_0(v_4, w_4, t);
  s_45 = t;
  t = SSL_TicksToSeconds(s_45);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym__2))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_46;
        if((e_46 != t))
          {
            _fail(t);
          }
        t = d_46;
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        {
          ATerm z_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_46, f_46);
              LocalPopChoice(a_28);
            }
          else
            {
              t = z_27;
              t = SSL_gtr(e_46, f_46);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_100 (ATerm), ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
        t = term_h_10;
        m_46 = t;
        t = term_y_10;
        n_46 = t;
        t = term_d_11;
        t = z_7(m_46, n_46, t);
        l_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_46, term_e_11);
        t = geq_0_0(t);
        t = j_46;
        t = z_100(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = j_46;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,s_46 = NULL,t_46 = NULL;
  t = run_time_0_0(t);
  p_46 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  q_46 = t;
  t = term_g_19;
  s_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_28), p_46), term_l_11), q_46);
  t_46 = t;
  t = SSL_printnl(s_46, t_46);
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_28), p_46), term_l_11), q_46));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_25;
  u_46 = t;
  t = SSL_exit(u_46);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  f_47 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_47;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_47 = ATgetArgument(t, 0);
          {
            ATerm c_14 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(f_47);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_47);
            r_6 = t;
            t = SSLsetAnnotations(r_6, c_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_47;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_105 (ATerm), ATerm t)
{
  ATerm h_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_46 = NULL,y_46 = NULL;
      t = term_h_10;
      x_46 = t;
      t = term_k_28;
      y_46 = t;
      t = term_l_28;
      t = z_7(x_46, y_46, t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = h_28;
      t = fetch_1_0(y_4, t);
    }
  t = k_105(t);
  return(t);
}
static ATerm d_8 (ATerm d_48, ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm h_47 = NULL;
  t = SSL_hashtable_put(f_48, d_48, e_48);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_47);
  return(t);
}
static ATerm e_8 (ATerm g_48, ATerm h_48, ATerm t)
{
  t = SSL_hashtable_get(h_48, g_48);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_44, ATerm t)
{
  ATerm q_47 = NULL;
  t = table_hashtable_0_0(t);
  q_47 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = NULL;
        t = q_47;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_8(x_44, y_14, t);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        {
          ATerm i_15 = NULL;
          t = x_44;
          t = table_create_0_0(t);
          t = q_47;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_8(x_44, i_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_48, ATerm m_48, ATerm t)
{
  ATerm t_47 = NULL;
  t = SSL_hashtable_create(l_48, m_48);
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_47);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,y_47 = NULL,z_47 = NULL;
  u_47 = t;
  t = term_o_28;
  y_47 = t;
  t = term_p_28;
  z_47 = t;
  t = u_47;
  t = new_hashtable_0_2(y_47, z_47, t);
  v_47 = t;
  t = u_47;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(u_47, v_47, w_47, t);
  t = u_47;
  return(t);
}
static ATerm w_7 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm a_48 = NULL;
  t = SSL_hashtable_remove(j_48, i_48);
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_48);
  return(t);
}
static ATerm x_7 (ATerm n_48, ATerm t)
{
  ATerm b_48 = NULL;
  t = SSL_hashtable_destroy(n_48);
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_48);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_48 = NULL;
  t = SSL_table_hashtable();
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_48);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,t_48 = NULL;
  o_48 = t;
  t = table_hashtable_0_0(t);
  p_48 = t;
  t = lookup_table_0_1(o_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(t_48, t);
  t = p_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(o_48, q_48, t);
  t = o_48;
  return(t);
}
ATerm map_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  static ATerm i_49 (ATerm t);
  static ATerm i_49 (ATerm t)
  {
    ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
    f_49 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_49;
      }
    else
      {
        ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,i_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_49 = ATgetFirst((ATermList) t);
            h_49 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_49);
        p_15 = t;
        t = g_49;
        t = k_87(t);
        u_15 = t;
        t = h_49;
        t = i_49(t);
        v_15 = t;
        t = (ATerm) ATinsert(CheckATermList(v_15), u_15);
        i_8 = t;
        t = SSLsetAnnotations(i_8, p_15);
      }
    return(t);
  }
  t = i_49(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_49 = ATgetFirst((ATermList) t);
      m_49 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_49 = NULL,s_49 = NULL;
        static ATerm z_4 (ATerm t);
        static ATerm z_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_49)), not_null(s_49));
          return(t);
        }
        t = m_49;
        t = j_0(t);
        if(((r_49 != NULL) && (r_49 != t)))
          _fail(t);
        else
          r_49 = t;
        t = l_49;
        t = h_0(t);
        if(((s_49 != NULL) && (s_49 != t)))
          _fail(t);
        else
          s_49 = t;
        t = m_49;
        t = reverse_acc_2_0(h_0, z_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_20;
      t = j_0(t);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,m_8 = NULL;
  b_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_50);
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_50);
  m_8 = t;
  t = SSLsetAnnotations(m_8, z_49);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_50), term_q_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_49 = NULL,y_49 = NULL;
      t = term_h_10;
      w_49 = t;
      t = term_n_27;
      y_49 = t;
      t = term_o_27;
      t = z_7(w_49, y_49, t);
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      t = fetch_1_0(a_5, t);
    }
  t = term_t_28;
  t = echo_0_0(t);
  t = term_w_26;
  u_49 = t;
  t = term_z_26;
  v_49 = t;
  t = term_u_28;
  t = z_7(u_49, v_49, t);
  t = reverse_acc_2_0(_id, e_5, t);
  t = map_1_0(g_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm u_87 (ATerm), ATerm t)
{
  static ATerm g_51 (ATerm t);
  static ATerm g_51 (ATerm t)
  {
    ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
    d_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_51 = ATgetFirst((ATermList) t);
        f_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_28 = t;
      int w_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_16 = NULL,x_16 = NULL,c_9 = NULL;
          t = SSLgetAnnotations(d_51);
          o_16 = t;
          t = e_51;
          t = u_87(t);
          x_16 = t;
          t = (ATerm) ATinsert(CheckATermList(f_51), x_16);
          c_9 = t;
          t = SSLsetAnnotations(c_9, o_16);
          LocalPopChoice(w_28);
        }
      else
        {
          t = v_28;
          {
            ATerm h_17 = NULL,l_17 = NULL,k_10 = NULL;
            t = SSLgetAnnotations(d_51);
            h_17 = t;
            t = f_51;
            t = g_51(t);
            l_17 = t;
            t = (ATerm) ATinsert(CheckATermList(l_17), e_51);
            k_10 = t;
            t = SSLsetAnnotations(k_10, h_17);
          }
        }
    }
    return(t);
  }
  t = g_51(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,v_51 = NULL;
  n_51 = t;
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_51;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_28 = ATgetFirst((ATermList) t);
                ATerm a_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_51;
          }
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, n_51);
      }
  }
  o_51 = t;
  t = term_l_10;
  v_51 = t;
  t = SSL_printnl(v_51, o_51);
  t = n_51;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  t = term_h_10;
  z_51 = t;
  t = term_n_27;
  a_52 = t;
  t = term_o_27;
  t = z_7(z_51, a_52, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL;
  t = term_b_29;
  b_52 = t;
  t = term_f_20;
  c_52 = t;
  t = term_d_29;
  t = c_8(b_52, c_52, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_e_29;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = term_b_29;
  i_52 = t;
  t = term_f_20;
  j_52 = t;
  t = term_d_29;
  t = c_8(i_52, j_52, t);
  t = term_f_29;
  f_52 = t;
  t = term_f_20;
  g_52 = t;
  t = term_h_29;
  t = c_8(f_52, g_52, t);
  t = term_l_29;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, l_5, s_5, t);
      LocalPopChoice(q_29);
    }
  else
    {
      t = n_29;
      t = Option_3_0(u_5, v_5, w_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,n_10 = NULL;
  q_52 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_52 = ATgetFirst((ATermList) t);
      n_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_52);
  k_52 = t;
  t = l_52;
  t = z_73(t);
  o_52 = t;
  t = n_52;
  t = a_74(t);
  p_52 = t;
  t = (ATerm) ATinsert(CheckATermList(p_52), o_52);
  n_10 = t;
  t = SSLsetAnnotations(n_10, k_52);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_107 (ATerm), ATerm t)
{
  ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL,f_53 = NULL,g_53 = NULL,q_10 = NULL;
  a_53 = t;
  {
    ATerm r_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_29;
        t = i_107(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = r_29;
      }
  }
  t = a_53;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_53 = ATgetFirst((ATermList) t);
      d_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_53);
  b_53 = t;
  t = term_n_27;
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, c_53);
  t = c_8(g_53, c_53, t);
  t = d_53;
  {
    static ATerm r_53 (ATerm t);
    static ATerm r_53 (ATerm t)
    {
      ATerm v_29 = t;
      int w_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_53 = NULL;
              j_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_53;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = i_107(t);
              t = Cons_2_0(_id, r_53, t);
            }
          LocalPopChoice(w_29);
        }
      else
        {
          t = v_29;
          {
            ATerm n_53 = NULL,o_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_53 = ATgetFirst((ATermList) t);
                o_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_53), (ATerm) ATmakeAppl(sym_Undefined_1, n_53));
          }
        }
      return(t);
    }
    t = r_53(t);
  }
  f_53 = t;
  t = (ATerm) ATinsert(CheckATermList(f_53), (ATerm) ATmakeAppl(sym_Program_1, c_53));
  q_10 = t;
  t = SSLsetAnnotations(q_10, b_53);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_54 = NULL;
  e_54 = t;
  if(match_string(t, "--help"))
    {
      t = e_54;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_54;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_54;
        }
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = term_k_28;
  f_54 = t;
  t = term_f_20;
  g_54 = t;
  t = term_b_30;
  t = c_8(f_54, g_54, t);
  t = term_e_30;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL;
  y_53 = t;
  t = term_w_26;
  z_53 = t;
  t = term_g_30;
  t = lookup_table_0_1(z_53, t);
  d_54 = t;
  t = term_z_26;
  a_54 = t;
  t = (ATerm) ATempty;
  b_54 = t;
  t = d_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(a_54, b_54, c_54, t);
  t = y_53;
  {
    static ATerm x_5 (ATerm t);
    static ATerm x_5 (ATerm t)
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_107(t);
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm j_30 = t;
            int k_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_5, a_6, e_6, t);
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
    t = parse_options_p__1_0(x_5, t);
  }
  {
    ATerm l_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_54 = NULL;
        r_54 = t;
        {
          ATerm n_30 = t;
          int o_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_18 = NULL;
              t = r_54;
              {
                ATerm p_30 = t;
                int q_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_18 = NULL,h_18 = NULL;
                    t = term_h_10;
                    f_18 = t;
                    t = term_k_28;
                    h_18 = t;
                    t = term_l_28;
                    t = z_7(f_18, h_18, t);
                    LocalPopChoice(q_30);
                  }
                else
                  {
                    t = p_30;
                    t = fetch_1_0(f_6, t);
                  }
              }
              t = r_54;
              t = default_system_usage_0_0(t);
              t = term_x_25;
              e_18 = t;
              t = SSL_exit(e_18);
              LocalPopChoice(o_30);
            }
          else
            {
              t = n_30;
              {
                ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
                t = term_h_10;
                n_18 = t;
                t = term_b_29;
                o_18 = t;
                t = term_r_30;
                t = z_7(n_18, o_18, t);
                t = r_54;
                t = default_system_about_0_0(t);
                t = term_x_25;
                m_18 = t;
                t = SSL_exit(m_18);
              }
            }
        }
        LocalPopChoice(m_30);
      }
    else
      {
        t = l_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
              static ATerm g_6 (ATerm t);
              static ATerm g_6 (ATerm t)
              {
                ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,u_10 = NULL;
                x_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_54);
                v_54 = t;
                t = w_54;
                if(((w_53 != NULL) && (w_53 != t)))
                  _fail(t);
                else
                  w_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_54);
                u_10 = t;
                t = SSLsetAnnotations(u_10, v_54);
                return(t);
              }
              t = fetch_1_0(g_6, t);
              t = term_g_19;
              t_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_53)), term_v_30);
              u_54 = t;
              t = SSL_printnl(t_54, u_54);
              t = (ATerm) ATmakeAppl(sym__2, term_g_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_53)), term_v_30));
              t = default_system_usage_0_0(t);
              t = term_e_11;
              s_54 = t;
              t = SSL_exit(s_54);
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
            }
        }
      }
  }
  x_53 = t;
  t = term_w_26;
  t = table_destroy_0_0(t);
  t = x_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_105 (ATerm), ATerm n_105 (ATerm), ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL;
  t = parse_options_1_0(m_105, t);
  c_55 = t;
  t = term_x_30;
  t = table_create_0_0(t);
  t = term_x_30;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_30, term_y_30, c_55);
  t = lookup_table_0_1(d_55, t);
  g_55 = t;
  t = term_y_30;
  e_55 = t;
  t = g_55;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(e_55, c_55, f_55, t);
  t = c_55;
  t = o_105(t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_105, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        {
          ATerm e_31 = t;
          int f_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_31);
            }
          else
            {
              t = e_31;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm g_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = g_31;
      {
        ATerm i_31 = t;
        int j_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(j_31);
          }
        else
          {
            t = i_31;
            {
              ATerm k_31 = t;
              int l_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_6, q_6, s_6, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(n_31);
                      }
                    else
                      {
                        t = m_31;
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
  t = xtc_temp_files_1_0(t_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm o_55 = NULL,p_55 = NULL;
  t = term_o_31;
  o_55 = t;
  t = term_f_20;
  p_55 = t;
  t = term_q_31;
  t = c_8(o_55, p_55, t);
  t = term_r_31;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
      t = term_h_10;
      s_55 = t;
      t = term_g_20;
      t_55 = t;
      t = term_v_31;
      t = z_7(s_55, t_55, t);
      r_55 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_55);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = term_r_10;
    }
  {
    ATerm w_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_55 = NULL,a_56 = NULL;
        a_56 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_55 = ATgetArgument(t, 0);
            {
              ATerm u_18 = NULL,w_10 = NULL;
              t = SSLgetAnnotations(a_56);
              u_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_55);
              w_10 = t;
              t = SSLsetAnnotations(w_10, u_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_56;
          }
        LocalPopChoice(z_31);
        t = xtc_transform_file_2_0(v_6, v_7, t);
      }
    else
      {
        t = w_31;
        t = xtc_transform_term_2_0(y_7, f_8, t);
      }
  }
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_56 = NULL,j_56 = NULL;
        j_56 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_56 = ATgetArgument(t, 0);
            {
              ATerm c_19 = NULL,z_10 = NULL;
              t = SSLgetAnnotations(j_56);
              c_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_56);
              z_10 = t;
              t = SSLsetAnnotations(z_10, c_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_56;
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(g_8, pass_verbose_0_0, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(h_8, pass_verbose_0_0, t);
      }
  }
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_56 = NULL,q_56 = NULL;
        q_56 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_56 = ATgetArgument(t, 0);
            {
              ATerm v_19 = NULL,a_11 = NULL;
              t = SSLgetAnnotations(q_56);
              v_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_56);
              a_11 = t;
              t = SSLsetAnnotations(a_11, v_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_56;
          }
        LocalPopChoice(i_32);
        t = xtc_transform_file_2_0(j_8, pass_verbose_0_0, t);
      }
    else
      {
        t = h_32;
        t = xtc_transform_term_2_0(k_8, pass_verbose_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm b_56 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  b_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_56), term_l_32);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_56 = NULL;
  t = term_k_32;
  t = xtc_find_0_0(t);
  t = remove_extension_0_0(t);
  c_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_56), term_l_32);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_m_32;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_n_32;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm io_pp_c_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_6, default_usage_0_0, _id, m_6, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_pp_c_0_0(t);
  return(t);
}
