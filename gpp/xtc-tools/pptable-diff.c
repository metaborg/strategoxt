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
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_t_39;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_m_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_l_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_d_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_p_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_g_31;
ATerm term_w_30;
ATerm term_r_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_o_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_o_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_w_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_w_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_k_22;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_t_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_l_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_w_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_b_12, term_y_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_e_13, term_h_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_n_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_t_13, term_u_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_d_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_p_14, term_q_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_h_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_l_16, term_m_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_t_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_w_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_q_17, term_t_17);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_o_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_v_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_l_19, term_m_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_y_19);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_c_24);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_i_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_o_23);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_z_26);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_e_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_i_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_p_29);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__2, term_o_26, term_d_26);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_u_26);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_c_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_32);
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_t_26);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_t_26);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_v_34);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_t_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_v_32, term_w_32);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_s_37, term_t_26);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_t_26);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_t_26);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, (ATerm) ATempty);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym__2, term_k_11, term_s_37);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm i_8 (ATerm e_20, ATerm f_232, ATerm t);
ATerm split_fetch_1_0 (ATerm t_89 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm y_98 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm l_8 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm q_7 (ATerm m_34, ATerm n_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm r_7 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm s_7 (ATerm p_84 (ATerm), ATerm s_200, ATerm k_18, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t);
static ATerm t_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm s_89 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm v_7 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm k_104 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm x_7 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm y_7 (ATerm r_93 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm z_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm a_8 (ATerm n_104 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm u_17 (ATerm i_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_8 (ATerm g_18, ATerm t);
static ATerm c_8 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_21 (ATerm q_18, ATerm t);
static ATerm c_21 (ATerm u_18, ATerm x_18, ATerm y_18, ATerm t);
static ATerm g_21 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm t);
static ATerm d_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_97 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm n_26 (ATerm v_25, ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm p_107 (ATerm), ATerm t);
static ATerm g_27 (ATerm w_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_8 (ATerm e_100 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm j_8 (ATerm y_32, ATerm z_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm pass__old_0_0 (ATerm t);
ATerm debug_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm h_104 (ATerm), ATerm t);
static ATerm k_8 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm b_90 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm pass__new_0_0 (ATerm t);
ATerm pass__prune_0_0 (ATerm t);
ATerm pass__patch_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
static ATerm m_8 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm b_100 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_100 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm y_106 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm pptable_diff_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm pptable_diff_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_8 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_104 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm need_help_1_0 (ATerm w_108 (ATerm), ATerm t);
static ATerm w_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_8 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm q_8 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t);
ATerm map_1_0 (ATerm g_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_89 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_8 (ATerm e_53, ATerm f_53, ATerm t);
static ATerm s_8 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm g_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
static ATerm v_8 (ATerm p_53, ATerm q_53, ATerm t);
static ATerm t_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_110 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm parse_options_1_0 (ATerm t_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      o_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_2 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = n_1;
        t = r_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, o_1, e_0);
        t = l_8(o_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
        LocalPopChoice(p_9);
      }
    else
      {
        t = p_2;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_1 = NULL;
              t = n_1;
              t = r_0(t);
              a_1 = t;
              {
                ATerm u_9 = t;
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
                            if((o_1 != t))
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
                    t = u_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, o_1, a_1);
              t = l_8(o_1, a_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = n_1;
              t = r_0(t);
              if((o_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_2 = ATgetFirst((ATermList) t);
      j_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_2;
    }
  else
    {
      t = j_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm i_8 (ATerm e_20, ATerm f_232, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((e_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = f_232;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm s_2 = NULL,t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,w_0 = NULL,v_0 = NULL;
    c_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_2 = ATgetFirst((ATermList) t);
        y_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_3);
    w_2 = t;
    t = x_2;
    t = t_89(t);
    a_3 = t;
    t = (ATerm) ATinsert(CheckATermList(y_2), a_3);
    v_0 = t;
    t = SSLsetAnnotations(v_0, w_2);
    b_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_2 = ATgetFirst((ATermList) t);
        u_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_3);
    s_2 = t;
    t = u_2;
    if(((q_2 != NULL) && (q_2 != t)))
      _fail(t);
    else
      q_2 = t;
    t = (ATerm) ATinsert(CheckATermList(u_2), t_2);
    w_0 = t;
    t = SSLsetAnnotations(w_0, s_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  r_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_2, not_null(q_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm s_3 = NULL,v_3 = NULL;
  ATerm w_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(y_98, t);
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm n_3 = NULL;
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm a_10 = ATgetFirst((ATermList) t);
              ATerm c_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_3;
          t = list_tokenize_1_0(y_98, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_10 = ATgetFirst((ATermList) t);
          ATerm e_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, s_3);
        }
      else
        {
          ATerm i_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm h_10 = ATgetFirst((ATermList) t);
              ATerm k_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_3;
          t = list_tokenize_1_0(y_98, t);
          i_4 = t;
          t = (ATerm) ATinsert(CheckATermList(i_4), s_3);
        }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  t = SSL_implode_string(y_4);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,p_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,w_4 = NULL,b_1 = NULL;
  w_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_4);
  p_4 = t;
  t = SSL_explode_string(t_4);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, u_4);
  b_1 = t;
  t = SSLsetAnnotations(b_1, p_4);
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm x_4 = NULL;
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_4, k_4);
      t = i_8(x_4, k_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(h_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm r_5 = NULL;
  r_5 = t;
  {
    ATerm m_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL;
        t = SSL_filemode(r_5);
        if(match_cons(t, sym__2))
          {
            l_1 = ATgetArgument(t, 0);
            {
              ATerm s_10 = ATgetArgument(t, 1);
              if(((ATgetType(s_10) != AT_INT) || (ATgetInt((ATermInt) s_10) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_1;
        LocalPopChoice(r_10);
      }
    else
      {
        t = m_10;
        {
          ATerm w_1 = NULL,x_1 = NULL;
          t = term_t_10;
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_10, r_5);
          t = j_8(x_1, r_5, t);
          w_1 = t;
          t = SSL_perror(w_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm l_8 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  v_5 = t;
  {
    ATerm v_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL,a_6 = NULL;
        t = (ATerm) ATinsert(ATempty, term_b_11);
        a_6 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_b_11));
        t = k_8(v_14, a_6, t);
        t = filemode_0_0(t);
        x_5 = t;
        t = SSL_S_ISDIR(x_5);
        t = v_5;
        LocalPopChoice(a_11);
        {
          ATerm f_6 = NULL,g_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_c_11), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          f_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_6), term_f_11), v_14);
          g_6 = t;
          t = SSL_concat_strings(g_6);
        }
      }
    else
      {
        t = v_10;
        t = v_14;
      }
  }
  u_5 = t;
  t = SSL_copy(w_14, u_5);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_6 = NULL,u_6 = NULL;
      t = term_k_11;
      t_6 = t;
      t = term_l_11;
      u_6 = t;
      t = term_m_11;
      t = s_8(t_6, u_6, t);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = term_o_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_2 = NULL,b_2 = NULL;
      t = term_l_11;
      {
        ATerm p_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,d_2 = NULL;
            t = term_k_11;
            c_2 = t;
            t = term_l_11;
            d_2 = t;
            t = term_m_11;
            t = s_8(c_2, d_2, t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = p_11;
            t = term_o_11;
          }
      }
      a_2 = t;
      t = term_s_11;
      b_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_11, a_2);
      t = l_8(b_2, a_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_6;
      t = copy_to_1_0(i_0, t);
    }
  return(t);
}
static ATerm q_7 (ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_34, n_34);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = SSL_subtr(m_34, n_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL,g_7 = NULL;
  t = term_w_11;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL,i_7 = NULL;
        t = term_k_11;
        h_7 = t;
        t = term_w_11;
        i_7 = t;
        t = term_z_11;
        t = s_8(h_7, i_7, t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = term_b_12;
      }
  }
  b_7 = t;
  t = term_b_12;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_7, term_b_12);
  t = q_7(b_7, g_7, t);
  c_7 = t;
  t = SSL_int_to_string(c_7);
  y_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_6), term_w_11);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm h_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm r_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_11);
      r_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_8, (ATerm) ATinsert(ATempty, term_b_11));
      t = k_8(h_8, r_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm r_7 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm u_8 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_8);
  return(t);
}
static ATerm s_7 (ATerm p_84 (ATerm), ATerm s_200, ATerm k_18, ATerm t)
{
  ATerm y_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_200, term_c_12);
  t = d_8(t);
  y_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_8, k_18);
  t = p_84(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if(match_cons(d_12, sym_Stream_1))
        {
          f_9 = ATgetArgument(d_12, 0);
        }
      else
        _fail(t);
      g_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(f_9, g_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,c_9 = NULL;
  c_9 = t;
  t = xtc_new_file_0_0(t);
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_8, c_9);
  t = s_7(k_0, z_8, c_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_8);
  t = xtc_transform_file_2_0(l_106, m_106, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm t_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm u_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_10 = ATgetArgument(t, 0);
      {
        ATerm n_2 = NULL,v_2 = NULL;
        t = SSL_int_to_string(x_10);
        n_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), n_2), term_e_12);
        v_2 = t;
        t = SSL_concat_strings(v_2);
      }
    }
  else
    {
      ATerm l_3 = NULL,m_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_10 = ATgetArgument(t, 0);
          y_10 = ATgetArgument(t, 1);
          z_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_10);
      l_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_10), term_h_12), l_3), term_g_12), x_10);
      m_3 = t;
      t = SSL_concat_strings(m_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm g_11 = NULL;
  static ATerm n_0 (ATerm t);
  static ATerm n_0 (ATerm t)
  {
    t = s_89(t);
    if(((g_11 != NULL) && (g_11 != t)))
      _fail(t);
    else
      g_11 = t;
    return(t);
  }
  t = fetch_1_0(n_0, t);
  t = not_null(g_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_0 (ATerm t);
        static ATerm s_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_12 = ATgetArgument(t, 0);
              if((h_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm n_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_20), term_v_19), term_n_19), term_i_19), term_e_19), term_p_18), term_h_18), term_w_17), term_n_17), term_j_17), term_e_17), term_z_16), term_u_16), term_q_16), term_i_16), term_b_16), term_x_15), term_o_15), term_i_15), term_c_15), term_x_14), term_r_14), term_l_14), term_h_14), term_a_14), term_p_13), term_l_13), term_z_12);
        t = fetch_elem_1_0(s_0, t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, h_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_11 = NULL,a_12 = NULL;
  q_11 = t;
  {
    ATerm c_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            a_12 = ATgetArgument(t, 1);
            {
              ATerm h_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_20);
        {
          ATerm i_20 = t;
          int j_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_4 = NULL,g_4 = NULL,j_4 = NULL;
              t = a_12;
              {
                ATerm k_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_4 = t;
              t = term_l_20;
              g_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_m_20);
              j_4 = t;
              t = SSL_printnl(g_4, j_4);
              t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, b_4), term_m_20));
              LocalPopChoice(j_20);
            }
          else
            {
              t = i_20;
              t = q_11;
            }
        }
      }
    else
      {
        t = c_20;
        t = q_11;
      }
  }
  t = q_11;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  m_12 = t;
  t = fork_0_0(t);
  l_12 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_12;
        t = c_83(t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = SSL_waitpid(l_12);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            if(((ATgetType(p_20) != AT_INT) || (ATgetInt((ATermInt) p_20) != 0)))
              _fail(t);
            {
              ATerm q_20 = ATgetArgument(t, 1);
            }
            {
              ATerm r_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_12;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  static ATerm x_0 (ATerm t);
  static ATerm x_0 (ATerm t)
  {
    ATerm s_12 = NULL,u_12 = NULL;
    s_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_12), s_12);
    t = s_8(not_null(o_12), s_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_12, u_12);
    return(t);
  }
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  t = lookup_table_0_1(o_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(p_12, t);
  t = map_1_0(x_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,b_13 = NULL,d_13 = NULL;
        t = term_k_11;
        b_13 = t;
        t = term_w_11;
        d_13 = t;
        t = term_z_11;
        t = s_8(b_13, d_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_g_19);
        t = geq_0_0(t);
        t = w_12;
        t = k_104(t);
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm g_13 = NULL;
  g_13 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
        t = term_k_11;
        j_13 = t;
        t = term_w_11;
        k_13 = t;
        t = term_z_11;
        t = s_8(j_13, k_13, t);
        i_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_13, term_r_15);
        t = geq_0_0(t);
        t = g_13;
        t = j_104(t);
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = g_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm r_13 = NULL;
  r_13 = t;
  {
    ATerm w_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
        t = term_k_11;
        y_13 = t;
        t = term_w_11;
        z_13 = t;
        t = term_z_11;
        t = s_8(y_13, z_13, t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_13, term_t_13);
        t = geq_0_0(t);
        t = r_13;
        t = l_104(t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = w_20;
        t = r_13;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm u_93 (ATerm), ATerm v_93 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = v_93(t);
  {
    static ATerm y_0 (ATerm t);
    static ATerm y_0 (ATerm t)
    {
      ATerm e_14 = NULL;
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, e_14);
      t = u_93(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
  }
  t = o_25;
  return(t);
}
static ATerm y_7 (ATerm r_93 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm p_15 (ATerm t);
  static ATerm p_15 (ATerm t)
  {
    ATerm f_15 = NULL,g_15 = NULL,l_15 = NULL;
    f_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            l_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_21 = t;
          int e_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_15;
              {
                static ATerm z_0 (ATerm t);
                static ATerm z_0 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = x_7(r_93, z_0, g_15, l_15, t);
              }
              t = p_15(t);
              LocalPopChoice(e_21);
            }
          else
            {
              t = d_21;
              {
                ATerm s_4 = NULL,a_5 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(f_15);
                s_4 = t;
                t = l_15;
                t = p_15(t);
                a_5 = t;
                t = (ATerm) ATinsert(CheckATermList(a_5), g_15);
                g_1 = t;
                t = SSLsetAnnotations(g_1, s_4);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = p_15(t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      f_16 = ATgetArgument(t, 0);
      if((f_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm f_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            ATerm j_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = s_8(g_49, h_49, t);
        LocalPopChoice(h_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATempty;
      }
  }
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, i_49);
  t = y_7(d_1, v_15, i_49, t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, u_15);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(h_49, u_15, w_15, t);
  t = t_15;
  return(t);
}
static ATerm a_8 (ATerm n_104 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm e_1 (ATerm t);
  static ATerm e_1 (ATerm t)
  {
    ATerm g_16 = NULL,n_16 = NULL;
    if(match_cons(t, sym__2))
      {
        g_16 = ATgetArgument(t, 0);
        n_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, g_16, n_16);
    t = n_104(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm u_17 (ATerm i_17, ATerm t)
{
  t = SSL_fclose(i_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  s_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_17 = ATgetArgument(t, 0);
      {
        ATerm k_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_17);
            LocalPopChoice(o_21);
          }
        else
          {
            t = k_21;
            t = u_17(s_17, t);
          }
      }
    }
  else
    {
      t = u_17(s_17, t);
    }
  return(t);
}
static ATerm b_8 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm c_8 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm v_17 = NULL;
  t = SSL_fopen(n_55, o_55);
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_stdin_stream();
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_17 = NULL;
  t = SSL_stdout_stream();
  z_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = SSL_stderr_stream();
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_18);
  return(t);
}
static ATerm b_21 (ATerm q_18, ATerm t)
{
  ATerm r_18 = NULL;
  t = SSL_explode_term(q_18);
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            r_18 = ATgetFirst((ATermList) q_21);
            {
              ATerm r_21 = (ATerm) ATgetNext((ATermList) q_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_21 (ATerm u_18, ATerm x_18, ATerm y_18, ATerm t)
{
  ATerm z_18 = NULL,b_19 = NULL,d_19 = NULL,k_19 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(y_18);
  d_19 = t;
  t = u_18;
  if(match_cons(t, sym_Path_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_19, x_18);
  i_1 = t;
  t = SSLsetAnnotations(i_1, d_19);
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(z_18, b_19, t);
  return(t);
}
static ATerm g_21 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm r_19 = NULL,z_19 = NULL,a_20 = NULL,d_20 = NULL,m_1 = NULL;
  t = SSLgetAnnotations(q_19);
  a_20 = t;
  t = SSL_is_string(o_19);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_20, p_19);
  m_1 = t;
  t = SSLsetAnnotations(m_1, a_20);
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_8(r_19, z_19, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,a_21 = NULL;
  x_20 = t;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_21(x_20, t);
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm v_21 = t;
              int w_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_21(y_20, a_21, x_20, t);
                  LocalPopChoice(w_21);
                }
              else
                {
                  t = v_21;
                  t = g_21(y_20, a_21, x_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_21(x_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,u_21 = NULL;
  u_21 = t;
  {
    ATerm x_21 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_21, term_k_22);
        t = d_8(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = x_21;
        {
          ATerm c_6 = NULL,d_6 = NULL;
          t = term_p_22;
          d_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_22, u_21);
          t = j_8(d_6, u_21, t);
          c_6 = t;
          t = SSL_perror(c_6);
          _fail(t);
        }
      }
  }
  m_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(n_21, t);
  l_21 = t;
  t = m_21;
  t = fclose_0_0(t);
  t = l_21;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_q_22;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_21 = NULL,z_21 = NULL;
      y_21 = t;
      t = (ATerm) ATinsert(ATempty, term_w_22);
      z_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_21, (ATerm) ATinsert(ATempty, term_w_22));
      t = k_8(y_21, z_21, t);
      LocalPopChoice(v_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_22;
      {
        ATerm z_22 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23 = t;
            if((PushChoice() == 0))
              {
                ATerm a_22 = NULL,b_22 = NULL;
                a_22 = t;
                t = (ATerm) ATinsert(ATempty, term_b_11);
                b_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_22, (ATerm) ATinsert(ATempty, term_b_11));
                t = k_8(a_22, b_22, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_23;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(c_23);
          }
        else
          {
            t = z_22;
            t = debug_1_0(h_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = debug_1_0(q_1, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_h_23;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm b_23 = NULL,d_23 = NULL,g_23 = NULL;
  b_23 = t;
  t = term_l_20;
  d_23 = t;
  t = (ATerm) ATinsert(ATempty, term_i_23);
  g_23 = t;
  t = SSL_printnl(d_23, g_23);
  t = b_23;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,p_23 = NULL;
  if(match_cons(t, sym__3))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
      p_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_7(k_23, l_23, p_23, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  q_23 = t;
  t = term_l_20;
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, term_j_23);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = q_23;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  t = term_l_20;
  w_23 = t;
  t = (ATerm) ATinsert(ATempty, term_i_23);
  x_23 = t;
  t = SSL_printnl(w_23, x_23);
  t = v_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,t_22 = NULL,u_22 = NULL,x_22 = NULL;
  c_22 = t;
  t = if_verbose5_1_0(j_1, t);
  {
    ATerm m_23 = t;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL,a_23 = NULL;
        t = term_n_23;
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, c_22);
        a_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATmakeAppl(sym_Imported_1, c_22));
        t = s_8(y_22, a_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_23;
      }
  }
  e_22 = t;
  t = term_n_23;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_23, term_o_23, (ATerm) ATinsert(ATempty, c_22));
  t = lookup_table_0_1(n_22, t);
  x_22 = t;
  t = term_o_23;
  o_22 = t;
  t = (ATerm) ATinsert(ATempty, c_22);
  t_22 = t;
  t = x_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(o_22, t_22, u_22, t);
  t = e_22;
  t = if_verbose4_1_0(p_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(r_1, t);
  d_22 = t;
  t = term_n_23;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, d_22);
  t = a_8(s_1, m_22, d_22, t);
  t = if_verbose6_1_0(t_1, t);
  t = term_n_23;
  g_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_23, (ATerm)ATmakeAppl(sym_Imported_1, c_22), (ATerm) ATempty);
  t = lookup_table_0_1(g_22, t);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, c_22);
  h_22 = t;
  t = (ATerm) ATempty;
  i_22 = t;
  t = l_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(h_22, i_22, j_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_23, (ATerm)ATmakeAppl(sym_Imported_1, c_22), (ATerm) ATempty);
  t = if_verbose4_1_0(u_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm y_97 (ATerm), ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,t_24 = NULL;
  q_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_24;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_24 = ATgetFirst((ATermList) t);
          t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 = NULL,w_6 = NULL,z_6 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(q_24);
            r_6 = t;
            t = r_24;
            t = y_97(t);
            w_6 = t;
            t = t_24;
            t = filter_1_0(y_97, t);
            z_6 = t;
            t = (ATerm) ATinsert(CheckATermList(z_6), w_6);
            e_5 = t;
            t = SSLsetAnnotations(e_5, r_6);
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = t_24;
            t = filter_1_0(y_97, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm k_87 (ATerm), ATerm l_87 (ATerm), ATerm t)
{
  static ATerm x_24 (ATerm t);
  static ATerm x_24 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_87(t);
        t = x_24(t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = l_87(t);
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_24 = NULL,z_24 = NULL;
      t = term_k_11;
      y_24 = t;
      t = term_c_24;
      z_24 = t;
      t = term_d_24;
      t = s_8(y_24, z_24, t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL;
            t = term_g_24;
            b_25 = t;
            t = SSL_getenv(b_25);
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm i_25 = NULL,m_25 = NULL;
  t = term_n_23;
  i_25 = t;
  t = term_i_24;
  m_25 = t;
  t = term_j_24;
  t = s_8(i_25, m_25, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_24;
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
  t = term_l_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  t = if_verbose5_1_0(v_1, t);
  d_25 = t;
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL,f_25 = NULL;
        t = term_n_23;
        e_25 = t;
        t = term_o_23;
        f_25 = t;
        t = term_o_24;
        t = s_8(e_25, f_25, t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm h_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_25 = t;
          t = repeat_2_0(z_1, _id, t);
          t = h_25;
        }
      }
  }
  t = d_25;
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
  t = term_p_24;
  return(t);
}
static ATerm n_26 (ATerm v_25, ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
  t = term_n_23;
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, v_25);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATmakeAppl(sym_Tool_1, v_25));
  t = s_8(y_25, z_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_24 = ATgetFirst((ATermList) t);
      if(match_cons(s_24, sym__2))
        {
          ATerm v_24 = ATgetArgument(s_24, 0);
          x_25 = ATgetArgument(s_24, 1);
        }
      else
        _fail(t);
      {
        ATerm u_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_n_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
      t = if_verbose5_1_0(g_2, t);
      t = xtc_load_0_0(t);
      c_26 = t;
      if(match_cons(t, sym__2))
        {
          a_26 = ATgetArgument(t, 0);
          b_26 = ATgetArgument(t, 1);
          {
            ATerm g_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
                t = term_n_23;
                g_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_26);
                h_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_23, (ATerm) ATmakeAppl(sym_Tool_1, a_26));
                t = s_8(g_26, h_26, t);
                {
                  static ATerm k_2 (ATerm t);
                  static ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_26 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                }
                t = not_null(f_26);
                LocalPopChoice(j_25);
              }
            else
              {
                t = g_25;
                t = n_26(c_26, t);
              }
          }
        }
      else
        {
          t = n_26(c_26, t);
        }
      t = if_verbose5_1_0(l_2, t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = a_25;
      {
        ATerm m_26 = NULL,l_7 = NULL,m_7 = NULL;
        m_26 = t;
        t = term_l_20;
        l_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_25), m_26), term_n_25);
        m_7 = t;
        t = SSL_printnl(l_7, m_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_25), m_26), term_n_25);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL;
  q_26 = t;
  t = p_107(t);
  t = xtc_find_0_0(t);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
  {
    static ATerm d_3 (ATerm t);
    static ATerm d_3 (ATerm t)
    {
      ATerm r_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_26, q_26);
      t = t_7(p_26, q_26, t);
      t = term_b_12;
      r_26 = t;
      t = SSL_exit(r_26);
      return(t);
    }
    t = fork_and_wait_1_0(d_3, t);
  }
  t = q_26;
  return(t);
}
static ATerm g_27 (ATerm w_26, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_explode_term(w_26);
  if(match_cons(t, sym__2))
    {
      ATerm r_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,d_27 = NULL;
  d_27 = t;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_3 (ATerm t);
            static ATerm e_3 (ATerm t)
            {
              t = b_27;
              return(t);
            }
            t = a_27;
            t = at_end_1_0(e_3, t);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            t = g_27(d_27, t);
          }
      }
    }
  else
    {
      t = g_27(d_27, t);
    }
  return(t);
}
static ATerm e_8 (ATerm e_100 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,s_27 = NULL,t_27 = NULL;
  m_27 = t;
  t = e_100(t);
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_27, u_35, s_35);
  t = t_8(h_27, u_35, s_35, t);
  {
    ATerm u_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_27 = NULL;
        t = term_d_26;
        w_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_27, term_d_26);
        t = s_8(h_27, w_27, t);
        {
          ATerm e_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_26;
            }
        }
        LocalPopChoice(w_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_27 = ATgetFirst((ATermList) t);
      l_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_27, term_d_26, (ATerm) ATinsert(CheckATermList(l_27), (ATerm) ATinsert(CheckATermList(i_27), u_35)));
  t = lookup_table_0_1(h_27, t);
  t_27 = t;
  t = term_d_26;
  n_27 = t;
  t = (ATerm) ATinsert(CheckATermList(l_27), (ATerm) ATinsert(CheckATermList(i_27), u_35));
  q_27 = t;
  t = t_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(n_27, q_27, s_27, t);
  t = m_27;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm a_28 = NULL;
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_28 = NULL,u_7 = NULL;
      g_28 = t;
      t = term_k_26;
      u_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_28, term_k_26);
      t = j_8(g_28, u_7, t);
      a_28 = t;
      t = SSL_mkstemp(a_28);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm h_28 = NULL;
        t = term_l_26;
        h_28 = t;
        t = SSL_perror(h_28);
        _fail(t);
      }
    }
  return(t);
}
static ATerm j_8 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = P__tmpdir_0_0(t);
  n_28 = t;
  t = term_s_26;
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, term_s_26);
  t = j_8(n_28, o_28, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_26;
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, term_t_26);
  t = e_8(f_3, k_28, l_28, t);
  t = SSL_close(j_28);
  t = k_28;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  r_28 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm t_28 = NULL,u_28 = NULL;
      t = r_28;
      t = xtc_new_file_0_0(t);
      t_28 = t;
      t = u_0(t);
      u_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_28, (ATerm) ATinsert(ATinsert(ATempty, t_28), term_l_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_28);
    }
  else
    {
      ATerm w_28 = NULL,x_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          s_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_28;
      t = xtc_new_file_0_0(t);
      w_28 = t;
      t = u_0(t);
      x_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_28), term_l_11), s_28), term_u_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_28);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  static ATerm q_29 (ATerm t);
  static ATerm q_29 (ATerm t)
  {
    ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
    n_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_29 = ATgetFirst((ATermList) t);
        m_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_9 = NULL,i_9 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(n_29);
          d_9 = t;
          t = m_29;
          t = q_29(t);
          i_9 = t;
          t = (ATerm) ATinsert(CheckATermList(i_9), l_29);
          g_5 = t;
          t = SSLsetAnnotations(g_5, d_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_29;
        t = x_89(t);
      }
    return(t);
  }
  t = q_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_29 = NULL,y_29 = NULL,z_29 = NULL;
  u_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_29;
    }
  else
    {
      static ATerm g_3 (ATerm t);
      static ATerm g_3 (ATerm t)
      {
        t = not_null(z_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_29 = ATgetFirst((ATermList) t);
          if(((z_29 != NULL) && (z_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_29;
      t = at_end_1_0(g_3, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm v_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_30 = NULL,g_30 = NULL;
      t = term_k_11;
      f_30 = t;
      t = term_z_26;
      g_30 = t;
      t = term_c_27;
      t = s_8(f_30, g_30, t);
      LocalPopChoice(y_26);
      {
        ATerm h_30 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        h_30 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, h_30), term_z_26);
      }
    }
  else
    {
      t = v_26;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm debug_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
  i_30 = t;
  t = n_84(t);
  j_30 = t;
  t = term_l_20;
  k_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_30), j_30);
  l_30 = t;
  t = SSL_printnl(k_30, l_30);
  t = i_30;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm n_30 = NULL;
  n_30 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
        t = term_k_11;
        s_30 = t;
        t = term_w_11;
        t_30 = t;
        t = term_z_11;
        t = s_8(s_30, t_30, t);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_30, term_e_13);
        t = geq_0_0(t);
        t = n_30;
        t = h_104(t);
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = n_30;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(i_3, t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm x_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,e_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,p_31 = NULL,r_31 = NULL,j_5 = NULL;
  z_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_27), term_k_27), z_30);
  h_31 = t;
  t = SSL_concat_strings(h_31);
  e_31 = t;
  t = (ATerm) ATinsert(ATempty, term_b_11);
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_31, (ATerm) ATinsert(ATempty, term_b_11));
  t = k_8(e_31, c_31, t);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_30, z_30);
  r_31 = t;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      ATerm r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_31);
  i_31 = t;
  t = SSL_modification_time(x_30);
  j_31 = t;
  t = SSL_modification_time(z_30);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_31, p_31);
  j_5 = t;
  t = SSLsetAnnotations(j_5, i_31);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, x_30, z_30);
  b_31 = t;
  t = SSL_explode_term(b_31);
  if(match_cons(t, sym__2))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_27 = ATgetArgument(t, 1);
        if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
          {
            a_31 = ATgetFirst((ATermList) v_27);
            {
              ATerm x_27 = (ATerm) ATgetNext((ATermList) v_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_31;
  t = if_verbose2_1_0(h_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  static ATerm n_32 (ATerm t);
  static ATerm n_32 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_90(t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL,q_9 = NULL,x_9 = NULL,n_5 = NULL;
          k_32 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_32 = ATgetFirst((ATermList) t);
              m_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_32);
          q_9 = t;
          t = m_32;
          t = n_32(t);
          x_9 = t;
          t = (ATerm) ATinsert(CheckATermList(x_9), l_32);
          n_5 = t;
          t = SSLsetAnnotations(n_5, q_9);
        }
      }
    return(t);
  }
  t = n_32(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_c_28;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_10 = NULL,g_10 = NULL,j_10 = NULL;
      g_10 = t;
      t = term_f_28;
      j_10 = t;
      t = SSL_explode_string(j_10);
      f_10 = t;
      t = SSL_explode_string(g_10);
      {
        static ATerm j_3 (ATerm t);
        static ATerm j_3 (ATerm t)
        {
          if((f_10 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(j_3, t);
      }
      t = g_10;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm i_28 = t;
        int m_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
            p_10 = t;
            t = term_p_28;
            q_10 = t;
            t = SSL_explode_string(q_10);
            o_10 = t;
            t = SSL_explode_string(p_10);
            {
              static ATerm k_3 (ATerm t);
              static ATerm k_3 (ATerm t)
              {
                if((o_10 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(k_3, t);
            }
            t = p_10;
            LocalPopChoice(m_28);
          }
        else
          {
            t = i_28;
            {
              ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,e_33 = NULL;
              a_33 = t;
              t = term_l_20;
              c_33 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_33), term_q_28);
              e_33 = t;
              t = SSL_printnl(c_33, e_33);
              t = term_b_12;
              b_33 = t;
              t = SSL_exit(b_33);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_33), term_q_28);
            }
          }
      }
      {
        ATerm v_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = v_28;
            {
              ATerm n_33 = NULL,w_10 = NULL;
              n_33 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_33);
              {
                ATerm z_28 = t;
                int a_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_11 = NULL,e_11 = NULL,s_5 = NULL;
                    e_11 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm b_29 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(e_11);
                    d_11 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, n_33);
                    s_5 = t;
                    t = SSLsetAnnotations(s_5, d_11);
                    LocalPopChoice(a_29);
                    t = xtc_transform_file_2_0(o_3, p_3, t);
                  }
                else
                  {
                    t = z_28;
                    t = xtc_transform_term_2_0(q_3, r_3, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  w_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_10;
              t = if_verbose2_1_0(t_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = NULL,w_33 = NULL;
      t = term_k_11;
      s_33 = t;
      t = term_e_29;
      w_33 = t;
      t = term_f_29;
      t = s_8(s_33, w_33, t);
      LocalPopChoice(d_29);
      {
        ATerm x_33 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        x_33 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, x_33), term_e_29);
      }
    }
  else
    {
      t = c_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_33 = NULL,a_34 = NULL;
      t = term_k_11;
      y_33 = t;
      t = term_i_29;
      a_34 = t;
      t = term_j_29;
      t = s_8(y_33, a_34, t);
      LocalPopChoice(h_29);
      t = (ATerm) ATinsert(ATempty, term_i_29);
    }
  else
    {
      t = g_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm k_29 = t;
  int o_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_34 = NULL,c_34 = NULL;
      t = term_k_11;
      b_34 = t;
      t = term_p_29;
      c_34 = t;
      t = term_r_29;
      t = s_8(b_34, c_34, t);
      LocalPopChoice(o_29);
      t = (ATerm) ATinsert(ATempty, term_p_29);
    }
  else
    {
      t = k_29;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,j_34 = NULL;
  t = term_t_26;
  t = pass__patch_0_0(t);
  d_34 = t;
  t = term_t_26;
  t = pass__prune_0_0(t);
  e_34 = t;
  t = term_t_26;
  t = pass__new_0_0(t);
  f_34 = t;
  t = term_t_26;
  t = pass__old_0_0(t);
  j_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_34), f_34), e_34), d_34);
  t = concat_0_0(t);
  return(t);
}
static ATerm m_8 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm p_34 = NULL,r_34 = NULL;
  r_34 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = s_8(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_29 = ATgetFirst((ATermList) t);
            p_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_29);
        {
          ATerm t_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, p_34);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_8(p_48, p_34, t_34, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, p_34);
        }
      }
    else
      {
        t = s_29;
        {
          ATerm x_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_8(p_48, x_34, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = r_34;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  g_35 = t;
  t = b_100(t);
  f_35 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 = NULL;
        t = term_d_26;
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_35, term_d_26);
        t = s_8(f_35, l_35, t);
        {
          ATerm a_30 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_30;
            }
        }
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_35 = ATgetFirst((ATermList) t);
      b_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_35, term_d_26, b_35);
  t = lookup_table_0_1(f_35, t);
  j_35 = t;
  t = term_d_26;
  h_35 = t;
  t = j_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(h_35, b_35, i_35, t);
  t = c_35;
  {
    static ATerm w_3 (ATerm t);
    static ATerm w_3 (ATerm t)
    {
      ATerm x_35 = NULL;
      x_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_35, x_35);
      t = m_8(f_35, x_35, t);
      return(t);
    }
    t = map_1_0(w_3, t);
  }
  t = g_35;
  return(t);
}
ATerm restore_always_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_103(t);
      t = v_103(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      t = v_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_100 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,e_36 = NULL,f_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL;
  c_36 = t;
  t = a_100(t);
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_36, term_d_26);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_30 = ATgetArgument(t, 0);
            ATerm o_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_26;
        t_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_36, term_d_26);
        t = s_8(b_36, t_36, t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_36, term_d_26, (ATerm) ATinsert(CheckATermList(e_36), (ATerm) ATempty));
  t = lookup_table_0_1(b_36, t);
  n_36 = t;
  t = term_d_26;
  f_36 = t;
  t = (ATerm) ATinsert(CheckATermList(e_36), (ATerm) ATempty);
  l_36 = t;
  t = n_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(f_36, l_36, m_36, t);
  t = c_36;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_o_26;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_37);
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = g_37;
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_o_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_106 (ATerm), ATerm t)
{
  ATerm w_36 = NULL;
  static ATerm y_3 (ATerm t);
  static ATerm y_3 (ATerm t)
  {
    ATerm x_36 = NULL;
    x_36 = t;
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_37 = NULL,b_37 = NULL;
          t = term_o_26;
          a_37 = t;
          t = term_d_26;
          b_37 = t;
          t = term_w_30;
          t = s_8(a_37, b_37, t);
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((w_36 != NULL) && (w_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          w_36 = ATgetFirst((ATermList) t);
        {
          ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = w_36;
    t = map_1_0(z_3, t);
    t = x_36;
    t = end_scope_1_0(a_4, t);
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  t = restore_always_2_0(y_106, y_3, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm d_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
      t = term_k_11;
      v_37 = t;
      t = term_u_26;
      w_37 = t;
      t = term_g_31;
      t = s_8(v_37, w_37, t);
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_37);
      LocalPopChoice(f_31);
    }
  else
    {
      t = d_31;
      t = term_s_11;
    }
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_38 = NULL;
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_38 = NULL,f_38 = NULL;
            f_38 = t;
            if(match_cons(t, sym_FILE_1))
              {
                d_38 = ATgetArgument(t, 0);
                {
                  ATerm n_11 = NULL,j_6 = NULL;
                  t = SSLgetAnnotations(f_38);
                  n_11 = t;
                  t = (ATerm) ATmakeAppl(sym_FILE_1, d_38);
                  j_6 = t;
                  t = SSLsetAnnotations(j_6, n_11);
                }
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = f_38;
              }
            LocalPopChoice(n_31);
            t = xtc_transform_file_2_0(d_4, e_4, t);
          }
        else
          {
            t = m_31;
            t = xtc_transform_term_2_0(f_4, h_4, t);
          }
        w_38 = t;
        {
          ATerm o_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_38;
              {
                ATerm s_31 = t;
                int t_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_12 = NULL,r_12 = NULL;
                    t = term_k_11;
                    q_12 = t;
                    t = term_p_29;
                    r_12 = t;
                    t = term_r_29;
                    t = s_8(q_12, r_12, t);
                    LocalPopChoice(t_31);
                  }
                else
                  {
                    t = s_31;
                    {
                      ATerm t_12 = NULL,v_12 = NULL;
                      t = term_k_11;
                      t_12 = t;
                      t = term_i_29;
                      v_12 = t;
                      t = term_j_29;
                      t = s_8(t_12, v_12, t);
                    }
                  }
              }
              t = w_38;
              {
                ATerm u_31 = t;
                int v_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_13 = NULL;
                    if(match_cons(t, sym_FILE_1))
                      {
                        f_13 = ATgetArgument(t, 0);
                        {
                          ATerm q_13 = NULL,k_6 = NULL;
                          t = SSLgetAnnotations(w_38);
                          q_13 = t;
                          t = (ATerm) ATmakeAppl(sym_FILE_1, f_13);
                          k_6 = t;
                          t = SSLsetAnnotations(k_6, q_13);
                        }
                      }
                    else
                      {
                        if(!(match_cons(t, sym_stdin_0)))
                          _fail(t);
                        t = w_38;
                      }
                    LocalPopChoice(v_31);
                    t = xtc_transform_file_2_0(l_4, pass_verbose_0_0, t);
                  }
                else
                  {
                    t = u_31;
                    t = xtc_transform_term_2_0(n_4, pass_verbose_0_0, t);
                  }
              }
              LocalPopChoice(q_31);
            }
          else
            {
              t = o_31;
              t = w_38;
            }
        }
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        {
          ATerm y_38 = NULL;
          t = term_b_12;
          y_38 = t;
          t = SSL_exit(y_38);
        }
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_w_31;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_t_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_w_31;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_t_26;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_x_31;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(c_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  t = term_t_26;
  t = whoami_0_0(t);
  d_39 = t;
  t = term_l_20;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_31), d_39), term_y_31);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = term_b_12;
  e_39 = t;
  t = SSL_exit(e_39);
  t = c_39;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  if(match_string(t, "-k"))
    {
      t = j_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_39;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL;
  k_39 = t;
  t = SSL_string_to_int(k_39);
  l_39 = t;
  t = term_a_32;
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_32, l_39);
  t = v_8(m_39, l_39, t);
  t = k_39;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, q_4, v_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm o_39 = NULL;
  o_39 = t;
  if(match_string(t, "-S"))
    {
      t = o_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_39;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  t = term_w_11;
  r_39 = t;
  t = term_c_32;
  s_39 = t;
  t = term_d_32;
  t = v_8(r_39, s_39, t);
  t = term_e_32;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_f_32;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm z_39 = NULL,c_40 = NULL,d_40 = NULL;
  z_39 = t;
  t = SSL_string_to_int(z_39);
  c_40 = t;
  t = term_w_11;
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, c_40);
  t = v_8(d_40, c_40, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_39);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_g_32;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL;
  t = term_h_32;
  e_40 = t;
  t = term_t_26;
  f_40 = t;
  t = term_i_32;
  t = v_8(e_40, f_40, t);
  t = term_j_32;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_o_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, b_5, c_5, t);
      LocalPopChoice(q_32);
    }
  else
    {
      t = p_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, h_5, t);
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = Option_3_0(i_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm h_40 = NULL;
  h_40 = t;
  if(match_string(t, "-o"))
    {
      t = h_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_40;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm i_40 = NULL,m_40 = NULL;
  i_40 = t;
  t = term_l_11;
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_11, i_40);
  t = v_8(m_40, i_40, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_40);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, o_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  if(match_string(t, "-i"))
    {
      t = o_40;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_40;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm p_40 = NULL,r_40 = NULL;
  p_40 = t;
  t = term_u_26;
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_26, p_40);
  t = v_8(r_40, p_40, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_40);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, t_5, w_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_41 = NULL,d_41 = NULL,e_41 = NULL;
      t = term_t_26;
      t = q_0(t);
      b_41 = t;
      t = term_v_32;
      d_41 = t;
      t = term_w_32;
      e_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, b_41);
      t = t_8(d_41, e_41, b_41, t);
      _fail(t);
    }
  else
    {
      ATerm k_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          y_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_40 = ATgetFirst((ATermList) t);
          a_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_40;
      t = o_0(t);
      t = z_40;
      t = p_0(t);
      k_41 = t;
      t = (ATerm) ATinsert(CheckATermList(a_41), k_41);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL;
  l_41 = t;
  t = term_p_29;
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_29, l_41);
  t = v_8(m_41, l_41, t);
  t = l_41;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_x_32;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL;
  n_41 = t;
  t = term_i_29;
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, n_41);
  t = v_8(o_41, n_41, t);
  t = n_41;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_d_33;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  p_41 = t;
  t = term_z_26;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_26, p_41);
  t = v_8(q_41, p_41, t);
  t = p_41;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_f_33;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  r_41 = t;
  t = term_e_29;
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, r_41);
  t = v_8(s_41, r_41, t);
  t = r_41;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm v_41 = NULL,y_41 = NULL;
  t = term_h_33;
  v_41 = t;
  t = term_t_26;
  y_41 = t;
  t = term_i_33;
  t = v_8(v_41, y_41, t);
  t = term_j_33;
  return(t);
}
static ATerm d_7 (ATerm t)
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
      t = Option_3_0(y_5, z_5, b_6, t);
      LocalPopChoice(m_33);
    }
  else
    {
      t = l_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(e_6, h_6, i_6, t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm q_33 = t;
              int r_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(l_6, m_6, n_6, t);
                  LocalPopChoice(r_33);
                }
              else
                {
                  t = q_33;
                  {
                    ATerm t_33 = t;
                    int u_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(q_6, s_6, v_6, t);
                        LocalPopChoice(u_33);
                      }
                    else
                      {
                        t = t_33;
                        {
                          ATerm v_33 = t;
                          int z_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              LocalPopChoice(z_33);
                            }
                          else
                            {
                              t = v_33;
                              {
                                ATerm i_34 = t;
                                int k_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    LocalPopChoice(k_34);
                                  }
                                else
                                  {
                                    t = i_34;
                                    {
                                      ATerm l_34 = t;
                                      int o_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(x_6, a_7, d_7, t);
                                          LocalPopChoice(o_34);
                                        }
                                      else
                                        {
                                          t = l_34;
                                          {
                                            ATerm q_34 = t;
                                            int s_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                LocalPopChoice(s_34);
                                              }
                                            else
                                              {
                                                t = q_34;
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
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,e_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_26;
  t = whoami_0_0(t);
  z_41 = t;
  t = term_l_20;
  b_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_34), z_41);
  e_42 = t;
  t = SSL_printnl(b_42, e_42);
  t = term_b_12;
  a_42 = t;
  t = SSL_exit(a_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL;
  t = term_k_11;
  f_42 = t;
  t = term_v_34;
  g_42 = t;
  t = term_w_34;
  t = s_8(f_42, g_42, t);
  return(t);
}
static ATerm n_8 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,o_42 = NULL;
  k_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_42;
      t = u_96(t);
    }
  else
    {
      ATerm s_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_42 = ATgetFirst((ATermList) t);
          o_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_42;
      t = foldr_2_0(u_96, v_96, t);
      s_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_42, s_42);
      t = v_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm c_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_8(c_14, f_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_42 = NULL,v_13 = NULL,w_13 = NULL;
  t = times_0_0(t);
  w_13 = t;
  t = SSL_explode_term(w_13);
  if(match_cons(t, sym__2))
    {
      ATerm a_35 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_13;
  t = foldr_2_0(e_7, f_7, t);
  v_42 = t;
  t = SSL_TicksToSeconds(v_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_43;
        if((w_43 != t))
          {
            _fail(t);
          }
        t = v_43;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
        {
          ATerm k_35 = t;
          int m_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_43, x_43);
              LocalPopChoice(m_35);
            }
          else
            {
              t = k_35;
              t = SSL_gtr(w_43, x_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_43, x_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
        t = term_k_11;
        j_44 = t;
        t = term_w_11;
        k_44 = t;
        t = term_z_11;
        t = s_8(j_44, k_44, t);
        i_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_b_12);
        t = geq_0_0(t);
        t = d_44;
        t = g_104(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        t = d_44;
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,s_44 = NULL,t_44 = NULL;
  t = run_time_0_0(t);
  p_44 = t;
  t = term_t_26;
  t = whoami_0_0(t);
  q_44 = t;
  t = term_l_20;
  s_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_35), p_44), term_g_12), q_44);
  t_44 = t;
  t = SSL_printnl(s_44, t_44);
  t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_35), p_44), term_g_12), q_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_32;
  u_44 = t;
  t = SSL_exit(u_44);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL;
  f_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_45 = ATgetArgument(t, 0);
          {
            ATerm b_15 = NULL,o_6 = NULL;
            t = SSLgetAnnotations(f_45);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_45);
            o_6 = t;
            t = SSLsetAnnotations(o_6, b_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_44 = NULL,y_44 = NULL;
      t = term_k_11;
      x_44 = t;
      t = term_t_35;
      y_44 = t;
      t = term_v_35;
      t = s_8(x_44, y_44, t);
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      t = fetch_1_0(k_7, t);
    }
  t = w_108(t);
  return(t);
}
static ATerm w_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm h_45 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm q_45 = NULL;
  t = table_hashtable_0_0(t);
  q_45 = t;
  {
    ATerm w_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = q_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_8(v_49, m_15, t);
        LocalPopChoice(y_35);
      }
    else
      {
        t = w_35;
        {
          ATerm c_16 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = q_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_16 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_8(v_49, c_16, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,y_45 = NULL,z_45 = NULL;
  u_45 = t;
  t = term_z_35;
  y_45 = t;
  t = term_a_36;
  z_45 = t;
  t = u_45;
  t = new_hashtable_0_2(y_45, z_45, t);
  v_45 = t;
  t = u_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(u_45, v_45, w_45, t);
  t = u_45;
  return(t);
}
static ATerm p_8 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_46);
  return(t);
}
static ATerm q_8 (ATerm l_53, ATerm t)
{
  ATerm b_46 = NULL;
  t = SSL_hashtable_destroy(l_53);
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_46);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm c_46 = NULL;
  t = SSL_table_hashtable();
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_46);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL;
  d_46 = t;
  t = table_hashtable_0_0(t);
  e_46 = t;
  t = lookup_table_0_1(d_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_8(g_46, t);
  t = e_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(d_46, f_46, t);
  t = d_46;
  return(t);
}
ATerm long_description_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_36), term_s_36), term_r_36), term_q_36), term_p_36), term_o_36), term_k_36), term_j_36), term_i_36), term_h_36), term_g_36), term_d_36);
  return(t);
}
ATerm map_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  static ATerm v_46 (ATerm t);
  static ATerm v_46 (ATerm t)
  {
    ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
    s_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_46;
      }
    else
      {
        ATerm k_16 = NULL,o_16 = NULL,p_16 = NULL,r_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_46 = ATgetFirst((ATermList) t);
            u_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_46);
        k_16 = t;
        t = t_46;
        t = g_89(t);
        o_16 = t;
        t = u_46;
        t = v_46(t);
        p_16 = t;
        t = (ATerm) ATinsert(CheckATermList(p_16), o_16);
        r_9 = t;
        t = SSLsetAnnotations(r_9, k_16);
      }
    return(t);
  }
  t = v_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_46 = ATgetFirst((ATermList) t);
      z_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_47 = NULL,e_47 = NULL;
        static ATerm n_7 (ATerm t);
        static ATerm n_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_47)), not_null(e_47));
          return(t);
        }
        t = z_46;
        t = l_0(t);
        if(((d_47 != NULL) && (d_47 != t)))
          _fail(t);
        else
          d_47 = t;
        t = y_46;
        t = j_0(t);
        if(((e_47 != NULL) && (e_47 != t)))
          _fail(t);
        else
          e_47 = t;
        t = z_46;
        t = reverse_acc_2_0(j_0, n_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_26;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm t_47 = NULL;
  t_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_47), term_v_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_47 = NULL,m_47 = NULL;
      t = term_k_11;
      l_47 = t;
      t = term_v_34;
      m_47 = t;
      t = term_w_34;
      t = s_8(l_47, m_47, t);
      i_47 = t;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      {
        static ATerm o_7 (ATerm t);
        static ATerm o_7 (ATerm t)
        {
          ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,v_9 = NULL;
          p_47 = t;
          if(match_cons(t, sym_Program_1))
            {
              o_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_47);
          n_47 = t;
          t = o_47;
          if(((i_47 != NULL) && (i_47 != t)))
            _fail(t);
          else
            i_47 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, o_47);
          v_9 = t;
          t = SSLsetAnnotations(v_9, n_47);
          return(t);
        }
        t = fetch_1_0(o_7, t);
      }
    }
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_37), not_null(i_47)), term_e_37);
        t = echo_0_0(t);
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
      }
  }
  t = term_h_37;
  t = echo_0_0(t);
  t = term_v_32;
  j_47 = t;
  t = term_w_32;
  k_47 = t;
  t = term_i_37;
  t = s_8(j_47, k_47, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(w_7, t);
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_47 = NULL;
        static ATerm f_8 (ATerm t);
        static ATerm f_8 (ATerm t)
        {
          t = not_null(i_47);
          return(t);
        }
        t = long_description_1_0(f_8, t);
        u_47 = t;
        t = (ATerm) ATinsert(CheckATermList(u_47), term_l_37);
        t = echo_0_0(t);
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  static ATerm e_49 (ATerm t);
  static ATerm e_49 (ATerm t)
  {
    ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
    b_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_49 = ATgetFirst((ATermList) t);
        d_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = NULL,d_17 = NULL,z_9 = NULL;
          t = SSLgetAnnotations(b_49);
          x_16 = t;
          t = c_49;
          t = q_89(t);
          d_17 = t;
          t = (ATerm) ATinsert(CheckATermList(d_49), d_17);
          z_9 = t;
          t = SSLsetAnnotations(z_9, x_16);
          LocalPopChoice(n_37);
        }
      else
        {
          t = m_37;
          {
            ATerm p_17 = NULL,x_17 = NULL,b_10 = NULL;
            t = SSLgetAnnotations(b_49);
            p_17 = t;
            t = d_49;
            t = e_49(t);
            x_17 = t;
            t = (ATerm) ATinsert(CheckATermList(x_17), c_49);
            b_10 = t;
            t = SSLsetAnnotations(b_10, p_17);
          }
        }
    }
    return(t);
  }
  t = e_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,t_49 = NULL;
  n_49 = t;
  {
    ATerm o_37 = t;
    int p_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_37 = ATgetFirst((ATermList) t);
                ATerm r_37 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_49;
          }
        LocalPopChoice(p_37);
      }
    else
      {
        t = o_37;
        t = (ATerm) ATinsert(ATempty, n_49);
      }
  }
  o_49 = t;
  t = term_o_11;
  t_49 = t;
  t = SSL_printnl(t_49, o_49);
  t = n_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_50 = NULL,e_50 = NULL;
  t = term_k_11;
  b_50 = t;
  t = term_v_34;
  e_50 = t;
  t = term_w_34;
  t = s_8(b_50, e_50, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_8 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
static ATerm s_8 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm f_50 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_8(d_50, f_50, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_s_37;
  h_50 = t;
  t = term_t_26;
  i_50 = t;
  t = term_t_37;
  t = v_8(h_50, i_50, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_x_37;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  t = term_s_37;
  l_50 = t;
  t = term_t_26;
  m_50 = t;
  t = term_t_37;
  t = v_8(l_50, m_50, t);
  t = term_y_37;
  j_50 = t;
  t = term_t_26;
  k_50 = t;
  t = term_z_37;
  t = v_8(j_50, k_50, t);
  t = term_a_38;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_8, o_8, a_9, t);
      LocalPopChoice(e_38);
    }
  else
    {
      t = c_38;
      t = Option_3_0(b_9, e_9, h_9, t);
    }
  return(t);
}
static ATerm v_8 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL;
  t = term_k_11;
  n_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, p_53, q_53);
  t = lookup_table_0_1(n_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(p_53, q_53, o_50, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_11, p_53, q_53);
  return(t);
}
static ATerm t_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
  r_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_38 = ATgetArgument(t, 0);
            ATerm j_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = s_8(j_48, k_48, t);
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = (ATerm) ATempty;
      }
  }
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(s_50), i_48));
  t = lookup_table_0_1(j_48, t);
  v_50 = t;
  t = (ATerm) ATinsert(CheckATermList(s_50), i_48);
  t_50 = t;
  t = v_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(k_48, t_50, u_50, t);
  t = r_50;
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
      t = term_t_26;
      t = g_0(t);
      d_51 = t;
      t = term_v_32;
      e_51 = t;
      t = term_w_32;
      f_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, d_51);
      t = t_8(e_51, f_51, d_51, t);
      _fail(t);
    }
  else
    {
      ATerm i_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_51 = ATgetFirst((ATermList) t);
          c_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_51;
      t = d_0(t);
      t = term_t_26;
      t = f_0(t);
      i_51 = t;
      t = (ATerm) ATinsert(CheckATermList(c_51), i_51);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_75 (ATerm), ATerm u_75 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,i_10 = NULL;
  o_51 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_51 = ATgetFirst((ATermList) t);
      l_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_51);
  j_51 = t;
  t = k_51;
  t = t_75(t);
  m_51 = t;
  t = l_51;
  t = u_75(t);
  n_51 = t;
  t = (ATerm) ATinsert(CheckATermList(n_51), m_51);
  i_10 = t;
  t = SSLsetAnnotations(i_10, j_51);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_110 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,y_51 = NULL,z_51 = NULL,l_10 = NULL;
  t_51 = t;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_38;
        t = u_110(t);
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
      }
  }
  t = t_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_51 = ATgetFirst((ATermList) t);
      w_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_51);
  u_51 = t;
  t = term_v_34;
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_34, v_51);
  t = v_8(z_51, v_51, t);
  t = w_51;
  {
    static ATerm j_52 (ATerm t);
    static ATerm j_52 (ATerm t)
    {
      ATerm n_38 = t;
      int o_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_38 = t;
          int q_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_52 = NULL;
              c_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_52;
              LocalPopChoice(q_38);
            }
          else
            {
              t = p_38;
              t = u_110(t);
              t = Cons_2_0(_id, j_52, t);
            }
          LocalPopChoice(o_38);
        }
      else
        {
          t = n_38;
          {
            ATerm f_52 = NULL,g_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_52 = ATgetFirst((ATermList) t);
                g_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_52), (ATerm) ATmakeAppl(sym_Undefined_1, f_52));
          }
        }
      return(t);
    }
    t = j_52(t);
  }
  y_51 = t;
  t = (ATerm) ATinsert(CheckATermList(y_51), (ATerm) ATmakeAppl(sym_Program_1, v_51));
  l_10 = t;
  t = SSLsetAnnotations(l_10, u_51);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  if(match_string(t, "--help"))
    {
      t = w_52;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_52;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_52;
        }
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL;
  t = term_t_35;
  x_52 = t;
  t = term_t_26;
  y_52 = t;
  t = term_r_38;
  t = v_8(x_52, y_52, t);
  t = term_s_38;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_t_38;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  q_52 = t;
  t = term_v_32;
  r_52 = t;
  t = term_u_38;
  t = lookup_table_0_1(r_52, t);
  v_52 = t;
  t = term_w_32;
  s_52 = t;
  t = (ATerm) ATempty;
  t_52 = t;
  t = v_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(s_52, t_52, u_52, t);
  t = q_52;
  {
    static ATerm j_9 (ATerm t);
    static ATerm j_9 (ATerm t)
    {
      ATerm v_38 = t;
      int x_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_110(t);
          LocalPopChoice(x_38);
        }
      else
        {
          t = v_38;
          {
            ATerm z_38 = t;
            int a_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_9, l_9, m_9, t);
                LocalPopChoice(a_39);
              }
            else
              {
                t = z_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_9, t);
  }
  {
    ATerm b_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_53 = NULL;
        w_53 = t;
        {
          ATerm i_39 = t;
          int n_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_18 = NULL;
              t = w_53;
              {
                ATerm p_39 = t;
                int q_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_18 = NULL,n_18 = NULL;
                    t = term_k_11;
                    m_18 = t;
                    t = term_t_35;
                    n_18 = t;
                    t = term_v_35;
                    t = s_8(m_18, n_18, t);
                    LocalPopChoice(q_39);
                  }
                else
                  {
                    t = p_39;
                    t = fetch_1_0(n_9, t);
                  }
              }
              t = w_53;
              t = default_system_usage_0_0(t);
              t = term_c_32;
              l_18 = t;
              t = SSL_exit(l_18);
              LocalPopChoice(n_39);
            }
          else
            {
              t = i_39;
              {
                ATerm w_18 = NULL,a_19 = NULL,c_19 = NULL;
                t = term_k_11;
                a_19 = t;
                t = term_s_37;
                c_19 = t;
                t = term_t_39;
                t = s_8(a_19, c_19, t);
                t = w_53;
                t = default_system_about_0_0(t);
                t = term_c_32;
                w_18 = t;
                t = SSL_exit(w_18);
              }
            }
        }
        LocalPopChoice(h_39);
      }
    else
      {
        t = b_39;
        {
          ATerm u_39 = t;
          int v_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_53 = NULL,y_53 = NULL,z_53 = NULL;
              static ATerm o_9 (ATerm t);
              static ATerm o_9 (ATerm t)
              {
                ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,n_10 = NULL;
                d_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_54);
                b_54 = t;
                t = c_54;
                if(((o_52 != NULL) && (o_52 != t)))
                  _fail(t);
                else
                  o_52 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_54);
                n_10 = t;
                t = SSLsetAnnotations(n_10, b_54);
                return(t);
              }
              t = fetch_1_0(o_9, t);
              t = term_l_20;
              y_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_52)), term_w_39);
              z_53 = t;
              t = SSL_printnl(y_53, z_53);
              t = (ATerm) ATmakeAppl(sym__2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_52)), term_w_39));
              t = default_system_usage_0_0(t);
              t = term_b_12;
              x_53 = t;
              t = SSL_exit(x_53);
              LocalPopChoice(v_39);
            }
          else
            {
              t = u_39;
            }
        }
      }
  }
  p_52 = t;
  t = term_v_32;
  t = table_destroy_0_0(t);
  t = p_52;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,m_54 = NULL,n_54 = NULL;
  t = parse_options_1_0(y_108, t);
  i_54 = t;
  t = term_x_39;
  t = table_create_0_0(t);
  t = term_x_39;
  j_54 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_39, term_y_39, i_54);
  t = lookup_table_0_1(j_54, t);
  n_54 = t;
  t = term_y_39;
  k_54 = t;
  t = n_54;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_8(k_54, i_54, m_54, t);
  t = i_54;
  t = a_109(t);
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_108, t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        {
          ATerm g_40 = t;
          int j_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_40);
            }
          else
            {
              t = g_40;
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
