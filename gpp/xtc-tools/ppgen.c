#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_g_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_z_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_v_28;
ATerm term_d_28;
ATerm term_z_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_e_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_x_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_o_9;
ATerm term_h_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_10, term_o_9, term_j_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_10, term_q_10, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_10, term_y_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_i_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_11, term_p_11, term_q_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_v_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_g_12, term_h_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_u_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_a_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_o_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_r_13, term_s_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_k_14, term_l_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_s_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_e_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_m_15, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_t_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_e_16, term_g_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_r_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_d_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_v_17);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_n_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_x_21);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_e_19, term_d_19);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_x_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_h_19);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_r_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_w_23, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_u_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_z_26, term_h_19);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_p_26);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_r_30, term_h_19);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_m_19, term_h_19);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_h_19);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm g_6 (ATerm n_33, ATerm o_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm h_6 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm i_6 (ATerm d_65 (ATerm), ATerm j_169, ATerm y_17, ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t);
static ATerm j_6 (ATerm i_14, ATerm j_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm f_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_63 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_7 (ATerm m_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_6 (ATerm t_79 (ATerm), ATerm v_34, ATerm t_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm z_80 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_81 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_81 (ATerm), ATerm t);
static ATerm n_6 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t_24, ATerm s_24, ATerm t);
static ATerm o_6 (ATerm x_73 (ATerm), ATerm p_24, ATerm o_24, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm p_6 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm t);
static ATerm q_6 (ATerm e_81 (ATerm), ATerm t_36, ATerm s_36, ATerm t);
static ATerm u_6 (ATerm u_38, ATerm v_38, ATerm t);
static ATerm b_13 (ATerm j_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_6 (ATerm w_17, ATerm t);
static ATerm s_6 (ATerm d_39, ATerm e_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_16 (ATerm x_13, ATerm t);
static ATerm c_16 (ATerm h_14, ATerm t_14, ATerm u_14, ATerm t);
static ATerm d_16 (ATerm c_15, ATerm d_15, ATerm f_15, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm p_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm p_21 (ATerm x_20, ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm g_84 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_parse_sdf_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm v_6 (ATerm q_14, ATerm r_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm r_35, ATerm s_35, ATerm t);
ATerm end_scope_1_0 (ATerm q_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_79 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_83 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm m_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm h_33, ATerm i_33, ATerm t);
ATerm foldr_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_80 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm need_help_1_0 (ATerm h_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_7 (ATerm c_32, ATerm d_32, ATerm t);
ATerm debug_1_0 (ATerm b_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_69 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_7 (ATerm m_37, ATerm n_37, ATerm t);
static ATerm b_7 (ATerm d_37, ATerm e_37, ATerm t);
static ATerm c_7 (ATerm m_35, ATerm n_35, ATerm l_35, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm t_56 (ATerm), ATerm u_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_87 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm parse_options_1_0 (ATerm e_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm n_33, ATerm o_33, ATerm t)
{
  ATerm d_5 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_33, o_33);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_5;
      t = SSL_subtr(n_33, o_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_h_9;
  {
    ATerm i_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(m_9);
      }
    else
      {
        t = i_9;
        t = term_o_9;
      }
  }
  b_0 = t;
  t = term_o_9;
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_o_9);
  t = g_6(b_0, e_0, t);
  c_0 = t;
  t = SSL_int_to_string(c_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_h_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_r_9);
      b_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_r_9));
      t = u_6(w_0, b_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_6 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm c_1 = NULL;
  t = SSL_write_term_to_stream_baf(q_17, r_17);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_1);
  return(t);
}
static ATerm i_6 (ATerm d_65 (ATerm), ATerm j_169, ATerm y_17, ATerm t)
{
  ATerm d_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_169, term_s_9);
  t = t_6(t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, y_17);
  t = d_65(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm g_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_9 = ATgetArgument(t, 0);
      if(match_cons(v_9, sym_Stream_1))
        {
          g_1 = ATgetArgument(v_9, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(g_1, j_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL;
  f_1 = t;
  t = xtc_new_file_0_0(t);
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_1, f_1);
  t = i_6(f_0, e_1, f_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
  t = xtc_transform_file_2_0(y_82, z_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm j_6 (ATerm i_14, ATerm j_14, ATerm t)
{
  t = SSL_execvp(i_14, j_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_2 = NULL,r_2 = NULL,u_2 = NULL,a_3 = NULL;
  k_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      r_2 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL,q_0 = NULL;
        t = SSL_int_to_string(r_2);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), m_0), term_w_9);
        q_0 = t;
        t = SSL_concat_strings(q_0);
      }
    }
  else
    {
      ATerm p_1 = NULL,q_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          r_2 = ATgetArgument(t, 0);
          u_2 = ATgetArgument(t, 1);
          a_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(u_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_3), term_b_10), p_1), term_z_9), r_2);
      q_1 = t;
      t = SSL_concat_strings(q_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm e_3 = NULL;
  static ATerm h_0 (ATerm t)
  {
    t = f_70(t);
    if(((e_3 != NULL) && (e_3 != t)))
      _fail(t);
    else
      e_3 = t;
    return(t);
  }
  t = fetch_1_0(h_0, t);
  t = not_null(e_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm g_10 = ATgetArgument(t, 0);
              if((g_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm h_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_17), term_h_17), term_s_16), term_n_16), term_i_16), term_u_15), term_o_15), term_k_15), term_z_14), term_n_14), term_f_14), term_a_14), term_t_13), term_p_13), term_k_13), term_c_13), term_x_12), term_q_12), term_i_12), term_e_12), term_y_11), term_r_11), term_n_11), term_e_11), term_a_11), term_t_10), term_o_10), term_k_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL,y_3 = NULL;
  n_3 = t;
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
            {
              ATerm g_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_18);
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = y_3;
              {
                ATerm p_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_2 = t;
              t = term_q_18;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_2), term_r_18);
              m_2 = t;
              t = SSL_printnl(l_2, m_2);
              t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, e_2), term_r_18));
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = n_3;
            }
        }
      }
    else
      {
        t = c_18;
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
ATerm fork_and_wait_1_0 (ATerm s_63 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  n_4 = t;
  t = fork_0_0(t);
  m_4 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_4;
        t = s_63(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = SSL_waitpid(m_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            if(((ATgetType(u_18) != AT_INT) || (ATgetInt((ATermInt) u_18) != 0)))
              _fail(t);
            {
              ATerm v_18 = ATgetArgument(t, 1);
            }
            {
              ATerm w_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  q_4 = t;
  t = z_83(t);
  t = xtc_find_0_0(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
  {
    static ATerm s_0 (ATerm t)
    {
      ATerm t_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
      t = j_6(p_4, q_4, t);
      t = term_x_18;
      t_4 = t;
      t = SSL_exit(t_4);
      return(t);
    }
    t = fork_and_wait_1_0(s_0, t);
  }
  t = q_4;
  return(t);
}
ATerm at_end_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  static ATerm u_5 (ATerm t)
  {
    ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
    s_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_5 = ATgetFirst((ATermList) t);
        r_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_2 = NULL,w_2 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(s_5);
          s_2 = t;
          t = r_5;
          t = u_5(t);
          w_2 = t;
          t = (ATerm) ATinsert(CheckATermList(w_2), q_5);
          n_1 = t;
          t = SSLsetAnnotations(n_1, s_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_5;
        t = j_70(t);
      }
    return(t);
  }
  t = u_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_4;
    }
  else
    {
      static ATerm u_0 (ATerm t)
      {
        t = not_null(z_4);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_4 = ATgetFirst((ATermList) t);
          if(((z_4 != NULL) && (z_4 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_4 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_4;
      t = at_end_1_0(u_0, t);
    }
  return(t);
}
static ATerm m_7 (ATerm m_6, ATerm t)
{
  ATerm y_6 = NULL;
  t = SSL_explode_term(m_6);
  if(match_cons(t, sym__2))
    {
      ATerm y_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL,i_7 = NULL;
  i_7 = t;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      f_7 = ATgetArgument(t, 1);
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = f_7;
              return(t);
            }
            t = d_7;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            t = m_7(i_7, t);
          }
      }
    }
  else
    {
      t = m_7(i_7, t);
    }
  return(t);
}
static ATerm l_6 (ATerm t_79 (ATerm), ATerm v_34, ATerm t_34, ATerm t)
{
  ATerm p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL;
  t_7 = t;
  t = t_79(t);
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_7, v_34, t_34);
  t = c_7(p_7, v_34, t_34, t);
  {
    ATerm b_19 = t;
    int c_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = term_d_19;
        y_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_7, term_d_19);
        t = b_7(p_7, y_7, t);
        LocalPopChoice(c_19);
      }
    else
      {
        t = b_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_7 = ATgetFirst((ATermList) t);
      s_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_19;
  u_7 = t;
  t = (ATerm) ATinsert(CheckATermList(s_7), (ATerm) ATinsert(CheckATermList(r_7), v_34));
  x_7 = t;
  t = SSL_table_put(p_7, u_7, x_7);
  t = t_7;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_7 = NULL,c_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,k_8 = NULL,l_8 = NULL,o_8 = NULL;
  t = P__tmpdir_0_0(t);
  g_8 = t;
  t = term_f_19;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_8, term_f_19);
  t = a_7(g_8, o_8, t);
  k_8 = t;
  t = term_g_19;
  l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, term_g_19);
  t = a_7(k_8, l_8, t);
  h_8 = t;
  t = SSL_mkstemp(h_8);
  if(match_cons(t, sym__2))
    {
      c_8 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_19;
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_8, term_h_19);
  t = l_6(y_0, c_8, e_8, t);
  t = SSL_close(z_7);
  t = c_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL;
  q_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_8 = NULL,w_8 = NULL;
      t = q_8;
      t = xtc_new_file_0_0(t);
      v_8 = t;
      t = v_0(t);
      w_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_8, (ATerm) ATinsert(ATinsert(ATempty, v_8), term_i_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_8);
    }
  else
    {
      ATerm a_9 = NULL,b_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_8;
      t = xtc_new_file_0_0(t);
      a_9 = t;
      t = v_0(t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_9), term_i_19), t_8), term_j_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_9);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_9, term_q_10);
        t = geq_0_0(t);
        t = d_9;
        t = z_80(t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = d_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_m_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(z_0, t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  static ATerm a_1 (ATerm t)
  {
    ATerm k_9 = NULL,l_9 = NULL;
    k_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_9), k_9);
    t = b_7(not_null(j_9), k_9, t);
    l_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
    return(t);
  }
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  t = SSL_table_keys(j_9);
  t = map_1_0(a_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm n_9 = NULL;
  n_9 = t;
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, term_l_16);
        t = geq_0_0(t);
        t = n_9;
        t = b_81(t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = n_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm u_9 = NULL;
  u_9 = t;
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        x_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_9, term_u_12);
        t = geq_0_0(t);
        t = u_9;
        t = a_81(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = u_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  a_10 = t;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_v_10);
        t = geq_0_0(t);
        t = a_10;
        t = c_81(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = a_10;
      }
  }
  return(t);
}
static ATerm n_6 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t_24, ATerm s_24, ATerm t)
{
  t = b_74(t);
  {
    static ATerm h_1 (ATerm t)
    {
      ATerm f_10 = NULL;
      f_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, f_10);
      t = a_74(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = s_24;
  return(t);
}
static ATerm o_6 (ATerm x_73 (ATerm), ATerm p_24, ATerm o_24, ATerm t)
{
  static ATerm f_11 (ATerm t)
  {
    ATerm w_10 = NULL,x_10 = NULL,z_10 = NULL;
    w_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_10 = ATgetFirst((ATermList) t);
            z_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_10;
              {
                static ATerm i_1 (ATerm t)
                {
                  t = o_24;
                  return(t);
                }
                t = n_6(x_73, i_1, x_10, z_10, t);
              }
              t = f_11(t);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                ATerm j_3 = NULL,m_3 = NULL,r_1 = NULL;
                t = SSLgetAnnotations(w_10);
                j_3 = t;
                t = z_10;
                t = f_11(t);
                m_3 = t;
                t = (ATerm) ATinsert(CheckATermList(m_3), x_10);
                r_1 = t;
                t = SSLsetAnnotations(r_1, j_3);
              }
            }
        }
      }
    return(t);
  }
  t = p_24;
  t = f_11(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm s_11 = NULL;
  if(match_cons(t, sym__2))
    {
      s_11 = ATgetArgument(t, 0);
      if((s_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm j_36, ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            ATerm c_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = b_7(j_36, k_36, t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = (ATerm) ATempty;
      }
  }
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_11, l_36);
  t = o_6(k_1, m_11, l_36, t);
  l_11 = t;
  t = SSL_table_put(j_36, k_36, l_11);
  t = k_11;
  return(t);
}
static ATerm q_6 (ATerm e_81 (ATerm), ATerm t_36, ATerm s_36, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm t_11 = NULL,w_11 = NULL;
    if(match_cons(t, sym__2))
      {
        t_11 = ATgetArgument(t, 0);
        w_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_36, t_11, w_11);
    t = e_81(t);
    return(t);
  }
  t = s_36;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm u_6 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_access(u_38, v_38);
  return(t);
}
static ATerm b_13 (ATerm j_12, ATerm t)
{
  t = SSL_fclose(j_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_12 = NULL,s_12 = NULL;
  s_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_12 = ATgetArgument(t, 0);
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_12);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            t = b_13(s_12, t);
          }
      }
    }
  else
    {
      t = b_13(s_12, t);
    }
  return(t);
}
static ATerm r_6 (ATerm w_17, ATerm t)
{
  t = SSL_read_term_from_stream(w_17);
  return(t);
}
static ATerm s_6 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_fopen(d_39, e_39);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_stdin_stream();
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stdout_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stderr_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
static ATerm b_16 (ATerm x_13, ATerm t)
{
  ATerm d_14 = NULL;
  t = SSL_explode_term(x_13);
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            d_14 = ATgetFirst((ATermList) m_20);
            {
              ATerm n_20 = (ATerm) ATgetNext((ATermList) m_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_16 (ATerm h_14, ATerm t_14, ATerm u_14, ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,a_15 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(u_14);
  x_14 = t;
  t = h_14;
  if(match_cons(t, sym_Path_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_15, t_14);
  t_1 = t;
  t = SSLsetAnnotations(t_1, x_14);
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(v_14, w_14, t);
  return(t);
}
static ATerm d_16 (ATerm c_15, ATerm d_15, ATerm f_15, ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,p_15 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(f_15);
  i_15 = t;
  t = SSL_is_string(c_15);
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_15, d_15);
  u_1 = t;
  t = SSLsetAnnotations(u_1, i_15);
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(g_15, h_15, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_16(v_15, t);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_16(w_15, x_15, v_15, t);
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  t = d_16(w_15, x_15, v_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_16(v_15, t);
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_t_20;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_16 = NULL,h_16 = NULL,j_16 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 = NULL;
      q_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_16, term_w_20);
      t = t_6(t);
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = debug_1_0(m_1, t);
      _fail(t);
    }
  h_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(j_16, t);
  f_16 = t;
  t = h_16;
  t = fclose_0_0(t);
  t = f_16;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_y_20;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_16 = NULL,u_16 = NULL;
      t_16 = t;
      t = (ATerm) ATinsert(ATempty, term_l_21);
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_16, (ATerm) ATinsert(ATempty, term_l_21));
      t = u_6(t_16, u_16, t);
      LocalPopChoice(k_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_21 = t;
            if((PushChoice() == 0))
              {
                ATerm v_16 = NULL,w_16 = NULL;
                v_16 = t;
                t = (ATerm) ATinsert(ATempty, term_r_9);
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_16, (ATerm) ATinsert(ATempty, term_r_9));
                t = u_6(v_16, w_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_21;
              }
            t = debug_1_0(o_1, t);
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
            t = debug_1_0(s_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_r_21;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,z_17 = NULL;
  s_17 = t;
  t = term_q_18;
  t_17 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  z_17 = t;
  t = SSL_printnl(t_17, z_17);
  t = s_17;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,f_18 = NULL;
  if(match_cons(t, sym__3))
    {
      a_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
      f_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_6(a_18, b_18, f_18, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  h_18 = t;
  t = term_q_18;
  i_18 = t;
  t = (ATerm) ATinsert(ATempty, term_u_21);
  j_18 = t;
  t = SSL_printnl(i_18, j_18);
  t = h_18;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  t = term_q_18;
  l_18 = t;
  t = (ATerm) ATinsert(ATempty, term_t_21);
  m_18 = t;
  t = SSL_printnl(l_18, m_18);
  t = k_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,e_17 = NULL,f_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  x_16 = t;
  t = if_verbose5_1_0(v_1, t);
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm o_17 = NULL,p_17 = NULL;
        t = term_w_21;
        o_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_16);
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Imported_1, x_16));
        t = b_7(o_17, p_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  b_17 = t;
  t = term_w_21;
  l_17 = t;
  t = term_x_21;
  m_17 = t;
  t = (ATerm) ATinsert(ATempty, x_16);
  n_17 = t;
  t = SSL_table_put(l_17, m_17, n_17);
  t = b_17;
  t = if_verbose4_1_0(x_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(z_1, t);
  a_17 = t;
  t = term_w_21;
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, a_17);
  t = q_6(a_2, k_17, a_17, t);
  t = if_verbose6_1_0(b_2, t);
  t = term_w_21;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_16);
  e_17 = t;
  t = (ATerm) ATempty;
  f_17 = t;
  t = SSL_table_put(c_17, e_17, f_17);
  t = (ATerm) ATmakeAppl(sym__3, term_w_21, (ATerm)ATmakeAppl(sym_Imported_1, x_16), (ATerm) ATempty);
  t = if_verbose4_1_0(d_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm p_77 (ATerm), ATerm t)
{
  ATerm r_19 = NULL,u_19 = NULL,x_19 = NULL;
  r_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_19 = ATgetFirst((ATermList) t);
          x_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 = NULL,w_4 = NULL,c_5 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(r_19);
            s_4 = t;
            t = u_19;
            t = p_77(t);
            w_4 = t;
            t = x_19;
            t = filter_1_0(p_77, t);
            c_5 = t;
            t = (ATerm) ATinsert(CheckATermList(c_5), w_4);
            c_2 = t;
            t = SSLsetAnnotations(c_2, s_4);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = x_19;
            t = filter_1_0(p_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm t)
{
  static ATerm a_20 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_67(t);
        t = a_20(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = z_67(t);
      }
    return(t);
  }
  t = a_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_22;
      t = get_config_0_0(t);
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm g_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_20 = NULL;
            t = term_k_22;
            d_20 = t;
            t = SSL_getenv(d_20);
            LocalPopChoice(i_22);
          }
        else
          {
            t = g_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm l_20 = NULL,o_20 = NULL;
  t = term_w_21;
  l_20 = t;
  t = term_n_22;
  o_20 = t;
  t = term_o_22;
  t = b_7(l_20, o_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_22;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  t = if_verbose5_1_0(f_2, t);
  h_20 = t;
  {
    ATerm r_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_20 = NULL,j_20 = NULL;
        t = term_w_21;
        i_20 = t;
        t = term_x_21;
        j_20 = t;
        t = term_v_22;
        t = b_7(i_20, j_20, t);
        LocalPopChoice(u_22);
      }
    else
      {
        t = r_22;
        {
          ATerm k_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_20 = t;
          t = repeat_2_0(j_2, _id, t);
          t = k_20;
        }
      }
  }
  t = h_20;
  t = if_verbose5_1_0(n_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm p_21 (ATerm x_20, ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  t = term_w_21;
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_20);
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Tool_1, x_20));
  t = b_7(a_21, b_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_22 = ATgetFirst((ATermList) t);
      if(match_cons(x_22, sym__2))
        {
          ATerm z_22 = ATgetArgument(x_22, 0);
          z_20 = ATgetArgument(x_22, 1);
        }
      else
        _fail(t);
      {
        ATerm y_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_20;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      e_21 = t;
      if(match_cons(t, sym__2))
        {
          c_21 = ATgetArgument(t, 0);
          d_21 = ATgetArgument(t, 1);
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
                t = term_w_21;
                i_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, c_21);
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Tool_1, c_21));
                t = b_7(i_21, j_21, t);
                {
                  static ATerm t_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((d_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_21 != NULL) && (h_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_2, t);
                }
                t = not_null(h_21);
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
                t = p_21(e_21, t);
              }
          }
        }
      else
        {
          t = p_21(e_21, t);
        }
      t = if_verbose5_1_0(v_2, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm o_21 = NULL,x_5 = NULL,y_5 = NULL;
        o_21 = t;
        t = term_q_18;
        x_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), o_21), term_f_23);
        y_5 = t;
        t = SSL_printnl(x_5, y_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_23), o_21), term_f_23);
        t = if_verbose5_1_0(y_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_22 = NULL,h_22 = NULL;
      h_22 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_22 = ATgetArgument(t, 0);
          {
            ATerm c_6 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(h_22);
            c_6 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_22);
            g_2 = t;
            t = SSLsetAnnotations(g_2, c_6);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_22;
        }
      LocalPopChoice(j_23);
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm j_22 = NULL,m_22 = NULL;
          t = term_h_19;
          t = g_84(t);
          t = xtc_find_0_0(t);
          j_22 = t;
          t = term_h_19;
          t = pass_v_verbose_0_0(t);
          m_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(m_22), j_22), term_l_23), term_k_23);
          return(t);
        }
        t = xtc_transform_file_2_0(c_3, d_3, t);
      }
    }
  else
    {
      t = i_23;
      {
        static ATerm h_3 (ATerm t)
        {
          ATerm s_22 = NULL,t_22 = NULL;
          t = term_h_19;
          t = g_84(t);
          t = xtc_find_0_0(t);
          s_22 = t;
          t = term_h_19;
          t = pass_v_verbose_0_0(t);
          t_22 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_22), s_22), term_l_23), term_k_23);
          return(t);
        }
        t = xtc_transform_term_2_0(f_3, h_3, t);
      }
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(i_3, t);
  {
    ATerm o_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_23 = NULL,q_23 = NULL;
        q_23 = t;
        if(match_cons(t, sym_FILE_1))
          {
            p_23 = ATgetArgument(t, 0);
            {
              ATerm l_7 = NULL,i_2 = NULL;
              t = SSLgetAnnotations(q_23);
              l_7 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
              i_2 = t;
              t = SSLsetAnnotations(i_2, l_7);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_23;
          }
        LocalPopChoice(r_23);
        t = xtc_transform_file_2_0(k_3, pass_verbose_0_0, t);
      }
    else
      {
        t = o_23;
        t = xtc_transform_term_2_0(l_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm v_24 = NULL,x_24 = NULL,y_24 = NULL;
  v_24 = t;
  if(match_cons(t, sym__2))
    {
      x_24 = ATgetArgument(t, 0);
      y_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_24;
  if(match_cons(t, sym_AST_0))
    {
      t = y_24;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = y_24;
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_8 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_8 = ATgetArgument(t, 0);
                    {
                      ATerm g_9 = NULL,b_3 = NULL;
                      t = SSLgetAnnotations(y_24);
                      g_9 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
                      b_3 = t;
                      t = SSLsetAnnotations(b_3, g_9);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = y_24;
                  }
                LocalPopChoice(t_23);
                t = xtc_transform_file_2_0(o_3, pass_verbose_0_0, t);
              }
            else
              {
                t = s_23;
                t = xtc_transform_term_2_0(p_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = y_24;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_23;
      t = get_config_0_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      t = term_x_23;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_y_23;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_y_23;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_z_23;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  o_25 = t;
  t = get_input_type_0_0(t);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
  t = pre_process_sdf_0_0(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_25 = NULL,v_25 = NULL;
        v_25 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_25 = ATgetArgument(t, 0);
            {
              ATerm t_9 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(v_25);
              t_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_25);
              q_3 = t;
              t = SSLsetAnnotations(q_3, t_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_25;
          }
        LocalPopChoice(b_24);
        t = xtc_transform_file_2_0(s_3, pass_verbose_0_0, t);
      }
    else
      {
        t = a_24;
        t = xtc_transform_term_2_0(t_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        c_26 = t;
        t = term_e_24;
        t = get_config_0_0(t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = c_26;
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_26 = NULL,j_26 = NULL;
              j_26 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  i_26 = ATgetArgument(t, 0);
                  {
                    ATerm r_10 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(j_26);
                    r_10 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, i_26);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, r_10);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = j_26;
                }
              LocalPopChoice(g_24);
              t = xtc_transform_file_2_0(u_3, pass_verbose_0_0, t);
            }
          else
            {
              t = f_24;
              t = xtc_transform_term_2_0(v_3, pass_verbose_0_0, t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_6 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = SSL_copy(q_14, r_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,h_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_11 = NULL;
        t = f_27;
        t = r_0(t);
        j_11 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_11;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_11;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_27, j_11);
        t = v_6(h_27, j_11, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_27);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_11 = NULL;
              t = f_27;
              t = r_0(t);
              z_11 = t;
              {
                ATerm l_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_12 = NULL;
                    a_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_12;
                          }
                        else
                          {
                            t = a_12;
                            if((h_27 != t))
                              {
                                _fail(t);
                              }
                            t = a_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_27, z_11);
              t = v_6(h_27, z_11, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_27);
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              t = f_27;
              t = r_0(t);
              if((h_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_27);
            }
        }
      }
  }
  return(t);
}
static ATerm w_6 (ATerm r_35, ATerm s_35, ATerm t)
{
  ATerm m_27 = NULL,o_27 = NULL;
  o_27 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_35, s_35);
        t = b_7(r_35, s_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_24 = ATgetFirst((ATermList) t);
            m_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_24);
        t = SSL_table_put(r_35, s_35, m_27);
        t = (ATerm) ATmakeAppl(sym__3, r_35, s_35, m_27);
      }
    else
      {
        t = m_24;
        t = SSL_table_remove(r_35, s_35);
        t = (ATerm) ATmakeAppl(sym__2, r_35, s_35);
      }
  }
  t = o_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,a_28 = NULL;
  t_27 = t;
  t = q_79(t);
  s_27 = t;
  {
    ATerm r_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL;
        t = term_d_19;
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_d_19);
        t = b_7(s_27, b_28, t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = r_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_27 = ATgetFirst((ATermList) t);
      p_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_19;
  a_28 = t;
  t = SSL_table_put(s_27, a_28, p_27);
  t = r_27;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm c_28 = NULL;
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, c_28);
      t = w_6(s_27, c_28, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = t_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_80(t);
      t = m_80(t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = w_24;
      t = m_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,k_28 = NULL;
  g_28 = t;
  t = p_79(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_28, term_d_19);
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_25 = ATgetArgument(t, 0);
            ATerm d_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_19;
        q_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_28, term_d_19);
        t = b_7(f_28, q_28, t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = (ATerm) ATempty;
      }
  }
  h_28 = t;
  t = term_d_19;
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(h_28), (ATerm) ATempty);
  k_28 = t;
  t = SSL_table_put(f_28, i_28, k_28);
  t = g_28;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_29);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        t = a_29;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm t_28 = NULL;
  static ATerm a_4 (ATerm t)
  {
    ATerm u_28 = NULL;
    u_28 = t;
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_28 = NULL,x_28 = NULL;
          t = term_e_19;
          w_28 = t;
          t = term_d_19;
          x_28 = t;
          t = term_i_25;
          t = b_7(w_28, x_28, t);
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_28 != NULL) && (t_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_28 = ATgetFirst((ATermList) t);
        {
          ATerm j_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = t_28;
    t = map_1_0(b_4, t);
    t = u_28;
    t = end_scope_1_0(c_4, t);
    return(t);
  }
  t = begin_scope_1_0(z_3, t);
  t = restore_always_2_0(l_83, a_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_19;
      t = get_config_0_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
      t = term_m_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_83 (ATerm), ATerm t)
{
  static ATerm d_4 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 = NULL;
        t = term_j_19;
        t = get_config_0_0(t);
        d_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_29);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = term_q_9;
      }
    t = m_83(t);
    t = copy_to_1_0(e_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,j_29 = NULL,m_29 = NULL;
  e_29 = t;
  t = term_h_19;
  t = whoami_0_0(t);
  f_29 = t;
  t = term_q_18;
  j_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_25), f_29), term_r_25);
  m_29 = t;
  t = SSL_printnl(j_29, m_29);
  t = term_o_9;
  g_29 = t;
  t = SSL_exit(g_29);
  t = e_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-k"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm p_29 = NULL,t_29 = NULL,w_29 = NULL;
  p_29 = t;
  t = SSL_string_to_int(p_29);
  t_29 = t;
  t = term_t_25;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, t_29);
  t = e_7(w_29, t_29, t);
  t = p_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  if(match_string(t, "-S"))
    {
      t = c_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_30;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  t = term_h_9;
  d_30 = t;
  t = term_x_25;
  e_30 = t;
  t = term_y_25;
  t = e_7(d_30, e_30, t);
  t = term_z_25;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_30 = NULL,i_30 = NULL,j_30 = NULL;
  f_30 = t;
  t = SSL_string_to_int(f_30);
  i_30 = t;
  t = term_h_9;
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, i_30);
  t = e_7(j_30, i_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm k_30 = NULL,o_30 = NULL;
  t = term_d_26;
  k_30 = t;
  t = term_h_19;
  o_30 = t;
  t = term_e_26;
  t = e_7(k_30, o_30, t);
  t = term_f_26;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = h_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, o_4, r_4, t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            t = Option_3_0(u_4, v_4, a_5, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  if(match_string(t, "-o"))
    {
      t = t_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_30;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  u_30 = t;
  t = term_i_19;
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, u_30);
  t = e_7(v_30, u_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_30);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, e_5, f_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
      t = term_h_19;
      t = p_0(t);
      d_31 = t;
      t = term_o_26;
      e_31 = t;
      t = term_p_26;
      f_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, d_31);
      t = c_7(e_31, f_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm j_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_30 = ATgetFirst((ATermList) t);
          a_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_30;
      t = n_0(t);
      t = b_31;
      t = o_0(t);
      j_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), j_31);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-i"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL;
  m_31 = t;
  t = term_j_19;
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_19, m_31);
  t = e_7(n_31, m_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_31);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_q_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_5, i_5, k_5, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = term_w_23;
  p_31 = t;
  t = term_r_26;
  q_31 = t;
  t = term_s_26;
  t = e_7(p_31, q_31, t);
  t = o_31;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_26;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = term_w_23;
  s_31 = t;
  t = term_u_26;
  t_31 = t;
  t = term_v_26;
  t = e_7(s_31, t_31, t);
  t = r_31;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t = term_e_24;
  v_31 = t;
  t = term_u_26;
  w_31 = t;
  t = term_x_26;
  t = e_7(v_31, w_31, t);
  t = u_31;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  t = term_z_26;
  x_31 = t;
  t = term_h_19;
  y_31 = t;
  t = term_a_27;
  t = e_7(x_31, y_31, t);
  t = term_b_27;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_5, n_5, p_5, t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm g_27 = t;
        int i_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_5, w_5, z_5, t);
            LocalPopChoice(i_27);
          }
        else
          {
            t = g_27;
            {
              ATerm j_27 = t;
              int k_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_6, b_6, d_6, t);
                  LocalPopChoice(k_27);
                }
              else
                {
                  t = j_27;
                  {
                    ATerm l_27 = t;
                    int n_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(n_27);
                      }
                    else
                      {
                        t = l_27;
                        {
                          ATerm q_27 = t;
                          int u_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(u_27);
                            }
                          else
                            {
                              t = q_27;
                              {
                                ATerm v_27 = t;
                                int w_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(e_6, f_6, k_6, t);
                                    LocalPopChoice(w_27);
                                  }
                                else
                                  {
                                    t = v_27;
                                    {
                                      ATerm x_27 = t;
                                      int y_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(y_27);
                                        }
                                      else
                                        {
                                          t = x_27;
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
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,e_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_19;
  t = whoami_0_0(t);
  z_31 = t;
  t = term_q_18;
  b_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_27), z_31);
  e_32 = t;
  t = SSL_printnl(b_32, e_32);
  t = term_o_9;
  a_32 = t;
  t = SSL_exit(a_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm h_33, ATerm i_33, ATerm t)
{
  ATerm e_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_33, i_33);
      LocalPopChoice(j_28);
    }
  else
    {
      t = e_28;
      t = SSL_addr(h_33, i_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_76 (ATerm), ATerm m_76 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_32;
      t = l_76(t);
    }
  else
    {
      ATerm l_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_32 = ATgetFirst((ATermList) t);
          i_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      t = foldr_2_0(l_76, m_76, t);
      l_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_32, l_32);
      t = m_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      t_12 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(t_12, v_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_32 = NULL,o_12 = NULL,p_12 = NULL;
  t = times_0_0(t);
  p_12 = t;
  t = SSL_explode_term(p_12);
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  t = foldr_2_0(z_6, g_7, t);
  o_32 = t;
  t = SSL_TicksToSeconds(o_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_33;
        if((a_33 != t))
          {
            _fail(t);
          }
        t = z_32;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = (ATerm) ATmakeAppl(sym__2, a_33, b_33);
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_33, b_33);
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              t = SSL_gtr(a_33, b_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_33, b_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL;
        t = term_h_9;
        t = get_config_0_0(t);
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, term_o_9);
        t = geq_0_0(t);
        t = f_33;
        t = x_80(t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = f_33;
      }
  }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,q_33 = NULL,r_33 = NULL;
  t = run_time_0_0(t);
  l_33 = t;
  t = term_h_19;
  t = whoami_0_0(t);
  m_33 = t;
  t = term_q_18;
  q_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_28), l_33), term_z_9), m_33);
  r_33 = t;
  t = SSL_printnl(q_33, r_33);
  t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_28), l_33), term_z_9), m_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_25;
  s_33 = t;
  t = SSL_exit(s_33);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  b_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_34 = ATgetArgument(t, 0);
          {
            ATerm m_13 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(b_34);
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_34);
            w_3 = t;
            t = SSLsetAnnotations(w_3, m_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_85 (ATerm), ATerm t)
{
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_29;
      t = get_config_0_0(t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      t = fetch_1_0(j_7, t);
    }
  t = h_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_34 = NULL,k_34 = NULL;
        static ATerm k_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_34)), not_null(k_34));
          return(t);
        }
        t = f_34;
        t = l_0(t);
        if(((j_34 != NULL) && (j_34 != t)))
          _fail(t);
        else
          j_34 = t;
        t = e_34;
        t = k_0(t);
        if(((k_34 != NULL) && (k_34 != t)))
          _fail(t);
        else
          k_34 = t;
        t = f_34;
        t = reverse_acc_2_0(k_0, k_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_19;
      t = l_0(t);
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,g_5 = NULL;
  b_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_35);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_35);
  g_5 = t;
  t = SSLsetAnnotations(g_5, z_34);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm d_35 = NULL;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_35), term_c_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_34 = NULL,y_34 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_28;
      t = get_config_0_0(t);
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      t = fetch_1_0(n_7, t);
    }
  t = term_k_29;
  t = echo_0_0(t);
  t = term_o_26;
  m_34 = t;
  t = term_p_26;
  y_34 = t;
  t = term_l_29;
  t = b_7(m_34, y_34, t);
  t = reverse_acc_2_0(_id, o_7, t);
  t = map_1_0(q_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_70 (ATerm), ATerm t)
{
  static ATerm q_36 (ATerm t)
  {
    ATerm i_36 = NULL,o_36 = NULL,p_36 = NULL;
    i_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_36 = ATgetFirst((ATermList) t);
        p_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_29 = t;
      int q_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_13 = NULL,y_13 = NULL,j_5 = NULL;
          t = SSLgetAnnotations(i_36);
          u_13 = t;
          t = o_36;
          t = d_70(t);
          y_13 = t;
          t = (ATerm) ATinsert(CheckATermList(p_36), y_13);
          j_5 = t;
          t = SSLsetAnnotations(j_5, u_13);
          LocalPopChoice(q_29);
        }
      else
        {
          t = n_29;
          {
            ATerm m_14 = NULL,p_14 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(i_36);
            m_14 = t;
            t = p_36;
            t = q_36(t);
            p_14 = t;
            t = (ATerm) ATinsert(CheckATermList(p_14), o_36);
            l_5 = t;
            t = SSLsetAnnotations(l_5, m_14);
          }
        }
    }
    return(t);
  }
  t = q_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_29 = ATgetFirst((ATermList) t);
                ATerm v_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_36;
          }
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, y_36);
      }
  }
  z_36 = t;
  t = term_m_25;
  a_37 = t;
  t = SSL_printnl(a_37, z_36);
  t = y_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm c_32, ATerm d_32, ATerm t)
{
  t = SSL_strcat(c_32, d_32);
  return(t);
}
ATerm debug_1_0 (ATerm b_65 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  g_37 = t;
  t = b_65(t);
  h_37 = t;
  t = term_q_18;
  i_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_37), h_37);
  j_37 = t;
  t = SSL_printnl(i_37, j_37);
  t = g_37;
  return(t);
}
ATerm map_1_0 (ATerm t_69 (ATerm), ATerm t)
{
  static ATerm f_38 (ATerm t)
  {
    ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
    c_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_38;
      }
    else
      {
        ATerm s_15 = NULL,y_15 = NULL,z_15 = NULL,o_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_38 = ATgetFirst((ATermList) t);
            e_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_38);
        s_15 = t;
        t = d_38;
        t = t_69(t);
        y_15 = t;
        t = e_38;
        t = f_38(t);
        z_15 = t;
        t = (ATerm) ATinsert(CheckATermList(z_15), y_15);
        o_5 = t;
        t = SSLsetAnnotations(o_5, s_15);
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_38 = NULL;
      n_38 = t;
      t = SSL_is_string(n_38);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_7, t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm t_38 = NULL,w_38 = NULL,x_38 = NULL;
              t_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_38 = ATgetArgument(t, 0);
                  t = w_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_38 = ATgetArgument(t, 0);
                      t = w_38;
                      {
                        ATerm l_30 = t;
                        int m_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_30);
                          }
                        else
                          {
                            t = l_30;
                            t = debug_1_0(w_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_39 = NULL,c_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_38 = ATgetArgument(t, 0);
                          x_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_38;
                      t = eval_config_0_0(t);
                      b_39 = t;
                      t = x_38;
                      t = eval_config_0_0(t);
                      c_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
                      t = a_7(b_39, c_39, t);
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
  ATerm k_39 = NULL,l_39 = NULL;
  k_39 = t;
  t = term_n_30;
  l_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, k_39);
  t = b_7(l_39, k_39, t);
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_39 = NULL,n_39 = NULL;
        t = eval_config_0_0(t);
        m_39 = t;
        t = term_n_30;
        n_39 = t;
        t = SSL_table_put(n_39, k_39, m_39);
        t = m_39;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
      }
  }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  t = term_r_30;
  q_39 = t;
  t = term_h_19;
  r_39 = t;
  t = term_s_30;
  t = e_7(q_39, r_39, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_w_30;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm s_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  t = term_r_30;
  x_39 = t;
  t = term_h_19;
  y_39 = t;
  t = term_s_30;
  t = e_7(x_39, y_39, t);
  t = term_m_19;
  s_39 = t;
  t = term_h_19;
  w_39 = t;
  t = term_x_30;
  t = e_7(s_39, w_39, t);
  t = term_y_30;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_8, f_8, i_8, t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      t = Option_3_0(j_8, m_8, n_8, t);
    }
  return(t);
}
static ATerm e_7 (ATerm m_37, ATerm n_37, ATerm t)
{
  ATerm z_39 = NULL;
  t = term_n_30;
  z_39 = t;
  t = SSL_table_put(z_39, m_37, n_37);
  t = (ATerm) ATmakeAppl(sym__3, term_n_30, m_37, n_37);
  return(t);
}
static ATerm b_7 (ATerm d_37, ATerm e_37, ATerm t)
{
  t = SSL_table_get(d_37, e_37);
  return(t);
}
static ATerm c_7 (ATerm m_35, ATerm n_35, ATerm l_35, ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
  {
    ATerm k_31 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_32 = ATgetArgument(t, 0);
            ATerm k_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = b_7(m_35, n_35, t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = k_31;
        t = (ATerm) ATempty;
      }
  }
  i_40 = t;
  t = (ATerm) ATinsert(CheckATermList(i_40), l_35);
  j_40 = t;
  t = SSL_table_put(m_35, n_35, j_40);
  t = h_40;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
      t = term_h_19;
      t = i_0(t);
      u_40 = t;
      t = term_o_26;
      v_40 = t;
      t = term_p_26;
      w_40 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_26, term_p_26, u_40);
      t = c_7(v_40, w_40, u_40, t);
      _fail(t);
    }
  else
    {
      ATerm a_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_40 = ATgetFirst((ATermList) t);
          s_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_40;
      t = d_0(t);
      t = term_h_19;
      t = g_0(t);
      a_41 = t;
      t = (ATerm) ATinsert(CheckATermList(s_40), a_41);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_56 (ATerm), ATerm u_56 (ATerm), ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,v_5 = NULL;
  g_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_41 = ATgetFirst((ATermList) t);
      d_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  b_41 = t;
  t = c_41;
  t = t_56(t);
  e_41 = t;
  t = d_41;
  t = u_56(t);
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(f_41), e_41);
  v_5 = t;
  t = SSLsetAnnotations(v_5, b_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,q_41 = NULL,r_41 = NULL,a_8 = NULL;
  l_41 = t;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_32;
        t = f_87(t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
      }
  }
  t = l_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      o_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  m_41 = t;
  t = term_d_28;
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_28, n_41);
  t = e_7(r_41, n_41, t);
  t = o_41;
  {
    static ATerm g_42 (ATerm t)
    {
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_41 = NULL;
              z_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_41;
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              t = f_87(t);
              t = Cons_2_0(_id, g_42, t);
            }
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          {
            ATerm c_42 = NULL,d_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_42 = ATgetFirst((ATermList) t);
                d_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_42), (ATerm) ATmakeAppl(sym_Undefined_1, c_42));
          }
        }
      return(t);
    }
    t = g_42(t);
  }
  q_41 = t;
  t = (ATerm) ATinsert(CheckATermList(q_41), (ATerm) ATmakeAppl(sym_Program_1, n_41));
  a_8 = t;
  t = SSLsetAnnotations(a_8, m_41);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  if(match_string(t, "--help"))
    {
      t = t_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_42;
        }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL;
  t = term_b_29;
  u_42 = t;
  t = term_h_19;
  v_42 = t;
  t = term_u_32;
  t = e_7(u_42, v_42, t);
  t = term_v_32;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  o_42 = t;
  t = term_o_26;
  q_42 = t;
  t = term_p_26;
  r_42 = t;
  t = (ATerm) ATempty;
  s_42 = t;
  t = SSL_table_put(q_42, r_42, s_42);
  t = o_42;
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_87(t);
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          {
            ATerm c_33 = t;
            int d_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, u_8, x_8, t);
                LocalPopChoice(d_33);
              }
            else
              {
                t = c_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
  }
  {
    ATerm e_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_43 = NULL;
        c_43 = t;
        {
          ATerm k_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_17 = NULL;
              t = c_43;
              {
                ATerm t_33 = t;
                int u_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_29;
                    t = get_config_0_0(t);
                    LocalPopChoice(u_33);
                  }
                else
                  {
                    t = t_33;
                    t = fetch_1_0(y_8, t);
                  }
              }
              t = c_43;
              t = default_system_usage_0_0(t);
              t = term_x_25;
              g_17 = t;
              t = SSL_exit(g_17);
              LocalPopChoice(p_33);
            }
          else
            {
              t = k_33;
              {
                ATerm u_17 = NULL;
                t = term_r_30;
                t = get_config_0_0(t);
                t = c_43;
                t = default_system_about_0_0(t);
                t = term_x_25;
                u_17 = t;
                t = SSL_exit(u_17);
              }
            }
        }
        LocalPopChoice(g_33);
      }
    else
      {
        t = e_33;
        {
          ATerm v_33 = t;
          int w_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
              static ATerm z_8 (ATerm t)
              {
                ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,d_8 = NULL;
                i_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_43);
                g_43 = t;
                t = h_43;
                if(((m_42 != NULL) && (m_42 != t)))
                  _fail(t);
                else
                  m_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_43);
                d_8 = t;
                t = SSLsetAnnotations(d_8, g_43);
                return(t);
              }
              t = fetch_1_0(z_8, t);
              t = term_q_18;
              e_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), term_x_33);
              f_43 = t;
              t = SSL_printnl(e_43, f_43);
              t = (ATerm) ATmakeAppl(sym__2, term_q_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), term_x_33));
              t = default_system_usage_0_0(t);
              t = term_o_9;
              d_43 = t;
              t = SSL_exit(d_43);
              LocalPopChoice(w_33);
            }
          else
            {
              t = v_33;
            }
        }
      }
  }
  n_42 = t;
  t = term_o_26;
  p_42 = t;
  t = SSL_table_destroy(p_42);
  t = n_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
  t = parse_options_1_0(j_85, t);
  n_43 = t;
  t = term_y_33;
  q_43 = t;
  t = SSL_table_create(q_43);
  t = term_y_33;
  o_43 = t;
  t = term_z_33;
  p_43 = t;
  t = SSL_table_put(o_43, p_43, n_43);
  t = n_43;
  t = l_85(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_85, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, c_9, t);
  return(t);
}
