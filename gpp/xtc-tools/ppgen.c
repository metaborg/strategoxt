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
ATerm term_y_32;
ATerm term_q_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_f_32;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_p_31;
ATerm term_h_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_k_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_p_22;
ATerm term_g_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_l_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_y_9;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_i_9;
ATerm term_e_9;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_q_8;
ATerm term_p_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_e_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_10, term_l_9, term_m_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_r_10, term_u_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_a_11, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_h_11, term_j_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_q_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_11, term_x_11, term_b_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_j_12, term_l_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_s_12, term_t_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_b_13, term_d_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_l_13, term_n_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_u_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_i_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_h_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_s_15, term_t_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_w_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_k_17, term_l_17);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_b_23);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_h_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_p_22);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_g_25);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_s_25);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_n_19, term_c_19);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_x_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_p_19);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_x_27);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_s_25, term_x_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_p_19);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_a_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_s_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_r_27, term_s_27);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_p_19);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_p_19);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_p_19);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_h_30);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_19);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm s_6 (ATerm r_14, ATerm s_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm c_6 (ATerm z_33, ATerm a_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm d_6 (ATerm r_17, ATerm s_17, ATerm t);
static ATerm e_6 (ATerm j_67 (ATerm), ATerm b_173, ATerm b_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t);
static ATerm f_6 (ATerm j_14, ATerm k_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm l_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm y_65 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm y_86 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm q_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm t_9 (ATerm j_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm h_6 (ATerm n_82 (ATerm), ATerm h_35, ATerm f_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm h_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm b_84 (ATerm), ATerm t);
static ATerm j_6 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm f_25, ATerm e_25, ATerm t);
static ATerm k_6 (ATerm k_76 (ATerm), ATerm b_25, ATerm a_25, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm l_6 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t);
static ATerm m_6 (ATerm d_84 (ATerm), ATerm b_38, ATerm a_38, ATerm t);
static ATerm r_6 (ATerm i_40, ATerm j_40, ATerm t);
static ATerm o_17 (ATerm x_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_6 (ATerm x_17, ATerm t);
static ATerm o_6 (ATerm o_32, ATerm p_32, ATerm t);
static ATerm p_6 (ATerm r_40, ATerm s_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_20 (ATerm g_18, ATerm t);
static ATerm m_20 (ATerm o_18, ATerm p_18, ATerm q_18, ATerm t);
static ATerm o_20 (ATerm e_19, ATerm f_19, ATerm g_19, ATerm t);
static ATerm q_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm j_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm q_26 (ATerm x_24, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_sglr_1_0 (ATerm d_87 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm xtc_parse_sdf_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm x_6 (ATerm l_38, ATerm m_38, ATerm t);
static ATerm t_6 (ATerm z_36, ATerm a_37, ATerm t);
ATerm end_scope_1_0 (ATerm k_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_82 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_6 (ATerm t_33, ATerm u_33, ATerm t);
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_83 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm need_help_1_0 (ATerm g_88 (ATerm), ATerm t);
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm a_7 (ATerm f_39, ATerm g_39, ATerm t);
static ATerm y_6 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_90 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm parse_options_1_0 (ATerm d_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      l_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = k_1;
        t = o_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, h_0);
        t = s_6(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        {
          ATerm k_8 = t;
          int l_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = k_1;
              t = o_0(t);
              y_0 = t;
              {
                ATerm m_8 = t;
                if((PushChoice() == 0))
                  {
                    ATerm z_0 = NULL;
                    z_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = z_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = z_0;
                          }
                        else
                          {
                            t = z_0;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = z_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, y_0);
              t = s_6(l_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(l_8);
            }
          else
            {
              t = k_8;
              t = k_1;
              t = o_0(t);
              if((l_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm r_14, ATerm s_14, ATerm t)
{
  t = SSL_copy(r_14, s_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,i_2 = NULL;
      t = term_p_8;
      g_2 = t;
      t = term_q_8;
      i_2 = t;
      t = term_s_8;
      t = x_6(g_2, i_2, t);
      LocalPopChoice(o_8);
    }
  else
    {
      t = n_8;
      t = term_t_8;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_q_8;
      {
        ATerm u_8 = t;
        int v_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_p_8;
            r_1 = t;
            t = term_q_8;
            s_1 = t;
            t = term_s_8;
            t = x_6(r_1, s_1, t);
            LocalPopChoice(v_8);
          }
        else
          {
            t = u_8;
            t = term_t_8;
          }
      }
      p_1 = t;
      t = term_w_8;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_w_8, p_1);
      t = s_6(q_1, p_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm x_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm c_6 (ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_33, a_34);
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      t = SSL_subtr(z_33, a_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,x_2 = NULL;
  t = term_e_9;
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,e_3 = NULL;
        t = term_p_8;
        c_3 = t;
        t = term_e_9;
        e_3 = t;
        t = term_i_9;
        t = x_6(c_3, e_3, t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        t = term_l_9;
      }
  }
  l_2 = t;
  t = term_l_9;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_l_9);
  t = c_6(l_2, x_2, t);
  m_2 = t;
  t = SSL_int_to_string(m_2);
  k_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term_e_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_p_9);
      l_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATempty, term_p_9));
      t = r_6(j_3, l_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm r_17, ATerm s_17, ATerm t)
{
  ATerm m_3 = NULL;
  t = SSL_write_term_to_stream_baf(r_17, s_17);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_3);
  return(t);
}
static ATerm e_6 (ATerm j_67 (ATerm), ATerm b_173, ATerm b_18, ATerm t)
{
  ATerm n_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_173, term_q_9);
  t = q_6(t);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, b_18);
  t = j_67(t);
  t = fclose_0_0(t);
  t = b_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm v_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_9 = ATgetArgument(t, 0);
      if(match_cons(r_9, sym_Stream_1))
        {
          v_3 = ATgetArgument(r_9, 0);
        }
      else
        _fail(t);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(v_3, x_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  r_3 = t;
  t = xtc_new_file_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, r_3);
  t = e_6(b_0, p_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_3);
  t = xtc_transform_file_2_0(x_85, y_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm f_6 (ATerm j_14, ATerm k_14, ATerm t)
{
  t = SSL_execvp(j_14, k_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,d_5 = NULL,e_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_5 = ATgetArgument(t, 0);
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = SSL_int_to_string(c_5);
        c_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_9), c_2), term_s_9);
        d_2 = t;
        t = SSL_concat_strings(d_2);
      }
    }
  else
    {
      ATerm v_2 = NULL,w_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_5 = ATgetArgument(t, 0);
          d_5 = ATgetArgument(t, 1);
          e_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_5);
      v_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_5), term_d_10), v_2), term_c_10), c_5);
      w_2 = t;
      t = SSL_concat_strings(w_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  ATerm i_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = l_72(t);
    if(((i_5 != NULL) && (i_5 != t)))
      _fail(t);
    else
      i_5 = t;
    return(t);
  }
  t = fetch_1_0(f_0, t);
  t = not_null(i_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_10 = ATgetArgument(t, 0);
              if((j_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm k_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_17), term_f_17), term_z_16), term_t_16), term_o_16), term_k_16), term_f_16), term_y_15), term_p_15), term_l_15), term_d_15), term_x_14), term_t_14), term_n_14), term_g_14), term_b_14), term_x_13), term_p_13), term_h_13), term_z_12), term_u_12), term_m_12), term_c_12), term_u_11), term_m_11), term_e_11), term_w_10), term_n_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, j_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_5 = NULL,w_6 = NULL;
  o_5 = t;
  {
    ATerm n_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_18 = ATgetArgument(t, 0);
            w_6 = ATgetArgument(t, 1);
            {
              ATerm c_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_17);
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,i_3 = NULL,o_3 = NULL;
              t = w_6;
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
              f_3 = t;
              t = term_i_18;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_j_18);
              o_3 = t;
              t = SSL_printnl(i_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_j_18));
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = o_5;
            }
        }
      }
    else
      {
        t = n_17;
        t = o_5;
      }
  }
  t = o_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_65 (ATerm), ATerm t)
{
  ATerm k_7 = NULL,m_7 = NULL;
  m_7 = t;
  t = fork_0_0(t);
  k_7 = t;
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_7;
        t = y_65(t);
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        t = SSL_waitpid(k_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            if(((ATgetType(m_18) != AT_INT) || (ATgetInt((ATermInt) m_18) != 0)))
              _fail(t);
            {
              ATerm n_18 = ATgetArgument(t, 1);
            }
            {
              ATerm u_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm q_7 = NULL,s_7 = NULL;
  s_7 = t;
  t = y_86(t);
  t = xtc_find_0_0(t);
  q_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_7, s_7);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm t_7 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_7, s_7);
      t = f_6(q_7, s_7, t);
      t = term_v_18;
      t_7 = t;
      t = SSL_exit(t_7);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = s_7;
  return(t);
}
ATerm at_end_1_0 (ATerm q_72 (ATerm), ATerm t)
{
  static ATerm d_9 (ATerm t)
  {
    ATerm z_8 = NULL,b_9 = NULL,c_9 = NULL;
    c_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_8 = ATgetFirst((ATermList) t);
        b_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_3 = NULL,a_4 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(c_9);
          w_3 = t;
          t = b_9;
          t = d_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), z_8);
          u_0 = t;
          t = SSLsetAnnotations(u_0, w_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_9;
        t = q_72(t);
      }
    return(t);
  }
  t = d_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  x_7 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_7;
    }
  else
    {
      static ATerm q_0 (ATerm t)
      {
        t = not_null(z_7);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_7 = ATgetFirst((ATermList) t);
          if(((z_7 != NULL) && (z_7 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_7;
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm t_9 (ATerm j_9, ATerm t)
{
  ATerm k_9 = NULL;
  t = SSL_explode_term(j_9);
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym__2))
    {
      m_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      {
        ATerm x_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = n_9;
              return(t);
            }
            t = m_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(z_18);
          }
        else
          {
            t = x_18;
            t = t_9(o_9, t);
          }
      }
    }
  else
    {
      t = t_9(o_9, t);
    }
  return(t);
}
static ATerm h_6 (ATerm n_82 (ATerm), ATerm h_35, ATerm f_35, ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,z_9 = NULL,a_10 = NULL;
  x_9 = t;
  t = n_82(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_9, h_35, f_35);
  t = y_6(u_9, h_35, f_35, t);
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_10 = NULL;
        t = term_c_19;
        b_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_9, term_c_19);
        t = x_6(u_9, b_10, t);
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_9 = ATgetFirst((ATermList) t);
      w_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_19;
  z_9 = t;
  t = (ATerm) ATinsert(CheckATermList(w_9), (ATerm) ATinsert(CheckATermList(v_9), h_35));
  a_10 = t;
  t = SSL_table_put(u_9, z_9, a_10);
  t = x_9;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  ATerm d_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_10 = NULL,n_4 = NULL;
      i_10 = t;
      t = term_l_19;
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_10, term_l_19);
      t = o_6(i_10, n_4, t);
      e_10 = t;
      t = SSL_mkstemp(e_10);
      LocalPopChoice(k_19);
    }
  else
    {
      t = d_19;
      {
        ATerm j_10 = NULL;
        t = term_m_19;
        j_10 = t;
        t = SSL_perror(j_10);
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
static ATerm t_0 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,s_10 = NULL,t_10 = NULL,v_10 = NULL;
  t = P__tmpdir_0_0(t);
  t_10 = t;
  t = term_o_19;
  v_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_10, term_o_19);
  t = o_6(t_10, v_10, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_p_19;
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_10, term_p_19);
  t = h_6(t_0, p_10, s_10, t);
  t = SSL_close(o_10);
  t = p_10;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_10 = NULL,b_11 = NULL;
  y_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_11 = NULL,g_11 = NULL;
      t = y_10;
      t = xtc_new_file_0_0(t);
      d_11 = t;
      t = r_0(t);
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_11, (ATerm) ATinsert(ATinsert(ATempty, d_11), term_q_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, d_11);
    }
  else
    {
      ATerm i_11 = NULL,l_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_11;
      t = xtc_new_file_0_0(t);
      i_11 = t;
      t = r_0(t);
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_11), term_q_8), b_11), term_q_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL;
        t = term_p_8;
        s_11 = t;
        t = term_e_9;
        t_11 = t;
        t = term_i_9;
        t = x_6(s_11, t_11, t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_11, term_a_11);
        t = geq_0_0(t);
        t = p_11;
        t = y_83(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = p_11;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_u_19);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm h_67 (ATerm), ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,d_12 = NULL;
  y_11 = t;
  t = h_67(t);
  z_11 = t;
  t = term_i_18;
  a_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_11), z_11);
  d_12 = t;
  t = SSL_printnl(a_12, d_12);
  t = y_11;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL;
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), f_12);
    t = x_6(not_null(e_12), f_12, t);
    g_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
    return(t);
  }
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = SSL_table_keys(e_12);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,n_12 = NULL,p_12 = NULL;
        t = term_p_8;
        n_12 = t;
        t = term_e_9;
        p_12 = t;
        t = term_i_9;
        t = x_6(n_12, p_12, t);
        k_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, term_q_16);
        t = geq_0_0(t);
        t = i_12;
        t = a_84(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = i_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
        t = term_p_8;
        f_13 = t;
        t = term_e_9;
        g_13 = t;
        t = term_i_9;
        t = x_6(f_13, g_13, t);
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, term_u_13);
        t = geq_0_0(t);
        t = c_13;
        t = z_83(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = c_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm m_13 = NULL;
  m_13 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_13 = NULL,t_13 = NULL,v_13 = NULL;
        t = term_p_8;
        t_13 = t;
        t = term_e_9;
        v_13 = t;
        t = term_i_9;
        t = x_6(t_13, v_13, t);
        o_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_13, term_h_11);
        t = geq_0_0(t);
        t = m_13;
        t = b_84(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = m_13;
      }
  }
  return(t);
}
static ATerm j_6 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm f_25, ATerm e_25, ATerm t)
{
  t = o_76(t);
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm c_14 = NULL;
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, c_14);
      t = n_76(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = e_25;
  return(t);
}
static ATerm k_6 (ATerm k_76 (ATerm), ATerm b_25, ATerm a_25, ATerm t)
{
  static ATerm r_15 (ATerm t)
  {
    ATerm z_14 = NULL,i_15 = NULL,j_15 = NULL;
    z_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_15 = ATgetFirst((ATermList) t);
            j_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_20 = t;
          int e_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_14;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = a_25;
                  return(t);
                }
                t = j_6(k_76, d_1, i_15, j_15, t);
              }
              t = r_15(t);
              LocalPopChoice(e_20);
            }
          else
            {
              t = c_20;
              {
                ATerm a_5 = NULL,l_5 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(z_14);
                a_5 = t;
                t = j_15;
                t = r_15(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), i_15);
                w_0 = t;
                t = SSLsetAnnotations(w_0, a_5);
              }
            }
        }
      }
    return(t);
  }
  t = b_25;
  t = r_15(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      if((b_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            ATerm j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
        t = x_6(r_37, s_37, t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = (ATerm) ATempty;
      }
  }
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, t_37);
  t = k_6(e_1, x_15, t_37, t);
  w_15 = t;
  t = SSL_table_put(r_37, s_37, w_15);
  t = v_15;
  return(t);
}
static ATerm m_6 (ATerm d_84 (ATerm), ATerm b_38, ATerm a_38, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm c_16 = NULL,d_16 = NULL;
    if(match_cons(t, sym__2))
      {
        c_16 = ATgetArgument(t, 0);
        d_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, b_38, c_16, d_16);
    t = d_84(t);
    return(t);
  }
  t = a_38;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm r_6 (ATerm i_40, ATerm j_40, ATerm t)
{
  t = SSL_access(i_40, j_40);
  return(t);
}
static ATerm o_17 (ATerm x_16, ATerm t)
{
  t = SSL_fclose(x_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_17 = NULL,e_17 = NULL;
  e_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_17 = ATgetArgument(t, 0);
      {
        ATerm k_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_17);
            LocalPopChoice(n_20);
          }
        else
          {
            t = k_20;
            t = o_17(e_17, t);
          }
      }
    }
  else
    {
      t = o_17(e_17, t);
    }
  return(t);
}
static ATerm n_6 (ATerm x_17, ATerm t)
{
  t = SSL_read_term_from_stream(x_17);
  return(t);
}
static ATerm o_6 (ATerm o_32, ATerm p_32, ATerm t)
{
  t = SSL_strcat(o_32, p_32);
  return(t);
}
static ATerm p_6 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm p_17 = NULL;
  t = SSL_fopen(r_40, s_40);
  p_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  t = SSL_stdin_stream();
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_stdout_stream();
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stderr_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
static ATerm l_20 (ATerm g_18, ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
          {
            h_18 = ATgetFirst((ATermList) r_20);
            {
              ATerm s_20 = (ATerm) ATgetNext((ATermList) r_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_20 (ATerm o_18, ATerm p_18, ATerm q_18, ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,y_18 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(q_18);
  t_18 = t;
  t = o_18;
  if(match_cons(t, sym_Path_1))
    {
      y_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_18, p_18);
  b_1 = t;
  t = SSLsetAnnotations(b_1, t_18);
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(r_18, s_18, t);
  return(t);
}
static ATerm o_20 (ATerm e_19, ATerm f_19, ATerm g_19, ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,t_19 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(g_19);
  j_19 = t;
  t = SSL_is_string(e_19);
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, f_19);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_19);
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(h_19, i_19, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_19 = NULL,d_20 = NULL,i_20 = NULL;
  v_19 = t;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
      {
        ATerm t_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_20(v_19, t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = t_20;
            {
              ATerm x_20 = t;
              int y_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_20(d_20, i_20, v_19, t);
                  LocalPopChoice(y_20);
                }
              else
                {
                  t = x_20;
                  t = o_20(d_20, i_20, v_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_20(v_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_20 = NULL,u_20 = NULL,w_20 = NULL,d_21 = NULL;
  d_21 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_21, term_b_21);
        t = q_6(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
        {
          ATerm d_7 = NULL,e_7 = NULL;
          t = term_c_21;
          e_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_21, d_21);
          t = o_6(e_7, d_21, t);
          d_7 = t;
          t = SSL_perror(d_7);
          _fail(t);
        }
      }
  }
  u_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_6(w_20, t);
  q_20 = t;
  t = u_20;
  t = fclose_0_0(t);
  t = q_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_21 = NULL,j_21 = NULL;
      i_21 = t;
      t = (ATerm) ATinsert(ATempty, term_l_21);
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_21, (ATerm) ATinsert(ATempty, term_l_21));
      t = r_6(i_21, j_21, t);
      LocalPopChoice(h_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = g_21;
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_21 = t;
            if((PushChoice() == 0))
              {
                ATerm k_21 = NULL,n_21 = NULL;
                k_21 = t;
                t = (ATerm) ATinsert(ATempty, term_p_9);
                n_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_21, (ATerm) ATinsert(ATempty, term_p_9));
                t = r_6(k_21, n_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_21;
              }
            t = debug_1_0(h_1, t);
            LocalPopChoice(o_21);
          }
        else
          {
            t = m_21;
            t = debug_1_0(i_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_q_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_s_21;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  i_22 = t;
  t = term_i_18;
  j_22 = t;
  t = (ATerm) ATinsert(ATempty, term_z_21);
  k_22 = t;
  t = SSL_printnl(j_22, k_22);
  t = i_22;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__3))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
      n_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_6(l_22, m_22, n_22, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm o_22 = NULL,s_22 = NULL,t_22 = NULL;
  o_22 = t;
  t = term_i_18;
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  t_22 = t;
  t = SSL_printnl(s_22, t_22);
  t = o_22;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL;
  u_22 = t;
  t = term_i_18;
  x_22 = t;
  t = (ATerm) ATinsert(ATempty, term_z_21);
  y_22 = t;
  t = SSL_printnl(x_22, y_22);
  t = u_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  r_21 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL,h_22 = NULL;
        t = term_g_22;
        e_22 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_21);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATmakeAppl(sym_Imported_1, r_21));
        t = x_6(e_22, h_22, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
  }
  u_21 = t;
  t = term_g_22;
  b_22 = t;
  t = term_p_22;
  c_22 = t;
  t = (ATerm) ATinsert(ATempty, r_21);
  d_22 = t;
  t = SSL_table_put(b_22, c_22, d_22);
  t = u_21;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_1, t);
  t_21 = t;
  t = term_g_22;
  y_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, t_21);
  t = m_6(x_1, y_21, t_21, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_g_22;
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_21);
  w_21 = t;
  t = (ATerm) ATempty;
  x_21 = t;
  t = SSL_table_put(v_21, w_21, x_21);
  t = (ATerm) ATmakeAppl(sym__3, term_g_22, (ATerm)ATmakeAppl(sym_Imported_1, r_21), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_23 = ATgetFirst((ATermList) t);
          o_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 = NULL,u_7 = NULL,v_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(m_23);
            o_7 = t;
            t = n_23;
            t = j_80(t);
            u_7 = t;
            t = o_23;
            t = filter_1_0(j_80, t);
            v_7 = t;
            t = (ATerm) ATinsert(CheckATermList(v_7), u_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, o_7);
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            t = o_23;
            t = filter_1_0(j_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm e_70 (ATerm), ATerm f_70 (ATerm), ATerm t)
{
  static ATerm w_23 (ATerm t)
  {
    ATerm v_22 = t;
    int w_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        t = w_23(t);
        LocalPopChoice(w_22);
      }
    else
      {
        t = v_22;
        t = f_70(t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int a_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_23 = NULL,z_23 = NULL;
      t = term_p_8;
      y_23 = t;
      t = term_b_23;
      z_23 = t;
      t = term_c_23;
      t = x_6(y_23, z_23, t);
      LocalPopChoice(a_23);
    }
  else
    {
      t = z_22;
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL;
            t = term_f_23;
            a_24 = t;
            t = SSL_getenv(a_24);
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL;
  t = term_g_22;
  n_24 = t;
  t = term_h_23;
  o_24 = t;
  t = term_i_23;
  t = x_6(n_24, o_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm j_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_23;
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
  t = term_k_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  t = if_verbose5_1_0(a_2, t);
  c_24 = t;
  {
    ATerm l_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_24 = NULL,h_24 = NULL;
        t = term_g_22;
        e_24 = t;
        t = term_p_22;
        h_24 = t;
        t = term_q_23;
        t = x_6(e_24, h_24, t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = l_23;
        {
          ATerm j_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_24 = t;
          t = repeat_2_0(h_2, _id, t);
          t = j_24;
        }
      }
  }
  t = c_24;
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
  t = term_r_23;
  return(t);
}
static ATerm q_26 (ATerm x_24, ATerm t)
{
  ATerm z_24 = NULL,c_25 = NULL,n_25 = NULL;
  t = term_g_22;
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_24);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATmakeAppl(sym_Tool_1, x_24));
  t = x_6(c_25, n_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_23 = ATgetFirst((ATermList) t);
      if(match_cons(s_23, sym__2))
        {
          ATerm u_23 = ATgetArgument(s_23, 0);
          z_24 = ATgetArgument(s_23, 1);
        }
      else
        _fail(t);
      {
        ATerm t_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_24;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_r_23;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_g_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm x_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_25 = NULL,r_25 = NULL,u_25 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      u_25 = t;
      if(match_cons(t, sym__2))
        {
          q_25 = ATgetArgument(t, 0);
          r_25 = ATgetArgument(t, 1);
          {
            ATerm d_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_25 = NULL,z_25 = NULL,c_26 = NULL;
                t = term_g_22;
                z_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_25);
                c_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_g_22, (ATerm) ATmakeAppl(sym_Tool_1, q_25));
                t = x_6(z_25, c_26, t);
                {
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_25 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(y_25);
                LocalPopChoice(f_24);
              }
            else
              {
                t = d_24;
                t = q_26(u_25, t);
              }
          }
        }
      else
        {
          t = q_26(u_25, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = x_23;
      {
        ATerm p_26 = NULL,i_8 = NULL,j_8 = NULL;
        p_26 = t;
        t = term_i_18;
        i_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), p_26), term_g_24);
        j_8 = t;
        t = SSL_printnl(i_8, j_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_24), p_26), term_g_24);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_k_24;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL,e_27 = NULL;
      e_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          b_27 = ATgetArgument(t, 0);
          {
            ATerm r_8 = NULL,n_1 = NULL;
            t = SSLgetAnnotations(e_27);
            r_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
            n_1 = t;
            t = SSLsetAnnotations(n_1, r_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_27;
        }
      LocalPopChoice(m_24);
      {
        static ATerm a_3 (ATerm t)
        {
          ATerm f_27 = NULL,g_27 = NULL;
          t = term_p_19;
          t = d_87(t);
          t = xtc_find_0_0(t);
          f_27 = t;
          t = term_p_19;
          t = pass_v_verbose_0_0(t);
          g_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(g_27), f_27), term_q_24), term_p_24);
          return(t);
        }
        t = xtc_transform_file_2_0(z_2, a_3, t);
      }
    }
  else
    {
      t = l_24;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm k_27 = NULL,n_27 = NULL;
          t = term_p_19;
          t = d_87(t);
          t = xtc_find_0_0(t);
          k_27 = t;
          t = term_p_19;
          t = pass_v_verbose_0_0(t);
          n_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(n_27), k_27), term_q_24), term_p_24);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, d_3, t);
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_r_24;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(g_3, t);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL,b_28 = NULL;
        b_28 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_28 = ATgetArgument(t, 0);
            {
              ATerm h_9 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(b_28);
              h_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_28);
              t_1 = t;
              t = SSLsetAnnotations(t_1, h_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_28;
          }
        LocalPopChoice(u_24);
        t = xtc_transform_file_2_0(h_3, pass_verbose_0_0, t);
      }
    else
      {
        t = t_24;
        t = xtc_transform_term_2_0(k_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_28;
  if(match_cons(t, sym_AST_0))
    {
      t = w_28;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = w_28;
          {
            ATerm v_24 = t;
            int w_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_10 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    z_10 = ATgetArgument(t, 0);
                    {
                      ATerm k_11 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(w_28);
                      k_11 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, z_10);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, k_11);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = w_28;
                  }
                LocalPopChoice(w_24);
                t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
              }
            else
              {
                t = v_24;
                t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = w_28;
          t = xtc_parse_sdf_0_0(t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_29 = NULL,c_29 = NULL;
      t = term_p_8;
      b_29 = t;
      t = term_g_25;
      c_29 = t;
      t = term_h_25;
      t = x_6(b_29, c_29, t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = y_24;
      t = term_i_25;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_k_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm j_29 = NULL,m_29 = NULL;
  m_29 = t;
  t = get_input_type_0_0(t);
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_29, m_29);
  t = pre_process_sdf_0_0(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL,a_30 = NULL;
        a_30 = t;
        if(match_cons(t, sym_FILE_1))
          {
            z_29 = ATgetArgument(t, 0);
            {
              ATerm w_11 = NULL,b_2 = NULL;
              t = SSLgetAnnotations(a_30);
              w_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_29);
              b_2 = t;
              t = SSLsetAnnotations(b_2, w_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = a_30;
          }
        LocalPopChoice(m_25);
        t = xtc_transform_file_2_0(t_3, pass_verbose_0_0, t);
      }
    else
      {
        t = l_25;
        t = xtc_transform_term_2_0(u_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL,o_12 = NULL,r_12 = NULL;
        i_30 = t;
        t = term_p_8;
        o_12 = t;
        t = term_s_25;
        r_12 = t;
        t = term_t_25;
        t = x_6(o_12, r_12, t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = i_30;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_30 = NULL,q_30 = NULL;
              q_30 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  o_30 = ATgetArgument(t, 0);
                  {
                    ATerm v_12 = NULL,j_2 = NULL;
                    t = SSLgetAnnotations(q_30);
                    v_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, o_30);
                    j_2 = t;
                    t = SSLsetAnnotations(j_2, v_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = q_30;
                }
              LocalPopChoice(w_25);
              t = xtc_transform_file_2_0(y_3, pass_verbose_0_0, t);
            }
          else
            {
              t = v_25;
              t = xtc_transform_term_2_0(z_3, pass_verbose_0_0, t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_6 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_table_get(l_38, m_38);
  return(t);
}
static ATerm t_6 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  v_30 = t;
  {
    ATerm x_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
        t = x_6(z_36, a_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_26 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_26);
        t = SSL_table_put(z_36, a_37, u_30);
        t = (ATerm) ATmakeAppl(sym__3, z_36, a_37, u_30);
      }
    else
      {
        t = x_25;
        t = SSL_table_remove(z_36, a_37);
        t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
      }
  }
  t = v_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  z_30 = t;
  t = k_82(t);
  y_30 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_31 = NULL;
        t = term_c_19;
        d_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, term_c_19);
        t = x_6(y_30, d_31, t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_30 = ATgetFirst((ATermList) t);
      w_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_19;
  a_31 = t;
  t = SSL_table_put(y_30, a_31, w_30);
  t = x_30;
  {
    static ATerm b_4 (ATerm t)
    {
      ATerm g_31 = NULL;
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, g_31);
      t = t_6(y_30, g_31, t);
      return(t);
    }
    t = map_1_0(b_4, t);
  }
  t = z_30;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_83(t);
      t = l_83(t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      t = l_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,n_31 = NULL,q_31 = NULL,t_31 = NULL;
  j_31 = t;
  t = j_82(t);
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_31, term_c_19);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_26 = ATgetArgument(t, 0);
            ATerm k_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_19;
        a_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, term_c_19);
        t = x_6(i_31, a_32, t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = (ATerm) ATempty;
      }
  }
  n_31 = t;
  t = term_c_19;
  q_31 = t;
  t = (ATerm) ATinsert(CheckATermList(n_31), (ATerm) ATempty);
  t_31 = t;
  t = SSL_table_put(i_31, q_31, t_31);
  t = j_31;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_n_19;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(r_32);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = r_32;
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  ATerm g_32 = NULL;
  static ATerm d_4 (ATerm t)
  {
    ATerm h_32 = NULL;
    h_32 = t;
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32 = NULL,l_32 = NULL;
          t = term_n_19;
          k_32 = t;
          t = term_c_19;
          l_32 = t;
          t = term_r_26;
          t = x_6(k_32, l_32, t);
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((g_32 != NULL) && (g_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          g_32 = ATgetFirst((ATermList) t);
        {
          ATerm s_26 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = g_32;
    t = map_1_0(e_4, t);
    t = h_32;
    t = end_scope_1_0(f_4, t);
    return(t);
  }
  t = begin_scope_1_0(c_4, t);
  t = restore_always_2_0(k_86, d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  z_32 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  a_33 = t;
  t = term_i_18;
  c_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_26), a_33), term_t_26);
  d_33 = t;
  t = SSL_printnl(c_33, d_33);
  t = term_l_9;
  b_33 = t;
  t = SSL_exit(b_33);
  t = z_32;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-k"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  t = SSL_string_to_int(g_33);
  h_33 = t;
  t = term_v_26;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, h_33);
  t = a_7(i_33, h_33, t);
  t = g_33;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, k_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-S"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL;
  t = term_e_9;
  m_33 = t;
  t = term_x_26;
  n_33 = t;
  t = term_y_26;
  t = a_7(m_33, n_33, t);
  t = term_z_26;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  t = SSL_string_to_int(o_33);
  p_33 = t;
  t = term_e_9;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_9, p_33);
  t = a_7(q_33, p_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_33);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm r_33 = NULL,w_33 = NULL;
  t = term_d_27;
  r_33 = t;
  t = term_p_19;
  w_33 = t;
  t = term_h_27;
  t = a_7(r_33, w_33, t);
  t = term_i_27;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, p_4, t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, t_4, u_4, t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = Option_3_0(v_4, w_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm y_33 = NULL;
  y_33 = t;
  if(match_string(t, "-o"))
    {
      t = y_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_33;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  t = term_q_8;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_8, b_34);
  t = a_7(c_34, b_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_34);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_q_27;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_4, g_5, h_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
      t = term_p_19;
      t = n_0(t);
      k_34 = t;
      t = term_r_27;
      l_34 = t;
      t = term_s_27;
      m_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, k_34);
      t = y_6(l_34, m_34, k_34, t);
      _fail(t);
    }
  else
    {
      ATerm q_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_34 = ATgetFirst((ATermList) t);
          h_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_34 = ATgetFirst((ATermList) t);
          j_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_34;
      t = k_0(t);
      t = i_34;
      t = l_0(t);
      q_34 = t;
      t = (ATerm) ATinsert(CheckATermList(j_34), q_34);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  if(match_string(t, "-i"))
    {
      t = s_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_34;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  t = term_q_19;
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, t_34);
  t = a_7(u_34, t_34, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_34);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, m_5, n_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = term_g_25;
  w_34 = t;
  t = term_u_27;
  x_34 = t;
  t = term_v_27;
  t = a_7(w_34, x_34, t);
  t = v_34;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm y_34 = NULL,k_35 = NULL,l_35 = NULL;
  y_34 = t;
  t = term_g_25;
  k_35 = t;
  t = term_x_27;
  l_35 = t;
  t = term_y_27;
  t = a_7(k_35, l_35, t);
  t = y_34;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_z_27;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  t = term_s_25;
  n_35 = t;
  t = term_x_27;
  o_35 = t;
  t = term_c_28;
  t = a_7(n_35, o_35, t);
  t = m_35;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  t = term_e_28;
  p_35 = t;
  t = term_p_19;
  q_35 = t;
  t = term_f_28;
  t = a_7(p_35, q_35, t);
  t = term_g_28;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, r_5, s_5, t);
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm k_28 = t;
        int l_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(t_5, u_5, v_5, t);
            LocalPopChoice(l_28);
          }
        else
          {
            t = k_28;
            {
              ATerm m_28 = t;
              int n_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(w_5, x_5, y_5, t);
                  LocalPopChoice(n_28);
                }
              else
                {
                  t = m_28;
                  {
                    ATerm o_28 = t;
                    int p_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(p_28);
                      }
                    else
                      {
                        t = o_28;
                        {
                          ATerm q_28 = t;
                          int r_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(r_28);
                            }
                          else
                            {
                              t = q_28;
                              {
                                ATerm s_28 = t;
                                int t_28 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(z_5, a_6, b_6, t);
                                    LocalPopChoice(t_28);
                                  }
                                else
                                  {
                                    t = s_28;
                                    {
                                      ATerm x_28 = t;
                                      int y_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(y_28);
                                        }
                                      else
                                        {
                                          t = x_28;
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
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_19;
  t = whoami_0_0(t);
  r_35 = t;
  t = term_i_18;
  t_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_28), r_35);
  u_35 = t;
  t = SSL_printnl(t_35, u_35);
  t = term_l_9;
  s_35 = t;
  t = SSL_exit(s_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  t = term_p_8;
  v_35 = t;
  t = term_a_29;
  w_35 = t;
  t = term_d_29;
  t = x_6(v_35, w_35, t);
  return(t);
}
static ATerm u_6 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_33, u_33);
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      t = SSL_addr(t_33, u_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_35;
      t = f_79(t);
    }
  else
    {
      ATerm d_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      t = foldr_2_0(f_79, g_79, t);
      d_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_35, d_36);
      t = g_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_6(q_13, r_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_36 = NULL,j_13 = NULL,k_13 = NULL;
  t = times_0_0(t);
  k_13 = t;
  t = SSL_explode_term(k_13);
  if(match_cons(t, sym__2))
    {
      ATerm g_29 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  t = foldr_2_0(g_6, i_6, t);
  g_36 = t;
  t = SSL_TicksToSeconds(g_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
  c_37 = t;
  if(match_cons(t, sym__2))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_37;
        if((d_37 != t))
          {
            _fail(t);
          }
        t = c_37;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
        {
          ATerm k_29 = t;
          int l_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_37, e_37);
              LocalPopChoice(l_29);
            }
          else
            {
              t = k_29;
              t = SSL_gtr(d_37, e_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_37, e_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
        t = term_p_8;
        l_37 = t;
        t = term_e_9;
        m_37 = t;
        t = term_i_9;
        t = x_6(l_37, m_37, t);
        k_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_37, term_l_9);
        t = geq_0_0(t);
        t = i_37;
        t = w_83(t);
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = i_37;
      }
  }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,w_37 = NULL,x_37 = NULL;
  t = run_time_0_0(t);
  o_37 = t;
  t = term_p_19;
  t = whoami_0_0(t);
  p_37 = t;
  t = term_i_18;
  w_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_29), o_37), term_c_10), p_37);
  x_37 = t;
  t = SSL_printnl(w_37, x_37);
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_29), o_37), term_c_10), p_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_26;
  y_37 = t;
  t = SSL_exit(y_37);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  p_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_38 = ATgetArgument(t, 0);
          {
            ATerm l_14 = NULL,g_4 = NULL;
            t = SSLgetAnnotations(p_38);
            l_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_38);
            g_4 = t;
            t = SSLsetAnnotations(g_4, l_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_38 = NULL,g_38 = NULL;
      t = term_p_8;
      f_38 = t;
      t = term_s_29;
      g_38 = t;
      t = term_t_29;
      t = x_6(f_38, g_38, t);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = fetch_1_0(z_6, t);
    }
  t = g_88(t);
  return(t);
}
ATerm map_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm h_39 (ATerm t)
  {
    ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
    c_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_39;
      }
    else
      {
        ATerm c_15 = NULL,f_15 = NULL,g_15 = NULL,i_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_39 = ATgetFirst((ATermList) t);
            e_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_39);
        c_15 = t;
        t = d_39;
        t = z_71(t);
        f_15 = t;
        t = e_39;
        t = h_39(t);
        g_15 = t;
        t = (ATerm) ATinsert(CheckATermList(g_15), f_15);
        i_4 = t;
        t = SSLsetAnnotations(i_4, c_15);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_39 = NULL,q_39 = NULL;
        static ATerm b_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_39)), not_null(q_39));
          return(t);
        }
        t = l_39;
        t = i_0(t);
        if(((p_39 != NULL) && (p_39 != t)))
          _fail(t);
        else
          p_39 = t;
        t = k_39;
        t = g_0(t);
        if(((q_39 != NULL) && (q_39 != t)))
          _fail(t);
        else
          q_39 = t;
        t = l_39;
        t = reverse_acc_2_0(g_0, b_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,o_4 = NULL;
  y_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  w_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_39);
  o_4 = t;
  t = SSLsetAnnotations(o_4, w_39);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_40 = NULL;
  a_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_40), term_u_29);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = NULL,v_39 = NULL;
      t = term_p_8;
      u_39 = t;
      t = term_a_29;
      v_39 = t;
      t = term_d_29;
      t = x_6(u_39, v_39, t);
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      t = fetch_1_0(c_7, t);
    }
  t = term_x_29;
  t = echo_0_0(t);
  t = term_r_27;
  s_39 = t;
  t = term_s_27;
  t_39 = t;
  t = term_y_29;
  t = x_6(s_39, t_39, t);
  t = reverse_acc_2_0(_id, f_7, t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    b_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_41 = ATgetFirst((ATermList) t);
        d_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_15 = NULL,g_16 = NULL,r_4 = NULL;
          t = SSLgetAnnotations(b_41);
          u_15 = t;
          t = c_41;
          t = j_72(t);
          g_16 = t;
          t = (ATerm) ATinsert(CheckATermList(d_41), g_16);
          r_4 = t;
          t = SSLsetAnnotations(r_4, u_15);
          LocalPopChoice(c_30);
        }
      else
        {
          t = b_30;
          {
            ATerm r_16 = NULL,v_16 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(b_41);
            r_16 = t;
            t = d_41;
            t = e_41(t);
            v_16 = t;
            t = (ATerm) ATinsert(CheckATermList(v_16), c_41);
            s_4 = t;
            t = SSLsetAnnotations(s_4, r_16);
          }
        }
    }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_30 = ATgetFirst((ATermList) t);
                ATerm g_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_41;
          }
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATinsert(ATempty, l_41);
      }
  }
  m_41 = t;
  t = term_t_8;
  n_41 = t;
  t = SSL_printnl(n_41, m_41);
  t = l_41;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL;
  t = term_p_8;
  x_41 = t;
  t = term_a_29;
  y_41 = t;
  t = term_d_29;
  t = x_6(x_41, y_41, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  t = term_h_30;
  z_41 = t;
  t = term_p_19;
  a_42 = t;
  t = term_j_30;
  t = a_7(z_41, a_42, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = term_h_30;
  f_42 = t;
  t = term_p_19;
  g_42 = t;
  t = term_j_30;
  t = a_7(f_42, g_42, t);
  t = term_u_19;
  b_42 = t;
  t = term_p_19;
  c_42 = t;
  t = term_l_30;
  t = a_7(b_42, c_42, t);
  t = term_m_30;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, i_7, j_7, t);
      LocalPopChoice(r_30);
    }
  else
    {
      t = p_30;
      t = Option_3_0(l_7, n_7, p_7, t);
    }
  return(t);
}
static ATerm a_7 (ATerm f_39, ATerm g_39, ATerm t)
{
  ATerm i_42 = NULL;
  t = term_p_8;
  i_42 = t;
  t = SSL_table_put(i_42, f_39, g_39);
  t = (ATerm) ATmakeAppl(sym__3, term_p_8, f_39, g_39);
  return(t);
}
static ATerm y_6 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,n_42 = NULL;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_31 = ATgetArgument(t, 0);
            ATerm c_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = x_6(u_36, v_36, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  l_42 = t;
  t = (ATerm) ATinsert(CheckATermList(l_42), t_36);
  n_42 = t;
  t = SSL_table_put(u_36, v_36, n_42);
  t = k_42;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
      t = term_p_19;
      t = e_0(t);
      v_42 = t;
      t = term_r_27;
      w_42 = t;
      t = term_s_27;
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_27, term_s_27, v_42);
      t = y_6(w_42, x_42, v_42, t);
      _fail(t);
    }
  else
    {
      ATerm a_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_42 = ATgetFirst((ATermList) t);
          u_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_42;
      t = c_0(t);
      t = term_p_19;
      t = d_0(t);
      a_43 = t;
      t = (ATerm) ATinsert(CheckATermList(u_42), a_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm y_58 (ATerm), ATerm z_58 (ATerm), ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,x_4 = NULL;
  g_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_43 = ATgetFirst((ATermList) t);
      d_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_43);
  b_43 = t;
  t = c_43;
  t = y_58(t);
  e_43 = t;
  t = d_43;
  t = z_58(t);
  f_43 = t;
  t = (ATerm) ATinsert(CheckATermList(f_43), e_43);
  x_4 = t;
  t = SSLsetAnnotations(x_4, b_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL,f_5 = NULL;
  q_43 = t;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_31;
        t = e_90(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
      }
  }
  t = q_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  r_43 = t;
  t = term_a_29;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, s_43);
  t = a_7(w_43, s_43, t);
  t = t_43;
  {
    static ATerm h_44 (ATerm t)
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_44 = NULL;
              a_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_44;
              LocalPopChoice(o_31);
            }
          else
            {
              t = m_31;
              t = e_90(t);
              t = Cons_2_0(_id, h_44, t);
            }
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
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
  v_43 = t;
  t = (ATerm) ATinsert(CheckATermList(v_43), (ATerm) ATmakeAppl(sym_Program_1, s_43));
  f_5 = t;
  t = SSLsetAnnotations(f_5, r_43);
  return(t);
}
static ATerm w_7 (ATerm t)
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
static ATerm a_8 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  t = term_s_29;
  u_44 = t;
  t = term_p_19;
  v_44 = t;
  t = term_p_31;
  t = a_7(u_44, v_44, t);
  t = term_r_31;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  o_44 = t;
  t = term_r_27;
  q_44 = t;
  t = term_s_27;
  r_44 = t;
  t = (ATerm) ATempty;
  s_44 = t;
  t = SSL_table_put(q_44, r_44, s_44);
  t = o_44;
  {
    static ATerm r_7 (ATerm t)
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_90(t);
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
                t = Option_3_0(w_7, a_8, b_8, t);
                LocalPopChoice(x_31);
              }
            else
              {
                t = w_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_7, t);
  }
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_45 = NULL;
        g_45 = t;
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_17 = NULL;
              t = g_45;
              {
                ATerm d_32 = t;
                int e_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_17 = NULL,j_17 = NULL;
                    t = term_p_8;
                    i_17 = t;
                    t = term_s_29;
                    j_17 = t;
                    t = term_t_29;
                    t = x_6(i_17, j_17, t);
                    LocalPopChoice(e_32);
                  }
                else
                  {
                    t = d_32;
                    t = fetch_1_0(c_8, t);
                  }
              }
              t = g_45;
              t = default_system_usage_0_0(t);
              t = term_x_26;
              h_17 = t;
              t = SSL_exit(h_17);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              {
                ATerm v_17 = NULL,w_17 = NULL,y_17 = NULL;
                t = term_p_8;
                w_17 = t;
                t = term_h_30;
                y_17 = t;
                t = term_f_32;
                t = x_6(w_17, y_17, t);
                t = g_45;
                t = default_system_about_0_0(t);
                t = term_x_26;
                v_17 = t;
                t = SSL_exit(v_17);
              }
            }
        }
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm i_32 = t;
          int j_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
              static ATerm d_8 (ATerm t)
              {
                ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,q_5 = NULL;
                m_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_45);
                k_45 = t;
                t = l_45;
                if(((m_44 != NULL) && (m_44 != t)))
                  _fail(t);
                else
                  m_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_45);
                q_5 = t;
                t = SSLsetAnnotations(q_5, k_45);
                return(t);
              }
              t = fetch_1_0(d_8, t);
              t = term_i_18;
              i_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_44)), term_m_32);
              j_45 = t;
              t = SSL_printnl(i_45, j_45);
              t = (ATerm) ATmakeAppl(sym__2, term_i_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_44)), term_m_32));
              t = default_system_usage_0_0(t);
              t = term_l_9;
              h_45 = t;
              t = SSL_exit(h_45);
              LocalPopChoice(j_32);
            }
          else
            {
              t = i_32;
            }
        }
      }
  }
  n_44 = t;
  t = term_r_27;
  p_44 = t;
  t = SSL_table_destroy(p_44);
  t = n_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL;
  t = parse_options_1_0(i_88, t);
  r_45 = t;
  t = term_n_32;
  u_45 = t;
  t = SSL_table_create(u_45);
  t = term_n_32;
  s_45 = t;
  t = term_q_32;
  t_45 = t;
  t = SSL_table_put(s_45, t_45, r_45);
  t = r_45;
  t = k_88(t);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_88, t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = xtc_temp_files_1_0(f_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
      t = term_p_8;
      y_45 = t;
      t = term_q_19;
      z_45 = t;
      t = term_y_32;
      t = x_6(y_45, z_45, t);
      x_45 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_45);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = term_w_8;
    }
  t = ppgen_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, e_8, t);
  return(t);
}
