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
ATerm term_x_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_b_37;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_n_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_n_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_e_34;
ATerm term_z_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_q_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_d_32;
ATerm term_y_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_p_30;
ATerm term_k_30;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_t_28;
ATerm term_e_28;
ATerm term_c_28;
ATerm term_v_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_a_27;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_u_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_s_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_x_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_m_11);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_x_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_b_12, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_m_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_s_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_a_15, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_g_15, term_h_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_p_15, term_q_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_a_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_h_16, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_i_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_t_17, term_u_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_c_18, term_d_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_l_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_s_18, term_t_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_g_19, term_h_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_s_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_w_23);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_c_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_m_23, term_n_23);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_t_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Abox-2-text", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_s_25);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_u_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_30);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_n_26);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_p_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_l_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_n_31);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_n_26);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_b_35, term_n_26);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_n_26);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym__3, term_m_31, term_n_31, (ATerm) ATempty);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_y_34);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_r_38, term_n_26);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_l_11, term_q_26);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_8 (ATerm e_20, ATerm j_222, ATerm t);
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm d_8 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
static ATerm h_7 (ATerm m_34, ATerm n_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm pass_width_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_7 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm j_7 (ATerm u_82 (ATerm), ATerm w_190, ATerm k_18, ATerm t);
static ATerm n_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t);
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t);
static ATerm m_7 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose4_1_0 (ATerm a_116 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_116 (ATerm), ATerm t);
static ATerm o_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm p_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm q_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm r_7 (ATerm e_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm j_17 (ATerm c_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_7 (ATerm g_18, ATerm t);
static ATerm t_7 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_20 (ATerm e_18, ATerm t);
static ATerm s_20 (ATerm n_18, ATerm p_18, ATerm q_18, ATerm t);
static ATerm w_20 (ATerm d_19, ATerm e_19, ATerm f_19, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm g_26 (ATerm i_25, ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm g_105 (ATerm), ATerm t);
static ATerm v_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm b_8 (ATerm y_32, ATerm z_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t);
ATerm if_verbose5_1_0 (ATerm b_116 (ATerm), ATerm t);
ATerm if_verbose2_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm c_8 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm ast2text_0_0 (ATerm t);
static ATerm k_8 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm e_8 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm p_104 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_8 (ATerm p_53, ATerm q_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_40 (ATerm a_40, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_7 (ATerm v_53, ATerm u_53, ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
static ATerm l_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm abox2text_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_8 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t);
static ATerm o_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm p_8 (ATerm e_53, ATerm f_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm h_8 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm i_8 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm l_108 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm parse_options_1_0 (ATerm k_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_2 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = m_1;
        t = p_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, n_1, e_0);
        t = d_8(n_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(x_9);
      }
    else
      {
        t = p_2;
        {
          ATerm z_9 = t;
          int b_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = m_1;
              t = p_0(t);
              z_0 = t;
              {
                ATerm e_10 = t;
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
                            if((n_1 != t))
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
                    t = e_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_1, z_0);
              t = d_8(n_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(b_10);
            }
          else
            {
              t = z_9;
              t = m_1;
              t = p_0(t);
              if((n_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_2;
    }
  else
    {
      t = l_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_8 (ATerm e_20, ATerm j_222, ATerm t)
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
  t = j_222;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,f_3 = NULL,v_0 = NULL,u_0 = NULL;
    f_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_2 = ATgetFirst((ATermList) t);
        z_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_3);
    w_2 = t;
    t = x_2;
    t = y_87(t);
    a_3 = t;
    t = (ATerm) ATinsert(CheckATermList(z_2), a_3);
    u_0 = t;
    t = SSLsetAnnotations(u_0, w_2);
    b_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_2 = ATgetFirst((ATermList) t);
        v_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(b_3);
    t_2 = t;
    t = v_2;
    if(((r_2 != NULL) && (r_2 != t)))
      _fail(t);
    else
      r_2 = t;
    t = (ATerm) ATinsert(CheckATermList(v_2), u_2);
    v_0 = t;
    t = SSLsetAnnotations(v_0, t_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, not_null(r_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,v_3 = NULL;
  ATerm f_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_97, t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = f_10;
      {
        ATerm n_3 = NULL;
        n_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      v_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3;
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
              ATerm j_10 = ATgetFirst((ATermList) t);
              ATerm l_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_3;
          t = list_tokenize_1_0(d_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm n_10 = ATgetFirst((ATermList) t);
          ATerm p_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_3);
        }
      else
        {
          ATerm g_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm q_10 = ATgetFirst((ATermList) t);
              ATerm r_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_3;
          t = list_tokenize_1_0(d_97, t);
          g_4 = t;
          t = (ATerm) ATinsert(CheckATermList(g_4), q_3);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  t = SSL_implode_string(x_4);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,l_4 = NULL,n_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,a_1 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      n_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_4);
  l_4 = t;
  t = SSL_explode_string(r_4);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, t_4);
  a_1 = t;
  t = SSLsetAnnotations(a_1, l_4);
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm w_4 = NULL;
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_4, i_4);
      t = a_8(w_4, i_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm m_5 = NULL;
  m_5 = t;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL;
        t = SSL_filemode(m_5);
        if(match_cons(t, sym__2))
          {
            k_1 = ATgetArgument(t, 0);
            {
              ATerm v_10 = ATgetArgument(t, 1);
              if(((ATgetType(v_10) != AT_INT) || (ATgetInt((ATermInt) v_10) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_1;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm u_1 = NULL,v_1 = NULL;
          t = term_x_10;
          v_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_10, m_5);
          t = b_8(v_1, m_5, t);
          u_1 = t;
          t = SSL_perror(u_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm d_8 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm s_5 = NULL,x_5 = NULL;
  x_5 = t;
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_5 = NULL,z_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_b_11);
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_b_11));
        t = c_8(v_14, z_5, t);
        t = filemode_0_0(t);
        y_5 = t;
        t = SSL_S_ISDIR(y_5);
        t = x_5;
        LocalPopChoice(z_10);
        {
          ATerm a_6 = NULL,b_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_c_11), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          a_6 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_6), term_f_11), v_14);
          b_6 = t;
          t = SSL_concat_strings(b_6);
        }
      }
    else
      {
        t = y_10;
        t = v_14;
      }
  }
  s_5 = t;
  t = SSL_copy(w_14, s_5);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm g_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_6 = NULL,t_6 = NULL;
      t = term_l_11;
      p_6 = t;
      t = term_m_11;
      t_6 = t;
      t = term_n_11;
      t = k_8(p_6, t_6, t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = g_11;
      t = term_o_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_1 = NULL,z_1 = NULL;
      t = term_m_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_2 = NULL,b_2 = NULL;
            t = term_l_11;
            a_2 = t;
            t = term_m_11;
            b_2 = t;
            t = term_n_11;
            t = k_8(a_2, b_2, t);
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = term_o_11;
          }
      }
      y_1 = t;
      t = term_s_11;
      z_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_11, y_1);
      t = d_8(z_1, y_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_6;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
static ATerm h_7 (ATerm m_34, ATerm n_34, ATerm t)
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
  ATerm y_6 = NULL,z_6 = NULL,c_7 = NULL,w_7 = NULL;
  t = term_x_11;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_7 = NULL,g_8 = NULL;
        t = term_l_11;
        z_7 = t;
        t = term_x_11;
        g_8 = t;
        t = term_a_12;
        t = k_8(z_7, g_8, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = term_b_12;
      }
  }
  z_6 = t;
  t = term_b_12;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_6, term_b_12);
  t = h_7(z_6, w_7, t);
  c_7 = t;
  t = SSL_int_to_string(c_7);
  y_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_6), term_x_11);
  return(t);
}
ATerm pass_width_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 = NULL,m_8 = NULL;
      t = term_l_11;
      j_8 = t;
      t = term_e_12;
      m_8 = t;
      t = term_f_12;
      t = k_8(j_8, m_8, t);
      LocalPopChoice(d_12);
      {
        ATerm q_8 = NULL;
        q_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_8), term_e_12);
      }
    }
  else
    {
      t = c_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm b_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_11);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_8, (ATerm) ATinsert(ATempty, term_b_11));
      t = c_8(x_8, b_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_7 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
static ATerm j_7 (ATerm u_82 (ATerm), ATerm w_190, ATerm k_18, ATerm t)
{
  ATerm d_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_190, term_g_12);
  t = u_7(t);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_9, k_18);
  t = u_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm n_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(match_cons(i_12, sym_Stream_1))
        {
          n_9 = ATgetArgument(i_12, 0);
        }
      else
        _fail(t);
      q_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(n_9, q_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,m_9 = NULL;
  m_9 = t;
  t = xtc_new_file_0_0(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, m_9);
  t = j_7(n_0, f_9, m_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
  t = xtc_transform_file_2_0(c_104, d_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_10 = NULL,a_11 = NULL,d_11 = NULL,e_11 = NULL;
  w_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      a_11 = ATgetArgument(t, 0);
      {
        ATerm h_2 = NULL,i_2 = NULL;
        t = SSL_int_to_string(a_11);
        h_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_12), h_2), term_l_12);
        i_2 = t;
        t = SSL_concat_strings(i_2);
      }
    }
  else
    {
      ATerm k_3 = NULL,l_3 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          a_11 = ATgetArgument(t, 0);
          d_11 = ATgetArgument(t, 1);
          e_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(d_11);
      k_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_11), term_s_12), k_3), term_q_12), a_11);
      l_3 = t;
      t = SSL_concat_strings(l_3);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm h_11 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    t = x_87(t);
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    return(t);
  }
  t = fetch_1_0(s_0, t);
  t = not_null(h_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm i_11 = NULL;
  i_11 = t;
  {
    ATerm t_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm x_12 = ATgetArgument(t, 0);
              if((i_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm c_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_19), term_t_19), term_p_19), term_l_19), term_a_19), term_u_18), term_m_18), term_h_18), term_v_17), term_k_17), term_d_17), term_x_16), term_t_16), term_o_16), term_k_16), term_d_16), term_x_15), term_s_15), term_i_15), term_d_15), term_u_14), term_p_14), term_i_14), term_e_14), term_z_13), term_u_13), term_o_13), term_i_13);
        t = fetch_elem_1_0(t_0, t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, i_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_11 = NULL,w_11 = NULL;
  p_11 = t;
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            w_11 = ATgetArgument(t, 1);
            {
              ATerm b_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_19);
        {
          ATerm c_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_4 = NULL,h_4 = NULL,k_4 = NULL;
              t = w_11;
              {
                ATerm g_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              b_4 = t;
              t = term_h_20;
              h_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_i_20);
              k_4 = t;
              t = SSL_printnl(h_4, k_4);
              t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, b_4), term_i_20));
              LocalPopChoice(f_20);
            }
          else
            {
              t = c_20;
              t = p_11;
            }
        }
      }
    else
      {
        t = y_19;
        t = p_11;
      }
  }
  t = p_11;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  k_12 = t;
  t = fork_0_0(t);
  j_12 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_12;
        t = h_81(t);
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = SSL_waitpid(j_12);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_20 = ATgetArgument(t, 0);
            if(((ATgetType(o_20) != AT_INT) || (ATgetInt((ATermInt) o_20) != 0)))
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
        t = k_12;
      }
  }
  return(t);
}
static ATerm m_7 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  static ATerm w_0 (ATerm t);
  static ATerm w_0 (ATerm t)
  {
    ATerm r_12 = NULL,u_12 = NULL;
    r_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_12), r_12);
    t = k_8(not_null(m_12), r_12, t);
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_12, u_12);
    return(t);
  }
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  t = lookup_table_0_1(m_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(n_12, t);
  t = map_1_0(w_0, t);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_116 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL,z_12 = NULL,d_13 = NULL;
        t = term_l_11;
        z_12 = t;
        t = term_x_11;
        d_13 = t;
        t = term_a_12;
        t = k_8(z_12, d_13, t);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_12, term_u_15);
        t = geq_0_0(t);
        t = w_12;
        t = a_116(t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_116 (ATerm), ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm v_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_13 = NULL,r_13 = NULL,t_13 = NULL;
        t = term_l_11;
        r_13 = t;
        t = term_x_11;
        t_13 = t;
        t = term_a_12;
        t = k_8(r_13, t_13, t);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_13, term_x_13);
        t = geq_0_0(t);
        t = l_13;
        t = c_116(t);
        LocalPopChoice(x_20);
      }
    else
      {
        t = v_20;
        t = l_13;
      }
  }
  return(t);
}
static ATerm o_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = a_92(t);
  {
    static ATerm x_0 (ATerm t);
    static ATerm x_0 (ATerm t)
    {
      ATerm v_13 = NULL;
      v_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, v_13);
      t = z_91(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
  }
  t = o_25;
  return(t);
}
static ATerm p_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm f_15 (ATerm t);
  static ATerm f_15 (ATerm t)
  {
    ATerm t_14 = NULL,y_14 = NULL,z_14 = NULL;
    t_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_14 = ATgetFirst((ATermList) t);
            z_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_14;
              {
                static ATerm y_0 (ATerm t);
                static ATerm y_0 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = o_7(w_91, y_0, y_14, z_14, t);
              }
              t = f_15(t);
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              {
                ATerm s_4 = NULL,z_4 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(t_14);
                s_4 = t;
                t = z_14;
                t = f_15(t);
                z_4 = t;
                t = (ATerm) ATinsert(CheckATermList(z_4), y_14);
                g_1 = t;
                t = SSLsetAnnotations(g_1, s_4);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = f_15(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_15 = ATgetArgument(t, 0);
      if((z_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL,o_15 = NULL;
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            ATerm g_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = k_8(g_49, h_49, t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATempty;
      }
  }
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, i_49);
  t = p_7(c_1, l_15, i_49, t);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, k_15);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(h_49, k_15, o_15, t);
  t = j_15;
  return(t);
}
static ATerm r_7 (ATerm e_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm b_16 = NULL,f_16 = NULL;
    if(match_cons(t, sym__2))
      {
        b_16 = ATgetArgument(t, 0);
        f_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, b_16, f_16);
    t = e_102(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm j_17 (ATerm c_17, ATerm t)
{
  t = SSL_fclose(c_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  h_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_17 = ATgetArgument(t, 0);
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_17);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = j_17(h_17, t);
          }
      }
    }
  else
    {
      t = j_17(h_17, t);
    }
  return(t);
}
static ATerm s_7 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm t_7 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm m_17 = NULL;
  t = SSL_fopen(n_55, o_55);
  m_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_17 = NULL;
  t = SSL_stdin_stream();
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_17 = NULL;
  t = SSL_stdout_stream();
  o_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  t = SSL_stderr_stream();
  q_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_17);
  return(t);
}
static ATerm p_20 (ATerm e_18, ATerm t)
{
  ATerm f_18 = NULL;
  t = SSL_explode_term(e_18);
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            f_18 = ATgetFirst((ATermList) l_21);
            {
              ATerm m_21 = (ATerm) ATgetNext((ATermList) l_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_20 (ATerm n_18, ATerm p_18, ATerm q_18, ATerm t)
{
  ATerm r_18 = NULL,w_18 = NULL,y_18 = NULL,b_19 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(q_18);
  y_18 = t;
  t = n_18;
  if(match_cons(t, sym_Path_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_19, p_18);
  i_1 = t;
  t = SSLsetAnnotations(i_1, y_18);
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(r_18, w_18, t);
  return(t);
}
static ATerm w_20 (ATerm d_19, ATerm e_19, ATerm f_19, ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,d_20 = NULL,l_1 = NULL;
  t = SSLgetAnnotations(f_19);
  k_19 = t;
  t = SSL_is_string(d_19);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_20, e_19);
  l_1 = t;
  t = SSLsetAnnotations(l_1, k_19);
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(i_19, j_19, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      l_20 = ATgetArgument(t, 1);
      {
        ATerm o_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_20(j_20, t);
            LocalPopChoice(t_21);
          }
        else
          {
            t = o_21;
            {
              ATerm y_21 = t;
              int d_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_20(k_20, l_20, j_20, t);
                  LocalPopChoice(d_22);
                }
              else
                {
                  t = y_21;
                  t = w_20(k_20, l_20, j_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_20(j_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,j_21 = NULL;
  j_21 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_21, term_g_22);
        t = u_7(t);
        LocalPopChoice(f_22);
      }
    else
      {
        t = e_22;
        {
          ATerm d_6 = NULL,e_6 = NULL;
          t = term_j_22;
          e_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_22, j_21);
          t = b_8(e_6, j_21, t);
          d_6 = t;
          t = SSL_perror(d_6);
          _fail(t);
        }
      }
  }
  b_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(c_21, t);
  a_21 = t;
  t = b_21;
  t = fclose_0_0(t);
  t = a_21;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_k_22;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_21 = NULL,p_21 = NULL;
      n_21 = t;
      t = (ATerm) ATinsert(ATempty, term_s_22);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_21, (ATerm) ATinsert(ATempty, term_s_22));
      t = c_8(n_21, p_21, t);
      LocalPopChoice(q_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_22;
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_23 = t;
            if((PushChoice() == 0))
              {
                ATerm q_21 = NULL,r_21 = NULL;
                q_21 = t;
                t = (ATerm) ATinsert(ATempty, term_b_11);
                r_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_21, (ATerm) ATinsert(ATempty, term_b_11));
                t = c_8(q_21, r_21, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_23;
              }
            t = debug_1_0(e_1, t);
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = debug_1_0(f_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_e_23;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = debug_1_0(p_1, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  u_22 = t;
  t = term_h_20;
  v_22 = t;
  t = (ATerm) ATinsert(ATempty, term_j_23);
  w_22 = t;
  t = SSL_printnl(v_22, w_22);
  t = u_22;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(match_cons(t, sym__3))
    {
      x_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
      b_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_7(x_22, a_23, b_23, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm c_23 = NULL,g_23 = NULL,h_23 = NULL;
  c_23 = t;
  t = term_h_20;
  g_23 = t;
  t = (ATerm) ATinsert(ATempty, term_k_23);
  h_23 = t;
  t = SSL_printnl(g_23, h_23);
  t = c_23;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm i_23 = NULL,r_23 = NULL,s_23 = NULL;
  i_23 = t;
  t = term_h_20;
  r_23 = t;
  t = (ATerm) ATinsert(ATempty, term_j_23);
  s_23 = t;
  t = SSL_printnl(r_23, s_23);
  t = i_23;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm s_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,h_22 = NULL,i_22 = NULL,m_22 = NULL,o_22 = NULL,p_22 = NULL;
  s_21 = t;
  t = if_verbose5_1_0(h_1, t);
  {
    ATerm l_23 = t;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL,t_22 = NULL;
        t = term_m_23;
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, s_21);
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_23, (ATerm) ATmakeAppl(sym_Imported_1, s_21));
        t = k_8(r_22, t_22, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_23;
      }
  }
  v_21 = t;
  t = term_m_23;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_23, term_n_23, (ATerm) ATinsert(ATempty, s_21));
  t = lookup_table_0_1(h_22, t);
  p_22 = t;
  t = term_n_23;
  i_22 = t;
  t = (ATerm) ATinsert(ATempty, s_21);
  m_22 = t;
  t = p_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(i_22, m_22, o_22, t);
  t = v_21;
  t = if_verbose4_1_0(o_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_1, t);
  u_21 = t;
  t = term_m_23;
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, u_21);
  t = r_7(r_1, c_22, u_21, t);
  t = if_verbose6_1_0(s_1, t);
  t = term_m_23;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_23, (ATerm)ATmakeAppl(sym_Imported_1, s_21), (ATerm) ATempty);
  t = lookup_table_0_1(w_21, t);
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, s_21);
  x_21 = t;
  t = (ATerm) ATempty;
  z_21 = t;
  t = b_22;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(x_21, z_21, a_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_23, (ATerm)ATmakeAppl(sym_Imported_1, s_21), (ATerm) ATempty);
  t = if_verbose4_1_0(t_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,j_24 = NULL,l_24 = NULL;
  h_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_24;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_24 = ATgetFirst((ATermList) t);
          l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_6 = NULL,v_6 = NULL,x_6 = NULL,c_5 = NULL;
            t = SSLgetAnnotations(h_24);
            r_6 = t;
            t = j_24;
            t = d_96(t);
            v_6 = t;
            t = l_24;
            t = filter_1_0(d_96, t);
            x_6 = t;
            t = (ATerm) ATinsert(CheckATermList(x_6), v_6);
            c_5 = t;
            t = SSLsetAnnotations(c_5, r_6);
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = l_24;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  static ATerm o_24 (ATerm t);
  static ATerm o_24 (ATerm t)
  {
    ATerm q_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = o_24(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = q_23;
        t = q_85(t);
      }
    return(t);
  }
  t = o_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL,s_24 = NULL;
      t = term_l_11;
      p_24 = t;
      t = term_w_23;
      s_24 = t;
      t = term_x_23;
      t = k_8(p_24, s_24, t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_24 = NULL;
            t = term_a_24;
            t_24 = t;
            t = SSL_getenv(t_24);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = GetInternalDefaultXtcRepository_0_0(t);
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
  t = term_b_24;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  t = term_m_23;
  c_25 = t;
  t = term_c_24;
  d_25 = t;
  t = term_d_24;
  t = k_8(c_25, d_25, t);
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
static ATerm d_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_f_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_24 = NULL;
  t = if_verbose5_1_0(w_1, t);
  v_24 = t;
  {
    ATerm g_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_24 = NULL,y_24 = NULL;
        t = term_m_23;
        x_24 = t;
        t = term_n_23;
        y_24 = t;
        t = term_k_24;
        t = k_8(x_24, y_24, t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = g_24;
        {
          ATerm b_25 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_25 = t;
          t = repeat_2_0(c_2, _id, t);
          t = b_25;
        }
      }
  }
  t = v_24;
  t = if_verbose5_1_0(d_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm g_26 (ATerm i_25, ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,r_25 = NULL;
  t = term_m_23;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_25);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_23, (ATerm) ATmakeAppl(sym_Tool_1, i_25));
  t = k_8(n_25, r_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_24 = ATgetFirst((ATermList) t);
      if(match_cons(n_24, sym__2))
        {
          ATerm r_24 = ATgetArgument(n_24, 0);
          m_25 = ATgetArgument(n_24, 1);
        }
      else
        _fail(t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_25;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_m_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(q_2, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm w_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
      t = if_verbose5_1_0(f_2, t);
      t = xtc_load_0_0(t);
      v_25 = t;
      if(match_cons(t, sym__2))
        {
          t_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
          {
            ATerm a_25 = t;
            int e_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
                t = term_m_23;
                z_25 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_25);
                a_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_23, (ATerm) ATmakeAppl(sym_Tool_1, t_25));
                t = k_8(z_25, a_26, t);
                {
                  static ATerm j_2 (ATerm t);
                  static ATerm j_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_25 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(j_2, t);
                }
                t = not_null(y_25);
                LocalPopChoice(e_25);
              }
            else
              {
                t = a_25;
                t = g_26(v_25, t);
              }
          }
        }
      else
        {
          t = g_26(v_25, t);
        }
      t = if_verbose5_1_0(m_2, t);
      LocalPopChoice(z_24);
    }
  else
    {
      t = w_24;
      {
        ATerm f_26 = NULL,l_7 = NULL,n_7 = NULL;
        f_26 = t;
        t = term_h_20;
        l_7 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), f_26), term_f_25);
        n_7 = t;
        t = SSL_printnl(l_7, n_7);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), f_26), term_f_25);
        t = if_verbose5_1_0(o_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL;
  j_26 = t;
  t = g_105(t);
  t = xtc_find_0_0(t);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
  {
    static ATerm y_2 (ATerm t);
    static ATerm y_2 (ATerm t)
    {
      ATerm k_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, i_26, j_26);
      t = k_7(i_26, j_26, t);
      t = term_h_25;
      k_26 = t;
      t = SSL_exit(k_26);
      return(t);
    }
    t = fork_and_wait_1_0(y_2, t);
  }
  t = j_26;
  return(t);
}
static ATerm v_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL,o_26 = NULL,p_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL;
  p_26 = t;
  t = j_98(t);
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_26, u_35, s_35);
  t = l_8(l_26, u_35, s_35, t);
  {
    ATerm j_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        t = term_s_25;
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_26, term_s_25);
        t = k_8(l_26, x_26, t);
        {
          ATerm w_25 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_25;
            }
        }
        LocalPopChoice(q_25);
      }
    else
      {
        t = j_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_26 = ATgetFirst((ATermList) t);
      o_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_26, term_s_25, (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATinsert(CheckATermList(m_26), u_35)));
  t = lookup_table_0_1(l_26, t);
  w_26 = t;
  t = term_s_25;
  r_26 = t;
  t = (ATerm) ATinsert(CheckATermList(o_26), (ATerm) ATinsert(CheckATermList(m_26), u_35));
  s_26 = t;
  t = w_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(r_26, s_26, t_26, t);
  t = p_26;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  ATerm x_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_27 = NULL,t_8 = NULL;
      i_27 = t;
      t = term_c_26;
      t_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_27, term_c_26);
      t = b_8(i_27, t_8, t);
      b_27 = t;
      t = SSL_mkstemp(b_27);
      LocalPopChoice(b_26);
    }
  else
    {
      t = x_25;
      {
        ATerm j_27 = NULL;
        t = term_d_26;
        j_27 = t;
        t = SSL_perror(j_27);
        _fail(t);
      }
    }
  return(t);
}
static ATerm b_8 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,s_27 = NULL,w_27 = NULL;
  t = P__tmpdir_0_0(t);
  s_27 = t;
  t = term_h_26;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, term_h_26);
  t = b_8(s_27, w_27, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_26;
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, term_n_26);
  t = v_7(c_3, o_27, p_27, t);
  t = SSL_close(n_27);
  t = o_27;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  z_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_28 = NULL,d_28 = NULL;
      t = z_27;
      t = xtc_new_file_0_0(t);
      b_28 = t;
      t = r_0(t);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_28, (ATerm) ATinsert(ATinsert(ATempty, b_28), term_m_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_28);
    }
  else
    {
      ATerm g_28 = NULL,h_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_28;
      t = xtc_new_file_0_0(t);
      g_28 = t;
      t = r_0(t);
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_28), term_m_11), a_28), term_q_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_28);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,m_28 = NULL,q_28 = NULL;
  i_28 = t;
  t = s_82(t);
  j_28 = t;
  t = term_h_20;
  m_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_28), j_28);
  q_28 = t;
  t = SSL_printnl(m_28, q_28);
  t = i_28;
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_116 (ATerm), ATerm t)
{
  ATerm s_28 = NULL;
  s_28 = t;
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
        t = term_l_11;
        v_28 = t;
        t = term_x_11;
        w_28 = t;
        t = term_a_12;
        t = k_8(v_28, w_28, t);
        u_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, term_g_19);
        t = geq_0_0(t);
        t = s_28;
        t = b_116(t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = s_28;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
        t = term_l_11;
        e_29 = t;
        t = term_x_11;
        f_29 = t;
        t = term_a_12;
        t = k_8(e_29, f_29, t);
        d_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_29, term_k_13);
        t = geq_0_0(t);
        t = a_29;
        t = y_115(t);
        LocalPopChoice(z_26);
      }
    else
      {
        t = y_26;
        t = a_29;
      }
  }
  return(t);
}
static ATerm c_8 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,r_29 = NULL,s_29 = NULL,e_5 = NULL;
  i_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_27), term_c_27), i_29);
  n_29 = t;
  t = SSL_concat_strings(n_29);
  m_29 = t;
  t = (ATerm) ATinsert(ATempty, term_b_11);
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_29, (ATerm) ATinsert(ATempty, term_b_11));
  t = c_8(m_29, l_29, t);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_29, i_29);
  s_29 = t;
  if(match_cons(t, sym__2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      ATerm f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_29);
  o_29 = t;
  t = SSL_modification_time(h_29);
  p_29 = t;
  t = SSL_modification_time(i_29);
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_29, r_29);
  e_5 = t;
  t = SSLsetAnnotations(e_5, o_29);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_29, i_29);
  k_29 = t;
  t = SSL_explode_term(k_29);
  if(match_cons(t, sym__2))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_27 = ATgetArgument(t, 1);
        if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
          {
            j_29 = ATgetFirst((ATermList) h_27);
            {
              ATerm k_27 = (ATerm) ATgetNext((ATermList) h_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_29;
  t = if_verbose2_1_0(d_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  static ATerm q_30 (ATerm t);
  static ATerm q_30 (ATerm t)
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_88(t);
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,e_9 = NULL,i_9 = NULL,h_5 = NULL;
          l_30 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_30 = ATgetFirst((ATermList) t);
              n_30 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_30);
          e_9 = t;
          t = n_30;
          t = q_30(t);
          i_9 = t;
          t = (ATerm) ATinsert(CheckATermList(i_9), m_30);
          h_5 = t;
          t = SSLsetAnnotations(h_5, e_9);
        }
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_q_27;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_r_27;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_9 = NULL,r_9 = NULL,s_9 = NULL;
      r_9 = t;
      t = term_v_27;
      s_9 = t;
      t = SSL_explode_string(s_9);
      p_9 = t;
      t = SSL_explode_string(r_9);
      {
        static ATerm g_3 (ATerm t);
        static ATerm g_3 (ATerm t)
        {
          if((p_9 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(g_3, t);
      }
      t = r_9;
      LocalPopChoice(u_27);
    }
  else
    {
      t = t_27;
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
            v_9 = t;
            t = term_c_28;
            w_9 = t;
            t = SSL_explode_string(w_9);
            u_9 = t;
            t = SSL_explode_string(v_9);
            {
              static ATerm h_3 (ATerm t);
              static ATerm h_3 (ATerm t)
              {
                if((u_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(h_3, t);
            }
            t = v_9;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL;
              w_30 = t;
              t = term_h_20;
              y_30 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, w_30), term_e_28);
              z_30 = t;
              t = SSL_printnl(y_30, z_30);
              t = term_b_12;
              x_30 = t;
              t = SSL_exit(x_30);
              t = (ATerm) ATinsert(ATinsert(ATempty, w_30), term_e_28);
            }
          }
      }
      {
        ATerm f_28 = t;
        int k_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(k_28);
          }
        else
          {
            t = f_28;
            {
              ATerm h_31 = NULL,c_10 = NULL;
              h_31 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_31);
              {
                ATerm l_28 = t;
                int n_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_10 = NULL,k_10 = NULL,k_5 = NULL;
                    k_10 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm o_28 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_10);
                    g_10 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_31);
                    k_5 = t;
                    t = SSLsetAnnotations(k_5, g_10);
                    LocalPopChoice(n_28);
                    t = xtc_transform_file_2_0(i_3, j_3, t);
                  }
                else
                  {
                    t = l_28;
                    t = xtc_transform_term_2_0(m_3, o_3, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  c_10 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_10;
              t = if_verbose2_1_0(p_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm p_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_31 = NULL,s_31 = NULL;
      t = term_l_11;
      r_31 = t;
      t = term_t_28;
      s_31 = t;
      t = term_x_28;
      t = k_8(r_31, s_31, t);
      LocalPopChoice(r_28);
    }
  else
    {
      t = p_28;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm t_31 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_31), term_t_28);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(s_3, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(t_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_b_29;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm a_33 = NULL,d_33 = NULL;
  t = term_n_26;
  t = pass_width_0_0(t);
  a_33 = t;
  t = term_n_26;
  t = pass_verbose_0_0(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_33, d_33);
  t = conc_0_0(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_n_26;
  t = pass_width_0_0(t);
  f_33 = t;
  t = term_n_26;
  t = pass_verbose_0_0(t);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  t = conc_0_0(t);
  return(t);
}
ATerm ast2text_0_0 (ATerm t)
{
  ATerm c_29 = t;
  int g_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_32 = NULL,m_32 = NULL;
      m_32 = t;
      if(match_cons(t, sym_FILE_1))
        {
          h_32 = ATgetArgument(t, 0);
          {
            ATerm s_10 = NULL,n_5 = NULL;
            t = SSLgetAnnotations(m_32);
            s_10 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, h_32);
            n_5 = t;
            t = SSLsetAnnotations(n_5, s_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_32;
        }
      LocalPopChoice(g_29);
      t = xtc_transform_file_2_0(w_3, create_pp_table_args_0_0, t);
    }
  else
    {
      t = c_29;
      t = xtc_transform_term_2_0(x_3, create_pp_table_args_0_0, t);
    }
  {
    ATerm q_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_32 = NULL,x_32 = NULL;
        x_32 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_32 = ATgetArgument(t, 0);
            {
              ATerm j_11 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(x_32);
              j_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_32);
              p_5 = t;
              t = SSLsetAnnotations(p_5, j_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = x_32;
          }
        LocalPopChoice(t_29);
        t = xtc_transform_file_2_0(y_3, z_3, t);
      }
    else
      {
        t = q_29;
        t = xtc_transform_term_2_0(a_4, c_4, t);
      }
  }
  return(t);
}
static ATerm k_8 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm o_33 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_8(d_50, o_33, t);
  return(t);
}
static ATerm e_8 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm r_33 = NULL,u_33 = NULL;
  u_33 = t;
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = k_8(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_29 = ATgetFirst((ATermList) t);
            r_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_29);
        {
          ATerm w_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, r_33);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_8(p_48, r_33, w_33, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, r_33);
        }
      }
    else
      {
        t = u_29;
        {
          ATerm y_33 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_33 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(p_48, y_33, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = u_33;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  d_34 = t;
  t = g_98(t);
  c_34 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        t = term_s_25;
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_34, term_s_25);
        t = k_8(c_34, o_34, t);
        {
          ATerm z_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_29;
            }
        }
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_34 = ATgetFirst((ATermList) t);
      a_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_34, term_s_25, a_34);
  t = lookup_table_0_1(c_34, t);
  k_34 = t;
  t = term_s_25;
  i_34 = t;
  t = k_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(i_34, a_34, j_34, t);
  t = b_34;
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm p_34 = NULL;
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_34, p_34);
      t = e_8(c_34, p_34, t);
      return(t);
    }
    t = map_1_0(d_4, t);
  }
  t = d_34;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_101(t);
      t = a_102(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      t = a_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,w_34 = NULL,x_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  u_34 = t;
  t = f_98(t);
  t_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_34, term_s_25);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_30 = ATgetArgument(t, 0);
            ATerm f_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_25;
        j_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_34, term_s_25);
        t = k_8(t_34, j_35, t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATempty;
      }
  }
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_34, term_s_25, (ATerm) ATinsert(CheckATermList(w_34), (ATerm) ATempty));
  t = lookup_table_0_1(t_34, t);
  f_35 = t;
  t = term_s_25;
  x_34 = t;
  t = (ATerm) ATinsert(CheckATermList(w_34), (ATerm) ATempty);
  d_35 = t;
  t = f_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(x_34, d_35, e_35, t);
  t = u_34;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(h_36);
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = h_36;
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_104 (ATerm), ATerm t)
{
  ATerm z_35 = NULL;
  static ATerm f_4 (ATerm t);
  static ATerm f_4 (ATerm t)
  {
    ATerm a_36 = NULL;
    a_36 = t;
    {
      ATerm i_30 = t;
      int j_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_36 = NULL,c_36 = NULL;
          t = term_e_26;
          b_36 = t;
          t = term_s_25;
          c_36 = t;
          t = term_k_30;
          t = k_8(b_36, c_36, t);
          LocalPopChoice(j_30);
        }
      else
        {
          t = i_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_35 != NULL) && (z_35 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_35 = ATgetFirst((ATermList) t);
        {
          ATerm o_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_35;
    t = map_1_0(m_4, t);
    t = a_36;
    t = end_scope_1_0(o_4, t);
    return(t);
  }
  t = begin_scope_1_0(e_4, t);
  t = restore_always_2_0(p_104, f_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,s_36 = NULL,t_36 = NULL;
  o_36 = t;
  t = term_n_26;
  t = whoami_0_0(t);
  p_36 = t;
  t = term_h_20;
  s_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_30), p_36), term_p_30);
  t_36 = t;
  t = SSL_printnl(s_36, t_36);
  t = term_b_12;
  q_36 = t;
  t = SSL_exit(q_36);
  t = o_36;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  if(match_string(t, "-k"))
    {
      t = x_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_36;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
  y_36 = t;
  t = SSL_string_to_int(y_36);
  z_36 = t;
  t = term_s_30;
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_30, z_36);
  t = n_8(a_37, z_36, t);
  t = y_36;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, v_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  if(match_string(t, "-S"))
    {
      t = c_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_37;
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL;
  t = term_x_11;
  d_37 = t;
  t = term_u_30;
  e_37 = t;
  t = term_v_30;
  t = n_8(d_37, e_37, t);
  t = term_a_31;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_b_31;
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
  ATerm f_37 = NULL,g_37 = NULL,i_37 = NULL;
  f_37 = t;
  t = SSL_string_to_int(f_37);
  g_37 = t;
  t = term_x_11;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, g_37);
  t = n_8(i_37, g_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_37);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_c_31;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL;
  t = term_d_31;
  k_37 = t;
  t = term_n_26;
  l_37 = t;
  t = term_e_31;
  t = n_8(k_37, l_37, t);
  t = term_f_31;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, a_5, b_5, t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, g_5, t);
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            t = Option_3_0(i_5, j_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm n_8 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  t = term_l_11;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, p_53, q_53);
  t = lookup_table_0_1(m_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(p_53, q_53, n_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      t = term_n_26;
      t = g_0(t);
      x_37 = t;
      t = term_m_31;
      y_37 = t;
      t = term_n_31;
      z_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_31, term_n_31, x_37);
      t = l_8(y_37, z_37, x_37, t);
      _fail(t);
    }
  else
    {
      ATerm c_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_37 = ATgetFirst((ATermList) t);
          u_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_37;
      t = d_0(t);
      t = term_n_26;
      t = f_0(t);
      c_38 = t;
      t = (ATerm) ATinsert(CheckATermList(u_37), c_38);
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  if(match_string(t, "-o"))
    {
      t = e_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_38;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  f_38 = t;
  t = term_m_11;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, f_38);
  t = n_8(g_38, f_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_38);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, q_5, r_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm i_38 = NULL;
  i_38 = t;
  if(match_string(t, "-i"))
    {
      t = i_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_38;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  j_38 = t;
  t = term_q_26;
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_26, j_38);
  t = n_8(k_38, j_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_38);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  static ATerm t_39 (ATerm t);
  static ATerm t_39 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
    s_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_39 = ATgetFirst((ATermList) t);
        r_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_12 = NULL,p_12 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(s_39);
          h_12 = t;
          t = r_39;
          t = t_39(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_12), q_39);
          h_6 = t;
          t = SSLsetAnnotations(h_6, h_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_39;
        t = c_88(t);
      }
    return(t);
  }
  t = t_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_38;
    }
  else
    {
      static ATerm w_5 (ATerm t);
      static ATerm w_5 (ATerm t)
      {
        t = not_null(p_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_38 = ATgetFirst((ATermList) t);
          if(((p_38 != NULL) && (p_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_38;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm j_40 (ATerm a_40, ATerm t)
{
  ATerm b_40 = NULL;
  t = SSL_explode_term(a_40);
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_40;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym__2))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
      {
        ATerm u_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_6 (ATerm t);
            static ATerm c_6 (ATerm t)
            {
              t = e_40;
              return(t);
            }
            t = d_40;
            t = at_end_1_0(c_6, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = u_31;
            t = j_40(f_40, t);
          }
      }
    }
  else
    {
      t = j_40(f_40, t);
    }
  return(t);
}
static ATerm x_7 (ATerm v_53, ATerm u_53, ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,o_40 = NULL,p_40 = NULL;
  t = v_53;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_40 = NULL;
        t = term_l_11;
        r_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_11, v_53);
        t = k_8(r_40, v_53, t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATempty;
      }
  }
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_53, l_40);
  t = conc_0_0(t);
  k_40 = t;
  t = term_l_11;
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, v_53, k_40);
  t = lookup_table_0_1(o_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(v_53, k_40, p_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_11, v_53, k_40);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  t = term_t_28;
  t_40 = t;
  t = (ATerm) ATinsert(ATempty, s_40);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_28, (ATerm) ATinsert(ATempty, s_40));
  t = x_7(t_40, u_40, t);
  t = s_40;
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, g_6, i_6, t);
  return(t);
}
static ATerm l_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm w_40 = NULL,z_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_32 = ATgetArgument(t, 0);
            ATerm c_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = k_8(j_48, k_48, t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = z_31;
        t = (ATerm) ATempty;
      }
  }
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(z_40), i_48));
  t = lookup_table_0_1(j_48, t);
  e_41 = t;
  t = (ATerm) ATinsert(CheckATermList(z_40), i_48);
  c_41 = t;
  t = e_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(k_48, c_41, d_41, t);
  t = w_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,s_41 = NULL,u_41 = NULL,v_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
      t = term_n_26;
      t = o_0(t);
      w_41 = t;
      t = term_m_31;
      x_41 = t;
      t = term_n_31;
      y_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_31, term_n_31, w_41);
      t = l_8(x_41, y_41, w_41, t);
      _fail(t);
    }
  else
    {
      ATerm d_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_41 = ATgetFirst((ATermList) t);
          s_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_41 = ATgetFirst((ATermList) t);
          v_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_41;
      t = l_0(t);
      t = u_41;
      t = m_0(t);
      d_42 = t;
      t = (ATerm) ATinsert(CheckATermList(v_41), d_42);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  if(match_string(t, "-w"))
    {
      t = l_42;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--width", 0, ATtrue)))
        _fail(t);
      t = l_42;
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  o_42 = t;
  t = term_e_12;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_12, o_42);
  t = n_8(p_42, o_42, t);
  t = o_42;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm abox2text_options_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm g_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_32);
          }
        else
          {
            t = g_32;
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = verbose_option_0_0(t);
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  {
                    ATerm l_32 = t;
                    int n_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = keep_option_0_0(t);
                        LocalPopChoice(n_32);
                      }
                    else
                      {
                        t = l_32;
                        t = ArgOption_3_0(j_6, m_6, n_6, t);
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
  ATerm s_42 = NULL,u_42 = NULL,v_42 = NULL,z_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_26;
  t = whoami_0_0(t);
  s_42 = t;
  t = term_h_20;
  v_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_32), s_42);
  z_42 = t;
  t = SSL_printnl(v_42, z_42);
  t = term_b_12;
  u_42 = t;
  t = SSL_exit(u_42);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_l_11;
  a_43 = t;
  t = term_p_32;
  b_43 = t;
  t = term_q_32;
  t = k_8(a_43, b_43, t);
  return(t);
}
static ATerm f_8 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
  f_43 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_43;
      t = z_94(t);
    }
  else
    {
      ATerm n_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_43 = ATgetFirst((ATermList) t);
          h_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_43;
      t = foldr_2_0(z_94, a_95, t);
      n_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_43, n_43);
      t = a_95(t);
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
  t = term_u_30;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8(g_13, h_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_43 = NULL,a_13 = NULL,b_13 = NULL;
  t = times_0_0(t);
  b_13 = t;
  t = SSL_explode_term(b_13);
  if(match_cons(t, sym__2))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_13;
  t = foldr_2_0(o_6, q_6, t);
  t_43 = t;
  t = SSL_TicksToSeconds(t_43);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL;
  e_44 = t;
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      g_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_44;
        if((f_44 != t))
          {
            _fail(t);
          }
        t = e_44;
        LocalPopChoice(w_32);
      }
    else
      {
        t = u_32;
        t = (ATerm) ATmakeAppl(sym__2, f_44, g_44);
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_44, g_44);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = SSL_gtr(f_44, g_44);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_44, g_44);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  {
    ATerm e_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
        t = term_l_11;
        n_44 = t;
        t = term_x_11;
        o_44 = t;
        t = term_a_12;
        t = k_8(n_44, o_44, t);
        m_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_44, term_b_12);
        t = geq_0_0(t);
        t = k_44;
        t = x_115(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = e_33;
        t = k_44;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,t_44 = NULL,u_44 = NULL;
  t = run_time_0_0(t);
  q_44 = t;
  t = term_n_26;
  t = whoami_0_0(t);
  r_44 = t;
  t = term_h_20;
  t_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), q_44), term_q_12), r_44);
  u_44 = t;
  t = SSL_printnl(t_44, u_44);
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), q_44), term_q_12), r_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_30;
  v_44 = t;
  t = SSL_exit(v_44);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  l_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_45 = ATgetArgument(t, 0);
          {
            ATerm a_14 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(l_45);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_45);
            k_6 = t;
            t = SSLsetAnnotations(k_6, a_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_44 = NULL,c_45 = NULL;
      t = term_l_11;
      y_44 = t;
      t = term_l_33;
      c_45 = t;
      t = term_m_33;
      t = k_8(y_44, c_45, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = fetch_1_0(u_6, t);
    }
  t = n_106(t);
  return(t);
}
static ATerm o_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm n_45 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  n_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_45);
  return(t);
}
static ATerm p_8 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm w_45 = NULL;
  t = table_hashtable_0_0(t);
  w_45 = t;
  {
    ATerm n_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL;
        t = w_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            l_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_8(v_49, l_14, t);
        LocalPopChoice(p_33);
      }
    else
      {
        t = n_33;
        {
          ATerm c_15 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = w_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_8(v_49, c_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm z_45 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,e_46 = NULL,f_46 = NULL;
  a_46 = t;
  t = term_q_33;
  e_46 = t;
  t = term_s_33;
  f_46 = t;
  t = a_46;
  t = new_hashtable_0_2(e_46, f_46, t);
  b_46 = t;
  t = a_46;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(a_46, b_46, c_46, t);
  t = a_46;
  return(t);
}
static ATerm h_8 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm g_46 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_46);
  return(t);
}
static ATerm i_8 (ATerm l_53, ATerm t)
{
  ATerm h_46 = NULL;
  t = SSL_hashtable_destroy(l_53);
  h_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_46);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_46 = NULL;
  t = SSL_table_hashtable();
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_46);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
  j_46 = t;
  t = table_hashtable_0_0(t);
  k_46 = t;
  t = lookup_table_0_1(j_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(m_46, t);
  t = k_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(j_46, l_46, t);
  t = j_46;
  return(t);
}
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  static ATerm b_47 (ATerm t);
  static ATerm b_47 (ATerm t)
  {
    ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
    y_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_46;
      }
    else
      {
        ATerm m_15 = NULL,r_15 = NULL,v_15 = NULL,t_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_46 = ATgetFirst((ATermList) t);
            a_47 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_46);
        m_15 = t;
        t = z_46;
        t = l_87(t);
        r_15 = t;
        t = a_47;
        t = b_47(t);
        v_15 = t;
        t = (ATerm) ATinsert(CheckATermList(v_15), r_15);
        t_9 = t;
        t = SSLsetAnnotations(t_9, m_15);
      }
    return(t);
  }
  t = b_47(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_47 = ATgetFirst((ATermList) t);
      f_47 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_47 = NULL,k_47 = NULL;
        static ATerm w_6 (ATerm t);
        static ATerm w_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_47)), not_null(k_47));
          return(t);
        }
        t = f_47;
        t = j_0(t);
        if(((j_47 != NULL) && (j_47 != t)))
          _fail(t);
        else
          j_47 = t;
        t = e_47;
        t = h_0(t);
        if(((k_47 != NULL) && (k_47 != t)))
          _fail(t);
        else
          k_47 = t;
        t = f_47;
        t = reverse_acc_2_0(h_0, w_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_26;
      t = j_0(t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,y_9 = NULL;
  s_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_47);
  q_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_47);
  y_9 = t;
  t = SSLsetAnnotations(y_9, q_47);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_47), term_t_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  ATerm v_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_47 = NULL,p_47 = NULL;
      t = term_l_11;
      o_47 = t;
      t = term_p_32;
      p_47 = t;
      t = term_q_32;
      t = k_8(o_47, p_47, t);
      LocalPopChoice(x_33);
    }
  else
    {
      t = v_33;
      t = fetch_1_0(a_7, t);
    }
  t = term_z_33;
  t = echo_0_0(t);
  t = term_m_31;
  m_47 = t;
  t = term_n_31;
  n_47 = t;
  t = term_e_34;
  t = k_8(m_47, n_47, t);
  t = reverse_acc_2_0(_id, b_7, t);
  t = map_1_0(d_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm c_49 (ATerm t);
  static ATerm c_49 (ATerm t)
  {
    ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
    z_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_49 = ATgetFirst((ATermList) t);
        b_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_34 = t;
      int l_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_16 = NULL,j_16 = NULL,a_10 = NULL;
          t = SSLgetAnnotations(z_48);
          g_16 = t;
          t = a_49;
          t = v_87(t);
          j_16 = t;
          t = (ATerm) ATinsert(CheckATermList(b_49), j_16);
          a_10 = t;
          t = SSLsetAnnotations(a_10, g_16);
          LocalPopChoice(l_34);
        }
      else
        {
          t = f_34;
          {
            ATerm s_16 = NULL,y_16 = NULL,d_10 = NULL;
            t = SSLgetAnnotations(z_48);
            s_16 = t;
            t = b_49;
            t = c_49(t);
            y_16 = t;
            t = (ATerm) ATinsert(CheckATermList(y_16), a_49);
            d_10 = t;
            t = SSLsetAnnotations(d_10, s_16);
          }
        }
    }
    return(t);
  }
  t = c_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL;
  l_49 = t;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_49;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_34 = ATgetFirst((ATermList) t);
                ATerm v_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_49;
          }
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = (ATerm) ATinsert(ATempty, l_49);
      }
  }
  m_49 = t;
  t = term_o_11;
  n_49 = t;
  t = SSL_printnl(n_49, m_49);
  t = l_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL;
  t = term_l_11;
  z_49 = t;
  t = term_p_32;
  a_50 = t;
  t = term_q_32;
  t = k_8(z_49, a_50, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm b_50 = NULL,e_50 = NULL;
  t = term_y_34;
  b_50 = t;
  t = term_n_26;
  e_50 = t;
  t = term_z_34;
  t = n_8(b_50, e_50, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_a_35;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  t = term_y_34;
  h_50 = t;
  t = term_n_26;
  i_50 = t;
  t = term_z_34;
  t = n_8(h_50, i_50, t);
  t = term_b_35;
  f_50 = t;
  t = term_n_26;
  g_50 = t;
  t = term_c_35;
  t = n_8(f_50, g_50, t);
  t = term_g_35;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_7, f_7, g_7, t);
      LocalPopChoice(k_35);
    }
  else
    {
      t = i_35;
      t = Option_3_0(y_7, r_8, s_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,i_10 = NULL;
  o_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_50 = ATgetFirst((ATermList) t);
      l_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_50);
  j_50 = t;
  t = k_50;
  t = a_74(t);
  m_50 = t;
  t = l_50;
  t = b_74(t);
  n_50 = t;
  t = (ATerm) ATinsert(CheckATermList(n_50), m_50);
  i_10 = t;
  t = SSLsetAnnotations(i_10, j_50);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,y_50 = NULL,z_50 = NULL,m_10 = NULL;
  t_50 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_35;
        t = l_108(t);
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
      }
  }
  t = t_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_50 = ATgetFirst((ATermList) t);
      w_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_50);
  u_50 = t;
  t = term_p_32;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_32, v_50);
  t = n_8(z_50, v_50, t);
  t = w_50;
  {
    static ATerm j_51 (ATerm t);
    static ATerm j_51 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_51 = NULL;
              c_51 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_51;
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
              t = l_108(t);
              t = Cons_2_0(_id, j_51, t);
            }
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm f_51 = NULL,g_51 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_51 = ATgetFirst((ATermList) t);
                g_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_51), (ATerm) ATmakeAppl(sym_Undefined_1, f_51));
          }
        }
      return(t);
    }
    t = j_51(t);
  }
  y_50 = t;
  t = (ATerm) ATinsert(CheckATermList(y_50), (ATerm) ATmakeAppl(sym_Program_1, v_50));
  m_10 = t;
  t = SSLsetAnnotations(m_10, u_50);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  if(match_string(t, "--help"))
    {
      t = w_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_51;
        }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  t = term_l_33;
  x_51 = t;
  t = term_n_26;
  y_51 = t;
  t = term_t_35;
  t = n_8(x_51, y_51, t);
  t = term_v_35;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_w_35;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  q_51 = t;
  t = term_m_31;
  r_51 = t;
  t = term_x_35;
  t = lookup_table_0_1(r_51, t);
  v_51 = t;
  t = term_n_31;
  s_51 = t;
  t = (ATerm) ATempty;
  t_51 = t;
  t = v_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(s_51, t_51, u_51, t);
  t = q_51;
  {
    static ATerm u_8 (ATerm t);
    static ATerm u_8 (ATerm t)
    {
      ATerm y_35 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = k_108(t);
          LocalPopChoice(d_36);
        }
      else
        {
          t = y_35;
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(v_8, w_8, y_8, t);
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_8, t);
  }
  {
    ATerm g_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_52 = NULL;
        j_52 = t;
        {
          ATerm j_36 = t;
          int k_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_17 = NULL;
              t = j_52;
              {
                ATerm l_36 = t;
                int m_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_17 = NULL,s_17 = NULL;
                    t = term_l_11;
                    r_17 = t;
                    t = term_l_33;
                    s_17 = t;
                    t = term_m_33;
                    t = k_8(r_17, s_17, t);
                    LocalPopChoice(m_36);
                  }
                else
                  {
                    t = l_36;
                    t = fetch_1_0(z_8, t);
                  }
              }
              t = j_52;
              t = default_system_usage_0_0(t);
              t = term_u_30;
              p_17 = t;
              t = SSL_exit(p_17);
              LocalPopChoice(k_36);
            }
          else
            {
              t = j_36;
              {
                ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
                t = term_l_11;
                x_17 = t;
                t = term_y_34;
                y_17 = t;
                t = term_n_36;
                t = k_8(x_17, y_17, t);
                t = j_52;
                t = default_system_about_0_0(t);
                t = term_u_30;
                w_17 = t;
                t = SSL_exit(w_17);
              }
            }
        }
        LocalPopChoice(i_36);
      }
    else
      {
        t = g_36;
        {
          ATerm r_36 = t;
          int u_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
              static ATerm a_9 (ATerm t);
              static ATerm a_9 (ATerm t)
              {
                ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL,o_10 = NULL;
                p_52 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_52);
                n_52 = t;
                t = o_52;
                if(((o_51 != NULL) && (o_51 != t)))
                  _fail(t);
                else
                  o_51 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_52);
                o_10 = t;
                t = SSLsetAnnotations(o_10, n_52);
                return(t);
              }
              t = fetch_1_0(a_9, t);
              t = term_h_20;
              l_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_51)), term_v_36);
              m_52 = t;
              t = SSL_printnl(l_52, m_52);
              t = (ATerm) ATmakeAppl(sym__2, term_h_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_51)), term_v_36));
              t = default_system_usage_0_0(t);
              t = term_b_12;
              k_52 = t;
              t = SSL_exit(k_52);
              LocalPopChoice(u_36);
            }
          else
            {
              t = r_36;
            }
        }
      }
  }
  p_51 = t;
  t = term_m_31;
  t = table_destroy_0_0(t);
  t = p_51;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL,y_52 = NULL;
  t = parse_options_1_0(p_106, t);
  u_52 = t;
  t = term_w_36;
  t = table_create_0_0(t);
  t = term_w_36;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_36, term_b_37, u_52);
  t = lookup_table_0_1(v_52, t);
  y_52 = t;
  t = term_b_37;
  w_52 = t;
  t = y_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(w_52, u_52, x_52, t);
  t = u_52;
  t = r_106(t);
  {
    ATerm h_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_106, t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = h_37;
        {
          ATerm o_37 = t;
          int p_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(p_37);
            }
          else
            {
              t = o_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm q_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_37 = t;
      int v_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = abox2text_options_0_0(t);
          LocalPopChoice(v_37);
        }
      else
        {
          t = s_37;
          t = pp_options_0_0(t);
        }
      LocalPopChoice(r_37);
    }
  else
    {
      t = q_37;
      {
        ATerm w_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(a_38);
          }
        else
          {
            t = w_37;
            {
              ATerm b_38 = t;
              int d_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(d_38);
                }
              else
                {
                  t = b_38;
                  {
                    ATerm h_38 = t;
                    int l_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(j_9, k_9, l_9, t);
                        LocalPopChoice(l_38);
                      }
                    else
                      {
                        t = h_38;
                        {
                          ATerm m_38 = t;
                          int q_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(q_38);
                            }
                          else
                            {
                              t = m_38;
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
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = xtc_temp_files_1_0(o_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm a_53 = NULL,m_53 = NULL;
  t = term_r_38;
  a_53 = t;
  t = term_n_26;
  m_53 = t;
  t = term_s_38;
  t = n_8(a_53, m_53, t);
  t = term_t_38;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_53 = NULL,r_53 = NULL,s_53 = NULL;
      t = term_l_11;
      r_53 = t;
      t = term_q_26;
      s_53 = t;
      t = term_x_38;
      t = k_8(r_53, s_53, t);
      o_53 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_53);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      t = term_s_11;
    }
  t = ast2text_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_9, default_usage_0_0, _id, h_9, t);
  return(t);
}
