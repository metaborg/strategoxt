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
ATerm term_y_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_31;
ATerm term_l_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_a_30;
ATerm term_q_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_j_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_h_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_z_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_g_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_z_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_z_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_10, term_h_9, term_i_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_m_10, term_n_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_s_10, term_t_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_w_10, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_a_11, term_b_11);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_e_11, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_m_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_r_11, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_g_12, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_e_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_p_13, term_q_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_n_14, term_o_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_f_15, term_h_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_l_15, term_m_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_a_16, term_b_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_g_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_x_16);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_m_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_x_21);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_y_18, term_s_18);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_y_25);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_d_26, term_f_19);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_z_23, term_x_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_h_24, term_x_26);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym__2, term_e_27, term_f_19);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_q_26, term_s_26);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_e_30, term_f_19);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_f_19);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_f_19);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm g_6 (ATerm r_33, ATerm s_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm h_6 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm i_6 (ATerm t_66 (ATerm), ATerm c_172, ATerm a_18, ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t);
static ATerm j_6 (ATerm i_14, ATerm j_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm v_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm i_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm y_85 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm n_7 (ATerm y_6, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm l_6 (ATerm n_81 (ATerm), ATerm z_34, ATerm x_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm y_82 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm a_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm b_83 (ATerm), ATerm t);
static ATerm n_6 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm x_24, ATerm w_24, ATerm t);
static ATerm o_6 (ATerm o_75 (ATerm), ATerm t_24, ATerm s_24, ATerm t);
static ATerm k_1 (ATerm t);
static ATerm p_6 (ATerm j_37, ATerm k_37, ATerm l_37, ATerm t);
static ATerm q_6 (ATerm d_83 (ATerm), ATerm t_37, ATerm s_37, ATerm t);
static ATerm u_6 (ATerm u_39, ATerm v_39, ATerm t);
static ATerm l_13 (ATerm b_13, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_6 (ATerm w_17, ATerm t);
static ATerm s_6 (ATerm d_40, ATerm e_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_16 (ATerm p_14, ATerm t);
static ATerm t_16 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm t);
static ATerm w_16 (ATerm o_15, ATerm p_15, ATerm q_15, ATerm t);
static ATerm t_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm t_22 (ATerm l_21, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm d_86 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm xtc_parse_sdf_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm v_6 (ATerm q_14, ATerm r_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm r_36, ATerm s_36, ATerm t);
ATerm end_scope_1_0 (ATerm k_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_81 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_85 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_85 (ATerm), ATerm t);
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
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_6 (ATerm l_33, ATerm m_33, ATerm t);
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm h_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm need_help_1_0 (ATerm g_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_7 (ATerm g_32, ATerm h_32, ATerm t);
ATerm debug_1_0 (ATerm r_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm e_7 (ATerm m_38, ATerm n_38, ATerm t);
static ATerm b_7 (ATerm d_38, ATerm e_38, ATerm t);
static ATerm c_7 (ATerm m_36, ATerm n_36, ATerm l_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm g_6 (ATerm r_33, ATerm s_33, ATerm t)
{
  ATerm e_5 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_33, s_33);
      LocalPopChoice(y_8);
    }
  else
    {
      t = e_5;
      t = SSL_subtr(r_33, s_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL;
  t = term_z_8;
  {
    ATerm a_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = a_9;
        t = term_h_9;
      }
  }
  b_0 = t;
  t = term_h_9;
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_h_9);
  t = g_6(b_0, m_0, t);
  f_0 = t;
  t = SSL_int_to_string(f_0);
  a_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_z_8);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm v_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm a_1 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_m_9);
      a_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_0, (ATerm) ATinsert(ATempty, term_m_9));
      t = u_6(v_0, a_1, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm h_6 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm b_1 = NULL;
  t = SSL_write_term_to_stream_baf(q_17, r_17);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_1);
  return(t);
}
static ATerm i_6 (ATerm t_66 (ATerm), ATerm c_172, ATerm a_18, ATerm t)
{
  ATerm c_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_172, term_o_9);
  t = t_6(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, a_18);
  t = t_66(t);
  t = fclose_0_0(t);
  t = a_18;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm f_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(match_cons(r_9, sym_Stream_1))
        {
          f_1 = ATgetArgument(r_9, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(f_1, j_1, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  e_1 = t;
  t = xtc_new_file_0_0(t);
  d_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_1, e_1);
  t = i_6(h_0, d_1, e_1, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_1);
  t = xtc_transform_file_2_0(x_84, y_84, t);
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
  ATerm j_2 = NULL,u_2 = NULL,z_2 = NULL,b_3 = NULL;
  j_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm s_0 = NULL,t_0 = NULL;
        t = SSL_int_to_string(u_2);
        s_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_9), s_0), term_s_9);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      ATerm p_1 = NULL,r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_2 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          b_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(z_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_3), term_y_9), p_1), term_w_9), u_2);
      r_1 = t;
      t = SSL_concat_strings(r_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm g_3 = NULL;
  static ATerm j_0 (ATerm t)
  {
    t = v_71(t);
    if(((g_3 != NULL) && (g_3 != t)))
      _fail(t);
    else
      g_3 = t;
    return(t);
  }
  t = fetch_1_0(j_0, t);
  t = not_null(g_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  h_3 = t;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_10 = ATgetArgument(t, 0);
              if((h_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm f_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_16), term_o_16), term_k_16), term_d_16), term_w_15), term_r_15), term_i_15), term_x_14), term_t_14), term_k_14), term_d_14), term_v_13), term_r_13), term_m_13), term_f_13), term_w_12), term_s_12), term_m_12), term_i_12), term_a_12), term_w_11), term_o_11), term_h_11), term_c_11), term_y_10), term_u_10), term_q_10), term_k_10);
        t = fetch_elem_1_0(q_0, t);
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_3 = NULL,y_3 = NULL;
  n_3 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_17 = ATgetArgument(t, 0);
            y_3 = ATgetArgument(t, 1);
            {
              ATerm f_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_17);
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = y_3;
              {
                ATerm i_17 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_17;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_2 = t;
              t = term_j_17;
              l_2 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_2), term_k_17);
              m_2 = t;
              t = SSL_printnl(l_2, m_2);
              t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, e_2), term_k_17));
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              t = n_3;
            }
        }
      }
    else
      {
        t = c_17;
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
ATerm fork_and_wait_1_0 (ATerm i_65 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL;
  n_4 = t;
  t = fork_0_0(t);
  m_4 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_4;
        t = i_65(t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = SSL_waitpid(m_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_17 = ATgetArgument(t, 0);
            if(((ATgetType(p_17) != AT_INT) || (ATgetInt((ATermInt) p_17) != 0)))
              _fail(t);
            {
              ATerm v_17 = ATgetArgument(t, 1);
            }
            {
              ATerm x_17 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL;
  q_4 = t;
  t = y_85(t);
  t = xtc_find_0_0(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm v_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_4, q_4);
      t = j_6(p_4, q_4, t);
      t = term_z_17;
      v_4 = t;
      t = SSL_exit(v_4);
      return(t);
    }
    t = fork_and_wait_1_0(u_0, t);
  }
  t = q_4;
  return(t);
}
ATerm at_end_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  static ATerm v_5 (ATerm t)
  {
    ATerm r_5 = NULL,s_5 = NULL,u_5 = NULL;
    u_5 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_5 = ATgetFirst((ATermList) t);
        s_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_2 = NULL,v_2 = NULL,n_1 = NULL;
          t = SSLgetAnnotations(u_5);
          r_2 = t;
          t = s_5;
          t = v_5(t);
          v_2 = t;
          t = (ATerm) ATinsert(CheckATermList(v_2), r_5);
          n_1 = t;
          t = SSLsetAnnotations(n_1, r_2);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_5;
        t = a_72(t);
      }
    return(t);
  }
  t = v_5(t);
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
      static ATerm w_0 (ATerm t)
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
      t = at_end_1_0(w_0, t);
    }
  return(t);
}
static ATerm n_7 (ATerm y_6, ATerm t)
{
  ATerm z_6 = NULL;
  t = SSL_explode_term(y_6);
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_7 = NULL,i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      i_7 = ATgetArgument(t, 1);
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_0 (ATerm t)
            {
              t = i_7;
              return(t);
            }
            t = f_7;
            t = at_end_1_0(x_0, t);
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            t = n_7(j_7, t);
          }
      }
    }
  else
    {
      t = n_7(j_7, t);
    }
  return(t);
}
static ATerm l_6 (ATerm n_81 (ATerm), ATerm z_34, ATerm x_34, ATerm t)
{
  ATerm q_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,x_7 = NULL,y_7 = NULL;
  u_7 = t;
  t = n_81(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_7, z_34, x_34);
  t = c_7(q_7, z_34, x_34, t);
  {
    ATerm o_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL;
        t = term_s_18;
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_s_18);
        t = b_7(q_7, z_7, t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_7 = ATgetFirst((ATermList) t);
      t_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_18;
  x_7 = t;
  t = (ATerm) ATinsert(CheckATermList(t_7), (ATerm) ATinsert(CheckATermList(s_7), z_34));
  y_7 = t;
  t = SSL_table_put(q_7, x_7, y_7);
  t = u_7;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  ATerm t_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,i_3 = NULL;
      l_8 = t;
      t = term_w_18;
      i_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_8, term_w_18);
      t = a_7(l_8, i_3, t);
      e_8 = t;
      t = SSL_mkstemp(e_8);
      LocalPopChoice(v_18);
    }
  else
    {
      t = t_18;
      {
        ATerm o_8 = NULL;
        t = term_x_18;
        o_8 = t;
        t = SSL_perror(o_8);
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
static ATerm y_0 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  t = P__tmpdir_0_0(t);
  v_8 = t;
  t = term_b_19;
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_8, term_b_19);
  t = a_7(v_8, w_8, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_19;
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_8, term_f_19);
  t = l_6(y_0, t_8, u_8, t);
  t = SSL_close(q_8);
  t = t_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  b_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_9 = NULL,e_9 = NULL;
      t = b_9;
      t = xtc_new_file_0_0(t);
      d_9 = t;
      t = r_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATinsert(ATempty, d_9), term_g_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_9);
    }
  else
    {
      ATerm g_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_9;
      t = xtc_new_file_0_0(t);
      g_9 = t;
      t = r_0(t);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_9), term_g_19), c_9), term_h_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    ATerm j_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL;
        t = term_z_8;
        t = get_config_0_0(t);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, term_s_10);
        t = geq_0_0(t);
        t = l_9;
        t = y_82(t);
        LocalPopChoice(k_19);
      }
    else
      {
        t = j_19;
        t = l_9;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_l_19);
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
  ATerm p_9 = NULL;
  static ATerm g_1 (ATerm t)
  {
    ATerm q_9 = NULL,t_9 = NULL;
    q_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), q_9);
    t = b_7(not_null(p_9), q_9, t);
    t_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_9, t_9);
    return(t);
  }
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = SSL_table_keys(p_9);
  t = map_1_0(g_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL;
        t = term_z_8;
        t = get_config_0_0(t);
        x_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_9, term_a_16);
        t = geq_0_0(t);
        t = v_9;
        t = a_83(t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = v_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm o_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        t = term_z_8;
        t = get_config_0_0(t);
        e_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_q_12);
        t = geq_0_0(t);
        t = b_10;
        t = z_82(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = o_19;
        t = b_10;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_83 (ATerm), ATerm t)
{
  ATerm h_10 = NULL;
  h_10 = t;
  {
    ATerm r_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_10 = NULL;
        t = term_z_8;
        t = get_config_0_0(t);
        j_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_10, term_w_10);
        t = geq_0_0(t);
        t = h_10;
        t = b_83(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = r_19;
        t = h_10;
      }
  }
  return(t);
}
static ATerm n_6 (ATerm r_75 (ATerm), ATerm s_75 (ATerm), ATerm x_24, ATerm w_24, ATerm t)
{
  t = s_75(t);
  {
    static ATerm h_1 (ATerm t)
    {
      ATerm o_10 = NULL;
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_24, o_10);
      t = r_75(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
  }
  t = w_24;
  return(t);
}
static ATerm o_6 (ATerm o_75 (ATerm), ATerm t_24, ATerm s_24, ATerm t)
{
  static ATerm q_11 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,n_11 = NULL;
    i_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_11 = ATgetFirst((ATermList) t);
            n_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_11;
              {
                static ATerm i_1 (ATerm t)
                {
                  t = s_24;
                  return(t);
                }
                t = n_6(o_75, i_1, j_11, n_11, t);
              }
              t = q_11(t);
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              {
                ATerm o_3 = NULL,v_3 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(i_11);
                o_3 = t;
                t = n_11;
                t = q_11(t);
                v_3 = t;
                t = (ATerm) ATinsert(CheckATermList(v_3), j_11);
                q_1 = t;
                t = SSLsetAnnotations(q_1, o_3);
              }
            }
        }
      }
    return(t);
  }
  t = t_24;
  t = q_11(t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      if((c_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm j_37, ATerm k_37, ATerm l_37, ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL;
  t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_37, k_37);
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
        t = (ATerm) ATmakeAppl(sym__2, j_37, k_37);
        t = b_7(j_37, k_37, t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
  }
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_11, l_37);
  t = o_6(k_1, v_11, l_37, t);
  u_11 = t;
  t = SSL_table_put(j_37, k_37, u_11);
  t = t_11;
  return(t);
}
static ATerm q_6 (ATerm d_83 (ATerm), ATerm t_37, ATerm s_37, ATerm t)
{
  static ATerm l_1 (ATerm t)
  {
    ATerm d_12 = NULL,e_12 = NULL;
    if(match_cons(t, sym__2))
      {
        d_12 = ATgetArgument(t, 0);
        e_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, t_37, d_12, e_12);
    t = d_83(t);
    return(t);
  }
  t = s_37;
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm u_6 (ATerm u_39, ATerm v_39, ATerm t)
{
  t = SSL_access(u_39, v_39);
  return(t);
}
static ATerm l_13 (ATerm b_13, ATerm t)
{
  t = SSL_fclose(b_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  h_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_13 = ATgetArgument(t, 0);
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_13);
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            t = l_13(h_13, t);
          }
      }
    }
  else
    {
      t = l_13(h_13, t);
    }
  return(t);
}
static ATerm r_6 (ATerm w_17, ATerm t)
{
  t = SSL_read_term_from_stream(w_17);
  return(t);
}
static ATerm s_6 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm o_13 = NULL;
  t = SSL_fopen(d_40, e_40);
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_stdin_stream();
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  t = SSL_stdout_stream();
  y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stderr_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
