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
ATerm term_h_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_l_33;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_u_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_d_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_e_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_c_25;
ATerm term_w_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_q_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_r_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_o_21;
ATerm term_f_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_g_19;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_h_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_x_8);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_h_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_10, term_n_9, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_w_10, term_x_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_11, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_o_11, term_p_11);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_11, term_u_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_y_12, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_d_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_n_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_u_13, term_v_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_h_14, term_l_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_14, term_p_14, term_q_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_j_15, term_l_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_x_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_d_16, term_e_16);
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
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_q_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_l_17, term_m_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_z_17, term_c_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_k_23);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_x_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_p_22, term_r_22);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2A", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Sdf2.tbl", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SDF", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_w_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--output-type", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_n_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_n_19);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_p_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_x_19);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_q_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__2, term_n_26, term_q_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-t          Output is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym__2, term_v_28, term_x_19);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_q_29);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_h_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_k_28, term_l_28);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_x_19);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_x_19);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_x_19);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, (ATerm) ATempty);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_d_31);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_y_19);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm h_7 (ATerm r_14, ATerm s_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm q_6 (ATerm z_33, ATerm a_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_6 (ATerm r_17, ATerm s_17, ATerm t);
static ATerm s_6 (ATerm f_69 (ATerm), ATerm g_175, ATerm b_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t);
static ATerm t_6 (ATerm j_14, ATerm k_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm h_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_67 (ATerm), ATerm t);
ATerm xtc_command_1_0 (ATerm d_89 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_10 (ATerm t_9, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_6 (ATerm r_84 (ATerm), ATerm h_35, ATerm f_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
ATerm pass_v_verbose_0_0 (ATerm t);
ATerm debug_1_0 (ATerm d_69 (ATerm), ATerm t);
static ATerm w_6 (ATerm t_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_86 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_86 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm f_86 (ATerm), ATerm t);
static ATerm y_6 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm f_25, ATerm e_25, ATerm t);
static ATerm z_6 (ATerm g_78 (ATerm), ATerm b_25, ATerm a_25, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm a_7 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t);
static ATerm b_7 (ATerm h_86 (ATerm), ATerm b_38, ATerm a_38, ATerm t);
static ATerm g_7 (ATerm c_42, ATerm d_42, ATerm t);
static ATerm u_17 (ATerm k_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_7 (ATerm x_17, ATerm t);
static ATerm d_7 (ATerm o_32, ATerm p_32, ATerm t);
static ATerm e_7 (ATerm l_42, ATerm m_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_20 (ATerm p_18, ATerm t);
static ATerm u_20 (ATerm v_18, ATerm x_18, ATerm c_19, ATerm t);
static ATerm v_20 (ATerm u_19, ATerm v_19, ATerm z_19, ATerm t);
static ATerm f_7 (ATerm t);
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
ATerm filter_1_0 (ATerm n_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm b_27 (ATerm t_25, ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_sglr_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_parse_sdf2_0_1 (ATerm t_44, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm pre_process_sdf_0_0 (ATerm t);
ATerm get_input_type_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm ppgen_0_0 (ATerm t);
static ATerm o_7 (ATerm n_38, ATerm o_38, ATerm t);
static ATerm i_7 (ATerm z_36, ATerm a_37, ATerm t);
ATerm end_scope_1_0 (ATerm o_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_84 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_88 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm ppgen_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_7 (ATerm t_33, ATerm u_33, ATerm t);
ATerm foldr_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t);
static ATerm s_7 (ATerm m_40, ATerm n_40, ATerm o_40, ATerm t);
static ATerm t_7 (ATerm p_40, ATerm q_40, ATerm t);
ATerm lookup_table_0_1 (ATerm g_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_40, ATerm v_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_7 (ATerm r_40, ATerm s_40, ATerm t);
static ATerm m_7 (ATerm w_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm r_7 (ATerm z_40, ATerm a_41, ATerm t);
static ATerm p_7 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm u_60 (ATerm), ATerm v_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
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
    ATerm m_8 = t;
    int p_8 = stack_ptr;
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
        t = h_7(l_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(p_8);
      }
    else
      {
        t = m_8;
        {
          ATerm q_8 = t;
          int r_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = k_1;
              t = o_0(t);
              y_0 = t;
              {
                ATerm s_8 = t;
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
                    t = s_8;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, y_0);
              t = h_7(l_1, y_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(r_8);
            }
          else
            {
              t = q_8;
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
static ATerm h_7 (ATerm r_14, ATerm s_14, ATerm t)
{
  t = SSL_copy(r_14, s_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,i_2 = NULL;
      t = term_w_8;
      g_2 = t;
      t = term_x_8;
      i_2 = t;
      t = term_y_8;
      t = o_7(g_2, i_2, t);
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      t = term_z_8;
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
      t = term_x_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_w_8;
            r_1 = t;
            t = term_x_8;
            s_1 = t;
            t = term_y_8;
            t = o_7(r_1, s_1, t);
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = term_z_8;
          }
      }
      p_1 = t;
      t = term_c_9;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_9, p_1);
      t = h_7(q_1, p_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm q_6 (ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm e_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_33, a_34);
      LocalPopChoice(g_9);
    }
  else
    {
      t = e_9;
      t = SSL_subtr(z_33, a_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL,x_2 = NULL;
  t = term_h_9;
  {
    ATerm i_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,e_3 = NULL;
        t = term_w_8;
        c_3 = t;
        t = term_h_9;
        e_3 = t;
        t = term_l_9;
        t = o_7(c_3, e_3, t);
        LocalPopChoice(k_9);
      }
    else
      {
        t = i_9;
        t = term_n_9;
      }
  }
  l_2 = t;
  t = term_n_9;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_n_9);
  t = q_6(l_2, x_2, t);
  m_2 = t;
  t = SSL_int_to_string(m_2);
  k_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_2), term_h_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_c_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_q_9);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_3, (ATerm) ATinsert(ATempty, term_q_9));
      t = g_7(j_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_6 (ATerm r_17, ATerm s_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(r_17, s_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm s_6 (ATerm f_69 (ATerm), ATerm g_175, ATerm b_18, ATerm t)
{
  ATerm o_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_175, term_r_9);
  t = f_7(t);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_3, b_18);
  t = f_69(t);
  t = fclose_0_0(t);
  t = b_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm x_3 = NULL,z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_9 = ATgetArgument(t, 0);
      if(match_cons(s_9, sym_Stream_1))
        {
          x_3 = ATgetArgument(s_9, 0);
        }
      else
        _fail(t);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(x_3, z_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm t)
{
  ATerm r_3 = NULL,t_3 = NULL;
  t_3 = t;
  t = xtc_new_file_0_0(t);
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_3, t_3);
  t = s_6(b_0, r_3, t_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
  t = xtc_transform_file_2_0(c_88, d_88, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_6 (ATerm j_14, ATerm k_14, ATerm t)
{
  t = SSL_execvp(j_14, k_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL,g_5 = NULL,h_5 = NULL;
  b_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_5 = ATgetArgument(t, 0);
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = SSL_int_to_string(c_5);
        c_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_9), c_2), term_v_9);
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
          g_5 = ATgetArgument(t, 1);
          h_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_5);
      v_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_5), term_b_10), v_2), term_x_9), c_5);
      w_2 = t;
      t = SSL_concat_strings(w_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm h_74 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = h_74(t);
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
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm c_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_10 = ATgetArgument(t, 0);
              if((l_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm j_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), term_q_17), term_i_17), term_e_17), term_a_17), term_s_16), term_j_16), term_f_16), term_a_16), term_r_15), term_m_15), term_h_15), term_d_15), term_y_14), term_u_14), term_n_14), term_d_14), term_w_13), term_p_13), term_g_13), term_a_13), term_v_12), term_h_12), term_z_11), term_r_11), term_j_11), term_a_11), term_t_10);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(g_10);
      }
    else
      {
        t = c_10;
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
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm i_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_18);
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_3 = NULL,i_3 = NULL,k_3 = NULL;
              t = i_6;
              {
                ATerm o_18 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_18;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              f_3 = t;
              t = term_r_18;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, f_3), term_t_18);
              k_3 = t;
              t = SSL_printnl(i_3, k_3);
              t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, f_3), term_t_18));
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              t = q_5;
            }
        }
      }
    else
      {
        t = f_18;
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
ATerm fork_and_wait_1_0 (ATerm u_67 (ATerm), ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  v_7 = t;
  t = fork_0_0(t);
  u_7 = t;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_7;
        t = u_67(t);
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
        t = SSL_waitpid(u_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            if(((ATgetType(a_19) != AT_INT) || (ATgetInt((ATermInt) a_19) != 0)))
              _fail(t);
            {
              ATerm b_19 = ATgetArgument(t, 1);
            }
            {
              ATerm f_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = v_7;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL;
  c_8 = t;
  t = d_89(t);
  t = xtc_find_0_0(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
  {
    static ATerm m_0 (ATerm t)
    {
      ATerm d_8 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
      t = t_6(b_8, c_8, t);
      t = term_g_19;
      d_8 = t;
      t = SSL_exit(d_8);
      return(t);
    }
    t = fork_and_wait_1_0(m_0, t);
  }
  t = c_8;
  return(t);
}
ATerm at_end_1_0 (ATerm m_74 (ATerm), ATerm t)
{
  static ATerm p_9 (ATerm t)
  {
    ATerm j_9 = NULL,m_9 = NULL,o_9 = NULL;
    o_9 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_9 = ATgetFirst((ATermList) t);
        m_9 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_3 = NULL,a_4 = NULL,u_0 = NULL;
          t = SSLgetAnnotations(o_9);
          v_3 = t;
          t = m_9;
          t = p_9(t);
          a_4 = t;
          t = (ATerm) ATinsert(CheckATermList(a_4), j_9);
          u_0 = t;
          t = SSLsetAnnotations(u_0, v_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_9;
        t = m_74(t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_8;
    }
  else
    {
      static ATerm q_0 (ATerm t)
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
      t = at_end_1_0(q_0, t);
    }
  return(t);
}
static ATerm d_10 (ATerm t_9, ATerm t)
{
  ATerm u_9 = NULL;
  t = SSL_explode_term(t_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  a_10 = t;
  if(match_cons(t, sym__2))
    {
      y_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
      {
        ATerm i_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_0 (ATerm t)
            {
              t = z_9;
              return(t);
            }
            t = y_9;
            t = at_end_1_0(s_0, t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = i_19;
            t = d_10(a_10, t);
          }
      }
    }
  else
    {
      t = d_10(a_10, t);
    }
  return(t);
}
static ATerm v_6 (ATerm r_84 (ATerm), ATerm h_35, ATerm f_35, ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,i_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  k_10 = t;
  t = r_84(t);
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_10, h_35, f_35);
  t = p_7(e_10, h_35, f_35, t);
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL;
        t = term_n_19;
        p_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_10, term_n_19);
        t = o_7(e_10, p_10, t);
        LocalPopChoice(m_19);
      }
    else
      {
        t = l_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_10 = ATgetFirst((ATermList) t);
      i_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_10, term_n_19, (ATerm) ATinsert(CheckATermList(i_10), (ATerm) ATinsert(CheckATermList(f_10), h_35)));
  t = lookup_table_0_1(e_10, t);
  o_10 = t;
  t = term_n_19;
  l_10 = t;
  t = (ATerm) ATinsert(CheckATermList(i_10), (ATerm) ATinsert(CheckATermList(f_10), h_35));
  m_10 = t;
  t = o_10;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(l_10, m_10, n_10, t);
  t = k_10;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL,n_4 = NULL;
      v_10 = t;
      t = term_q_19;
      n_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_10, term_q_19);
      t = d_7(v_10, n_4, t);
      r_10 = t;
      t = SSL_mkstemp(r_10);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm z_10 = NULL;
        t = term_r_19;
        z_10 = t;
        t = SSL_perror(z_10);
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
  t = term_t_19;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,e_11 = NULL,f_11 = NULL,g_11 = NULL;
  t = P__tmpdir_0_0(t);
  f_11 = t;
  t = term_w_19;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_11, term_w_19);
  t = d_7(f_11, g_11, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_x_19;
  e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_11, term_x_19);
  t = v_6(t_0, c_11, e_11, t);
  t = SSL_close(b_11);
  t = c_11;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL;
  m_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_11 = NULL,t_11 = NULL;
      t = m_11;
      t = xtc_new_file_0_0(t);
      q_11 = t;
      t = r_0(t);
      t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, (ATerm) ATinsert(ATinsert(ATempty, q_11), term_x_8));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, q_11);
    }
  else
    {
      ATerm w_11 = NULL,y_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          n_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_11;
      t = xtc_new_file_0_0(t);
      w_11 = t;
      t = r_0(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_11), term_x_8), n_11), term_y_19));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_11);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  {
    ATerm c_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL;
        t = term_w_8;
        f_12 = t;
        t = term_h_9;
        g_12 = t;
        t = term_l_9;
        t = o_7(f_12, g_12, t);
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, term_h_11);
        t = geq_0_0(t);
        t = a_12;
        t = c_86(t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = c_20;
        t = a_12;
      }
  }
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_f_20);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm debug_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  k_12 = t;
  t = d_69(t);
  n_12 = t;
  t = term_r_18;
  o_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_12), n_12);
  p_12 = t;
  t = SSL_printnl(o_12, p_12);
  t = k_12;
  return(t);
}
static ATerm w_6 (ATerm t_40, ATerm t)
{
  t = SSL_hashtable_keys(t_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL;
  static ATerm x_0 (ATerm t)
  {
    ATerm t_12 = NULL,u_12 = NULL;
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), t_12);
    t = o_7(not_null(q_12), t_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_12, u_12);
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
  t = w_6(r_12, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm c_13 = NULL;
  c_13 = t;
  {
    ATerm g_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL,h_13 = NULL,i_13 = NULL;
        t = term_w_8;
        h_13 = t;
        t = term_h_9;
        i_13 = t;
        t = term_l_9;
        t = o_7(h_13, i_13, t);
        e_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_13, term_c_17);
        t = geq_0_0(t);
        t = c_13;
        t = e_86(t);
        LocalPopChoice(h_20);
      }
    else
      {
        t = g_20;
        t = c_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  {
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL,x_13 = NULL,y_13 = NULL;
        t = term_w_8;
        x_13 = t;
        t = term_h_9;
        y_13 = t;
        t = term_l_9;
        t = o_7(x_13, y_13, t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_13, term_a_14);
        t = geq_0_0(t);
        t = o_13;
        t = d_86(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        t = o_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,g_14 = NULL,i_14 = NULL;
        t = term_w_8;
        g_14 = t;
        t = term_h_9;
        i_14 = t;
        t = term_l_9;
        t = o_7(g_14, i_14, t);
        e_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_14, term_o_11);
        t = geq_0_0(t);
        t = b_14;
        t = f_86(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = b_14;
      }
  }
  return(t);
}
static ATerm y_6 (ATerm j_78 (ATerm), ATerm k_78 (ATerm), ATerm f_25, ATerm e_25, ATerm t)
{
  t = k_78(t);
  {
    static ATerm a_1 (ATerm t)
    {
      ATerm m_14 = NULL;
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_25, m_14);
      t = j_78(t);
      return(t);
    }
    t = fetch_1_0(a_1, t);
  }
  t = e_25;
  return(t);
}
static ATerm z_6 (ATerm g_78 (ATerm), ATerm b_25, ATerm a_25, ATerm t)
{
  static ATerm c_16 (ATerm t)
  {
    ATerm p_15 = NULL,v_15 = NULL,w_15 = NULL;
    p_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_15 = ATgetFirst((ATermList) t);
            w_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_15;
              {
                static ATerm d_1 (ATerm t)
                {
                  t = a_25;
                  return(t);
                }
                t = y_6(g_78, d_1, v_15, w_15, t);
              }
              t = c_16(t);
              LocalPopChoice(s_20);
            }
          else
            {
              t = n_20;
              {
                ATerm a_5 = NULL,f_5 = NULL,w_0 = NULL;
                t = SSLgetAnnotations(p_15);
                a_5 = t;
                t = w_15;
                t = c_16(t);
                f_5 = t;
                t = (ATerm) ATinsert(CheckATermList(f_5), v_15);
                w_0 = t;
                t = SSLsetAnnotations(w_0, a_5);
              }
            }
        }
      }
    return(t);
  }
  t = b_25;
  t = c_16(t);
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
static ATerm a_7 (ATerm r_37, ATerm s_37, ATerm t_37, ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
  {
    ATerm t_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
        t = o_7(r_37, s_37, t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATempty;
      }
  }
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_16, t_37);
  t = z_6(e_1, o_16, t_37, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_37, s_37, n_16);
  t = lookup_table_0_1(r_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(s_37, n_16, p_16, t);
  t = m_16;
  return(t);
}
static ATerm b_7 (ATerm h_86 (ATerm), ATerm b_38, ATerm a_38, ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__3, b_38, x_16, y_16);
    t = h_86(t);
    return(t);
  }
  t = a_38;
  t = map_1_0(g_1, t);
  return(t);
}
static ATerm g_7 (ATerm c_42, ATerm d_42, ATerm t)
{
  t = SSL_access(c_42, d_42);
  return(t);
}
static ATerm u_17 (ATerm k_17, ATerm t)
{
  t = SSL_fclose(k_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_17 = NULL,p_17 = NULL;
  p_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_17 = ATgetArgument(t, 0);
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_17);
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = u_17(p_17, t);
          }
      }
    }
  else
    {
      t = u_17(p_17, t);
    }
  return(t);
}
static ATerm c_7 (ATerm x_17, ATerm t)
{
  t = SSL_read_term_from_stream(x_17);
  return(t);
}
static ATerm d_7 (ATerm o_32, ATerm p_32, ATerm t)
{
  t = SSL_strcat(o_32, p_32);
  return(t);
}
static ATerm e_7 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm v_17 = NULL;
  t = SSL_fopen(l_42, m_42);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_stdin_stream();
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_stdout_stream();
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_18 = NULL;
  t = SSL_stderr_stream();
  e_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_18);
  return(t);
}
static ATerm r_20 (ATerm p_18, ATerm t)
{
  ATerm q_18 = NULL;
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
          {
            q_18 = ATgetFirst((ATermList) f_21);
            {
              ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_20 (ATerm v_18, ATerm x_18, ATerm c_19, ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,j_19 = NULL,s_19 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(c_19);
  j_19 = t;
  t = v_18;
  if(match_cons(t, sym_Path_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, x_18);
  b_1 = t;
  t = SSLsetAnnotations(b_1, j_19);
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(d_19, e_19, t);
  return(t);
}
static ATerm v_20 (ATerm u_19, ATerm v_19, ATerm z_19, ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL,d_20 = NULL,m_20 = NULL,c_1 = NULL;
  t = SSLgetAnnotations(z_19);
  d_20 = t;
  t = SSL_is_string(u_19);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_20, v_19);
  c_1 = t;
  t = SSLsetAnnotations(c_1, d_20);
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(a_20, b_20, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_20(o_20, t);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            {
              ATerm j_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_20(p_20, q_20, o_20, t);
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = j_21;
                  t = v_20(p_20, q_20, o_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_20(o_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,k_21 = NULL;
  k_21 = t;
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_21, term_o_21);
        t = f_7(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm e_6 = NULL,f_6 = NULL;
          t = term_u_21;
          f_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_21, k_21);
          t = d_7(f_6, k_21, t);
          e_6 = t;
          t = SSL_perror(e_6);
          _fail(t);
        }
      }
  }
  z_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(a_21, t);
  y_20 = t;
  t = z_20;
  t = fclose_0_0(t);
  t = y_20;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_21 = NULL,q_21 = NULL;
      p_21 = t;
      t = (ATerm) ATinsert(ATempty, term_z_21);
      q_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_21, (ATerm) ATinsert(ATempty, term_z_21));
      t = g_7(p_21, q_21, t);
      LocalPopChoice(y_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_21;
      {
        ATerm b_22 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_22 = t;
            if((PushChoice() == 0))
              {
                ATerm r_21 = NULL,s_21 = NULL;
                r_21 = t;
                t = (ATerm) ATinsert(ATempty, term_q_9);
                s_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_21, (ATerm) ATinsert(ATempty, term_q_9));
                t = g_7(r_21, s_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_22;
              }
            t = debug_1_0(h_1, t);
            LocalPopChoice(c_22);
          }
        else
          {
            t = b_22;
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
  t = term_e_22;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(u_1, t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_h_22;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  c_23 = t;
  t = term_r_18;
  d_23 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  e_23 = t;
  t = SSL_printnl(d_23, e_23);
  t = c_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,o_23 = NULL;
  if(match_cons(t, sym__3))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
      o_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(i_23, j_23, o_23, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL,s_23 = NULL;
  p_23 = t;
  t = term_r_18;
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, term_m_22);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = p_23;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,w_23 = NULL;
  t_23 = t;
  t = term_r_18;
  u_23 = t;
  t = (ATerm) ATinsert(ATempty, term_l_22);
  w_23 = t;
  t = SSL_printnl(u_23, w_23);
  t = t_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,o_22 = NULL,q_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  t_21 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm n_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_23 = NULL,b_23 = NULL;
        t = term_p_22;
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_21);
        b_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Imported_1, t_21));
        t = o_7(a_23, b_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_22;
      }
  }
  f_22 = t;
  t = term_p_22;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, term_r_22, (ATerm) ATinsert(ATempty, t_21));
  t = lookup_table_0_1(t_22, t);
  x_22 = t;
  t = term_r_22;
  u_22 = t;
  t = (ATerm) ATinsert(ATempty, t_21);
  v_22 = t;
  t = x_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(u_22, v_22, w_22, t);
  t = f_22;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(v_1, t);
  a_22 = t;
  t = term_p_22;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, a_22);
  t = b_7(x_1, q_22, a_22, t);
  t = if_verbose6_1_0(y_1, t);
  t = term_p_22;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, (ATerm)ATmakeAppl(sym_Imported_1, t_21), (ATerm) ATempty);
  t = lookup_table_0_1(g_22, t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_21);
  i_22 = t;
  t = (ATerm) ATempty;
  j_22 = t;
  t = o_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(i_22, j_22, k_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_22, (ATerm)ATmakeAppl(sym_Imported_1, t_21), (ATerm) ATempty);
  t = if_verbose4_1_0(z_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm n_82 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_24;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_24 = ATgetFirst((ATermList) t);
          o_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 = NULL,q_7 = NULL,w_7 = NULL,f_1 = NULL;
            t = SSLgetAnnotations(m_24);
            p_6 = t;
            t = n_24;
            t = n_82(t);
            q_7 = t;
            t = o_24;
            t = filter_1_0(n_82, t);
            w_7 = t;
            t = (ATerm) ATinsert(CheckATermList(w_7), q_7);
            f_1 = t;
            t = SSLsetAnnotations(f_1, p_6);
            LocalPopChoice(y_22);
          }
        else
          {
            t = s_22;
            t = o_24;
            t = filter_1_0(n_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_72 (ATerm), ATerm b_72 (ATerm), ATerm t)
{
  static ATerm u_24 (ATerm t)
  {
    ATerm z_22 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_72(t);
        t = u_24(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = z_22;
        t = b_72(t);
      }
    return(t);
  }
  t = u_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL,y_24 = NULL;
      t = term_w_8;
      x_24 = t;
      t = term_k_23;
      y_24 = t;
      t = term_l_23;
      t = o_7(x_24, y_24, t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_24 = NULL;
            t = term_q_23;
            z_24 = t;
            t = SSL_getenv(z_24);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
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
  t = term_v_23;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL;
  t = term_p_22;
  l_25 = t;
  t = term_x_23;
  m_25 = t;
  t = term_y_23;
  t = o_7(l_25, m_25, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm z_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_23;
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
  t = term_a_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = if_verbose5_1_0(a_2, t);
  d_25 = t;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL,j_25 = NULL;
        t = term_p_22;
        h_25 = t;
        t = term_r_22;
        j_25 = t;
        t = term_d_24;
        t = o_7(h_25, j_25, t);
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm k_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_25 = t;
          t = repeat_2_0(h_2, _id, t);
          t = k_25;
        }
      }
  }
  t = d_25;
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
  t = term_e_24;
  return(t);
}
static ATerm b_27 (ATerm t_25, ATerm t)
{
  ATerm x_25 = NULL,z_25 = NULL,a_26 = NULL;
  t = term_p_22;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_25);
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Tool_1, t_25));
  t = o_7(z_25, a_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_24 = ATgetFirst((ATermList) t);
      if(match_cons(f_24, sym__2))
        {
          ATerm h_24 = ATgetArgument(f_24, 0);
          x_25 = ATgetArgument(f_24, 1);
        }
      else
        _fail(t);
      {
        ATerm g_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_p_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL,c_26 = NULL,e_26 = NULL;
      t = if_verbose5_1_0(p_2, t);
      t = xtc_load_0_0(t);
      e_26 = t;
      if(match_cons(t, sym__2))
        {
          b_26 = ATgetArgument(t, 0);
          c_26 = ATgetArgument(t, 1);
          {
            ATerm l_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_26 = NULL,m_26 = NULL,o_26 = NULL;
                t = term_p_22;
                m_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_26);
                o_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_22, (ATerm) ATmakeAppl(sym_Tool_1, b_26));
                t = o_7(m_26, o_26, t);
                {
                  static ATerm r_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_26 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_26 != NULL) && (j_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_2, t);
                }
                t = not_null(j_26);
                LocalPopChoice(p_24);
              }
            else
              {
                t = l_24;
                t = b_27(e_26, t);
              }
          }
        }
      else
        {
          t = b_27(e_26, t);
        }
      t = if_verbose5_1_0(s_2, t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm z_26 = NULL,n_8 = NULL,o_8 = NULL;
        z_26 = t;
        t = term_r_18;
        n_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), z_26), term_q_24);
        o_8 = t;
        t = SSL_printnl(n_8, o_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), z_26), term_q_24);
        t = if_verbose5_1_0(u_2, t);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_s_24;
  return(t);
}
ATerm xtc_sglr_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm t_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_27 = NULL,s_27 = NULL;
      s_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_27 = ATgetArgument(t, 0);
          {
            ATerm t_8 = NULL,n_1 = NULL;
            t = SSLgetAnnotations(s_27);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_27);
            n_1 = t;
            t = SSLsetAnnotations(n_1, t_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_27;
        }
      LocalPopChoice(v_24);
      {
        static ATerm a_3 (ATerm t)
        {
          ATerm u_27 = NULL,v_27 = NULL,y_27 = NULL;
          t = term_x_19;
          t = j_89(t);
          t = xtc_find_0_0(t);
          u_27 = t;
          t = term_x_19;
          t = k_89(t);
          v_27 = t;
          t = term_x_19;
          t = pass_v_verbose_0_0(t);
          y_27 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(y_27), v_27), term_g_25), u_27), term_c_25), term_w_24);
          return(t);
        }
        t = xtc_transform_file_2_0(z_2, a_3, t);
      }
    }
  else
    {
      t = t_24;
      {
        static ATerm d_3 (ATerm t)
        {
          ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
          t = term_x_19;
          t = j_89(t);
          t = xtc_find_0_0(t);
          b_28 = t;
          t = term_x_19;
          t = k_89(t);
          c_28 = t;
          t = term_x_19;
          t = pass_v_verbose_0_0(t);
          d_28 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(d_28), c_28), term_g_25), b_28), term_c_25), term_w_24);
          return(t);
        }
        t = xtc_transform_term_2_0(b_3, d_3, t);
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm xtc_parse_sdf2_0_1 (ATerm t_44, ATerm t)
{
  static ATerm h_3 (ATerm t)
  {
    t = t_44;
    return(t);
  }
  t = xtc_sglr_2_0(g_3, h_3, t);
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_29 = NULL,b_29 = NULL;
        b_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_29 = ATgetArgument(t, 0);
            {
              ATerm f_9 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(b_29);
              f_9 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_29);
              t_1 = t;
              t = SSLsetAnnotations(t_1, f_9);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_29;
          }
        LocalPopChoice(p_25);
        t = xtc_transform_file_2_0(l_3, pass_verbose_0_0, t);
      }
    else
      {
        t = o_25;
        t = xtc_transform_term_2_0(p_3, pass_verbose_0_0, t);
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,e_30 = NULL;
  a_30 = t;
  if(match_cons(t, sym__2))
    {
      b_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_30;
  if(match_cons(t, sym_AST_0))
    {
      t = e_30;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          t = e_30;
          {
            ATerm q_25 = t;
            int r_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_10 = NULL;
                if(match_cons(t, sym_FILE_1))
                  {
                    y_10 = ATgetArgument(t, 0);
                    {
                      ATerm l_11 = NULL,w_1 = NULL;
                      t = SSLgetAnnotations(e_30);
                      l_11 = t;
                      t = (ATerm) ATmakeAppl(sym_FILE_1, y_10);
                      w_1 = t;
                      t = SSLsetAnnotations(w_1, l_11);
                    }
                  }
                else
                  {
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                    t = e_30;
                  }
                LocalPopChoice(r_25);
                t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
              }
            else
              {
                t = q_25;
                t = xtc_transform_term_2_0(s_3, pass_verbose_0_0, t);
              }
          }
        }
      else
        {
          ATerm j_30 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = term_s_25;
          j_30 = t;
          t = e_30;
          t = xtc_parse_sdf2_0_1(j_30, t);
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_30 = NULL,q_30 = NULL;
      t = term_w_8;
      n_30 = t;
      t = term_w_25;
      q_30 = t;
      t = term_y_25;
      t = o_7(n_30, q_30, t);
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      t = term_d_26;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  x_30 = t;
  t = get_input_type_0_0(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, x_30);
  t = pre_process_sdf_0_0(t);
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL,g_31 = NULL;
        g_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            f_31 = ATgetArgument(t, 0);
            {
              ATerm v_11 = NULL,b_2 = NULL;
              t = SSLgetAnnotations(g_31);
              v_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_31);
              b_2 = t;
              t = SSLsetAnnotations(b_2, v_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = g_31;
          }
        LocalPopChoice(i_26);
        t = xtc_transform_file_2_0(u_3, pass_verbose_0_0, t);
      }
    else
      {
        t = h_26;
        t = xtc_transform_term_2_0(w_3, pass_verbose_0_0, t);
      }
  }
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_31 = NULL,l_12 = NULL,m_12 = NULL;
        n_31 = t;
        t = term_w_8;
        l_12 = t;
        t = term_n_26;
        m_12 = t;
        t = term_p_26;
        t = o_7(l_12, m_12, t);
        if(!(match_cons(t, sym_AST_0)))
          _fail(t);
        t = n_31;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_31 = NULL,w_31 = NULL;
              w_31 = t;
              if(match_cons(t, sym_FILE_1))
                {
                  v_31 = ATgetArgument(t, 0);
                  {
                    ATerm x_12 = NULL,j_2 = NULL;
                    t = SSLgetAnnotations(w_31);
                    x_12 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, v_31);
                    j_2 = t;
                    t = SSLsetAnnotations(j_2, x_12);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = w_31;
                }
              LocalPopChoice(r_26);
              t = xtc_transform_file_2_0(y_3, pass_verbose_0_0, t);
            }
          else
            {
              t = q_26;
              t = xtc_transform_term_2_0(b_4, pass_verbose_0_0, t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_7 (ATerm n_38, ATerm o_38, ATerm t)
{
  ATerm a_32 = NULL;
  t = lookup_table_0_1(n_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(o_38, a_32, t);
  return(t);
}
static ATerm i_7 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  d_32 = t;
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
        t = o_7(z_36, a_37, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_26 = ATgetFirst((ATermList) t);
            c_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_26);
        {
          ATerm e_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, z_36, a_37, c_32);
          t = lookup_table_0_1(z_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_7(a_37, c_32, e_32, t);
          t = (ATerm) ATmakeAppl(sym__3, z_36, a_37, c_32);
        }
      }
    else
      {
        t = s_26;
        {
          ATerm h_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
          t = lookup_table_0_1(z_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_7(a_37, h_32, t);
          t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
        }
      }
  }
  t = d_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_84 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,q_32 = NULL,r_32 = NULL,t_32 = NULL;
  m_32 = t;
  t = o_84(t);
  l_32 = t;
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL;
        t = term_n_19;
        u_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_32, term_n_19);
        t = o_7(l_32, u_32, t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_32 = ATgetFirst((ATermList) t);
      j_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_32, term_n_19, j_32);
  t = lookup_table_0_1(l_32, t);
  t_32 = t;
  t = term_n_19;
  q_32 = t;
  t = t_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(q_32, j_32, r_32, t);
  t = k_32;
  {
    static ATerm c_4 (ATerm t)
    {
      ATerm b_33 = NULL;
      b_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_32, b_33);
      t = i_7(l_32, b_33, t);
      return(t);
    }
    t = map_1_0(c_4, t);
  }
  t = m_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_85(t);
      t = p_85(t);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      t = p_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,n_33 = NULL;
  g_33 = t;
  t = n_84(t);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, term_n_19);
  {
    ATerm a_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_19;
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_33, term_n_19);
        t = o_7(f_33, s_33, t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = a_27;
        t = (ATerm) ATempty;
      }
  }
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_33, term_n_19, (ATerm) ATinsert(CheckATermList(h_33), (ATerm) ATempty));
  t = lookup_table_0_1(f_33, t);
  n_33 = t;
  t = term_n_19;
  i_33 = t;
  t = (ATerm) ATinsert(CheckATermList(h_33), (ATerm) ATempty);
  j_33 = t;
  t = n_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(i_33, j_33, k_33, t);
  t = g_33;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_t_19;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_34);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        t = i_34;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_t_19;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_88 (ATerm), ATerm t)
{
  ATerm y_33 = NULL;
  static ATerm e_4 (ATerm t)
  {
    ATerm d_34 = NULL;
    d_34 = t;
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_34 = NULL,f_34 = NULL;
          t = term_t_19;
          e_34 = t;
          t = term_n_19;
          f_34 = t;
          t = term_j_27;
          t = o_7(e_34, f_34, t);
          LocalPopChoice(i_27);
        }
      else
        {
          t = h_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_33 != NULL) && (y_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_33 = ATgetFirst((ATermList) t);
        {
          ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_33;
    t = map_1_0(f_4, t);
    t = d_34;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = begin_scope_1_0(d_4, t);
  t = restore_always_2_0(p_88, e_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,s_34 = NULL;
  m_34 = t;
  t = term_x_19;
  t = whoami_0_0(t);
  n_34 = t;
  t = term_r_18;
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_27), n_34), term_l_27);
  s_34 = t;
  t = SSL_printnl(p_34, s_34);
  t = term_n_9;
  o_34 = t;
  t = SSL_exit(o_34);
  t = m_34;
  return(t);
}
static ATerm h_4 (ATerm t)
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
static ATerm j_4 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = SSL_string_to_int(v_34);
  w_34 = t;
  t = term_n_27;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, w_34);
  t = r_7(x_34, w_34, t);
  t = v_34;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, l_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "-S"))
    {
      t = k_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_35;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  t = term_h_9;
  l_35 = t;
  t = term_p_27;
  m_35 = t;
  t = term_q_27;
  t = r_7(l_35, m_35, t);
  t = term_t_27;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_w_27;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm n_35 = NULL,q_35 = NULL,t_35 = NULL;
  n_35 = t;
  t = SSL_string_to_int(n_35);
  q_35 = t;
  t = term_h_9;
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_9, q_35);
  t = r_7(t_35, q_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_35);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  t = term_g_25;
  u_35 = t;
  t = term_x_19;
  v_35 = t;
  t = term_z_27;
  t = r_7(u_35, v_35, t);
  t = term_a_28;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_4, o_4, p_4, t);
      LocalPopChoice(g_28);
    }
  else
    {
      t = f_28;
      {
        ATerm h_28 = t;
        int i_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, v_4, t);
            LocalPopChoice(i_28);
          }
        else
          {
            t = h_28;
            t = Option_3_0(w_4, y_4, z_4, t);
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  if(match_string(t, "-o"))
    {
      t = z_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_35;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  a_36 = t;
  t = term_x_8;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, a_36);
  t = r_7(b_36, a_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_36);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, e_5, j_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,l_36 = NULL,n_36 = NULL,o_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_36 = NULL,x_36 = NULL,b_37 = NULL;
      t = term_x_19;
      t = n_0(t);
      w_36 = t;
      t = term_k_28;
      x_36 = t;
      t = term_l_28;
      b_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, w_36);
      t = p_7(x_36, b_37, w_36, t);
      _fail(t);
    }
  else
    {
      ATerm g_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          l_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_36 = ATgetFirst((ATermList) t);
          o_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_36;
      t = k_0(t);
      t = n_36;
      t = l_0(t);
      g_37 = t;
      t = (ATerm) ATinsert(CheckATermList(o_36), g_37);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_37 = NULL;
  o_37 = t;
  if(match_string(t, "-i"))
    {
      t = o_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_37;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  w_37 = t;
  t = term_y_19;
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_19, w_37);
  t = r_7(x_37, w_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_37);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
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
  ATerm e_38 = NULL,k_38 = NULL,l_38 = NULL;
  e_38 = t;
  t = term_w_25;
  k_38 = t;
  t = term_n_28;
  l_38 = t;
  t = term_o_28;
  t = r_7(k_38, l_38, t);
  t = e_38;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm m_38 = NULL,p_38 = NULL,q_38 = NULL;
  m_38 = t;
  t = term_w_25;
  p_38 = t;
  t = term_q_28;
  q_38 = t;
  t = term_r_28;
  t = r_7(p_38, q_38, t);
  t = m_38;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_s_28;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-t", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  t = term_n_26;
  s_38 = t;
  t = term_q_28;
  t_38 = t;
  t = term_t_28;
  t = r_7(s_38, t_38, t);
  t = r_38;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  t = term_v_28;
  x_38 = t;
  t = term_x_19;
  y_38 = t;
  t = term_w_28;
  t = r_7(x_38, y_38, t);
  t = term_x_28;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, r_5, t_5, t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = z_28;
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(u_5, v_5, w_5, t);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_5, y_5, z_5, t);
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  {
                    ATerm h_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = input_option_0_0(t);
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = h_29;
                        {
                          ATerm j_29 = t;
                          int k_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = output_option_0_0(t);
                              LocalPopChoice(k_29);
                            }
                          else
                            {
                              t = j_29;
                              {
                                ATerm l_29 = t;
                                int m_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Option_3_0(a_6, b_6, c_6, t);
                                    LocalPopChoice(m_29);
                                  }
                                else
                                  {
                                    t = l_29;
                                    {
                                      ATerm n_29 = t;
                                      int o_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = verbose_option_0_0(t);
                                          LocalPopChoice(o_29);
                                        }
                                      else
                                        {
                                          t = n_29;
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
  ATerm z_38 = NULL,a_39 = NULL,d_39 = NULL,e_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_19;
  t = whoami_0_0(t);
  z_38 = t;
  t = term_r_18;
  d_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_29), z_38);
  e_39 = t;
  t = SSL_printnl(d_39, e_39);
  t = term_n_9;
  a_39 = t;
  t = SSL_exit(a_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_39 = NULL,i_39 = NULL;
  t = term_w_8;
  f_39 = t;
  t = term_q_29;
  i_39 = t;
  t = term_r_29;
  t = o_7(f_39, i_39, t);
  return(t);
}
static ATerm j_7 (ATerm t_33, ATerm u_33, ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_33, u_33);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      t = SSL_addr(t_33, u_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_81 (ATerm), ATerm k_81 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,o_39 = NULL;
  l_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_39;
      t = j_81(t);
    }
  else
    {
      ATerm t_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_39 = ATgetFirst((ATermList) t);
          o_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_39;
      t = foldr_2_0(j_81, k_81, t);
      t_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_39, t_39);
      t = k_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_p_27;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(s_13, t_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_39 = NULL,l_13 = NULL,m_13 = NULL;
  t = times_0_0(t);
  m_13 = t;
  t = SSL_explode_term(m_13);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13;
  t = foldr_2_0(d_6, g_6, t);
  w_39 = t;
  t = SSL_TicksToSeconds(w_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,x_40 = NULL;
  k_40 = t;
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      x_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_40;
        if((l_40 != t))
          {
            _fail(t);
          }
        t = k_40;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = (ATerm) ATmakeAppl(sym__2, l_40, x_40);
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_40, x_40);
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              t = SSL_gtr(l_40, x_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_40, x_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  {
    ATerm z_29 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
        t = term_w_8;
        g_41 = t;
        t = term_h_9;
        h_41 = t;
        t = term_l_9;
        t = o_7(g_41, h_41, t);
        f_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_41, term_n_9);
        t = geq_0_0(t);
        t = d_41;
        t = a_86(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = z_29;
        t = d_41;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL;
  t = run_time_0_0(t);
  j_41 = t;
  t = term_x_19;
  t = whoami_0_0(t);
  k_41 = t;
  t = term_r_18;
  m_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), j_41), term_x_9), k_41);
  n_41 = t;
  t = SSL_printnl(m_41, n_41);
  t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), j_41), term_x_9), k_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_27;
  o_41 = t;
  t = SSL_exit(o_41);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_41 = ATgetArgument(t, 0);
          {
            ATerm t_14 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(a_42);
            t_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_41);
            i_4 = t;
            t = SSLsetAnnotations(i_4, t_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_41 = NULL,s_41 = NULL;
      t = term_w_8;
      r_41 = t;
      t = term_h_30;
      s_41 = t;
      t = term_i_30;
      t = o_7(r_41, s_41, t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = fetch_1_0(j_6, t);
    }
  t = l_90(t);
  return(t);
}
static ATerm s_7 (ATerm m_40, ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm e_42 = NULL;
  t = SSL_hashtable_put(o_40, m_40, n_40);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_42);
  return(t);
}
static ATerm t_7 (ATerm p_40, ATerm q_40, ATerm t)
{
  t = SSL_hashtable_get(q_40, p_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm g_38, ATerm t)
{
  ATerm r_42 = NULL;
  t = table_hashtable_0_0(t);
  r_42 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL;
        t = r_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_7(g_38, a_15, t);
        LocalPopChoice(l_30);
      }
    else
      {
        t = k_30;
        {
          ATerm k_15 = NULL;
          t = g_38;
          t = table_create_0_0(t);
          t = r_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(g_38, k_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_40, ATerm v_40, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_hashtable_create(u_40, v_40);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_42);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,z_42 = NULL,a_43 = NULL;
  v_42 = t;
  t = term_m_30;
  z_42 = t;
  t = term_o_30;
  a_43 = t;
  t = v_42;
  t = new_hashtable_0_2(z_42, a_43, t);
  w_42 = t;
  t = v_42;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(v_42, w_42, x_42, t);
  t = v_42;
  return(t);
}
static ATerm l_7 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm e_43 = NULL;
  t = SSL_hashtable_remove(s_40, r_40);
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_43);
  return(t);
}
static ATerm m_7 (ATerm w_40, ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_hashtable_destroy(w_40);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_43);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_43 = NULL;
  t = SSL_table_hashtable();
  g_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_43);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,p_43 = NULL,q_43 = NULL;
  h_43 = t;
  t = table_hashtable_0_0(t);
  i_43 = t;
  t = lookup_table_0_1(h_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(q_43, t);
  t = i_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(h_43, p_43, t);
  t = h_43;
  return(t);
}
ATerm map_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  static ATerm j_44 (ATerm t)
  {
    ATerm f_44 = NULL,h_44 = NULL,i_44 = NULL;
    f_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_44;
      }
    else
      {
        ATerm s_15 = NULL,y_15 = NULL,z_15 = NULL,k_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_44 = ATgetFirst((ATermList) t);
            i_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_44);
        s_15 = t;
        t = h_44;
        t = v_73(t);
        y_15 = t;
        t = i_44;
        t = j_44(t);
        z_15 = t;
        t = (ATerm) ATinsert(CheckATermList(z_15), y_15);
        k_4 = t;
        t = SSLsetAnnotations(k_4, s_15);
      }
    return(t);
  }
  t = j_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_44 = ATgetFirst((ATermList) t);
      n_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_44 = NULL,s_44 = NULL;
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_44)), not_null(s_44));
          return(t);
        }
        t = n_44;
        t = i_0(t);
        if(((r_44 != NULL) && (r_44 != t)))
          _fail(t);
        else
          r_44 = t;
        t = m_44;
        t = g_0(t);
        if(((s_44 != NULL) && (s_44 != t)))
          _fail(t);
        else
          s_44 = t;
        t = n_44;
        t = reverse_acc_2_0(g_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_19;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,q_4 = NULL;
  b_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_45);
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_45);
  q_4 = t;
  t = SSLsetAnnotations(q_4, z_44);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm d_45 = NULL;
  d_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_45), term_p_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL;
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,y_44 = NULL;
      t = term_w_8;
      x_44 = t;
      t = term_q_29;
      y_44 = t;
      t = term_r_29;
      t = o_7(x_44, y_44, t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = fetch_1_0(l_6, t);
    }
  t = term_t_30;
  t = echo_0_0(t);
  t = term_k_28;
  v_44 = t;
  t = term_l_28;
  w_44 = t;
  t = term_u_30;
  t = o_7(v_44, w_44, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(n_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  static ATerm g_46 (ATerm t)
  {
    ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL;
    d_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_46 = ATgetFirst((ATermList) t);
        f_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_16 = NULL,t_16 = NULL,t_4 = NULL;
          t = SSLgetAnnotations(d_46);
          k_16 = t;
          t = e_46;
          t = f_74(t);
          t_16 = t;
          t = (ATerm) ATinsert(CheckATermList(f_46), t_16);
          t_4 = t;
          t = SSLsetAnnotations(t_4, k_16);
          LocalPopChoice(y_30);
        }
      else
        {
          t = v_30;
          {
            ATerm o_17 = NULL,a_18 = NULL,u_4 = NULL;
            t = SSLgetAnnotations(d_46);
            o_17 = t;
            t = f_46;
            t = g_46(t);
            a_18 = t;
            t = (ATerm) ATinsert(CheckATermList(a_18), e_46);
            u_4 = t;
            t = SSLsetAnnotations(u_4, o_17);
          }
        }
    }
    return(t);
  }
  t = g_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_31 = ATgetFirst((ATermList) t);
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_46;
          }
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = (ATerm) ATinsert(ATempty, k_46);
      }
  }
  l_46 = t;
  t = term_z_8;
  m_46 = t;
  t = SSL_printnl(m_46, l_46);
  t = k_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = term_w_8;
  q_46 = t;
  t = term_q_29;
  r_46 = t;
  t = term_r_29;
  t = o_7(q_46, r_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  t = term_d_31;
  s_46 = t;
  t = term_x_19;
  t_46 = t;
  t = term_e_31;
  t = r_7(s_46, t_46, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = term_h_31;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  t = term_d_31;
  w_46 = t;
  t = term_x_19;
  x_46 = t;
  t = term_e_31;
  t = r_7(w_46, x_46, t);
  t = term_f_20;
  u_46 = t;
  t = term_x_19;
  v_46 = t;
  t = term_i_31;
  t = r_7(u_46, v_46, t);
  t = term_j_31;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_6, u_6, x_6, t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = Option_3_0(k_7, n_7, x_7, t);
    }
  return(t);
}
static ATerm r_7 (ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  t = term_w_8;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_8, z_40, a_41);
  t = lookup_table_0_1(y_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(z_40, a_41, z_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_8, z_40, a_41);
  return(t);
}
static ATerm p_7 (ATerm u_36, ATerm v_36, ATerm t_36, ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_31 = ATgetArgument(t, 0);
            ATerm r_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_36, v_36);
        t = o_7(u_36, v_36, t);
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATempty;
      }
  }
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_36, v_36, (ATerm) ATinsert(CheckATermList(d_47), t_36));
  t = lookup_table_0_1(u_36, t);
  g_47 = t;
  t = (ATerm) ATinsert(CheckATermList(d_47), t_36);
  e_47 = t;
  t = g_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(v_36, e_47, f_47, t);
  t = c_47;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL;
      t = term_x_19;
      t = e_0(t);
      o_47 = t;
      t = term_k_28;
      p_47 = t;
      t = term_l_28;
      q_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_28, term_l_28, o_47);
      t = p_7(p_47, q_47, o_47, t);
      _fail(t);
    }
  else
    {
      ATerm t_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_47 = ATgetFirst((ATermList) t);
          n_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_47;
      t = c_0(t);
      t = term_x_19;
      t = d_0(t);
      t_47 = t;
      t = (ATerm) ATinsert(CheckATermList(n_47), t_47);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_60 (ATerm), ATerm v_60 (ATerm), ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL,x_4 = NULL;
  z_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_47 = ATgetFirst((ATermList) t);
      w_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_47);
  u_47 = t;
  t = v_47;
  t = u_60(t);
  x_47 = t;
  t = w_47;
  t = v_60(t);
  y_47 = t;
  t = (ATerm) ATinsert(CheckATermList(y_47), x_47);
  x_4 = t;
  t = SSLsetAnnotations(x_4, u_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_92 (ATerm), ATerm t)
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,j_48 = NULL,k_48 = NULL,i_5 = NULL;
  e_48 = t;
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_31;
        t = j_92(t);
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
      }
  }
  t = e_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_48 = ATgetFirst((ATermList) t);
      h_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_48);
  f_48 = t;
  t = term_q_29;
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_29, g_48);
  t = r_7(k_48, g_48, t);
  t = h_48;
  {
    static ATerm u_48 (ATerm t)
    {
      ATerm x_31 = t;
      int y_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_31 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_48 = NULL;
              n_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_48;
              LocalPopChoice(b_32);
            }
          else
            {
              t = z_31;
              t = j_92(t);
              t = Cons_2_0(_id, u_48, t);
            }
          LocalPopChoice(y_31);
        }
      else
        {
          t = x_31;
          {
            ATerm q_48 = NULL,r_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_48 = ATgetFirst((ATermList) t);
                r_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_48), (ATerm) ATmakeAppl(sym_Undefined_1, q_48));
          }
        }
      return(t);
    }
    t = u_48(t);
  }
  j_48 = t;
  t = (ATerm) ATinsert(CheckATermList(j_48), (ATerm) ATmakeAppl(sym_Program_1, g_48));
  i_5 = t;
  t = SSLsetAnnotations(i_5, f_48);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  if(match_string(t, "--help"))
    {
      t = h_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_49;
        }
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL;
  t = term_h_30;
  i_49 = t;
  t = term_x_19;
  j_49 = t;
  t = term_f_32;
  t = r_7(i_49, j_49, t);
  t = term_g_32;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_i_32;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL;
  b_49 = t;
  t = term_k_28;
  c_49 = t;
  t = term_n_32;
  t = lookup_table_0_1(c_49, t);
  g_49 = t;
  t = term_l_28;
  d_49 = t;
  t = (ATerm) ATempty;
  e_49 = t;
  t = g_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(d_49, e_49, f_49, t);
  t = b_49;
  {
    static ATerm y_7 (ATerm t)
    {
      ATerm s_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_92(t);
          LocalPopChoice(v_32);
        }
      else
        {
          t = s_32;
          {
            ATerm w_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_7, a_8, e_8, t);
                LocalPopChoice(x_32);
              }
            else
              {
                t = w_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_7, t);
  }
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_49 = NULL;
        u_49 = t;
        {
          ATerm a_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_18 = NULL;
              t = u_49;
              {
                ATerm d_33 = t;
                int e_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm k_18 = NULL,l_18 = NULL;
                    t = term_w_8;
                    k_18 = t;
                    t = term_h_30;
                    l_18 = t;
                    t = term_i_30;
                    t = o_7(k_18, l_18, t);
                    LocalPopChoice(e_33);
                  }
                else
                  {
                    t = d_33;
                    t = fetch_1_0(f_8, t);
                  }
              }
              t = u_49;
              t = default_system_usage_0_0(t);
              t = term_p_27;
              j_18 = t;
              t = SSL_exit(j_18);
              LocalPopChoice(c_33);
            }
          else
            {
              t = a_33;
              {
                ATerm s_18 = NULL,u_18 = NULL,w_18 = NULL;
                t = term_w_8;
                u_18 = t;
                t = term_d_31;
                w_18 = t;
                t = term_l_33;
                t = o_7(u_18, w_18, t);
                t = u_49;
                t = default_system_about_0_0(t);
                t = term_p_27;
                s_18 = t;
                t = SSL_exit(s_18);
              }
            }
        }
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm m_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL;
              static ATerm g_8 (ATerm t)
              {
                ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,s_5 = NULL;
                a_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_50);
                y_49 = t;
                t = z_49;
                if(((z_48 != NULL) && (z_48 != t)))
                  _fail(t);
                else
                  z_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_49);
                s_5 = t;
                t = SSLsetAnnotations(s_5, y_49);
                return(t);
              }
              t = fetch_1_0(g_8, t);
              t = term_r_18;
              w_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_p_33);
              x_49 = t;
              t = SSL_printnl(w_49, x_49);
              t = (ATerm) ATmakeAppl(sym__2, term_r_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_48)), term_p_33));
              t = default_system_usage_0_0(t);
              t = term_n_9;
              v_49 = t;
              t = SSL_exit(v_49);
              LocalPopChoice(o_33);
            }
          else
            {
              t = m_33;
            }
        }
      }
  }
  a_49 = t;
  t = term_k_28;
  t = table_destroy_0_0(t);
  t = a_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  t = parse_options_1_0(n_90, t);
  f_50 = t;
  t = term_q_33;
  t = table_create_0_0(t);
  t = term_q_33;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_33, term_r_33, f_50);
  t = lookup_table_0_1(g_50, t);
  j_50 = t;
  t = term_r_33;
  h_50 = t;
  t = j_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(h_50, f_50, i_50, t);
  t = f_50;
  t = p_90(t);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_90, t);
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm x_33 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_34);
            }
          else
            {
              t = x_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = xtc_temp_files_1_0(l_8, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm c_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL;
      t = term_w_8;
      n_50 = t;
      t = term_y_19;
      o_50 = t;
      t = term_h_34;
      t = o_7(n_50, o_50, t);
      m_50 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_50);
      LocalPopChoice(g_34);
    }
  else
    {
      t = c_34;
      t = term_c_9;
    }
  t = ppgen_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(ppgen_options_0_0, default_usage_0_0, _id, k_8, t);
  return(t);
}
