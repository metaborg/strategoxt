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
Symbol sym_ErrorNumber_1;
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
ATerm term_q_39;
ATerm term_p_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_p_38;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_n_37;
ATerm term_b_37;
ATerm term_l_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_d_36;
ATerm term_y_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_u_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_m_33;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_m_30;
ATerm term_f_30;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_u_24;
ATerm term_j_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_t_22;
ATerm term_r_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_w_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_v_9);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_10, term_a_10, term_b_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_11, term_h_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_n_11, term_p_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_m_12, term_o_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_m_13, term_n_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_s_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_e_14, term_f_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_q_14, term_r_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_y_14, term_z_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_j_15, term_k_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_p_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_i_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_w_17, term_x_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_i_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_u_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_t_22);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_v_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_i_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_q_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_u_28);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_p_25, term_k_25);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_s_25);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_m_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_r_25);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_r_25);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_o_33);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_y_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_e_32, term_f_32);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_b_37, term_r_25);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_r_25);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_r_25);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_b_37);
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm z_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm a_7 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm b_7 (ATerm m_67 (ATerm), ATerm f_177, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t);
static ATerm c_7 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm o_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm b_66 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm e_84 (ATerm), ATerm t);
static ATerm f_7 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm g_7 (ATerm n_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm h_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm i_7 (ATerm g_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm r_11 (ATerm i_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_7 (ATerm u_17, ATerm t);
static ATerm k_7 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_14 (ATerm k_12, ATerm t);
static ATerm w_14 (ATerm q_12, ATerm x_12, ATerm y_12, ATerm t);
static ATerm x_14 (ATerm t_13, ATerm u_13, ATerm v_13, ATerm t);
static ATerm l_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm o_21 (ATerm l_20, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm b_87 (ATerm), ATerm t);
static ATerm h_22 (ATerm y_21, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm q_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
static ATerm n_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm o_7 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm r_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_67 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm a_84 (ATerm), ATerm t);
static ATerm p_7 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm x_72 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm s_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_82 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm n_86 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_83 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm need_help_1_0 (ATerm j_88 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm c_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_7 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm z_7 (ATerm e_39, ATerm f_39, ATerm t);
static ATerm x_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_90 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
ATerm parse_options_1_0 (ATerm g_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm p_1 = NULL,q_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = p_1;
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
        t = (ATerm) ATmakeAppl(sym__2, q_1, h_0);
        t = r_7(q_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          ATerm c_9 = t;
          int d_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 = NULL;
              t = p_1;
              t = r_0(t);
              b_1 = t;
              {
                ATerm g_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_1 = NULL;
                    e_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = e_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = e_1;
                          }
                        else
                          {
                            t = e_1;
                            if((q_1 != t))
                              {
                                _fail(t);
                              }
                            t = e_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_1, b_1);
              t = r_7(q_1, b_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
              LocalPopChoice(d_9);
            }
          else
            {
              t = c_9;
              t = p_1;
              t = r_0(t);
              if((q_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
            }
        }
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_j_9;
      t_2 = t;
      t = term_k_9;
      u_2 = t;
      t = term_l_9;
      t = w_7(t_2, u_2, t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = term_n_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_1 = NULL,o_1 = NULL;
      t = term_k_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 = NULL,v_1 = NULL;
            t = term_j_9;
            u_1 = t;
            t = term_k_9;
            v_1 = t;
            t = term_l_9;
            t = w_7(u_1, v_1, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = term_n_9;
          }
      }
      l_1 = t;
      t = term_r_9;
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_9, l_1);
      t = r_7(o_1, l_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm z_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  t = term_v_9;
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_j_9;
        c_3 = t;
        t = term_v_9;
        d_3 = t;
        t = term_y_9;
        t = w_7(c_3, d_3, t);
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        t = term_a_10;
      }
  }
  z_2 = t;
  t = term_a_10;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_a_10);
  t = z_6(z_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_v_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm n_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_10);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATempty, term_e_10));
      t = p_7(l_3, n_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_3);
  return(t);
}
static ATerm b_7 (ATerm m_67 (ATerm), ATerm f_177, ATerm y_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_177, term_f_10);
  t = l_7(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, y_17);
  t = m_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm t_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          t_3 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_7(t_3, w_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm a_86 (ATerm), ATerm b_86 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  r_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  t = b_7(b_0, q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(a_86, b_86, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,e_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_5 = ATgetArgument(t, 0);
      {
        ATerm a_2 = NULL,b_2 = NULL;
        t = SSL_int_to_string(b_5);
        a_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), a_2), term_i_10);
        b_2 = t;
        t = SSL_concat_strings(b_2);
      }
    }
  else
    {
      ATerm p_2 = NULL,w_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_5 = ATgetArgument(t, 0);
          c_5 = ATgetArgument(t, 1);
          e_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_5);
      p_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_5), term_p_10), p_2), term_l_10), b_5);
      w_2 = t;
      t = SSL_concat_strings(w_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = o_72(t);
    if(((k_5 != NULL) && (k_5 != t)))
      _fail(t);
    else
      k_5 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(k_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm s_10 = ATgetArgument(t, 0);
              if((m_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_19), term_y_18), term_u_18), term_n_18), term_j_18), term_c_18), term_h_17), term_t_16), term_j_16), term_b_16), term_x_15), term_t_15), term_m_15), term_g_15), term_a_15), term_u_14), term_i_14), term_b_14), term_o_13), term_h_13), term_b_13), term_p_12), term_i_12), term_e_12), term_w_11), term_q_11), term_j_11), term_e_11);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_5 = NULL,a_6 = NULL;
  q_5 = t;
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            a_6 = ATgetArgument(t, 1);
            {
              ATerm j_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_19);
        {
          ATerm k_19 = t;
          int l_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_3 = NULL,s_3 = NULL,u_3 = NULL;
              t = a_6;
              {
                ATerm m_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              i_3 = t;
              t = term_n_19;
              s_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_3), term_o_19);
              u_3 = t;
              t = SSL_printnl(s_3, u_3);
              t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_o_19));
              LocalPopChoice(l_19);
            }
          else
            {
              t = k_19;
              t = q_5;
            }
        }
      }
    else
      {
        t = d_19;
        t = q_5;
      }
  }
  t = q_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm b_66 (ATerm), ATerm t)
{
  ATerm n_6 = NULL,o_6 = NULL;
  o_6 = t;
  t = fork_0_0(t);
  n_6 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = o_6;
        t = b_66(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = SSL_waitpid(n_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            if(((ATgetType(t_19) != AT_INT) || (ATgetInt((ATermInt) t_19) != 0)))
              _fail(t);
            {
              ATerm w_19 = ATgetArgument(t, 1);
            }
            {
              ATerm x_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = o_6;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_6 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm u_6 = NULL,w_6 = NULL;
    u_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), u_6);
    t = w_7(not_null(t_6), u_6, t);
    w_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_6, w_6);
    return(t);
  }
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  t = SSL_table_keys(t_6);
  t = map_1_0(m_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,v_7 = NULL,a_8 = NULL;
        t = term_j_9;
        v_7 = t;
        t = term_v_9;
        a_8 = t;
        t = term_y_9;
        t = w_7(v_7, a_8, t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_l_18);
        t = geq_0_0(t);
        t = d_7;
        t = d_84(t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = d_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,l_8 = NULL,m_8 = NULL;
        t = term_j_9;
        l_8 = t;
        t = term_v_9;
        m_8 = t;
        t = term_y_9;
        t = w_7(l_8, m_8, t);
        j_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, term_e_14);
        t = geq_0_0(t);
        t = h_8;
        t = c_84(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = h_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL,y_8 = NULL,b_9 = NULL;
        t = term_j_9;
        y_8 = t;
        t = term_v_9;
        b_9 = t;
        t = term_y_9;
        t = w_7(y_8, b_9, t);
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, term_u_11);
        t = geq_0_0(t);
        t = p_8;
        t = e_84(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = p_8;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm q_76 (ATerm), ATerm r_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = r_76(t);
  {
    static ATerm q_0 (ATerm t)
    {
      ATerm f_9 = NULL;
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, f_9);
      t = q_76(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm g_7 (ATerm n_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm g_10 (ATerm t)
  {
    ATerm z_9 = NULL,c_10 = NULL,d_10 = NULL;
    z_9 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_10 = ATgetFirst((ATermList) t);
            d_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_20 = t;
          int m_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_9;
              {
                static ATerm s_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = f_7(n_76, s_0, c_10, d_10, t);
              }
              t = g_10(t);
              LocalPopChoice(m_20);
            }
          else
            {
              t = k_20;
              {
                ATerm d_4 = NULL,i_4 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(z_9);
                d_4 = t;
                t = d_10;
                t = g_10(t);
                i_4 = t;
                t = (ATerm) ATinsert(CheckATermList(i_4), c_10);
                g_0 = t;
                t = SSLsetAnnotations(g_0, d_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = g_10(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      if((u_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = w_7(o_37, p_37, t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
  }
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_10, q_37);
  t = g_7(u_0, o_10, q_37, t);
  n_10 = t;
  t = SSL_table_put(o_37, p_37, n_10);
  t = m_10;
  return(t);
}
static ATerm i_7 (ATerm g_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    ATerm v_10 = NULL,y_10 = NULL;
    if(match_cons(t, sym__2))
      {
        v_10 = ATgetArgument(t, 0);
        y_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, v_10, y_10);
    t = g_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm r_11 (ATerm i_11, ATerm t)
{
  t = SSL_fclose(i_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_11 = NULL,o_11 = NULL;
  o_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_11 = ATgetArgument(t, 0);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_11);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = r_11(o_11, t);
          }
      }
    }
  else
    {
      t = r_11(o_11, t);
    }
  return(t);
}
static ATerm j_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm k_7 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm s_11 = NULL;
  t = SSL_fopen(q_40, r_40);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_11 = NULL;
  t = SSL_stdin_stream();
  z_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_12 = NULL;
  t = SSL_stdout_stream();
  a_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  t = SSL_stderr_stream();
  b_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_12);
  return(t);
}
static ATerm t_14 (ATerm k_12, ATerm t)
{
  ATerm l_12 = NULL;
  t = SSL_explode_term(k_12);
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            l_12 = ATgetFirst((ATermList) a_21);
            {
              ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_12;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_12;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_12;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_12;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_14 (ATerm q_12, ATerm x_12, ATerm y_12, ATerm t)
{
  ATerm z_12 = NULL,f_13 = NULL,j_13 = NULL,r_13 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(y_12);
  j_13 = t;
  t = q_12;
  if(match_cons(t, sym_Path_1))
    {
      r_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, x_12);
  y_0 = t;
  t = SSLsetAnnotations(y_0, j_13);
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(z_12, f_13, t);
  return(t);
}
static ATerm x_14 (ATerm t_13, ATerm u_13, ATerm v_13, ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,z_13 = NULL,d_14 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(v_13);
  z_13 = t;
  t = SSL_is_string(t_13);
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_14, u_13);
  z_0 = t;
  t = SSLsetAnnotations(z_0, z_13);
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(w_13, x_13, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_14 = NULL,k_14 = NULL,s_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_14(j_14, t);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            {
              ATerm h_21 = t;
              int i_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_14(k_14, s_14, j_14, t);
                  LocalPopChoice(i_21);
                }
              else
                {
                  t = h_21;
                  t = x_14(k_14, s_14, j_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_14(j_14, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_15 = NULL,i_15 = NULL,n_15 = NULL,d_16 = NULL;
  d_16 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_16, term_l_21);
        t = l_7(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        {
          ATerm l_5 = NULL,n_5 = NULL;
          t = term_m_21;
          n_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_m_21, d_16);
          t = n_7(n_5, d_16, t);
          l_5 = t;
          t = SSL_perror(l_5);
          _fail(t);
        }
      }
  }
  i_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(n_15, t);
  e_15 = t;
  t = i_15;
  t = fclose_0_0(t);
  t = e_15;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_16 = NULL,h_16 = NULL;
      g_16 = t;
      t = (ATerm) ATinsert(ATempty, term_w_21);
      h_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_16, (ATerm) ATinsert(ATempty, term_w_21));
      t = p_7(g_16, h_16, t);
      LocalPopChoice(u_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_21;
      {
        ATerm x_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_22 = t;
            if((PushChoice() == 0))
              {
                ATerm k_16 = NULL,l_16 = NULL;
                k_16 = t;
                t = (ATerm) ATinsert(ATempty, term_e_10);
                l_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATinsert(ATempty, term_e_10));
                t = p_7(k_16, l_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_22;
              }
            t = debug_1_0(a_1, t);
            LocalPopChoice(a_22);
          }
        else
          {
            t = x_21;
            t = debug_1_0(c_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm i_17 = NULL,k_17 = NULL,l_17 = NULL;
  i_17 = t;
  t = term_n_19;
  k_17 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  l_17 = t;
  t = SSL_printnl(k_17, l_17);
  t = i_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__3))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
      q_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_7(m_17, n_17, q_17, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL;
  r_17 = t;
  t = term_n_19;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  t_17 = t;
  t = SSL_printnl(s_17, t_17);
  t = r_17;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  t = term_n_19;
  a_18 = t;
  t = (ATerm) ATinsert(ATempty, term_k_22);
  b_18 = t;
  t = SSL_printnl(a_18, b_18);
  t = z_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,c_17 = NULL;
  m_16 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm q_22 = t;
    if((PushChoice() == 0))
      {
        ATerm d_17 = NULL,e_17 = NULL;
        t = term_r_22;
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_16);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATmakeAppl(sym_Imported_1, m_16));
        t = w_7(d_17, e_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_22;
      }
  }
  p_16 = t;
  t = term_r_22;
  y_16 = t;
  t = term_t_22;
  z_16 = t;
  t = (ATerm) ATinsert(ATempty, m_16);
  c_17 = t;
  t = SSL_table_put(y_16, z_16, c_17);
  t = p_16;
  t = if_verbose4_1_0(h_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_1, t);
  o_16 = t;
  t = term_r_22;
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, o_16);
  t = i_7(m_1, x_16, o_16, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_r_22;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_16);
  v_16 = t;
  t = (ATerm) ATempty;
  w_16 = t;
  t = SSL_table_put(u_16, v_16, w_16);
  t = (ATerm) ATmakeAppl(sym__3, term_r_22, (ATerm)ATmakeAppl(sym_Imported_1, m_16), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_19 = ATgetFirst((ATermList) t);
          h_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL,f_6 = NULL,i_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(f_19);
            u_5 = t;
            t = g_19;
            t = m_80(t);
            f_6 = t;
            t = h_19;
            t = filter_1_0(m_80, t);
            i_6 = t;
            t = (ATerm) ATinsert(CheckATermList(i_6), f_6);
            g_1 = t;
            t = SSLsetAnnotations(g_1, u_5);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = h_19;
            t = filter_1_0(m_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  static ATerm r_19 (ATerm t)
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_70(t);
        t = r_19(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = i_70(t);
      }
    return(t);
  }
  t = r_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL,u_19 = NULL;
      t = term_j_9;
      s_19 = t;
      t = term_i_23;
      u_19 = t;
      t = term_l_23;
      t = w_7(s_19, u_19, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = z_22;
      {
        ATerm n_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_19 = NULL;
            t = term_s_23;
            v_19 = t;
            t = SSL_getenv(v_19);
            LocalPopChoice(p_23);
          }
        else
          {
            t = n_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm c_20 = NULL,f_20 = NULL;
  t = term_r_22;
  c_20 = t;
  t = term_u_23;
  f_20 = t;
  t = term_v_23;
  t = w_7(c_20, f_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm w_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_23;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_19 = NULL;
  t = if_verbose5_1_0(w_1, t);
  y_19 = t;
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_19 = NULL,a_20 = NULL;
        t = term_r_22;
        z_19 = t;
        t = term_t_22;
        a_20 = t;
        t = term_a_24;
        t = w_7(z_19, a_20, t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        {
          ATerm b_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_20 = t;
          t = repeat_2_0(y_1, _id, t);
          t = b_20;
        }
      }
  }
  t = y_19;
  t = if_verbose5_1_0(z_1, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm o_21 (ATerm l_20, ATerm t)
{
  ATerm o_20 = NULL,r_20 = NULL,s_20 = NULL;
  t = term_r_22;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_20);
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATmakeAppl(sym_Tool_1, l_20));
  t = w_7(r_20, s_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_24 = ATgetFirst((ATermList) t);
      if(match_cons(c_24, sym__2))
        {
          ATerm e_24 = ATgetArgument(c_24, 0);
          o_20 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      {
        ATerm d_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_20;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_r_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL,y_20 = NULL,z_20 = NULL;
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      z_20 = t;
      if(match_cons(t, sym__2))
        {
          w_20 = ATgetArgument(t, 0);
          y_20 = ATgetArgument(t, 1);
          {
            ATerm p_24 = t;
            int q_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
                t = term_r_22;
                f_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, w_20);
                g_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_22, (ATerm) ATmakeAppl(sym_Tool_1, w_20));
                t = w_7(f_21, g_21, t);
                {
                  static ATerm f_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_2, t);
                }
                t = not_null(e_21);
                LocalPopChoice(q_24);
              }
            else
              {
                t = p_24;
                t = o_21(z_20, t);
              }
          }
        }
      else
        {
          t = o_21(z_20, t);
        }
      t = if_verbose5_1_0(g_2, t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = k_24;
      {
        ATerm n_21 = NULL,v_6 = NULL,x_6 = NULL;
        n_21 = t;
        t = term_n_19;
        v_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), n_21), term_u_24);
        x_6 = t;
        t = SSL_printnl(v_6, x_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), n_21), term_u_24);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL;
  t_21 = t;
  t = b_87(t);
  t = xtc_find_0_0(t);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_21, t_21);
  {
    static ATerm l_2 (ATerm t)
    {
      ATerm v_21 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_21, t_21);
      t = c_7(r_21, t_21, t);
      t = term_d_25;
      v_21 = t;
      t = SSL_exit(v_21);
      return(t);
    }
    t = fork_and_wait_1_0(l_2, t);
  }
  t = t_21;
  return(t);
}
static ATerm h_22 (ATerm y_21, ATerm t)
{
  ATerm z_21 = NULL;
  t = SSL_explode_term(y_21);
  if(match_cons(t, sym__2))
    {
      ATerm f_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_21;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
  e_22 = t;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              t = d_22;
              return(t);
            }
            t = c_22;
            t = at_end_1_0(n_2, t);
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            t = h_22(e_22, t);
          }
      }
    }
  else
    {
      t = h_22(e_22, t);
    }
  return(t);
}
static ATerm m_7 (ATerm q_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL;
  n_22 = t;
  t = q_82(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_22, e_35, c_35);
  t = x_7(i_22, e_35, c_35, t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_22 = NULL;
        t = term_k_25;
        s_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_22, term_k_25);
        t = w_7(i_22, s_22, t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_22 = ATgetFirst((ATermList) t);
      m_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_25;
  o_22 = t;
  t = (ATerm) ATinsert(CheckATermList(m_22), (ATerm) ATinsert(CheckATermList(j_22), e_35));
  p_22 = t;
  t = SSL_table_put(i_22, o_22, p_22);
  t = n_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_22 = NULL;
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_23 = NULL,c_8 = NULL;
      a_23 = t;
      t = term_n_25;
      c_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_23, term_n_25);
      t = n_7(a_23, c_8, t);
      u_22 = t;
      t = SSL_mkstemp(u_22);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm b_23 = NULL;
        t = term_o_25;
        b_23 = t;
        t = SSL_perror(b_23);
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
static ATerm o_2 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  t = P__tmpdir_0_0(t);
  g_23 = t;
  t = term_q_25;
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_23, term_q_25);
  t = n_7(g_23, h_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_23 = ATgetArgument(t, 0);
      d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_r_25;
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_23, term_r_25);
  t = m_7(o_2, e_23, f_23, t);
  t = SSL_close(d_23);
  t = e_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  j_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_23 = NULL,o_23 = NULL;
      t = j_23;
      t = xtc_new_file_0_0(t);
      m_23 = t;
      t = x_0(t);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_23, (ATerm) ATinsert(ATinsert(ATempty, m_23), term_k_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
    }
  else
    {
      ATerm q_23 = NULL,r_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_23;
      t = xtc_new_file_0_0(t);
      q_23 = t;
      t = x_0(t);
      r_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_23), term_k_9), k_23), term_s_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_23);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  static ATerm i_24 (ATerm t)
  {
    ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
    h_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_24 = ATgetFirst((ATermList) t);
        g_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_8 = NULL,r_8 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(h_24);
          k_8 = t;
          t = g_24;
          t = i_24(t);
          r_8 = t;
          t = (ATerm) ATinsert(CheckATermList(r_8), f_24);
          i_1 = t;
          t = SSLsetAnnotations(i_1, k_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_24;
        t = t_72(t);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_24;
    }
  else
    {
      static ATerm s_2 (ATerm t)
      {
        t = not_null(n_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_24 = ATgetFirst((ATermList) t);
          if(((n_24 != NULL) && (n_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_24;
      t = at_end_1_0(s_2, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_24 = NULL,s_24 = NULL;
      t = term_j_9;
      r_24 = t;
      t = term_v_25;
      s_24 = t;
      t = term_w_25;
      t = w_7(r_24, s_24, t);
      LocalPopChoice(u_25);
      {
        ATerm t_24 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        t_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_24), term_v_25);
      }
    }
  else
    {
      t = t_25;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm n_7 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,z_24 = NULL;
  t = term_r_25;
  t = new_0_0(t);
  v_24 = t;
  t = term_z_25;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_24, term_z_25);
  t = n_7(v_24, w_24, t);
  z_24 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        t = (ATerm) ATinsert(ATempty, term_e_10);
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_24, (ATerm) ATinsert(ATempty, term_e_10));
        t = p_7(z_24, e_25, t);
        t = new_file_0_0(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = z_24;
      }
  }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
static ATerm o_7 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      t = get_errno_0_0(t);
      t = term_r_25;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = r_7(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm r_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  x_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL;
        t = x_25;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_n_9;
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_25, term_n_9);
        t = r_7(y_25, e_9, t);
        t = SSL_remove(y_25);
        t = term_n_9;
        LocalPopChoice(h_26);
      }
    else
      {
        t = e_26;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_9 = NULL;
              t = x_25;
              t = t_0(t);
              m_9 = t;
              {
                ATerm k_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_9 = NULL;
                    q_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_9;
                      }
                    else
                      {
                        t = q_9;
                        if((y_25 != t))
                          {
                            _fail(t);
                          }
                        t = q_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, y_25, m_9);
              t = o_7(y_25, m_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = x_25;
              t = t_0(t);
              if((y_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_25);
            }
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_n_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  f_26 = t;
  {
    static ATerm v_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_26 = NULL,m_26 = NULL,n_1 = NULL;
            m_26 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm v_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_26);
            l_26 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
            n_1 = t;
            t = SSLsetAnnotations(n_1, l_26);
            LocalPopChoice(s_26);
            t = xtc_transform_file_2_0(y_2, e_3, t);
          }
        else
          {
            t = r_26;
            t = xtc_transform_term_2_0(f_3, g_3, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(v_2, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_26;
  t = if_verbose2_1_0(h_3, t);
  return(t);
}
ATerm debug_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,t_26 = NULL,u_26 = NULL;
  p_26 = t;
  t = k_67(t);
  q_26 = t;
  t = term_n_19;
  t_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_26), q_26);
  u_26 = t;
  t = SSL_printnl(t_26, u_26);
  t = p_26;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm w_26 = NULL;
  w_26 = t;
  {
    ATerm x_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL,c_27 = NULL,d_27 = NULL;
        t = term_j_9;
        c_27 = t;
        t = term_v_9;
        d_27 = t;
        t = term_y_9;
        t = w_7(c_27, d_27, t);
        y_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_26, term_g_11);
        t = geq_0_0(t);
        t = w_26;
        t = a_84(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = x_26;
        t = w_26;
      }
  }
  return(t);
}
static ATerm p_7 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,s_27 = NULL,t_1 = NULL;
  i_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_27), term_b_27), i_27);
  n_27 = t;
  t = SSL_concat_strings(n_27);
  m_27 = t;
  t = (ATerm) ATinsert(ATempty, term_e_10);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, (ATerm) ATinsert(ATempty, term_e_10));
  t = p_7(m_27, l_27, t);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
  s_27 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      ATerm g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_27);
  o_27 = t;
  t = SSL_modification_time(h_27);
  p_27 = t;
  t = SSL_modification_time(i_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
  t_1 = t;
  t = SSLsetAnnotations(t_1, o_27);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_27, i_27);
  k_27 = t;
  t = SSL_explode_term(k_27);
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_27 = ATgetArgument(t, 1);
        if(((ATgetType(t_27) == AT_LIST) && !(ATisEmpty(t_27))))
          {
            j_27 = ATgetFirst((ATermList) t_27);
            {
              ATerm u_27 = (ATerm) ATgetNext((ATermList) t_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_27;
  t = if_verbose2_1_0(k_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_72 (ATerm), ATerm t)
{
  static ATerm o_28 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_72(t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        {
          ATerm k_28 = NULL,l_28 = NULL,n_28 = NULL,b_10 = NULL,k_10 = NULL,k_2 = NULL;
          k_28 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_28 = ATgetFirst((ATermList) t);
              n_28 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_28);
          b_10 = t;
          t = n_28;
          t = o_28(t);
          k_10 = t;
          t = (ATerm) ATinsert(CheckATermList(k_10), l_28);
          k_2 = t;
          t = SSLsetAnnotations(k_2, b_10);
        }
      }
    return(t);
  }
  t = o_28(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10 = NULL,z_10 = NULL,a_11 = NULL;
      z_10 = t;
      t = term_z_27;
      a_11 = t;
      t = SSL_explode_string(a_11);
      x_10 = t;
      t = SSL_explode_string(z_10);
      {
        static ATerm v_3 (ATerm t)
        {
          if((x_10 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(v_3, t);
      }
      t = z_10;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_11 = NULL,d_11 = NULL,m_11 = NULL;
            d_11 = t;
            t = term_c_28;
            m_11 = t;
            t = SSL_explode_string(m_11);
            c_11 = t;
            t = SSL_explode_string(d_11);
            {
              static ATerm x_3 (ATerm t)
              {
                if((c_11 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(x_3, t);
            }
            t = d_11;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm v_28 = NULL,w_28 = NULL,y_28 = NULL,z_28 = NULL;
              v_28 = t;
              t = term_n_19;
              y_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, v_28), term_d_28);
              z_28 = t;
              t = SSL_printnl(y_28, z_28);
              t = term_a_10;
              w_28 = t;
              t = SSL_exit(w_28);
              t = (ATerm) ATinsert(ATinsert(ATempty, v_28), term_d_28);
            }
          }
      }
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int h_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,d_29 = NULL;
      t = term_j_9;
      c_29 = t;
      t = term_i_28;
      d_29 = t;
      t = term_j_28;
      t = w_7(c_29, d_29, t);
      LocalPopChoice(h_28);
      {
        ATerm g_29 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        g_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, g_29), term_i_28);
      }
    }
  else
    {
      t = g_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL,j_29 = NULL;
      t = term_j_9;
      h_29 = t;
      t = term_q_28;
      j_29 = t;
      t = term_r_28;
      t = w_7(h_29, j_29, t);
      LocalPopChoice(p_28);
      t = (ATerm) ATinsert(ATempty, term_q_28);
    }
  else
    {
      t = m_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL,o_29 = NULL;
      t = term_j_9;
      l_29 = t;
      t = term_u_28;
      o_29 = t;
      t = term_x_28;
      t = w_7(l_29, o_29, t);
      LocalPopChoice(t_28);
      t = (ATerm) ATinsert(ATempty, term_u_28);
    }
  else
    {
      t = s_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm q_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  t = term_r_25;
  t = pass__patch_0_0(t);
  q_29 = t;
  t = term_r_25;
  t = pass__prune_0_0(t);
  u_29 = t;
  t = term_r_25;
  t = pass__new_0_0(t);
  v_29 = t;
  t = term_r_25;
  t = pass__old_0_0(t);
  w_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_29), v_29), u_29), q_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm s_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  a_30 = t;
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = w_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_29 = ATgetFirst((ATermList) t);
            z_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_29);
        t = SSL_table_put(w_36, x_36, z_29);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, z_29);
      }
    else
      {
        t = a_29;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = a_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm b_30 = NULL,d_30 = NULL,e_30 = NULL,h_30 = NULL,j_30 = NULL;
  h_30 = t;
  t = n_82(t);
  e_30 = t;
  {
    ATerm f_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL;
        t = term_k_25;
        l_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_30, term_k_25);
        t = w_7(e_30, l_30, t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = f_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_30 = ATgetFirst((ATermList) t);
      b_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_25;
  j_30 = t;
  t = SSL_table_put(e_30, j_30, b_30);
  t = d_30;
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm n_30 = NULL;
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_30, n_30);
      t = s_7(e_30, n_30, t);
      return(t);
    }
    t = map_1_0(y_3, t);
  }
  t = h_30;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_83(t);
      t = o_83(t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = k_29;
      t = o_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,t_30 = NULL,u_30 = NULL,x_30 = NULL,y_30 = NULL;
  t_30 = t;
  t = m_82(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_30, term_k_25);
  {
    ATerm n_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_29 = ATgetArgument(t, 0);
            ATerm s_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_25;
        f_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_30, term_k_25);
        t = w_7(q_30, f_31, t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATempty;
      }
  }
  u_30 = t;
  t = term_k_25;
  x_30 = t;
  t = (ATerm) ATinsert(CheckATermList(u_30), (ATerm) ATempty);
  y_30 = t;
  t = SSL_table_put(q_30, x_30, y_30);
  t = t_30;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm u_31 = NULL;
  u_31 = t;
  {
    ATerm t_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(u_31);
        LocalPopChoice(x_29);
      }
    else
      {
        t = t_29;
        t = u_31;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  ATerm j_31 = NULL;
  static ATerm a_4 (ATerm t)
  {
    ATerm k_31 = NULL;
    k_31 = t;
    {
      ATerm y_29 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_31 = NULL,r_31 = NULL;
          t = term_p_25;
          q_31 = t;
          t = term_k_25;
          r_31 = t;
          t = term_f_30;
          t = w_7(q_31, r_31, t);
          LocalPopChoice(c_30);
        }
      else
        {
          t = y_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_31 != NULL) && (j_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_31 = ATgetFirst((ATermList) t);
        {
          ATerm g_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_31;
    t = map_1_0(c_4, t);
    t = k_31;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(z_3, t);
  t = restore_always_2_0(n_86, a_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm i_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32 = NULL,k_32 = NULL,n_32 = NULL;
      t = term_j_9;
      k_32 = t;
      t = term_s_25;
      n_32 = t;
      t = term_m_30;
      t = w_7(k_32, n_32, t);
      h_32 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_32);
      LocalPopChoice(k_30);
    }
  else
    {
      t = i_30;
      t = term_r_9;
    }
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL;
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_32 = NULL,x_32 = NULL;
            x_32 = t;
            if(match_cons(t, sym_FILE_1))
              {
                v_32 = ATgetArgument(t, 0);
                {
                  ATerm x_11 = NULL,m_2 = NULL;
                  t = SSLgetAnnotations(x_32);
                  x_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, v_32);
                  m_2 = t;
                  t = SSLsetAnnotations(m_2, x_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_32;
              }
            LocalPopChoice(s_30);
            t = xtc_transform_file_2_0(h_4, j_4, t);
          }
        else
          {
            t = r_30;
            t = xtc_transform_term_2_0(k_4, l_4, t);
          }
        l_33 = t;
        {
          ATerm v_30 = t;
          int w_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_33;
              {
                ATerm z_30 = t;
                int a_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_12 = NULL,r_12 = NULL;
                    t = term_j_9;
                    n_12 = t;
                    t = term_u_28;
                    r_12 = t;
                    t = term_x_28;
                    t = w_7(n_12, r_12, t);
                    LocalPopChoice(a_31);
                  }
                else
                  {
                    t = z_30;
                    {
                      ATerm s_12 = NULL,t_12 = NULL;
                      t = term_j_9;
                      s_12 = t;
                      t = term_q_28;
                      t_12 = t;
                      t = term_r_28;
                      t = w_7(s_12, t_12, t);
                    }
                  }
              }
              t = l_33;
              {
                ATerm b_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_13 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        a_13 = ATgetArgument(t, 0);
                        {
                          ATerm g_13 = NULL,q_2 = NULL;
                          t = SSLgetAnnotations(l_33);
                          g_13 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, a_13);
                          q_2 = t;
                          t = SSLsetAnnotations(q_2, g_13);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = l_33;
                      }
                    LocalPopChoice(c_31);
                    t = xtc_transform_file_2_0(n_4, pass_verbose_0_0, t);
                  }
                else
                  {
                    t = b_31;
                    t = xtc_transform_term_2_0(o_4, pass_verbose_0_0, t);
                  }
              }
              LocalPopChoice(w_30);
            }
          else
            {
              t = v_30;
              t = l_33;
            }
        }
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        {
          ATerm n_33 = NULL;
          t = term_a_10;
          n_33 = t;
          t = SSL_exit(n_33);
        }
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_r_25;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_r_25;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(g_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_33 = NULL,y_33 = NULL,z_33 = NULL,c_34 = NULL,e_34 = NULL;
  v_33 = t;
  t = term_r_25;
  t = whoami_0_0(t);
  y_33 = t;
  t = term_n_19;
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_31), y_33), term_g_31);
  e_34 = t;
  t = SSL_printnl(c_34, e_34);
  t = term_a_10;
  z_33 = t;
  t = SSL_exit(z_33);
  t = v_33;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-k"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
  h_34 = t;
  t = SSL_string_to_int(h_34);
  i_34 = t;
  t = term_i_31;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_31, i_34);
  t = z_7(j_34, i_34, t);
  t = h_34;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  if(match_string(t, "-S"))
    {
      t = l_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_34;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL;
  t = term_v_9;
  m_34 = t;
  t = term_m_31;
  n_34 = t;
  t = term_n_31;
  t = z_7(m_34, n_34, t);
  t = term_o_31;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_p_31;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  t = SSL_string_to_int(o_34);
  p_34 = t;
  t = term_v_9;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, p_34);
  t = z_7(q_34, p_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_34);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_34 = NULL,t_34 = NULL;
  t = term_t_31;
  r_34 = t;
  t = term_r_25;
  t_34 = t;
  t = term_v_31;
  t = z_7(r_34, t_34, t);
  t = term_w_31;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, w_4, x_4, t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, d_5, f_5, t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            t = Option_3_0(g_5, h_5, j_5, t);
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  if(match_string(t, "-o"))
    {
      t = v_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_34;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  t = term_k_9;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, h_35);
  t = z_7(i_35, h_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_35);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, r_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  if(match_string(t, "-i"))
    {
      t = m_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_35;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm n_35 = NULL,u_35 = NULL;
  n_35 = t;
  t = term_s_25;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_25, n_35);
  t = z_7(u_35, n_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_35);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, v_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_36 = NULL,f_36 = NULL,i_36 = NULL;
      t = term_r_25;
      t = p_0(t);
      e_36 = t;
      t = term_e_32;
      f_36 = t;
      t = term_f_32;
      i_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, e_36);
      t = x_7(f_36, i_36, e_36, t);
      _fail(t);
    }
  else
    {
      ATerm u_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_35;
      t = n_0(t);
      t = b_36;
      t = o_0(t);
      u_36 = t;
      t = (ATerm) ATinsert(CheckATermList(c_36), u_36);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  y_36 = t;
  t = term_u_28;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_28, y_36);
  t = z_7(z_36, y_36, t);
  t = y_36;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm a_37 = NULL,c_37 = NULL;
  a_37 = t;
  t = term_q_28;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, a_37);
  t = z_7(c_37, a_37, t);
  t = a_37;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  d_37 = t;
  t = term_v_25;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_25, d_37);
  t = z_7(e_37, d_37, t);
  t = d_37;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_j_32;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL;
  f_37 = t;
  t = term_i_28;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_28, f_37);
  t = z_7(g_37, f_37, t);
  t = f_37;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_o_32;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  t = term_p_32;
  h_37 = t;
  t = term_r_25;
  i_37 = t;
  t = term_q_32;
  t = z_7(h_37, i_37, t);
  t = term_r_32;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm w_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_5, b_6, c_6, t);
            LocalPopChoice(y_32);
          }
        else
          {
            t = w_32;
            {
              ATerm z_32 = t;
              int a_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_6, e_6, g_6, t);
                  LocalPopChoice(a_33);
                }
              else
                {
                  t = z_32;
                  {
                    ATerm b_33 = t;
                    int c_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(h_6, j_6, k_6, t);
                        LocalPopChoice(c_33);
                      }
                    else
                      {
                        t = b_33;
                        {
                          ATerm d_33 = t;
                          int e_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(e_33);
                            }
                          else
                            {
                              t = d_33;
                              {
                                ATerm f_33 = t;
                                int g_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(g_33);
                                  }
                                else
                                  {
                                    t = f_33;
                                    {
                                      ATerm h_33 = t;
                                      int i_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(l_6, m_6, p_6, t);
                                          LocalPopChoice(i_33);
                                        }
                                      else
                                        {
                                          t = h_33;
                                          {
                                            ATerm j_33 = t;
                                            int k_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(k_33);
                                              }
                                            else
                                              {
                                                t = j_33;
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
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_25;
  t = whoami_0_0(t);
  j_37 = t;
  t = term_n_19;
  l_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_33), j_37);
  m_37 = t;
  t = SSL_printnl(l_37, m_37);
  t = term_a_10;
  k_37 = t;
  t = SSL_exit(k_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_37 = NULL,b_38 = NULL;
  t = term_j_9;
  u_37 = t;
  t = term_o_33;
  b_38 = t;
  t = term_p_33;
  t = w_7(u_37, b_38, t);
  return(t);
}
static ATerm t_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_38;
      t = i_79(t);
    }
  else
    {
      ATerm k_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_38 = ATgetFirst((ATermList) t);
          f_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_38;
      t = foldr_2_0(i_79, j_79, t);
      k_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, k_38);
      t = j_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(p_13, y_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_38 = NULL,k_13 = NULL,l_13 = NULL;
  t = times_0_0(t);
  l_13 = t;
  t = SSL_explode_term(l_13);
  if(match_cons(t, sym__2))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13;
  t = foldr_2_0(q_6, r_6, t);
  n_38 = t;
  t = SSL_TicksToSeconds(n_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,r_39 = NULL;
  n_39 = t;
  if(match_cons(t, sym__2))
    {
      o_39 = ATgetArgument(t, 0);
      r_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_39;
        if((o_39 != t))
          {
            _fail(t);
          }
        t = n_39;
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATmakeAppl(sym__2, o_39, r_39);
        {
          ATerm d_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_39, r_39);
              LocalPopChoice(f_34);
            }
          else
            {
              t = d_34;
              t = SSL_gtr(o_39, r_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_39, r_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm w_39 = NULL;
  w_39 = t;
  {
    ATerm k_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,g_40 = NULL,j_40 = NULL;
        t = term_j_9;
        g_40 = t;
        t = term_v_9;
        j_40 = t;
        t = term_y_9;
        t = w_7(g_40, j_40, t);
        d_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_40, term_a_10);
        t = geq_0_0(t);
        t = w_39;
        t = z_83(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = k_34;
        t = w_39;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL;
  t = run_time_0_0(t);
  l_40 = t;
  t = term_r_25;
  t = whoami_0_0(t);
  m_40 = t;
  t = term_n_19;
  o_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), l_40), term_l_10), m_40);
  p_40 = t;
  t = SSL_printnl(o_40, p_40);
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_34), l_40), term_l_10), m_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_31;
  u_40 = t;
  t = SSL_exit(u_40);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_41 = ATgetArgument(t, 0);
          {
            ATerm b_15 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(f_41);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_41);
            b_4 = t;
            t = SSLsetAnnotations(b_4, b_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_88 (ATerm), ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_40 = NULL,y_40 = NULL;
      t = term_j_9;
      x_40 = t;
      t = term_y_34;
      y_40 = t;
      t = term_z_34;
      t = w_7(x_40, y_40, t);
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = fetch_1_0(y_6, t);
    }
  t = j_88(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_35), term_q_35), term_p_35), term_o_35), term_l_35), term_k_35), term_j_35), term_g_35), term_f_35), term_d_35), term_b_35), term_a_35);
  return(t);
}
ATerm map_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  static ATerm m_42 (ATerm t)
  {
    ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL;
    i_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_42;
      }
    else
      {
        ATerm l_15 = NULL,q_15 = NULL,s_15 = NULL,f_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_42 = ATgetFirst((ATermList) t);
            k_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_42);
        l_15 = t;
        t = j_42;
        t = c_72(t);
        q_15 = t;
        t = k_42;
        t = m_42(t);
        s_15 = t;
        t = (ATerm) ATinsert(CheckATermList(s_15), q_15);
        f_4 = t;
        t = SSLsetAnnotations(f_4, l_15);
      }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_42 = ATgetFirst((ATermList) t);
      q_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_42 = NULL,v_42 = NULL;
        static ATerm e_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_42)), not_null(v_42));
          return(t);
        }
        t = q_42;
        t = k_0(t);
        if(((u_42 != NULL) && (u_42 != t)))
          _fail(t);
        else
          u_42 = t;
        t = p_42;
        t = i_0(t);
        if(((v_42 != NULL) && (v_42 != t)))
          _fail(t);
        else
          v_42 = t;
        t = q_42;
        t = reverse_acc_2_0(i_0, e_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_25;
      t = k_0(t);
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm q_43 = NULL;
  q_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_43), term_s_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL;
  ATerm t_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_43 = NULL,e_43 = NULL;
      t = term_j_9;
      d_43 = t;
      t = term_o_33;
      e_43 = t;
      t = term_p_33;
      t = w_7(d_43, e_43, t);
      a_43 = t;
      LocalPopChoice(v_35);
    }
  else
    {
      t = t_35;
      {
        static ATerm u_7 (ATerm t)
        {
          ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,m_4 = NULL;
          h_43 = t;
          if(match_cons(t, sym_Program_1))
            {
              g_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_43);
          f_43 = t;
          t = g_43;
          if(((a_43 != NULL) && (a_43 != t)))
            _fail(t);
          else
            a_43 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, g_43);
          m_4 = t;
          t = SSLsetAnnotations(m_4, f_43);
          return(t);
        }
        t = fetch_1_0(u_7, t);
      }
    }
  {
    ATerm w_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_36), not_null(a_43)), term_y_35);
        t = echo_0_0(t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = w_35;
      }
  }
  t = term_g_36;
  t = echo_0_0(t);
  t = term_e_32;
  b_43 = t;
  t = term_f_32;
  c_43 = t;
  t = term_h_36;
  t = w_7(b_43, c_43, t);
  t = reverse_acc_2_0(_id, y_7, t);
  t = map_1_0(b_8, t);
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        static ATerm d_8 (ATerm t)
        {
          t = not_null(a_43);
          return(t);
        }
        t = long_description_1_0(d_8, t);
        r_43 = t;
        t = (ATerm) ATinsert(CheckATermList(r_43), term_l_36);
        t = echo_0_0(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  static ATerm s_44 (ATerm t)
  {
    ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
    p_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_44 = ATgetFirst((ATermList) t);
        r_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_16 = NULL,n_16 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(p_44);
          c_16 = t;
          t = q_44;
          t = m_72(t);
          n_16 = t;
          t = (ATerm) ATinsert(CheckATermList(r_44), n_16);
          p_4 = t;
          t = SSLsetAnnotations(p_4, c_16);
          LocalPopChoice(n_36);
        }
      else
        {
          t = m_36;
          {
            ATerm g_17 = NULL,v_17 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(p_44);
            g_17 = t;
            t = r_44;
            t = s_44(t);
            v_17 = t;
            t = (ATerm) ATinsert(CheckATermList(v_17), q_44);
            r_4 = t;
            t = SSLsetAnnotations(r_4, g_17);
          }
        }
    }
    return(t);
  }
  t = s_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_36 = ATgetFirst((ATermList) t);
                ATerm v_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_44;
          }
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = (ATerm) ATinsert(ATempty, w_44);
      }
  }
  x_44 = t;
  t = term_n_9;
  y_44 = t;
  t = SSL_printnl(y_44, x_44);
  t = w_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  t = term_j_9;
  c_45 = t;
  t = term_o_33;
  d_45 = t;
  t = term_p_33;
  t = w_7(c_45, d_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  t = term_b_37;
  e_45 = t;
  t = term_r_25;
  f_45 = t;
  t = term_n_37;
  t = z_7(e_45, f_45, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  t = term_b_37;
  i_45 = t;
  t = term_r_25;
  j_45 = t;
  t = term_n_37;
  t = z_7(i_45, j_45, t);
  t = term_s_37;
  g_45 = t;
  t = term_r_25;
  h_45 = t;
  t = term_t_37;
  t = z_7(g_45, h_45, t);
  t = term_v_37;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, g_8, t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = z_37;
      t = Option_3_0(i_8, n_8, o_8, t);
    }
  return(t);
}
static ATerm z_7 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm k_45 = NULL;
  t = term_j_9;
  k_45 = t;
  t = SSL_table_put(k_45, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, e_39, f_39);
  return(t);
}
static ATerm x_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm c_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_38 = ATgetArgument(t, 0);
            ATerm l_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = w_7(r_36, s_36, t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATempty;
      }
  }
  n_45 = t;
  t = (ATerm) ATinsert(CheckATermList(n_45), q_36);
  o_45 = t;
  t = SSL_table_put(r_36, s_36, o_45);
  t = m_45;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
      t = term_r_25;
      t = e_0(t);
      w_45 = t;
      t = term_e_32;
      x_45 = t;
      t = term_f_32;
      y_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_32, term_f_32, w_45);
      t = x_7(x_45, y_45, w_45, t);
      _fail(t);
    }
  else
    {
      ATerm b_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_45 = ATgetFirst((ATermList) t);
          v_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_45;
      t = c_0(t);
      t = term_r_25;
      t = d_0(t);
      b_46 = t;
      t = (ATerm) ATinsert(CheckATermList(v_45), b_46);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,v_4 = NULL;
  h_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_46 = ATgetFirst((ATermList) t);
      e_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_46);
  c_46 = t;
  t = d_46;
  t = z_58(t);
  f_46 = t;
  t = e_46;
  t = a_59(t);
  g_46 = t;
  t = (ATerm) ATinsert(CheckATermList(g_46), f_46);
  v_4 = t;
  t = SSLsetAnnotations(v_4, c_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_90 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,r_46 = NULL,s_46 = NULL,z_4 = NULL;
  m_46 = t;
  {
    ATerm m_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_38;
        t = h_90(t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = m_38;
      }
  }
  t = m_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_46 = ATgetFirst((ATermList) t);
      p_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_46);
  n_46 = t;
  t = term_o_33;
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_33, o_46);
  t = z_7(s_46, o_46, t);
  t = p_46;
  {
    static ATerm c_47 (ATerm t)
    {
      ATerm q_38 = t;
      int r_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_46 = NULL;
              v_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_46;
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              t = h_90(t);
              t = Cons_2_0(_id, c_47, t);
            }
          LocalPopChoice(r_38);
        }
      else
        {
          t = q_38;
          {
            ATerm y_46 = NULL,z_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_46 = ATgetFirst((ATermList) t);
                z_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Undefined_1, y_46));
          }
        }
      return(t);
    }
    t = c_47(t);
  }
  r_46 = t;
  t = (ATerm) ATinsert(CheckATermList(r_46), (ATerm) ATmakeAppl(sym_Program_1, o_46));
  z_4 = t;
  t = SSLsetAnnotations(z_4, n_46);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm o_47 = NULL;
  o_47 = t;
  if(match_string(t, "--help"))
    {
      t = o_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_47;
        }
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL;
  t = term_y_34;
  p_47 = t;
  t = term_r_25;
  q_47 = t;
  t = term_u_38;
  t = z_7(p_47, q_47, t);
  t = term_v_38;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  j_47 = t;
  t = term_e_32;
  l_47 = t;
  t = term_f_32;
  m_47 = t;
  t = (ATerm) ATempty;
  n_47 = t;
  t = SSL_table_put(l_47, m_47, n_47);
  t = j_47;
  {
    static ATerm q_8 (ATerm t)
    {
      ATerm x_38 = t;
      int y_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_90(t);
          LocalPopChoice(y_38);
        }
      else
        {
          t = x_38;
          {
            ATerm z_38 = t;
            int a_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, t_8, u_8, t);
                LocalPopChoice(a_39);
              }
            else
              {
                t = z_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_8, t);
  }
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        b_48 = t;
        {
          ATerm d_39 = t;
          int g_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_18 = NULL;
              t = b_48;
              {
                ATerm h_39 = t;
                int i_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_18 = NULL,i_18 = NULL;
                    t = term_j_9;
                    h_18 = t;
                    t = term_y_34;
                    i_18 = t;
                    t = term_z_34;
                    t = w_7(h_18, i_18, t);
                    LocalPopChoice(i_39);
                  }
                else
                  {
                    t = h_39;
                    t = fetch_1_0(v_8, t);
                  }
              }
              t = b_48;
              t = default_system_usage_0_0(t);
              t = term_m_31;
              g_18 = t;
              t = SSL_exit(g_18);
              LocalPopChoice(g_39);
            }
          else
            {
              t = d_39;
              {
                ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
                t = term_j_9;
                p_18 = t;
                t = term_b_37;
                q_18 = t;
                t = term_j_39;
                t = w_7(p_18, q_18, t);
                t = b_48;
                t = default_system_about_0_0(t);
                t = term_m_31;
                o_18 = t;
                t = SSL_exit(o_18);
              }
            }
        }
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        {
          ATerm k_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
              static ATerm w_8 (ATerm t)
              {
                ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL,i_5 = NULL;
                h_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_48);
                f_48 = t;
                t = g_48;
                if(((h_47 != NULL) && (h_47 != t)))
                  _fail(t);
                else
                  h_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_48);
                i_5 = t;
                t = SSLsetAnnotations(i_5, f_48);
                return(t);
              }
              t = fetch_1_0(w_8, t);
              t = term_n_19;
              d_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_47)), term_m_39);
              e_48 = t;
              t = SSL_printnl(d_48, e_48);
              t = (ATerm) ATmakeAppl(sym__2, term_n_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_47)), term_m_39));
              t = default_system_usage_0_0(t);
              t = term_a_10;
              c_48 = t;
              t = SSL_exit(c_48);
              LocalPopChoice(l_39);
            }
          else
            {
              t = k_39;
            }
        }
      }
  }
  i_47 = t;
  t = term_e_32;
  k_47 = t;
  t = SSL_table_destroy(k_47);
  t = i_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm n_88 (ATerm), ATerm o_88 (ATerm), ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL;
  t = parse_options_1_0(l_88, t);
  m_48 = t;
  t = term_p_39;
  p_48 = t;
  t = SSL_table_create(p_48);
  t = term_p_39;
  n_48 = t;
  t = term_q_39;
  o_48 = t;
  t = SSL_table_put(n_48, o_48, m_48);
  t = m_48;
  t = n_88(t);
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_88, t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(pptable_diff_options_0_0, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