static ATerm s_16 (ATerm p_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = SSL_explode_term(p_14);
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
          {
            s_14 = ATgetFirst((ATermList) h_20);
            {
              ATerm i_20 = (ATerm) ATgetNext((ATermList) h_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_16 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,j_15 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(a_15);
  e_15 = t;
  t = y_14;
  if(match_cons(t, sym_Path_1))
    {
      j_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_15, z_14);
  t_1 = t;
  t = SSLsetAnnotations(t_1, e_15);
  if(match_cons(t, sym__2))
    {
      c_15 = ATgetArgument(t, 0);
      d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(c_15, d_15, t);
  return(t);
}
static ATerm w_16 (ATerm o_15, ATerm p_15, ATerm q_15, ATerm t)
{
  ATerm u_15 = NULL,x_15 = NULL,z_15 = NULL,f_16 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(q_15);
  z_15 = t;
  t = SSL_is_string(o_15);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_16, p_15);
  u_1 = t;
  t = SSLsetAnnotations(u_1, z_15);
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(u_15, x_15, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_16(p_16, t);
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            {
              ATerm l_20 = t;
              int m_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_16(q_16, r_16, p_16, t);
                  LocalPopChoice(m_20);
                }
              else
                {
                  t = l_20;
                  t = w_16(q_16, r_16, p_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_16(p_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_16 = NULL,a_17 = NULL,b_17 = NULL,l_17 = NULL;
  l_17 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_17, term_p_20);
        t = t_6(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        {
          ATerm w_4 = NULL,c_5 = NULL;
          t = term_q_20;
          c_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_20, l_17);
          t = a_7(c_5, l_17, t);
          w_4 = t;
          t = SSL_perror(w_4);
          _fail(t);
        }
      }
  }
  a_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(b_17, t);
  y_16 = t;
  t = a_17;
  t = fclose_0_0(t);
  t = y_16;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_r_20;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_s_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_20 = t;
  int x_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_17 = NULL,t_17 = NULL;
      s_17 = t;
      t = (ATerm) ATinsert(ATempty, term_a_21);
      t_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_17, (ATerm) ATinsert(ATempty, term_a_21));
      t = u_6(s_17, t_17, t);
      LocalPopChoice(x_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_20;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_21 = t;
            if((PushChoice() == 0))
              {
                ATerm u_17 = NULL,b_18 = NULL;
                u_17 = t;
                t = (ATerm) ATinsert(ATempty, term_m_9);
                b_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_17, (ATerm) ATinsert(ATempty, term_m_9));
                t = u_6(u_17, b_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_21;
              }
            t = debug_1_0(m_1, t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = debug_1_0(o_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_m_21;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,c_19 = NULL;
  z_18 = t;
  t = term_j_17;
  a_19 = t;
  t = (ATerm) ATinsert(ATempty, term_n_21);
  c_19 = t;
  t = SSL_printnl(a_19, c_19);
  t = z_18;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__3))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
      i_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = p_6(d_19, e_19, i_19, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm p_19 = NULL,s_19 = NULL,t_19 = NULL;
  p_19 = t;
  t = term_j_17;
  s_19 = t;
  t = (ATerm) ATinsert(ATempty, term_o_21);
  t_19 = t;
  t = SSL_printnl(s_19, t_19);
  t = p_19;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t = term_j_17;
  w_19 = t;
  t = (ATerm) ATinsert(ATempty, term_n_21);
  x_19 = t;
  t = SSL_printnl(w_19, x_19);
  t = u_19;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,p_18 = NULL;
  d_18 = t;
  t = if_verbose5_1_0(s_1, t);
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_18 = NULL,u_18 = NULL;
        t = term_w_21;
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_18);
        u_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Imported_1, d_18));
        t = b_7(q_18, u_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  f_18 = t;
  t = term_w_21;
  m_18 = t;
  t = term_x_21;
  n_18 = t;
  t = (ATerm) ATinsert(ATempty, d_18);
  p_18 = t;
  t = SSL_table_put(m_18, n_18, p_18);
  t = f_18;
  t = if_verbose4_1_0(w_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(y_1, t);
  e_18 = t;
  t = term_w_21;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, e_18);
  t = q_6(z_1, l_18, e_18, t);
  t = if_verbose6_1_0(a_2, t);
  t = term_w_21;
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_18);
  h_18 = t;
  t = (ATerm) ATempty;
  i_18 = t;
  t = SSL_table_put(g_18, h_18, i_18);
  t = (ATerm) ATmakeAppl(sym__3, term_w_21, (ATerm)ATmakeAppl(sym_Imported_1, d_18), (ATerm) ATempty);
  t = if_verbose4_1_0(b_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_20;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_20 = ATgetFirst((ATermList) t);
          v_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_21 = t;
        int z_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_5 = NULL,y_5 = NULL,z_5 = NULL,c_2 = NULL;
            t = SSLgetAnnotations(t_20);
            k_5 = t;
            t = u_20;
            t = j_79(t);
            y_5 = t;
            t = v_20;
            t = filter_1_0(j_79, t);
            z_5 = t;
            t = (ATerm) ATinsert(CheckATermList(z_5), y_5);
            c_2 = t;
            t = SSLsetAnnotations(c_2, k_5);
            LocalPopChoice(z_21);
          }
        else
          {
            t = y_21;
            t = v_20;
            t = filter_1_0(j_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm o_69 (ATerm), ATerm p_69 (ATerm), ATerm t)
{
  static ATerm y_20 (ATerm t)
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_69(t);
        t = y_20(t);
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        t = p_69(t);
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_22;
      t = get_config_0_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = c_22;
      {
        ATerm h_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL;
            t = term_k_22;
            z_20 = t;
            t = SSL_getenv(z_20);
            LocalPopChoice(j_22);
          }
        else
          {
            t = h_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  t = term_w_21;
  f_21 = t;
  t = term_m_22;
  g_21 = t;
  t = term_n_22;
  t = b_7(f_21, g_21, t);
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
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_21 = NULL;
  t = if_verbose5_1_0(d_2, t);
  b_21 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_21 = NULL,d_21 = NULL;
        t = term_w_21;
        c_21 = t;
        t = term_x_21;
        d_21 = t;
        t = term_u_22;
        t = b_7(c_21, d_21, t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm e_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          e_21 = t;
          t = repeat_2_0(i_2, _id, t);
          t = e_21;
        }
      }
  }
  t = b_21;
  t = if_verbose5_1_0(k_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm t_22 (ATerm l_21, ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
  t = term_w_21;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_21);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Tool_1, l_21));
  t = b_7(q_21, r_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_22 = ATgetFirst((ATermList) t);
      if(match_cons(w_22, sym__2))
        {
          ATerm y_22 = ATgetArgument(w_22, 0);
          p_21 = ATgetArgument(w_22, 1);
        }
      else
        _fail(t);
      {
        ATerm x_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_21;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_w_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_21 = NULL,t_21 = NULL,v_21 = NULL;
      t = if_verbose5_1_0(o_2, t);
      t = xtc_load_0_0(t);
      v_21 = t;
      if(match_cons(t, sym__2))
        {
          s_21 = ATgetArgument(t, 0);
          t_21 = ATgetArgument(t, 1);
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_22 = NULL,f_22 = NULL,i_22 = NULL;
                t = term_w_21;
                f_22 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_21);
                i_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_21, (ATerm) ATmakeAppl(sym_Tool_1, s_21));
                t = b_7(f_22, i_22, t);
                {
                  static ATerm q_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((d_22 != NULL) && (d_22 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(q_2, t);
                }
                t = not_null(d_22);
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = t_22(v_21, t);
              }
          }
        }
      else
        {
          t = t_22(v_21, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm s_22 = NULL,k_6 = NULL,m_6 = NULL;
        s_22 = t;
        t = term_j_17;
        k_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_23), s_22), term_e_23);
        m_6 = t;
        t = SSL_printnl(k_6, m_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_23), s_22), term_e_23);
        t = if_verbose5_1_0(w_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_23 = NULL,q_23 = NULL;
      q_23 = t;
      if(match_cons(t, sym_FILE_1))
        {
          p_23 = ATgetArgument(t, 0);
          {
            ATerm o_7 = NULL,f_2 = NULL;
            t = SSLgetAnnotations(q_23);
            o_7 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, p_23);
            f_2 = t;
            t = SSLsetAnnotations(f_2, o_7);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_23;
        }
      LocalPopChoice(i_23);
      {
        static ATerm a_3 (ATerm t)
        {
          ATerm r_23 = NULL,t_23 = NULL;
          t = term_f_19;
          t = d_86(t);
          t = xtc_find_0_0(t);
          r_23 = t;
          t = term_f_19;
          t = pass_v_verbose_0_0(t);
          t_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_23), r_23), term_k_23), term_j_23);
          return(t);
        }
        t = xtc_transform_file_2_0(y_2, a_3, t);
      }
    }
  else
    {
      t = h_23;
      {
        static ATerm e_3 (ATerm t)
        {
          ATerm x_23 = NULL,y_23 = NULL;
          t = term_f_19;
          t = d_86(t);
          t = xtc_find_0_0(t);
          x_23 = t;
          t = term_f_19;
          t = pass_v_verbose_0_0(t);
          y_23 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_23), x_23), term_k_23), term_j_23);
          return(t);
        }
        t = xtc_transform_term_2_0(d_3, e_3, t);
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_l_23;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(f_3, t);
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,p_24 = NULL;
        p_24 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_24 = ATgetArgument(t, 0);
            {
              ATerm c_8 = NULL,h_2 = NULL;
              t = SSLgetAnnotations(p_24);
              c_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_24);
              h_2 = t;
              t = SSLsetAnnotations(h_2, c_8);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = p_24;
          }
        LocalPopChoice(o_23);
        t = xtc_transform_file_2_0(j_3, pass_verbose_0_0, t);
      }
    else
      {
        t = n_23;
        t = xtc_transform_term_2_0(k_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_m_23;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_25;
  if(match_cons(t, sym_AST_0))
    {
      t = r_25;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = r_25;
          {
            ATerm s_23 = t;
            int u_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_9 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    k_9 = ATgetArgument(t, 0);
                    {
                      ATerm d_10 = NULL,c_3 = NULL;
                      t = SSLgetAnnotations(r_25);
                      d_10 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, k_9);
                      c_3 = t;
                      t = SSLsetAnnotations(c_3, d_10);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = r_25;
                  }
                LocalPopChoice(u_23);
                t = xtc_transform_file_2_0(l_3, pass_verbose_0_0, t);
              }
            else
              {
                t = s_23;
                t = xtc_transform_term_2_0(m_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = r_25;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_23;
      t = get_config_0_0(t);
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = term_a_24;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL;
  g_26 = t;
  t = get_input_type_0_0(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, g_26);
  t = pre_process_sdf_0_0(t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_26 = NULL,o_26 = NULL;
        o_26 = t;
        if(match_cons(t, sym_FILE_1))
          {
            n_26 = ATgetArgument(t, 0);
            {
              ATerm p_10 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(o_26);
              p_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_26);
              q_3 = t;
              t = SSLsetAnnotations(q_3, p_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = o_26;
          }
        LocalPopChoice(e_24);
        t = xtc_transform_file_2_0(p_3, pass_verbose_0_0, t);
      }
    else
      {
        t = d_24;
        t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_26 = NULL;
        r_26 = t;
        t = term_h_24;
        t = get_config_0_0(t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = r_26;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm i_24 = t;
          int j_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_26 = NULL,a_27 = NULL;
              a_27 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  z_26 = ATgetArgument(t, 0);
                  {
                    ATerm f_11 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(a_27);
                    f_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, f_11);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = a_27;
                }
              LocalPopChoice(j_24);
              t = xtc_transform_file_2_0(t_3, pass_verbose_0_0, t);
            }
          else
            {
              t = i_24;
              t = xtc_transform_term_2_0(u_3, pass_verbose_0_0, t);
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
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm e_28 = NULL,g_28 = NULL;
  e_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_12 = NULL;
        t = e_28;
        t = o_0(t);
        f_12 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = f_12;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = f_12;
          }
        t = (ATerm) ATmakeAppl(sym__2, g_28, f_12);
        t = v_6(g_28, f_12, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_28);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm m_24 = t;
          int n_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_12 = NULL;
              t = e_28;
              t = o_0(t);
              o_12 = t;
              {
                ATerm q_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_12 = NULL;
                    p_12 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_12;
                          }
                        else
                          {
                            t = p_12;
                            if((g_28 != t))
                              {
                                _fail(t);
                              }
                            t = p_12;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_24;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, g_28, o_12);
              t = v_6(g_28, o_12, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_28);
              LocalPopChoice(n_24);
            }
          else
            {
              t = m_24;
              t = e_28;
              t = o_0(t);
              if((g_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_28);
            }
        }
      }
  }
  return(t);
}
static ATerm w_6 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  n_28 = t;
  {
    ATerm r_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = b_7(r_36, s_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_24 = ATgetFirst((ATermList) t);
            m_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_24);
        t = SSL_table_put(r_36, s_36, m_28);
        t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, m_28);
      }
    else
      {
        t = r_24;
        t = SSL_table_remove(r_36, s_36);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
      }
  }
  t = n_28;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,s_28 = NULL,t_28 = NULL;
  s_28 = t;
  t = k_81(t);
  q_28 = t;
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL;
        t = term_s_18;
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_28, term_s_18);
        t = b_7(q_28, u_28, t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_s_18;
  t_28 = t;
  t = SSL_table_put(q_28, t_28, o_28);
  t = p_28;
  {
    static ATerm x_3 (ATerm t)
    {
      ATerm v_28 = NULL;
      v_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, v_28);
      t = w_6(q_28, v_28, t);
      return(t);
    }
    t = map_1_0(x_3, t);
  }
  t = s_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm a_25 = t;
  int b_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_82(t);
      t = l_82(t);
      LocalPopChoice(b_25);
    }
  else
    {
      t = a_25;
      t = l_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
  y_28 = t;
  t = j_81(t);
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_28, term_s_18);
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_25 = ATgetArgument(t, 0);
            ATerm f_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_18;
        j_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_28, term_s_18);
        t = b_7(x_28, j_29, t);
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = (ATerm) ATempty;
      }
  }
  z_28 = t;
  t = term_s_18;
  a_29 = t;
  t = (ATerm) ATinsert(CheckATermList(z_28), (ATerm) ATempty);
  b_29 = t;
  t = SSL_table_put(x_28, a_29, b_29);
  t = y_28;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_y_18;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_30);
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        t = b_30;
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm p_29 = NULL;
  static ATerm a_4 (ATerm t)
  {
    ATerm s_29 = NULL;
    s_29 = t;
    {
      ATerm i_25 = t;
      int j_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_29 = NULL,y_29 = NULL;
          t = term_y_18;
          v_29 = t;
          t = term_s_18;
          y_29 = t;
          t = term_k_25;
          t = b_7(v_29, y_29, t);
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
        if(((p_29 != NULL) && (p_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_29 = ATgetFirst((ATermList) t);
        {
          ATerm l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_29;
    t = map_1_0(b_4, t);
    t = s_29;
    t = end_scope_1_0(c_4, t);
    return(t);
  }
  t = begin_scope_1_0(z_3, t);
  t = restore_always_2_0(k_85, a_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_19;
      t = get_config_0_0(t);
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      t = term_o_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  static ATerm d_4 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_30 = NULL;
        t = term_h_19;
        t = get_config_0_0(t);
        g_30 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, g_30);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = term_i_9;
      }
    t = l_85(t);
    t = copy_to_1_0(e_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  k_30 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  o_30 = t;
  t = term_j_17;
  q_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_25), o_30), term_u_25);
  r_30 = t;
  t = SSL_printnl(q_30, r_30);
  t = term_h_9;
  p_30 = t;
  t = SSL_exit(p_30);
  t = k_30;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_30 = NULL;
  t_30 = t;
  if(match_string(t, "-k"))
    {
      t = t_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_30;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t = SSL_string_to_int(u_30);
  v_30 = t;
  t = term_w_25;
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, v_30);
  t = e_7(w_30, v_30, t);
  t = u_30;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, h_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_string(t, "-S"))
    {
      t = y_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_30;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  t = term_z_8;
  z_30 = t;
  t = term_y_25;
  a_31 = t;
  t = term_z_25;
  t = e_7(z_30, a_31, t);
  t = term_a_26;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_b_26;
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
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  t = SSL_string_to_int(b_31);
  c_31 = t;
  t = term_z_8;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_8, c_31);
  t = e_7(d_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_31);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  t = term_d_26;
  e_31 = t;
  t = term_f_19;
  f_31 = t;
  t = term_e_26;
  t = e_7(e_31, f_31, t);
  t = term_h_26;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, j_4, k_4, t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
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
            t = Option_3_0(s_4, t_4, u_4, t);
          }
      }
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm h_31 = NULL;
  h_31 = t;
  if(match_string(t, "-o"))
    {
      t = h_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_31;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  t = term_g_19;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, i_31);
  t = e_7(j_31, i_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_31);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, d_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
      t = term_f_19;
      t = n_0(t);
      r_31 = t;
      t = term_q_26;
      s_31 = t;
      t = term_s_26;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_26, term_s_26, r_31);
      t = c_7(s_31, t_31, r_31, t);
      _fail(t);
    }
  else
    {
      ATerm x_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_31 = ATgetFirst((ATermList) t);
          o_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_31;
      t = k_0(t);
      t = p_31;
      t = l_0(t);
      x_31 = t;
      t = (ATerm) ATinsert(CheckATermList(q_31), x_31);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  if(match_string(t, "-i"))
    {
      t = z_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_31;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  t = term_h_19;
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_19, a_32);
  t = e_7(b_32, a_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_32);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_t_26;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, g_5, h_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  t = term_z_23;
  d_32 = t;
  t = term_u_26;
  e_32 = t;
  t = term_v_26;
  t = e_7(d_32, e_32, t);
  t = c_32;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm f_32 = NULL,i_32 = NULL,j_32 = NULL;
  f_32 = t;
  t = term_z_23;
  i_32 = t;
  t = term_x_26;
  j_32 = t;
  t = term_y_26;
  t = e_7(i_32, j_32, t);
  t = f_32;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_b_27;
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
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  t = term_h_24;
  l_32 = t;
  t = term_x_26;
  m_32 = t;
  t = term_c_27;
  t = e_7(l_32, m_32, t);
  t = k_32;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_d_27;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = term_e_27;
  n_32 = t;
  t = term_f_19;
  o_32 = t;
  t = term_f_27;
  t = e_7(n_32, o_32, t);
  t = term_g_27;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, n_5, o_5, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(q_5, t_5, x_5, t);
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm m_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_6, b_6, c_6, t);
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = m_27;
                  {
                    ATerm o_27 = t;
                    int p_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(p_27);
                      }
                    else
                      {
                        t = o_27;
                        {
                          ATerm q_27 = t;
                          int r_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(r_27);
                            }
                          else
                            {
                              t = q_27;
                              {
                                ATerm s_27 = t;
                                int t_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(d_6, e_6, f_6, t);
                                    LocalPopChoice(t_27);
                                  }
                                else
                                  {
                                    t = s_27;
                                    {
                                      ATerm u_27 = t;
                                      int v_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(v_27);
                                        }
                                      else
                                        {
                                          t = u_27;
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
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_19;
  t = whoami_0_0(t);
  p_32 = t;
  t = term_j_17;
  r_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_27), p_32);
  s_32 = t;
  t = SSL_printnl(r_32, s_32);
  t = term_h_9;
  q_32 = t;
  t = SSL_exit(q_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_27;
  t = get_config_0_0(t);
  return(t);
}
static ATerm x_6 (ATerm l_33, ATerm m_33, ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_33, m_33);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      t = SSL_addr(l_33, m_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_32;
      t = f_78(t);
    }
  else
    {
      ATerm z_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          w_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      t = foldr_2_0(f_78, g_78, t);
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_32, z_32);
      t = g_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(c_13, d_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_33 = NULL,x_12 = NULL,y_12 = NULL;
  t = times_0_0(t);
  y_12 = t;
  t = SSL_explode_term(y_12);
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      x_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_12;
  t = foldr_2_0(d_7, g_7, t);
  c_33 = t;
  t = SSL_TicksToSeconds(c_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,t_33 = NULL;
  p_33 = t;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_33;
        if((q_33 != t))
          {
            _fail(t);
          }
        t = p_33;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATmakeAppl(sym__2, q_33, t_33);
        {
          ATerm d_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_33, t_33);
              LocalPopChoice(f_28);
            }
          else
            {
              t = d_28;
              t = SSL_gtr(q_33, t_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_33, t_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL;
        t = term_z_8;
        t = get_config_0_0(t);
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_33, term_h_9);
        t = geq_0_0(t);
        t = x_33;
        t = w_82(t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = x_33;
      }
  }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL;
  t = run_time_0_0(t);
  b_34 = t;
  t = term_f_19;
  t = whoami_0_0(t);
  c_34 = t;
  t = term_j_17;
  e_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_28), b_34), term_w_9), c_34);
  f_34 = t;
  t = SSL_printnl(e_34, f_34);
  t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_28), b_34), term_w_9), c_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_25;
  g_34 = t;
  t = SSL_exit(g_34);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  p_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_34 = ATgetArgument(t, 0);
          {
            ATerm w_13 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(p_34);
            w_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_34);
            w_3 = t;
            t = SSLsetAnnotations(w_3, w_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_28;
      t = get_config_0_0(t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = fetch_1_0(k_7, t);
    }
  t = g_87(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_35 = NULL,j_35 = NULL;
        static ATerm l_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), not_null(j_35));
          return(t);
        }
        t = e_35;
        t = i_0(t);
        if(((i_35 != NULL) && (i_35 != t)))
          _fail(t);
        else
          i_35 = t;
        t = d_35;
        t = g_0(t);
        if(((j_35 != NULL) && (j_35 != t)))
          _fail(t);
        else
          j_35 = t;
        t = e_35;
        t = reverse_acc_2_0(g_0, l_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,i_5 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_35);
  i_5 = t;
  t = SSLsetAnnotations(i_5, n_35);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_35), term_w_28);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_27;
      t = get_config_0_0(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = fetch_1_0(m_7, t);
    }
  t = term_e_29;
  t = echo_0_0(t);
  t = term_q_26;
  l_35 = t;
  t = term_s_26;
  m_35 = t;
  t = term_f_29;
  t = b_7(l_35, m_35, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm t_71 (ATerm), ATerm t)
{
  static ATerm z_36 (ATerm t)
  {
    ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
    w_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_36 = ATgetFirst((ATermList) t);
        y_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_29 = t;
      int h_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_14 = NULL,m_14 = NULL,l_5 = NULL;
          t = SSLgetAnnotations(w_36);
          h_14 = t;
          t = x_36;
          t = t_71(t);
          m_14 = t;
          t = (ATerm) ATinsert(CheckATermList(y_36), m_14);
          l_5 = t;
          t = SSLsetAnnotations(l_5, h_14);
          LocalPopChoice(h_29);
        }
      else
        {
          t = g_29;
          {
            ATerm g_15 = NULL,n_15 = NULL,m_5 = NULL;
            t = SSLgetAnnotations(w_36);
            g_15 = t;
            t = y_36;
            t = z_36(t);
            n_15 = t;
            t = (ATerm) ATinsert(CheckATermList(n_15), x_36);
            m_5 = t;
            t = SSLsetAnnotations(m_5, g_15);
          }
        }
    }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  {
    ATerm i_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_29 = ATgetFirst((ATermList) t);
                ATerm m_29 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_37;
          }
        LocalPopChoice(k_29);
      }
    else
      {
        t = i_29;
        t = (ATerm) ATinsert(ATempty, d_37);
      }
  }
  e_37 = t;
  t = term_o_25;
  f_37 = t;
  t = SSL_printnl(f_37, e_37);
  t = d_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_27;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm g_32, ATerm h_32, ATerm t)
{
  t = SSL_strcat(g_32, h_32);
  return(t);
}
ATerm debug_1_0 (ATerm r_66 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  o_37 = t;
  t = r_66(t);
  p_37 = t;
  t = term_j_17;
  q_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_37), p_37);
  r_37 = t;
  t = SSL_printnl(q_37, r_37);
  t = o_37;
  return(t);
}
ATerm map_1_0 (ATerm j_71 (ATerm), ATerm t)
{
  static ATerm o_38 (ATerm t)
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
    j_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_38;
      }
    else
      {
        ATerm c_16 = NULL,h_16 = NULL,i_16 = NULL,p_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_38 = ATgetFirst((ATermList) t);
            l_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_38);
        c_16 = t;
        t = k_38;
        t = j_71(t);
        h_16 = t;
        t = l_38;
        t = o_38(t);
        i_16 = t;
        t = (ATerm) ATinsert(CheckATermList(i_16), h_16);
        p_5 = t;
        t = SSLsetAnnotations(p_5, c_16);
      }
    return(t);
  }
  t = o_38(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm n_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = n_29;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_39 = NULL;
      b_39 = t;
      t = SSL_is_string(b_39);
      LocalPopChoice(t_29);
    }
  else
    {
      t = r_29;
      {
        ATerm u_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_7, t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = u_29;
            {
              ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
              h_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  i_39 = ATgetArgument(t, 0);
                  t = i_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      i_39 = ATgetArgument(t, 0);
                      t = i_39;
                      {
                        ATerm x_29 = t;
                        int z_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = x_29;
                            t = debug_1_0(w_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm n_39 = NULL,o_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          i_39 = ATgetArgument(t, 0);
                          j_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_39;
                      t = eval_config_0_0(t);
                      n_39 = t;
                      t = j_39;
                      t = eval_config_0_0(t);
                      o_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, n_39, o_39);
                      t = a_7(n_39, o_39, t);
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
  ATerm t_39 = NULL,w_39 = NULL;
  t_39 = t;
  t = term_a_30;
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_30, t_39);
  t = b_7(w_39, t_39, t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_39 = NULL,y_39 = NULL;
        t = eval_config_0_0(t);
        x_39 = t;
        t = term_a_30;
        y_39 = t;
        t = SSL_table_put(y_39, t_39, x_39);
        t = x_39;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
      }
  }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  t = term_e_30;
  b_40 = t;
  t = term_f_19;
  c_40 = t;
  t = term_f_30;
  t = e_7(b_40, c_40, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = term_e_30;
  j_40 = t;
  t = term_f_19;
  k_40 = t;
  t = term_f_30;
  t = e_7(j_40, k_40, t);
  t = term_l_19;
  h_40 = t;
  t = term_f_19;
  i_40 = t;
  t = term_i_30;
  t = e_7(h_40, i_40, t);
  t = term_j_30;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_8, b_8, d_8, t);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = Option_3_0(f_8, g_8, i_8, t);
    }
  return(t);
}
static ATerm e_7 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm l_40 = NULL;
  t = term_a_30;
  l_40 = t;
  t = SSL_table_put(l_40, m_38, n_38);
  t = (ATerm) ATmakeAppl(sym__3, term_a_30, m_38, n_38);
  return(t);
}
static ATerm b_7 (ATerm d_38, ATerm e_38, ATerm t)
{
  t = SSL_table_get(d_38, e_38);
  return(t);
}
static ATerm c_7 (ATerm m_36, ATerm n_36, ATerm l_36, ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
  {
    ATerm s_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            ATerm k_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_36, n_36);
        t = b_7(m_36, n_36, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  o_40 = t;
  t = (ATerm) ATinsert(CheckATermList(o_40), l_36);
  p_40 = t;
  t = SSL_table_put(m_36, n_36, p_40);
  t = n_40;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_41 = NULL,h_41 = NULL,i_41 = NULL;
      t = term_f_19;
      t = e_0(t);
      a_41 = t;
      t = term_q_26;
      h_41 = t;
      t = term_s_26;
      i_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_26, term_s_26, a_41);
      t = c_7(h_41, i_41, a_41, t);
      _fail(t);
    }
  else
    {
      ATerm l_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_40 = ATgetFirst((ATermList) t);
          z_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_40;
      t = c_0(t);
      t = term_f_19;
      t = d_0(t);
      l_41 = t;
      t = (ATerm) ATinsert(CheckATermList(z_40), l_41);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,r_41 = NULL,s_41 = NULL,u_41 = NULL,w_5 = NULL;
  u_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_41 = ATgetFirst((ATermList) t);
      o_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_41);
  m_41 = t;
  t = n_41;
  t = j_58(t);
  r_41 = t;
  t = o_41;
  t = k_58(t);
  s_41 = t;
  t = (ATerm) ATinsert(CheckATermList(s_41), r_41);
  w_5 = t;
  t = SSLsetAnnotations(w_5, m_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_89 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_8 = NULL;
  a_42 = t;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_31;
        t = e_89(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
      }
  }
  t = a_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_42 = ATgetFirst((ATermList) t);
      d_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_42);
  b_42 = t;
  t = term_x_27;
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_27, c_42);
  t = e_7(g_42, c_42, t);
  t = d_42;
  {
    static ATerm q_42 (ATerm t)
    {
      ATerm v_31 = t;
      int w_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_31 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_42 = NULL;
              j_42 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_42;
              LocalPopChoice(t_32);
            }
          else
            {
              t = y_31;
              t = e_89(t);
              t = Cons_2_0(_id, q_42, t);
            }
          LocalPopChoice(w_31);
        }
      else
        {
          t = v_31;
          {
            ATerm m_42 = NULL,n_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_42 = ATgetFirst((ATermList) t);
                n_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_42), (ATerm) ATmakeAppl(sym_Undefined_1, m_42));
          }
        }
      return(t);
    }
    t = q_42(t);
  }
  f_42 = t;
  t = (ATerm) ATinsert(CheckATermList(f_42), (ATerm) ATmakeAppl(sym_Program_1, c_42));
  h_8 = t;
  t = SSLsetAnnotations(h_8, b_42);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  if(match_string(t, "--help"))
    {
      t = h_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_43;
        }
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  t = term_r_28;
  j_43 = t;
  t = term_f_19;
  k_43 = t;
  t = term_x_32;
  t = e_7(j_43, k_43, t);
  t = term_y_32;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_a_33;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  c_43 = t;
  t = term_q_26;
  e_43 = t;
  t = term_s_26;
  f_43 = t;
  t = (ATerm) ATempty;
  g_43 = t;
  t = SSL_table_put(e_43, f_43, g_43);
  t = c_43;
  {
    static ATerm j_8 (ATerm t)
    {
      ATerm b_33 = t;
      int d_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_89(t);
          LocalPopChoice(d_33);
        }
      else
        {
          t = b_33;
          {
            ATerm e_33 = t;
            int f_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_8, n_8, p_8, t);
                LocalPopChoice(f_33);
              }
            else
              {
                t = e_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_8, t);
  }
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        r_43 = t;
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              t = r_43;
              {
                ATerm k_33 = t;
                int n_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_28;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_33);
                  }
                else
                  {
                    t = k_33;
                    t = fetch_1_0(r_8, t);
                  }
              }
              t = r_43;
              t = default_system_usage_0_0(t);
              t = term_y_25;
              m_17 = t;
              t = SSL_exit(m_17);
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              {
                ATerm y_17 = NULL;
                t = term_e_30;
                t = get_config_0_0(t);
                t = r_43;
                t = default_system_about_0_0(t);
                t = term_y_25;
                y_17 = t;
                t = SSL_exit(y_17);
              }
            }
        }
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        {
          ATerm o_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
              static ATerm s_8 (ATerm t)
              {
                ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,m_8 = NULL;
                x_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_43);
                v_43 = t;
                t = w_43;
                if(((a_43 != NULL) && (a_43 != t)))
                  _fail(t);
                else
                  a_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_43);
                m_8 = t;
                t = SSLsetAnnotations(m_8, v_43);
                return(t);
              }
              t = fetch_1_0(s_8, t);
              t = term_j_17;
              t_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_43)), term_v_33);
              u_43 = t;
              t = SSL_printnl(t_43, u_43);
              t = (ATerm) ATmakeAppl(sym__2, term_j_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_43)), term_v_33));
              t = default_system_usage_0_0(t);
              t = term_h_9;
              s_43 = t;
              t = SSL_exit(s_43);
              LocalPopChoice(u_33);
            }
          else
            {
              t = o_33;
            }
        }
      }
  }
  b_43 = t;
  t = term_q_26;
  d_43 = t;
  t = SSL_table_destroy(d_43);
  t = b_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
  t = parse_options_1_0(i_87, t);
  c_44 = t;
  t = term_w_33;
  f_44 = t;
  t = SSL_table_create(f_44);
  t = term_w_33;
  d_44 = t;
  t = term_y_33;
  e_44 = t;
  t = SSL_table_put(d_44, e_44, c_44);
  t = c_44;
  t = k_87(t);
  {
    ATerm a_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_87, t);
        LocalPopChoice(d_34);
      }
    else
      {
        t = a_34;
        {
          ATerm h_34 = t;
          int i_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_34);
            }
          else
            {
              t = h_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, x_8, t);
  return(t);
}
