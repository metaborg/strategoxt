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
ATerm term_g_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_w_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_t_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_x_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_d_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_b_29;
ATerm term_x_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_h_27;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_s_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_d_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_u_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_h_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
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
ATerm term_w_11;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_d_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_m_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_k_11, term_l_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_11, term_q_11, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_11, term_x_11, term_y_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_12, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_h_12, term_i_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_m_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_x_12, term_y_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_g_13, term_h_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_o_13, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_u_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_e_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_m_14, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_a_15, term_e_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_i_16, term_j_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_a_17);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_d_19);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_x_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_d_22);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, term_k_21, term_n_21);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--start", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_r_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_d_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no parse table specified", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_t_25);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_l_24, term_d_24);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_v_27);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_27);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_n_24);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-p f             Use parse table |f| (required)", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--sglr opt       Pass option to sglr", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--impl opt       Pass option to implode asfix", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--start symbol   Define start symbol", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_l_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_h_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym__2, term_u_28, term_v_28);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("The sglri tool parses a text file according to the parse table provided with\n", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("the -p option and implodes the resulting concrete (asfix) tree to an abstract\n", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_n_24);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_f_33, term_n_24);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_h_31, term_n_24);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, (ATerm) ATempty);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_t_32);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_n_24);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_o_24);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm s_7 (ATerm g_20, ATerm f_228, ATerm t);
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm i_97 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm v_7 (ATerm y_14, ATerm x_14, ATerm t);
static ATerm i_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_7 (ATerm c_18, ATerm d_18, ATerm t);
static ATerm c_7 (ATerm z_82 (ATerm), ATerm s_196, ATerm m_18, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t);
static ATerm d_7 (ATerm p_14, ATerm q_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm m_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t);
static ATerm f_7 (ATerm k_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm u_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm v_102 (ATerm), ATerm t);
static ATerm h_7 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm r_25, ATerm q_25, ATerm t);
static ATerm i_7 (ATerm b_92 (ATerm), ATerm n_25, ATerm m_25, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm j_7 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t);
static ATerm k_7 (ATerm x_102 (ATerm), ATerm s_49, ATerm r_49, ATerm t);
static ATerm u_7 (ATerm d_55, ATerm e_55, ATerm t);
static ATerm t_18 (ATerm b_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm i_18, ATerm t);
static ATerm m_7 (ATerm p_55, ATerm q_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_21 (ATerm i_19, ATerm t);
static ATerm l_21 (ATerm p_19, ATerm q_19, ATerm v_19, ATerm t);
static ATerm m_21 (ATerm n_20, ATerm p_20, ATerm q_20, ATerm t);
static ATerm n_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm k_27 (ATerm n_26, ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_105 (ATerm), ATerm t);
static ATerm o_7 (ATerm o_98 (ATerm), ATerm w_35, ATerm u_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_7 (ATerm a_33, ATerm b_33, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
ATerm pass_sglri_args_0_0 (ATerm t);
ATerm get_parse_table_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm sglr_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm parse_and_implode_0_0 (ATerm t);
static ATerm c_8 (ATerm e_50, ATerm f_50, ATerm t);
static ATerm w_7 (ATerm q_48, ATerm r_48, ATerm t);
ATerm end_scope_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_98 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm i_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_8 (ATerm r_53, ATerm s_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm d_8 (ATerm l_48, ATerm m_48, ATerm k_48, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm l_40 (ATerm s_39, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_7 (ATerm x_53, ATerm w_53, ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm sglri_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_7 (ATerm i_34, ATerm j_34, ATerm t);
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm g_8 (ATerm d_53, ATerm e_53, ATerm f_53, ATerm t);
static ATerm h_8 (ATerm g_53, ATerm h_53, ATerm t);
ATerm lookup_table_0_1 (ATerm x_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_53, ATerm m_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_7 (ATerm i_53, ATerm j_53, ATerm t);
static ATerm a_8 (ATerm n_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,q_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_2 = t;
    int u_8 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym__2, q_1, e_0);
        t = v_7(q_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
        LocalPopChoice(u_8);
      }
    else
      {
        t = u_2;
        {
          ATerm y_8 = t;
          int a_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_0 = NULL;
              t = n_1;
              t = r_0(t);
              z_0 = t;
              {
                ATerm d_9 = t;
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
                            if((q_1 != t))
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
                    t = d_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_1, z_0);
              t = v_7(q_1, z_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_1);
              LocalPopChoice(a_9);
            }
          else
            {
              t = y_8;
              t = n_1;
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
ATerm last_0_0 (ATerm t)
{
  ATerm x_1 = NULL,n_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_1 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
    }
  else
    {
      t = n_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm s_7 (ATerm g_20, ATerm f_228, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((g_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = f_228;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm l_88 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t);
  static ATerm l_3 (ATerm t)
  {
    ATerm f_9 = t;
    int g_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_88(t);
        LocalPopChoice(g_9);
      }
    else
      {
        t = f_9;
        {
          ATerm f_3 = NULL,h_3 = NULL,j_3 = NULL,m_1 = NULL,u_1 = NULL,v_0 = NULL;
          f_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_3 = ATgetFirst((ATermList) t);
              j_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_3);
          m_1 = t;
          t = j_3;
          t = l_3(t);
          u_1 = t;
          t = (ATerm) ATinsert(CheckATermList(u_1), h_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, m_1);
        }
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm s_3 = NULL,t_3 = NULL,v_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL,y_0 = NULL,x_0 = NULL;
    e_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_3 = ATgetFirst((ATermList) t);
        z_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_4);
    x_3 = t;
    t = y_3;
    t = d_88(t);
    b_4 = t;
    t = (ATerm) ATinsert(CheckATermList(z_3), b_4);
    x_0 = t;
    t = SSLsetAnnotations(x_0, x_3);
    c_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_3 = ATgetFirst((ATermList) t);
        v_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_4);
    s_3 = t;
    t = v_3;
    if(((o_3 != NULL) && (o_3 != t)))
      _fail(t);
    else
      o_3 = t;
    t = (ATerm) ATinsert(CheckATermList(v_3), t_3);
    y_0 = t;
    t = SSLsetAnnotations(y_0, s_3);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_3, not_null(o_3));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm i_97 (ATerm), ATerm t)
{
  ATerm r_4 = NULL,v_4 = NULL;
  ATerm i_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(i_97, t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = i_9;
      {
        ATerm n_4 = NULL;
        n_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_4, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_9 = ATgetFirst((ATermList) t);
              ATerm p_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_4;
          t = list_tokenize_1_0(i_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm t_9 = ATgetFirst((ATermList) t);
          ATerm w_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_4;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, r_4);
        }
      else
        {
          ATerm e_5 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_9 = ATgetFirst((ATermList) t);
              ATerm y_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_4;
          t = list_tokenize_1_0(i_97, t);
          e_5 = t;
          t = (ATerm) ATinsert(CheckATermList(e_5), r_4);
        }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm u_5 = NULL;
  u_5 = t;
  t = SSL_implode_string(u_5);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,l_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,e_1 = NULL;
  s_5 = t;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_5);
  h_5 = t;
  t = SSL_explode_string(q_5);
  r_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_5, r_5);
  e_1 = t;
  t = SSLsetAnnotations(e_1, h_5);
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm t_5 = NULL;
      t_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_5, f_5);
      t = s_7(t_5, f_5, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(h_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL;
        t = SSL_filemode(l_6);
        if(match_cons(t, sym__2))
          {
            d_2 = ATgetArgument(t, 0);
            {
              ATerm b_10 = ATgetArgument(t, 1);
              if(((ATgetType(b_10) != AT_INT) || (ATgetInt((ATermInt) b_10) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = d_2;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm i_2 = NULL,j_2 = NULL;
          t = term_d_10;
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_10, l_6);
          t = t_7(j_2, l_6, t);
          i_2 = t;
          t = SSL_perror(i_2);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm y_14, ATerm x_14, ATerm t)
{
  ATerm t_6 = NULL,z_6 = NULL;
  z_6 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,g_7 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_10);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_14, (ATerm) ATinsert(ATempty, term_g_10));
        t = u_7(x_14, g_7, t);
        t = filemode_0_0(t);
        e_7 = t;
        t = SSL_S_ISDIR(e_7);
        t = z_6;
        LocalPopChoice(f_10);
        {
          ATerm b_8 = NULL,e_8 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_h_10), y_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          b_8 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_8), term_i_10), x_14);
          e_8 = t;
          t = SSL_concat_strings(e_8);
        }
      }
    else
      {
        t = e_10;
        t = x_14;
      }
  }
  t_6 = t;
  t = SSL_copy(y_14, t_6);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_9 = NULL,c_9 = NULL;
      t = term_l_10;
      b_9 = t;
      t = term_m_10;
      c_9 = t;
      t = term_n_10;
      t = c_8(b_9, c_9, t);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = term_o_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_2 = NULL,p_2 = NULL;
      t = term_m_10;
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,r_2 = NULL;
            t = term_l_10;
            q_2 = t;
            t = term_m_10;
            r_2 = t;
            t = term_n_10;
            t = c_8(q_2, r_2, t);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = term_o_10;
          }
      }
      m_2 = t;
      t = term_r_10;
      p_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_10, m_2);
      t = v_7(p_2, m_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm s_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_8;
      t = copy_to_1_0(i_0, t);
    }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_r_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_10);
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, (ATerm) ATinsert(ATempty, term_g_10));
      t = u_7(j_9, l_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm c_18, ATerm d_18, ATerm t)
{
  ATerm m_9 = NULL;
  t = SSL_write_term_to_stream_baf(c_18, d_18);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_9);
  return(t);
}
static ATerm c_7 (ATerm z_82 (ATerm), ATerm s_196, ATerm m_18, ATerm t)
{
  ATerm n_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_196, term_t_10);
  t = n_7(t);
  n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_9, m_18);
  t = z_82(t);
  t = fclose_0_0(t);
  t = m_18;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm s_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if(match_cons(u_10, sym_Stream_1))
        {
          s_9 = ATgetArgument(u_10, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(s_9, u_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL;
  r_9 = t;
  t = xtc_new_file_0_0(t);
  q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_9, r_9);
  t = c_7(k_0, q_9, r_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_9);
  t = xtc_transform_file_2_0(v_104, w_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm p_14, ATerm q_14, ATerm t)
{
  t = SSL_execvp(p_14, q_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_11 = NULL,f_11 = NULL,h_11 = NULL,i_11 = NULL;
  c_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_11 = ATgetArgument(t, 0);
      {
        ATerm k_3 = NULL,m_3 = NULL;
        t = SSL_int_to_string(f_11);
        k_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_10), k_3), term_v_10);
        m_3 = t;
        t = SSL_concat_strings(m_3);
      }
    }
  else
    {
      ATerm i_4 = NULL,j_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_11 = ATgetArgument(t, 0);
          h_11 = ATgetArgument(t, 1);
          i_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_11);
      i_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_11), term_y_10), i_4), term_x_10), f_11);
      j_4 = t;
      t = SSL_concat_strings(j_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm n_11 = NULL;
  static ATerm m_0 (ATerm t);
  static ATerm m_0 (ATerm t)
  {
    t = c_88(t);
    if(((n_11 != NULL) && (n_11 != t)))
      _fail(t);
    else
      n_11 = t;
    return(t);
  }
  t = fetch_1_0(m_0, t);
  t = not_null(n_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_0 (ATerm t);
        static ATerm n_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm d_11 = ATgetArgument(t, 0);
              if((o_11 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_18), term_w_17), term_s_17), term_o_17), term_h_17), term_b_17), term_r_16), term_k_16), term_d_16), term_z_15), term_u_15), term_p_15), term_l_15), term_f_15), term_u_14), term_o_14), term_g_14), term_z_13), term_q_13), term_j_13), term_d_13), term_t_12), term_o_12), term_k_12), term_f_12), term_b_12), term_v_11), term_m_11);
        t = fetch_elem_1_0(n_0, t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_11 = NULL,j_12 = NULL;
  u_11 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            j_12 = ATgetArgument(t, 1);
            {
              ATerm h_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_18);
        {
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_4 = NULL,i_5 = NULL,j_5 = NULL;
              t = j_12;
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
              y_4 = t;
              t = term_p_18;
              i_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, y_4), term_q_18);
              j_5 = t;
              t = SSL_printnl(i_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, y_4), term_q_18));
              LocalPopChoice(l_18);
            }
          else
            {
              t = k_18;
              t = u_11;
            }
        }
      }
    else
      {
        t = e_18;
        t = u_11;
      }
  }
  t = u_11;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL;
  u_12 = t;
  t = fork_0_0(t);
  r_12 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_12;
        t = m_81(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
        t = SSL_waitpid(r_12);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            if(((ATgetType(v_18) != AT_INT) || (ATgetInt((ATermInt) v_18) != 0)))
              _fail(t);
            {
              ATerm w_18 = ATgetArgument(t, 1);
            }
            {
              ATerm x_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_12;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm x_82 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  w_12 = t;
  t = x_82(t);
  z_12 = t;
  t = term_p_18;
  a_13 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_12), z_12);
  b_13 = t;
  t = SSL_printnl(a_13, b_13);
  t = w_12;
  return(t);
}
static ATerm f_7 (ATerm k_53, ATerm t)
{
  t = SSL_hashtable_keys(k_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm f_13 = NULL,i_13 = NULL;
  static ATerm s_0 (ATerm t);
  static ATerm s_0 (ATerm t)
  {
    ATerm k_13 = NULL,l_13 = NULL;
    k_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), k_13);
    t = c_8(not_null(f_13), k_13, t);
    l_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_13, l_13);
    return(t);
  }
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = lookup_table_0_1(f_13, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(i_13, t);
  t = map_1_0(s_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm u_102 (ATerm), ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  {
    ATerm y_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
        t = term_l_10;
        w_13 = t;
        t = term_d_19;
        x_13 = t;
        t = term_e_19;
        t = c_8(w_13, x_13, t);
        v_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_13, term_m_17);
        t = geq_0_0(t);
        t = t_13;
        t = u_102(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = y_18;
        t = t_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm d_14 = NULL;
  d_14 = t;
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL,k_14 = NULL,l_14 = NULL;
        t = term_l_10;
        k_14 = t;
        t = term_d_19;
        l_14 = t;
        t = term_e_19;
        t = c_8(k_14, l_14, t);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_14, term_b_14);
        t = geq_0_0(t);
        t = d_14;
        t = t_102(t);
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
        t = d_14;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  {
    ATerm h_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
        t = term_l_10;
        c_15 = t;
        t = term_d_19;
        d_15 = t;
        t = term_e_19;
        t = c_8(c_15, d_15, t);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, term_d_12);
        t = geq_0_0(t);
        t = w_14;
        t = v_102(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = h_19;
        t = w_14;
      }
  }
  return(t);
}
static ATerm h_7 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm r_25, ATerm q_25, ATerm t)
{
  t = f_92(t);
  {
    static ATerm w_0 (ATerm t);
    static ATerm w_0 (ATerm t)
    {
      ATerm k_15 = NULL;
      k_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_25, k_15);
      t = e_92(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
  }
  t = q_25;
  return(t);
}
static ATerm i_7 (ATerm b_92 (ATerm), ATerm n_25, ATerm m_25, ATerm t)
{
  static ATerm s_16 (ATerm t);
  static ATerm s_16 (ATerm t)
  {
    ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL;
    l_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_16 = ATgetFirst((ATermList) t);
            n_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_16;
              {
                static ATerm b_1 (ATerm t);
                static ATerm b_1 (ATerm t)
                {
                  t = m_25;
                  return(t);
                }
                t = h_7(b_92, b_1, m_16, n_16, t);
              }
              t = s_16(t);
              LocalPopChoice(m_19);
            }
          else
            {
              t = k_19;
              {
                ATerm p_5 = NULL,x_5 = NULL,h_1 = NULL;
                t = SSLgetAnnotations(l_16);
                p_5 = t;
                t = n_16;
                t = s_16(t);
                x_5 = t;
                t = (ATerm) ATinsert(CheckATermList(x_5), m_16);
                h_1 = t;
                t = SSLsetAnnotations(h_1, p_5);
              }
            }
        }
      }
    return(t);
  }
  t = n_25;
  t = s_16(t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      if((i_17 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm i_49, ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_19 = ATgetArgument(t, 0);
            ATerm s_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        t = c_8(i_49, j_49, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = n_19;
        t = (ATerm) ATempty;
      }
  }
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_16, k_49);
  t = i_7(c_1, y_16, k_49, t);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_49, j_49, x_16);
  t = lookup_table_0_1(i_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(j_49, x_16, z_16, t);
  t = w_16;
  return(t);
}
static ATerm k_7 (ATerm x_102 (ATerm), ATerm s_49, ATerm r_49, ATerm t)
{
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm j_17 = NULL,k_17 = NULL;
    if(match_cons(t, sym__2))
      {
        j_17 = ATgetArgument(t, 0);
        k_17 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_49, j_17, k_17);
    t = x_102(t);
    return(t);
  }
  t = r_49;
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm u_7 (ATerm d_55, ATerm e_55, ATerm t)
{
  t = SSL_access(d_55, e_55);
  return(t);
}
static ATerm t_18 (ATerm b_18, ATerm t)
{
  t = SSL_fclose(b_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_18 = ATgetArgument(t, 0);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_18);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = t_18(n_18, t);
          }
      }
    }
  else
    {
      t = t_18(n_18, t);
    }
  return(t);
}
static ATerm l_7 (ATerm i_18, ATerm t)
{
  t = SSL_read_term_from_stream(i_18);
  return(t);
}
static ATerm m_7 (ATerm p_55, ATerm q_55, ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_fopen(p_55, q_55);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_18 = NULL;
  t = SSL_stdin_stream();
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_19 = NULL;
  t = SSL_stdout_stream();
  b_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_19);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_stderr_stream();
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_19);
  return(t);
}
static ATerm i_21 (ATerm i_19, ATerm t)
{
  ATerm l_19 = NULL;
  t = SSL_explode_term(i_19);
  if(match_cons(t, sym__2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
          {
            l_19 = ATgetFirst((ATermList) x_19);
            {
              ATerm y_19 = (ATerm) ATgetNext((ATermList) x_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_21 (ATerm p_19, ATerm q_19, ATerm v_19, ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,l_20 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(v_19);
  d_20 = t;
  t = p_19;
  if(match_cons(t, sym_Path_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_20, q_19);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_20);
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(b_20, c_20, t);
  return(t);
}
static ATerm m_21 (ATerm n_20, ATerm p_20, ATerm q_20, ATerm t)
{
  ATerm r_20 = NULL,u_20 = NULL,w_20 = NULL,d_21 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(q_20);
  w_20 = t;
  t = SSL_is_string(n_20);
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_21, p_20);
  t_1 = t;
  t = SSLsetAnnotations(t_1, w_20);
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(r_20, u_20, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_21(f_21, t);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm e_20 = t;
              int f_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_21(g_21, h_21, f_21, t);
                  LocalPopChoice(f_20);
                }
              else
                {
                  t = e_20;
                  t = m_21(g_21, h_21, f_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_21(f_21, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,w_21 = NULL,g_22 = NULL;
  g_22 = t;
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_22, term_j_20);
        t = n_7(t);
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        {
          ATerm w_6 = NULL,x_6 = NULL;
          t = term_k_20;
          x_6 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_20, g_22);
          t = t_7(x_6, g_22, t);
          w_6 = t;
          t = SSL_perror(w_6);
          _fail(t);
        }
      }
  }
  p_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(w_21, t);
  o_21 = t;
  t = p_21;
  t = fclose_0_0(t);
  t = o_21;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_m_20;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_o_20;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm s_20 = t;
  int t_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_22 = NULL,q_22 = NULL;
      p_22 = t;
      t = (ATerm) ATinsert(ATempty, term_v_20);
      q_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_22, (ATerm) ATinsert(ATempty, term_v_20));
      t = u_7(p_22, q_22, t);
      LocalPopChoice(t_20);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = s_20;
      {
        ATerm x_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = t;
            if((PushChoice() == 0))
              {
                ATerm r_22 = NULL,s_22 = NULL;
                r_22 = t;
                t = (ATerm) ATinsert(ATempty, term_g_10);
                s_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_22, (ATerm) ATinsert(ATempty, term_g_10));
                t = u_7(r_22, s_22, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = z_20;
              }
            t = debug_1_0(f_1, t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = x_20;
            t = debug_1_0(g_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_a_21;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_b_21;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL;
  m_23 = t;
  t = term_p_18;
  n_23 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  p_23 = t;
  t = SSL_printnl(n_23, p_23);
  t = m_23;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  if(match_cons(t, sym__3))
    {
      q_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      s_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_7(q_23, r_23, s_23, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,b_24 = NULL;
  x_23 = t;
  t = term_p_18;
  y_23 = t;
  t = (ATerm) ATinsert(ATempty, term_e_21);
  b_24 = t;
  t = SSL_printnl(y_23, b_24);
  t = x_23;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm c_24 = NULL,e_24 = NULL,f_24 = NULL;
  c_24 = t;
  t = term_p_18;
  e_24 = t;
  t = (ATerm) ATinsert(ATempty, term_c_21);
  f_24 = t;
  t = SSL_printnl(e_24, f_24);
  t = c_24;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm t_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  t_22 = t;
  t = if_verbose5_1_0(i_1, t);
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm k_23 = NULL,l_23 = NULL;
        t = term_k_21;
        k_23 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, t_22);
        l_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Imported_1, t_22));
        t = c_8(k_23, l_23, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  x_22 = t;
  t = term_k_21;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, term_n_21, (ATerm) ATinsert(ATempty, t_22));
  t = lookup_table_0_1(e_23, t);
  i_23 = t;
  t = term_n_21;
  f_23 = t;
  t = (ATerm) ATinsert(ATempty, t_22);
  g_23 = t;
  t = i_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(f_23, g_23, h_23, t);
  t = x_22;
  t = if_verbose4_1_0(k_1, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_1, t);
  w_22 = t;
  t = term_k_21;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, w_22);
  t = k_7(p_1, d_23, w_22, t);
  t = if_verbose6_1_0(r_1, t);
  t = term_k_21;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, (ATerm)ATmakeAppl(sym_Imported_1, t_22), (ATerm) ATempty);
  t = lookup_table_0_1(y_22, t);
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, t_22);
  z_22 = t;
  t = (ATerm) ATempty;
  a_23 = t;
  t = c_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(z_22, a_23, b_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_21, (ATerm)ATmakeAppl(sym_Imported_1, t_22), (ATerm) ATempty);
  t = if_verbose4_1_0(v_1, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_96 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,f_25 = NULL;
  b_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_25;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_25 = ATgetFirst((ATermList) t);
          f_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL,k_8 = NULL,l_8 = NULL,z_2 = NULL;
            t = SSLgetAnnotations(b_25);
            y_7 = t;
            t = c_25;
            t = i_96(t);
            k_8 = t;
            t = f_25;
            t = filter_1_0(i_96, t);
            l_8 = t;
            t = (ATerm) ATinsert(CheckATermList(l_8), k_8);
            z_2 = t;
            t = SSLsetAnnotations(z_2, y_7);
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = f_25;
            t = filter_1_0(i_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm t)
{
  static ATerm i_25 (ATerm t);
  static ATerm i_25 (ATerm t)
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_85(t);
        t = i_25(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = v_85(t);
      }
    return(t);
  }
  t = i_25(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_25 = NULL,o_25 = NULL;
      t = term_l_10;
      k_25 = t;
      t = term_x_21;
      o_25 = t;
      t = term_y_21;
      t = c_8(k_25, o_25, t);
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL;
            t = term_b_22;
            p_25 = t;
            t = SSL_getenv(p_25);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_c_22;
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  t = term_k_21;
  h_26 = t;
  t = term_d_22;
  i_26 = t;
  t = term_e_22;
  t = c_8(h_26, i_26, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm f_22 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_22;
      }
  }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_25 = NULL;
  t = if_verbose5_1_0(w_1, t);
  v_25 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_25 = NULL,z_25 = NULL;
        t = term_k_21;
        w_25 = t;
        t = term_n_21;
        z_25 = t;
        t = term_k_22;
        t = c_8(w_25, z_25, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm b_26 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_26 = t;
          t = repeat_2_0(z_1, _id, t);
          t = b_26;
        }
      }
  }
  t = v_25;
  t = if_verbose5_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm k_27 (ATerm n_26, ATerm t)
{
  ATerm p_26 = NULL,r_26 = NULL,s_26 = NULL;
  t = term_k_21;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, n_26);
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Tool_1, n_26));
  t = c_8(r_26, s_26, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_22 = ATgetFirst((ATermList) t);
      if(match_cons(m_22, sym__2))
        {
          ATerm o_22 = ATgetArgument(m_22, 0);
          p_26 = ATgetArgument(m_22, 1);
        }
      else
        _fail(t);
      {
        ATerm n_22 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_26;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_l_22;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_k_21;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_u_22;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm v_22 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_26 = NULL,v_26 = NULL,y_26 = NULL;
      t = if_verbose5_1_0(c_2, t);
      t = xtc_load_0_0(t);
      y_26 = t;
      if(match_cons(t, sym__2))
        {
          u_26 = ATgetArgument(t, 0);
          v_26 = ATgetArgument(t, 1);
          {
            ATerm o_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
                t = term_k_21;
                c_27 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_26);
                d_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_k_21, (ATerm) ATmakeAppl(sym_Tool_1, u_26));
                t = c_8(c_27, d_27, t);
                {
                  static ATerm f_2 (ATerm t);
                  static ATerm f_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((v_26 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_27 != NULL) && (b_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_2, t);
                }
                t = not_null(b_27);
                LocalPopChoice(t_23);
              }
            else
              {
                t = o_23;
                t = k_27(y_26, t);
              }
          }
        }
      else
        {
          t = k_27(y_26, t);
        }
      t = if_verbose5_1_0(g_2, t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = v_22;
      {
        ATerm i_27 = NULL,v_8 = NULL,x_8 = NULL;
        i_27 = t;
        t = term_p_18;
        v_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), i_27), term_u_23);
        x_8 = t;
        t = SSL_printnl(v_8, x_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_23), i_27), term_u_23);
        t = if_verbose5_1_0(k_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,p_27 = NULL;
  p_27 = t;
  t = z_105(t);
  t = xtc_find_0_0(t);
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_27, p_27);
  {
    static ATerm o_2 (ATerm t);
    static ATerm o_2 (ATerm t)
    {
      ATerm q_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_27, p_27);
      t = d_7(n_27, p_27, t);
      t = term_w_23;
      q_27 = t;
      t = SSL_exit(q_27);
      return(t);
    }
    t = fork_and_wait_1_0(o_2, t);
  }
  t = p_27;
  return(t);
}
static ATerm o_7 (ATerm o_98 (ATerm), ATerm w_35, ATerm u_35, ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL,e_28 = NULL;
  w_27 = t;
  t = o_98(t);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_27, w_35, u_35);
  t = d_8(r_27, w_35, u_35, t);
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_28 = NULL;
        t = term_d_24;
        f_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_d_24);
        t = c_8(r_27, f_28, t);
        {
          ATerm g_24 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = g_24;
            }
        }
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_27, term_d_24, (ATerm) ATinsert(CheckATermList(t_27), (ATerm) ATinsert(CheckATermList(s_27), w_35)));
  t = lookup_table_0_1(r_27, t);
  e_28 = t;
  t = term_d_24;
  x_27 = t;
  t = (ATerm) ATinsert(CheckATermList(t_27), (ATerm) ATinsert(CheckATermList(s_27), w_35));
  z_27 = t;
  t = e_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(x_27, z_27, a_28, t);
  t = w_27;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_28 = NULL,h_9 = NULL;
      n_28 = t;
      t = term_j_24;
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_28, term_j_24);
      t = t_7(n_28, h_9, t);
      j_28 = t;
      t = SSL_mkstemp(j_28);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm o_28 = NULL;
        t = term_k_24;
        o_28 = t;
        t = SSL_perror(o_28);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_7 (ATerm a_33, ATerm b_33, ATerm t)
{
  t = SSL_strcat(a_33, b_33);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,w_28 = NULL;
  t = P__tmpdir_0_0(t);
  t_28 = t;
  t = term_m_24;
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, term_m_24);
  t = t_7(t_28, w_28, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      q_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_24;
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, term_n_24);
  t = o_7(s_2, r_28, s_28, t);
  t = SSL_close(q_28);
  t = r_28;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  y_28 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_29 = NULL,d_29 = NULL;
      t = y_28;
      t = xtc_new_file_0_0(t);
      a_29 = t;
      t = u_0(t);
      d_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_29, (ATerm) ATinsert(ATinsert(ATempty, a_29), term_m_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_29);
    }
  else
    {
      ATerm g_29 = NULL,h_29 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_28;
      t = xtc_new_file_0_0(t);
      g_29 = t;
      t = u_0(t);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_29), term_m_10), z_28), term_o_24));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_29);
    }
  return(t);
}
ATerm pass_sglri_args_0_0 (ATerm t)
{
  ATerm i_29 = NULL,k_29 = NULL;
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
      t = term_l_10;
      o_29 = t;
      t = term_r_24;
      p_29 = t;
      t = term_s_24;
      t = c_8(o_29, p_29, t);
      n_29 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, n_29), term_t_24);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      t = (ATerm) ATempty;
    }
  i_29 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL,s_29 = NULL;
        t = term_l_10;
        q_29 = t;
        t = term_w_24;
        s_29 = t;
        t = term_x_24;
        t = c_8(q_29, s_29, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        t = (ATerm) ATempty;
      }
  }
  k_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_29), i_29), (ATerm) ATinsert(ATempty, term_y_24));
  t = concat_0_0(t);
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL,u_29 = NULL;
      t = term_l_10;
      t_29 = t;
      t = term_d_25;
      u_29 = t;
      t = term_e_25;
      t = c_8(t_29, u_29, t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm v_29 = NULL,a_30 = NULL,d_30 = NULL;
        t = term_p_18;
        a_30 = t;
        t = (ATerm) ATinsert(ATempty, term_g_25);
        d_30 = t;
        t = SSL_printnl(a_30, d_30);
        t = term_k_11;
        v_29 = t;
        t = SSL_exit(v_29);
        t = (ATerm) ATinsert(ATempty, term_g_25);
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm sglr_2_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm t)
{
  ATerm j_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = NULL,u_30 = NULL;
      u_30 = t;
      if(match_cons(t, sym_FILE_1))
        {
          q_30 = ATgetArgument(t, 0);
          {
            ATerm v_9 = NULL,b_3 = NULL;
            t = SSLgetAnnotations(u_30);
            v_9 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, q_30);
            b_3 = t;
            t = SSLsetAnnotations(b_3, v_9);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_30;
        }
      LocalPopChoice(l_25);
      {
        static ATerm v_2 (ATerm t);
        static ATerm v_2 (ATerm t)
        {
          ATerm v_30 = NULL,w_30 = NULL,y_30 = NULL;
          y_30 = t;
          t = f_80(t);
          v_30 = t;
          t = y_30;
          t = g_80(t);
          w_30 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(w_30), v_30), term_d_25);
          return(t);
        }
        t = xtc_transform_file_2_0(t_2, v_2, t);
      }
    }
  else
    {
      t = j_25;
      {
        static ATerm x_2 (ATerm t);
        static ATerm x_2 (ATerm t)
        {
          ATerm z_30 = NULL,c_31 = NULL,e_31 = NULL;
          e_31 = t;
          t = f_80(t);
          z_30 = t;
          t = e_31;
          t = g_80(t);
          c_31 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_31), z_30), term_d_25);
          return(t);
        }
        t = xtc_transform_term_2_0(w_2, x_2, t);
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_t_25;
  {
    ATerm u_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_31 = NULL,a_32 = NULL;
        t = term_l_10;
        z_31 = t;
        t = term_t_25;
        a_32 = t;
        t = term_y_25;
        t = c_8(z_31, a_32, t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = u_25;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_s_25;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_t_25;
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL,d_32 = NULL;
        t = term_l_10;
        b_32 = t;
        t = term_t_25;
        d_32 = t;
        t = term_y_25;
        t = c_8(b_32, d_32, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        t = (ATerm) ATempty;
      }
  }
  return(t);
}
ATerm parse_and_implode_0_0 (ATerm t)
{
  t = sglr_2_0(get_parse_table_0_0, pass_sglri_args_0_0, t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_31 = NULL,w_31 = NULL;
        w_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_31 = ATgetArgument(t, 0);
            {
              ATerm c_10 = NULL,d_3 = NULL;
              t = SSLgetAnnotations(w_31);
              c_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_31);
              d_3 = t;
              t = SSLsetAnnotations(d_3, c_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_31;
          }
        LocalPopChoice(e_26);
        t = xtc_transform_file_2_0(y_2, a_3, t);
      }
    else
      {
        t = d_26;
        t = xtc_transform_term_2_0(c_3, e_3, t);
      }
  }
  return(t);
}
static ATerm c_8 (ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm k_32 = NULL;
  t = lookup_table_0_1(e_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(f_50, k_32, t);
  return(t);
}
static ATerm w_7 (ATerm q_48, ATerm r_48, ATerm t)
{
  ATerm m_32 = NULL,n_32 = NULL;
  n_32 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
        t = c_8(q_48, r_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_26 = ATgetFirst((ATermList) t);
            m_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_26);
        {
          ATerm o_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_48, r_48, m_32);
          t = lookup_table_0_1(q_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(r_48, m_32, o_32, t);
          t = (ATerm) ATmakeAppl(sym__3, q_48, r_48, m_32);
        }
      }
    else
      {
        t = f_26;
        {
          ATerm s_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
          t = lookup_table_0_1(q_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(r_48, s_32, t);
          t = (ATerm) ATmakeAppl(sym__2, q_48, r_48);
        }
      }
  }
  t = n_32;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,z_32 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  z_32 = t;
  t = l_98(t);
  w_32 = t;
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_33 = NULL;
        t = term_d_24;
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_d_24);
        t = c_8(w_32, g_33, t);
        {
          ATerm m_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_26;
            }
        }
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_32 = ATgetFirst((ATermList) t);
      u_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_32, term_d_24, u_32);
  t = lookup_table_0_1(w_32, t);
  e_33 = t;
  t = term_d_24;
  c_33 = t;
  t = e_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(c_33, u_32, d_33, t);
  t = v_32;
  {
    static ATerm g_3 (ATerm t);
    static ATerm g_3 (ATerm t)
    {
      ATerm h_33 = NULL;
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_32, h_33);
      t = w_7(w_32, h_33, t);
      return(t);
    }
    t = map_1_0(g_3, t);
  }
  t = z_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t)
{
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_102(t);
      t = f_102(t);
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      t = f_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,s_33 = NULL,t_33 = NULL;
  l_33 = t;
  t = k_98(t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_33, term_d_24);
  {
    ATerm t_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm z_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_24;
        z_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_33, term_d_24);
        t = c_8(k_33, z_33, t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATempty;
      }
  }
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_33, term_d_24, (ATerm) ATinsert(CheckATermList(o_33), (ATerm) ATempty));
  t = lookup_table_0_1(k_33, t);
  t_33 = t;
  t = term_d_24;
  p_33 = t;
  t = (ATerm) ATinsert(CheckATermList(o_33), (ATerm) ATempty);
  q_33 = t;
  t = t_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(p_33, q_33, s_33, t);
  t = l_33;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm k_34 = NULL;
  k_34 = t;
  {
    ATerm a_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_34);
        LocalPopChoice(e_27);
      }
    else
      {
        t = a_27;
        t = k_34;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm c_34 = NULL;
  static ATerm q_3 (ATerm t);
  static ATerm q_3 (ATerm t)
  {
    ATerm d_34 = NULL;
    d_34 = t;
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_34 = NULL,f_34 = NULL;
          t = term_l_24;
          e_34 = t;
          t = term_d_24;
          f_34 = t;
          t = term_h_27;
          t = c_8(e_34, f_34, t);
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
        if(((c_34 != NULL) && (c_34 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_34 = ATgetFirst((ATermList) t);
        {
          ATerm j_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = c_34;
    t = map_1_0(r_3, t);
    t = d_34;
    t = end_scope_1_0(u_3, t);
    return(t);
  }
  t = begin_scope_1_0(i_3, t);
  t = restore_always_2_0(i_105, q_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,v_34 = NULL;
  p_34 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  q_34 = t;
  t = term_p_18;
  s_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_27), q_34), term_l_27);
  v_34 = t;
  t = SSL_printnl(s_34, v_34);
  t = term_k_11;
  r_34 = t;
  t = SSL_exit(r_34);
  t = p_34;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  if(match_string(t, "-k"))
    {
      t = x_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_34;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  t = SSL_string_to_int(y_34);
  z_34 = t;
  t = term_o_27;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, z_34);
  t = f_8(a_35, z_34, t);
  t = y_34;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_u_27;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, a_4, d_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  if(match_string(t, "-S"))
    {
      t = e_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_35;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_d_19;
  f_35 = t;
  t = term_v_27;
  g_35 = t;
  t = term_y_27;
  t = f_8(f_35, g_35, t);
  t = term_b_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_c_28;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  t = SSL_string_to_int(h_35);
  i_35 = t;
  t = term_d_19;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, i_35);
  t = f_8(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_35);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  t = term_t_24;
  k_35 = t;
  t = term_n_24;
  l_35 = t;
  t = term_g_28;
  t = f_8(k_35, l_35, t);
  t = term_h_28;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_i_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_4, g_4, h_4, t);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_4, l_4, m_4, t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = m_28;
            t = Option_3_0(o_4, p_4, q_4, t);
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm r_53, ATerm s_53, ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  t = term_l_10;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, r_53, s_53);
  t = lookup_table_0_1(m_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(r_53, s_53, n_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, r_53, s_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_36 = NULL,g_36 = NULL,h_36 = NULL;
      t = term_n_24;
      t = g_0(t);
      e_36 = t;
      t = term_u_28;
      g_36 = t;
      t = term_v_28;
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, e_36);
      t = d_8(g_36, h_36, e_36, t);
      _fail(t);
    }
  else
    {
      ATerm k_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_36 = ATgetFirst((ATermList) t);
          d_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      t = d_0(t);
      t = term_n_24;
      t = f_0(t);
      k_36 = t;
      t = (ATerm) ATinsert(CheckATermList(d_36), k_36);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "-o"))
    {
      t = o_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_36;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_36 = NULL,w_36 = NULL;
  p_36 = t;
  t = term_m_10;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, p_36);
  t = f_8(w_36, p_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_36);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm a_37 = NULL;
  a_37 = t;
  if(match_string(t, "-i"))
    {
      t = a_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_37;
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  b_37 = t;
  t = term_o_24;
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, b_37);
  t = f_8(c_37, b_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_37);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_4, x_4, z_4, t);
  return(t);
}
static ATerm d_8 (ATerm l_48, ATerm m_48, ATerm k_48, ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  e_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
  {
    ATerm c_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            ATerm j_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        t = c_8(l_48, m_48, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATempty;
      }
  }
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_48, m_48, (ATerm) ATinsert(CheckATermList(f_37), k_48));
  t = lookup_table_0_1(l_48, t);
  l_37 = t;
  t = (ATerm) ATinsert(CheckATermList(f_37), k_48);
  j_37 = t;
  t = l_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(m_48, j_37, k_37, t);
  t = e_37;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL;
      t = term_n_24;
      t = q_0(t);
      a_38 = t;
      t = term_u_28;
      b_38 = t;
      t = term_v_28;
      c_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_28, term_v_28, a_38);
      t = d_8(b_38, c_38, a_38, t);
      _fail(t);
    }
  else
    {
      ATerm i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_37 = ATgetFirst((ATermList) t);
          w_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_37 = ATgetFirst((ATermList) t);
          y_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_37;
      t = o_0(t);
      t = x_37;
      t = p_0(t);
      i_38 = t;
      t = (ATerm) ATinsert(CheckATermList(y_37), i_38);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t);
  static ATerm o_39 (ATerm t)
  {
    ATerm i_39 = NULL,l_39 = NULL,n_39 = NULL;
    n_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_39 = ATgetFirst((ATermList) t);
        l_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_10 = NULL,g_11 = NULL,n_3 = NULL;
          t = SSLgetAnnotations(n_39);
          z_10 = t;
          t = l_39;
          t = o_39(t);
          g_11 = t;
          t = (ATerm) ATinsert(CheckATermList(g_11), i_39);
          n_3 = t;
          t = SSLsetAnnotations(n_3, z_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_39;
        t = h_88(t);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_38;
    }
  else
    {
      static ATerm a_5 (ATerm t);
      static ATerm a_5 (ATerm t)
      {
        t = not_null(m_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_38 = ATgetFirst((ATermList) t);
          if(((m_38 != NULL) && (m_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_38;
      t = at_end_1_0(a_5, t);
    }
  return(t);
}
static ATerm l_40 (ATerm s_39, ATerm t)
{
  ATerm u_39 = NULL;
  t = SSL_explode_term(s_39);
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_39;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_39 = NULL,b_40 = NULL,e_40 = NULL;
  e_40 = t;
  if(match_cons(t, sym__2))
    {
      w_39 = ATgetArgument(t, 0);
      b_40 = ATgetArgument(t, 1);
      {
        ATerm m_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_5 (ATerm t);
            static ATerm b_5 (ATerm t)
            {
              t = b_40;
              return(t);
            }
            t = w_39;
            t = at_end_1_0(b_5, t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = m_29;
            t = l_40(e_40, t);
          }
      }
    }
  else
    {
      t = l_40(e_40, t);
    }
  return(t);
}
static ATerm p_7 (ATerm x_53, ATerm w_53, ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,s_40 = NULL,t_40 = NULL;
  t = x_53;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_40 = NULL;
        t = term_l_10;
        v_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_10, x_53);
        t = c_8(v_40, x_53, t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_53, o_40);
  t = conc_0_0(t);
  n_40 = t;
  t = term_l_10;
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, x_53, n_40);
  t = lookup_table_0_1(s_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(x_53, n_40, t_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_10, x_53, n_40);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  t = term_d_25;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, y_40);
  t = f_8(z_40, y_40, t);
  t = y_40;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--sglr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_41 = NULL,d_41 = NULL,f_41 = NULL;
  a_41 = t;
  t = term_w_24;
  d_41 = t;
  t = (ATerm) ATinsert(ATempty, a_41);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_24, (ATerm) ATinsert(ATempty, a_41));
  t = p_7(d_41, f_41, t);
  t = a_41;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--impl", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,j_41 = NULL;
  g_41 = t;
  t = term_t_25;
  h_41 = t;
  t = (ATerm) ATinsert(ATempty, g_41);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, (ATerm) ATinsert(ATempty, g_41));
  t = p_7(h_41, j_41, t);
  t = g_41;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--start", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  m_41 = t;
  t = term_r_24;
  n_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, m_41);
  t = f_8(n_41, m_41, t);
  t = m_41;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm sglri_options_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(c_5, d_5, k_5, t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_5, n_5, o_5, t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(v_5, w_5, y_5, t);
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  t = ArgOption_3_0(z_5, a_6, c_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_24;
  t = whoami_0_0(t);
  o_41 = t;
  t = term_p_18;
  q_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_30), o_41);
  r_41 = t;
  t = SSL_printnl(q_41, r_41);
  t = term_k_11;
  p_41 = t;
  t = SSL_exit(p_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_l_10;
  s_41 = t;
  t = term_l_30;
  t_41 = t;
  t = term_m_30;
  t = c_8(s_41, t_41, t);
  return(t);
}
static ATerm x_7 (ATerm i_34, ATerm j_34, ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_34, j_34);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      t = SSL_addr(i_34, j_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_95 (ATerm), ATerm f_95 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
  v_41 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_41;
      t = e_95(t);
    }
  else
    {
      ATerm a_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_41 = ATgetFirst((ATermList) t);
          x_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_41;
      t = foldr_2_0(e_95, f_95, t);
      a_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_41, a_42);
      t = f_95(t);
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
  t = term_v_27;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_11 = ATgetArgument(t, 0);
      a_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(z_11, a_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_42 = NULL,r_11 = NULL,s_11 = NULL;
  t = times_0_0(t);
  s_11 = t;
  t = SSL_explode_term(s_11);
  if(match_cons(t, sym__2))
    {
      ATerm p_30 = ATgetArgument(t, 0);
      r_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11;
  t = foldr_2_0(d_6, f_6, t);
  d_42 = t;
  t = SSL_TicksToSeconds(d_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
  o_42 = t;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_42;
        if((p_42 != t))
          {
            _fail(t);
          }
        t = o_42;
        LocalPopChoice(s_30);
      }
    else
      {
        t = r_30;
        t = (ATerm) ATmakeAppl(sym__2, p_42, q_42);
        {
          ATerm t_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_42, q_42);
              LocalPopChoice(x_30);
            }
          else
            {
              t = t_30;
              t = SSL_gtr(p_42, q_42);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_42, q_42);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm x_42 = NULL;
  x_42 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
        t = term_l_10;
        c_43 = t;
        t = term_d_19;
        d_43 = t;
        t = term_e_19;
        t = c_8(c_43, d_43, t);
        b_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_43, term_k_11);
        t = geq_0_0(t);
        t = x_42;
        t = q_102(t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = x_42;
      }
  }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,i_43 = NULL,j_43 = NULL;
  t = run_time_0_0(t);
  f_43 = t;
  t = term_n_24;
  t = whoami_0_0(t);
  g_43 = t;
  t = term_p_18;
  i_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_31), f_43), term_x_10), g_43);
  j_43 = t;
  t = SSL_printnl(i_43, j_43);
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_31), f_43), term_x_10), g_43));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_43 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_27;
  k_43 = t;
  t = SSL_exit(k_43);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL;
  v_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_43 = ATgetArgument(t, 0);
          {
            ATerm c_13 = NULL,b_6 = NULL;
            t = SSLgetAnnotations(v_43);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_43);
            b_6 = t;
            t = SSLsetAnnotations(b_6, c_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_43 = NULL,o_43 = NULL;
      t = term_l_10;
      n_43 = t;
      t = term_h_31;
      o_43 = t;
      t = term_i_31;
      t = c_8(n_43, o_43, t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      t = fetch_1_0(i_6, t);
    }
  t = b_107(t);
  return(t);
}
static ATerm g_8 (ATerm d_53, ATerm e_53, ATerm f_53, ATerm t)
{
  ATerm x_43 = NULL;
  t = SSL_hashtable_put(f_53, d_53, e_53);
  x_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_43);
  return(t);
}
static ATerm h_8 (ATerm g_53, ATerm h_53, ATerm t)
{
  t = SSL_hashtable_get(h_53, g_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_49, ATerm t)
{
  ATerm g_44 = NULL;
  t = table_hashtable_0_0(t);
  g_44 = t;
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL;
        t = g_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8(x_49, m_13, t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        {
          ATerm r_13 = NULL;
          t = x_49;
          t = table_create_0_0(t);
          t = g_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(x_49, r_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_53, ATerm m_53, ATerm t)
{
  ATerm j_44 = NULL;
  t = SSL_hashtable_create(l_53, m_53);
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_44);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,o_44 = NULL,p_44 = NULL;
  k_44 = t;
  t = term_l_31;
  o_44 = t;
  t = term_m_31;
  p_44 = t;
  t = k_44;
  t = new_hashtable_0_2(o_44, p_44, t);
  l_44 = t;
  t = k_44;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(k_44, l_44, m_44, t);
  t = k_44;
  return(t);
}
static ATerm z_7 (ATerm i_53, ATerm j_53, ATerm t)
{
  ATerm q_44 = NULL;
  t = SSL_hashtable_remove(j_53, i_53);
  q_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_44);
  return(t);
}
static ATerm a_8 (ATerm n_53, ATerm t)
{
  ATerm r_44 = NULL;
  t = SSL_hashtable_destroy(n_53);
  r_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_44);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_44 = NULL;
  t = SSL_table_hashtable();
  s_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_44);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  t_44 = t;
  t = table_hashtable_0_0(t);
  u_44 = t;
  t = lookup_table_0_1(t_44, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(w_44, t);
  t = u_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(t_44, v_44, t);
  t = t_44;
  return(t);
}
ATerm map_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  static ATerm l_45 (ATerm t);
  static ATerm l_45 (ATerm t)
  {
    ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
    i_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_45;
      }
    else
      {
        ATerm c_14 = NULL,i_14 = NULL,j_14 = NULL,e_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_45 = ATgetFirst((ATermList) t);
            k_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_45);
        c_14 = t;
        t = j_45;
        t = q_87(t);
        i_14 = t;
        t = k_45;
        t = l_45(t);
        j_14 = t;
        t = (ATerm) ATinsert(CheckATermList(j_14), i_14);
        e_6 = t;
        t = SSLsetAnnotations(e_6, c_14);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_45 = ATgetFirst((ATermList) t);
      p_45 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_45 = NULL,u_45 = NULL;
        static ATerm k_6 (ATerm t);
        static ATerm k_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_45)), not_null(u_45));
          return(t);
        }
        t = p_45;
        t = l_0(t);
        if(((t_45 != NULL) && (t_45 != t)))
          _fail(t);
        else
          t_45 = t;
        t = o_45;
        t = j_0(t);
        if(((u_45 != NULL) && (u_45 != t)))
          _fail(t);
        else
          u_45 = t;
        t = p_45;
        t = reverse_acc_2_0(j_0, k_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_24;
      t = l_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm j_46 = NULL;
  j_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_46), term_n_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_46 = NULL,c_46 = NULL;
      t = term_l_10;
      b_46 = t;
      t = term_l_30;
      c_46 = t;
      t = term_m_30;
      t = c_8(b_46, c_46, t);
      y_45 = t;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        static ATerm m_6 (ATerm t);
        static ATerm m_6 (ATerm t)
        {
          ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,h_6 = NULL;
          f_46 = t;
          if(match_cons(t, sym_Program_1))
            {
              e_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_46);
          d_46 = t;
          t = e_46;
          if(((y_45 != NULL) && (y_45 != t)))
            _fail(t);
          else
            y_45 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, e_46);
          h_6 = t;
          t = SSLsetAnnotations(h_6, d_46);
          return(t);
        }
        t = fetch_1_0(m_6, t);
      }
    }
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_31), not_null(y_45)), term_s_31);
        t = echo_0_0(t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
      }
  }
  t = term_u_31;
  t = echo_0_0(t);
  t = term_u_28;
  z_45 = t;
  t = term_v_28;
  a_46 = t;
  t = term_x_31;
  t = c_8(z_45, a_46, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  {
    ATerm y_31 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_32), term_g_32), term_f_32), term_e_32);
        t = echo_0_0(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = y_31;
      }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  static ATerm i_47 (ATerm t);
  static ATerm i_47 (ATerm t)
  {
    ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
    f_47 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_47 = ATgetFirst((ATermList) t);
        h_47 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_14 = NULL,g_15 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(f_47);
          z_14 = t;
          t = g_47;
          t = a_88(t);
          g_15 = t;
          t = (ATerm) ATinsert(CheckATermList(h_47), g_15);
          j_6 = t;
          t = SSLsetAnnotations(j_6, z_14);
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          {
            ATerm q_15 = NULL,v_15 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(f_47);
            q_15 = t;
            t = h_47;
            t = i_47(t);
            v_15 = t;
            t = (ATerm) ATinsert(CheckATermList(v_15), g_47);
            r_6 = t;
            t = SSLsetAnnotations(r_6, q_15);
          }
        }
    }
    return(t);
  }
  t = i_47(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL;
  m_47 = t;
  {
    ATerm l_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_47;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_32 = ATgetFirst((ATermList) t);
                ATerm r_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_47;
          }
        LocalPopChoice(p_32);
      }
    else
      {
        t = l_32;
        t = (ATerm) ATinsert(ATempty, m_47);
      }
  }
  n_47 = t;
  t = term_o_10;
  o_47 = t;
  t = SSL_printnl(o_47, n_47);
  t = m_47;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL;
  t = term_l_10;
  s_47 = t;
  t = term_l_30;
  t_47 = t;
  t = term_m_30;
  t = c_8(s_47, t_47, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_47 = NULL,v_47 = NULL;
  t = term_t_32;
  u_47 = t;
  t = term_n_24;
  v_47 = t;
  t = term_x_32;
  t = f_8(u_47, v_47, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_y_32;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
  t = term_t_32;
  y_47 = t;
  t = term_n_24;
  z_47 = t;
  t = term_x_32;
  t = f_8(y_47, z_47, t);
  t = term_f_33;
  w_47 = t;
  t = term_n_24;
  x_47 = t;
  t = term_i_33;
  t = f_8(w_47, x_47, t);
  t = term_j_33;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_6, q_6, s_6, t);
      LocalPopChoice(r_33);
    }
  else
    {
      t = n_33;
      t = Option_3_0(u_6, v_6, y_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,e_48 = NULL,f_48 = NULL,n_48 = NULL,p_8 = NULL;
  n_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_48 = ATgetFirst((ATermList) t);
      c_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_48);
  a_48 = t;
  t = b_48;
  t = z_73(t);
  e_48 = t;
  t = c_48;
  t = a_74(t);
  f_48 = t;
  t = (ATerm) ATinsert(CheckATermList(f_48), e_48);
  p_8 = t;
  t = SSLsetAnnotations(p_8, a_48);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,a_49 = NULL,b_49 = NULL,w_8 = NULL;
  v_48 = t;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_33;
        t = z_108(t);
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
      }
  }
  t = v_48;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_48 = ATgetFirst((ATermList) t);
      y_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_48);
  w_48 = t;
  t = term_l_30;
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, x_48);
  t = f_8(b_49, x_48, t);
  t = y_48;
  {
    static ATerm q_49 (ATerm t);
    static ATerm q_49 (ATerm t)
    {
      ATerm x_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_49 = NULL;
              e_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_49;
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              t = z_108(t);
              t = Cons_2_0(_id, q_49, t);
            }
          LocalPopChoice(y_33);
        }
      else
        {
          t = x_33;
          {
            ATerm h_49 = NULL,n_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_49 = ATgetFirst((ATermList) t);
                n_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_49), (ATerm) ATmakeAppl(sym_Undefined_1, h_49));
          }
        }
      return(t);
    }
    t = q_49(t);
  }
  a_49 = t;
  t = (ATerm) ATinsert(CheckATermList(a_49), (ATerm) ATmakeAppl(sym_Program_1, x_48));
  w_8 = t;
  t = SSLsetAnnotations(w_8, w_48);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm n_50 = NULL;
  n_50 = t;
  if(match_string(t, "--help"))
    {
      t = n_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_50;
        }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  t = term_h_31;
  o_50 = t;
  t = term_n_24;
  p_50 = t;
  t = term_g_34;
  t = f_8(o_50, p_50, t);
  t = term_h_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  h_50 = t;
  t = term_u_28;
  i_50 = t;
  t = term_m_34;
  t = lookup_table_0_1(i_50, t);
  m_50 = t;
  t = term_v_28;
  j_50 = t;
  t = (ATerm) ATempty;
  k_50 = t;
  t = m_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(j_50, k_50, l_50, t);
  t = h_50;
  {
    static ATerm a_7 (ATerm t);
    static ATerm a_7 (ATerm t)
    {
      ATerm n_34 = t;
      int o_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_108(t);
          LocalPopChoice(o_34);
        }
      else
        {
          t = n_34;
          {
            ATerm t_34 = t;
            int u_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, i_8, t);
                LocalPopChoice(u_34);
              }
            else
              {
                t = t_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_7, t);
  }
  {
    ATerm w_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_51 = NULL;
        a_51 = t;
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_16 = NULL;
              t = a_51;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_16 = NULL,h_16 = NULL;
                    t = term_l_10;
                    g_16 = t;
                    t = term_h_31;
                    h_16 = t;
                    t = term_i_31;
                    t = c_8(g_16, h_16, t);
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = a_51;
              t = default_system_usage_0_0(t);
              t = term_v_27;
              f_16 = t;
              t = SSL_exit(f_16);
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              {
                ATerm v_16 = NULL,c_17 = NULL,d_17 = NULL;
                t = term_l_10;
                c_17 = t;
                t = term_t_32;
                d_17 = t;
                t = term_q_35;
                t = c_8(c_17, d_17, t);
                t = a_51;
                t = default_system_about_0_0(t);
                t = term_v_27;
                v_16 = t;
                t = SSL_exit(v_16);
              }
            }
        }
        LocalPopChoice(b_35);
      }
    else
      {
        t = w_34;
        {
          ATerm r_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
              static ATerm m_8 (ATerm t);
              static ATerm m_8 (ATerm t)
              {
                ATerm e_51 = NULL,f_51 = NULL,g_51 = NULL,e_9 = NULL;
                g_51 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_51 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_51);
                e_51 = t;
                t = f_51;
                if(((d_50 != NULL) && (d_50 != t)))
                  _fail(t);
                else
                  d_50 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_51);
                e_9 = t;
                t = SSLsetAnnotations(e_9, e_51);
                return(t);
              }
              t = fetch_1_0(m_8, t);
              t = term_p_18;
              c_51 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_50)), term_t_35);
              d_51 = t;
              t = SSL_printnl(c_51, d_51);
              t = (ATerm) ATmakeAppl(sym__2, term_p_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_50)), term_t_35));
              t = default_system_usage_0_0(t);
              t = term_k_11;
              b_51 = t;
              t = SSL_exit(b_51);
              LocalPopChoice(s_35);
            }
          else
            {
              t = r_35;
            }
        }
      }
  }
  g_50 = t;
  t = term_u_28;
  t = table_destroy_0_0(t);
  t = g_50;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL;
  t = parse_options_1_0(d_107, t);
  l_51 = t;
  t = term_v_35;
  t = table_create_0_0(t);
  t = term_v_35;
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_35, term_x_35, l_51);
  t = lookup_table_0_1(m_51, t);
  p_51 = t;
  t = term_x_35;
  n_51 = t;
  t = p_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(n_51, l_51, o_51, t);
  t = l_51;
  t = f_107(t);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_107, t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        {
          ATerm a_36 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_36);
            }
          else
            {
              t = a_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm f_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sglri_options_0_0(t);
      LocalPopChoice(i_36);
    }
  else
    {
      t = f_36;
      {
        ATerm j_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(l_36);
          }
        else
          {
            t = j_36;
            {
              ATerm m_36 = t;
              int n_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_36);
                }
              else
                {
                  t = m_36;
                  {
                    ATerm q_36 = t;
                    int r_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_8, r_8, s_8, t);
                        LocalPopChoice(r_36);
                      }
                    else
                      {
                        t = q_36;
                        {
                          ATerm s_36 = t;
                          int t_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(t_36);
                            }
                          else
                            {
                              t = s_36;
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
static ATerm o_8 (ATerm t)
{
  t = xtc_temp_files_1_0(t_8, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL;
  t = term_u_36;
  r_51 = t;
  t = term_n_24;
  s_51 = t;
  t = term_v_36;
  t = f_8(r_51, s_51, t);
  t = term_x_36;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_y_36;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm z_36 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
      t = term_l_10;
      v_51 = t;
      t = term_o_24;
      w_51 = t;
      t = term_g_37;
      t = c_8(v_51, w_51, t);
      u_51 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_51);
      LocalPopChoice(d_37);
    }
  else
    {
      t = z_36;
      t = term_r_10;
    }
  t = parse_and_implode_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_8, default_usage_0_0, _id, o_8, t);
  return(t);
}
