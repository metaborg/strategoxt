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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_c_38;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_j_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_n_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_c_36;
ATerm term_p_35;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_b_34;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_g_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_u_30;
ATerm term_q_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_s_28;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_j_22;
ATerm term_y_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_h_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_p_9, term_q_10);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_11, term_b_11, term_d_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_l_11, term_n_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_u_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_a_12);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_u_12, term_v_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_d_13, term_e_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_z_13, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_h_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_i_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_b_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_i_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_t_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_j_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_s_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym__2, term_t_21, term_y_21);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_j_24);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_u_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_s_24);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_g_31, term_s_24);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_q_30);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_g_36, term_s_24);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_s_24);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_s_24);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm d_7 (ATerm o_33, ATerm p_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_7 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm f_7 (ATerm u_66 (ATerm), ATerm e_176, ATerm x_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm t);
static ATerm g_7 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm w_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm j_65 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm j_7 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm k_7 (ATerm p_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm l_7 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm m_7 (ATerm e_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm d_9 (ATerm o_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_7 (ATerm t_17, ATerm t);
static ATerm o_7 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_11 (ATerm u_9, ATerm t);
static ATerm k_11 (ATerm d_10, ATerm e_10, ATerm f_10, ATerm t);
static ATerm m_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm t);
static ATerm p_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm r_18 (ATerm c_17, ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_85 (ATerm), ATerm t);
static ATerm p_19 (ATerm a_19, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_7 (ATerm o_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm r_7 (ATerm m_14, ATerm l_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm s_7 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm f_72 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm u_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm v_7 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_81 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_85 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_85 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm w_7 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_82 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm need_help_1_0 (ATerm h_87 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm z_7 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm s_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm d_8 (ATerm j_38, ATerm k_38, ATerm t);
static ATerm a_8 (ATerm a_38, ATerm b_38, ATerm t);
static ATerm b_8 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_89 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm parse_options_1_0 (ATerm e_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm b_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_33, p_33);
      LocalPopChoice(e_9);
    }
  else
    {
      t = b_9;
      t = SSL_subtr(o_33, p_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL;
  t = term_h_9;
  {
    ATerm i_9 = t;
    int l_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(l_9);
      }
    else
      {
        t = i_9;
        t = term_p_9;
      }
  }
  b_0 = t;
  t = term_p_9;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_p_9);
  t = d_7(b_0, m_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_h_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_t_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_9);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_w_9));
      t = s_7(y_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_7 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
static ATerm f_7 (ATerm u_66 (ATerm), ATerm e_176, ATerm x_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_176, term_x_9);
  t = p_7(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, x_17);
  t = u_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          m_1 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(m_1, n_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  i_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  t = f_7(h_0, h_1, i_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  t = xtc_transform_file_2_0(y_84, z_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_7 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  x_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      z_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = SSL_int_to_string(z_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_10), s_0), term_z_9);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      ATerm q_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          z_2 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          b_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_3);
      q_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_3), term_i_10), q_1), term_c_10), z_2);
      r_1 = t;
      t = SSL_concat_strings(r_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_71 (ATerm), ATerm t)
{
  ATerm i_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = w_71(t);
    if(((i_3 != NULL) && (i_3 != t)))
      _fail(t);
    else
      i_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(i_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  j_3 = t;
  {
    ATerm j_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_10 = ATgetArgument(t, 0);
              if((j_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm n_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_18), term_g_18), term_z_17), term_u_17), term_k_17), term_d_17), term_u_16), term_l_16), term_e_16), term_w_15), term_s_15), term_o_15), term_k_15), term_f_15), term_a_15), term_u_14), term_i_14), term_c_14), term_q_13), term_a_13), term_q_12), term_j_12), term_f_12), term_b_12), term_v_11), term_r_11), term_i_11), term_r_10);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = j_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL,x_3 = NULL;
  n_3 = t;
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            x_3 = ATgetArgument(t, 1);
            {
              ATerm s_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_18);
        {
          ATerm u_18 = t;
          int v_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_1 = NULL,b_2 = NULL,d_2 = NULL;
              t = x_3;
              {
                ATerm y_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_1 = t;
              t = term_z_18;
              b_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_b_19);
              d_2 = t;
              t = SSL_printnl(b_2, d_2);
              t = (ATerm) ATmakeAppl(sym__2, term_z_18, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_b_19));
              LocalPopChoice(v_18);
            }
          else
            {
              t = u_18;
              t = n_3;
            }
        }
      }
    else
      {
        t = m_18;
        t = n_3;
      }
  }
  t = n_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm j_65 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,n_4 = NULL;
  n_4 = t;
  t = fork_0_0(t);
  l_4 = t;
  {
    ATerm d_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_4;
        t = j_65(t);
        LocalPopChoice(h_19);
      }
    else
      {
        t = d_19;
        t = SSL_waitpid(l_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            if(((ATgetType(i_19) != AT_INT) || (ATgetInt((ATermInt) i_19) != 0)))
              _fail(t);
            {
              ATerm j_19 = ATgetArgument(t, 1);
            }
            {
              ATerm k_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_4 = NULL;
  static ATerm w_0 (ATerm t)
  {
    ATerm r_4 = NULL,t_4 = NULL;
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_4), r_4);
    t = a_8(not_null(p_4), r_4, t);
    t_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_4, t_4);
    return(t);
  }
  if(((p_4 != NULL) && (p_4 != t)))
    _fail(t);
  else
    p_4 = t;
  t = SSL_table_keys(p_4);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        y_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_4, term_q_17);
        t = geq_0_0(t);
        t = w_4;
        t = b_83(t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = w_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm e_5 = NULL;
  e_5 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_5, term_e_14);
        t = geq_0_0(t);
        t = e_5;
        t = a_83(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = e_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm s_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        r_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_5, term_t_11);
        t = geq_0_0(t);
        t = l_5;
        t = c_83(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = s_19;
        t = l_5;
      }
  }
  return(t);
}
static ATerm j_7 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = t_75(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm t_5 = NULL;
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, t_5);
      t = s_75(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = t_24;
  return(t);
}
static ATerm k_7 (ATerm p_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm p_6 (ATerm t)
  {
    ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
    i_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_6 = ATgetFirst((ATermList) t);
            k_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm w_19 = t;
          int x_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_6;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = j_7(p_75, a_1, j_6, k_6, t);
              }
              t = p_6(t);
              LocalPopChoice(x_19);
            }
          else
            {
              t = w_19;
              {
                ATerm n_2 = NULL,w_2 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(i_6);
                n_2 = t;
                t = k_6;
                t = p_6(t);
                w_2 = t;
                t = (ATerm) ATinsert(CheckATermList(w_2), j_6);
                g_0 = t;
                t = SSLsetAnnotations(g_0, n_2);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = p_6(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      if((i_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm t_6 = NULL,x_6 = NULL,y_6 = NULL;
  t_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_20 = ATgetArgument(t, 0);
            ATerm d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = a_8(g_37, h_37, t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
  }
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_6, i_37);
  t = k_7(b_1, y_6, i_37, t);
  x_6 = t;
  t = SSL_table_put(g_37, h_37, x_6);
  t = t_6;
  return(t);
}
static ATerm m_7 (ATerm e_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm t_7 = NULL,y_7 = NULL;
    if(match_cons(t, sym__2))
      {
        t_7 = ATgetArgument(t, 0);
        y_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, t_7, y_7);
    t = e_83(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm d_9 (ATerm o_8, ATerm t)
{
  t = SSL_fclose(o_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  y_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_8 = ATgetArgument(t, 0);
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_8);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = d_9(y_8, t);
          }
      }
    }
  else
    {
      t = d_9(y_8, t);
    }
  return(t);
}
static ATerm n_7 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm o_7 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_fopen(a_40, b_40);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_9 = NULL;
  t = SSL_stdin_stream();
  g_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  t = SSL_stdout_stream();
  j_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  t = SSL_stderr_stream();
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_9);
  return(t);
}
static ATerm h_11 (ATerm u_9, ATerm t)
{
  ATerm v_9 = NULL;
  t = SSL_explode_term(u_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) == AT_LIST) && !(ATisEmpty(j_20))))
          {
            v_9 = ATgetFirst((ATermList) j_20);
            {
              ATerm k_20 = (ATerm) ATgetNext((ATermList) j_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_11 (ATerm d_10, ATerm e_10, ATerm f_10, ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,k_10 = NULL,o_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(f_10);
  k_10 = t;
  t = d_10;
  if(match_cons(t, sym_Path_1))
    {
      o_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_10, e_10);
  t_1 = t;
  t = SSLsetAnnotations(t_1, k_10);
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(g_10, h_10, t);
  return(t);
}
static ATerm m_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm t)
{
  ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL,c_11 = NULL,c_2 = NULL;
  t = SSLgetAnnotations(u_10);
  z_10 = t;
  t = SSL_is_string(s_10);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_11, t_10);
  c_2 = t;
  t = SSLsetAnnotations(c_2, z_10);
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      y_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(v_10, y_10, t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym__2))
    {
      f_11 = ATgetArgument(t, 0);
      g_11 = ATgetArgument(t, 1);
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_11(e_11, t);
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_11(f_11, g_11, e_11, t);
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = n_20;
                  t = m_11(f_11, g_11, e_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_11(e_11, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,y_11 = NULL;
  y_11 = t;
  {
    ATerm t_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_11, term_y_20);
        t = p_7(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = t_20;
        {
          ATerm a_4 = NULL,c_4 = NULL;
          t = term_z_20;
          c_4 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_20, y_11);
          t = z_7(c_4, y_11, t);
          a_4 = t;
          t = SSL_perror(a_4);
          _fail(t);
        }
      }
  }
  p_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(q_11, t);
  o_11 = t;
  t = p_11;
  t = fclose_0_0(t);
  t = o_11;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_12 = NULL,o_12 = NULL;
      k_12 = t;
      t = (ATerm) ATinsert(ATempty, term_k_21);
      o_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_12, (ATerm) ATinsert(ATempty, term_k_21));
      t = s_7(k_12, o_12, t);
      LocalPopChoice(j_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_21;
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_21 = t;
            if((PushChoice() == 0))
              {
                ATerm p_12 = NULL,s_12 = NULL;
                p_12 = t;
                t = (ATerm) ATinsert(ATempty, term_w_9);
                s_12 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_12, (ATerm) ATinsert(ATempty, term_w_9));
                t = s_7(p_12, s_12, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_21;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = debug_1_0(j_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_o_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_p_21;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  t = term_z_18;
  s_13 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  t_13 = t;
  t = SSL_printnl(s_13, t_13);
  t = p_13;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__3))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      w_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_7(u_13, v_13, w_13, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm a_14 = NULL,j_14 = NULL,k_14 = NULL;
  a_14 = t;
  t = term_z_18;
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, term_r_21);
  k_14 = t;
  t = SSL_printnl(j_14, k_14);
  t = a_14;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm p_14 = NULL,t_14 = NULL,v_14 = NULL;
  p_14 = t;
  t = term_z_18;
  t_14 = t;
  t = (ATerm) ATinsert(ATempty, term_q_21);
  v_14 = t;
  t = SSL_printnl(t_14, v_14);
  t = p_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL;
  w_12 = t;
  t = if_verbose5_1_0(k_1, t);
  {
    ATerm s_21 = t;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,o_13 = NULL;
        t = term_t_21;
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_12);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Imported_1, w_12));
        t = a_8(n_13, o_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_21;
      }
  }
  y_12 = t;
  t = term_t_21;
  j_13 = t;
  t = term_y_21;
  l_13 = t;
  t = (ATerm) ATinsert(ATempty, w_12);
  m_13 = t;
  t = SSL_table_put(j_13, l_13, m_13);
  t = y_12;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_1, t);
  x_12 = t;
  t = term_t_21;
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, x_12);
  t = m_7(u_1, i_13, x_12, t);
  t = if_verbose6_1_0(v_1, t);
  t = term_t_21;
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_12);
  g_13 = t;
  t = (ATerm) ATempty;
  h_13 = t;
  t = SSL_table_put(z_12, g_13, h_13);
  t = (ATerm) ATmakeAppl(sym__3, term_t_21, (ATerm)ATmakeAppl(sym_Imported_1, w_12), (ATerm) ATempty);
  t = if_verbose4_1_0(w_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,c_16 = NULL;
  z_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_21 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL,s_4 = NULL,u_4 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(z_15);
            k_4 = t;
            t = a_16;
            t = k_79(t);
            s_4 = t;
            t = c_16;
            t = filter_1_0(k_79, t);
            u_4 = t;
            t = (ATerm) ATinsert(CheckATermList(u_4), s_4);
            k_2 = t;
            t = SSLsetAnnotations(k_2, k_4);
            LocalPopChoice(d_22);
          }
        else
          {
            t = z_21;
            t = c_16;
            t = filter_1_0(k_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_69 (ATerm), ATerm q_69 (ATerm), ATerm t)
{
  static ATerm j_16 (ATerm t)
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_69(t);
        t = j_16(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        t = q_69(t);
      }
    return(t);
  }
  t = j_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_22;
      t = get_config_0_0(t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      {
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_16 = NULL;
            t = term_q_22;
            k_16 = t;
            t = SSL_getenv(k_16);
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
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
  t = term_r_22;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm s_16 = NULL,w_16 = NULL;
  t = term_t_21;
  s_16 = t;
  t = term_s_22;
  w_16 = t;
  t = term_t_22;
  t = a_8(s_16, w_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_22;
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
  t = term_v_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm m_16 = NULL;
  t = if_verbose5_1_0(x_1, t);
  m_16 = t;
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_16 = NULL,q_16 = NULL;
        t = term_t_21;
        n_16 = t;
        t = term_y_21;
        q_16 = t;
        t = term_y_22;
        t = a_8(n_16, q_16, t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm r_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          r_16 = t;
          t = repeat_2_0(a_2, _id, t);
          t = r_16;
        }
      }
  }
  t = m_16;
  t = if_verbose5_1_0(e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
static ATerm r_18 (ATerm c_17, ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  t = term_t_21;
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, c_17);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Tool_1, c_17));
  t = a_8(h_17, i_17, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_23 = ATgetFirst((ATermList) t);
      if(match_cons(a_23, sym__2))
        {
          ATerm c_23 = ATgetArgument(a_23, 0);
          g_17 = ATgetArgument(a_23, 1);
        }
      else
        _fail(t);
      {
        ATerm b_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_17;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_t_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_d_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL,m_17 = NULL,r_17 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      r_17 = t;
      if(match_cons(t, sym__2))
        {
          l_17 = ATgetArgument(t, 0);
          m_17 = ATgetArgument(t, 1);
          {
            ATerm g_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
                t = term_t_21;
                d_18 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_17);
                e_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Tool_1, l_17));
                t = a_8(d_18, e_18, t);
                {
                  static ATerm i_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((c_18 != NULL) && (c_18 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_18 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(i_2, t);
                }
                t = not_null(c_18);
                LocalPopChoice(j_23);
              }
            else
              {
                t = g_23;
                t = r_18(r_17, t);
              }
          }
        }
      else
        {
          t = r_18(r_17, t);
        }
      t = if_verbose5_1_0(j_2, t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm q_18 = NULL,h_5 = NULL,k_5 = NULL;
        q_18 = t;
        t = term_z_18;
        h_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), q_18), term_k_23);
        k_5 = t;
        t = SSL_printnl(h_5, k_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_23), q_18), term_k_23);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL;
  w_18 = t;
  t = z_85(t);
  t = xtc_find_0_0(t);
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_18, w_18);
  {
    static ATerm q_2 (ATerm t)
    {
      ATerm x_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_18, w_18);
      t = g_7(t_18, w_18, t);
      t = term_q_23;
      x_18 = t;
      t = SSL_exit(x_18);
      return(t);
    }
    t = fork_and_wait_1_0(q_2, t);
  }
  t = w_18;
  return(t);
}
static ATerm p_19 (ATerm a_19, ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  g_19 = t;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
      {
        ATerm u_23 = t;
        int c_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_2 (ATerm t)
            {
              t = f_19;
              return(t);
            }
            t = e_19;
            t = at_end_1_0(s_2, t);
            LocalPopChoice(c_24);
          }
        else
          {
            t = u_23;
            t = p_19(g_19, t);
          }
      }
    }
  else
    {
      t = p_19(g_19, t);
    }
  return(t);
}
static ATerm q_7 (ATerm o_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,t_19 = NULL,v_19 = NULL,y_19 = NULL,z_19 = NULL;
  v_19 = t;
  t = o_81(t);
  q_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_19, w_34, u_34);
  t = b_8(q_19, w_34, u_34, t);
  {
    ATerm f_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        t = term_j_24;
        e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_19, term_j_24);
        t = a_8(q_19, e_20, t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_19 = ATgetFirst((ATermList) t);
      t_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_24;
  y_19 = t;
  t = (ATerm) ATinsert(CheckATermList(t_19), (ATerm) ATinsert(CheckATermList(r_19), w_34));
  z_19 = t;
  t = SSL_table_put(q_19, y_19, z_19);
  t = v_19;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm i_20 = NULL;
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,q_5 = NULL;
      o_20 = t;
      t = term_m_24;
      q_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_20, term_m_24);
      t = z_7(o_20, q_5, t);
      i_20 = t;
      t = SSL_mkstemp(i_20);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm p_20 = NULL;
        t = term_n_24;
        p_20 = t;
        t = SSL_perror(p_20);
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
static ATerm u_2 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL,x_20 = NULL;
  t = P__tmpdir_0_0(t);
  v_20 = t;
  t = term_r_24;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_20, term_r_24);
  t = z_7(v_20, x_20, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      s_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_24;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_20, term_s_24);
  t = q_7(u_2, s_20, u_20, t);
  t = SSL_close(r_20);
  t = s_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_21 = NULL,d_21 = NULL;
      t = a_21;
      t = xtc_new_file_0_0(t);
      c_21 = t;
      t = x_0(t);
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_21, (ATerm) ATinsert(ATinsert(ATempty, c_21), term_v_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_21);
    }
  else
    {
      ATerm g_21 = NULL,h_21 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_21;
      t = xtc_new_file_0_0(t);
      g_21 = t;
      t = x_0(t);
      h_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_21), term_v_24), b_21), term_w_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_21);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  static ATerm x_21 (ATerm t)
  {
    ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
    w_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_21 = ATgetFirst((ATermList) t);
        v_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_6 = NULL,n_6 = NULL,m_2 = NULL;
          t = SSLgetAnnotations(w_21);
          e_6 = t;
          t = v_21;
          t = x_21(t);
          n_6 = t;
          t = (ATerm) ATinsert(CheckATermList(n_6), u_21);
          m_2 = t;
          t = SSLsetAnnotations(m_2, e_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_21;
        t = b_72(t);
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_22;
    }
  else
    {
      static ATerm y_2 (ATerm t)
      {
        t = not_null(c_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          if(((c_22 != NULL) && (c_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_22;
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_24;
      t = get_config_0_0(t);
      LocalPopChoice(y_24);
      {
        ATerm i_22 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        i_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_22), term_z_24);
      }
    }
  else
    {
      t = x_24;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL,n_22 = NULL;
  t = term_s_24;
  t = new_0_0(t);
  k_22 = t;
  t = term_a_25;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, term_a_25);
  t = z_7(k_22, l_22, t);
  n_22 = t;
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_w_9);
        p_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_22, (ATerm) ATinsert(ATempty, term_w_9));
        t = s_7(n_22, p_22, t);
        t = new_file_0_0(t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = n_22;
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
static ATerm r_7 (ATerm m_14, ATerm l_14, ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      t = get_errno_0_0(t);
      t = term_s_24;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = u_7(m_14, l_14, t);
      t = SSL_remove(m_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL;
        t = h_23;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_u_25;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_u_25);
        t = u_7(i_23, x_7, t);
        t = SSL_remove(i_23);
        t = term_u_25;
        LocalPopChoice(o_25);
      }
    else
      {
        t = m_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_8 = NULL;
              t = h_23;
              t = t_0(t);
              i_8 = t;
              {
                ATerm x_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_8 = NULL;
                    k_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = k_8;
                      }
                    else
                      {
                        t = k_8;
                        if((i_23 != t))
                          {
                            _fail(t);
                          }
                        t = k_8;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, i_23, i_8);
              t = r_7(i_23, i_8, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_8);
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = h_23;
              t = t_0(t);
              if((i_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
            }
        }
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  {
    static ATerm c_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 = NULL,p_23 = NULL,r_2 = NULL;
            p_23 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm c_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_23);
            o_23 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
            r_2 = t;
            t = SSLsetAnnotations(r_2, o_23);
            LocalPopChoice(b_26);
            t = xtc_transform_file_2_0(d_3, e_3, t);
          }
        else
          {
            t = a_26;
            t = xtc_transform_term_2_0(f_3, h_3, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(c_3, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_23;
  t = if_verbose2_1_0(k_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm r_23 = NULL;
  r_23 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_b_11);
        t = geq_0_0(t);
        t = r_23;
        t = y_82(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = r_23;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL,g_24 = NULL,h_24 = NULL,t_2 = NULL;
  w_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_26), term_g_26), w_23);
  b_24 = t;
  t = SSL_concat_strings(b_24);
  a_24 = t;
  t = (ATerm) ATinsert(ATempty, term_w_9);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_24, (ATerm) ATinsert(ATempty, term_w_9));
  t = s_7(a_24, z_23, t);
  v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
  h_24 = t;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      ATerm j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_24);
  d_24 = t;
  t = SSL_modification_time(v_23);
  e_24 = t;
  t = SSL_modification_time(w_23);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, g_24);
  t_2 = t;
  t = SSLsetAnnotations(t_2, d_24);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, v_23, w_23);
  y_23 = t;
  t = SSL_explode_term(y_23);
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
          {
            x_23 = ATgetFirst((ATermList) l_26);
            {
              ATerm m_26 = (ATerm) ATgetNext((ATermList) l_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_23;
  t = if_verbose2_1_0(m_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm f_72 (ATerm), ATerm t)
{
  static ATerm e_25 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_72(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,v_8 = NULL,c_9 = NULL,v_2 = NULL;
          b_25 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_25 = ATgetFirst((ATermList) t);
              d_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_25);
          v_8 = t;
          t = d_25;
          t = e_25(t);
          c_9 = t;
          t = (ATerm) ATinsert(CheckATermList(c_9), c_25);
          v_2 = t;
          t = SSLsetAnnotations(v_2, v_8);
        }
      }
    return(t);
  }
  t = e_25(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
      n_9 = t;
      t = term_r_26;
      o_9 = t;
      t = SSL_explode_string(o_9);
      m_9 = t;
      t = SSL_explode_string(n_9);
      {
        static ATerm q_3 (ATerm t)
        {
          if((m_9 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(q_3, t);
      }
      t = n_9;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      {
        ATerm s_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
            r_9 = t;
            t = term_u_26;
            s_9 = t;
            t = SSL_explode_string(s_9);
            q_9 = t;
            t = SSL_explode_string(r_9);
            {
              static ATerm r_3 (ATerm t)
              {
                if((q_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(r_3, t);
            }
            t = r_9;
            LocalPopChoice(t_26);
          }
        else
          {
            t = s_26;
            {
              ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,n_25 = NULL;
              j_25 = t;
              t = term_z_18;
              l_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_25), term_v_26);
              n_25 = t;
              t = SSL_printnl(l_25, n_25);
              t = term_p_9;
              k_25 = t;
              t = SSL_exit(k_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, j_25), term_v_26);
            }
          }
      }
      {
        ATerm w_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(x_26);
          }
        else
          {
            t = w_26;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_27;
      t = get_config_0_0(t);
      LocalPopChoice(z_26);
      {
        ATerm p_25 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        p_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, p_25), term_a_27);
      }
    }
  else
    {
      t = y_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm b_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      LocalPopChoice(e_27);
      t = (ATerm) ATinsert(ATempty, term_f_27);
    }
  else
    {
      t = b_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_27;
      t = get_config_0_0(t);
      LocalPopChoice(h_27);
      t = (ATerm) ATinsert(ATempty, term_i_27);
    }
  else
    {
      t = g_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t = term_s_24;
  t = pass__patch_0_0(t);
  q_25 = t;
  t = term_s_24;
  t = pass__prune_0_0(t);
  r_25 = t;
  t = term_s_24;
  t = pass__new_0_0(t);
  s_25 = t;
  t = term_s_24;
  t = pass__old_0_0(t);
  t_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_25), s_25), r_25), q_25);
  t = concat_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  c_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL;
        t = c_27;
        t = r_0(t);
        a_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = a_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = a_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_27, a_10);
        t = u_7(d_27, a_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
        LocalPopChoice(l_27);
      }
    else
      {
        t = j_27;
        {
          ATerm n_27 = t;
          int p_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL;
              t = c_27;
              t = r_0(t);
              w_10 = t;
              {
                ATerm r_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_10 = NULL;
                    x_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_10;
                          }
                        else
                          {
                            t = x_10;
                            if((d_27 != t))
                              {
                                _fail(t);
                              }
                            t = x_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, d_27, w_10);
              t = u_7(d_27, w_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
              LocalPopChoice(p_27);
            }
          else
            {
              t = n_27;
              t = c_27;
              t = r_0(t);
              if((d_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
            }
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm k_27 = NULL,m_27 = NULL;
  m_27 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = a_8(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_27 = ATgetFirst((ATermList) t);
            k_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_27);
        t = SSL_table_put(o_36, p_36, k_27);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, k_27);
      }
    else
      {
        t = u_27;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = m_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL;
  t_27 = t;
  t = l_81(t);
  s_27 = t;
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        t = term_j_24;
        x_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_j_24);
        t = a_8(s_27, x_27, t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_24;
  w_27 = t;
  t = SSL_table_put(s_27, w_27, o_27);
  t = q_27;
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm a_28 = NULL;
      a_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, a_28);
      t = v_7(s_27, a_28, t);
      return(t);
    }
    t = map_1_0(s_3, t);
  }
  t = t_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_82(t);
      t = m_82(t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = d_28;
      t = m_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL,j_28 = NULL;
  e_28 = t;
  t = k_81(t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, term_j_24);
  {
    ATerm h_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_28 = ATgetArgument(t, 0);
            ATerm m_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_24;
        r_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_28, term_j_24);
        t = a_8(c_28, r_28, t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATempty;
      }
  }
  f_28 = t;
  t = term_j_24;
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(f_28), (ATerm) ATempty);
  j_28 = t;
  t = SSL_table_put(c_28, i_28, j_28);
  t = e_28;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_29);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = e_29;
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm w_28 = NULL;
  static ATerm v_3 (ATerm t)
  {
    ATerm x_28 = NULL;
    x_28 = t;
    {
      ATerm p_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_28 = NULL,z_28 = NULL;
          t = term_o_24;
          y_28 = t;
          t = term_j_24;
          z_28 = t;
          t = term_s_28;
          t = a_8(y_28, z_28, t);
          LocalPopChoice(q_28);
        }
      else
        {
          t = p_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_28 != NULL) && (w_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_28 = ATgetFirst((ATermList) t);
        {
          ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_28;
    t = map_1_0(w_3, t);
    t = x_28;
    t = end_scope_1_0(y_3, t);
    return(t);
  }
  t = begin_scope_1_0(t_3, t);
  t = restore_always_2_0(l_85, v_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_24;
      t = get_config_0_0(t);
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      t = term_u_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_85 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t)
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = NULL;
        t = term_w_24;
        t = get_config_0_0(t);
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_29);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = term_t_9;
      }
    t = m_85(t);
    t = copy_to_1_0(b_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_3, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_30 = NULL;
      ATerm f_29 = t;
      int g_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_29 = NULL,x_29 = NULL;
          x_29 = t;
          if(match_cons(t, sym_FILE_1))
            {
              w_29 = ATgetArgument(t, 0);
              {
                ATerm z_11 = NULL,g_3 = NULL;
                t = SSLgetAnnotations(x_29);
                z_11 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_29);
                g_3 = t;
                t = SSLsetAnnotations(g_3, z_11);
              }
            }
          else
            {
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
              t = x_29;
            }
          LocalPopChoice(g_29);
          t = xtc_transform_file_2_0(e_4, f_4, t);
        }
      else
        {
          t = f_29;
          t = xtc_transform_term_2_0(g_4, h_4, t);
        }
      i_30 = t;
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_30;
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_i_27;
                  t = get_config_0_0(t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = term_f_27;
                  t = get_config_0_0(t);
                }
            }
            t = i_30;
            {
              ATerm m_29 = t;
              int n_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_12 = NULL;
                  if(match_cons(t, sym_FILE_1))
                    {
                      t_12 = ATgetArgument(t, 0);
                      {
                        ATerm c_13 = NULL,o_3 = NULL;
                        t = SSLgetAnnotations(i_30);
                        c_13 = t;
                        t = (ATerm) ATmakeAppl(sym_FILE_1, t_12);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, c_13);
                      }
                    }
                  else
                    {
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                      t = i_30;
                    }
                  LocalPopChoice(n_29);
                  t = xtc_transform_file_2_0(j_4, pass_verbose_0_0, t);
                }
              else
                {
                  t = m_29;
                  t = xtc_transform_term_2_0(m_4, pass_verbose_0_0, t);
                }
            }
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            t = i_30;
          }
      }
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      {
        ATerm k_30 = NULL;
        t = term_p_9;
        k_30 = t;
        t = SSL_exit(k_30);
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_s_24;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_s_24;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_p_29;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_io_1_0(d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  o_30 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  p_30 = t;
  t = term_z_18;
  s_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_29), p_30), term_q_29);
  t_30 = t;
  t = SSL_printnl(s_30, t_30);
  t = term_p_9;
  r_30 = t;
  t = SSL_exit(r_30);
  t = o_30;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  if(match_string(t, "-k"))
    {
      t = v_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_30;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  t = SSL_string_to_int(w_30);
  x_30 = t;
  t = term_s_29;
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, x_30);
  t = d_8(y_30, x_30, t);
  t = w_30;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, v_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm c_31 = NULL;
  c_31 = t;
  if(match_string(t, "-S"))
    {
      t = c_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_31;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  t = term_h_9;
  d_31 = t;
  t = term_u_29;
  e_31 = t;
  t = term_v_29;
  t = d_8(d_31, e_31, t);
  t = term_y_29;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_31 = NULL,h_31 = NULL,i_31 = NULL;
  f_31 = t;
  t = SSL_string_to_int(f_31);
  h_31 = t;
  t = term_h_9;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, h_31);
  t = d_8(i_31, h_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_31 = NULL,l_31 = NULL;
  t = term_b_30;
  j_31 = t;
  t = term_s_24;
  l_31 = t;
  t = term_c_30;
  t = d_8(j_31, l_31, t);
  t = term_d_30;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm h_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_5, c_5, d_5, t);
            LocalPopChoice(j_30);
          }
        else
          {
            t = h_30;
            t = Option_3_0(f_5, g_5, j_5, t);
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-o"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL;
  p_31 = t;
  t = term_v_24;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_24, p_31);
  t = d_8(r_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_31);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  if(match_string(t, "-i"))
    {
      t = t_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_31;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  t = term_w_24;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, a_32);
  t = d_8(b_32, a_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_32);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, s_5, u_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,k_32 = NULL,l_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_32 = NULL,n_32 = NULL,p_32 = NULL;
      t = term_s_24;
      t = p_0(t);
      m_32 = t;
      t = term_n_30;
      n_32 = t;
      t = term_q_30;
      p_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_q_30, m_32);
      t = b_8(n_32, p_32, m_32, t);
      _fail(t);
    }
  else
    {
      ATerm v_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_32 = ATgetFirst((ATermList) t);
          i_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_32 = ATgetFirst((ATermList) t);
          l_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_32;
      t = n_0(t);
      t = k_32;
      t = o_0(t);
      v_32 = t;
      t = (ATerm) ATinsert(CheckATermList(l_32), v_32);
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL;
  w_32 = t;
  t = term_i_27;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_27, w_32);
  t = d_8(x_32, w_32, t);
  t = w_32;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = term_f_27;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, y_32);
  t = d_8(z_32, y_32, t);
  t = y_32;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_z_30;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  t = term_z_24;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, b_33);
  t = d_8(c_33, b_33, t);
  t = b_33;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  t = term_a_27;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, d_33);
  t = d_8(e_33, d_33, t);
  t = d_33;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_b_31;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_g_31;
  f_33 = t;
  t = term_s_24;
  g_33 = t;
  t = term_k_31;
  t = d_8(f_33, g_33, t);
  t = term_m_31;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm q_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_5, w_5, z_5, t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = q_31;
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_6, b_6, c_6, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            {
              ATerm w_31 = t;
              int x_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(f_6, h_6, l_6, t);
                  LocalPopChoice(x_31);
                }
              else
                {
                  t = w_31;
                  {
                    ATerm y_31 = t;
                    int z_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(m_6, o_6, q_6, t);
                        LocalPopChoice(z_31);
                      }
                    else
                      {
                        t = y_31;
                        {
                          ATerm c_32 = t;
                          int f_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(f_32);
                            }
                          else
                            {
                              t = c_32;
                              {
                                ATerm g_32 = t;
                                int j_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(j_32);
                                  }
                                else
                                  {
                                    t = g_32;
                                    {
                                      ATerm o_32 = t;
                                      int q_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(r_6, s_6, u_6, t);
                                          LocalPopChoice(q_32);
                                        }
                                      else
                                        {
                                          t = o_32;
                                          {
                                            ATerm r_32 = t;
                                            int s_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(s_32);
                                              }
                                            else
                                              {
                                                t = r_32;
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
  ATerm h_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_24;
  t = whoami_0_0(t);
  h_33 = t;
  t = term_z_18;
  l_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_32), h_33);
  m_33 = t;
  t = SSL_printnl(l_33, m_33);
  t = term_p_9;
  k_33 = t;
  t = SSL_exit(k_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_32;
  t = get_config_0_0(t);
  return(t);
}
static ATerm w_7 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm a_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(n_33);
    }
  else
    {
      t = a_33;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,u_33 = NULL;
  q_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_33;
      t = g_78(t);
    }
  else
    {
      ATerm z_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_33;
      t = foldr_2_0(g_78, h_78, t);
      z_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_33, z_33);
      t = h_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7(x_13, y_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_34 = NULL,f_13 = NULL,k_13 = NULL;
  t = times_0_0(t);
  k_13 = t;
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13;
  t = foldr_2_0(v_6, w_6, t);
  h_34 = t;
  t = SSL_TicksToSeconds(h_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_35 = NULL,q_35 = NULL,r_35 = NULL;
  m_35 = t;
  if(match_cons(t, sym__2))
    {
      q_35 = ATgetArgument(t, 0);
      r_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_35;
        if((q_35 != t))
          {
            _fail(t);
          }
        t = m_35;
        LocalPopChoice(v_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_35, r_35);
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
              t = SSL_gtr(q_35, r_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_35, r_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  {
    ATerm y_33 = t;
    int a_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_35 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        x_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_35, term_p_9);
        t = geq_0_0(t);
        t = v_35;
        t = x_82(t);
        LocalPopChoice(a_34);
      }
    else
      {
        t = y_33;
        t = v_35;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,d_36 = NULL,l_36 = NULL;
  t = run_time_0_0(t);
  z_35 = t;
  t = term_s_24;
  t = whoami_0_0(t);
  a_36 = t;
  t = term_z_18;
  d_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), z_35), term_c_10), a_36);
  l_36 = t;
  t = SSL_printnl(d_36, l_36);
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_34), z_35), term_c_10), a_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_29;
  m_36 = t;
  t = SSL_exit(m_36);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  y_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_36 = ATgetArgument(t, 0);
          {
            ATerm w_14 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(y_36);
            w_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_36);
            u_3 = t;
            t = SSLsetAnnotations(u_3, w_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_34;
      t = get_config_0_0(t);
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = fetch_1_0(a_7, t);
    }
  t = h_87(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_34), term_q_34), term_p_34), term_o_34), term_n_34), term_m_34), term_l_34), term_k_34), term_j_34), term_i_34), term_g_34), term_f_34);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_37 = ATgetFirst((ATermList) t);
      c_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_37 = NULL,m_37 = NULL;
        static ATerm b_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_37)), not_null(m_37));
          return(t);
        }
        t = c_37;
        t = k_0(t);
        if(((l_37 != NULL) && (l_37 != t)))
          _fail(t);
        else
          l_37 = t;
        t = b_37;
        t = i_0(t);
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        t = c_37;
        t = reverse_acc_2_0(i_0, b_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_24;
      t = k_0(t);
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_38), term_s_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  ATerm t_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_32;
      t = get_config_0_0(t);
      u_37 = t;
      LocalPopChoice(v_34);
    }
  else
    {
      t = t_34;
      {
        static ATerm c_7 (ATerm t)
        {
          ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,i_4 = NULL;
          z_37 = t;
          if(match_cons(t, sym_Program_1))
            {
              y_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_37);
          x_37 = t;
          t = y_37;
          if(((u_37 != NULL) && (u_37 != t)))
            _fail(t);
          else
            u_37 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, y_37);
          i_4 = t;
          t = SSLsetAnnotations(i_4, x_37);
          return(t);
        }
        t = fetch_1_0(c_7, t);
      }
    }
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_35), not_null(u_37)), term_z_34);
        t = echo_0_0(t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
      }
  }
  t = term_b_35;
  t = echo_0_0(t);
  t = term_n_30;
  v_37 = t;
  t = term_q_30;
  w_37 = t;
  t = term_c_35;
  t = a_8(v_37, w_37, t);
  t = reverse_acc_2_0(_id, h_7, t);
  t = map_1_0(c_8, t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_38 = NULL;
        static ATerm e_8 (ATerm t)
        {
          t = not_null(u_37);
          return(t);
        }
        t = long_description_1_0(e_8, t);
        g_38 = t;
        t = (ATerm) ATinsert(CheckATermList(g_38), term_f_35);
        t = echo_0_0(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t)
  {
    ATerm k_39 = NULL,l_39 = NULL,n_39 = NULL;
    k_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_39 = ATgetFirst((ATermList) t);
        n_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_15 = NULL,j_15 = NULL,x_5 = NULL;
          t = SSLgetAnnotations(k_39);
          e_15 = t;
          t = l_39;
          t = u_71(t);
          j_15 = t;
          t = (ATerm) ATinsert(CheckATermList(n_39), j_15);
          x_5 = t;
          t = SSLsetAnnotations(x_5, e_15);
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          {
            ATerm x_15 = NULL,f_16 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(k_39);
            x_15 = t;
            t = n_39;
            t = o_39(t);
            f_16 = t;
            t = (ATerm) ATinsert(CheckATermList(f_16), l_39);
            y_5 = t;
            t = SSLsetAnnotations(y_5, x_15);
          }
        }
    }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL;
  u_39 = t;
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_35 = ATgetFirst((ATermList) t);
                ATerm l_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_39;
          }
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = (ATerm) ATinsert(ATempty, u_39);
      }
  }
  v_39 = t;
  t = term_u_25;
  w_39 = t;
  t = SSL_printnl(w_39, v_39);
  t = u_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm z_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm s_66 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  e_40 = t;
  t = s_66(t);
  f_40 = t;
  t = term_z_18;
  g_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_40), f_40);
  h_40 = t;
  t = SSL_printnl(g_40, h_40);
  t = e_40;
  return(t);
}
ATerm map_1_0 (ATerm k_71 (ATerm), ATerm t)
{
  static ATerm j_41 (ATerm t)
  {
    ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL;
    g_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_41;
      }
    else
      {
        ATerm v_16 = NULL,a_17 = NULL,b_17 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_41 = ATgetFirst((ATermList) t);
            i_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_41);
        v_16 = t;
        t = h_41;
        t = k_71(t);
        a_17 = t;
        t = i_41;
        t = j_41(t);
        b_17 = t;
        t = (ATerm) ATinsert(CheckATermList(b_17), a_17);
        d_6 = t;
        t = SSLsetAnnotations(d_6, v_16);
      }
    return(t);
  }
  t = j_41(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_p_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_41 = NULL;
      v_41 = t;
      t = SSL_is_string(v_41);
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      {
        ATerm u_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_8, t);
            LocalPopChoice(w_35);
          }
        else
          {
            t = u_35;
            {
              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
              b_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_42 = ATgetArgument(t, 0);
                  t = c_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_42 = ATgetArgument(t, 0);
                      t = c_42;
                      {
                        ATerm y_35 = t;
                        int b_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(b_36);
                          }
                        else
                          {
                            t = y_35;
                            t = debug_1_0(g_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_42 = NULL,j_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_42 = ATgetArgument(t, 0);
                          d_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_42;
                      t = eval_config_0_0(t);
                      i_42 = t;
                      t = d_42;
                      t = eval_config_0_0(t);
                      j_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_42, j_42);
                      t = z_7(i_42, j_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL;
  n_42 = t;
  t = term_c_36;
  o_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, n_42);
  t = a_8(o_42, n_42, t);
  {
    ATerm e_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_42 = NULL,q_42 = NULL;
        t = eval_config_0_0(t);
        p_42 = t;
        t = term_c_36;
        q_42 = t;
        t = SSL_table_put(q_42, n_42, p_42);
        t = p_42;
        LocalPopChoice(f_36);
      }
    else
      {
        t = e_36;
      }
  }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  t = term_g_36;
  y_42 = t;
  t = term_s_24;
  z_42 = t;
  t = term_h_36;
  t = d_8(y_42, z_42, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_n_36;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
  t = term_g_36;
  c_43 = t;
  t = term_s_24;
  d_43 = t;
  t = term_h_36;
  t = d_8(c_43, d_43, t);
  t = term_q_36;
  a_43 = t;
  t = term_s_24;
  b_43 = t;
  t = term_r_36;
  t = d_8(a_43, b_43, t);
  t = term_s_36;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_8, l_8, n_8, t);
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = Option_3_0(p_8, q_8, r_8, t);
    }
  return(t);
}
static ATerm d_8 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm e_43 = NULL;
  t = term_c_36;
  e_43 = t;
  t = SSL_table_put(e_43, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_c_36, j_38, k_38);
  return(t);
}
static ATerm a_8 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
static ATerm b_8 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm g_43 = NULL,j_43 = NULL,k_43 = NULL;
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm w_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_37 = ATgetArgument(t, 0);
            ATerm d_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = a_8(j_36, k_36, t);
        LocalPopChoice(z_36);
      }
    else
      {
        t = w_36;
        t = (ATerm) ATempty;
      }
  }
  j_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), i_36);
  k_43 = t;
  t = SSL_table_put(j_36, k_36, k_43);
  t = g_43;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
      t = term_s_24;
      t = e_0(t);
      s_43 = t;
      t = term_n_30;
      t_43 = t;
      t = term_q_30;
      u_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_q_30, s_43);
      t = b_8(t_43, u_43, s_43, t);
      _fail(t);
    }
  else
    {
      ATerm x_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_43 = ATgetFirst((ATermList) t);
          r_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_43;
      t = c_0(t);
      t = term_s_24;
      t = d_0(t);
      x_43 = t;
      t = (ATerm) ATinsert(CheckATermList(r_43), x_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,g_6 = NULL;
  d_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_43 = ATgetFirst((ATermList) t);
      a_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_44);
  y_43 = t;
  t = z_43;
  t = i_58(t);
  b_44 = t;
  t = a_44;
  t = j_58(t);
  c_44 = t;
  t = (ATerm) ATinsert(CheckATermList(c_44), b_44);
  g_6 = t;
  t = SSLsetAnnotations(g_6, y_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_89 (ATerm), ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,n_44 = NULL,o_44 = NULL,j_8 = NULL;
  i_44 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_37;
        t = f_89(t);
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
      }
  }
  t = i_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_44 = ATgetFirst((ATermList) t);
      l_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_44);
  j_44 = t;
  t = term_u_32;
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_32, k_44);
  t = d_8(o_44, k_44, t);
  t = l_44;
  {
    static ATerm y_44 (ATerm t)
    {
      ATerm k_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_44 = NULL;
              r_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_44;
              LocalPopChoice(r_37);
            }
          else
            {
              t = o_37;
              t = f_89(t);
              t = Cons_2_0(_id, y_44, t);
            }
          LocalPopChoice(n_37);
        }
      else
        {
          t = k_37;
          {
            ATerm u_44 = NULL,v_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_44 = ATgetFirst((ATermList) t);
                v_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_44), (ATerm) ATmakeAppl(sym_Undefined_1, u_44));
          }
        }
      return(t);
    }
    t = y_44(t);
  }
  n_44 = t;
  t = (ATerm) ATinsert(CheckATermList(n_44), (ATerm) ATmakeAppl(sym_Program_1, k_44));
  j_8 = t;
  t = SSLsetAnnotations(j_8, j_44);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm k_45 = NULL;
  k_45 = t;
  if(match_string(t, "--help"))
    {
      t = k_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_45;
        }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL;
  t = term_e_34;
  l_45 = t;
  t = term_s_24;
  m_45 = t;
  t = term_s_37;
  t = d_8(l_45, m_45, t);
  t = term_t_37;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_c_38;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  f_45 = t;
  t = term_n_30;
  h_45 = t;
  t = term_q_30;
  i_45 = t;
  t = (ATerm) ATempty;
  j_45 = t;
  t = SSL_table_put(h_45, i_45, j_45);
  t = f_45;
  {
    static ATerm s_8 (ATerm t)
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_89(t);
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          {
            ATerm h_38 = t;
            int i_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_8, u_8, w_8, t);
                LocalPopChoice(i_38);
              }
            else
              {
                t = h_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_8, t);
  }
  {
    ATerm l_38 = t;
    int m_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_45 = NULL;
        t_45 = t;
        {
          ATerm n_38 = t;
          int o_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_18 = NULL;
              t = t_45;
              {
                ATerm p_38 = t;
                int q_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_34;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_38);
                  }
                else
                  {
                    t = p_38;
                    t = fetch_1_0(z_8, t);
                  }
              }
              t = t_45;
              t = default_system_usage_0_0(t);
              t = term_u_29;
              h_18 = t;
              t = SSL_exit(h_18);
              LocalPopChoice(o_38);
            }
          else
            {
              t = n_38;
              {
                ATerm o_18 = NULL;
                t = term_g_36;
                t = get_config_0_0(t);
                t = t_45;
                t = default_system_about_0_0(t);
                t = term_u_29;
                o_18 = t;
                t = SSL_exit(o_18);
              }
            }
        }
        LocalPopChoice(m_38);
      }
    else
      {
        t = l_38;
        {
          ATerm r_38 = t;
          int s_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
              static ATerm a_9 (ATerm t)
              {
                ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,m_8 = NULL;
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
                if(((d_45 != NULL) && (d_45 != t)))
                  _fail(t);
                else
                  d_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_45);
                m_8 = t;
                t = SSLsetAnnotations(m_8, x_45);
                return(t);
              }
              t = fetch_1_0(a_9, t);
              t = term_z_18;
              v_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_45)), term_t_38);
              w_45 = t;
              t = SSL_printnl(v_45, w_45);
              t = (ATerm) ATmakeAppl(sym__2, term_z_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_45)), term_t_38));
              t = default_system_usage_0_0(t);
              t = term_p_9;
              u_45 = t;
              t = SSL_exit(u_45);
              LocalPopChoice(s_38);
            }
          else
            {
              t = r_38;
            }
        }
      }
  }
  e_45 = t;
  t = term_n_30;
  g_45 = t;
  t = SSL_table_destroy(g_45);
  t = e_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  t = parse_options_1_0(j_87, t);
  e_46 = t;
  t = term_u_38;
  h_46 = t;
  t = SSL_table_create(h_46);
  t = term_u_38;
  f_46 = t;
  t = term_v_38;
  g_46 = t;
  t = SSL_table_put(f_46, g_46, e_46);
  t = e_46;
  t = l_87(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_87, t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_38);
            }
          else
            {
              t = y_38;
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
