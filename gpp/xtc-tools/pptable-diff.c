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
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_h_40;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_t_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_n_37;
ATerm term_p_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_j_36;
ATerm term_g_36;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_m_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_x_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_u_30;
ATerm term_p_30;
ATerm term_k_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_g_28;
ATerm term_m_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_u_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_q_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_b_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_11, term_g_10, term_h_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_z_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_f_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_l_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_o_12, term_s_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_z_12, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_p_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_x_14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_j_15, term_l_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_l_16, term_r_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_x_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_f_17, term_g_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_m_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_c_18, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_r_18, term_s_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_h_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_w_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_t_22);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_i_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_x_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_b_29);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_f_29);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_x_25, term_l_25);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_a_26);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_e_32);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_32);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_z_25);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_z_25);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_l_34);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_z_34);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, term_b_33, term_c_33);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_n_37, term_z_25);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_z_25);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_z_25);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__3, term_b_33, term_c_33, (ATerm) ATempty);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_n_37);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm l_7 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm m_7 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm n_7 (ATerm e_69 (ATerm), ATerm g_179, ATerm y_17, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t);
static ATerm o_7 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm g_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm t_67 (ATerm), ATerm t);
static ATerm q_7 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm d_86 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm c_86 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm e_86 (ATerm), ATerm t);
static ATerm s_7 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm t_7 (ATerm f_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm u_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm v_7 (ATerm g_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm h_12 (ATerm y_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_7 (ATerm u_17, ATerm t);
static ATerm x_7 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_15 (ATerm b_13, ATerm t);
static ATerm p_15 (ATerm k_13, ATerm q_13, ATerm r_13, ATerm t);
static ATerm q_15 (ATerm j_14, ATerm k_14, ATerm l_14, ATerm t);
static ATerm y_7 (ATerm t);
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
ATerm filter_1_0 (ATerm m_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_22 (ATerm l_21, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm c_89 (ATerm), ATerm t);
static ATerm f_23 (ATerm v_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_7 (ATerm q_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm l_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
static ATerm a_8 (ATerm l_32, ATerm m_32, ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm b_8 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm e_8 (ATerm o_14, ATerm p_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm debug_1_0 (ATerm c_69 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm c_8 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm p_74 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm f_8 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_84 (ATerm), ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm o_88 (ATerm), ATerm t);
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
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_8 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_85 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm need_help_1_0 (ATerm k_90 (ATerm), ATerm t);
static ATerm p_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm i_8 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm j_8 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_8 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm l_8 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm o_8 (ATerm w_40, ATerm x_40, ATerm t);
static ATerm m_8 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_92 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm parse_options_1_0 (ATerm h_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm t);
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
    ATerm d_9 = t;
    int f_9 = stack_ptr;
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
        t = e_8(q_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        {
          ATerm g_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 = NULL;
              t = p_1;
              t = r_0(t);
              b_1 = t;
              {
                ATerm l_9 = t;
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
                    t = l_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_1, b_1);
              t = e_8(q_1, b_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
              LocalPopChoice(i_9);
            }
          else
            {
              t = g_9;
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
  ATerm m_9 = t;
  int n_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL;
      t = term_p_9;
      t_2 = t;
      t = term_q_9;
      u_2 = t;
      t = term_t_9;
      t = l_8(t_2, u_2, t);
      LocalPopChoice(n_9);
    }
  else
    {
      t = m_9;
      t = term_u_9;
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
      t = term_q_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 = NULL,v_1 = NULL;
            t = term_p_9;
            u_1 = t;
            t = term_q_9;
            v_1 = t;
            t = term_t_9;
            t = l_8(u_1, v_1, t);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            t = term_u_9;
          }
      }
      l_1 = t;
      t = term_x_9;
      o_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, l_1);
      t = e_8(o_1, l_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm y_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
static ATerm l_7 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL;
  t = term_b_10;
  {
    ATerm c_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = term_p_9;
        c_3 = t;
        t = term_b_10;
        d_3 = t;
        t = term_f_10;
        t = l_8(c_3, d_3, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        t = term_g_10;
      }
  }
  z_2 = t;
  t = term_g_10;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, term_g_10);
  t = l_7(z_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  x_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_2), term_b_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_9;
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
      t = (ATerm) ATinsert(ATempty, term_h_10);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATinsert(ATempty, term_h_10));
      t = c_8(l_3, n_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm m_7 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_3);
  return(t);
}
static ATerm n_7 (ATerm e_69 (ATerm), ATerm g_179, ATerm y_17, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_179, term_i_10);
  t = y_7(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, y_17);
  t = e_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm t_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          t_3 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      w_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(t_3, w_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  r_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  t = n_7(b_0, q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(b_88, c_88, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm o_7 (ATerm g_14, ATerm h_14, ATerm t)
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_10), a_2), term_n_10);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_5), term_r_10), p_2), term_q_10), b_5);
      w_2 = t;
      t = SSL_concat_strings(w_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  ATerm k_5 = NULL;
  static ATerm f_0 (ATerm t)
  {
    t = g_74(t);
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
    ATerm s_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm a_11 = ATgetArgument(t, 0);
              if((m_5 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_19), term_i_19), term_e_19), term_w_18), term_g_18), term_w_17), term_j_17), term_z_16), term_t_16), term_j_16), term_d_16), term_z_15), term_r_15), term_g_15), term_b_15), term_t_14), term_i_14), term_b_14), term_t_13), term_j_13), term_e_13), term_x_12), term_m_12), term_g_12), term_a_12), term_u_11), term_q_11), term_i_11);
        t = fetch_elem_1_0(j_0, t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = s_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, m_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_5 = NULL,d_6 = NULL;
  q_5 = t;
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_19 = ATgetArgument(t, 0);
            d_6 = ATgetArgument(t, 1);
            {
              ATerm t_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_19);
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_3 = NULL,s_3 = NULL,u_3 = NULL;
              t = d_6;
              {
                ATerm z_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_19;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              i_3 = t;
              t = term_a_20;
              s_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_3), term_b_20);
              u_3 = t;
              t = SSL_printnl(s_3, u_3);
              t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_b_20));
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              t = q_5;
            }
        }
      }
    else
      {
        t = q_19;
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
ATerm fork_and_wait_1_0 (ATerm t_67 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,r_6 = NULL;
  r_6 = t;
  t = fork_0_0(t);
  p_6 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = r_6;
        t = t_67(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = SSL_waitpid(p_6);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_20 = ATgetArgument(t, 0);
            if(((ATgetType(e_20) != AT_INT) || (ATgetInt((ATermInt) e_20) != 0)))
              _fail(t);
            {
              ATerm f_20 = ATgetArgument(t, 1);
            }
            {
              ATerm g_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = r_6;
      }
  }
  return(t);
}
static ATerm q_7 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_6 = NULL,x_6 = NULL;
  static ATerm m_0 (ATerm t)
  {
    ATerm a_7 = NULL,b_7 = NULL;
    a_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), a_7);
    t = l_8(not_null(t_6), a_7, t);
    b_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_7, b_7);
    return(t);
  }
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  t = lookup_table_0_1(t_6, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_7(x_6, t);
  t = map_1_0(m_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_7 = NULL,j_7 = NULL,p_7 = NULL;
        t = term_p_9;
        j_7 = t;
        t = term_b_10;
        p_7 = t;
        t = term_f_10;
        t = l_8(j_7, p_7, t);
        i_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_7, term_r_18);
        t = geq_0_0(t);
        t = d_7;
        t = d_86(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = d_7;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,v_8 = NULL,y_8 = NULL;
        t = term_p_9;
        v_8 = t;
        t = term_b_10;
        y_8 = t;
        t = term_f_10;
        t = l_8(v_8, y_8, t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_d_14);
        t = geq_0_0(t);
        t = n_8;
        t = c_86(t);
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = n_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL,j_9 = NULL,k_9 = NULL;
        t = term_p_9;
        j_9 = t;
        t = term_b_10;
        k_9 = t;
        t = term_f_10;
        t = l_8(j_9, k_9, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, term_x_11);
        t = geq_0_0(t);
        t = c_9;
        t = e_86(t);
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = c_9;
      }
  }
  return(t);
}
static ATerm s_7 (ATerm i_78 (ATerm), ATerm j_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = j_78(t);
  {
    static ATerm q_0 (ATerm t)
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, o_9);
      t = i_78(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
  }
  t = b_25;
  return(t);
}
static ATerm t_7 (ATerm f_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm t_10 (ATerm t)
  {
    ATerm l_10 = NULL,m_10 = NULL,o_10 = NULL;
    l_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_10 = ATgetFirst((ATermList) t);
            o_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_20 = t;
          int s_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_10;
              {
                static ATerm s_0 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = s_7(f_78, s_0, m_10, o_10, t);
              }
              t = t_10(t);
              LocalPopChoice(s_20);
            }
          else
            {
              t = p_20;
              {
                ATerm d_4 = NULL,i_4 = NULL,g_0 = NULL;
                t = SSLgetAnnotations(l_10);
                d_4 = t;
                t = o_10;
                t = t_10(t);
                i_4 = t;
                t = (ATerm) ATinsert(CheckATermList(i_4), m_10);
                g_0 = t;
                t = SSLsetAnnotations(g_0, d_4);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = t_10(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      if((j_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm w_10 = NULL,z_10 = NULL,b_11 = NULL,c_11 = NULL;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_20 = ATgetArgument(t, 0);
            ATerm x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = l_8(o_37, p_37, t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATempty;
      }
  }
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_11, q_37);
  t = t_7(u_0, b_11, q_37, t);
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, z_10);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(p_37, z_10, c_11, t);
  t = w_10;
  return(t);
}
static ATerm v_7 (ATerm g_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm w_0 (ATerm t)
  {
    ATerm k_11 = NULL,m_11 = NULL;
    if(match_cons(t, sym__2))
      {
        k_11 = ATgetArgument(t, 0);
        m_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, k_11, m_11);
    t = g_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(w_0, t);
  return(t);
}
static ATerm h_12 (ATerm y_11, ATerm t)
{
  t = SSL_fclose(y_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_12);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            t = h_12(e_12, t);
          }
      }
    }
  else
    {
      t = h_12(e_12, t);
    }
  return(t);
}
static ATerm w_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm x_7 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_fopen(i_42, j_42);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_stdin_stream();
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = SSL_stdout_stream();
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = SSL_stderr_stream();
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
  return(t);
}
static ATerm o_15 (ATerm b_13, ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_explode_term(b_13);
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
          {
            c_13 = ATgetFirst((ATermList) g_21);
            {
              ATerm h_21 = (ATerm) ATgetNext((ATermList) g_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_15 (ATerm k_13, ATerm q_13, ATerm r_13, ATerm t)
{
  ATerm s_13 = NULL,v_13 = NULL,x_13 = NULL,f_14 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(r_13);
  x_13 = t;
  t = k_13;
  if(match_cons(t, sym_Path_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_14, q_13);
  y_0 = t;
  t = SSLsetAnnotations(y_0, x_13);
  if(match_cons(t, sym__2))
    {
      s_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(s_13, v_13, t);
  return(t);
}
static ATerm q_15 (ATerm j_14, ATerm k_14, ATerm l_14, ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,i_15 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(l_14);
  a_15 = t;
  t = SSL_is_string(j_14);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_15, k_14);
  z_0 = t;
  t = SSLsetAnnotations(z_0, a_15);
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(y_14, z_14, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_15 = NULL,m_15 = NULL,n_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_15(k_15, t);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm k_21 = t;
              int m_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_15(m_15, n_15, k_15, t);
                  LocalPopChoice(m_21);
                }
              else
                {
                  t = k_21;
                  t = q_15(m_15, n_15, k_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_15(k_15, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,y_15 = NULL,g_16 = NULL;
  g_16 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_16, term_v_21);
        t = y_7(t);
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        {
          ATerm l_5 = NULL,n_5 = NULL;
          t = term_z_21;
          n_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_21, g_16);
          t = a_8(n_5, g_16, t);
          l_5 = t;
          t = SSL_perror(l_5);
          _fail(t);
        }
      }
  }
  v_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_7(y_15, t);
  u_15 = t;
  t = v_15;
  t = fclose_0_0(t);
  t = u_15;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = NULL,p_16 = NULL;
      o_16 = t;
      t = (ATerm) ATinsert(ATempty, term_f_22);
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_16, (ATerm) ATinsert(ATempty, term_f_22));
      t = c_8(o_16, p_16, t);
      LocalPopChoice(d_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_22 = t;
            if((PushChoice() == 0))
              {
                ATerm q_16 = NULL,s_16 = NULL;
                q_16 = t;
                t = (ATerm) ATinsert(ATempty, term_h_10);
                s_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_16, (ATerm) ATinsert(ATempty, term_h_10));
                t = c_8(q_16, s_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_22;
              }
            t = debug_1_0(a_1, t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
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
  t = term_k_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL;
  j_18 = t;
  t = term_a_20;
  k_18 = t;
  t = (ATerm) ATinsert(ATempty, term_m_22);
  l_18 = t;
  t = SSL_printnl(k_18, l_18);
  t = j_18;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__3))
    {
      m_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
      o_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_7(m_18, n_18, o_18, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,t_18 = NULL;
  p_18 = t;
  t = term_a_20;
  q_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  t_18 = t;
  t = SSL_printnl(q_18, t_18);
  t = p_18;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = term_a_20;
  v_18 = t;
  t = (ATerm) ATinsert(ATempty, term_m_22);
  x_18 = t;
  t = SSL_printnl(v_18, x_18);
  t = u_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_16 = NULL,w_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,i_17 = NULL,l_17 = NULL,n_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,z_17 = NULL,a_18 = NULL;
  u_16 = t;
  t = if_verbose5_1_0(d_1, t);
  {
    ATerm r_22 = t;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,d_18 = NULL;
        t = term_s_22;
        b_18 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_16);
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Imported_1, u_16));
        t = l_8(b_18, d_18, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_22;
      }
  }
  b_17 = t;
  t = term_s_22;
  r_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, term_t_22, (ATerm) ATinsert(ATempty, u_16));
  t = lookup_table_0_1(r_17, t);
  a_18 = t;
  t = term_t_22;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, u_16);
  t_17 = t;
  t = a_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(s_17, t_17, z_17, t);
  t = b_17;
  t = if_verbose4_1_0(h_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_1, t);
  w_16 = t;
  t = term_s_22;
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, w_16);
  t = v_7(m_1, q_17, w_16, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_s_22;
  c_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, (ATerm)ATmakeAppl(sym_Imported_1, u_16), (ATerm) ATempty);
  t = lookup_table_0_1(c_17, t);
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_16);
  d_17 = t;
  t = (ATerm) ATempty;
  i_17 = t;
  t = n_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(d_17, i_17, l_17, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, (ATerm)ATmakeAppl(sym_Imported_1, u_16), (ATerm) ATempty);
  t = if_verbose4_1_0(s_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_19 = ATgetFirst((ATermList) t);
          y_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_5 = NULL,z_5 = NULL,h_6 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(w_19);
            u_5 = t;
            t = x_19;
            t = m_82(t);
            z_5 = t;
            t = y_19;
            t = filter_1_0(m_82, t);
            h_6 = t;
            t = (ATerm) ATinsert(CheckATermList(h_6), z_5);
            g_1 = t;
            t = SSLsetAnnotations(g_1, u_5);
            LocalPopChoice(x_22);
          }
        else
          {
            t = u_22;
            t = y_19;
            t = filter_1_0(m_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm z_71 (ATerm), ATerm a_72 (ATerm), ATerm t)
{
  static ATerm n_20 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_71(t);
        t = n_20(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = a_72(t);
      }
    return(t);
  }
  t = n_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,q_20 = NULL;
      t = term_p_9;
      o_20 = t;
      t = term_h_23;
      q_20 = t;
      t = term_k_23;
      t = l_8(o_20, q_20, t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm m_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_20 = NULL;
            t = term_t_23;
            r_20 = t;
            t = SSL_getenv(r_20);
            LocalPopChoice(s_23);
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
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  t = term_s_22;
  d_21 = t;
  t = term_w_23;
  e_21 = t;
  t = term_x_23;
  t = l_8(d_21, e_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_24;
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
  t = term_c_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_20 = NULL;
  t = if_verbose5_1_0(w_1, t);
  w_20 = t;
  {
    ATerm d_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL,b_21 = NULL;
        t = term_s_22;
        y_20 = t;
        t = term_t_22;
        b_21 = t;
        t = term_j_24;
        t = l_8(y_20, b_21, t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = d_24;
        {
          ATerm c_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_21 = t;
          t = repeat_2_0(y_1, _id, t);
          t = c_21;
        }
      }
  }
  t = w_20;
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
  t = term_k_24;
  return(t);
}
static ATerm j_22 (ATerm l_21, ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  t = term_s_22;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_21);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, l_21));
  t = l_8(o_21, p_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_24 = ATgetFirst((ATermList) t);
      if(match_cons(n_24, sym__2))
        {
          ATerm r_24 = ATgetArgument(n_24, 0);
          n_21 = ATgetArgument(n_24, 1);
        }
      else
        _fail(t);
      {
        ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_21;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_s_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
      t = if_verbose5_1_0(d_2, t);
      t = xtc_load_0_0(t);
      s_21 = t;
      if(match_cons(t, sym__2))
        {
          q_21 = ATgetArgument(t, 0);
          r_21 = ATgetArgument(t, 1);
          {
            ATerm z_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
                t = term_s_22;
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, q_21);
                y_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, q_21));
                t = l_8(x_21, y_21, t);
                {
                  static ATerm f_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((r_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_2, t);
                }
                t = not_null(w_21);
                LocalPopChoice(a_25);
              }
            else
              {
                t = z_24;
                t = j_22(s_21, t);
              }
          }
        }
      else
        {
          t = j_22(s_21, t);
        }
      t = if_verbose5_1_0(g_2, t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm e_22 = NULL,u_6 = NULL,v_6 = NULL;
        e_22 = t;
        t = term_a_20;
        u_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), e_22), term_d_25);
        v_6 = t;
        t = SSL_printnl(u_6, v_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_25), e_22), term_d_25);
        t = if_verbose5_1_0(i_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  o_22 = t;
  t = c_89(t);
  t = xtc_find_0_0(t);
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
  {
    static ATerm l_2 (ATerm t)
    {
      ATerm q_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
      t = o_7(n_22, o_22, t);
      t = term_f_25;
      q_22 = t;
      t = SSL_exit(q_22);
      return(t);
    }
    t = fork_and_wait_1_0(l_2, t);
  }
  t = o_22;
  return(t);
}
static ATerm f_23 (ATerm v_22, ATerm t)
{
  ATerm w_22 = NULL;
  t = SSL_explode_term(v_22);
  if(match_cons(t, sym__2))
    {
      ATerm g_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
  a_23 = t;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              t = z_22;
              return(t);
            }
            t = y_22;
            t = at_end_1_0(n_2, t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            t = f_23(a_23, t);
          }
      }
    }
  else
    {
      t = f_23(a_23, t);
    }
  return(t);
}
static ATerm z_7 (ATerm q_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  l_23 = t;
  t = q_84(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_23, e_35, c_35);
  t = m_8(g_23, e_35, c_35, t);
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_23 = NULL;
        t = term_l_25;
        r_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_l_25);
        t = l_8(g_23, r_23, t);
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_23 = ATgetFirst((ATermList) t);
      j_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_23, term_l_25, (ATerm) ATinsert(CheckATermList(j_23), (ATerm) ATinsert(CheckATermList(i_23), e_35)));
  t = lookup_table_0_1(g_23, t);
  q_23 = t;
  t = term_l_25;
  n_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), (ATerm) ATinsert(CheckATermList(i_23), e_35));
  o_23 = t;
  t = q_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(n_23, o_23, p_23, t);
  t = l_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_23 = NULL,c_7 = NULL;
      y_23 = t;
      t = term_s_25;
      c_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_23, term_s_25);
      t = a_8(y_23, c_7, t);
      u_23 = t;
      t = SSL_mkstemp(u_23);
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm z_23 = NULL;
        t = term_w_25;
        z_23 = t;
        t = SSL_perror(z_23);
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
  t = term_x_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
  t = P__tmpdir_0_0(t);
  g_24 = t;
  t = term_y_25;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_24, term_y_25);
  t = a_8(g_24, h_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_25;
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_24, term_z_25);
  t = z_7(o_2, e_24, f_24, t);
  t = SSL_close(b_24);
  t = e_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm v_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_24 = NULL,q_24 = NULL;
      t = l_24;
      t = xtc_new_file_0_0(t);
      p_24 = t;
      t = x_0(t);
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, (ATerm) ATinsert(ATinsert(ATempty, p_24), term_q_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_24);
    }
  else
    {
      ATerm s_24 = NULL,t_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_24;
      t = xtc_new_file_0_0(t);
      s_24 = t;
      t = x_0(t);
      t_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_24), term_q_9), m_24), term_a_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(v_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_74 (ATerm), ATerm t)
{
  static ATerm p_25 (ATerm t)
  {
    ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
    o_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_25 = ATgetFirst((ATermList) t);
        n_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_7 = NULL,t_8 = NULL,i_1 = NULL;
          t = SSLgetAnnotations(o_25);
          r_7 = t;
          t = n_25;
          t = p_25(t);
          t_8 = t;
          t = (ATerm) ATinsert(CheckATermList(t_8), m_25);
          i_1 = t;
          t = SSLsetAnnotations(i_1, r_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_25;
        t = l_74(t);
      }
    return(t);
  }
  t = p_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_25;
    }
  else
    {
      static ATerm s_2 (ATerm t)
      {
        t = not_null(v_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_25 = ATgetFirst((ATermList) t);
          if(((v_25 != NULL) && (v_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_25;
      t = at_end_1_0(s_2, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_26 = NULL,c_26 = NULL;
      t = term_p_9;
      b_26 = t;
      t = term_i_26;
      c_26 = t;
      t = term_k_26;
      t = l_8(b_26, c_26, t);
      LocalPopChoice(h_26);
      {
        ATerm d_26 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        d_26 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_26), term_i_26);
      }
    }
  else
    {
      t = e_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_8 (ATerm l_32, ATerm m_32, ATerm t)
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
  ATerm f_26 = NULL,g_26 = NULL,j_26 = NULL;
  t = term_z_25;
  t = new_0_0(t);
  f_26 = t;
  t = term_m_26;
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, term_m_26);
  t = a_8(f_26, g_26, t);
  j_26 = t;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_26 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_10);
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_26, (ATerm) ATinsert(ATempty, term_h_10));
        t = c_8(j_26, l_26, t);
        t = new_file_0_0(t);
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = j_26;
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
static ATerm b_8 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = get_errno_0_0(t);
      t = term_z_25;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = e_8(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm e_8 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = b_27;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_u_9;
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_u_9);
        t = e_8(c_27, h_9, t);
        t = SSL_remove(c_27);
        t = term_u_9;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          ATerm t_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_9 = NULL;
              t = b_27;
              t = t_0(t);
              r_9 = t;
              {
                ATerm v_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_9 = NULL;
                    s_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_9;
                      }
                    else
                      {
                        t = s_9;
                        if((c_27 != t))
                          {
                            _fail(t);
                          }
                        t = s_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, c_27, r_9);
              t = b_8(c_27, r_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_9);
              LocalPopChoice(u_26);
            }
          else
            {
              t = t_26;
              t = b_27;
              t = t_0(t);
              if((c_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_27);
            }
        }
      }
  }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_w_26;
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
  t = term_x_26;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL;
  g_27 = t;
  {
    static ATerm v_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_27);
      {
        ATerm y_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_27 = NULL,k_27 = NULL,n_1 = NULL;
            k_27 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm a_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_27);
            i_27 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_27);
            n_1 = t;
            t = SSLsetAnnotations(n_1, i_27);
            LocalPopChoice(z_26);
            t = xtc_transform_file_2_0(y_2, e_3, t);
          }
        else
          {
            t = y_26;
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
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_27;
  t = if_verbose2_1_0(h_3, t);
  return(t);
}
ATerm debug_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  l_27 = t;
  t = c_69(t);
  n_27 = t;
  t = term_a_20;
  o_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_27), n_27);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = l_27;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
        t = term_p_9;
        w_27 = t;
        t = term_b_10;
        x_27 = t;
        t = term_f_10;
        t = l_8(w_27, x_27, t);
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_27, term_o_11);
        t = geq_0_0(t);
        t = r_27;
        t = a_86(t);
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        t = r_27;
      }
  }
  return(t);
}
static ATerm c_8 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm a_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,t_1 = NULL;
  d_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_27), term_j_27), d_28);
  m_28 = t;
  t = SSL_concat_strings(m_28);
  l_28 = t;
  t = (ATerm) ATinsert(ATempty, term_h_10);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_28, (ATerm) ATinsert(ATempty, term_h_10));
  t = c_8(l_28, i_28, t);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, d_28);
  q_28 = t;
  if(match_cons(t, sym__2))
    {
      ATerm q_27 = ATgetArgument(t, 0);
      ATerm s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_28);
  n_28 = t;
  t = SSL_modification_time(a_28);
  o_28 = t;
  t = SSL_modification_time(d_28);
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, p_28);
  t_1 = t;
  t = SSLsetAnnotations(t_1, n_28);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, a_28, d_28);
  h_28 = t;
  t = SSL_explode_term(h_28);
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_27 = ATgetArgument(t, 1);
        if(((ATgetType(u_27) == AT_LIST) && !(ATisEmpty(u_27))))
          {
            e_28 = ATgetFirst((ATermList) u_27);
            {
              ATerm y_27 = (ATerm) ATgetNext((ATermList) u_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_28;
  t = if_verbose2_1_0(k_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  static ATerm j_29 (ATerm t)
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_74(t);
        LocalPopChoice(b_28);
      }
    else
      {
        t = z_27;
        {
          ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,d_10 = NULL,j_10 = NULL,k_2 = NULL;
          g_29 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_29 = ATgetFirst((ATermList) t);
              i_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_29);
          d_10 = t;
          t = i_29;
          t = j_29(t);
          j_10 = t;
          t = (ATerm) ATinsert(CheckATermList(j_10), h_29);
          k_2 = t;
          t = SSLsetAnnotations(k_2, d_10);
        }
      }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm c_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_10 = NULL,x_10 = NULL,y_10 = NULL;
      x_10 = t;
      t = term_g_28;
      y_10 = t;
      t = SSL_explode_string(y_10);
      v_10 = t;
      t = SSL_explode_string(x_10);
      {
        static ATerm v_3 (ATerm t)
        {
          if((v_10 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(v_3, t);
      }
      t = x_10;
      LocalPopChoice(f_28);
    }
  else
    {
      t = c_28;
      {
        ATerm j_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL,g_11 = NULL,l_11 = NULL;
            g_11 = t;
            t = term_r_28;
            l_11 = t;
            t = SSL_explode_string(l_11);
            f_11 = t;
            t = SSL_explode_string(g_11);
            {
              static ATerm x_3 (ATerm t)
              {
                if((f_11 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(x_3, t);
            }
            t = g_11;
            LocalPopChoice(k_28);
          }
        else
          {
            t = j_28;
            {
              ATerm q_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL;
              q_29 = t;
              t = term_a_20;
              v_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, q_29), term_s_28);
              w_29 = t;
              t = SSL_printnl(v_29, w_29);
              t = term_g_10;
              t_29 = t;
              t = SSL_exit(t_29);
              t = (ATerm) ATinsert(ATinsert(ATempty, q_29), term_s_28);
            }
          }
      }
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_29 = NULL,y_29 = NULL;
      t = term_p_9;
      x_29 = t;
      t = term_x_28;
      y_29 = t;
      t = term_y_28;
      t = l_8(x_29, y_29, t);
      LocalPopChoice(w_28);
      {
        ATerm a_30 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        a_30 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, a_30), term_x_28);
      }
    }
  else
    {
      t = v_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_30 = NULL,e_30 = NULL;
      t = term_p_9;
      d_30 = t;
      t = term_b_29;
      e_30 = t;
      t = term_c_29;
      t = l_8(d_30, e_30, t);
      LocalPopChoice(a_29);
      t = (ATerm) ATinsert(ATempty, term_b_29);
    }
  else
    {
      t = z_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,g_30 = NULL;
      t = term_p_9;
      f_30 = t;
      t = term_f_29;
      g_30 = t;
      t = term_k_29;
      t = l_8(f_30, g_30, t);
      LocalPopChoice(e_29);
      t = (ATerm) ATinsert(ATempty, term_f_29);
    }
  else
    {
      t = d_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  t = term_z_25;
  t = pass__patch_0_0(t);
  i_30 = t;
  t = term_z_25;
  t = pass__prune_0_0(t);
  j_30 = t;
  t = term_z_25;
  t = pass__new_0_0(t);
  k_30 = t;
  t = term_z_25;
  t = pass__old_0_0(t);
  l_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_30), k_30), j_30), i_30);
  t = concat_0_0(t);
  return(t);
}
static ATerm f_8 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm t_30 = NULL,v_30 = NULL;
  v_30 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = l_8(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_29 = ATgetFirst((ATermList) t);
            t_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_29);
        {
          ATerm w_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, t_30);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_8(x_36, t_30, w_30, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, t_30);
        }
      }
    else
      {
        t = l_29;
        {
          ATerm y_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_8(x_36, y_30, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = v_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  e_31 = t;
  t = n_84(t);
  d_31 = t;
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_31 = NULL;
        t = term_l_25;
        l_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_31, term_l_25);
        t = l_8(d_31, l_31, t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_31 = ATgetFirst((ATermList) t);
      b_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_31, term_l_25, b_31);
  t = lookup_table_0_1(d_31, t);
  j_31 = t;
  t = term_l_25;
  h_31 = t;
  t = j_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(h_31, b_31, i_31, t);
  t = c_31;
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm m_31 = NULL;
      m_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_31, m_31);
      t = f_8(d_31, m_31, t);
      return(t);
    }
    t = map_1_0(y_3, t);
  }
  t = e_31;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_85(t);
      t = o_85(t);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = o_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_84 (ATerm), ATerm t)
{
  ATerm q_31 = NULL,t_31 = NULL,u_31 = NULL,w_31 = NULL,y_31 = NULL,b_32 = NULL,d_32 = NULL;
  t_31 = t;
  t = m_84(t);
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_31, term_l_25);
  {
    ATerm u_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_30 = ATgetArgument(t, 0);
            ATerm c_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_25;
        n_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_31, term_l_25);
        t = l_8(q_31, n_32, t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
  }
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_31, term_l_25, (ATerm) ATinsert(CheckATermList(u_31), (ATerm) ATempty));
  t = lookup_table_0_1(q_31, t);
  d_32 = t;
  t = term_l_25;
  w_31 = t;
  t = (ATerm) ATinsert(CheckATermList(u_31), (ATerm) ATempty);
  y_31 = t;
  t = d_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(w_31, y_31, b_32, t);
  t = t_31;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_32 = NULL;
  z_32 = t;
  {
    ATerm h_30 = t;
    int m_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_32);
        LocalPopChoice(m_30);
      }
    else
      {
        t = h_30;
        t = z_32;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm q_32 = NULL;
  static ATerm a_4 (ATerm t)
  {
    ATerm r_32 = NULL;
    r_32 = t;
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = NULL,t_32 = NULL;
          t = term_x_25;
          s_32 = t;
          t = term_l_25;
          t_32 = t;
          t = term_p_30;
          t = l_8(s_32, t_32, t);
          LocalPopChoice(o_30);
        }
      else
        {
          t = n_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_32 != NULL) && (q_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_32 = ATgetFirst((ATermList) t);
        {
          ATerm q_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = q_32;
    t = map_1_0(c_4, t);
    t = r_32;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(z_3, t);
  t = restore_always_2_0(o_88, a_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL,t_33 = NULL,u_33 = NULL;
      t = term_p_9;
      t_33 = t;
      t = term_a_26;
      u_33 = t;
      t = term_u_30;
      t = l_8(t_33, u_33, t);
      o_33 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_33);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = term_x_9;
    }
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 = NULL;
        ATerm a_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_34 = NULL,h_34 = NULL;
            h_34 = t;
            if(match_cons(t, sym_FILE_1))
              {
                f_34 = ATgetArgument(t, 0);
                {
                  ATerm v_11 = NULL,m_2 = NULL;
                  t = SSLgetAnnotations(h_34);
                  v_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, f_34);
                  m_2 = t;
                  t = SSLsetAnnotations(m_2, v_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_34;
              }
            LocalPopChoice(f_31);
            t = xtc_transform_file_2_0(h_4, j_4, t);
          }
        else
          {
            t = a_31;
            t = xtc_transform_term_2_0(k_4, l_4, t);
          }
        l_35 = t;
        {
          ATerm g_31 = t;
          int k_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_35;
              {
                ATerm n_31 = t;
                int o_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_12 = NULL,u_12 = NULL;
                    t = term_p_9;
                    t_12 = t;
                    t = term_f_29;
                    u_12 = t;
                    t = term_k_29;
                    t = l_8(t_12, u_12, t);
                    LocalPopChoice(o_31);
                  }
                else
                  {
                    t = n_31;
                    {
                      ATerm v_12 = NULL,w_12 = NULL;
                      t = term_p_9;
                      v_12 = t;
                      t = term_b_29;
                      w_12 = t;
                      t = term_c_29;
                      t = l_8(v_12, w_12, t);
                    }
                  }
              }
              t = l_35;
              {
                ATerm p_31 = t;
                int r_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_13 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        a_13 = ATgetArgument(t, 0);
                        {
                          ATerm h_13 = NULL,q_2 = NULL;
                          t = SSLgetAnnotations(l_35);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, a_13);
                          q_2 = t;
                          t = SSLsetAnnotations(q_2, h_13);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = l_35;
                      }
                    LocalPopChoice(r_31);
                    t = xtc_transform_file_2_0(n_4, pass_verbose_0_0, t);
                  }
                else
                  {
                    t = p_31;
                    t = xtc_transform_term_2_0(o_4, pass_verbose_0_0, t);
                  }
              }
              LocalPopChoice(k_31);
            }
          else
            {
              t = g_31;
              t = l_35;
            }
        }
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        {
          ATerm n_35 = NULL;
          t = term_g_10;
          n_35 = t;
          t = SSL_exit(n_35);
        }
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_z_25;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_s_31;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_z_25;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_v_31;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(g_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  v_35 = t;
  t = term_z_25;
  t = whoami_0_0(t);
  w_35 = t;
  t = term_a_20;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_31), w_35), term_x_31);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = term_g_10;
  z_35 = t;
  t = SSL_exit(z_35);
  t = v_35;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm e_36 = NULL;
  e_36 = t;
  if(match_string(t, "-k"))
    {
      t = e_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_36;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
  h_36 = t;
  t = SSL_string_to_int(h_36);
  i_36 = t;
  t = term_a_32;
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_32, i_36);
  t = o_8(k_36, i_36, t);
  t = h_36;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, s_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  if(match_string(t, "-S"))
    {
      t = t_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_36;
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm u_36 = NULL,y_36 = NULL;
  t = term_b_10;
  u_36 = t;
  t = term_e_32;
  y_36 = t;
  t = term_f_32;
  t = o_8(u_36, y_36, t);
  t = term_g_32;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_h_32;
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
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
  z_36 = t;
  t = SSL_string_to_int(z_36);
  a_37 = t;
  t = term_b_10;
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, a_37);
  t = o_8(b_37, a_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_36);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_i_32;
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
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_j_32;
  c_37 = t;
  t = term_z_25;
  d_37 = t;
  t = term_k_32;
  t = o_8(c_37, d_37, t);
  t = term_o_32;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, w_4, x_4, t);
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, d_5, f_5, t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            t = Option_3_0(g_5, h_5, j_5, t);
          }
      }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  if(match_string(t, "-o"))
    {
      t = h_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_37;
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  i_37 = t;
  t = term_q_9;
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, i_37);
  t = o_8(j_37, i_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_37);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, p_5, r_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_37 = NULL;
  l_37 = t;
  if(match_string(t, "-i"))
    {
      t = l_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_37;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  t_37 = t;
  t = term_a_26;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_26, t_37);
  t = o_8(u_37, t_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, v_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
      t = term_z_25;
      t = p_0(t);
      m_38 = t;
      t = term_b_33;
      n_38 = t;
      t = term_c_33;
      o_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_33, term_c_33, m_38);
      t = m_8(n_38, o_38, m_38, t);
      _fail(t);
    }
  else
    {
      ATerm v_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_38 = ATgetFirst((ATermList) t);
          h_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_38 = ATgetFirst((ATermList) t);
          j_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_38;
      t = n_0(t);
      t = i_38;
      t = o_0(t);
      v_38 = t;
      t = (ATerm) ATinsert(CheckATermList(j_38), v_38);
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
  ATerm w_38 = NULL,x_38 = NULL;
  w_38 = t;
  t = term_f_29;
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, w_38);
  t = o_8(x_38, w_38, t);
  t = w_38;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_d_33;
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
  ATerm y_38 = NULL,z_38 = NULL;
  y_38 = t;
  t = term_b_29;
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, y_38);
  t = o_8(z_38, y_38, t);
  t = y_38;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  a_39 = t;
  t = term_i_26;
  b_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_26, a_39);
  t = o_8(b_39, a_39, t);
  t = a_39;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  c_39 = t;
  t = term_x_28;
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_28, c_39);
  t = o_8(d_39, c_39, t);
  t = c_39;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_g_33;
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
  ATerm e_39 = NULL,g_39 = NULL;
  t = term_h_33;
  e_39 = t;
  t = term_z_25;
  g_39 = t;
  t = term_i_33;
  t = o_8(e_39, g_39, t);
  t = term_j_33;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm n_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(a_6, b_6, c_6, t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = n_33;
            {
              ATerm s_33 = t;
              int v_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(e_6, f_6, g_6, t);
                  LocalPopChoice(v_33);
                }
              else
                {
                  t = s_33;
                  {
                    ATerm y_33 = t;
                    int z_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(i_6, j_6, k_6, t);
                        LocalPopChoice(z_33);
                      }
                    else
                      {
                        t = y_33;
                        {
                          ATerm a_34 = t;
                          int b_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(b_34);
                            }
                          else
                            {
                              t = a_34;
                              {
                                ATerm c_34 = t;
                                int d_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(d_34);
                                  }
                                else
                                  {
                                    t = c_34;
                                    {
                                      ATerm e_34 = t;
                                      int g_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(l_6, m_6, n_6, t);
                                          LocalPopChoice(g_34);
                                        }
                                      else
                                        {
                                          t = e_34;
                                          {
                                            ATerm i_34 = t;
                                            int j_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(j_34);
                                              }
                                            else
                                              {
                                                t = i_34;
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
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_25;
  t = whoami_0_0(t);
  h_39 = t;
  t = term_a_20;
  j_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_34), h_39);
  k_39 = t;
  t = SSL_printnl(j_39, k_39);
  t = term_g_10;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_39 = NULL,o_39 = NULL;
  t = term_p_9;
  l_39 = t;
  t = term_l_34;
  o_39 = t;
  t = term_m_34;
  t = l_8(l_39, o_39, t);
  return(t);
}
static ATerm g_8 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,z_39 = NULL,a_40 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_39;
      t = i_81(t);
    }
  else
    {
      ATerm d_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_39 = ATgetFirst((ATermList) t);
          a_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_40;
      t = foldr_2_0(i_81, j_81, t);
      d_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_39, d_40);
      t = j_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_8(u_13, w_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_40 = NULL,n_13 = NULL,o_13 = NULL;
  t = times_0_0(t);
  o_13 = t;
  t = SSL_explode_term(o_13);
  if(match_cons(t, sym__2))
    {
      ATerm p_34 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13;
  t = foldr_2_0(o_6, q_6, t);
  u_40 = t;
  t = SSL_TicksToSeconds(u_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_41;
        if((m_41 != t))
          {
            _fail(t);
          }
        t = l_41;
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_41, n_41);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = SSL_gtr(m_41, n_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm s_41 = NULL;
  s_41 = t;
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_41 = NULL,w_41 = NULL,b_42 = NULL;
        t = term_p_9;
        w_41 = t;
        t = term_b_10;
        b_42 = t;
        t = term_f_10;
        t = l_8(w_41, b_42, t);
        v_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_41, term_g_10);
        t = geq_0_0(t);
        t = s_41;
        t = z_85(t);
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = s_41;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = run_time_0_0(t);
  d_42 = t;
  t = term_z_25;
  t = whoami_0_0(t);
  e_42 = t;
  t = term_a_20;
  g_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_34), d_42), term_q_10), e_42);
  h_42 = t;
  t = SSL_printnl(g_42, h_42);
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_34), d_42), term_q_10), e_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_32;
  m_42 = t;
  t = SSL_exit(m_42);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  q_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_43 = ATgetArgument(t, 0);
          {
            ATerm w_14 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(q_43);
            w_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_43);
            b_4 = t;
            t = SSLsetAnnotations(b_4, w_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_42 = NULL,u_42 = NULL;
      t = term_p_9;
      t_42 = t;
      t = term_z_34;
      u_42 = t;
      t = term_a_35;
      t = l_8(t_42, u_42, t);
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = fetch_1_0(w_6, t);
    }
  t = k_90(t);
  return(t);
}
static ATerm p_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_43);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm i_44 = NULL;
  t = table_hashtable_0_0(t);
  i_44 = t;
  {
    ATerm b_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL;
        t = i_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_8(d_38, f_15, t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = b_35;
        {
          ATerm w_15 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = i_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_8(d_38, w_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm n_44 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  n_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_44);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_44 = NULL,q_44 = NULL,r_44 = NULL,t_44 = NULL,v_44 = NULL;
  o_44 = t;
  t = term_f_35;
  t_44 = t;
  t = term_g_35;
  v_44 = t;
  t = o_44;
  t = new_hashtable_0_2(t_44, v_44, t);
  q_44 = t;
  t = o_44;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(o_44, q_44, r_44, t);
  t = o_44;
  return(t);
}
static ATerm i_8 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm w_44 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_44);
  return(t);
}
static ATerm j_8 (ATerm t_40, ATerm t)
{
  ATerm x_44 = NULL;
  t = SSL_hashtable_destroy(t_40);
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_44);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm y_44 = NULL;
  t = SSL_table_hashtable();
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_44);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL;
  i_45 = t;
  t = table_hashtable_0_0(t);
  l_45 = t;
  t = lookup_table_0_1(i_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_8(p_45, t);
  t = l_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(i_45, o_45, t);
  t = i_45;
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_35), term_t_35), term_s_35), term_r_35), term_q_35), term_p_35), term_o_35), term_m_35), term_k_35), term_j_35), term_i_35), term_h_35);
  return(t);
}
ATerm map_1_0 (ATerm u_73 (ATerm), ATerm t)
{
  static ATerm r_46 (ATerm t)
  {
    ATerm l_46 = NULL,o_46 = NULL,q_46 = NULL;
    l_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_46;
      }
    else
      {
        ATerm i_16 = NULL,m_16 = NULL,n_16 = NULL,f_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_46 = ATgetFirst((ATermList) t);
            q_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_46);
        i_16 = t;
        t = o_46;
        t = u_73(t);
        m_16 = t;
        t = q_46;
        t = r_46(t);
        n_16 = t;
        t = (ATerm) ATinsert(CheckATermList(n_16), m_16);
        f_4 = t;
        t = SSLsetAnnotations(f_4, i_16);
      }
    return(t);
  }
  t = r_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_46 = ATgetFirst((ATermList) t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_47 = NULL,d_47 = NULL;
        static ATerm y_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_47)), not_null(d_47));
          return(t);
        }
        t = y_46;
        t = k_0(t);
        if(((c_47 != NULL) && (c_47 != t)))
          _fail(t);
        else
          c_47 = t;
        t = x_46;
        t = i_0(t);
        if(((d_47 != NULL) && (d_47 != t)))
          _fail(t);
        else
          d_47 = t;
        t = y_46;
        t = reverse_acc_2_0(i_0, y_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_25;
      t = k_0(t);
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_47), term_x_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL;
  ATerm y_35 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_47 = NULL,l_47 = NULL;
      t = term_p_9;
      k_47 = t;
      t = term_l_34;
      l_47 = t;
      t = term_m_34;
      t = l_8(k_47, l_47, t);
      h_47 = t;
      LocalPopChoice(c_36);
    }
  else
    {
      t = y_35;
      {
        static ATerm z_6 (ATerm t)
        {
          ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,m_4 = NULL;
          o_47 = t;
          if(match_cons(t, sym_Program_1))
            {
              n_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_47);
          m_47 = t;
          t = n_47;
          if(((h_47 != NULL) && (h_47 != t)))
            _fail(t);
          else
            h_47 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, n_47);
          m_4 = t;
          t = SSLsetAnnotations(m_4, m_47);
          return(t);
        }
        t = fetch_1_0(z_6, t);
      }
    }
  {
    ATerm d_36 = t;
    int f_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_36), not_null(h_47)), term_g_36);
        t = echo_0_0(t);
        LocalPopChoice(f_36);
      }
    else
      {
        t = d_36;
      }
  }
  t = term_l_36;
  t = echo_0_0(t);
  t = term_b_33;
  i_47 = t;
  t = term_c_33;
  j_47 = t;
  t = term_m_36;
  t = l_8(i_47, j_47, t);
  t = reverse_acc_2_0(_id, e_7, t);
  t = map_1_0(f_7, t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_47 = NULL;
        static ATerm g_7 (ATerm t)
        {
          t = not_null(h_47);
          return(t);
        }
        t = long_description_1_0(g_7, t);
        t_47 = t;
        t = (ATerm) ATinsert(CheckATermList(t_47), term_p_36);
        t = echo_0_0(t);
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  static ATerm s_48 (ATerm t)
  {
    ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL;
    p_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_48 = ATgetFirst((ATermList) t);
        r_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_36 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_17 = NULL,h_17 = NULL,p_4 = NULL;
          t = SSLgetAnnotations(p_48);
          e_17 = t;
          t = q_48;
          t = e_74(t);
          h_17 = t;
          t = (ATerm) ATinsert(CheckATermList(r_48), h_17);
          p_4 = t;
          t = SSLsetAnnotations(p_4, e_17);
          LocalPopChoice(e_37);
        }
      else
        {
          t = v_36;
          {
            ATerm e_18 = NULL,h_18 = NULL,r_4 = NULL;
            t = SSLgetAnnotations(p_48);
            e_18 = t;
            t = r_48;
            t = s_48(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), q_48);
            r_4 = t;
            t = SSLsetAnnotations(r_4, e_18);
          }
        }
    }
    return(t);
  }
  t = s_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_48;
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
            t = w_48;
          }
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        t = (ATerm) ATinsert(ATempty, w_48);
      }
  }
  x_48 = t;
  t = term_u_9;
  y_48 = t;
  t = SSL_printnl(y_48, x_48);
  t = w_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_p_9;
  c_49 = t;
  t = term_l_34;
  d_49 = t;
  t = term_m_34;
  t = l_8(c_49, d_49, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_8 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
static ATerm l_8 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm e_49 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(l_38, e_49, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  t = term_n_37;
  g_49 = t;
  t = term_z_25;
  h_49 = t;
  t = term_r_37;
  t = o_8(g_49, h_49, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_s_37;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  t = term_n_37;
  k_49 = t;
  t = term_z_25;
  l_49 = t;
  t = term_r_37;
  t = o_8(k_49, l_49, t);
  t = term_v_37;
  i_49 = t;
  t = term_z_25;
  j_49 = t;
  t = term_w_37;
  t = o_8(i_49, j_49, t);
  t = term_z_37;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_a_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, k_7, d_8, t);
      LocalPopChoice(e_38);
    }
  else
    {
      t = b_38;
      t = Option_3_0(h_8, k_8, r_8, t);
    }
  return(t);
}
static ATerm o_8 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL;
  t = term_p_9;
  m_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, w_40, x_40);
  t = lookup_table_0_1(m_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(w_40, x_40, n_49, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, w_40, x_40);
  return(t);
}
static ATerm m_8 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_38 = ATgetArgument(t, 0);
            ATerm q_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = l_8(r_36, s_36, t);
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = (ATerm) ATempty;
      }
  }
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(r_49), q_36));
  t = lookup_table_0_1(r_36, t);
  u_49 = t;
  t = (ATerm) ATinsert(CheckATermList(r_49), q_36);
  s_49 = t;
  t = u_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(s_36, s_49, t_49, t);
  t = q_49;
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_50 = NULL,b_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
      t = term_z_25;
      t = e_0(t);
      c_50 = t;
      t = term_b_33;
      d_50 = t;
      t = term_c_33;
      e_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_33, term_c_33, c_50);
      t = m_8(d_50, e_50, c_50, t);
      _fail(t);
    }
  else
    {
      ATerm h_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_50 = ATgetFirst((ATermList) t);
          b_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_50;
      t = c_0(t);
      t = term_z_25;
      t = d_0(t);
      h_50 = t;
      t = (ATerm) ATinsert(CheckATermList(b_50), h_50);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,v_4 = NULL;
  n_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_50 = ATgetFirst((ATermList) t);
      k_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_50);
  i_50 = t;
  t = j_50;
  t = r_60(t);
  l_50 = t;
  t = k_50;
  t = s_60(t);
  m_50 = t;
  t = (ATerm) ATinsert(CheckATermList(m_50), l_50);
  v_4 = t;
  t = SSLsetAnnotations(v_4, i_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,x_50 = NULL,y_50 = NULL,z_4 = NULL;
  s_50 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_38;
        t = i_92(t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
      }
  }
  t = s_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_50 = ATgetFirst((ATermList) t);
      v_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_50);
  t_50 = t;
  t = term_l_34;
  y_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_34, u_50);
  t = o_8(y_50, u_50, t);
  t = v_50;
  {
    static ATerm i_51 (ATerm t)
    {
      ATerm u_38 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_39 = t;
          int n_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_51 = NULL;
              b_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_51;
              LocalPopChoice(n_39);
            }
          else
            {
              t = m_39;
              t = i_92(t);
              t = Cons_2_0(_id, i_51, t);
            }
          LocalPopChoice(f_39);
        }
      else
        {
          t = u_38;
          {
            ATerm e_51 = NULL,f_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_51 = ATgetFirst((ATermList) t);
                f_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_51), (ATerm) ATmakeAppl(sym_Undefined_1, e_51));
          }
        }
      return(t);
    }
    t = i_51(t);
  }
  x_50 = t;
  t = (ATerm) ATinsert(CheckATermList(x_50), (ATerm) ATmakeAppl(sym_Program_1, u_50));
  z_4 = t;
  t = SSLsetAnnotations(z_4, t_50);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_51 = NULL;
  v_51 = t;
  if(match_string(t, "--help"))
    {
      t = v_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_51;
        }
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  t = term_z_34;
  w_51 = t;
  t = term_z_25;
  x_51 = t;
  t = term_p_39;
  t = o_8(w_51, x_51, t);
  t = term_q_39;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_r_39;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  p_51 = t;
  t = term_b_33;
  q_51 = t;
  t = term_s_39;
  t = lookup_table_0_1(q_51, t);
  u_51 = t;
  t = term_c_33;
  r_51 = t;
  t = (ATerm) ATempty;
  s_51 = t;
  t = u_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(r_51, s_51, t_51, t);
  t = p_51;
  {
    static ATerm u_8 (ATerm t)
    {
      ATerm t_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_92(t);
          LocalPopChoice(u_39);
        }
      else
        {
          t = t_39;
          {
            ATerm v_39 = t;
            int x_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_8, x_8, z_8, t);
                LocalPopChoice(x_39);
              }
            else
              {
                t = v_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_8, t);
  }
  {
    ATerm y_39 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_52 = NULL;
        i_52 = t;
        {
          ATerm c_40 = t;
          int e_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_19 = NULL;
              t = i_52;
              {
                ATerm f_40 = t;
                int g_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_19 = NULL,c_19 = NULL;
                    t = term_p_9;
                    b_19 = t;
                    t = term_z_34;
                    c_19 = t;
                    t = term_a_35;
                    t = l_8(b_19, c_19, t);
                    LocalPopChoice(g_40);
                  }
                else
                  {
                    t = f_40;
                    t = fetch_1_0(a_9, t);
                  }
              }
              t = i_52;
              t = default_system_usage_0_0(t);
              t = term_e_32;
              a_19 = t;
              t = SSL_exit(a_19);
              LocalPopChoice(e_40);
            }
          else
            {
              t = c_40;
              {
                ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
                t = term_p_9;
                k_19 = t;
                t = term_n_37;
                l_19 = t;
                t = term_h_40;
                t = l_8(k_19, l_19, t);
                t = i_52;
                t = default_system_about_0_0(t);
                t = term_e_32;
                j_19 = t;
                t = SSL_exit(j_19);
              }
            }
        }
        LocalPopChoice(b_40);
      }
    else
      {
        t = y_39;
        {
          ATerm i_40 = t;
          int v_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
              static ATerm b_9 (ATerm t)
              {
                ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,i_5 = NULL;
                o_52 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_52);
                m_52 = t;
                t = n_52;
                if(((n_51 != NULL) && (n_51 != t)))
                  _fail(t);
                else
                  n_51 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_52);
                i_5 = t;
                t = SSLsetAnnotations(i_5, m_52);
                return(t);
              }
              t = fetch_1_0(b_9, t);
              t = term_a_20;
              k_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_51)), term_y_40);
              l_52 = t;
              t = SSL_printnl(k_52, l_52);
              t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_51)), term_y_40));
              t = default_system_usage_0_0(t);
              t = term_g_10;
              j_52 = t;
              t = SSL_exit(j_52);
              LocalPopChoice(v_40);
            }
          else
            {
              t = i_40;
            }
        }
      }
  }
  o_51 = t;
  t = term_b_33;
  t = table_destroy_0_0(t);
  t = o_51;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
  t = parse_options_1_0(m_90, t);
  t_52 = t;
  t = term_z_40;
  t = table_create_0_0(t);
  t = term_z_40;
  u_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_40, term_a_41, t_52);
  t = lookup_table_0_1(u_52, t);
  x_52 = t;
  t = term_a_41;
  v_52 = t;
  t = x_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(v_52, t_52, w_52, t);
  t = t_52;
  t = o_90(t);
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_90, t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        {
          ATerm d_41 = t;
          int e_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_41);
            }
          else
            {
              t = d_41;
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
