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
ATerm term_o_34;
ATerm term_b_34;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_n_33;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_f_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_z_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_s_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_h_26;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_n_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_q_23;
ATerm term_n_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_i_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_v_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
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
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_m_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_a_9);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_m_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_10, term_s_9, term_y_10);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_j_11, term_k_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_11, term_o_11, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_t_11, term_w_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_a_12, term_d_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_12, term_j_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_v_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_b_13, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_k_13, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_s_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_x_13, term_y_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_i_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_k_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_p_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_f_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_k_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_o_16, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_k_17, term_l_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_v_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_e_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_n_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_c_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym__2, term_y_22, term_z_22);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.tbl", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-desugar", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_k_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_w_26);
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_s_19);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_28);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym__2, term_q_25, term_f_20);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_w_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_z_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_z_28);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_f_20);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_b_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_p_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_t_28, term_u_28);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_f_20);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_f_20);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_f_20);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, (ATerm) ATempty);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_o_31);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_g_20);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm w_14, ATerm x_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm r_6 (ATerm e_34, ATerm f_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm s_6 (ATerm w_17, ATerm x_17, ATerm t);
static ATerm t_6 (ATerm e_79 (ATerm), ATerm k_186, ATerm g_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t);
static ATerm u_6 (ATerm o_14, ATerm p_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm h_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_77 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm x_101 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_10 (ATerm t_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm w_6 (ATerm t_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm t);
static ATerm x_6 (ATerm n_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm z_98 (ATerm), ATerm t);
static ATerm z_6 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm k_25, ATerm j_25, ATerm t);
static ATerm a_7 (ATerm g_88 (ATerm), ATerm g_25, ATerm f_25, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm b_7 (ATerm l_46, ATerm m_46, ATerm n_46, ATerm t);
static ATerm c_7 (ATerm b_99 (ATerm), ATerm v_46, ATerm u_46, ATerm t);
static ATerm h_7 (ATerm w_51, ATerm x_51, ATerm t);
static ATerm r_17 (ATerm j_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_7 (ATerm c_18, ATerm t);
static ATerm e_7 (ATerm t_32, ATerm u_32, ATerm t);
static ATerm f_7 (ATerm f_52, ATerm g_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_20 (ATerm t_18, ATerm t);
static ATerm w_20 (ATerm c_19, ATerm d_19, ATerm e_19, ATerm t);
static ATerm y_20 (ATerm y_19, ATerm z_19, ATerm a_20, ATerm t);
static ATerm g_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm n_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm d_27 (ATerm v_25, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_parse_sdf2_0_1 (ATerm n_54, ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm p_7 (ATerm h_47, ATerm i_47, ATerm t);
static ATerm j_7 (ATerm t_45, ATerm u_45, ATerm t);
ATerm end_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_94 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_7 (ATerm y_33, ATerm z_33, ATerm t);
ATerm foldr_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm u_98 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm need_help_1_0 (ATerm e_103 (ATerm), ATerm t);
static ATerm t_7 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm t);
static ATerm u_7 (ATerm j_50, ATerm k_50, ATerm t);
ATerm lookup_table_0_1 (ATerm a_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_50, ATerm p_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_7 (ATerm l_50, ATerm m_50, ATerm t);
static ATerm n_7 (ATerm q_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm s_7 (ATerm t_50, ATerm u_50, ATerm t);
static ATerm q_7 (ATerm o_45, ATerm p_45, ATerm n_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
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
    ATerm m_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = k_1;
        t = q_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, l_1, e_0);
        t = i_7(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(s_8);
      }
    else
      {
        t = m_8;
        {
          ATerm t_8 = t;
          int v_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = k_1;
              t = q_0(t);
              z_0 = t;
              {
                ATerm w_8 = t;
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
                            if((l_1 != t))
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
                    t = w_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, z_0);
              t = i_7(l_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(v_8);
            }
          else
            {
              t = t_8;
              t = k_1;
              t = q_0(t);
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
static ATerm i_7 (ATerm w_14, ATerm x_14, ATerm t)
{
  t = SSL_copy(w_14, x_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm x_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,h_2 = NULL;
      t = term_z_8;
      g_2 = t;
      t = term_a_9;
      h_2 = t;
      t = term_b_9;
      t = p_7(g_2, h_2, t);
      LocalPopChoice(y_8);
    }
  else
    {
      t = x_8;
      t = term_c_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_1 = NULL,q_1 = NULL;
      t = term_a_9;
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,t_1 = NULL;
            t = term_z_8;
            r_1 = t;
            t = term_a_9;
            t_1 = t;
            t = term_b_9;
            t = p_7(r_1, t_1, t);
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            t = term_c_9;
          }
      }
      p_1 = t;
      t = term_f_9;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_f_9, p_1);
      t = i_7(q_1, p_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm h_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm r_6 (ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm i_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_34, f_34);
      LocalPopChoice(l_9);
    }
  else
    {
      t = i_9;
      t = SSL_subtr(e_34, f_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  t = term_m_9;
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_2 = NULL,d_3 = NULL;
        t = term_z_8;
        y_2 = t;
        t = term_m_9;
        d_3 = t;
        t = term_r_9;
        t = p_7(y_2, d_3, t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = term_s_9;
      }
  }
  l_2 = t;
  t = term_s_9;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_s_9);
  t = r_6(l_2, n_2, t);
  m_2 = t;
  t = SSL_int_to_string(m_2);
  k_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term_m_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_f_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_w_9);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_3, (ATerm) ATinsert(ATempty, term_w_9));
      t = h_7(i_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm w_17, ATerm x_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(w_17, x_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm t_6 (ATerm e_79 (ATerm), ATerm k_186, ATerm g_18, ATerm t)
{
  ATerm o_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_186, term_x_9);
  t = g_7(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, g_18);
  t = e_79(t);
  t = fclose_0_0(t);
  t = g_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm u_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_9 = ATgetArgument(t, 0);
      if(match_cons(y_9, sym_Stream_1))
        {
          u_3 = ATgetArgument(y_9, 0);
        }
      else
        _fail(t);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(u_3, y_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm p_3 = NULL,s_3 = NULL;
  s_3 = t;
  t = xtc_new_file_0_0(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, s_3);
  t = t_6(b_0, p_3, s_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_3);
  t = xtc_transform_file_2_0(w_100, x_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_execvp(o_14, p_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL,d_5 = NULL,h_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_5 = ATgetArgument(t, 0);
      {
        ATerm d_2 = NULL,e_2 = NULL;
        t = SSL_int_to_string(c_5);
        d_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), d_2), term_c_10);
        e_2 = t;
        t = SSL_concat_strings(e_2);
      }
    }
  else
    {
      ATerm w_2 = NULL,x_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_5 = ATgetArgument(t, 0);
          d_5 = ATgetArgument(t, 1);
          h_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_5);
      w_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_5), term_i_10), w_2), term_h_10), c_5);
      x_2 = t;
      t = SSL_concat_strings(x_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_84 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = h_84(t);
    if(((k_5 != NULL) && (k_5 != t)))
      _fail(t);
    else
      k_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(k_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm q_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_10 = ATgetArgument(t, 0);
              if((l_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_18), term_z_17), term_p_17), term_h_17), term_d_17), term_v_16), term_r_16), term_l_16), term_g_16), term_x_15), term_r_15), term_l_15), term_f_15), term_b_15), term_v_14), term_r_14), term_l_14), term_b_14), term_u_13), term_m_13), term_g_13), term_y_12), term_n_12), term_e_12), term_x_11), term_q_11), term_l_11), term_e_11);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = q_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_5 = NULL,i_6 = NULL;
  q_5 = t;
  {
    ATerm i_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm m_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_18);
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,j_3 = NULL,l_3 = NULL;
              t = i_6;
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
              f_3 = t;
              t = term_u_18;
              j_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_w_18);
              l_3 = t;
              t = SSL_printnl(j_3, l_3);
              t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_w_18));
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              t = q_5;
            }
        }
      }
    else
      {
        t = i_18;
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
ATerm fork_and_wait_1_0 (ATerm t_77 (ATerm), ATerm t)
{
  ATerm l_7 = NULL,v_7 = NULL;
  v_7 = t;
  t = fork_0_0(t);
  l_7 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_7;
        t = t_77(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = SSL_waitpid(l_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            if(((ATgetType(z_18) != AT_INT) || (ATgetInt((ATermInt) z_18) != 0)))
              _fail(t);
            {
              ATerm g_19 = ATgetArgument(t, 1);
            }
            {
              ATerm h_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_101 (ATerm), ATerm t)
{
  ATerm z_7 = NULL,c_8 = NULL;
  c_8 = t;
  t = x_101(t);
  t = xtc_find_0_0(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, c_8);
  {
    static ATerm i_0 (ATerm t)
    {
      ATerm d_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, z_7, c_8);
      t = u_6(z_7, c_8, t);
      t = term_i_19;
      d_8 = t;
      t = SSL_exit(d_8);
      return(t);
    }
    t = fork_and_wait_1_0(i_0, t);
  }
  t = c_8;
  return(t);
}
ATerm at_end_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  static ATerm p_9 (ATerm t)
  {
    ATerm j_9 = NULL,k_9 = NULL,n_9 = NULL;
    n_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_9 = ATgetFirst((ATermList) t);
        k_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_3 = NULL,a_4 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(n_9);
          w_3 = t;
          t = k_9;
          t = p_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), j_9);
          u_0 = t;
          t = SSLsetAnnotations(u_0, w_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_9;
        t = m_84(t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_8 = NULL,i_8 = NULL,j_8 = NULL;
  g_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_8;
    }
  else
    {
      static ATerm k_0 (ATerm t)
      {
        t = not_null(j_8);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_8 = ATgetFirst((ATermList) t);
          if(((j_8 != NULL) && (j_8 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_8;
      t = at_end_1_0(k_0, t);
    }
  return(t);
}
static ATerm e_10 (ATerm t_9, ATerm t)
{
  ATerm u_9 = NULL;
  t = SSL_explode_term(t_9);
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_9;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL;
  b_10 = t;
  if(match_cons(t, sym__2))
    {
      z_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_0 (ATerm t)
            {
              t = a_10;
              return(t);
            }
            t = z_9;
            t = at_end_1_0(n_0, t);
            LocalPopChoice(o_19);
          }
        else
          {
            t = n_19;
            t = e_10(b_10, t);
          }
      }
    }
  else
    {
      t = e_10(b_10, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  k_10 = t;
  t = t_94(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_10, m_35, k_35);
  t = q_7(f_10, m_35, k_35, t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL;
        t = term_s_19;
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, term_s_19);
        t = p_7(f_10, p_10, t);
        {
          ATerm t_19 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_19;
            }
        }
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_10 = ATgetFirst((ATermList) t);
      j_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_10, term_s_19, (ATerm) ATinsert(CheckATermList(j_10), (ATerm) ATinsert(CheckATermList(g_10), m_35)));
  t = lookup_table_0_1(f_10, t);
  o_10 = t;
  t = term_s_19;
  l_10 = t;
  t = (ATerm) ATinsert(CheckATermList(j_10), (ATerm) ATinsert(CheckATermList(g_10), m_35));
  m_10 = t;
  t = o_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(l_10, m_10, n_10, t);
  t = k_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL,o_4 = NULL;
      v_10 = t;
      t = term_w_19;
      o_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_10, term_w_19);
      t = e_7(v_10, o_4, t);
      r_10 = t;
      t = SSL_mkstemp(r_10);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm w_10 = NULL;
        t = term_x_19;
        w_10 = t;
        t = SSL_perror(w_10);
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
static ATerm s_0 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
  t = P__tmpdir_0_0(t);
  c_11 = t;
  t = term_c_20;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_11, term_c_20);
  t = e_7(c_11, d_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_20;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, term_f_20);
  t = w_6(s_0, a_11, b_11, t);
  t = SSL_close(z_10);
  t = a_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_11 = NULL,n_11 = NULL;
      t = g_11;
      t = xtc_new_file_0_0(t);
      i_11 = t;
      t = t_0(t);
      n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(ATinsert(ATempty, i_11), term_a_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_11);
    }
  else
    {
      ATerm u_11 = NULL,v_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_11;
      t = xtc_new_file_0_0(t);
      u_11 = t;
      t = t_0(t);
      v_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, u_11), term_a_9), h_11), term_g_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_11);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_12 = NULL,f_12 = NULL,g_12 = NULL;
        t = term_z_8;
        f_12 = t;
        t = term_m_9;
        g_12 = t;
        t = term_r_9;
        t = p_7(f_12, g_12, t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_o_11);
        t = geq_0_0(t);
        t = z_11;
        t = w_98(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = z_11;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_20);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL,o_12 = NULL,p_12 = NULL;
  k_12 = t;
  t = c_79(t);
  l_12 = t;
  t = term_u_18;
  o_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_12), l_12);
  p_12 = t;
  t = SSL_printnl(o_12, p_12);
  t = k_12;
  return(t);
}
static ATerm x_6 (ATerm n_50, ATerm t)
{
  t = SSL_hashtable_keys(n_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm s_12 = NULL,u_12 = NULL;
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), s_12);
    t = p_7(not_null(q_12), s_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, u_12);
    return(t);
  }
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = lookup_table_0_1(q_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(r_12, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,e_13 = NULL,h_13 = NULL;
        t = term_z_8;
        e_13 = t;
        t = term_m_9;
        h_13 = t;
        t = term_r_9;
        t = p_7(e_13, h_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_f_17);
        t = geq_0_0(t);
        t = w_12;
        t = y_98(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm n_13 = NULL;
  n_13 = t;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
        t = term_z_8;
        q_13 = t;
        t = term_m_9;
        r_13 = t;
        t = term_r_9;
        t = p_7(q_13, r_13, t);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_13, term_f_14);
        t = geq_0_0(t);
        t = n_13;
        t = x_98(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = n_20;
        t = n_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_13 = NULL,a_14 = NULL,h_14 = NULL;
        t = term_z_8;
        a_14 = t;
        t = term_m_9;
        h_14 = t;
        t = term_r_9;
        t = p_7(a_14, h_14, t);
        z_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_13, term_t_11);
        t = geq_0_0(t);
        t = w_13;
        t = z_98(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = w_13;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm k_25, ATerm j_25, ATerm t)
{
  t = k_88(t);
  {
    static ATerm y_0 (ATerm t)
    {
      ATerm j_14 = NULL;
      j_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_25, j_14);
      t = j_88(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = j_25;
  return(t);
}
static ATerm a_7 (ATerm g_88 (ATerm), ATerm g_25, ATerm f_25, ATerm t)
{
  static ATerm w_15 (ATerm t)
  {
    ATerm j_15 = NULL,n_15 = NULL,o_15 = NULL;
    j_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_15 = ATgetFirst((ATermList) t);
            o_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_15;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = f_25;
                  return(t);
                }
                t = z_6(g_88, d_1, n_15, o_15, t);
              }
              t = w_15(t);
              LocalPopChoice(z_20);
            }
          else
            {
              t = x_20;
              {
                ATerm b_5 = NULL,g_5 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(j_15);
                b_5 = t;
                t = o_15;
                t = w_15(t);
                g_5 = t;
                t = (ATerm) ATinsert(CheckATermList(g_5), n_15);
                w_0 = t;
                t = SSLsetAnnotations(w_0, b_5);
              }
            }
        }
      }
    return(t);
  }
  t = g_25;
  t = w_15(t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      if((w_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm l_46, ATerm m_46, ATerm n_46, ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  b_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            ATerm e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
        t = p_7(l_46, m_46, t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = (ATerm) ATempty;
      }
  }
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_16, n_46);
  t = a_7(e_1, d_16, n_46, t);
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_46, m_46, c_16);
  t = lookup_table_0_1(l_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(m_46, c_16, e_16, t);
  t = b_16;
  return(t);
}
static ATerm c_7 (ATerm b_99 (ATerm), ATerm v_46, ATerm u_46, ATerm t)
{
  static ATerm g_1 (ATerm t)
  {
    ATerm x_16 = NULL,y_16 = NULL;
    if(match_cons(t, sym__2))
      {
        x_16 = ATgetArgument(t, 0);
        y_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, v_46, x_16, y_16);
    t = b_99(t);
    return(t);
  }
  t = u_46;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm h_7 (ATerm w_51, ATerm x_51, ATerm t)
{
  t = SSL_access(w_51, x_51);
  return(t);
}
static ATerm r_17 (ATerm j_17, ATerm t)
{
  t = SSL_fclose(j_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_17 = ATgetArgument(t, 0);
      {
        ATerm g_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_17);
            LocalPopChoice(i_21);
          }
        else
          {
            t = g_21;
            t = r_17(n_17, t);
          }
      }
    }
  else
    {
      t = r_17(n_17, t);
    }
  return(t);
}
static ATerm d_7 (ATerm c_18, ATerm t)
{
  t = SSL_read_term_from_stream(c_18);
  return(t);
}
static ATerm e_7 (ATerm t_32, ATerm u_32, ATerm t)
{
  t = SSL_strcat(t_32, u_32);
  return(t);
}
static ATerm f_7 (ATerm f_52, ATerm g_52, ATerm t)
{
  ATerm s_17 = NULL;
  t = SSL_fopen(f_52, g_52);
  s_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_stdin_stream();
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stdout_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_18 = NULL;
  t = SSL_stderr_stream();
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_18);
  return(t);
}
static ATerm v_20 (ATerm t_18, ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_explode_term(t_18);
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
          {
            v_18 = ATgetFirst((ATermList) k_21);
            {
              ATerm l_21 = (ATerm) ATgetNext((ATermList) k_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_20 (ATerm c_19, ATerm d_19, ATerm e_19, ATerm t)
{
  ATerm j_19 = NULL,l_19 = NULL,m_19 = NULL,p_19 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(e_19);
  m_19 = t;
  t = c_19;
  if(match_cons(t, sym_Path_1))
    {
      p_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_19, d_19);
  b_1 = t;
  t = SSLsetAnnotations(b_1, m_19);
  if(match_cons(t, sym__2))
    {
      j_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(j_19, l_19, t);
  return(t);
}
static ATerm y_20 (ATerm y_19, ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,j_20 = NULL,o_20 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(a_20);
  j_20 = t;
  t = SSL_is_string(y_19);
  o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_20, z_19);
  c_1 = t;
  t = SSLsetAnnotations(c_1, j_20);
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(d_20, e_20, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,u_20 = NULL;
  q_20 = t;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_20(q_20, t);
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            {
              ATerm p_21 = t;
              int q_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_20(r_20, u_20, q_20, t);
                  LocalPopChoice(q_21);
                }
              else
                {
                  t = p_21;
                  t = y_20(r_20, u_20, q_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_20(q_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_21 = NULL,f_21 = NULL,h_21 = NULL,m_21 = NULL;
  m_21 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_21, term_w_21);
        t = g_7(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm f_6 = NULL,g_6 = NULL;
          t = term_x_21;
          g_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_21, m_21);
          t = e_7(g_6, m_21, t);
          f_6 = t;
          t = SSL_perror(f_6);
          _fail(t);
        }
      }
  }
  f_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(h_21, t);
  a_21 = t;
  t = f_21;
  t = fclose_0_0(t);
  t = a_21;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_y_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_z_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_21 = NULL,s_21 = NULL;
      r_21 = t;
      t = (ATerm) ATinsert(ATempty, term_d_22);
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_21, (ATerm) ATinsert(ATempty, term_d_22));
      t = h_7(r_21, s_21, t);
      LocalPopChoice(c_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_22;
      {
        ATerm e_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_22 = t;
            if((PushChoice() == 0))
              {
                ATerm t_21 = NULL,a_22 = NULL;
                t_21 = t;
                t = (ATerm) ATinsert(ATempty, term_w_9);
                a_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_21, (ATerm) ATinsert(ATempty, term_w_9));
                t = h_7(t_21, a_22, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_22;
              }
            t = debug_1_0(h_1, t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = e_22;
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
  t = term_m_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_n_22;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm e_23 = NULL,i_23 = NULL,j_23 = NULL;
  e_23 = t;
  t = term_u_18;
  i_23 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  j_23 = t;
  t = SSL_printnl(i_23, j_23);
  t = e_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__3))
    {
      o_23 = ATgetArgument(t, 0);
      p_23 = ATgetArgument(t, 1);
      r_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_7(o_23, p_23, r_23, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  t = term_u_18;
  t_23 = t;
  t = (ATerm) ATinsert(ATempty, term_r_22);
  u_23 = t;
  t = SSL_printnl(t_23, u_23);
  t = s_23;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,y_23 = NULL;
  v_23 = t;
  t = term_u_18;
  w_23 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  y_23 = t;
  t = SSL_printnl(w_23, y_23);
  t = v_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,o_22 = NULL,q_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL;
  f_22 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm s_22 = t;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL,d_23 = NULL;
        t = term_y_22;
        c_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_22);
        d_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Imported_1, f_22));
        t = p_7(c_23, d_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_22;
      }
  }
  i_22 = t;
  t = term_y_22;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, term_z_22, (ATerm) ATinsert(ATempty, f_22));
  t = lookup_table_0_1(v_22, t);
  b_23 = t;
  t = term_z_22;
  w_22 = t;
  t = (ATerm) ATinsert(ATempty, f_22);
  x_22 = t;
  t = b_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(w_22, x_22, a_23, t);
  t = i_22;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(w_1, t);
  g_22 = t;
  t = term_y_22;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, g_22);
  t = c_7(x_1, u_22, g_22, t);
  t = if_verbose6_1_0(z_1, t);
  t = term_y_22;
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, (ATerm)ATmakeAppl(sym_Imported_1, f_22), (ATerm) ATempty);
  t = lookup_table_0_1(j_22, t);
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, f_22);
  k_22 = t;
  t = (ATerm) ATempty;
  o_22 = t;
  t = t_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(k_22, o_22, q_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_22, (ATerm)ATmakeAppl(sym_Imported_1, f_22), (ATerm) ATempty);
  t = if_verbose4_1_0(a_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_92 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
  o_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_24;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_24 = ATgetFirst((ATermList) t);
          q_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_6 = NULL,r_7 = NULL,x_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(o_24);
            q_6 = t;
            t = p_24;
            t = n_92(t);
            r_7 = t;
            t = q_24;
            t = filter_1_0(n_92, t);
            x_7 = t;
            t = (ATerm) ATinsert(CheckATermList(x_7), r_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, q_6);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = q_24;
            t = filter_1_0(n_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm t)
{
  static ATerm w_24 (ATerm t)
  {
    ATerm h_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81(t);
        t = w_24(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = h_23;
        t = a_82(t);
      }
    return(t);
  }
  t = w_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm l_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_24 = NULL,a_25 = NULL;
      t = term_z_8;
      z_24 = t;
      t = term_n_23;
      a_25 = t;
      t = term_q_23;
      t = p_7(z_24, a_25, t);
      LocalPopChoice(m_23);
    }
  else
    {
      t = l_23;
      {
        ATerm x_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL;
            t = term_a_24;
            b_25 = t;
            t = SSL_getenv(b_25);
            LocalPopChoice(z_23);
          }
        else
          {
            t = x_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_25 = NULL,o_25 = NULL;
  t = term_y_22;
  m_25 = t;
  t = term_c_24;
  o_25 = t;
  t = term_d_24;
  t = p_7(m_25, o_25, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm e_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_24;
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = if_verbose5_1_0(b_2, t);
  d_25 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL,h_25 = NULL;
        t = term_y_22;
        e_25 = t;
        t = term_z_22;
        h_25 = t;
        t = term_i_24;
        t = p_7(e_25, h_25, t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm i_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_25 = t;
          t = repeat_2_0(i_2, _id, t);
          t = i_25;
        }
      }
  }
  t = d_25;
  t = if_verbose5_1_0(j_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm d_27 (ATerm v_25, ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,c_26 = NULL;
  t = term_y_22;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_25);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Tool_1, v_25));
  t = p_7(b_26, c_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_24 = ATgetFirst((ATermList) t);
      if(match_cons(k_24, sym__2))
        {
          ATerm m_24 = ATgetArgument(k_24, 0);
          z_25 = ATgetArgument(k_24, 1);
        }
      else
        _fail(t);
      {
        ATerm l_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_j_24;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_26 = NULL,e_26 = NULL,g_26 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      g_26 = t;
      if(match_cons(t, sym__2))
        {
          d_26 = ATgetArgument(t, 0);
          e_26 = ATgetArgument(t, 1);
          {
            ATerm t_24 = t;
            int u_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_26 = NULL,m_26 = NULL,o_26 = NULL;
                t = term_y_22;
                m_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, d_26);
                o_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_y_22, (ATerm) ATmakeAppl(sym_Tool_1, d_26));
                t = p_7(m_26, o_26, t);
                {
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((e_26 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(l_26);
                LocalPopChoice(u_24);
              }
            else
              {
                t = t_24;
                t = d_27(g_26, t);
              }
          }
        }
      else
        {
          t = d_27(g_26, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(s_24);
    }
  else
    {
      t = r_24;
      {
        ATerm b_27 = NULL,n_8 = NULL,o_8 = NULL;
        b_27 = t;
        t = term_u_18;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), b_27), term_v_24);
        o_8 = t;
        t = SSL_printnl(n_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_24), b_27), term_v_24);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm c_102 (ATerm), ATerm d_102 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_27 = NULL,u_27 = NULL;
      u_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_27 = ATgetArgument(t, 0);
          {
            ATerm u_8 = NULL,n_1 = NULL;
            t = SSLgetAnnotations(u_27);
            u_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_27);
            n_1 = t;
            t = SSLsetAnnotations(n_1, u_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_27;
        }
      LocalPopChoice(l_25);
      {
        static ATerm a_3 (ATerm t)
        {
          ATerm w_27 = NULL,x_27 = NULL,a_28 = NULL;
          t = term_f_20;
          t = c_102(t);
          t = xtc_find_0_0(t);
          w_27 = t;
          t = term_f_20;
          t = d_102(t);
          x_27 = t;
          t = term_f_20;
          t = pass_v_verbose_0_0(t);
          a_28 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(a_28), x_27), term_q_25), w_27), term_p_25), term_n_25);
          return(t);
        }
        t = xtc_transform_file_2_0(z_2, a_3, t);
      }
    }
  else
    {
      t = c_25;
      {
        static ATerm c_3 (ATerm t)
        {
          ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
          t = term_f_20;
          t = c_102(t);
          t = xtc_find_0_0(t);
          d_28 = t;
          t = term_f_20;
          t = d_102(t);
          e_28 = t;
          t = term_f_20;
          t = pass_v_verbose_0_0(t);
          f_28 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(f_28), e_28), term_q_25), d_28), term_p_25), term_n_25);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, c_3, t);
      }
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_r_25;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm xtc_parse_sdf2_0_1 (ATerm n_54, ATerm t)
{
  static ATerm g_3 (ATerm t)
  {
    t = n_54;
    return(t);
  }
  t = xtc_sglr_2_0(e_3, g_3, t);
  {
    ATerm u_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,g_29 = NULL;
        g_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_29 = ATgetArgument(t, 0);
            {
              ATerm g_9 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(g_29);
              g_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_29);
              s_1 = t;
              t = SSLsetAnnotations(s_1, g_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_29;
          }
        LocalPopChoice(w_25);
        t = xtc_transform_file_2_0(h_3, pass_verbose_0_0, t);
      }
    else
      {
        t = u_25;
        t = xtc_transform_term_2_0(k_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_29 = NULL,u_29 = NULL;
        u_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            t_29 = ATgetArgument(t, 0);
            {
              ATerm v_9 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(u_29);
              v_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_29);
              u_1 = t;
              t = SSLsetAnnotations(u_1, v_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = u_29;
          }
        LocalPopChoice(y_25);
        t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
      }
    else
      {
        t = x_25;
        t = xtc_transform_term_2_0(r_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_AST_0))
    {
      t = v_30;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = v_30;
          {
            ATerm a_26 = t;
            int f_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_11 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    r_11 = ATgetArgument(t, 0);
                    {
                      ATerm b_12 = NULL,y_1 = NULL;
                      t = SSLgetAnnotations(v_30);
                      b_12 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, r_11);
                      y_1 = t;
                      t = SSLsetAnnotations(y_1, b_12);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = v_30;
                  }
                LocalPopChoice(f_26);
                t = xtc_transform_file_2_0(t_3, pass_verbose_0_0, t);
              }
            else
              {
                t = a_26;
                t = xtc_transform_term_2_0(v_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          ATerm y_30 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = term_h_26;
          y_30 = t;
          t = v_30;
          t = xtc_parse_sdf2_0_1(y_30, t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = NULL,c_31 = NULL;
      t = term_z_8;
      b_31 = t;
      t = term_k_26;
      c_31 = t;
      t = term_n_26;
      t = p_7(b_31, c_31, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      t = term_p_26;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_q_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_r_26;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm k_31 = NULL,n_31 = NULL;
  n_31 = t;
  t = get_input_type_0_0(t);
  k_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_31, n_31);
  t = pre_process_sdf_0_0(t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL,w_31 = NULL;
        w_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_31 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,e_4 = NULL;
              t = SSLgetAnnotations(w_31);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_31);
              e_4 = t;
              t = SSLsetAnnotations(e_4, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_31;
          }
        LocalPopChoice(t_26);
        t = xtc_transform_file_2_0(x_3, pass_verbose_0_0, t);
      }
    else
      {
        t = s_26;
        t = xtc_transform_term_2_0(z_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL,c_13 = NULL,d_13 = NULL;
        b_32 = t;
        t = term_z_8;
        c_13 = t;
        t = term_w_26;
        d_13 = t;
        t = term_x_26;
        t = p_7(c_13, d_13, t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = b_32;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm y_26 = t;
          int z_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_32 = NULL,j_32 = NULL;
              j_32 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  h_32 = ATgetArgument(t, 0);
                  {
                    ATerm j_13 = NULL,f_4 = NULL;
                    t = SSLgetAnnotations(j_32);
                    j_13 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_32);
                    f_4 = t;
                    t = SSLsetAnnotations(f_4, j_13);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = j_32;
                }
              LocalPopChoice(z_26);
              t = xtc_transform_file_2_0(b_4, pass_verbose_0_0, t);
            }
          else
            {
              t = y_26;
              t = xtc_transform_term_2_0(c_4, pass_verbose_0_0, t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_7 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm n_32 = NULL;
  t = lookup_table_0_1(h_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(i_47, n_32, t);
  return(t);
}
static ATerm j_7 (ATerm t_45, ATerm u_45, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  s_32 = t;
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
        t = p_7(t_45, u_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_27 = ATgetFirst((ATermList) t);
            r_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_27);
        {
          ATerm v_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, t_45, u_45, r_32);
          t = lookup_table_0_1(t_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(u_45, r_32, v_32, t);
          t = (ATerm) ATmakeAppl(sym__3, t_45, u_45, r_32);
        }
      }
    else
      {
        t = a_27;
        {
          ATerm d_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
          t = lookup_table_0_1(t_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_7(u_45, d_33, t);
          t = (ATerm) ATmakeAppl(sym__2, t_45, u_45);
        }
      }
  }
  t = s_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,q_33 = NULL;
  k_33 = t;
  t = q_94(t);
  j_33 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL;
        t = term_s_19;
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, term_s_19);
        t = p_7(j_33, r_33, t);
        {
          ATerm h_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_27;
            }
        }
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_33 = ATgetFirst((ATermList) t);
      h_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_33, term_s_19, h_33);
  t = lookup_table_0_1(j_33, t);
  q_33 = t;
  t = term_s_19;
  l_33 = t;
  t = q_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(l_33, h_33, m_33, t);
  t = i_33;
  {
    static ATerm d_4 (ATerm t)
    {
      ATerm s_33 = NULL;
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_33, s_33);
      t = j_7(j_33, s_33, t);
      return(t);
    }
    t = map_1_0(d_4, t);
  }
  t = k_33;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_98 (ATerm), ATerm j_98 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_98(t);
      t = j_98(t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = j_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,x_33 = NULL,a_34 = NULL,d_34 = NULL,g_34 = NULL,h_34 = NULL;
  v_33 = t;
  t = p_94(t);
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_33, term_s_19);
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_27 = ATgetArgument(t, 0);
            ATerm n_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_19;
        l_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_33, term_s_19);
        t = p_7(u_33, l_34, t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = (ATerm) ATempty;
      }
  }
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_33, term_s_19, (ATerm) ATinsert(CheckATermList(x_33), (ATerm) ATempty));
  t = lookup_table_0_1(u_33, t);
  h_34 = t;
  t = term_s_19;
  a_34 = t;
  t = (ATerm) ATinsert(CheckATermList(x_33), (ATerm) ATempty);
  d_34 = t;
  t = h_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(a_34, d_34, g_34, t);
  t = v_33;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(x_34);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = x_34;
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_101 (ATerm), ATerm t)
{
  ATerm p_34 = NULL;
  static ATerm h_4 (ATerm t)
  {
    ATerm q_34 = NULL;
    q_34 = t;
    {
      ATerm q_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34 = NULL,u_34 = NULL;
          t = term_b_20;
          r_34 = t;
          t = term_s_19;
          u_34 = t;
          t = term_s_27;
          t = p_7(r_34, u_34, t);
          LocalPopChoice(r_27);
        }
      else
        {
          t = q_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_34 != NULL) && (p_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_34 = ATgetFirst((ATermList) t);
        {
          ATerm v_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_34;
    t = map_1_0(i_4, t);
    t = q_34;
    t = end_scope_1_0(j_4, t);
    return(t);
  }
  t = begin_scope_1_0(g_4, t);
  t = restore_always_2_0(j_101, h_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,p_35 = NULL;
  a_35 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  b_35 = t;
  t = term_u_18;
  d_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_27), b_35), term_y_27);
  p_35 = t;
  t = SSL_printnl(d_35, p_35);
  t = term_s_9;
  c_35 = t;
  t = SSL_exit(c_35);
  t = a_35;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  if(match_string(t, "-k"))
    {
      t = v_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_35;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  t = SSL_string_to_int(w_35);
  x_35 = t;
  t = term_b_28;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_28, x_35);
  t = s_7(y_35, x_35, t);
  t = w_35;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  if(match_string(t, "-S"))
    {
      t = c_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_36;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_m_9;
  d_36 = t;
  t = term_g_28;
  e_36 = t;
  t = term_h_28;
  t = s_7(d_36, e_36, t);
  t = term_i_28;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_j_28;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,l_36 = NULL;
  h_36 = t;
  t = SSL_string_to_int(h_36);
  i_36 = t;
  t = term_m_9;
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, i_36);
  t = s_7(l_36, i_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_36);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_k_28;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  t = term_q_25;
  n_36 = t;
  t = term_f_20;
  o_36 = t;
  t = term_l_28;
  t = s_7(n_36, o_36, t);
  t = term_m_28;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, r_4, s_4, t);
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
            t = ArgOption_3_0(u_4, x_4, y_4, t);
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            t = Option_3_0(z_4, e_5, f_5, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  if(match_string(t, "-o"))
    {
      t = q_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_36;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  r_36 = t;
  t = term_a_9;
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, r_36);
  t = s_7(s_36, r_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_36);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, m_5, n_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,e_37 = NULL,h_37 = NULL,i_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_37 = NULL,n_37 = NULL,o_37 = NULL;
      t = term_f_20;
      t = p_0(t);
      l_37 = t;
      t = term_t_28;
      n_37 = t;
      t = term_u_28;
      o_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, l_37);
      t = q_7(n_37, o_37, l_37, t);
      _fail(t);
    }
  else
    {
      ATerm v_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_37 = ATgetFirst((ATermList) t);
          e_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_37;
      t = m_0(t);
      t = h_37;
      t = o_0(t);
      v_37 = t;
      t = (ATerm) ATinsert(CheckATermList(i_37), v_37);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  if(match_string(t, "-i"))
    {
      t = z_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_37;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm a_38 = NULL,d_38 = NULL;
  a_38 = t;
  t = term_g_20;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_20, a_38);
  t = s_7(d_38, a_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_38);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, s_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  t = term_k_26;
  g_38 = t;
  t = term_w_28;
  h_38 = t;
  t = term_x_28;
  t = s_7(g_38, h_38, t);
  t = f_38;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm j_38 = NULL,m_38 = NULL,n_38 = NULL;
  j_38 = t;
  t = term_k_26;
  m_38 = t;
  t = term_z_28;
  n_38 = t;
  t = term_a_29;
  t = s_7(m_38, n_38, t);
  t = j_38;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_b_29;
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
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  t = term_w_26;
  p_38 = t;
  t = term_z_28;
  q_38 = t;
  t = term_c_29;
  t = s_7(p_38, q_38, t);
  t = o_38;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_d_29;
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
  ATerm r_38 = NULL,s_38 = NULL;
  t = term_e_29;
  r_38 = t;
  t = term_f_20;
  s_38 = t;
  t = term_h_29;
  t = s_7(r_38, s_38, t);
  t = term_i_29;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, v_5, w_5, t);
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(x_5, y_5, z_5, t);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm o_29 = t;
              int p_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_6, b_6, c_6, t);
                  LocalPopChoice(p_29);
                }
              else
                {
                  t = o_29;
                  {
                    ATerm q_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(r_29);
                      }
                    else
                      {
                        t = q_29;
                        {
                          ATerm s_29 = t;
                          int v_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(v_29);
                            }
                          else
                            {
                              t = s_29;
                              {
                                ATerm w_29 = t;
                                int x_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(d_6, e_6, h_6, t);
                                    LocalPopChoice(x_29);
                                  }
                                else
                                  {
                                    t = w_29;
                                    {
                                      ATerm y_29 = t;
                                      int z_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(z_29);
                                        }
                                      else
                                        {
                                          t = y_29;
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
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_20;
  t = whoami_0_0(t);
  t_38 = t;
  t = term_u_18;
  v_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_30), t_38);
  w_38 = t;
  t = SSL_printnl(v_38, w_38);
  t = term_s_9;
  u_38 = t;
  t = SSL_exit(u_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_38 = NULL,z_38 = NULL;
  t = term_z_8;
  x_38 = t;
  t = term_b_30;
  z_38 = t;
  t = term_c_30;
  t = p_7(x_38, z_38, t);
  return(t);
}
static ATerm k_7 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_33, z_33);
      LocalPopChoice(e_30);
    }
  else
    {
      t = d_30;
      t = SSL_addr(y_33, z_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,f_39 = NULL;
  b_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_39;
      t = j_91(t);
    }
  else
    {
      ATerm i_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_39 = ATgetFirst((ATermList) t);
          f_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_39;
      t = foldr_2_0(j_91, k_91, t);
      i_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_39, i_39);
      t = k_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_g_28;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm g_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      k_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(g_14, k_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_39 = NULL,c_14 = NULL,d_14 = NULL;
  t = times_0_0(t);
  d_14 = t;
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14;
  t = foldr_2_0(j_6, k_6, t);
  l_39 = t;
  t = SSL_TicksToSeconds(l_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
  w_39 = t;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_39;
        if((x_39 != t))
          {
            _fail(t);
          }
        t = w_39;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
        {
          ATerm i_30 = t;
          int j_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_39, y_39);
              LocalPopChoice(j_30);
            }
          else
            {
              t = i_30;
              t = SSL_gtr(x_39, y_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
        t = term_z_8;
        f_40 = t;
        t = term_m_9;
        g_40 = t;
        t = term_r_9;
        t = p_7(f_40, g_40, t);
        e_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_40, term_s_9);
        t = geq_0_0(t);
        t = c_40;
        t = u_98(t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        t = c_40;
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,l_40 = NULL,m_40 = NULL;
  t = run_time_0_0(t);
  i_40 = t;
  t = term_f_20;
  t = whoami_0_0(t);
  j_40 = t;
  t = term_u_18;
  l_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_30), i_40), term_h_10), j_40);
  m_40 = t;
  t = SSL_printnl(l_40, m_40);
  t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_30), i_40), term_h_10), j_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(l_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_28;
  n_40 = t;
  t = SSL_exit(n_40);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  y_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_40 = ATgetArgument(t, 0);
          {
            ATerm i_15 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(y_40);
            i_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_40);
            k_4 = t;
            t = SSLsetAnnotations(k_4, i_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_103 (ATerm), ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_40 = NULL,r_40 = NULL;
      t = term_z_8;
      q_40 = t;
      t = term_p_30;
      r_40 = t;
      t = term_q_30;
      t = p_7(q_40, r_40, t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = fetch_1_0(m_6, t);
    }
  t = e_103(t);
  return(t);
}
static ATerm t_7 (ATerm g_50, ATerm h_50, ATerm i_50, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_hashtable_put(i_50, g_50, h_50);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
static ATerm u_7 (ATerm j_50, ATerm k_50, ATerm t)
{
  t = SSL_hashtable_get(k_50, j_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm a_47, ATerm t)
{
  ATerm j_41 = NULL;
  t = table_hashtable_0_0(t);
  j_41 = t;
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = NULL;
        t = j_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            s_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_7(a_47, s_15, t);
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        {
          ATerm a_16 = NULL;
          t = a_47;
          t = table_create_0_0(t);
          t = j_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              a_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(a_47, a_16, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm m_41 = NULL;
  t = SSL_hashtable_create(o_50, p_50);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL,s_41 = NULL;
  n_41 = t;
  t = term_w_30;
  r_41 = t;
  t = term_x_30;
  s_41 = t;
  t = n_41;
  t = new_hashtable_0_2(r_41, s_41, t);
  o_41 = t;
  t = n_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(n_41, o_41, p_41, t);
  t = n_41;
  return(t);
}
static ATerm m_7 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm t_41 = NULL;
  t = SSL_hashtable_remove(m_50, l_50);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_41);
  return(t);
}
static ATerm n_7 (ATerm q_50, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_hashtable_destroy(q_50);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_table_hashtable();
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  w_41 = t;
  t = table_hashtable_0_0(t);
  x_41 = t;
  t = lookup_table_0_1(w_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(z_41, t);
  t = x_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(w_41, y_41, t);
  t = w_41;
  return(t);
}
ATerm map_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  static ATerm o_42 (ATerm t)
  {
    ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
    l_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_42;
      }
    else
      {
        ATerm j_16 = NULL,m_16 = NULL,q_16 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_42 = ATgetFirst((ATermList) t);
            n_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_42);
        j_16 = t;
        t = m_42;
        t = v_83(t);
        m_16 = t;
        t = n_42;
        t = o_42(t);
        q_16 = t;
        t = (ATerm) ATinsert(CheckATermList(q_16), m_16);
        n_4 = t;
        t = SSLsetAnnotations(n_4, j_16);
      }
    return(t);
  }
  t = o_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_42 = ATgetFirst((ATermList) t);
      s_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_42 = NULL,x_42 = NULL;
        static ATerm n_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_42)), not_null(x_42));
          return(t);
        }
        t = s_42;
        t = l_0(t);
        if(((w_42 != NULL) && (w_42 != t)))
          _fail(t);
        else
          w_42 = t;
        t = r_42;
        t = j_0(t);
        if(((x_42 != NULL) && (x_42 != t)))
          _fail(t);
        else
          x_42 = t;
        t = s_42;
        t = reverse_acc_2_0(j_0, n_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_20;
      t = l_0(t);
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,t_4 = NULL;
  f_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_43);
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_43);
  t_4 = t;
  t = SSLsetAnnotations(t_4, d_43);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_43 = NULL;
  h_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_43), term_z_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  ATerm a_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_43 = NULL,c_43 = NULL;
      t = term_z_8;
      b_43 = t;
      t = term_b_30;
      c_43 = t;
      t = term_c_30;
      t = p_7(b_43, c_43, t);
      LocalPopChoice(d_31);
    }
  else
    {
      t = a_31;
      t = fetch_1_0(o_6, t);
    }
  t = term_e_31;
  t = echo_0_0(t);
  t = term_t_28;
  z_42 = t;
  t = term_u_28;
  a_43 = t;
  t = term_f_31;
  t = p_7(z_42, a_43, t);
  t = reverse_acc_2_0(_id, p_6, t);
  t = map_1_0(v_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm e_44 (ATerm t)
  {
    ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
    b_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_44 = ATgetFirst((ATermList) t);
        d_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_31 = t;
      int h_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_17 = NULL,o_17 = NULL,v_4 = NULL;
          t = SSLgetAnnotations(b_44);
          c_17 = t;
          t = c_44;
          t = f_84(t);
          o_17 = t;
          t = (ATerm) ATinsert(CheckATermList(d_44), o_17);
          v_4 = t;
          t = SSLsetAnnotations(v_4, c_17);
          LocalPopChoice(h_31);
        }
      else
        {
          t = g_31;
          {
            ATerm f_18 = NULL,j_18 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(b_44);
            f_18 = t;
            t = d_44;
            t = e_44(t);
            j_18 = t;
            t = (ATerm) ATinsert(CheckATermList(j_18), c_44);
            w_4 = t;
            t = SSLsetAnnotations(w_4, f_18);
          }
        }
    }
    return(t);
  }
  t = e_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_31 = ATgetFirst((ATermList) t);
                ATerm m_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_44;
          }
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = (ATerm) ATinsert(ATempty, i_44);
      }
  }
  j_44 = t;
  t = term_c_9;
  k_44 = t;
  t = SSL_printnl(k_44, j_44);
  t = i_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_z_8;
  o_44 = t;
  t = term_b_30;
  p_44 = t;
  t = term_c_30;
  t = p_7(o_44, p_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL;
  t = term_o_31;
  q_44 = t;
  t = term_f_20;
  r_44 = t;
  t = term_p_31;
  t = s_7(q_44, r_44, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t = term_o_31;
  u_44 = t;
  t = term_f_20;
  v_44 = t;
  t = term_p_31;
  t = s_7(u_44, v_44, t);
  t = term_k_20;
  s_44 = t;
  t = term_f_20;
  t_44 = t;
  t = term_r_31;
  t = s_7(s_44, t_44, t);
  t = term_s_31;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_6, o_7, w_7, t);
      LocalPopChoice(x_31);
    }
  else
    {
      t = u_31;
      t = Option_3_0(y_7, a_8, b_8, t);
    }
  return(t);
}
static ATerm s_7 (ATerm t_50, ATerm u_50, ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  t = term_z_8;
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_8, t_50, u_50);
  t = lookup_table_0_1(w_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(t_50, u_50, x_44, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_8, t_50, u_50);
  return(t);
}
static ATerm q_7 (ATerm o_45, ATerm p_45, ATerm n_45, ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_32 = ATgetArgument(t, 0);
            ATerm c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
        t = p_7(o_45, p_45, t);
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
  }
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_45, p_45, (ATerm) ATinsert(CheckATermList(b_45), n_45));
  t = lookup_table_0_1(o_45, t);
  e_45 = t;
  t = (ATerm) ATinsert(CheckATermList(b_45), n_45);
  c_45 = t;
  t = e_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(p_45, c_45, d_45, t);
  t = a_45;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
      t = term_f_20;
      t = h_0(t);
      x_45 = t;
      t = term_t_28;
      y_45 = t;
      t = term_u_28;
      z_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_28, term_u_28, x_45);
      t = q_7(y_45, z_45, x_45, t);
      _fail(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_45;
      t = d_0(t);
      t = term_f_20;
      t = g_0(t);
      c_46 = t;
      t = (ATerm) ATinsert(CheckATermList(w_45), c_46);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,i_5 = NULL;
  i_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_46 = ATgetFirst((ATermList) t);
      f_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_46);
  d_46 = t;
  t = e_46;
  t = o_70(t);
  g_46 = t;
  t = f_46;
  t = p_70(t);
  h_46 = t;
  t = (ATerm) ATinsert(CheckATermList(h_46), g_46);
  i_5 = t;
  t = SSLsetAnnotations(i_5, d_46);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,y_46 = NULL,z_46 = NULL,f_47 = NULL,g_47 = NULL,r_5 = NULL;
  s_46 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_32;
        t = c_105(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
      }
  }
  t = s_46;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_46 = ATgetFirst((ATermList) t);
      z_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_46);
  t_46 = t;
  t = term_b_30;
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, y_46);
  t = s_7(g_47, y_46, t);
  t = z_46;
  {
    static ATerm s_47 (ATerm t)
    {
      ATerm g_32 = t;
      int i_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32 = t;
          int l_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_47 = NULL;
              l_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_47;
              LocalPopChoice(l_32);
            }
          else
            {
              t = k_32;
              t = c_105(t);
              t = Cons_2_0(_id, s_47, t);
            }
          LocalPopChoice(i_32);
        }
      else
        {
          t = g_32;
          {
            ATerm o_47 = NULL,p_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_47 = ATgetFirst((ATermList) t);
                p_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_47), (ATerm) ATmakeAppl(sym_Undefined_1, o_47));
          }
        }
      return(t);
    }
    t = s_47(t);
  }
  f_47 = t;
  t = (ATerm) ATinsert(CheckATermList(f_47), (ATerm) ATmakeAppl(sym_Program_1, y_46));
  r_5 = t;
  t = SSLsetAnnotations(r_5, t_46);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm f_48 = NULL;
  f_48 = t;
  if(match_string(t, "--help"))
    {
      t = f_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_48;
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL;
  t = term_p_30;
  g_48 = t;
  t = term_f_20;
  h_48 = t;
  t = term_m_32;
  t = s_7(g_48, h_48, t);
  t = term_o_32;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
  z_47 = t;
  t = term_t_28;
  a_48 = t;
  t = term_q_32;
  t = lookup_table_0_1(a_48, t);
  e_48 = t;
  t = term_u_28;
  b_48 = t;
  t = (ATerm) ATempty;
  c_48 = t;
  t = e_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(b_48, c_48, d_48, t);
  t = z_47;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_105(t);
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_8, h_8, k_8, t);
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_8, t);
  }
  {
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL;
        s_48 = t;
        {
          ATerm c_33 = t;
          int e_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_18 = NULL;
              t = s_48;
              {
                ATerm f_33 = t;
                int g_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_18 = NULL,s_18 = NULL;
                    t = term_z_8;
                    r_18 = t;
                    t = term_p_30;
                    s_18 = t;
                    t = term_q_30;
                    t = p_7(r_18, s_18, t);
                    LocalPopChoice(g_33);
                  }
                else
                  {
                    t = f_33;
                    t = fetch_1_0(l_8, t);
                  }
              }
              t = s_48;
              t = default_system_usage_0_0(t);
              t = term_g_28;
              q_18 = t;
              t = SSL_exit(q_18);
              LocalPopChoice(e_33);
            }
          else
            {
              t = c_33;
              {
                ATerm a_19 = NULL,b_19 = NULL,f_19 = NULL;
                t = term_z_8;
                b_19 = t;
                t = term_o_31;
                f_19 = t;
                t = term_n_33;
                t = p_7(b_19, f_19, t);
                t = s_48;
                t = default_system_about_0_0(t);
                t = term_g_28;
                a_19 = t;
                t = SSL_exit(a_19);
              }
            }
        }
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL;
              static ATerm p_8 (ATerm t)
              {
                ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,u_5 = NULL;
                y_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_48);
                w_48 = t;
                t = x_48;
                if(((x_47 != NULL) && (x_47 != t)))
                  _fail(t);
                else
                  x_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_48);
                u_5 = t;
                t = SSLsetAnnotations(u_5, w_48);
                return(t);
              }
              t = fetch_1_0(p_8, t);
              t = term_u_18;
              u_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_47)), term_t_33);
              v_48 = t;
              t = SSL_printnl(u_48, v_48);
              t = (ATerm) ATmakeAppl(sym__2, term_u_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_47)), term_t_33));
              t = default_system_usage_0_0(t);
              t = term_s_9;
              t_48 = t;
              t = SSL_exit(t_48);
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
            }
        }
      }
  }
  y_47 = t;
  t = term_t_28;
  t = table_destroy_0_0(t);
  t = y_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
  t = parse_options_1_0(g_103, t);
  d_49 = t;
  t = term_w_33;
  t = table_create_0_0(t);
  t = term_w_33;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_33, term_b_34, d_49);
  t = lookup_table_0_1(e_49, t);
  h_49 = t;
  t = term_b_34;
  f_49 = t;
  t = h_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(f_49, d_49, g_49, t);
  t = d_49;
  t = i_103(t);
  {
    ATerm c_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_103, t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = c_34;
        {
          ATerm j_34 = t;
          int k_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_34);
            }
          else
            {
              t = j_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = xtc_temp_files_1_0(r_8, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL;
      t = term_z_8;
      l_49 = t;
      t = term_g_20;
      m_49 = t;
      t = term_o_34;
      t = p_7(l_49, m_49, t);
      k_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_49);
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      t = term_f_9;
    }
  t = ppgen_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, q_8, t);
  return(t);
}
