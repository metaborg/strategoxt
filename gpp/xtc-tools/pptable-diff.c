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
ATerm term_q_39;
ATerm term_p_39;
ATerm term_l_39;
ATerm term_f_39;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_g_38;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_n_37;
ATerm term_o_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_q_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_a_34;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_r_30;
ATerm term_g_30;
ATerm term_y_28;
ATerm term_s_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_r_25;
ATerm term_k_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_i_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_k_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_k_9;
ATerm term_i_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_k_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_f_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_k_10, term_g_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_11, term_l_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_v_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_b_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_12, term_j_12, term_k_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_12, term_t_12, term_u_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_a_13, term_b_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_n_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_n_14, term_r_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_k_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_l_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_n_17, term_p_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_v_17, term_w_17);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_q_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_d_23);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_q_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_n_22, term_o_22);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_v_26);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_f_28);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_l_28);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_s_28);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_b_26, term_k_25);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_m_26);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_n_31);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_31);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_l_26);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_m_32, term_l_26);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_l_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_k_34);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym__2, term_d_32, term_e_32);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_l_26);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_l_26);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_l_26);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__3, term_d_32, term_e_32, (ATerm) ATempty);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_n_37);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm h_7 (ATerm e_34, ATerm f_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_7 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm j_7 (ATerm k_79 (ATerm), ATerm r_190, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t);
static ATerm k_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm z_77 (ATerm), ATerm t);
static ATerm m_7 (ATerm p_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t);
static ATerm o_7 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm p_7 (ATerm m_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm t);
static ATerm r_7 (ATerm h_99 (ATerm), ATerm x_46, ATerm w_46, ATerm t);
static ATerm l_12 (ATerm w_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_7 (ATerm z_17, ATerm t);
static ATerm t_7 (ATerm h_52, ATerm i_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_15 (ATerm d_13, ATerm t);
static ATerm m_15 (ATerm m_13, ATerm p_13, ATerm r_13, ATerm t);
static ATerm n_15 (ATerm o_14, ATerm p_14, ATerm q_14, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm t_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm g_22 (ATerm g_21, ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm d_102 (ATerm), ATerm t);
static ATerm a_23 (ATerm q_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_7 (ATerm z_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm w_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
ATerm debug_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm t);
static ATerm x_7 (ATerm y_51, ATerm z_51, ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm w_84 (ATerm), ATerm t);
static ATerm c_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm a_8 (ATerm v_45, ATerm w_45, ATerm t);
ATerm end_scope_1_0 (ATerm w_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_94 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_101 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_8 (ATerm y_33, ATerm z_33, ATerm t);
ATerm foldr_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm need_help_1_0 (ATerm k_103 (ATerm), ATerm t);
static ATerm k_8 (ATerm i_50, ATerm j_50, ATerm k_50, ATerm t);
ATerm lookup_table_0_1 (ATerm c_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_50, ATerm r_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm d_8 (ATerm n_50, ATerm o_50, ATerm t);
static ATerm e_8 (ATerm s_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_8 (ATerm l_50, ATerm m_50, ATerm t);
static ATerm g_8 (ATerm j_47, ATerm k_47, ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm j_8 (ATerm v_50, ATerm w_50, ATerm t);
static ATerm h_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,p_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = n_1;
        t = t_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, p_1, e_0);
        t = z_7(p_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
        LocalPopChoice(y_8);
      }
    else
      {
        t = w_8;
        {
          ATerm z_8 = t;
          int c_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 = NULL;
              t = n_1;
              t = t_0(t);
              a_1 = t;
              {
                ATerm f_9 = t;
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
                            if((p_1 != t))
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
                    t = f_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, p_1, a_1);
              t = z_7(p_1, a_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
              LocalPopChoice(c_9);
            }
          else
            {
              t = z_8;
              t = n_1;
              t = t_0(t);
              if((p_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_1);
            }
        }
      }
  }
  return(t);
}
static ATerm z_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL,t_2 = NULL;
      t = term_i_9;
      s_2 = t;
      t = term_k_9;
      t_2 = t;
      t = term_q_9;
      t = g_8(s_2, t_2, t);
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      t = term_s_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm q_2 = NULL;
  q_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_1 = NULL,l_1 = NULL;
      t = term_k_9;
      {
        ATerm x_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,t_1 = NULL;
            t = term_i_9;
            o_1 = t;
            t = term_k_9;
            t_1 = t;
            t = term_q_9;
            t = g_8(o_1, t_1, t);
            LocalPopChoice(y_9);
          }
        else
          {
            t = x_9;
            t = term_s_9;
          }
      }
      k_1 = t;
      t = term_a_10;
      l_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_10, k_1);
      t = z_7(l_1, k_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm b_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm h_7 (ATerm e_34, ATerm f_34, ATerm t)
{
  ATerm c_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(e_34, f_34);
      LocalPopChoice(e_10);
    }
  else
    {
      t = c_10;
      t = SSL_subtr(e_34, f_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,z_2 = NULL,d_3 = NULL;
  t = term_f_10;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,h_3 = NULL;
        t = term_i_9;
        f_3 = t;
        t = term_f_10;
        h_3 = t;
        t = term_i_10;
        t = g_8(f_3, h_3, t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = term_k_10;
      }
  }
  y_2 = t;
  t = term_k_10;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_k_10);
  t = h_7(y_2, d_3, t);
  z_2 = t;
  t = SSL_int_to_string(z_2);
  v_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_2), term_f_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm m_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_l_10);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, term_l_10));
      t = x_7(k_3, m_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_7 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm n_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_3);
  return(t);
}
static ATerm j_7 (ATerm k_79 (ATerm), ATerm r_190, ATerm d_18, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_190, term_p_10);
  t = u_7(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, d_18);
  t = k_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if(match_cons(q_10, sym_Stream_1))
        {
          u_3 = ATgetArgument(q_10, 0);
        }
      else
        _fail(t);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(u_3, v_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  t_3 = t;
  t = xtc_new_file_0_0(t);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_3, t_3);
  t = j_7(b_0, s_3, t_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, s_3);
  t = xtc_transform_file_2_0(c_101, d_101, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_5 = NULL,c_5 = NULL,e_5 = NULL,g_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_5 = ATgetArgument(t, 0);
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = SSL_int_to_string(c_5);
        y_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_10), y_1), term_s_10);
        z_1 = t;
        t = SSL_concat_strings(z_1);
      }
    }
  else
    {
      ATerm o_2 = NULL,p_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          c_5 = ATgetArgument(t, 0);
          e_5 = ATgetArgument(t, 1);
          g_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_5);
      o_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_5), term_v_10), o_2), term_u_10), c_5);
      p_2 = t;
      t = SSL_concat_strings(p_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm c_0 (ATerm t);
  static ATerm c_0 (ATerm t)
  {
    t = n_84(t);
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
    ATerm w_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_11 = ATgetArgument(t, 0);
              if((l_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm e_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_19), term_g_19), term_c_19), term_y_18), term_i_18), term_q_17), term_c_17), term_w_16), term_n_16), term_f_16), term_b_16), term_x_15), term_o_15), term_c_15), term_s_14), term_i_14), term_d_14), term_w_13), term_q_13), term_k_13), term_g_13), term_w_12), term_r_12), term_h_12), term_x_11), term_s_11), term_o_11), term_h_11);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = w_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_5 = NULL,c_6 = NULL;
  s_5 = t;
  {
    ATerm l_19 = t;
    int m_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_19 = ATgetArgument(t, 0);
            c_6 = ATgetArgument(t, 1);
            {
              ATerm o_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_19);
        {
          ATerm p_19 = t;
          int q_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_3 = NULL,i_3 = NULL,o_3 = NULL;
              t = c_6;
              {
                ATerm r_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_3 = t;
              t = term_s_19;
              i_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_3), term_t_19);
              o_3 = t;
              t = SSL_printnl(i_3, o_3);
              t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, e_3), term_t_19));
              LocalPopChoice(q_19);
            }
          else
            {
              t = p_19;
              t = s_5;
            }
        }
      }
    else
      {
        t = l_19;
        t = s_5;
      }
  }
  t = s_5;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_77 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,t_6 = NULL;
  t_6 = t;
  t = fork_0_0(t);
  p_6 = t;
  {
    ATerm u_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_6;
        t = z_77(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = u_19;
        t = SSL_waitpid(p_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            if(((ATgetType(x_19) != AT_INT) || (ATgetInt((ATermInt) x_19) != 0)))
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
            }
            {
              ATerm z_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_6;
      }
  }
  return(t);
}
static ATerm m_7 (ATerm p_50, ATerm t)
{
  t = SSL_hashtable_keys(p_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_6 = NULL,y_6 = NULL;
  static ATerm i_0 (ATerm t);
  static ATerm i_0 (ATerm t)
  {
    ATerm z_6 = NULL,c_7 = NULL;
    z_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), z_6);
    t = g_8(not_null(x_6), z_6, t);
    c_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_6, c_7);
    return(t);
  }
  if(((x_6 != NULL) && (x_6 != t)))
    _fail(t);
  else
    x_6 = t;
  t = lookup_table_0_1(x_6, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(y_6, t);
  t = map_1_0(i_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_8 = NULL,m_8 = NULL,n_8 = NULL;
        t = term_i_9;
        m_8 = t;
        t = term_f_10;
        n_8 = t;
        t = term_i_10;
        t = g_8(m_8, n_8, t);
        i_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_8, term_q_18);
        t = geq_0_0(t);
        t = c_8;
        t = e_99(t);
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = c_8;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_9 = NULL,d_9 = NULL,e_9 = NULL;
        t = term_i_9;
        d_9 = t;
        t = term_f_10;
        e_9 = t;
        t = term_i_10;
        t = g_8(d_9, e_9, t);
        a_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_9, term_z_13);
        t = geq_0_0(t);
        t = u_8;
        t = d_99(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = u_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_99 (ATerm), ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  {
    ATerm g_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL,p_9 = NULL,r_9 = NULL;
        t = term_i_9;
        p_9 = t;
        t = term_f_10;
        r_9 = t;
        t = term_i_10;
        t = g_8(p_9, r_9, t);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, term_u_11);
        t = geq_0_0(t);
        t = j_9;
        t = f_99(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = g_20;
        t = j_9;
      }
  }
  return(t);
}
static ATerm o_7 (ATerm p_88 (ATerm), ATerm q_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = q_88(t);
  {
    static ATerm j_0 (ATerm t);
    static ATerm j_0 (ATerm t)
    {
      ATerm v_9 = NULL;
      v_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, v_9);
      t = p_88(t);
      return(t);
    }
    t = fetch_1_0(j_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm p_7 (ATerm m_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm r_10 (ATerm t);
  static ATerm r_10 (ATerm t)
  {
    ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
    m_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_10 = ATgetFirst((ATermList) t);
            o_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_20 = t;
          int l_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_10;
              {
                static ATerm k_0 (ATerm t);
                static ATerm k_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = o_7(m_88, k_0, n_10, o_10, t);
              }
              t = r_10(t);
              LocalPopChoice(l_20);
            }
          else
            {
              t = j_20;
              {
                ATerm y_3 = NULL,c_4 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(m_10);
                y_3 = t;
                t = o_10;
                t = r_10(t);
                c_4 = t;
                t = (ATerm) ATinsert(CheckATermList(c_4), n_10);
                v_0 = t;
                t = SSLsetAnnotations(v_0, y_3);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = r_10(t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      i_11 = ATgetArgument(t, 0);
      if((i_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm n_46, ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,c_11 = NULL;
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_46, o_46);
        t = g_8(n_46, o_46, t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
  }
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_10, p_46);
  t = p_7(n_0, z_10, p_46, t);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_46, o_46, y_10);
  t = lookup_table_0_1(n_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(o_46, y_10, c_11, t);
  t = x_10;
  return(t);
}
static ATerm r_7 (ATerm h_99 (ATerm), ATerm x_46, ATerm w_46, ATerm t)
{
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm j_11 = NULL,m_11 = NULL;
    if(match_cons(t, sym__2))
      {
        j_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, x_46, j_11, m_11);
    t = h_99(t);
    return(t);
  }
  t = w_46;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm l_12 (ATerm w_11, ATerm t)
{
  t = SSL_fclose(w_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  d_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_12 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_12);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = l_12(d_12, t);
          }
      }
    }
  else
    {
      t = l_12(d_12, t);
    }
  return(t);
}
static ATerm s_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm t_7 (ATerm h_52, ATerm i_52, ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_fopen(h_52, i_52);
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_stdin_stream();
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_stdout_stream();
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_stderr_stream();
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
static ATerm j_15 (ATerm d_13, ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_explode_term(d_13);
  if(match_cons(t, sym__2))
    {
      ATerm y_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_20 = ATgetArgument(t, 1);
        if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
          {
            e_13 = ATgetFirst((ATermList) z_20);
            {
              ATerm c_21 = (ATerm) ATgetNext((ATermList) z_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_15 (ATerm m_13, ATerm p_13, ATerm r_13, ATerm t)
{
  ATerm v_13 = NULL,a_14 = NULL,b_14 = NULL,e_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(r_13);
  b_14 = t;
  t = m_13;
  if(match_cons(t, sym_Path_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, p_13);
  y_0 = t;
  t = SSLsetAnnotations(y_0, b_14);
  if(match_cons(t, sym__2))
    {
      v_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(v_13, a_14, t);
  return(t);
}
static ATerm n_15 (ATerm o_14, ATerm p_14, ATerm q_14, ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,e_15 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(q_14);
  y_14 = t;
  t = SSL_is_string(o_14);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_15, p_14);
  z_0 = t;
  t = SSLsetAnnotations(z_0, y_14);
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(w_14, x_14, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym__2))
    {
      h_15 = ATgetArgument(t, 0);
      i_15 = ATgetArgument(t, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_15(g_15, t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm f_21 = t;
              int h_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_15(h_15, i_15, g_15, t);
                  LocalPopChoice(h_21);
                }
              else
                {
                  t = f_21;
                  t = n_15(h_15, i_15, g_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_15(g_15, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,g_16 = NULL;
  g_16 = t;
  {
    ATerm n_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_16, term_q_21);
        t = u_7(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = n_21;
        {
          ATerm f_5 = NULL,h_5 = NULL;
          t = term_s_21;
          h_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_21, g_16);
          t = w_7(h_5, g_16, t);
          f_5 = t;
          t = SSL_perror(f_5);
          _fail(t);
        }
      }
  }
  s_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(t_15, t);
  r_15 = t;
  t = s_15;
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_v_21;
  return(t);
}
static ATerm c_1 (ATerm t)
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
      ATerm k_16 = NULL,m_16 = NULL;
      k_16 = t;
      t = (ATerm) ATinsert(ATempty, term_z_21);
      m_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_16, (ATerm) ATinsert(ATempty, term_z_21));
      t = x_7(k_16, m_16, t);
      LocalPopChoice(y_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_21;
      {
        ATerm a_22 = t;
        int b_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_22 = t;
            if((PushChoice() == 0))
              {
                ATerm o_16 = NULL,t_16 = NULL;
                o_16 = t;
                t = (ATerm) ATinsert(ATempty, term_l_10);
                t_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATinsert(ATempty, term_l_10));
                t = x_7(o_16, t_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_22;
              }
            t = debug_1_0(x_0, t);
            LocalPopChoice(b_22);
          }
        else
          {
            t = a_22;
            t = debug_1_0(c_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(e_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = debug_1_0(h_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  t = term_s_19;
  f_18 = t;
  t = (ATerm) ATinsert(ATempty, term_h_22);
  g_18 = t;
  t = SSL_printnl(f_18, g_18);
  t = e_18;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(match_cons(t, sym__3))
    {
      j_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
      l_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_7(j_18, k_18, l_18, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  t = term_s_19;
  o_18 = t;
  t = (ATerm) ATinsert(ATempty, term_j_22);
  p_18 = t;
  t = SSL_printnl(o_18, p_18);
  t = n_18;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,w_18 = NULL;
  s_18 = t;
  t = term_s_19;
  t_18 = t;
  t = (ATerm) ATinsert(ATempty, term_h_22);
  w_18 = t;
  t = SSL_printnl(t_18, w_18);
  t = s_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,a_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,o_17 = NULL,r_17 = NULL,y_17 = NULL;
  u_16 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm m_22 = t;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,b_18 = NULL;
        t = term_n_22;
        a_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_16);
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Imported_1, u_16));
        t = g_8(a_18, b_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_22;
      }
  }
  a_17 = t;
  t = term_n_22;
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, term_o_22, (ATerm) ATinsert(ATempty, u_16));
  t = lookup_table_0_1(l_17, t);
  y_17 = t;
  t = term_o_22;
  m_17 = t;
  t = (ATerm) ATinsert(ATempty, u_16);
  o_17 = t;
  t = y_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(m_17, o_17, r_17, t);
  t = a_17;
  t = if_verbose4_1_0(f_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_1, t);
  v_16 = t;
  t = term_n_22;
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, v_16);
  t = r_7(m_1, k_17, v_16, t);
  t = if_verbose6_1_0(q_1, t);
  t = term_n_22;
  d_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, (ATerm)ATmakeAppl(sym_Imported_1, u_16), (ATerm) ATempty);
  t = lookup_table_0_1(d_17, t);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_16);
  e_17 = t;
  t = (ATerm) ATempty;
  f_17 = t;
  t = h_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(e_17, f_17, g_17, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_22, (ATerm)ATmakeAppl(sym_Imported_1, u_16), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm t_92 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,c_20 = NULL,d_20 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_20 = ATgetFirst((ATermList) t);
          d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL,u_5 = NULL,v_5 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(w_19);
            q_5 = t;
            t = c_20;
            t = t_92(t);
            u_5 = t;
            t = d_20;
            t = filter_1_0(t_92, t);
            v_5 = t;
            t = (ATerm) ATinsert(CheckATermList(v_5), u_5);
            g_1 = t;
            t = SSLsetAnnotations(g_1, q_5);
            LocalPopChoice(s_22);
          }
        else
          {
            t = p_22;
            t = d_20;
            t = filter_1_0(t_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm t)
{
  static ATerm h_20 (ATerm t);
  static ATerm h_20 (ATerm t)
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_82(t);
        t = h_20(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        t = g_82(t);
      }
    return(t);
  }
  t = h_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL,o_20 = NULL;
      t = term_i_9;
      k_20 = t;
      t = term_d_23;
      o_20 = t;
      t = term_e_23;
      t = g_8(k_20, o_20, t);
      LocalPopChoice(z_22);
    }
  else
    {
      t = y_22;
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = term_o_23;
            q_20 = t;
            t = SSL_getenv(q_20);
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  t = term_n_22;
  a_21 = t;
  t = term_q_23;
  b_21 = t;
  t = term_s_23;
  t = g_8(a_21, b_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm t_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_23;
      }
  }
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_20 = NULL;
  t = if_verbose5_1_0(u_1, t);
  u_20 = t;
  {
    ATerm x_23 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_20 = NULL,w_20 = NULL;
        t = term_n_22;
        v_20 = t;
        t = term_o_22;
        w_20 = t;
        t = term_e_24;
        t = g_8(v_20, w_20, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = x_23;
        {
          ATerm x_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          x_20 = t;
          t = repeat_2_0(w_1, _id, t);
          t = x_20;
        }
      }
  }
  t = u_20;
  t = if_verbose5_1_0(x_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm g_22 (ATerm g_21, ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  t = term_n_22;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_21);
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Tool_1, g_21));
  t = g_8(j_21, k_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_24 = ATgetFirst((ATermList) t);
      if(match_cons(k_24, sym__2))
        {
          ATerm o_24 = ATgetArgument(k_24, 0);
          i_21 = ATgetArgument(k_24, 1);
        }
      else
        _fail(t);
      {
        ATerm m_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_21;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_g_24;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_n_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL,o_21 = NULL;
      t = if_verbose5_1_0(b_2, t);
      t = xtc_load_0_0(t);
      o_21 = t;
      if(match_cons(t, sym__2))
        {
          l_21 = ATgetArgument(t, 0);
          m_21 = ATgetArgument(t, 1);
          {
            ATerm s_24 = t;
            int t_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_21 = NULL,t_21 = NULL,u_21 = NULL;
                t = term_n_22;
                t_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, l_21);
                u_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_22, (ATerm) ATmakeAppl(sym_Tool_1, l_21));
                t = g_8(t_21, u_21, t);
                {
                  static ATerm d_2 (ATerm t);
                  static ATerm d_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((m_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_2, t);
                }
                t = not_null(r_21);
                LocalPopChoice(t_24);
              }
            else
              {
                t = s_24;
                t = g_22(o_21, t);
              }
          }
        }
      else
        {
          t = g_22(o_21, t);
        }
      t = if_verbose5_1_0(e_2, t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm f_22 = NULL,o_6 = NULL,q_6 = NULL;
        f_22 = t;
        t = term_s_19;
        o_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), f_22), term_u_24);
        q_6 = t;
        t = SSL_printnl(o_6, q_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_24), f_22), term_u_24);
        t = if_verbose5_1_0(g_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm d_102 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,k_22 = NULL;
  k_22 = t;
  t = d_102(t);
  t = xtc_find_0_0(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_22, k_22);
  {
    static ATerm j_2 (ATerm t);
    static ATerm j_2 (ATerm t)
    {
      ATerm l_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_22, k_22);
      t = k_7(i_22, k_22, t);
      t = term_w_24;
      l_22 = t;
      t = SSL_exit(l_22);
      return(t);
    }
    t = fork_and_wait_1_0(j_2, t);
  }
  t = k_22;
  return(t);
}
static ATerm a_23 (ATerm q_22, ATerm t)
{
  ATerm r_22 = NULL;
  t = SSL_explode_term(q_22);
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      u_22 = ATgetArgument(t, 1);
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_2 (ATerm t);
            static ATerm l_2 (ATerm t)
            {
              t = u_22;
              return(t);
            }
            t = t_22;
            t = at_end_1_0(l_2, t);
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = a_23(v_22, t);
          }
      }
    }
  else
    {
      t = a_23(v_22, t);
    }
  return(t);
}
static ATerm v_7 (ATerm z_94 (ATerm), ATerm m_35, ATerm k_35, ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,l_23 = NULL,m_23 = NULL;
  g_23 = t;
  t = z_94(t);
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_23, m_35, k_35);
  t = h_8(b_23, m_35, k_35, t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_k_25;
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_23, term_k_25);
        t = g_8(b_23, n_23, t);
        {
          ATerm l_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_25;
            }
        }
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
      c_23 = ATgetFirst((ATermList) t);
      f_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_23, term_k_25, (ATerm) ATinsert(CheckATermList(f_23), (ATerm) ATinsert(CheckATermList(c_23), m_35)));
  t = lookup_table_0_1(b_23, t);
  m_23 = t;
  t = term_k_25;
  h_23 = t;
  t = (ATerm) ATinsert(CheckATermList(f_23), (ATerm) ATinsert(CheckATermList(c_23), m_35));
  i_23 = t;
  t = m_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(h_23, i_23, l_23, t);
  t = g_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_23 = NULL,v_6 = NULL;
      v_23 = t;
      t = term_r_25;
      v_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_23, term_r_25);
      t = w_7(v_23, v_6, t);
      r_23 = t;
      t = SSL_mkstemp(r_23);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm w_23 = NULL;
        t = term_z_25;
        w_23 = t;
        t = SSL_perror(w_23);
        _fail(t);
      }
    }
  return(t);
}
static ATerm w_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
  t = P__tmpdir_0_0(t);
  b_24 = t;
  t = term_f_26;
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_f_26);
  t = w_7(b_24, c_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_l_26;
  a_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_23, term_l_26);
  t = v_7(n_2, z_23, a_24, t);
  t = SSL_close(y_23);
  t = z_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm u_0 (ATerm), ATerm w_0 (ATerm), ATerm t)
{
  ATerm f_24 = NULL,h_24 = NULL;
  f_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_24 = NULL,j_24 = NULL;
      t = f_24;
      t = xtc_new_file_0_0(t);
      i_24 = t;
      t = w_0(t);
      j_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_24, (ATerm) ATinsert(ATinsert(ATempty, i_24), term_k_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_24);
    }
  else
    {
      ATerm l_24 = NULL,n_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_24;
      t = xtc_new_file_0_0(t);
      l_24 = t;
      t = w_0(t);
      n_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_24), term_k_9), h_24), term_m_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(u_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_24);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_84 (ATerm), ATerm t)
{
  static ATerm f_25 (ATerm t);
  static ATerm f_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,e_25 = NULL;
    e_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        b_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_7 = NULL,n_7 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(e_25);
          f_7 = t;
          t = b_25;
          t = f_25(t);
          n_7 = t;
          t = (ATerm) ATinsert(CheckATermList(n_7), a_25);
          i_1 = t;
          t = SSLsetAnnotations(i_1, f_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_25;
        t = s_84(t);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_25;
    }
  else
    {
      static ATerm r_2 (ATerm t);
      static ATerm r_2 (ATerm t)
      {
        t = not_null(o_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_25 = ATgetFirst((ATermList) t);
          if(((o_25 != NULL) && (o_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_25;
      t = at_end_1_0(r_2, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm n_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL,t_25 = NULL;
      t = term_i_9;
      s_25 = t;
      t = term_v_26;
      t_25 = t;
      t = term_w_26;
      t = g_8(s_25, t_25, t);
      LocalPopChoice(q_26);
      {
        ATerm u_25 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        u_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, u_25), term_v_26);
      }
    }
  else
    {
      t = n_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm debug_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  v_25 = t;
  t = i_79(t);
  w_25 = t;
  t = term_s_19;
  x_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_25), w_25);
  y_25 = t;
  t = SSL_printnl(x_25, y_25);
  t = v_25;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_99 (ATerm), ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
        t = term_i_9;
        d_26 = t;
        t = term_f_10;
        e_26 = t;
        t = term_i_10;
        t = g_8(d_26, e_26, t);
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_26, term_l_11);
        t = geq_0_0(t);
        t = a_26;
        t = b_99(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = a_26;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm y_51, ATerm z_51, ATerm t)
{
  t = SSL_access(y_51, z_51);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_z_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,r_1 = NULL;
  h_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_27), term_a_27), h_26);
  p_26 = t;
  t = SSL_concat_strings(p_26);
  o_26 = t;
  t = (ATerm) ATinsert(ATempty, term_l_10);
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, (ATerm) ATinsert(ATempty, term_l_10));
  t = x_7(o_26, k_26, t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, h_26);
  u_26 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      ATerm d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_26);
  r_26 = t;
  t = SSL_modification_time(g_26);
  s_26 = t;
  t = SSL_modification_time(h_26);
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
  r_1 = t;
  t = SSLsetAnnotations(r_1, r_26);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, g_26, h_26);
  j_26 = t;
  t = SSL_explode_term(j_26);
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_27 = ATgetArgument(t, 1);
        if(((ATgetType(f_27) == AT_LIST) && !(ATisEmpty(f_27))))
          {
            i_26 = ATgetFirst((ATermList) f_27);
            {
              ATerm g_27 = (ATerm) ATgetNext((ATermList) f_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_26;
  t = if_verbose2_1_0(w_2, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm w_84 (ATerm), ATerm t)
{
  static ATerm t_27 (ATerm t);
  static ATerm t_27 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_84(t);
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm o_27 = NULL,p_27 = NULL,s_27 = NULL,x_8 = NULL,b_9 = NULL,i_2 = NULL;
          o_27 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_27 = ATgetFirst((ATermList) t);
              s_27 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_27);
          x_8 = t;
          t = s_27;
          t = t_27(t);
          b_9 = t;
          t = (ATerm) ATinsert(CheckATermList(b_9), p_27);
          i_2 = t;
          t = SSLsetAnnotations(i_2, x_8);
        }
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL,m_9 = NULL,o_9 = NULL;
      m_9 = t;
      t = term_n_27;
      o_9 = t;
      t = SSL_explode_string(o_9);
      l_9 = t;
      t = SSL_explode_string(m_9);
      {
        static ATerm a_3 (ATerm t);
        static ATerm a_3 (ATerm t)
        {
          if((l_9 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(a_3, t);
      }
      t = m_9;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL,u_9 = NULL,w_9 = NULL;
            u_9 = t;
            t = term_u_27;
            w_9 = t;
            t = SSL_explode_string(w_9);
            t_9 = t;
            t = SSL_explode_string(u_9);
            {
              static ATerm b_3 (ATerm t);
              static ATerm b_3 (ATerm t)
              {
                if((t_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(b_3, t);
            }
            t = u_9;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm c_28 = NULL,d_28 = NULL,g_28 = NULL,h_28 = NULL;
              c_28 = t;
              t = term_s_19;
              g_28 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_28), term_v_27);
              h_28 = t;
              t = SSL_printnl(g_28, h_28);
              t = term_k_10;
              d_28 = t;
              t = SSL_exit(d_28);
              t = (ATerm) ATinsert(ATinsert(ATempty, c_28), term_v_27);
            }
          }
      }
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            {
              ATerm n_28 = NULL,z_9 = NULL;
              n_28 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_28);
              {
                ATerm y_27 = t;
                int z_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_10 = NULL,j_10 = NULL,k_2 = NULL;
                    j_10 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm a_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(j_10);
                    d_10 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_28);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, d_10);
                    LocalPopChoice(z_27);
                    t = xtc_transform_file_2_0(c_3, g_3, t);
                  }
                else
                  {
                    t = y_27;
                    t = xtc_transform_term_2_0(j_3, l_3, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  z_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_9;
              t = if_verbose2_1_0(q_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm b_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_28 = NULL,q_28 = NULL;
      t = term_i_9;
      p_28 = t;
      t = term_f_28;
      q_28 = t;
      t = term_i_28;
      t = g_8(p_28, q_28, t);
      LocalPopChoice(e_28);
      {
        ATerm t_28 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        t_28 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_28), term_f_28);
      }
    }
  else
    {
      t = b_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_28 = NULL,v_28 = NULL;
      t = term_i_9;
      u_28 = t;
      t = term_l_28;
      v_28 = t;
      t = term_m_28;
      t = g_8(u_28, v_28, t);
      LocalPopChoice(k_28);
      t = (ATerm) ATinsert(ATempty, term_l_28);
    }
  else
    {
      t = j_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_28 = NULL,x_28 = NULL;
      t = term_i_9;
      w_28 = t;
      t = term_s_28;
      x_28 = t;
      t = term_y_28;
      t = g_8(w_28, x_28, t);
      LocalPopChoice(r_28);
      t = (ATerm) ATinsert(ATempty, term_s_28);
    }
  else
    {
      t = o_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm a_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  t = term_l_26;
  t = pass__patch_0_0(t);
  a_29 = t;
  t = term_l_26;
  t = pass__prune_0_0(t);
  c_29 = t;
  t = term_l_26;
  t = pass__new_0_0(t);
  d_29 = t;
  t = term_l_26;
  t = pass__old_0_0(t);
  e_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_29), d_29), c_29), a_29);
  t = concat_0_0(t);
  return(t);
}
static ATerm a_8 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm h_29 = NULL,k_29 = NULL;
  k_29 = t;
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        t = g_8(v_45, w_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_29 = ATgetFirst((ATermList) t);
            h_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_29);
        {
          ATerm l_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, h_29);
          t = lookup_table_0_1(v_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_8(w_45, h_29, l_29, t);
          t = (ATerm) ATmakeAppl(sym__3, v_45, w_45, h_29);
        }
      }
    else
      {
        t = z_28;
        {
          ATerm n_29 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
          t = lookup_table_0_1(v_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_29 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_8(w_45, n_29, t);
          t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
        }
      }
  }
  t = k_29;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_94 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,x_29 = NULL,a_30 = NULL,c_30 = NULL,d_30 = NULL;
  x_29 = t;
  t = w_94(t);
  s_29 = t;
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL;
        t = term_k_25;
        e_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_29, term_k_25);
        t = g_8(s_29, e_30, t);
        {
          ATerm j_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_29;
            }
        }
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      q_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_29, term_k_25, q_29);
  t = lookup_table_0_1(s_29, t);
  d_30 = t;
  t = term_k_25;
  a_30 = t;
  t = d_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(a_30, q_29, c_30, t);
  t = r_29;
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm f_30 = NULL;
      f_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_29, f_30);
      t = a_8(s_29, f_30, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = x_29;
  return(t);
}
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm m_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_98(t);
      t = p_98(t);
      LocalPopChoice(o_29);
    }
  else
    {
      t = m_29;
      t = p_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  j_30 = t;
  t = v_94(t);
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_30, term_k_25);
  {
    ATerm p_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_30 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            ATerm v_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_25;
        x_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_30, term_k_25);
        t = g_8(i_30, x_30, t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATempty;
      }
  }
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_30, term_k_25, (ATerm) ATinsert(CheckATermList(k_30), (ATerm) ATempty));
  t = lookup_table_0_1(i_30, t);
  q_30 = t;
  t = term_k_25;
  l_30 = t;
  t = (ATerm) ATinsert(CheckATermList(k_30), (ATerm) ATempty);
  o_30 = t;
  t = q_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(l_30, o_30, p_30, t);
  t = j_30;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  {
    ATerm w_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(q_31);
        LocalPopChoice(y_29);
      }
    else
      {
        t = w_29;
        t = q_31;
      }
  }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm d_31 = NULL;
  static ATerm z_3 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    ATerm f_31 = NULL;
    f_31 = t;
    {
      ATerm z_29 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_31 = NULL,k_31 = NULL;
          t = term_b_26;
          i_31 = t;
          t = term_k_25;
          k_31 = t;
          t = term_g_30;
          t = g_8(i_31, k_31, t);
          LocalPopChoice(b_30);
        }
      else
        {
          t = z_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_31 != NULL) && (d_31 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_31 = ATgetFirst((ATermList) t);
        {
          ATerm h_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_31;
    t = map_1_0(a_4, t);
    t = f_31;
    t = end_scope_1_0(b_4, t);
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  t = restore_always_2_0(p_101, z_3, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm m_30 = t;
  int n_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_32 = NULL,h_32 = NULL,j_32 = NULL;
      t = term_i_9;
      h_32 = t;
      t = term_m_26;
      j_32 = t;
      t = term_r_30;
      t = g_8(h_32, j_32, t);
      f_32 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_32);
      LocalPopChoice(n_30);
    }
  else
    {
      t = m_30;
      t = term_a_10;
    }
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL;
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_32 = NULL,w_32 = NULL;
            w_32 = t;
            if(match_cons(t, sym_FILE_1))
              {
                v_32 = ATgetArgument(t, 0);
                {
                  ATerm b_11 = NULL,m_2 = NULL;
                  t = SSLgetAnnotations(w_32);
                  b_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, v_32);
                  m_2 = t;
                  t = SSLsetAnnotations(m_2, b_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = w_32;
              }
            LocalPopChoice(v_30);
            t = xtc_transform_file_2_0(e_4, f_4, t);
          }
        else
          {
            t = u_30;
            t = xtc_transform_term_2_0(g_4, h_4, t);
          }
        r_33 = t;
        {
          ATerm w_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_33;
              {
                ATerm z_30 = t;
                int a_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_12 = NULL,e_12 = NULL;
                    t = term_i_9;
                    a_12 = t;
                    t = term_s_28;
                    e_12 = t;
                    t = term_y_28;
                    t = g_8(a_12, e_12, t);
                    LocalPopChoice(a_31);
                  }
                else
                  {
                    t = z_30;
                    {
                      ATerm f_12 = NULL,g_12 = NULL;
                      t = term_i_9;
                      f_12 = t;
                      t = term_l_28;
                      g_12 = t;
                      t = term_m_28;
                      t = g_8(f_12, g_12, t);
                    }
                  }
              }
              t = r_33;
              {
                ATerm b_31 = t;
                int c_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_12 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        q_12 = ATgetArgument(t, 0);
                        {
                          ATerm v_12 = NULL,u_2 = NULL;
                          t = SSLgetAnnotations(r_33);
                          v_12 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, q_12);
                          u_2 = t;
                          t = SSLsetAnnotations(u_2, v_12);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = r_33;
                      }
                    LocalPopChoice(c_31);
                    t = xtc_transform_file_2_0(j_4, pass_verbose_0_0, t);
                  }
                else
                  {
                    t = b_31;
                    t = xtc_transform_term_2_0(k_4, pass_verbose_0_0, t);
                  }
              }
              LocalPopChoice(y_30);
            }
          else
            {
              t = w_30;
              t = r_33;
            }
        }
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        {
          ATerm t_33 = NULL;
          t = term_k_10;
          t_33 = t;
          t = SSL_exit(t_33);
        }
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_l_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_e_31;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_l_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_g_31;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,g_34 = NULL,h_34 = NULL;
  b_34 = t;
  t = term_l_26;
  t = whoami_0_0(t);
  c_34 = t;
  t = term_s_19;
  g_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_31), c_34), term_h_31);
  h_34 = t;
  t = SSL_printnl(g_34, h_34);
  t = term_k_10;
  d_34 = t;
  t = SSL_exit(d_34);
  t = b_34;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  if(match_string(t, "-k"))
    {
      t = l_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_34;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm m_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  t = SSL_string_to_int(m_34);
  p_34 = t;
  t = term_l_31;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, p_34);
  t = j_8(q_34, p_34, t);
  t = m_34;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, p_4, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-S"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm v_34 = NULL,x_34 = NULL;
  t = term_f_10;
  v_34 = t;
  t = term_n_31;
  x_34 = t;
  t = term_o_31;
  t = j_8(v_34, x_34, t);
  t = term_p_31;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_r_31;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  t = SSL_string_to_int(y_34);
  z_34 = t;
  t = term_f_10;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, z_34);
  t = j_8(a_35, z_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_34);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_35 = NULL,p_35 = NULL;
  t = term_t_31;
  d_35 = t;
  t = term_l_26;
  p_35 = t;
  t = term_u_31;
  t = j_8(d_35, p_35, t);
  t = term_v_31;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_4, s_4, u_4, t);
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
            t = ArgOption_3_0(v_4, w_4, y_4, t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            t = Option_3_0(z_4, b_5, d_5, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  if(match_string(t, "-o"))
    {
      t = r_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_35;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  t = term_k_9;
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, s_35);
  t = j_8(t_35, s_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_35);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_5, m_5, n_5, t);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  if(match_string(t, "-i"))
    {
      t = v_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_35;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  w_35 = t;
  t = term_m_26;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_26, w_35);
  t = j_8(x_35, w_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_35);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, r_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
      t = term_l_26;
      t = r_0(t);
      j_36 = t;
      t = term_d_32;
      k_36 = t;
      t = term_e_32;
      l_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_32, term_e_32, j_36);
      t = h_8(k_36, l_36, j_36, t);
      _fail(t);
    }
  else
    {
      ATerm r_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_36 = ATgetFirst((ATermList) t);
          g_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_36;
      t = p_0(t);
      t = f_36;
      t = q_0(t);
      r_36 = t;
      t = (ATerm) ATinsert(CheckATermList(g_36), r_36);
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  t = term_s_28;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, t_36);
  t = j_8(u_36, t_36, t);
  t = t_36;
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
static ATerm a_6 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL;
  v_36 = t;
  t = term_l_28;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_28, v_36);
  t = j_8(w_36, v_36, t);
  t = v_36;
  return(t);
}
static ATerm b_6 (ATerm t)
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
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  t = term_v_26;
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_26, x_36);
  t = j_8(y_36, x_36, t);
  t = x_36;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  z_36 = t;
  t = term_f_28;
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, z_36);
  t = j_8(a_37, z_36, t);
  t = z_36;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  t = term_m_32;
  b_37 = t;
  t = term_l_26;
  c_37 = t;
  t = term_n_32;
  t = j_8(b_37, c_37, t);
  t = term_o_32;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_5, x_5, y_5, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(z_5, a_6, b_6, t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = u_32;
            {
              ATerm y_32 = t;
              int z_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(d_6, e_6, f_6, t);
                  LocalPopChoice(z_32);
                }
              else
                {
                  t = y_32;
                  {
                    ATerm a_33 = t;
                    int b_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(g_6, h_6, i_6, t);
                        LocalPopChoice(b_33);
                      }
                    else
                      {
                        t = a_33;
                        {
                          ATerm c_33 = t;
                          int d_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(d_33);
                            }
                          else
                            {
                              t = c_33;
                              {
                                ATerm e_33 = t;
                                int f_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(f_33);
                                  }
                                else
                                  {
                                    t = e_33;
                                    {
                                      ATerm g_33 = t;
                                      int h_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(j_6, k_6, l_6, t);
                                          LocalPopChoice(h_33);
                                        }
                                      else
                                        {
                                          t = g_33;
                                          {
                                            ATerm i_33 = t;
                                            int j_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(j_33);
                                              }
                                            else
                                              {
                                                t = i_33;
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
  ATerm d_37 = NULL,e_37 = NULL,g_37 = NULL,h_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_26;
  t = whoami_0_0(t);
  d_37 = t;
  t = term_s_19;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_33), d_37);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = term_k_10;
  e_37 = t;
  t = SSL_exit(e_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  t = term_i_9;
  i_37 = t;
  t = term_l_33;
  j_37 = t;
  t = term_m_33;
  t = g_8(i_37, j_37, t);
  return(t);
}
static ATerm b_8 (ATerm y_33, ATerm z_33, ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_33, z_33);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = SSL_addr(y_33, z_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,o_37 = NULL,p_37 = NULL;
  l_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_37;
      t = p_91(t);
    }
  else
    {
      ATerm a_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_37 = ATgetFirst((ATermList) t);
          p_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_37;
      t = foldr_2_0(p_91, q_91, t);
      a_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_37, a_38);
      t = q_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm c_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      c_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_8(c_13, f_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_38 = NULL,y_12 = NULL,z_12 = NULL;
  t = times_0_0(t);
  z_12 = t;
  t = SSL_explode_term(z_12);
  if(match_cons(t, sym__2))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12;
  t = foldr_2_0(m_6, n_6, t);
  d_38 = t;
  t = SSL_TicksToSeconds(d_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym__2))
    {
      v_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_38;
        if((v_38 != t))
          {
            _fail(t);
          }
        t = u_38;
        LocalPopChoice(s_33);
      }
    else
      {
        t = q_33;
        t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
        {
          ATerm u_33 = t;
          int v_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_38, w_38);
              LocalPopChoice(v_33);
            }
          else
            {
              t = u_33;
              t = SSL_gtr(v_38, w_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, v_38, w_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_39 = NULL,e_39 = NULL,h_39 = NULL;
        t = term_i_9;
        e_39 = t;
        t = term_f_10;
        h_39 = t;
        t = term_i_10;
        t = g_8(e_39, h_39, t);
        d_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_39, term_k_10);
        t = geq_0_0(t);
        t = b_39;
        t = a_99(t);
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
        t = b_39;
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,m_39 = NULL,n_39 = NULL;
  t = run_time_0_0(t);
  j_39 = t;
  t = term_l_26;
  t = whoami_0_0(t);
  k_39 = t;
  t = term_s_19;
  m_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_34), j_39), term_u_10), k_39);
  n_39 = t;
  t = SSL_printnl(m_39, n_39);
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_34), j_39), term_u_10), k_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_31;
  o_39 = t;
  t = SSL_exit(o_39);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm e_40 = NULL,h_40 = NULL;
  h_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm x_13 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(h_40);
            x_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_40);
            i_4 = t;
            t = SSLsetAnnotations(i_4, x_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_39 = NULL,w_39 = NULL;
      t = term_i_9;
      v_39 = t;
      t = term_k_34;
      w_39 = t;
      t = term_n_34;
      t = g_8(v_39, w_39, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = fetch_1_0(s_6, t);
    }
  t = k_103(t);
  return(t);
}
static ATerm k_8 (ATerm i_50, ATerm j_50, ATerm k_50, ATerm t)
{
  ATerm l_40 = NULL;
  t = SSL_hashtable_put(k_50, i_50, j_50);
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_47, ATerm t)
{
  ATerm w_40 = NULL;
  t = table_hashtable_0_0(t);
  w_40 = t;
  {
    ATerm o_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL;
        t = w_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            j_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_8(c_47, j_14, t);
        LocalPopChoice(r_34);
      }
    else
      {
        t = o_34;
        {
          ATerm v_14 = NULL;
          t = c_47;
          t = table_create_0_0(t);
          t = w_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_8(c_47, v_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm h_41 = NULL;
  t = SSL_hashtable_create(q_50, r_50);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_41 = NULL,l_41 = NULL,n_41 = NULL,s_41 = NULL,t_41 = NULL;
  i_41 = t;
  t = term_s_34;
  s_41 = t;
  t = term_t_34;
  t_41 = t;
  t = i_41;
  t = new_hashtable_0_2(s_41, t_41, t);
  l_41 = t;
  t = i_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(i_41, l_41, n_41, t);
  t = i_41;
  return(t);
}
static ATerm d_8 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_hashtable_remove(o_50, n_50);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_41);
  return(t);
}
static ATerm e_8 (ATerm s_50, ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_hashtable_destroy(s_50);
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_41 = NULL;
  t = SSL_table_hashtable();
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,d_42 = NULL,f_42 = NULL;
  z_41 = t;
  t = table_hashtable_0_0(t);
  a_42 = t;
  t = lookup_table_0_1(z_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_8(f_42, t);
  t = a_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_8(z_41, d_42, t);
  t = z_41;
  return(t);
}
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_35), term_n_35), term_l_35), term_j_35), term_i_35), term_h_35), term_g_35), term_f_35), term_e_35), term_c_35), term_b_35), term_w_34);
  return(t);
}
ATerm map_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  static ATerm x_42 (ATerm t);
  static ATerm x_42 (ATerm t)
  {
    ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
    u_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_42;
      }
    else
      {
        ATerm l_15 = NULL,q_15 = NULL,u_15 = NULL,l_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_42 = ATgetFirst((ATermList) t);
            w_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_42);
        l_15 = t;
        t = v_42;
        t = b_84(t);
        q_15 = t;
        t = w_42;
        t = x_42(t);
        u_15 = t;
        t = (ATerm) ATinsert(CheckATermList(u_15), q_15);
        l_4 = t;
        t = SSLsetAnnotations(l_4, l_15);
      }
    return(t);
  }
  t = x_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_43 = ATgetFirst((ATermList) t);
      b_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_43 = NULL,g_43 = NULL;
        static ATerm u_6 (ATerm t);
        static ATerm u_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_43)), not_null(g_43));
          return(t);
        }
        t = b_43;
        t = m_0(t);
        if(((f_43 != NULL) && (f_43 != t)))
          _fail(t);
        else
          f_43 = t;
        t = a_43;
        t = l_0(t);
        if(((g_43 != NULL) && (g_43 != t)))
          _fail(t);
        else
          g_43 = t;
        t = b_43;
        t = reverse_acc_2_0(l_0, u_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_26;
      t = m_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm v_43 = NULL;
  v_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_43), term_q_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  ATerm u_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_43 = NULL,o_43 = NULL;
      t = term_i_9;
      n_43 = t;
      t = term_l_33;
      o_43 = t;
      t = term_m_33;
      t = g_8(n_43, o_43, t);
      k_43 = t;
      LocalPopChoice(y_35);
    }
  else
    {
      t = u_35;
      {
        static ATerm w_6 (ATerm t);
        static ATerm w_6 (ATerm t)
        {
          ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,o_4 = NULL;
          r_43 = t;
          if(match_cons(t, sym_Program_1))
            {
              q_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_43);
          p_43 = t;
          t = q_43;
          if(((k_43 != NULL) && (k_43 != t)))
            _fail(t);
          else
            k_43 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, q_43);
          o_4 = t;
          t = SSLsetAnnotations(o_4, p_43);
          return(t);
        }
        t = fetch_1_0(w_6, t);
      }
    }
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_36), not_null(k_43)), term_b_36);
        t = echo_0_0(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
      }
  }
  t = term_h_36;
  t = echo_0_0(t);
  t = term_d_32;
  l_43 = t;
  t = term_e_32;
  m_43 = t;
  t = term_i_36;
  t = g_8(l_43, m_43, t);
  t = reverse_acc_2_0(_id, a_7, t);
  t = map_1_0(b_7, t);
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_43 = NULL;
        static ATerm d_7 (ATerm t);
        static ATerm d_7 (ATerm t)
        {
          t = not_null(k_43);
          return(t);
        }
        t = long_description_1_0(d_7, t);
        w_43 = t;
        t = (ATerm) ATinsert(CheckATermList(w_43), term_o_36);
        t = echo_0_0(t);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  static ATerm v_44 (ATerm t);
  static ATerm v_44 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
    s_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_44 = ATgetFirst((ATermList) t);
        u_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_36 = t;
      int q_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_16 = NULL,p_16 = NULL,r_4 = NULL;
          t = SSLgetAnnotations(s_44);
          j_16 = t;
          t = t_44;
          t = l_84(t);
          p_16 = t;
          t = (ATerm) ATinsert(CheckATermList(u_44), p_16);
          r_4 = t;
          t = SSLsetAnnotations(r_4, j_16);
          LocalPopChoice(q_36);
        }
      else
        {
          t = p_36;
          {
            ATerm b_17 = NULL,j_17 = NULL,t_4 = NULL;
            t = SSLgetAnnotations(s_44);
            b_17 = t;
            t = u_44;
            t = v_44(t);
            j_17 = t;
            t = (ATerm) ATinsert(CheckATermList(j_17), t_44);
            t_4 = t;
            t = SSLsetAnnotations(t_4, b_17);
          }
        }
    }
    return(t);
  }
  t = v_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  {
    ATerm s_36 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_37 = ATgetFirst((ATermList) t);
                ATerm m_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_44;
          }
        LocalPopChoice(f_37);
      }
    else
      {
        t = s_36;
        t = (ATerm) ATinsert(ATempty, z_44);
      }
  }
  a_45 = t;
  t = term_s_9;
  b_45 = t;
  t = SSL_printnl(b_45, a_45);
  t = z_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  t = term_i_9;
  f_45 = t;
  t = term_l_33;
  g_45 = t;
  t = term_m_33;
  t = g_8(f_45, g_45, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_8 (ATerm l_50, ATerm m_50, ATerm t)
{
  t = SSL_hashtable_get(m_50, l_50);
  return(t);
}
static ATerm g_8 (ATerm j_47, ATerm k_47, ATerm t)
{
  ATerm h_45 = NULL;
  t = lookup_table_0_1(j_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_8(k_47, h_45, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm k_45 = NULL,s_45 = NULL;
  t = term_n_37;
  k_45 = t;
  t = term_l_26;
  s_45 = t;
  t = term_q_37;
  t = j_8(k_45, s_45, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_r_37;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm t_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  t = term_n_37;
  y_45 = t;
  t = term_l_26;
  z_45 = t;
  t = term_q_37;
  t = j_8(y_45, z_45, t);
  t = term_s_37;
  t_45 = t;
  t = term_l_26;
  x_45 = t;
  t = term_t_37;
  t = j_8(t_45, x_45, t);
  t = term_u_37;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_7, g_7, l_7, t);
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      t = Option_3_0(y_7, f_8, o_8, t);
    }
  return(t);
}
static ATerm j_8 (ATerm v_50, ATerm w_50, ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_i_9;
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_9, v_50, w_50);
  t = lookup_table_0_1(a_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(v_50, w_50, b_46, t);
  t = (ATerm) ATmakeAppl(sym__3, term_i_9, v_50, w_50);
  return(t);
}
static ATerm h_8 (ATerm q_45, ATerm r_45, ATerm p_45, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL;
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_38 = ATgetArgument(t, 0);
            ATerm c_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = g_8(q_45, r_45, t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = (ATerm) ATempty;
      }
  }
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, (ATerm) ATinsert(CheckATermList(f_46), p_45));
  t = lookup_table_0_1(q_45, t);
  i_46 = t;
  t = (ATerm) ATinsert(CheckATermList(f_46), p_45);
  g_46 = t;
  t = i_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(r_45, g_46, h_46, t);
  t = e_46;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_46 = NULL,a_47 = NULL,b_47 = NULL;
      t = term_l_26;
      t = h_0(t);
      v_46 = t;
      t = term_d_32;
      a_47 = t;
      t = term_e_32;
      b_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_32, term_e_32, v_46);
      t = h_8(a_47, b_47, v_46, t);
      _fail(t);
    }
  else
    {
      ATerm i_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_46 = ATgetFirst((ATermList) t);
          u_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_46;
      t = d_0(t);
      t = term_l_26;
      t = g_0(t);
      i_47 = t;
      t = (ATerm) ATinsert(CheckATermList(u_46), i_47);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_70 (ATerm), ATerm t_70 (ATerm), ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,x_4 = NULL;
  q_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_47 = ATgetFirst((ATermList) t);
      n_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_47);
  l_47 = t;
  t = m_47;
  t = s_70(t);
  o_47 = t;
  t = n_47;
  t = t_70(t);
  p_47 = t;
  t = (ATerm) ATinsert(CheckATermList(p_47), o_47);
  x_4 = t;
  t = SSLsetAnnotations(x_4, l_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,a_48 = NULL,b_48 = NULL,i_5 = NULL;
  v_47 = t;
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_38;
        t = i_105(t);
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
      }
  }
  t = v_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_47 = ATgetFirst((ATermList) t);
      y_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_47);
  w_47 = t;
  t = term_l_33;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_33, x_47);
  t = j_8(b_48, x_47, t);
  t = y_47;
  {
    static ATerm l_48 (ATerm t);
    static ATerm l_48 (ATerm t)
    {
      ATerm h_38 = t;
      int i_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_48 = NULL;
              e_48 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_48;
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
              t = i_105(t);
              t = Cons_2_0(_id, l_48, t);
            }
          LocalPopChoice(i_38);
        }
      else
        {
          t = h_38;
          {
            ATerm h_48 = NULL,i_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_48 = ATgetFirst((ATermList) t);
                i_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_48), (ATerm) ATmakeAppl(sym_Undefined_1, h_48));
          }
        }
      return(t);
    }
    t = l_48(t);
  }
  a_48 = t;
  t = (ATerm) ATinsert(CheckATermList(a_48), (ATerm) ATmakeAppl(sym_Program_1, x_47));
  i_5 = t;
  t = SSLsetAnnotations(i_5, w_47);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_48 = NULL;
  y_48 = t;
  if(match_string(t, "--help"))
    {
      t = y_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_48;
        }
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm z_48 = NULL,a_49 = NULL;
  t = term_k_34;
  z_48 = t;
  t = term_l_26;
  a_49 = t;
  t = term_l_38;
  t = j_8(z_48, a_49, t);
  t = term_m_38;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_n_38;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL;
  s_48 = t;
  t = term_d_32;
  t_48 = t;
  t = term_o_38;
  t = lookup_table_0_1(t_48, t);
  x_48 = t;
  t = term_e_32;
  u_48 = t;
  t = (ATerm) ATempty;
  v_48 = t;
  t = x_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(u_48, v_48, w_48, t);
  t = s_48;
  {
    static ATerm p_8 (ATerm t);
    static ATerm p_8 (ATerm t)
    {
      ATerm p_38 = t;
      int q_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          LocalPopChoice(q_38);
        }
      else
        {
          t = p_38;
          {
            ATerm r_38 = t;
            int s_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_8, r_8, s_8, t);
                LocalPopChoice(s_38);
              }
            else
              {
                t = r_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_8, t);
  }
  {
    ATerm t_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_49 = NULL;
        l_49 = t;
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_17 = NULL;
              t = l_49;
              {
                ATerm a_39 = t;
                int c_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_18 = NULL,h_18 = NULL;
                    t = term_i_9;
                    c_18 = t;
                    t = term_k_34;
                    h_18 = t;
                    t = term_n_34;
                    t = g_8(c_18, h_18, t);
                    LocalPopChoice(c_39);
                  }
                else
                  {
                    t = a_39;
                    t = fetch_1_0(t_8, t);
                  }
              }
              t = l_49;
              t = default_system_usage_0_0(t);
              t = term_n_31;
              x_17 = t;
              t = SSL_exit(x_17);
              LocalPopChoice(z_38);
            }
          else
            {
              t = y_38;
              {
                ATerm r_18 = NULL,u_18 = NULL,v_18 = NULL;
                t = term_i_9;
                u_18 = t;
                t = term_n_37;
                v_18 = t;
                t = term_f_39;
                t = g_8(u_18, v_18, t);
                t = l_49;
                t = default_system_about_0_0(t);
                t = term_n_31;
                r_18 = t;
                t = SSL_exit(r_18);
              }
            }
        }
        LocalPopChoice(x_38);
      }
    else
      {
        t = t_38;
        {
          ATerm g_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
              static ATerm v_8 (ATerm t);
              static ATerm v_8 (ATerm t)
              {
                ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,w_5 = NULL;
                r_49 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_49);
                p_49 = t;
                t = q_49;
                if(((q_48 != NULL) && (q_48 != t)))
                  _fail(t);
                else
                  q_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_49);
                w_5 = t;
                t = SSLsetAnnotations(w_5, p_49);
                return(t);
              }
              t = fetch_1_0(v_8, t);
              t = term_s_19;
              n_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_48)), term_l_39);
              o_49 = t;
              t = SSL_printnl(n_49, o_49);
              t = (ATerm) ATmakeAppl(sym__2, term_s_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_48)), term_l_39));
              t = default_system_usage_0_0(t);
              t = term_k_10;
              m_49 = t;
              t = SSL_exit(m_49);
              LocalPopChoice(i_39);
            }
          else
            {
              t = g_39;
            }
        }
      }
  }
  r_48 = t;
  t = term_d_32;
  t = table_destroy_0_0(t);
  t = r_48;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
  t = parse_options_1_0(m_103, t);
  w_49 = t;
  t = term_p_39;
  t = table_create_0_0(t);
  t = term_p_39;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_39, term_q_39, w_49);
  t = lookup_table_0_1(x_49, t);
  a_50 = t;
  t = term_q_39;
  y_49 = t;
  t = a_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(y_49, w_49, z_49, t);
  t = w_49;
  t = o_103(t);
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_103, t);
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
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
