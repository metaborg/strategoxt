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
ATerm term_g_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_y_39;
ATerm term_m_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_b_39;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_g_38;
ATerm term_f_38;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_f_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_y_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_m_33;
ATerm term_l_33;
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
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_z_30;
ATerm term_s_30;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_k_28;
ATerm term_r_27;
ATerm term_p_27;
ATerm term_m_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_p_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_u_24;
ATerm term_n_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_u_22;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_g_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_v_17;
ATerm term_r_17;
ATerm term_q_17;
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
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
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
ATerm term_m_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_p_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_s_9);
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
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_11, term_g_10, term_i_11);
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
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_12, term_e_12, term_f_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_12, term_p_12, term_w_12);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_12, term_c_13, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_p_13, term_t_13);
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
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_f_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_x_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_d_15, term_e_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_l_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_x_15, term_y_15);
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
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_g_16, term_h_16);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_16, term_r_16, term_t_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_j_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_v_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_f_18, term_g_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_w_18);
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
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_k_23);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_w_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_s_22, term_u_22);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_y_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_c_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_k_29);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_y_25, term_p_25);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_h_26);
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_32);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_m_32, term_d_26);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_j_33, term_d_26);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_n_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_c_35);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_e_33);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_t_37, term_d_26);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_d_26);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_d_26);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_t_37);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm m_7 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_7 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm o_7 (ATerm d_79 (ATerm), ATerm k_190, ATerm d_18, ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t);
static ATerm p_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm s_77 (ATerm), ATerm t);
static ATerm r_7 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_98 (ATerm), ATerm t);
static ATerm t_7 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm u_7 (ATerm f_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm n_0 (ATerm t);
static ATerm v_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm w_7 (ATerm a_99 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm h_12 (ATerm y_11, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_7 (ATerm z_17, ATerm t);
static ATerm y_7 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_15 (ATerm a_13, ATerm t);
static ATerm o_15 (ATerm j_13, ATerm k_13, ATerm q_13, ATerm t);
static ATerm p_15 (ATerm g_14, ATerm h_14, ATerm i_14, ATerm t);
static ATerm z_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm m_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_22 (ATerm k_21, ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm w_101 (ATerm), ATerm t);
static ATerm e_23 (ATerm t_22, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_8 (ATerm s_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
static ATerm b_8 (ATerm q_32, ATerm r_32, ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm c_8 (ATerm s_14, ATerm r_14, ATerm t);
static ATerm f_8 (ATerm t_14, ATerm u_14, ATerm t);
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm t);
static ATerm d_8 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm p_84 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm g_8 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm p_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_94 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_101 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm h_8 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm need_help_1_0 (ATerm d_103 (ATerm), ATerm t);
static ATerm q_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm j_8 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm k_8 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm u_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_8 (ATerm g_50, ATerm h_50, ATerm t);
static ATerm m_8 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm i_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm p_8 (ATerm q_50, ATerm r_50, ATerm t);
static ATerm n_8 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_105 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm parse_options_1_0 (ATerm a_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm o_1 = NULL,q_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = o_1;
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
        t = (ATerm) ATmakeAppl(sym__2, q_1, e_0);
        t = f_8(q_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
        LocalPopChoice(g_9);
      }
    else
      {
        t = d_9;
        {
          ATerm i_9 = t;
          int j_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_1 = NULL;
              t = o_1;
              t = t_0(t);
              b_1 = t;
              {
                ATerm l_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm c_1 = NULL;
                    c_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = c_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = c_1;
                          }
                        else
                          {
                            t = c_1;
                            if((q_1 != t))
                              {
                                _fail(t);
                              }
                            t = c_1;
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
              t = f_8(q_1, b_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
              LocalPopChoice(j_9);
            }
          else
            {
              t = i_9;
              t = o_1;
              t = t_0(t);
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
      t = term_s_9;
      u_2 = t;
      t = term_t_9;
      t = m_8(t_2, u_2, t);
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
      ATerm l_1 = NULL,m_1 = NULL;
      t = term_s_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 = NULL,u_1 = NULL;
            t = term_p_9;
            p_1 = t;
            t = term_s_9;
            u_1 = t;
            t = term_t_9;
            t = m_8(p_1, u_1, t);
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
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_x_9, l_1);
      t = f_8(m_1, l_1, t);
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
static ATerm m_7 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm w_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL;
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
        t = m_8(c_3, d_3, t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = c_10;
        t = term_g_10;
      }
  }
  y_2 = t;
  t = term_g_10;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, term_g_10);
  t = m_7(y_2, b_3, t);
  a_3 = t;
  t = SSL_int_to_string(a_3);
  w_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_2), term_b_10);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
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
          k_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_10);
      n_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, term_i_10));
      t = d_8(k_3, n_3, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_7 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm o_3 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  o_3 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_3);
  return(t);
}
static ATerm o_7 (ATerm d_79 (ATerm), ATerm k_190, ATerm d_18, ATerm t)
{
  ATerm p_3 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_190, term_k_10);
  t = z_7(t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, d_18);
  t = d_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          s_3 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(s_3, u_3, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL;
  r_3 = t;
  t = xtc_new_file_0_0(t);
  q_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, r_3);
  t = o_7(b_0, q_3, r_3, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_3);
  t = xtc_transform_file_2_0(v_100, w_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL,d_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_5 = ATgetArgument(t, 0);
      {
        ATerm z_1 = NULL,a_2 = NULL;
        t = SSL_int_to_string(b_5);
        z_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_10), z_1), term_o_10);
        a_2 = t;
        t = SSL_concat_strings(a_2);
      }
    }
  else
    {
      ATerm p_2 = NULL,q_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_5 = ATgetArgument(t, 0);
          c_5 = ATgetArgument(t, 1);
          d_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_5);
      p_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, d_5), term_s_10), p_2), term_q_10), b_5);
      q_2 = t;
      t = SSL_concat_strings(q_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  ATerm j_5 = NULL;
  static ATerm c_0 (ATerm t)
  {
    t = g_84(t);
    if(((j_5 != NULL) && (j_5 != t)))
      _fail(t);
    else
      j_5 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(j_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm u_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_19), term_i_19), term_e_19), term_x_18), term_i_18), term_a_18), term_k_17), term_a_17), term_v_16), term_j_16), term_d_16), term_z_15), term_s_15), term_g_15), term_b_15), term_q_14), term_k_14), term_b_14), term_x_13), term_l_13), term_e_13), term_x_12), term_n_12), term_g_12), term_a_12), term_u_11), term_q_11), term_m_11);
        t = fetch_elem_1_0(f_0, t);
        LocalPopChoice(z_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, l_5);
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
          ATerm x_19 = t;
          int y_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_3 = NULL,l_3 = NULL,t_3 = NULL;
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
              h_3 = t;
              t = term_a_20;
              l_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_3), term_b_20);
              t_3 = t;
              t = SSL_printnl(l_3, t_3);
              t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, h_3), term_b_20));
              LocalPopChoice(y_19);
            }
          else
            {
              t = x_19;
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
ATerm fork_and_wait_1_0 (ATerm s_77 (ATerm), ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL;
  q_6 = t;
  t = fork_0_0(t);
  p_6 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = q_6;
        t = s_77(t);
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
        t = q_6;
      }
  }
  return(t);
}
static ATerm r_7 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_6 = NULL,u_6 = NULL;
  static ATerm i_0 (ATerm t)
  {
    ATerm y_6 = NULL,b_7 = NULL;
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), y_6);
    t = m_8(not_null(t_6), y_6, t);
    b_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_6, b_7);
    return(t);
  }
  if(((t_6 != NULL) && (t_6 != t)))
    _fail(t);
  else
    t_6 = t;
  t = lookup_table_0_1(t_6, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_7(u_6, t);
  t = map_1_0(i_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL,j_7 = NULL,k_7 = NULL;
        t = term_p_9;
        j_7 = t;
        t = term_b_10;
        k_7 = t;
        t = term_f_10;
        t = m_8(j_7, k_7, t);
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_7, term_q_18);
        t = geq_0_0(t);
        t = d_7;
        t = x_98(t);
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
ATerm if_verbose4_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm l_8 = NULL;
  l_8 = t;
  {
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,t_8 = NULL,w_8 = NULL;
        t = term_p_9;
        t_8 = t;
        t = term_b_10;
        w_8 = t;
        t = term_f_10;
        t = m_8(t_8, w_8, t);
        s_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_8, term_d_14);
        t = geq_0_0(t);
        t = l_8;
        t = w_98(t);
        LocalPopChoice(l_20);
      }
    else
      {
        t = j_20;
        t = l_8;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm m_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL,f_9 = NULL,k_9 = NULL;
        t = term_p_9;
        f_9 = t;
        t = term_b_10;
        k_9 = t;
        t = term_f_10;
        t = m_8(f_9, k_9, t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, term_x_11);
        t = geq_0_0(t);
        t = b_9;
        t = y_98(t);
        LocalPopChoice(p_20);
      }
    else
      {
        t = m_20;
        t = b_9;
      }
  }
  return(t);
}
static ATerm t_7 (ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = j_88(t);
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, o_9);
      t = i_88(t);
      return(t);
    }
    t = fetch_1_0(j_0, t);
  }
  t = g_25;
  return(t);
}
static ATerm u_7 (ATerm f_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm t_10 (ATerm t)
  {
    ATerm h_10 = NULL,m_10 = NULL,n_10 = NULL;
    h_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_10 = ATgetFirst((ATermList) t);
            n_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_10;
              {
                static ATerm k_0 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = t_7(f_88, k_0, m_10, n_10, t);
              }
              t = t_10(t);
              LocalPopChoice(t_20);
            }
          else
            {
              t = r_20;
              {
                ATerm z_3 = NULL,h_4 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(h_10);
                z_3 = t;
                t = n_10;
                t = t_10(t);
                h_4 = t;
                t = (ATerm) ATinsert(CheckATermList(h_4), m_10);
                v_0 = t;
                t = SSLsetAnnotations(v_0, z_3);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = t_10(t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm v_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,a_11 = NULL,c_11 = NULL;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            ATerm z_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = m_8(i_46, j_46, t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATempty;
      }
  }
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_11, k_46);
  t = u_7(n_0, a_11, k_46, t);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, x_10);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(j_46, x_10, c_11, t);
  t = w_10;
  return(t);
}
static ATerm w_7 (ATerm a_99 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm s_0 (ATerm t)
  {
    ATerm k_11 = NULL,l_11 = NULL;
    if(match_cons(t, sym__2))
      {
        k_11 = ATgetArgument(t, 0);
        l_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, k_11, l_11);
    t = a_99(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(s_0, t);
  return(t);
}
static ATerm h_12 (ATerm y_11, ATerm t)
{
  t = SSL_fclose(y_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL;
  c_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm a_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_12);
            LocalPopChoice(e_21);
          }
        else
          {
            t = a_21;
            t = h_12(c_12, t);
          }
      }
    }
  else
    {
      t = h_12(c_12, t);
    }
  return(t);
}
static ATerm x_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm y_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm i_12 = NULL;
  t = SSL_fopen(c_52, d_52);
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_12 = NULL;
  t = SSL_stdin_stream();
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_12);
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
static ATerm n_15 (ATerm a_13, ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_explode_term(a_13);
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
          {
            b_13 = ATgetFirst((ATermList) g_21);
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
  t = b_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_15 (ATerm j_13, ATerm k_13, ATerm q_13, ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,v_13 = NULL,e_14 = NULL,z_0 = NULL;
  t = SSLgetAnnotations(q_13);
  v_13 = t;
  t = j_13;
  if(match_cons(t, sym_Path_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, k_13);
  z_0 = t;
  t = SSLsetAnnotations(z_0, v_13);
  if(match_cons(t, sym__2))
    {
      r_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(r_13, s_13, t);
  return(t);
}
static ATerm p_15 (ATerm g_14, ATerm h_14, ATerm i_14, ATerm t)
{
  ATerm j_14 = NULL,y_14 = NULL,z_14 = NULL,h_15 = NULL,a_1 = NULL;
  t = SSLgetAnnotations(i_14);
  z_14 = t;
  t = SSL_is_string(g_14);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_15, h_14);
  a_1 = t;
  t = SSLsetAnnotations(a_1, z_14);
  if(match_cons(t, sym__2))
    {
      j_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(j_14, y_14, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,m_15 = NULL;
  j_15 = t;
  if(match_cons(t, sym__2))
    {
      k_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_15(j_15, t);
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm l_21 = t;
              int s_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_15(k_15, m_15, j_15, t);
                  LocalPopChoice(s_21);
                }
              else
                {
                  t = l_21;
                  t = p_15(k_15, m_15, j_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_15(j_15, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL,f_16 = NULL;
  f_16 = t;
  {
    ATerm t_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_16, term_y_21);
        t = z_7(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = t_21;
        {
          ATerm k_5 = NULL,m_5 = NULL;
          t = term_z_21;
          m_5 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_21, f_16);
          t = b_8(m_5, f_16, t);
          k_5 = t;
          t = SSL_perror(k_5);
          _fail(t);
        }
      }
  }
  u_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_7(v_15, t);
  r_15 = t;
  t = u_15;
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL,o_16 = NULL;
      l_16 = t;
      t = (ATerm) ATinsert(ATempty, term_g_22);
      o_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, (ATerm) ATinsert(ATempty, term_g_22));
      t = d_8(l_16, o_16, t);
      LocalPopChoice(f_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_22;
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_22 = t;
            if((PushChoice() == 0))
              {
                ATerm p_16 = NULL,q_16 = NULL;
                p_16 = t;
                t = (ATerm) ATinsert(ATempty, term_i_10);
                q_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_16, (ATerm) ATinsert(ATempty, term_i_10));
                t = d_8(p_16, q_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_22;
              }
            t = debug_1_0(y_0, t);
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = debug_1_0(d_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = term_m_22;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_18 = NULL,j_18 = NULL,k_18 = NULL;
  b_18 = t;
  t = term_a_20;
  j_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  k_18 = t;
  t = SSL_printnl(j_18, k_18);
  t = b_18;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__3))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
      n_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_7(l_18, m_18, n_18, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_18 = NULL,r_18 = NULL,s_18 = NULL;
  o_18 = t;
  t = term_a_20;
  r_18 = t;
  t = (ATerm) ATinsert(ATempty, term_q_22);
  s_18 = t;
  t = SSL_printnl(r_18, s_18);
  t = o_18;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  t = term_a_20;
  u_18 = t;
  t = (ATerm) ATinsert(ATempty, term_p_22);
  v_18 = t;
  t = SSL_printnl(u_18, v_18);
  t = t_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_16 = NULL,u_16 = NULL,w_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,i_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,s_17 = NULL,w_17 = NULL;
  s_16 = t;
  t = if_verbose5_1_0(e_1, t);
  {
    ATerm r_22 = t;
    if((PushChoice() == 0))
      {
        ATerm x_17 = NULL,y_17 = NULL;
        t = term_s_22;
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_16);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Imported_1, s_16));
        t = m_8(x_17, y_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_22;
      }
  }
  w_16 = t;
  t = term_s_22;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, term_u_22, (ATerm) ATinsert(ATempty, s_16));
  t = lookup_table_0_1(n_17, t);
  w_17 = t;
  t = term_u_22;
  o_17 = t;
  t = (ATerm) ATinsert(ATempty, s_16);
  p_17 = t;
  t = w_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(o_17, p_17, s_17, t);
  t = w_16;
  t = if_verbose4_1_0(g_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(k_1, t);
  u_16 = t;
  t = term_s_22;
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, u_16);
  t = w_7(n_1, m_17, u_16, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_s_22;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, (ATerm)ATmakeAppl(sym_Imported_1, s_16), (ATerm) ATempty);
  t = lookup_table_0_1(b_17, t);
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, s_16);
  c_17 = t;
  t = (ATerm) ATempty;
  d_17 = t;
  t = l_17;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(c_17, d_17, i_17, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_22, (ATerm)ATmakeAppl(sym_Imported_1, s_16), (ATerm) ATempty);
  t = if_verbose4_1_0(t_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm m_92 (ATerm), ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL;
  u_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_19 = ATgetFirst((ATermList) t);
          w_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL,z_5 = NULL,a_6 = NULL,h_1 = NULL;
            t = SSLgetAnnotations(u_19);
            t_5 = t;
            t = v_19;
            t = m_92(t);
            z_5 = t;
            t = w_19;
            t = filter_1_0(m_92, t);
            a_6 = t;
            t = (ATerm) ATinsert(CheckATermList(a_6), z_5);
            h_1 = t;
            t = SSLsetAnnotations(h_1, t_5);
            LocalPopChoice(a_23);
          }
        else
          {
            t = w_22;
            t = w_19;
            t = filter_1_0(m_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm t)
{
  static ATerm k_20 (ATerm t)
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_81(t);
        t = k_20(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = z_81(t);
      }
    return(t);
  }
  t = k_20(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_20 = NULL,o_20 = NULL;
      t = term_p_9;
      n_20 = t;
      t = term_k_23;
      o_20 = t;
      t = term_m_23;
      t = m_8(n_20, o_20, t);
      LocalPopChoice(h_23);
    }
  else
    {
      t = d_23;
      {
        ATerm r_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = term_u_23;
            q_20 = t;
            t = SSL_getenv(q_20);
            LocalPopChoice(t_23);
          }
        else
          {
            t = r_23;
            t = XTC_REPOSITORY();
          }
      }
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
  t = term_v_23;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL;
  t = term_s_22;
  c_21 = t;
  t = term_w_23;
  d_21 = t;
  t = term_z_23;
  t = m_8(c_21, d_21, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_24;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = if_verbose5_1_0(v_1, t);
  s_20 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,y_20 = NULL;
        t = term_s_22;
        w_20 = t;
        t = term_u_22;
        y_20 = t;
        t = term_j_24;
        t = m_8(w_20, y_20, t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm b_21 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_21 = t;
          t = repeat_2_0(x_1, _id, t);
          t = b_21;
        }
      }
  }
  t = s_20;
  t = if_verbose5_1_0(y_1, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm e_22 (ATerm k_21, ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  t = term_s_22;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_21);
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, k_21));
  t = m_8(n_21, o_21, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_24 = ATgetFirst((ATermList) t);
      if(match_cons(o_24, sym__2))
        {
          ATerm t_24 = ATgetArgument(o_24, 0);
          m_21 = ATgetArgument(o_24, 1);
        }
      else
        _fail(t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_21;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_n_24;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_s_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
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
      ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      r_21 = t;
      if(match_cons(t, sym__2))
        {
          p_21 = ATgetArgument(t, 0);
          q_21 = ATgetArgument(t, 1);
          {
            ATerm x_24 = t;
            int y_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_21 = NULL,w_21 = NULL,x_21 = NULL;
                t = term_s_22;
                w_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_21);
                x_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_22, (ATerm) ATmakeAppl(sym_Tool_1, p_21));
                t = m_8(w_21, x_21, t);
                {
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_21 != NULL) && (u_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_2, t);
                }
                t = not_null(u_21);
                LocalPopChoice(y_24);
              }
            else
              {
                t = x_24;
                t = e_22(r_21, t);
              }
          }
        }
      else
        {
          t = e_22(r_21, t);
        }
      t = if_verbose5_1_0(f_2, t);
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm d_22 = NULL,r_6 = NULL,v_6 = NULL;
        d_22 = t;
        t = term_a_20;
        r_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), d_22), term_z_24);
        v_6 = t;
        t = SSL_printnl(r_6, v_6);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_25), d_22), term_z_24);
        t = if_verbose5_1_0(h_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm w_101 (ATerm), ATerm t)
{
  ATerm k_22 = NULL,n_22 = NULL;
  n_22 = t;
  t = w_101(t);
  t = xtc_find_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, n_22);
  {
    static ATerm k_2 (ATerm t)
    {
      ATerm o_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, k_22, n_22);
      t = p_7(k_22, n_22, t);
      t = term_b_25;
      o_22 = t;
      t = SSL_exit(o_22);
      return(t);
    }
    t = fork_and_wait_1_0(k_2, t);
  }
  t = n_22;
  return(t);
}
static ATerm e_23 (ATerm t_22, ATerm t)
{
  ATerm v_22 = NULL;
  t = SSL_explode_term(t_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      y_22 = ATgetArgument(t, 1);
      {
        ATerm f_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_2 (ATerm t)
            {
              t = y_22;
              return(t);
            }
            t = x_22;
            t = at_end_1_0(m_2, t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = f_25;
            t = e_23(z_22, t);
          }
      }
    }
  else
    {
      t = e_23(z_22, t);
    }
  return(t);
}
static ATerm a_8 (ATerm s_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  j_23 = t;
  t = s_94(t);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_23, j_35, h_35);
  t = n_8(f_23, j_35, h_35, t);
  {
    ATerm k_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        t = term_p_25;
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_23, term_p_25);
        t = m_8(f_23, q_23, t);
        {
          ATerm q_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_25;
            }
        }
        LocalPopChoice(l_25);
      }
    else
      {
        t = k_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_23 = ATgetFirst((ATermList) t);
      i_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_23, term_p_25, (ATerm) ATinsert(CheckATermList(i_23), (ATerm) ATinsert(CheckATermList(g_23), j_35)));
  t = lookup_table_0_1(f_23, t);
  p_23 = t;
  t = term_p_25;
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), (ATerm) ATinsert(CheckATermList(g_23), j_35));
  n_23 = t;
  t = p_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(l_23, n_23, o_23, t);
  t = j_23;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm s_23 = NULL;
  ATerm r_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL,a_7 = NULL;
      x_23 = t;
      t = term_w_25;
      a_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_23, term_w_25);
      t = b_8(x_23, a_7, t);
      s_23 = t;
      t = SSL_mkstemp(s_23);
      LocalPopChoice(v_25);
    }
  else
    {
      t = r_25;
      {
        ATerm y_23 = NULL;
        t = term_x_25;
        y_23 = t;
        t = SSL_perror(y_23);
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
  t = term_y_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  t = P__tmpdir_0_0(t);
  f_24 = t;
  t = term_a_26;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_24, term_a_26);
  t = b_8(f_24, g_24, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_d_26;
  e_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_d_26);
  t = a_8(o_2, b_24, e_24, t);
  t = SSL_close(a_24);
  t = b_24;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm w_0 (ATerm), ATerm x_0 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  k_24 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_24 = NULL,p_24 = NULL;
      t = k_24;
      t = xtc_new_file_0_0(t);
      m_24 = t;
      t = x_0(t);
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_24, (ATerm) ATinsert(ATinsert(ATempty, m_24), term_s_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(w_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_24);
    }
  else
    {
      ATerm r_24 = NULL,s_24 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_24;
      t = xtc_new_file_0_0(t);
      r_24 = t;
      t = x_0(t);
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_24), term_s_9), l_24), term_h_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(w_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_24);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  static ATerm o_25 (ATerm t)
  {
    ATerm j_25 = NULL,m_25 = NULL,n_25 = NULL;
    n_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_25 = ATgetFirst((ATermList) t);
        m_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_7 = NULL,i_8 = NULL,j_1 = NULL;
          t = SSLgetAnnotations(n_25);
          l_7 = t;
          t = m_25;
          t = o_25(t);
          i_8 = t;
          t = (ATerm) ATinsert(CheckATermList(i_8), j_25);
          j_1 = t;
          t = SSLsetAnnotations(j_1, l_7);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_25;
        t = l_84(t);
      }
    return(t);
  }
  t = o_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_25;
    }
  else
    {
      static ATerm s_2 (ATerm t)
      {
        t = not_null(u_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_25 = ATgetFirst((ATermList) t);
          if(((u_25 != NULL) && (u_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_25;
      t = at_end_1_0(s_2, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_25 = NULL,b_26 = NULL;
      t = term_p_9;
      z_25 = t;
      t = term_l_26;
      b_26 = t;
      t = term_m_26;
      t = m_8(z_25, b_26, t);
      LocalPopChoice(k_26);
      {
        ATerm c_26 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        c_26 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_26), term_l_26);
      }
    }
  else
    {
      t = j_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_8 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  t = term_d_26;
  t = new_0_0(t);
  e_26 = t;
  t = term_n_26;
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_26, term_n_26);
  t = b_8(e_26, f_26, t);
  g_26 = t;
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_10);
        i_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_26, (ATerm) ATinsert(ATempty, term_i_10));
        t = d_8(g_26, i_26, t);
        t = new_file_0_0(t);
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = g_26;
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
static ATerm c_8 (ATerm s_14, ATerm r_14, ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(s_14, r_14);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      t = get_errno_0_0(t);
      t = term_d_26;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, s_14, r_14);
      t = f_8(s_14, r_14, t);
      t = SSL_remove(s_14);
    }
  return(t);
}
static ATerm f_8 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  a_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = a_27;
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_u_9;
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_27, term_u_9);
        t = f_8(b_27, h_9, t);
        t = SSL_remove(b_27);
        t = term_u_9;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_9 = NULL;
              t = a_27;
              t = u_0(t);
              q_9 = t;
              {
                ATerm w_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_9 = NULL;
                    r_9 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_9;
                      }
                    else
                      {
                        t = r_9;
                        if((b_27 != t))
                          {
                            _fail(t);
                          }
                        t = r_9;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_27, q_9);
              t = c_8(b_27, q_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_9);
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              t = a_27;
              t = u_0(t);
              if((b_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
            }
        }
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  f_27 = t;
  {
    static ATerm x_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_27);
      {
        ATerm z_26 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_27 = NULL,i_27 = NULL,s_1 = NULL;
            i_27 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm d_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_27);
            h_27 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_27);
            s_1 = t;
            t = SSLsetAnnotations(s_1, h_27);
            LocalPopChoice(c_27);
            t = xtc_transform_file_2_0(z_2, e_3, t);
          }
        else
          {
            t = z_26;
            t = xtc_transform_term_2_0(f_3, g_3, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(x_2, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_27;
  t = if_verbose2_1_0(i_3, t);
  return(t);
}
ATerm debug_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL;
  k_27 = t;
  t = b_79(t);
  l_27 = t;
  t = term_a_20;
  n_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_27), l_27);
  o_27 = t;
  t = SSL_printnl(n_27, o_27);
  t = k_27;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  {
    ATerm e_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_27 = NULL,v_27 = NULL,w_27 = NULL;
        t = term_p_9;
        v_27 = t;
        t = term_b_10;
        w_27 = t;
        t = term_f_10;
        t = m_8(v_27, w_27, t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_27, term_o_11);
        t = geq_0_0(t);
        t = q_27;
        t = u_98(t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = e_27;
        t = q_27;
      }
  }
  return(t);
}
static ATerm d_8 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,j_2 = NULL;
  a_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_27), term_p_27), a_28);
  l_28 = t;
  t = SSL_concat_strings(l_28);
  i_28 = t;
  t = (ATerm) ATinsert(ATempty, term_i_10);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATinsert(ATempty, term_i_10));
  t = d_8(i_28, h_28, t);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  p_28 = t;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      ATerm u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_28);
  m_28 = t;
  t = SSL_modification_time(z_27);
  n_28 = t;
  t = SSL_modification_time(a_28);
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, o_28);
  j_2 = t;
  t = SSLsetAnnotations(j_2, m_28);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  e_28 = t;
  t = SSL_explode_term(e_28);
  if(match_cons(t, sym__2))
    {
      ATerm x_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_27 = ATgetArgument(t, 1);
        if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
          {
            d_28 = ATgetFirst((ATermList) y_27);
            {
              ATerm b_28 = (ATerm) ATgetNext((ATermList) y_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_28;
  t = if_verbose2_1_0(m_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm p_84 (ATerm), ATerm t)
{
  static ATerm i_29 (ATerm t)
  {
    ATerm c_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_84(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = c_28;
        {
          ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,d_10 = NULL,j_10 = NULL,l_2 = NULL;
          f_29 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_29 = ATgetFirst((ATermList) t);
              h_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_29);
          d_10 = t;
          t = h_29;
          t = i_29(t);
          j_10 = t;
          t = (ATerm) ATinsert(CheckATermList(j_10), g_29);
          l_2 = t;
          t = SSLsetAnnotations(l_2, d_10);
        }
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm g_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 = NULL,v_10 = NULL,y_10 = NULL;
      v_10 = t;
      t = term_k_28;
      y_10 = t;
      t = SSL_explode_string(y_10);
      r_10 = t;
      t = SSL_explode_string(v_10);
      {
        static ATerm w_3 (ATerm t)
        {
          if((r_10 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(w_3, t);
      }
      t = v_10;
      LocalPopChoice(j_28);
    }
  else
    {
      t = g_28;
      {
        ATerm q_28 = t;
        int r_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL;
            g_11 = t;
            t = term_s_28;
            h_11 = t;
            t = SSL_explode_string(h_11);
            b_11 = t;
            t = SSL_explode_string(g_11);
            {
              static ATerm x_3 (ATerm t)
              {
                if((b_11 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(x_3, t);
            }
            t = g_11;
            LocalPopChoice(r_28);
          }
        else
          {
            t = q_28;
            {
              ATerm p_29 = NULL,q_29 = NULL,t_29 = NULL,v_29 = NULL;
              p_29 = t;
              t = term_a_20;
              t_29 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, p_29), term_t_28);
              v_29 = t;
              t = SSL_printnl(t_29, v_29);
              t = term_g_10;
              q_29 = t;
              t = SSL_exit(q_29);
              t = (ATerm) ATinsert(ATinsert(ATempty, p_29), term_t_28);
            }
          }
      }
      {
        ATerm u_28 = t;
        int v_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(v_28);
          }
        else
          {
            t = u_28;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_29 = NULL,x_29 = NULL;
      t = term_p_9;
      w_29 = t;
      t = term_y_28;
      x_29 = t;
      t = term_z_28;
      t = m_8(w_29, x_29, t);
      LocalPopChoice(x_28);
      {
        ATerm y_29 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        y_29 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, y_29), term_y_28);
      }
    }
  else
    {
      t = w_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_30 = NULL,d_30 = NULL;
      t = term_p_9;
      a_30 = t;
      t = term_c_29;
      d_30 = t;
      t = term_d_29;
      t = m_8(a_30, d_30, t);
      LocalPopChoice(b_29);
      t = (ATerm) ATinsert(ATempty, term_c_29);
    }
  else
    {
      t = a_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm e_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30 = NULL,f_30 = NULL;
      t = term_p_9;
      e_30 = t;
      t = term_k_29;
      f_30 = t;
      t = term_l_29;
      t = m_8(e_30, f_30, t);
      LocalPopChoice(j_29);
      t = (ATerm) ATinsert(ATempty, term_k_29);
    }
  else
    {
      t = e_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm g_30 = NULL,i_30 = NULL,j_30 = NULL,k_30 = NULL;
  t = term_d_26;
  t = pass__patch_0_0(t);
  g_30 = t;
  t = term_d_26;
  t = pass__prune_0_0(t);
  i_30 = t;
  t = term_d_26;
  t = pass__new_0_0(t);
  j_30 = t;
  t = term_d_26;
  t = pass__old_0_0(t);
  k_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_30), j_30), i_30), g_30);
  t = concat_0_0(t);
  return(t);
}
static ATerm g_8 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm q_30 = NULL,t_30 = NULL;
  t_30 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = m_8(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_29 = ATgetFirst((ATermList) t);
            q_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_29);
        {
          ATerm v_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, q_30);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_8(r_45, q_30, v_30, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, q_30);
        }
      }
    else
      {
        t = m_29;
        {
          ATerm x_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_8(r_45, x_30, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = t_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,h_31 = NULL,i_31 = NULL;
  d_31 = t;
  t = p_94(t);
  c_31 = t;
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_31 = NULL;
        t = term_p_25;
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_31, term_p_25);
        t = m_8(c_31, j_31, t);
        {
          ATerm u_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_29;
            }
        }
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_31 = ATgetFirst((ATermList) t);
      a_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_31, term_p_25, a_31);
  t = lookup_table_0_1(c_31, t);
  i_31 = t;
  t = term_p_25;
  e_31 = t;
  t = i_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(e_31, a_31, h_31, t);
  t = b_31;
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm l_31 = NULL;
      l_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_31, l_31);
      t = g_8(c_31, l_31, t);
      return(t);
    }
    t = map_1_0(y_3, t);
  }
  t = d_31;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_98 (ATerm), ATerm i_98 (ATerm), ATerm t)
{
  ATerm z_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_98(t);
      t = i_98(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = z_29;
      t = i_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_94 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,t_31 = NULL,u_31 = NULL,w_31 = NULL,y_31 = NULL,b_32 = NULL;
  q_31 = t;
  t = o_94(t);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_31, term_p_25);
  {
    ATerm c_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_30 = ATgetArgument(t, 0);
            ATerm m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_25;
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_31, term_p_25);
        t = m_8(p_31, j_32, t);
        LocalPopChoice(h_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATempty;
      }
  }
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_31, term_p_25, (ATerm) ATinsert(CheckATermList(t_31), (ATerm) ATempty));
  t = lookup_table_0_1(p_31, t);
  b_32 = t;
  t = term_p_25;
  u_31 = t;
  t = (ATerm) ATinsert(CheckATermList(t_31), (ATerm) ATempty);
  w_31 = t;
  t = b_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(u_31, w_31, y_31, t);
  t = q_31;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_32);
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = w_32;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_101 (ATerm), ATerm t)
{
  ATerm n_32 = NULL;
  static ATerm b_4 (ATerm t)
  {
    ATerm o_32 = NULL;
    o_32 = t;
    {
      ATerm p_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_32 = NULL,t_32 = NULL;
          t = term_y_25;
          s_32 = t;
          t = term_p_25;
          t_32 = t;
          t = term_s_30;
          t = m_8(s_32, t_32, t);
          LocalPopChoice(r_30);
        }
      else
        {
          t = p_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((n_32 != NULL) && (n_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          n_32 = ATgetFirst((ATermList) t);
        {
          ATerm u_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = n_32;
    t = map_1_0(d_4, t);
    t = o_32;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(a_4, t);
  t = restore_always_2_0(i_101, b_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm w_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
      t = term_p_9;
      q_33 = t;
      t = term_h_26;
      r_33 = t;
      t = term_z_30;
      t = m_8(q_33, r_33, t);
      p_33 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_33);
      LocalPopChoice(y_30);
    }
  else
    {
      t = w_30;
      t = term_x_9;
    }
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        ATerm k_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_34 = NULL,f_34 = NULL;
            f_34 = t;
            if(match_cons(t, sym_FILE_1))
              {
                e_34 = ATgetArgument(t, 0);
                {
                  ATerm v_11 = NULL,n_2 = NULL;
                  t = SSLgetAnnotations(f_34);
                  v_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, e_34);
                  n_2 = t;
                  t = SSLsetAnnotations(n_2, v_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_34;
              }
            LocalPopChoice(m_31);
            t = xtc_transform_file_2_0(i_4, j_4, t);
          }
        else
          {
            t = k_31;
            t = xtc_transform_term_2_0(k_4, l_4, t);
          }
        z_34 = t;
        {
          ATerm n_31 = t;
          int o_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_34;
              {
                ATerm r_31 = t;
                int s_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_12 = NULL,t_12 = NULL;
                    t = term_p_9;
                    s_12 = t;
                    t = term_k_29;
                    t_12 = t;
                    t = term_l_29;
                    t = m_8(s_12, t_12, t);
                    LocalPopChoice(s_31);
                  }
                else
                  {
                    t = r_31;
                    {
                      ATerm u_12 = NULL,v_12 = NULL;
                      t = term_p_9;
                      u_12 = t;
                      t = term_c_29;
                      v_12 = t;
                      t = term_d_29;
                      t = m_8(u_12, v_12, t);
                    }
                  }
              }
              t = z_34;
              {
                ATerm v_31 = t;
                int x_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_12 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm h_13 = NULL,v_2 = NULL;
                          t = SSLgetAnnotations(z_34);
                          h_13 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, z_12);
                          v_2 = t;
                          t = SSLsetAnnotations(v_2, h_13);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = z_34;
                      }
                    LocalPopChoice(x_31);
                    t = xtc_transform_file_2_0(m_4, pass_verbose_0_0, t);
                  }
                else
                  {
                    t = v_31;
                    t = xtc_transform_term_2_0(o_4, pass_verbose_0_0, t);
                  }
              }
              LocalPopChoice(o_31);
            }
          else
            {
              t = n_31;
              t = z_34;
            }
        }
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm m_35 = NULL;
          t = term_g_10;
          m_35 = t;
          t = SSL_exit(m_35);
        }
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_d_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_z_31;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_d_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(f_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_35 = NULL,v_35 = NULL,w_35 = NULL,z_35 = NULL,a_36 = NULL;
  s_35 = t;
  t = term_d_26;
  t = whoami_0_0(t);
  v_35 = t;
  t = term_a_20;
  z_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_32), v_35), term_c_32);
  a_36 = t;
  t = SSL_printnl(z_35, a_36);
  t = term_g_10;
  w_35 = t;
  t = SSL_exit(w_35);
  t = s_35;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  if(match_string(t, "-k"))
    {
      t = d_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_36;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL,i_36 = NULL;
  e_36 = t;
  t = SSL_string_to_int(e_36);
  h_36 = t;
  t = term_e_32;
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_32, h_36);
  t = p_8(i_36, h_36, t);
  t = e_36;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, r_4, t_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  if(match_string(t, "-S"))
    {
      t = k_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_36;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL;
  t = term_b_10;
  l_36 = t;
  t = term_g_32;
  m_36 = t;
  t = term_h_32;
  t = p_8(l_36, m_36, t);
  t = term_i_32;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  t = SSL_string_to_int(n_36);
  o_36 = t;
  t = term_b_10;
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, o_36);
  t = p_8(p_36, o_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_36);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_l_32;
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
  ATerm q_36 = NULL,r_36 = NULL;
  t = term_m_32;
  q_36 = t;
  t = term_d_26;
  r_36 = t;
  t = term_p_32;
  t = p_8(q_36, r_36, t);
  t = term_u_32;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_4, v_4, x_4, t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_4, z_4, e_5, t);
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            t = Option_3_0(g_5, h_5, i_5, t);
          }
      }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  if(match_string(t, "-o"))
    {
      t = v_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_36;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  t = term_s_9;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, w_36);
  t = p_8(x_36, w_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_36);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "-i"))
    {
      t = z_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_36;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  c_37 = t;
  t = term_h_26;
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_26, c_37);
  t = p_8(d_37, c_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_37);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, u_5, v_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,k_37 = NULL,m_37 = NULL,n_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
      t = term_d_26;
      t = r_0(t);
      o_37 = t;
      t = term_d_33;
      p_37 = t;
      t = term_e_33;
      q_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, o_37);
      t = n_8(p_37, q_37, o_37, t);
      _fail(t);
    }
  else
    {
      ATerm u_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_37;
      t = p_0(t);
      t = m_37;
      t = q_0(t);
      u_37 = t;
      t = (ATerm) ATinsert(CheckATermList(n_37), u_37);
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
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  t = term_k_29;
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, v_37);
  t = p_8(w_37, v_37, t);
  t = v_37;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm x_37 = NULL,z_37 = NULL;
  x_37 = t;
  t = term_c_29;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_29, x_37);
  t = p_8(z_37, x_37, t);
  t = x_37;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  a_38 = t;
  t = term_l_26;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_26, a_38);
  t = p_8(b_38, a_38, t);
  t = a_38;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_h_33;
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
  ATerm c_38 = NULL,d_38 = NULL;
  c_38 = t;
  t = term_y_28;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, c_38);
  t = p_8(d_38, c_38, t);
  t = c_38;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_i_33;
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
  ATerm e_38 = NULL,h_38 = NULL;
  t = term_j_33;
  e_38 = t;
  t = term_d_26;
  h_38 = t;
  t = term_k_33;
  t = p_8(e_38, h_38, t);
  t = term_l_33;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_5, x_5, y_5, t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      {
        ATerm s_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(b_6, c_6, e_6, t);
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            {
              ATerm u_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(f_6, g_6, h_6, t);
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = u_33;
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
                          int d_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(d_34);
                            }
                          else
                            {
                              t = a_34;
                              {
                                ATerm g_34 = t;
                                int h_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(h_34);
                                  }
                                else
                                  {
                                    t = g_34;
                                    {
                                      ATerm i_34 = t;
                                      int j_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(l_6, m_6, n_6, t);
                                          LocalPopChoice(j_34);
                                        }
                                      else
                                        {
                                          t = i_34;
                                          {
                                            ATerm k_34 = t;
                                            int l_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(l_34);
                                              }
                                            else
                                              {
                                                t = k_34;
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
  ATerm i_38 = NULL,p_38 = NULL,s_38 = NULL,t_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_26;
  t = whoami_0_0(t);
  i_38 = t;
  t = term_a_20;
  s_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_34), i_38);
  t_38 = t;
  t = SSL_printnl(s_38, t_38);
  t = term_g_10;
  p_38 = t;
  t = SSL_exit(p_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  t = term_p_9;
  u_38 = t;
  t = term_n_34;
  v_38 = t;
  t = term_o_34;
  t = m_8(u_38, v_38, t);
  return(t);
}
static ATerm h_8 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,c_39 = NULL;
  x_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_38;
      t = i_91(t);
    }
  else
    {
      ATerm f_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_38 = ATgetFirst((ATermList) t);
          c_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_39;
      t = foldr_2_0(i_91, j_91, t);
      f_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_38, f_39);
      t = j_91(t);
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
  t = term_g_32;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm u_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_8(u_13, w_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_39 = NULL,n_13 = NULL,o_13 = NULL;
  t = times_0_0(t);
  o_13 = t;
  t = SSL_explode_term(o_13);
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13;
  t = foldr_2_0(o_6, s_6, t);
  l_39 = t;
  t = SSL_TicksToSeconds(l_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_39 = NULL,a_40 = NULL,b_40 = NULL;
  x_39 = t;
  if(match_cons(t, sym__2))
    {
      a_40 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_40;
        if((a_40 != t))
          {
            _fail(t);
          }
        t = x_39;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
        {
          ATerm u_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_40, b_40);
              LocalPopChoice(v_34);
            }
          else
            {
              t = u_34;
              t = SSL_gtr(a_40, b_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_40, b_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm f_40 = NULL;
  f_40 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL,i_40 = NULL,l_40 = NULL;
        t = term_p_9;
        i_40 = t;
        t = term_b_10;
        l_40 = t;
        t = term_f_10;
        t = m_8(i_40, l_40, t);
        h_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_40, term_g_10);
        t = geq_0_0(t);
        t = f_40;
        t = t_98(t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = f_40;
      }
  }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,u_40 = NULL,v_40 = NULL;
  t = run_time_0_0(t);
  p_40 = t;
  t = term_d_26;
  t = whoami_0_0(t);
  q_40 = t;
  t = term_a_20;
  u_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_34), p_40), term_q_10), q_40);
  v_40 = t;
  t = SSL_printnl(u_40, v_40);
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_34), p_40), term_q_10), q_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_32;
  w_40 = t;
  t = SSL_exit(w_40);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm l_41 = NULL,n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_41 = ATgetArgument(t, 0);
          {
            ATerm w_14 = NULL,c_4 = NULL;
            t = SSLgetAnnotations(n_41);
            w_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_41);
            c_4 = t;
            t = SSLsetAnnotations(c_4, w_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_103 (ATerm), ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_41 = NULL,e_41 = NULL;
      t = term_p_9;
      b_41 = t;
      t = term_c_35;
      e_41 = t;
      t = term_d_35;
      t = m_8(b_41, e_41, t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = fetch_1_0(x_6, t);
    }
  t = d_103(t);
  return(t);
}
static ATerm q_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm p_41 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_41);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm m_42 = NULL;
  t = table_hashtable_0_0(t);
  m_42 = t;
  {
    ATerm e_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL;
        t = m_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_8(x_46, f_15, t);
        LocalPopChoice(f_35);
      }
    else
      {
        t = e_35;
        {
          ATerm w_15 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = m_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_8(x_46, w_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm r_42 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_42);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL;
  s_42 = t;
  t = term_g_35;
  z_42 = t;
  t = term_i_35;
  a_43 = t;
  t = s_42;
  t = new_hashtable_0_2(z_42, a_43, t);
  t_42 = t;
  t = s_42;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(s_42, t_42, w_42, t);
  t = s_42;
  return(t);
}
static ATerm j_8 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm c_43 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_43);
  return(t);
}
static ATerm k_8 (ATerm n_50, ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_hashtable_destroy(n_50);
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
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  h_43 = t;
  t = table_hashtable_0_0(t);
  i_43 = t;
  t = lookup_table_0_1(h_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_8(k_43, t);
  t = i_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_8(h_43, j_43, t);
  t = h_43;
  return(t);
}
ATerm long_description_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_36), term_y_35), term_x_35), term_u_35), term_t_35), term_r_35), term_q_35), term_p_35), term_o_35), term_n_35), term_l_35), term_k_35);
  return(t);
}
ATerm map_1_0 (ATerm u_83 (ATerm), ATerm t)
{
  static ATerm z_43 (ATerm t)
  {
    ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
    w_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_43;
      }
    else
      {
        ATerm i_16 = NULL,m_16 = NULL,n_16 = NULL,g_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_43 = ATgetFirst((ATermList) t);
            y_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_43);
        i_16 = t;
        t = x_43;
        t = u_83(t);
        m_16 = t;
        t = y_43;
        t = z_43(t);
        n_16 = t;
        t = (ATerm) ATinsert(CheckATermList(n_16), m_16);
        g_4 = t;
        t = SSLsetAnnotations(g_4, i_16);
      }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_44 = ATgetFirst((ATermList) t);
      d_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_44 = NULL,i_44 = NULL;
        static ATerm z_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_44)), not_null(i_44));
          return(t);
        }
        t = d_44;
        t = m_0(t);
        if(((h_44 != NULL) && (h_44 != t)))
          _fail(t);
        else
          h_44 = t;
        t = c_44;
        t = l_0(t);
        if(((i_44 != NULL) && (i_44 != t)))
          _fail(t);
        else
          i_44 = t;
        t = d_44;
        t = reverse_acc_2_0(l_0, z_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_26;
      t = m_0(t);
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
  ATerm x_44 = NULL;
  x_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_44), term_c_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_44 = NULL,q_44 = NULL;
      t = term_p_9;
      p_44 = t;
      t = term_n_34;
      q_44 = t;
      t = term_o_34;
      t = m_8(p_44, q_44, t);
      m_44 = t;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        static ATerm c_7 (ATerm t)
        {
          ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,n_4 = NULL;
          t_44 = t;
          if(match_cons(t, sym_Program_1))
            {
              s_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_44);
          r_44 = t;
          t = s_44;
          if(((m_44 != NULL) && (m_44 != t)))
            _fail(t);
          else
            m_44 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, s_44);
          n_4 = t;
          t = SSLsetAnnotations(n_4, r_44);
          return(t);
        }
        t = fetch_1_0(c_7, t);
      }
    }
  {
    ATerm j_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_36), not_null(m_44)), term_t_36);
        t = echo_0_0(t);
        LocalPopChoice(s_36);
      }
    else
      {
        t = j_36;
      }
  }
  t = term_y_36;
  t = echo_0_0(t);
  t = term_d_33;
  n_44 = t;
  t = term_e_33;
  o_44 = t;
  t = term_a_37;
  t = m_8(n_44, o_44, t);
  t = reverse_acc_2_0(_id, e_7, t);
  t = map_1_0(f_7, t);
  {
    ATerm b_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_44 = NULL;
        static ATerm g_7 (ATerm t)
        {
          t = not_null(m_44);
          return(t);
        }
        t = long_description_1_0(g_7, t);
        y_44 = t;
        t = (ATerm) ATinsert(CheckATermList(y_44), term_f_37);
        t = echo_0_0(t);
        LocalPopChoice(e_37);
      }
    else
      {
        t = b_37;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  static ATerm n_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
    f_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_46 = ATgetFirst((ATermList) t);
        h_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_17 = NULL,h_17 = NULL,q_4 = NULL;
          t = SSLgetAnnotations(f_46);
          e_17 = t;
          t = g_46;
          t = e_84(t);
          h_17 = t;
          t = (ATerm) ATinsert(CheckATermList(h_46), h_17);
          q_4 = t;
          t = SSLsetAnnotations(q_4, e_17);
          LocalPopChoice(i_37);
        }
      else
        {
          t = g_37;
          {
            ATerm e_18 = NULL,h_18 = NULL,s_4 = NULL;
            t = SSLgetAnnotations(f_46);
            e_18 = t;
            t = h_46;
            t = n_46(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), g_46);
            s_4 = t;
            t = SSLsetAnnotations(s_4, e_18);
          }
        }
    }
    return(t);
  }
  t = n_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,b_47 = NULL;
  v_46 = t;
  {
    ATerm j_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_37 = ATgetFirst((ATermList) t);
                ATerm s_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_46;
          }
        LocalPopChoice(l_37);
      }
    else
      {
        t = j_37;
        t = (ATerm) ATinsert(ATempty, v_46);
      }
  }
  w_46 = t;
  t = term_u_9;
  b_47 = t;
  t = SSL_printnl(b_47, w_46);
  t = v_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  t = term_p_9;
  h_47 = t;
  t = term_n_34;
  i_47 = t;
  t = term_o_34;
  t = m_8(h_47, i_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_8 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
static ATerm m_8 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm j_47 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_8(f_47, j_47, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL;
  t = term_t_37;
  l_47 = t;
  t = term_d_26;
  m_47 = t;
  t = term_y_37;
  t = p_8(l_47, m_47, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_f_38;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
  t = term_t_37;
  p_47 = t;
  t = term_d_26;
  q_47 = t;
  t = term_y_37;
  t = p_8(p_47, q_47, t);
  t = term_g_38;
  n_47 = t;
  t = term_d_26;
  o_47 = t;
  t = term_j_38;
  t = p_8(n_47, o_47, t);
  t = term_k_38;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, q_7, s_7, t);
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      t = Option_3_0(e_8, o_8, u_8, t);
    }
  return(t);
}
static ATerm p_8 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm r_47 = NULL,s_47 = NULL;
  t = term_p_9;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, q_50, r_50);
  t = lookup_table_0_1(r_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(q_50, r_50, s_47, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, q_50, r_50);
  return(t);
}
static ATerm n_8 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm o_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_38 = ATgetArgument(t, 0);
            ATerm w_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = m_8(l_45, m_45, t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = o_38;
        t = (ATerm) ATempty;
      }
  }
  w_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(w_47), k_45));
  t = lookup_table_0_1(l_45, t);
  z_47 = t;
  t = (ATerm) ATinsert(CheckATermList(w_47), k_45);
  x_47 = t;
  t = z_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(m_45, x_47, y_47, t);
  t = v_47;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm f_48 = NULL,g_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
      t = term_d_26;
      t = h_0(t);
      h_48 = t;
      t = term_d_33;
      i_48 = t;
      t = term_e_33;
      j_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_33, term_e_33, h_48);
      t = n_8(i_48, j_48, h_48, t);
      _fail(t);
    }
  else
    {
      ATerm m_48 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_48 = ATgetFirst((ATermList) t);
          g_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_48;
      t = d_0(t);
      t = term_d_26;
      t = g_0(t);
      m_48 = t;
      t = (ATerm) ATinsert(CheckATermList(g_48), m_48);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,w_4 = NULL;
  s_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_48 = ATgetFirst((ATermList) t);
      p_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_48);
  n_48 = t;
  t = o_48;
  t = l_70(t);
  q_48 = t;
  t = p_48;
  t = m_70(t);
  r_48 = t;
  t = (ATerm) ATinsert(CheckATermList(r_48), q_48);
  w_4 = t;
  t = SSLsetAnnotations(w_4, n_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL,f_5 = NULL;
  x_48 = t;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_39;
        t = b_105(t);
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
      }
  }
  t = x_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_48 = ATgetFirst((ATermList) t);
      a_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_48);
  y_48 = t;
  t = term_n_34;
  d_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_34, z_48);
  t = p_8(d_49, z_48, t);
  t = a_49;
  {
    static ATerm n_49 (ATerm t)
    {
      ATerm d_39 = t;
      int e_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_49 = NULL;
              g_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_49;
              LocalPopChoice(h_39);
            }
          else
            {
              t = g_39;
              t = b_105(t);
              t = Cons_2_0(_id, n_49, t);
            }
          LocalPopChoice(e_39);
        }
      else
        {
          t = d_39;
          {
            ATerm j_49 = NULL,k_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_49 = ATgetFirst((ATermList) t);
                k_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_49), (ATerm) ATmakeAppl(sym_Undefined_1, j_49));
          }
        }
      return(t);
    }
    t = n_49(t);
  }
  c_49 = t;
  t = (ATerm) ATinsert(CheckATermList(c_49), (ATerm) ATmakeAppl(sym_Program_1, z_48));
  f_5 = t;
  t = SSLsetAnnotations(f_5, y_48);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  if(match_string(t, "--help"))
    {
      t = a_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_50;
        }
    }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  t = term_c_35;
  b_50 = t;
  t = term_d_26;
  c_50 = t;
  t = term_i_39;
  t = p_8(b_50, c_50, t);
  t = term_j_39;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_k_39;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL;
  u_49 = t;
  t = term_d_33;
  v_49 = t;
  t = term_m_39;
  t = lookup_table_0_1(v_49, t);
  z_49 = t;
  t = term_e_33;
  w_49 = t;
  t = (ATerm) ATempty;
  x_49 = t;
  t = z_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(w_49, x_49, y_49, t);
  t = u_49;
  {
    static ATerm v_8 (ATerm t)
    {
      ATerm n_39 = t;
      int o_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_105(t);
          LocalPopChoice(o_39);
        }
      else
        {
          t = n_39;
          {
            ATerm p_39 = t;
            int q_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_8, y_8, z_8, t);
                LocalPopChoice(q_39);
              }
            else
              {
                t = p_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_8, t);
  }
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_51 = NULL;
        a_51 = t;
        {
          ATerm t_39 = t;
          int u_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_19 = NULL;
              t = a_51;
              {
                ATerm v_39 = t;
                int w_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_19 = NULL,c_19 = NULL;
                    t = term_p_9;
                    b_19 = t;
                    t = term_c_35;
                    c_19 = t;
                    t = term_d_35;
                    t = m_8(b_19, c_19, t);
                    LocalPopChoice(w_39);
                  }
                else
                  {
                    t = v_39;
                    t = fetch_1_0(a_9, t);
                  }
              }
              t = a_51;
              t = default_system_usage_0_0(t);
              t = term_g_32;
              a_19 = t;
              t = SSL_exit(a_19);
              LocalPopChoice(u_39);
            }
          else
            {
              t = t_39;
              {
                ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
                t = term_p_9;
                o_19 = t;
                t = term_t_37;
                p_19 = t;
                t = term_y_39;
                t = m_8(o_19, p_19, t);
                t = a_51;
                t = default_system_about_0_0(t);
                t = term_g_32;
                n_19 = t;
                t = SSL_exit(n_19);
              }
            }
        }
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        {
          ATerm z_39 = t;
          int c_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
              static ATerm c_9 (ATerm t)
              {
                ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,r_5 = NULL;
                h_51 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_51 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_51);
                f_51 = t;
                t = g_51;
                if(((s_49 != NULL) && (s_49 != t)))
                  _fail(t);
                else
                  s_49 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_51);
                r_5 = t;
                t = SSLsetAnnotations(r_5, f_51);
                return(t);
              }
              t = fetch_1_0(c_9, t);
              t = term_a_20;
              d_51 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_49)), term_d_40);
              e_51 = t;
              t = SSL_printnl(d_51, e_51);
              t = (ATerm) ATmakeAppl(sym__2, term_a_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_49)), term_d_40));
              t = default_system_usage_0_0(t);
              t = term_g_10;
              c_51 = t;
              t = SSL_exit(c_51);
              LocalPopChoice(c_40);
            }
          else
            {
              t = z_39;
            }
        }
      }
  }
  t_49 = t;
  t = term_d_33;
  t = table_destroy_0_0(t);
  t = t_49;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
  t = parse_options_1_0(f_103, t);
  m_51 = t;
  t = term_e_40;
  t = table_create_0_0(t);
  t = term_e_40;
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_40, term_g_40, m_51);
  t = lookup_table_0_1(n_51, t);
  r_51 = t;
  t = term_g_40;
  p_51 = t;
  t = r_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(p_51, m_51, q_51, t);
  t = m_51;
  t = h_103(t);
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_103, t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
        {
          ATerm m_40 = t;
          int n_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_40);
            }
          else
            {
              t = m_40;
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
