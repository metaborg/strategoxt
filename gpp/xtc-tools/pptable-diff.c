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
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_f_37;
ATerm term_p_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_t_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_e_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_s_33;
ATerm term_g_33;
ATerm term_e_33;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_j_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_w_30;
ATerm term_t_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_t_28;
ATerm term_s_27;
ATerm term_p_27;
ATerm term_l_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_x_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_r_24;
ATerm term_n_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_u_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_l_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_x_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_a_21;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
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
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_n_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_r_9, term_v_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_z_10, term_b_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_p_11, term_q_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_x_11, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_12, term_c_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_i_12, term_l_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_s_12, term_t_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_d_13, term_j_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_y_14, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_k_16, term_l_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_s_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_c_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_a_18, term_b_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_h_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_p_18);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_q_22);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_e_22);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_r_24, term_n_24);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym__2, term_n_9, term_n_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_29);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_x_24);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_x_24);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_b_31);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_x_24);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_x_24);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_x_24);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm c_7 (ATerm i_33, ATerm j_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_7 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm e_7 (ATerm b_65 (ATerm), ATerm a_173, ATerm v_17, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t);
static ATerm f_7 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_81 (ATerm), ATerm t);
static ATerm i_7 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm j_7 (ATerm v_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm k_7 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm l_7 (ATerm c_81 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm a_9 (ATerm m_8, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_7 (ATerm t_17, ATerm t);
static ATerm n_7 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_11 (ATerm t_9, ATerm t);
static ATerm i_11 (ATerm b_10, ATerm c_10, ATerm d_10, ATerm t);
static ATerm k_11 (ATerm q_10, ATerm r_10, ATerm s_10, ATerm t);
static ATerm o_7 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm d_18 (ATerm r_16, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_83 (ATerm), ATerm t);
static ATerm z_18 (ATerm o_18, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_7 (ATerm r_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm q_7 (ATerm m_14, ATerm l_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm r_7 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm l_70 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm t_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm u_7 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_83 (ATerm), ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm k_83 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_7 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_80 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_7 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm z_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm c_8 (ATerm h_37, ATerm i_37, ATerm t);
static ATerm z_7 (ATerm y_36, ATerm z_36, ATerm t);
static ATerm a_8 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm c_7 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_33, j_33);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      t = SSL_subtr(i_33, j_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL;
  t = term_n_9;
  {
    ATerm p_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = p_9;
        t = term_r_9;
      }
  }
  b_0 = t;
  t = term_r_9;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_r_9);
  t = c_7(b_0, m_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_n_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_9;
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
      t = (ATerm) ATinsert(ATempty, term_v_9);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, (ATerm) ATinsert(ATempty, term_v_9));
      t = r_7(y_0, c_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_7 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm d_1 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_1);
  return(t);
}
static ATerm e_7 (ATerm b_65 (ATerm), ATerm a_173, ATerm v_17, ATerm t)
{
  ATerm g_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_173, term_w_9);
  t = o_7(t);
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_1, v_17);
  t = b_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_9 = ATgetArgument(t, 0);
      if(match_cons(x_9, sym_Stream_1))
        {
          m_1 = ATgetArgument(x_9, 0);
        }
      else
        _fail(t);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(m_1, n_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  ATerm h_1 = NULL,i_1 = NULL;
  i_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, i_1);
  t = e_7(h_0, h_1, i_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  t = xtc_transform_file_2_0(w_82, x_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL;
  w_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,u_0 = NULL;
        t = SSL_int_to_string(y_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_10), s_0), term_a_10);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      ATerm q_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_2 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_2);
      q_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_j_10), q_1), term_h_10), y_2);
      r_1 = t;
      t = SSL_concat_strings(r_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  ATerm f_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = d_70(t);
    if(((f_3 != NULL) && (f_3 != t)))
      _fail(t);
    else
      f_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(f_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm n_10 = ATgetArgument(t, 0);
              if((h_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm o_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_18), term_l_18), term_e_18), term_x_17), term_q_17), term_h_17), term_d_17), term_t_16), term_o_16), term_c_16), term_x_15), term_q_15), term_j_15), term_e_15), term_a_15), term_v_14), term_q_14), term_i_14), term_b_14), term_x_13), term_p_13), term_z_12), term_m_12), term_f_12), term_z_11), term_r_11), term_h_11), term_w_10);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_3 = NULL,w_3 = NULL;
  l_3 = t;
  {
    ATerm s_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
            {
              ATerm y_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_18);
        {
          ATerm e_19 = t;
          int f_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_1 = NULL,c_2 = NULL,d_2 = NULL;
              t = w_3;
              {
                ATerm g_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              z_1 = t;
              t = term_h_19;
              c_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, z_1), term_i_19);
              d_2 = t;
              t = SSL_printnl(c_2, d_2);
              t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATempty, z_1), term_i_19));
              LocalPopChoice(f_19);
            }
          else
            {
              t = e_19;
              t = l_3;
            }
        }
      }
    else
      {
        t = s_18;
        t = l_3;
      }
  }
  t = l_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_63 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL;
  m_4 = t;
  t = fork_0_0(t);
  k_4 = t;
  {
    ATerm j_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_4;
        t = q_63(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = j_19;
        t = SSL_waitpid(k_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            if(((ATgetType(q_19) != AT_INT) || (ATgetInt((ATermInt) q_19) != 0)))
              _fail(t);
            {
              ATerm r_19 = ATgetArgument(t, 1);
            }
            {
              ATerm s_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_4 = NULL;
  static ATerm w_0 (ATerm t)
  {
    ATerm q_4 = NULL,s_4 = NULL;
    q_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), q_4);
    t = z_7(not_null(o_4), q_4, t);
    s_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_4, s_4);
    return(t);
  }
  if(((o_4 != NULL) && (o_4 != t)))
    _fail(t);
  else
    o_4 = t;
  t = SSL_table_keys(o_4);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  {
    ATerm u_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        t = term_n_9;
        t = get_config_0_0(t);
        x_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_4, term_s_17);
        t = geq_0_0(t);
        t = v_4;
        t = z_80(t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = u_19;
        t = v_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm d_5 = NULL;
  d_5 = t;
  {
    ATerm z_19 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_5 = NULL;
        t = term_n_9;
        t = get_config_0_0(t);
        h_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_5, term_k_14);
        t = geq_0_0(t);
        t = d_5;
        t = y_80(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = z_19;
        t = d_5;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  {
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_5 = NULL;
        t = term_n_9;
        t = get_config_0_0(t);
        o_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_5, term_x_11);
        t = geq_0_0(t);
        t = k_5;
        t = a_81(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        t = k_5;
      }
  }
  return(t);
}
static ATerm i_7 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = z_73(t);
  {
    static ATerm z_0 (ATerm t)
    {
      ATerm r_5 = NULL;
      r_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, r_5);
      t = y_73(t);
      return(t);
    }
    t = fetch_1_0(z_0, t);
  }
  t = p_24;
  return(t);
}
static ATerm j_7 (ATerm v_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm n_6 (ATerm t)
  {
    ATerm h_6 = NULL,i_6 = NULL,j_6 = NULL;
    h_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_6 = ATgetFirst((ATermList) t);
            j_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_6;
              {
                static ATerm a_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = i_7(v_73, a_1, i_6, j_6, t);
              }
              t = n_6(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              {
                ATerm n_2 = NULL,x_2 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(h_6);
                n_2 = t;
                t = j_6;
                t = n_6(t);
                x_2 = t;
                t = (ATerm) ATinsert(CheckATermList(x_2), i_6);
                g_0 = t;
                t = SSLsetAnnotations(g_0, n_2);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = n_6(t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm g_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      if((g_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm s_6 = NULL,v_6 = NULL,w_6 = NULL;
  s_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm m_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = z_7(e_36, f_36, t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
  }
  w_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_6, g_36);
  t = j_7(b_1, w_6, g_36, t);
  v_6 = t;
  t = SSL_table_put(e_36, f_36, v_6);
  t = s_6;
  return(t);
}
static ATerm l_7 (ATerm c_81 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm e_1 (ATerm t)
  {
    ATerm h_7 = NULL,w_7 = NULL;
    if(match_cons(t, sym__2))
      {
        h_7 = ATgetArgument(t, 0);
        w_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, h_7, w_7);
    t = c_81(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm a_9 (ATerm m_8, ATerm t)
{
  t = SSL_fclose(m_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_8 = ATgetArgument(t, 0);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_8);
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            t = a_9(w_8, t);
          }
      }
    }
  else
    {
      t = a_9(w_8, t);
    }
  return(t);
}
static ATerm m_7 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm n_7 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_fopen(y_38, z_38);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_9 = NULL;
  t = SSL_stdin_stream();
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_9);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_stdout_stream();
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_9 = NULL;
  t = SSL_stderr_stream();
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_9);
  return(t);
}
static ATerm f_11 (ATerm t_9, ATerm t)
{
  ATerm u_9 = NULL;
  t = SSL_explode_term(t_9);
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
          {
            u_9 = ATgetFirst((ATermList) u_20);
            {
              ATerm v_20 = (ATerm) ATgetNext((ATermList) u_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_11 (ATerm b_10, ATerm c_10, ATerm d_10, ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,i_10 = NULL,m_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(d_10);
  i_10 = t;
  t = b_10;
  if(match_cons(t, sym_Path_1))
    {
      m_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_10, c_10);
  t_1 = t;
  t = SSLsetAnnotations(t_1, i_10);
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(e_10, f_10, t);
  return(t);
}
static ATerm k_11 (ATerm q_10, ATerm r_10, ATerm s_10, ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,x_10 = NULL,a_11 = NULL,b_2 = NULL;
  t = SSLgetAnnotations(s_10);
  x_10 = t;
  t = SSL_is_string(q_10);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, r_10);
  b_2 = t;
  t = SSLsetAnnotations(b_2, x_10);
  if(match_cons(t, sym__2))
    {
      t_10 = ATgetArgument(t, 0);
      u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(t_10, u_10, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym__2))
    {
      d_11 = ATgetArgument(t, 0);
      e_11 = ATgetArgument(t, 1);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_11(c_11, t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_11(d_11, e_11, c_11, t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
                  t = k_11(d_11, e_11, c_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_11(c_11, t);
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL;
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, term_h_21);
      t = o_7(t);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      t = debug_1_0(f_1, t);
      _fail(t);
    }
  m_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(n_11, t);
  l_11 = t;
  t = m_11;
  t = fclose_0_0(t);
  t = l_11;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_11 = NULL,u_11 = NULL;
      s_11 = t;
      t = (ATerm) ATinsert(ATempty, term_p_21);
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, term_p_21));
      t = r_7(s_11, u_11, t);
      LocalPopChoice(o_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_21;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = t;
            if((PushChoice() == 0))
              {
                ATerm v_11 = NULL,w_11 = NULL;
                v_11 = t;
                t = (ATerm) ATinsert(ATempty, term_v_9);
                w_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(ATempty, term_v_9));
                t = r_7(v_11, w_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_21;
              }
            t = debug_1_0(j_1, t);
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = debug_1_0(k_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_x_21;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(s_1, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL;
  g_13 = t;
  t = term_h_19;
  h_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  i_13 = t;
  t = SSL_printnl(h_13, i_13);
  t = g_13;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym__3))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
      m_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_7(k_13, l_13, m_13, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,r_13 = NULL;
  n_13 = t;
  t = term_h_19;
  o_13 = t;
  t = (ATerm) ATinsert(ATempty, term_b_22);
  r_13 = t;
  t = SSL_printnl(o_13, r_13);
  t = n_13;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  t = term_h_19;
  t_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  u_13 = t;
  t = SSL_printnl(t_13, u_13);
  t = s_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_12 = NULL,d_12 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,q_12 = NULL,r_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL;
  b_12 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,f_13 = NULL;
        t = term_d_22;
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_12);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Imported_1, b_12));
        t = z_7(e_13, f_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
  }
  j_12 = t;
  t = term_d_22;
  v_12 = t;
  t = term_e_22;
  w_12 = t;
  t = (ATerm) ATinsert(ATempty, b_12);
  x_12 = t;
  t = SSL_table_put(v_12, w_12, x_12);
  t = j_12;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_1, t);
  d_12 = t;
  t = term_d_22;
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, d_12);
  t = l_7(v_1, r_12, d_12, t);
  t = if_verbose6_1_0(w_1, t);
  t = term_d_22;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, b_12);
  n_12 = t;
  t = (ATerm) ATempty;
  q_12 = t;
  t = SSL_table_put(k_12, n_12, q_12);
  t = (ATerm) ATmakeAppl(sym__3, term_d_22, (ATerm)ATmakeAppl(sym_Imported_1, b_12), (ATerm) ATempty);
  t = if_verbose4_1_0(x_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_77 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_15 = ATgetFirst((ATermList) t);
          p_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 = NULL,i_4 = NULL,j_4 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(n_15);
            d_4 = t;
            t = o_15;
            t = n_77(t);
            i_4 = t;
            t = p_15;
            t = filter_1_0(n_77, t);
            j_4 = t;
            t = (ATerm) ATinsert(CheckATermList(j_4), i_4);
            j_2 = t;
            t = SSLsetAnnotations(j_2, d_4);
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = p_15;
            t = filter_1_0(n_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_67 (ATerm), ATerm x_67 (ATerm), ATerm t)
{
  static ATerm u_15 (ATerm t)
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_67(t);
        t = u_15(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = x_67(t);
      }
    return(t);
  }
  t = u_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_22;
      t = get_config_0_0(t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL;
            t = term_o_22;
            v_15 = t;
            t = SSL_getenv(v_15);
            LocalPopChoice(n_22);
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
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  t = term_d_22;
  g_16 = t;
  t = term_q_22;
  h_16 = t;
  t = term_t_22;
  t = z_7(g_16, h_16, t);
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
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = if_verbose5_1_0(y_1, t);
  y_15 = t;
  {
    ATerm w_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_16 = NULL,e_16 = NULL;
        t = term_d_22;
        d_16 = t;
        t = term_e_22;
        e_16 = t;
        t = term_c_23;
        t = z_7(d_16, e_16, t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = w_22;
        {
          ATerm f_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_16 = t;
          t = repeat_2_0(e_2, _id, t);
          t = f_16;
        }
      }
  }
  t = y_15;
  t = if_verbose5_1_0(f_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_e_23;
  return(t);
}
static ATerm d_18 (ATerm r_16, ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  t = term_d_22;
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_16);
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, r_16));
  t = z_7(v_16, w_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_23 = ATgetFirst((ATermList) t);
      if(match_cons(g_23, sym__2))
        {
          ATerm t_23 = ATgetArgument(g_23, 0);
          u_16 = ATgetArgument(g_23, 1);
        }
      else
        _fail(t);
      {
        ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_16;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_e_23;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_d_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_16 = NULL,y_16 = NULL,b_17 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      b_17 = t;
      if(match_cons(t, sym__2))
        {
          x_16 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
          {
            ATerm x_23 = t;
            int y_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_17 = NULL,l_17 = NULL,m_17 = NULL;
                t = term_d_22;
                l_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, x_16);
                m_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, x_16));
                t = z_7(l_17, m_17, t);
                {
                  static ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_16 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((i_17 != NULL) && (i_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                }
                t = not_null(i_17);
                LocalPopChoice(y_23);
              }
            else
              {
                t = x_23;
                t = d_18(b_17, t);
              }
          }
        }
      else
        {
          t = d_18(b_17, t);
        }
      t = if_verbose5_1_0(m_2, t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm z_17 = NULL,a_5 = NULL,b_5 = NULL;
        z_17 = t;
        t = term_h_19;
        a_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), z_17), term_z_23);
        b_5 = t;
        t = SSL_printnl(a_5, b_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), z_17), term_z_23);
        t = if_verbose5_1_0(p_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  j_18 = t;
  t = x_83(t);
  t = xtc_find_0_0(t);
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
  {
    static ATerm t_2 (ATerm t)
    {
      ATerm k_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_18, j_18);
      t = f_7(i_18, j_18, t);
      t = term_b_24;
      k_18 = t;
      t = SSL_exit(k_18);
      return(t);
    }
    t = fork_and_wait_1_0(t_2, t);
  }
  t = j_18;
  return(t);
}
static ATerm z_18 (ATerm o_18, ATerm t)
{
  ATerm r_18 = NULL;
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm g_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_2 (ATerm t)
            {
              t = u_18;
              return(t);
            }
            t = t_18;
            t = at_end_1_0(v_2, t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = z_18(v_18, t);
          }
      }
    }
  else
    {
      t = z_18(v_18, t);
    }
  return(t);
}
static ATerm p_7 (ATerm r_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,k_19 = NULL,l_19 = NULL;
  d_19 = t;
  t = r_79(t);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_19, q_34, o_34);
  t = a_8(a_19, q_34, o_34, t);
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL;
        t = term_n_24;
        m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, term_n_24);
        t = z_7(a_19, m_19, t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_19 = ATgetFirst((ATermList) t);
      c_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_24;
  k_19 = t;
  t = (ATerm) ATinsert(CheckATermList(c_19), (ATerm) ATinsert(CheckATermList(b_19), q_34));
  l_19 = t;
  t = SSL_table_put(a_19, k_19, l_19);
  t = d_19;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_19 = NULL,p_19 = NULL,t_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL,b_20 = NULL;
  t = P__tmpdir_0_0(t);
  v_19 = t;
  t = term_t_24;
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, term_t_24);
  t = y_7(v_19, b_20, t);
  x_19 = t;
  t = term_w_24;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_19, term_w_24);
  t = y_7(x_19, a_20, t);
  w_19 = t;
  t = SSL_mkstemp(w_19);
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_24;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, term_x_24);
  t = p_7(b_3, p_19, t_19, t);
  t = SSL_close(n_19);
  t = p_19;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_20 = NULL,h_20 = NULL;
      t = d_20;
      t = xtc_new_file_0_0(t);
      f_20 = t;
      t = x_0(t);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_20, (ATerm) ATinsert(ATinsert(ATempty, f_20), term_b_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_20);
    }
  else
    {
      ATerm l_20 = NULL,n_20 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_20;
      t = xtc_new_file_0_0(t);
      l_20 = t;
      t = x_0(t);
      n_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_20), term_b_25), e_20), term_e_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_20);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  static ATerm g_21 (ATerm t)
  {
    ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL;
    f_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_21 = ATgetFirst((ATermList) t);
        e_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm m_5 = NULL,s_5 = NULL,l_2 = NULL;
          t = SSLgetAnnotations(f_21);
          m_5 = t;
          t = e_21;
          t = g_21(t);
          s_5 = t;
          t = (ATerm) ATinsert(CheckATermList(s_5), d_21);
          l_2 = t;
          t = SSLsetAnnotations(l_2, m_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_21;
        t = h_70(t);
      }
    return(t);
  }
  t = g_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_21;
    }
  else
    {
      static ATerm c_3 (ATerm t)
      {
        t = not_null(m_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_21 = ATgetFirst((ATermList) t);
          if(((m_21 != NULL) && (m_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_21;
      t = at_end_1_0(c_3, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_25;
      t = get_config_0_0(t);
      LocalPopChoice(g_25);
      {
        ATerm q_21 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        q_21 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_21), term_h_25);
      }
    }
  else
    {
      t = f_25;
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
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  t = term_x_24;
  t = new_0_0(t);
  u_21 = t;
  t = term_i_25;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_21, term_i_25);
  t = y_7(u_21, v_21, t);
  w_21 = t;
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL;
        t = (ATerm) ATinsert(ATempty, term_v_9);
        y_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_21, (ATerm) ATinsert(ATempty, term_v_9));
        t = r_7(w_21, y_21, t);
        t = new_file_0_0(t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = w_21;
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
static ATerm q_7 (ATerm m_14, ATerm l_14, ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      t = get_errno_0_0(t);
      t = term_x_24;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = t_7(m_14, l_14, t);
      t = SSL_remove(m_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_6 = NULL;
        t = r_22;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_p_25;
        p_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_22, term_p_25);
        t = t_7(s_22, p_6, t);
        t = SSL_remove(s_22);
        t = term_p_25;
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        {
          ATerm q_25 = t;
          int r_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_7 = NULL;
              t = r_22;
              t = t_0(t);
              b_7 = t;
              {
                ATerm s_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_7 = NULL;
                    s_7 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_7;
                      }
                    else
                      {
                        t = s_7;
                        if((s_22 != t))
                          {
                            _fail(t);
                          }
                        t = s_7;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_25;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_22, b_7);
              t = q_7(s_22, b_7, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_7);
              LocalPopChoice(r_25);
            }
          else
            {
              t = q_25;
              t = r_22;
              t = t_0(t);
              if((s_22 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_22);
            }
        }
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL;
  x_22 = t;
  {
    static ATerm d_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_23 = NULL,b_23 = NULL,q_2 = NULL;
            b_23 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm x_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_23);
            a_23 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
            q_2 = t;
            t = SSLsetAnnotations(q_2, a_23);
            LocalPopChoice(w_25);
            t = xtc_transform_file_2_0(g_3, i_3, t);
          }
        else
          {
            t = v_25;
            t = xtc_transform_term_2_0(j_3, k_3, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(d_3, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      y_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_22;
  t = if_verbose2_1_0(n_3, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_23 = NULL;
        t = term_n_9;
        t = get_config_0_0(t);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_z_10);
        t = geq_0_0(t);
        t = d_23;
        t = w_80(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = d_23;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_access(p_38, q_38);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_2 = NULL;
  i_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_26), term_d_26), i_23);
  n_23 = t;
  t = SSL_concat_strings(n_23);
  m_23 = t;
  t = (ATerm) ATinsert(ATempty, term_v_9);
  l_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_23, (ATerm) ATinsert(ATempty, term_v_9));
  t = r_7(m_23, l_23, t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, i_23);
  r_23 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      ATerm g_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_23);
  o_23 = t;
  t = SSL_modification_time(h_23);
  p_23 = t;
  t = SSL_modification_time(i_23);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_23, q_23);
  s_2 = t;
  t = SSLsetAnnotations(s_2, o_23);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_23, i_23);
  k_23 = t;
  t = SSL_explode_term(k_23);
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
          {
            j_23 = ATgetFirst((ATermList) i_26);
            {
              ATerm m_26 = (ATerm) ATgetNext((ATermList) i_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_23;
  t = if_verbose2_1_0(p_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_70 (ATerm), ATerm t)
{
  static ATerm f_24 (ATerm t)
  {
    ATerm q_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_70(t);
        LocalPopChoice(s_26);
      }
    else
      {
        t = q_26;
        {
          ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,g_8 = NULL,p_8 = NULL,u_2 = NULL;
          c_24 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_24 = ATgetFirst((ATermList) t);
              e_24 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_24);
          g_8 = t;
          t = e_24;
          t = f_24(t);
          p_8 = t;
          t = (ATerm) ATinsert(CheckATermList(p_8), d_24);
          u_2 = t;
          t = SSLsetAnnotations(u_2, g_8);
        }
      }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL;
      z_8 = t;
      t = term_x_26;
      b_9 = t;
      t = SSL_explode_string(b_9);
      y_8 = t;
      t = SSL_explode_string(z_8);
      {
        static ATerm r_3 (ATerm t)
        {
          if((y_8 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(r_3, t);
      }
      t = z_8;
      LocalPopChoice(v_26);
    }
  else
    {
      t = t_26;
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_9 = NULL,h_9 = NULL,j_9 = NULL;
            h_9 = t;
            t = term_a_27;
            j_9 = t;
            t = SSL_explode_string(j_9);
            g_9 = t;
            t = SSL_explode_string(h_9);
            {
              static ATerm s_3 (ATerm t)
              {
                if((g_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(s_3, t);
            }
            t = h_9;
            LocalPopChoice(z_26);
          }
        else
          {
            t = y_26;
            {
              ATerm o_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL;
              o_24 = t;
              t = term_h_19;
              u_24 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, o_24), term_d_27);
              v_24 = t;
              t = SSL_printnl(u_24, v_24);
              t = term_r_9;
              s_24 = t;
              t = SSL_exit(s_24);
              t = (ATerm) ATinsert(ATinsert(ATempty, o_24), term_d_27);
            }
          }
      }
      {
        ATerm h_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = h_27;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_27;
      t = get_config_0_0(t);
      LocalPopChoice(k_27);
      {
        ATerm y_24 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        y_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_24), term_l_27);
      }
    }
  else
    {
      t = j_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_27;
      t = get_config_0_0(t);
      LocalPopChoice(o_27);
      t = (ATerm) ATinsert(ATempty, term_p_27);
    }
  else
    {
      t = m_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_27;
      t = get_config_0_0(t);
      LocalPopChoice(r_27);
      t = (ATerm) ATinsert(ATempty, term_s_27);
    }
  else
    {
      t = q_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL,c_25 = NULL,d_25 = NULL;
  t = term_x_24;
  t = pass__patch_0_0(t);
  z_24 = t;
  t = term_x_24;
  t = pass__prune_0_0(t);
  a_25 = t;
  t = term_x_24;
  t = pass__new_0_0(t);
  c_25 = t;
  t = term_x_24;
  t = pass__old_0_0(t);
  d_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_25), c_25), a_25), z_24);
  t = concat_0_0(t);
  return(t);
}
static ATerm t_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL;
  y_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_9 = NULL;
        t = y_25;
        t = r_0(t);
        o_9 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_9;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_9;
          }
        t = (ATerm) ATmakeAppl(sym__2, z_25, o_9);
        t = t_7(z_25, o_9, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_25);
        LocalPopChoice(x_27);
      }
    else
      {
        t = u_27;
        {
          ATerm y_27 = t;
          int a_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_9 = NULL;
              t = y_25;
              t = r_0(t);
              y_9 = t;
              {
                ATerm b_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_9 = NULL;
                    z_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_9;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_9;
                          }
                        else
                          {
                            t = z_9;
                            if((z_25 != t))
                              {
                                _fail(t);
                              }
                            t = z_9;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_28;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, z_25, y_9);
              t = t_7(z_25, y_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_25);
              LocalPopChoice(a_28);
            }
          else
            {
              t = y_27;
              t = y_25;
              t = r_0(t);
              if((z_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_25);
            }
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  k_26 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = z_7(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_28 = ATgetFirst((ATermList) t);
            j_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_28);
        t = SSL_table_put(m_35, n_35, j_26);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, j_26);
      }
    else
      {
        t = c_28;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = k_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL;
  p_26 = t;
  t = o_79(t);
  o_26 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_26 = NULL;
        t = term_n_24;
        u_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_n_24);
        t = z_7(o_26, u_26, t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_26 = ATgetFirst((ATermList) t);
      l_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_n_24;
  r_26 = t;
  t = SSL_table_put(o_26, r_26, l_26);
  t = n_26;
  {
    static ATerm u_3 (ATerm t)
    {
      ATerm w_26 = NULL;
      w_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, w_26);
      t = u_7(o_26, w_26, t);
      return(t);
    }
    t = map_1_0(u_3, t);
  }
  t = p_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_80 (ATerm), ATerm k_80 (ATerm), ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_80(t);
      t = k_80(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = k_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  c_27 = t;
  t = n_79(t);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, term_n_24);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            ATerm o_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_24;
        n_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_n_24);
        t = z_7(b_27, n_27, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATempty;
      }
  }
  e_27 = t;
  t = term_n_24;
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty);
  g_27 = t;
  t = SSL_table_put(b_27, f_27, g_27);
  t = c_27;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  {
    ATerm p_28 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_28);
        LocalPopChoice(q_28);
      }
    else
      {
        t = p_28;
        t = e_28;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm t_27 = NULL;
  static ATerm x_3 (ATerm t)
  {
    ATerm v_27 = NULL;
    v_27 = t;
    {
      ATerm r_28 = t;
      int s_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_27 = NULL,z_27 = NULL;
          t = term_r_24;
          w_27 = t;
          t = term_n_24;
          z_27 = t;
          t = term_t_28;
          t = z_7(w_27, z_27, t);
          LocalPopChoice(s_28);
        }
      else
        {
          t = r_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_27 != NULL) && (t_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_27 = ATgetFirst((ATermList) t);
        {
          ATerm u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_27;
    t = map_1_0(y_3, t);
    t = v_27;
    t = end_scope_1_0(z_3, t);
    return(t);
  }
  t = begin_scope_1_0(v_3, t);
  t = restore_always_2_0(j_83, x_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_25;
      t = get_config_0_0(t);
      LocalPopChoice(w_28);
    }
  else
    {
      t = v_28;
      t = term_p_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  static ATerm a_4 (ATerm t)
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_28 = NULL;
        t = term_e_25;
        t = get_config_0_0(t);
        i_28 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_28);
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        t = term_s_9;
      }
    t = k_83(t);
    t = copy_to_1_0(b_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm q_29 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_29 = NULL,d_29 = NULL;
      d_29 = t;
      if(match_cons(t, sym_FILE_1))
        {
          c_29 = ATgetArgument(t, 0);
          {
            ATerm g_11 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(d_29);
            g_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, c_29);
            e_3 = t;
            t = SSLsetAnnotations(e_3, g_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_29;
        }
      LocalPopChoice(a_29);
      t = xtc_transform_file_2_0(e_4, f_4, t);
    }
  else
    {
      t = z_28;
      t = xtc_transform_term_2_0(g_4, l_4, t);
    }
  q_29 = t;
  {
    ATerm b_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_27;
        t = get_config_0_0(t);
        t = q_29;
        {
          ATerm f_29 = t;
          int g_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_12 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  h_12 = ATgetArgument(t, 0);
                  {
                    ATerm p_12 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(q_29);
                    p_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_12);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, p_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_29;
                }
              LocalPopChoice(g_29);
              t = xtc_transform_file_2_0(n_4, pass_verbose_0_0, t);
            }
          else
            {
              t = f_29;
              t = xtc_transform_term_2_0(p_4, pass_verbose_0_0, t);
            }
        }
        LocalPopChoice(e_29);
      }
    else
      {
        t = b_29;
        t = q_29;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_x_24;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_x_24;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_i_29;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_io_1_0(c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  v_29 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  w_29 = t;
  t = term_h_19;
  y_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_29), w_29), term_j_29);
  z_29 = t;
  t = SSL_printnl(y_29, z_29);
  t = term_r_9;
  x_29 = t;
  t = SSL_exit(x_29);
  t = v_29;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  if(match_string(t, "-k"))
    {
      t = b_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_30;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm c_30 = NULL,f_30 = NULL,h_30 = NULL;
  c_30 = t;
  t = SSL_string_to_int(c_30);
  f_30 = t;
  t = term_l_29;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, f_30);
  t = c_8(h_30, f_30, t);
  t = c_30;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, t_4, u_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  if(match_string(t, "-S"))
    {
      t = j_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_30;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  t = term_n_9;
  k_30 = t;
  t = term_n_29;
  l_30 = t;
  t = term_o_29;
  t = c_8(k_30, l_30, t);
  t = term_p_29;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_r_29;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  t = SSL_string_to_int(m_30);
  n_30 = t;
  t = term_n_9;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, n_30);
  t = c_8(o_30, n_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_30);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL;
  t = term_t_29;
  p_30 = t;
  t = term_x_24;
  q_30 = t;
  t = term_u_29;
  t = c_8(p_30, q_30, t);
  t = term_a_30;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, y_4, z_4, t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = e_30;
      {
        ATerm i_30 = t;
        int r_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_5, e_5, f_5, t);
            LocalPopChoice(r_30);
          }
        else
          {
            t = i_30;
            t = Option_3_0(g_5, i_5, j_5, t);
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm s_30 = NULL;
  s_30 = t;
  if(match_string(t, "-o"))
    {
      t = s_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_30;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  u_30 = t;
  t = term_b_25;
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_25, u_30);
  t = c_8(v_30, u_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_30);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  if(match_string(t, "-i"))
    {
      t = x_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_30;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  y_30 = t;
  t = term_e_25;
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, y_30);
  t = c_8(z_30, y_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_30);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, t_5, u_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
      t = term_x_24;
      t = p_0(t);
      k_31 = t;
      t = term_a_31;
      l_31 = t;
      t = term_b_31;
      m_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_31, term_b_31, k_31);
      t = a_8(l_31, m_31, k_31, t);
      _fail(t);
    }
  else
    {
      ATerm s_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_31 = ATgetFirst((ATermList) t);
          g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_31 = ATgetFirst((ATermList) t);
          i_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_31;
      t = n_0(t);
      t = h_31;
      t = o_0(t);
      s_31 = t;
      t = (ATerm) ATinsert(CheckATermList(i_31), s_31);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  u_31 = t;
  t = term_s_27;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, u_31);
  t = c_8(v_31, u_31, t);
  t = u_31;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_c_31;
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
  ATerm w_31 = NULL,z_31 = NULL;
  w_31 = t;
  t = term_p_27;
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_27, w_31);
  t = c_8(z_31, w_31, t);
  t = w_31;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_d_31;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm a_32 = NULL,c_32 = NULL;
  a_32 = t;
  t = term_h_25;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, a_32);
  t = c_8(c_32, a_32, t);
  t = a_32;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  i_32 = t;
  t = term_l_27;
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_27, i_32);
  t = c_8(j_32, i_32, t);
  t = i_32;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  t = term_n_31;
  k_32 = t;
  t = term_x_24;
  l_32 = t;
  t = term_o_31;
  t = c_8(k_32, l_32, t);
  t = term_p_31;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, y_5, z_5, t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = r_31;
      {
        ATerm b_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_6, b_6, d_6, t);
            LocalPopChoice(d_32);
          }
        else
          {
            t = b_32;
            {
              ATerm e_32 = t;
              int f_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(e_6, g_6, k_6, t);
                  LocalPopChoice(f_32);
                }
              else
                {
                  t = e_32;
                  {
                    ATerm g_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(l_6, m_6, o_6, t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = g_32;
                        {
                          ATerm m_32 = t;
                          int r_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(r_32);
                            }
                          else
                            {
                              t = m_32;
                              {
                                ATerm s_32 = t;
                                int u_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(u_32);
                                  }
                                else
                                  {
                                    t = s_32;
                                    {
                                      ATerm v_32 = t;
                                      int y_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(q_6, r_6, t_6, t);
                                          LocalPopChoice(y_32);
                                        }
                                      else
                                        {
                                          t = v_32;
                                          {
                                            ATerm z_32 = t;
                                            int b_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(b_33);
                                              }
                                            else
                                              {
                                                t = z_32;
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_24;
  t = whoami_0_0(t);
  n_32 = t;
  t = term_h_19;
  p_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_e_33), n_32);
  q_32 = t;
  t = SSL_printnl(p_32, q_32);
  t = term_r_9;
  o_32 = t;
  t = SSL_exit(o_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_33;
  t = get_config_0_0(t);
  return(t);
}
static ATerm v_7 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm h_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(k_33);
    }
  else
    {
      t = h_33;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_76 (ATerm), ATerm k_76 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,w_32 = NULL,x_32 = NULL;
  t_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_32;
      t = j_76(t);
    }
  else
    {
      ATerm a_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          x_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_32;
      t = foldr_2_0(j_76, k_76, t);
      a_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_32, a_33);
      t = k_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_n_29;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(b_13, c_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_33 = NULL,u_12 = NULL,y_12 = NULL;
  t = times_0_0(t);
  y_12 = t;
  t = SSL_explode_term(y_12);
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12;
  t = foldr_2_0(u_6, x_6, t);
  f_33 = t;
  t = SSL_TicksToSeconds(f_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,x_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_33;
        if((u_33 != t))
          {
            _fail(t);
          }
        t = t_33;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = (ATerm) ATmakeAppl(sym__2, u_33, x_33);
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_33, x_33);
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              t = SSL_gtr(u_33, x_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_33, x_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_80 (ATerm), ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL;
        t = term_n_9;
        t = get_config_0_0(t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_r_9);
        t = geq_0_0(t);
        t = d_34;
        t = v_80(t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = d_34;
      }
  }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,p_35 = NULL,q_35 = NULL;
  t = run_time_0_0(t);
  x_34 = t;
  t = term_x_24;
  t = whoami_0_0(t);
  y_34 = t;
  t = term_h_19;
  p_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_33), x_34), term_h_10), y_34);
  q_35 = t;
  t = SSL_printnl(p_35, q_35);
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_33), x_34), term_h_10), y_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_29;
  r_35 = t;
  t = SSL_exit(r_35);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm m_36 = NULL,r_36 = NULL;
  r_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_36 = ATgetArgument(t, 0);
          {
            ATerm c_14 = NULL,t_3 = NULL;
            t = SSLgetAnnotations(r_36);
            c_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_36);
            t_3 = t;
            t = SSLsetAnnotations(t_3, c_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_85 (ATerm), ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_33;
      t = get_config_0_0(t);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      t = fetch_1_0(z_6, t);
    }
  t = f_85(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_34), term_l_34), term_k_34), term_j_34), term_i_34), term_h_34), term_g_34), term_e_34), term_c_34), term_b_34), term_a_34), term_z_33);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_36 = ATgetFirst((ATermList) t);
      v_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_37 = NULL,c_37 = NULL;
        static ATerm a_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_37)), not_null(c_37));
          return(t);
        }
        t = v_36;
        t = k_0(t);
        if(((b_37 != NULL) && (b_37 != t)))
          _fail(t);
        else
          b_37 = t;
        t = u_36;
        t = i_0(t);
        if(((c_37 != NULL) && (c_37 != t)))
          _fail(t);
        else
          c_37 = t;
        t = v_36;
        t = reverse_acc_2_0(i_0, a_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_24;
      t = k_0(t);
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_37), term_n_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_37 = NULL,j_37 = NULL,k_37 = NULL;
  ATerm p_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_33;
      t = get_config_0_0(t);
      g_37 = t;
      LocalPopChoice(r_34);
    }
  else
    {
      t = p_34;
      {
        static ATerm x_7 (ATerm t)
        {
          ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,h_4 = NULL;
          n_37 = t;
          if(match_cons(t, sym_Program_1))
            {
              m_37 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_37);
          l_37 = t;
          t = m_37;
          if(((g_37 != NULL) && (g_37 != t)))
            _fail(t);
          else
            g_37 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, m_37);
          h_4 = t;
          t = SSLsetAnnotations(h_4, l_37);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_34), not_null(g_37)), term_u_34);
        t = echo_0_0(t);
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
      }
  }
  t = term_w_34;
  t = echo_0_0(t);
  t = term_a_31;
  j_37 = t;
  t = term_b_31;
  k_37 = t;
  t = term_z_34;
  t = z_7(j_37, k_37, t);
  t = reverse_acc_2_0(_id, b_8, t);
  t = map_1_0(d_8, t);
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 = NULL;
        static ATerm e_8 (ATerm t)
        {
          t = not_null(g_37);
          return(t);
        }
        t = long_description_1_0(e_8, t);
        y_37 = t;
        t = (ATerm) ATinsert(CheckATermList(y_37), term_c_35);
        t = echo_0_0(t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  static ATerm d_39 (ATerm t)
  {
    ATerm w_38 = NULL,x_38 = NULL,c_39 = NULL;
    w_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_38 = ATgetFirst((ATermList) t);
        c_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_14 = NULL,x_14 = NULL,v_5 = NULL;
          t = SSLgetAnnotations(w_38);
          t_14 = t;
          t = x_38;
          t = b_70(t);
          x_14 = t;
          t = (ATerm) ATinsert(CheckATermList(c_39), x_14);
          v_5 = t;
          t = SSLsetAnnotations(v_5, t_14);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm i_15 = NULL,r_15 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(w_38);
            i_15 = t;
            t = c_39;
            t = d_39(t);
            r_15 = t;
            t = (ATerm) ATinsert(CheckATermList(r_15), x_38);
            w_5 = t;
            t = SSLsetAnnotations(w_5, i_15);
          }
        }
    }
    return(t);
  }
  t = d_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  {
    ATerm f_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_39;
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
            t = h_39;
          }
        LocalPopChoice(j_35);
      }
    else
      {
        t = f_35;
        t = (ATerm) ATinsert(ATempty, h_39);
      }
  }
  i_39 = t;
  t = term_p_25;
  j_39 = t;
  t = SSL_printnl(j_39, i_39);
  t = h_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_7 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm z_64 (ATerm), ATerm t)
{
  ATerm q_39 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  q_39 = t;
  t = z_64(t);
  b_40 = t;
  t = term_h_19;
  c_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_39), b_40);
  d_40 = t;
  t = SSL_printnl(c_40, d_40);
  t = q_39;
  return(t);
}
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  static ATerm w_40 (ATerm t)
  {
    ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
    t_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_40;
      }
    else
      {
        ATerm j_16 = NULL,m_16 = NULL,n_16 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_40 = ATgetFirst((ATermList) t);
            v_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_40);
        j_16 = t;
        t = u_40;
        t = r_69(t);
        m_16 = t;
        t = v_40;
        t = w_40(t);
        n_16 = t;
        t = (ATerm) ATinsert(CheckATermList(n_16), m_16);
        c_6 = t;
        t = SSLsetAnnotations(c_6, j_16);
      }
    return(t);
  }
  t = w_40(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm o_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = o_35;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_41 = NULL;
      f_41 = t;
      t = SSL_is_string(f_41);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(f_8, t);
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
              l_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_41 = ATgetArgument(t, 0);
                  t = m_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_41 = ATgetArgument(t, 0);
                      t = m_41;
                      {
                        ATerm y_35 = t;
                        int z_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_35);
                          }
                        else
                          {
                            t = y_35;
                            t = debug_1_0(i_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_41 = NULL,x_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_41 = ATgetArgument(t, 0);
                          n_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_41;
                      t = eval_config_0_0(t);
                      w_41 = t;
                      t = n_41;
                      t = eval_config_0_0(t);
                      x_41 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_41, x_41);
                      t = y_7(w_41, x_41, t);
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
  ATerm b_42 = NULL,c_42 = NULL;
  b_42 = t;
  t = term_a_36;
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_36, b_42);
  t = z_7(c_42, b_42, t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_42 = NULL,g_42 = NULL;
        t = eval_config_0_0(t);
        d_42 = t;
        t = term_a_36;
        g_42 = t;
        t = SSL_table_put(g_42, b_42, d_42);
        t = d_42;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
      }
  }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_d_36;
  j_42 = t;
  t = term_x_24;
  k_42 = t;
  t = term_h_36;
  t = c_8(j_42, k_42, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_i_36;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  t = term_d_36;
  n_42 = t;
  t = term_x_24;
  o_42 = t;
  t = term_h_36;
  t = c_8(n_42, o_42, t);
  t = term_j_36;
  l_42 = t;
  t = term_x_24;
  m_42 = t;
  t = term_k_36;
  t = c_8(l_42, m_42, t);
  t = term_l_36;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_8, l_8, n_8, t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = q_36;
      t = Option_3_0(o_8, q_8, r_8, t);
    }
  return(t);
}
static ATerm c_8 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm p_42 = NULL;
  t = term_a_36;
  p_42 = t;
  t = SSL_table_put(p_42, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_a_36, h_37, i_37);
  return(t);
}
static ATerm z_7 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
static ATerm a_8 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm t_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_36 = ATgetArgument(t, 0);
            ATerm a_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = z_7(h_35, i_35, t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = t_36;
        t = (ATerm) ATempty;
      }
  }
  s_42 = t;
  t = (ATerm) ATinsert(CheckATermList(s_42), g_35);
  t_42 = t;
  t = SSL_table_put(h_35, i_35, t_42);
  t = r_42;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
      t = term_x_24;
      t = e_0(t);
      b_43 = t;
      t = term_a_31;
      c_43 = t;
      t = term_b_31;
      d_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_31, term_b_31, b_43);
      t = a_8(c_43, d_43, b_43, t);
      _fail(t);
    }
  else
    {
      ATerm g_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_42 = ATgetFirst((ATermList) t);
          a_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_42;
      t = c_0(t);
      t = term_x_24;
      t = d_0(t);
      g_43 = t;
      t = (ATerm) ATinsert(CheckATermList(a_43), g_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,f_6 = NULL;
  m_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_43 = ATgetFirst((ATermList) t);
      j_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_43);
  h_43 = t;
  t = i_43;
  t = p_56(t);
  k_43 = t;
  t = j_43;
  t = q_56(t);
  l_43 = t;
  t = (ATerm) ATinsert(CheckATermList(l_43), k_43);
  f_6 = t;
  t = SSLsetAnnotations(f_6, h_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,w_43 = NULL,x_43 = NULL,h_8 = NULL;
  r_43 = t;
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_37;
        t = d_87(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
      }
  }
  t = r_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_43 = ATgetFirst((ATermList) t);
      u_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_43);
  s_43 = t;
  t = term_g_33;
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, t_43);
  t = c_8(x_43, t_43, t);
  t = u_43;
  {
    static ATerm h_44 (ATerm t)
    {
      ATerm o_37 = t;
      int p_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_44 = NULL;
              a_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_44;
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              t = d_87(t);
              t = Cons_2_0(_id, h_44, t);
            }
          LocalPopChoice(p_37);
        }
      else
        {
          t = o_37;
          {
            ATerm d_44 = NULL,e_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_44 = ATgetFirst((ATermList) t);
                e_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(e_44), (ATerm) ATmakeAppl(sym_Undefined_1, d_44));
          }
        }
      return(t);
    }
    t = h_44(t);
  }
  w_43 = t;
  t = (ATerm) ATinsert(CheckATermList(w_43), (ATerm) ATmakeAppl(sym_Program_1, t_43));
  h_8 = t;
  t = SSLsetAnnotations(h_8, s_43);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  if(match_string(t, "--help"))
    {
      t = t_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_44;
        }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  t = term_y_33;
  u_44 = t;
  t = term_x_24;
  v_44 = t;
  t = term_s_37;
  t = c_8(u_44, v_44, t);
  t = term_t_37;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  o_44 = t;
  t = term_a_31;
  q_44 = t;
  t = term_b_31;
  r_44 = t;
  t = (ATerm) ATempty;
  s_44 = t;
  t = SSL_table_put(q_44, r_44, s_44);
  t = o_44;
  {
    static ATerm s_8 (ATerm t)
    {
      ATerm v_37 = t;
      int x_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_87(t);
          LocalPopChoice(x_37);
        }
      else
        {
          t = v_37;
          {
            ATerm z_37 = t;
            int a_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_8, u_8, x_8, t);
                LocalPopChoice(a_38);
              }
            else
              {
                t = z_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_8, t);
  }
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_45 = NULL;
        c_45 = t;
        {
          ATerm d_38 = t;
          int e_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL;
              t = c_45;
              {
                ATerm f_38 = t;
                int g_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(g_38);
                  }
                else
                  {
                    t = f_38;
                    t = fetch_1_0(d_9, t);
                  }
              }
              t = c_45;
              t = default_system_usage_0_0(t);
              t = term_n_29;
              u_17 = t;
              t = SSL_exit(u_17);
              LocalPopChoice(e_38);
            }
          else
            {
              t = d_38;
              {
                ATerm c_18 = NULL;
                t = term_d_36;
                t = get_config_0_0(t);
                t = c_45;
                t = default_system_about_0_0(t);
                t = term_n_29;
                c_18 = t;
                t = SSL_exit(c_18);
              }
            }
        }
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm h_38 = t;
          int i_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
              static ATerm k_9 (ATerm t)
              {
                ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,k_8 = NULL;
                i_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_45);
                g_45 = t;
                t = h_45;
                if(((m_44 != NULL) && (m_44 != t)))
                  _fail(t);
                else
                  m_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_45);
                k_8 = t;
                t = SSLsetAnnotations(k_8, g_45);
                return(t);
              }
              t = fetch_1_0(k_9, t);
              t = term_h_19;
              e_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_44)), term_j_38);
              f_45 = t;
              t = SSL_printnl(e_45, f_45);
              t = (ATerm) ATmakeAppl(sym__2, term_h_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_44)), term_j_38));
              t = default_system_usage_0_0(t);
              t = term_r_9;
              d_45 = t;
              t = SSL_exit(d_45);
              LocalPopChoice(i_38);
            }
          else
            {
              t = h_38;
            }
        }
      }
  }
  n_44 = t;
  t = term_a_31;
  p_44 = t;
  t = SSL_table_destroy(p_44);
  t = n_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  t = parse_options_1_0(h_85, t);
  n_45 = t;
  t = term_k_38;
  q_45 = t;
  t = SSL_table_create(q_45);
  t = term_k_38;
  o_45 = t;
  t = term_l_38;
  p_45 = t;
  t = SSL_table_put(o_45, p_45, n_45);
  t = n_45;
  t = j_85(t);
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_85, t);
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        {
          ATerm o_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(r_38);
            }
          else
            {
              t = o_38;
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
