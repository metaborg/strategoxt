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
ATerm term_z_36;
ATerm term_s_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_j_36;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_m_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_l_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_w_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_y_28;
ATerm term_v_28;
ATerm term_s_28;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_b_27;
ATerm term_u_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_x_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_f_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_q_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_w_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_j_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_e_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_s_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_k_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_w_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_d_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_o_11, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_z_9, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_o_13, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_v_13, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_j_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_g_16, term_h_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_r_16, term_v_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_e_17, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_w_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_e_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_q_18, term_z_18);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_w_19, term_x_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_b_20, term_c_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_w_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_q_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_a_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_v_23);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_u_26);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_f_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_m_27);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_a_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_o_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_a_30);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_l_32, term_m_27);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_m_27);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_m_27);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, (ATerm) ATempty);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_l_32);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym__2, term_j_36, term_m_27);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_j_9, term_n_27);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm s_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm t_6 (ATerm f_79 (ATerm), ATerm m_181, ATerm d_18, ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t);
static ATerm u_6 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm w_6 (ATerm m_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_99 (ATerm), ATerm t);
static ATerm y_6 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm z_6 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_7 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm b_7 (ATerm c_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm f_7 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm u_15 (ATerm l_15, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_7 (ATerm z_17, ATerm t);
static ATerm d_7 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_17 (ATerm e_16, ATerm t);
static ATerm o_17 (ATerm i_16, ATerm j_16, ATerm k_16, ATerm t);
static ATerm p_17 (ATerm s_16, ATerm t_16, ATerm u_16, ATerm t);
static ATerm e_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm y_23 (ATerm p_22, ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm y_101 (ATerm), ATerm t);
static ATerm g_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm h_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm q_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm k_7 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm s_50, ATerm t_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_32 (ATerm h_32, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_7 (ATerm y_50, ATerm x_50, ATerm t);
static ATerm r_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm u_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm v_7 (ATerm i_50, ATerm j_50, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_7 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm o_7 (ATerm p_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
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
    ATerm t_8 = t;
    int w_8 = stack_ptr;
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
        t = j_7(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(w_8);
      }
    else
      {
        t = t_8;
        {
          ATerm a_9 = t;
          int b_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm c_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_0 = NULL;
                    w_0 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_0;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_0;
                          }
                        else
                          {
                            t = w_0;
                            if((l_1 != t))
                              {
                                _fail(t);
                              }
                            t = w_0;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = j_7(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(b_9);
            }
          else
            {
              t = a_9;
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
static ATerm j_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 = NULL,f_2 = NULL;
      t = term_j_9;
      e_2 = t;
      t = term_k_9;
      f_2 = t;
      t = term_l_9;
      t = q_7(e_2, f_2, t);
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
      t = term_m_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm c_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_1 = NULL,p_1 = NULL;
      t = term_k_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL;
            t = term_j_9;
            q_1 = t;
            t = term_k_9;
            r_1 = t;
            t = term_l_9;
            t = q_7(q_1, r_1, t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = term_m_9;
          }
      }
      m_1 = t;
      t = term_s_9;
      p_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, m_1);
      t = j_7(p_1, m_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm x_2 = NULL;
  x_2 = t;
  {
    ATerm u_9 = t;
    int v_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL;
        t = term_j_9;
        c_3 = t;
        t = term_w_9;
        d_3 = t;
        t = term_x_9;
        t = q_7(c_3, d_3, t);
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_3, term_z_9);
        t = geq_0_0(t);
        t = x_2;
        t = w_98(t);
        LocalPopChoice(v_9);
      }
    else
      {
        t = u_9;
        t = x_2;
      }
  }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = debug_1_0(c_0, t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,p_3 = NULL,q_3 = NULL,x_0 = NULL;
  g_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_10), term_b_10), g_3);
  l_3 = t;
  t = SSL_concat_strings(l_3);
  k_3 = t;
  t = (ATerm) ATinsert(ATempty, term_e_10);
  j_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATinsert(ATempty, term_e_10));
  t = f_7(k_3, j_3, t);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  q_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_10 = ATgetArgument(t, 0);
      ATerm g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_3);
  m_3 = t;
  t = SSL_modification_time(f_3);
  n_3 = t;
  t = SSL_modification_time(g_3);
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, p_3);
  x_0 = t;
  t = SSLsetAnnotations(x_0, m_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, f_3, g_3);
  i_3 = t;
  t = SSL_explode_term(i_3);
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_10 = ATgetArgument(t, 1);
        if(((ATgetType(i_10) == AT_LIST) && !(ATisEmpty(i_10))))
          {
            h_3 = ATgetFirst((ATermList) i_10);
            {
              ATerm j_10 = (ATerm) ATgetNext((ATermList) i_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_3;
  t = if_verbose2_1_0(b_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  static ATerm m_4 (ATerm t);
  static ATerm m_4 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_84(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          ATerm h_4 = NULL,i_4 = NULL,k_4 = NULL,h_2 = NULL,k_2 = NULL,z_0 = NULL;
          h_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_4 = ATgetFirst((ATermList) t);
              k_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_4);
          h_2 = t;
          t = k_4;
          t = m_4(t);
          k_2 = t;
          t = (ATerm) ATinsert(CheckATermList(k_2), i_4);
          z_0 = t;
          t = SSLsetAnnotations(z_0, h_2);
        }
      }
    return(t);
  }
  t = m_4(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_o_10;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_o_10;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = debug_1_0(a_1, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL;
      q_2 = t;
      t = term_d_11;
      r_2 = t;
      t = SSL_explode_string(r_2);
      p_2 = t;
      t = SSL_explode_string(q_2);
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if((p_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(f_0, t);
      }
      t = q_2;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
            u_2 = t;
            t = term_g_11;
            v_2 = t;
            t = SSL_explode_string(v_2);
            t_2 = t;
            t = SSL_explode_string(u_2);
            {
              static ATerm i_0 (ATerm t);
              static ATerm i_0 (ATerm t)
              {
                if((t_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(i_0, t);
            }
            t = u_2;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
              u_4 = t;
              t = term_j_11;
              w_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_m_11);
              x_4 = t;
              t = SSL_printnl(w_4, x_4);
              t = term_o_11;
              v_4 = t;
              t = SSL_exit(v_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, u_4), term_m_11);
            }
          }
      }
      {
        ATerm q_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(s_11);
          }
        else
          {
            t = q_11;
            {
              ATerm k_5 = NULL,a_3 = NULL;
              k_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
              {
                ATerm x_11 = t;
                int y_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL,s_3 = NULL,d_1 = NULL;
                    s_3 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm z_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(s_3);
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, k_5);
                    d_1 = t;
                    t = SSLsetAnnotations(d_1, r_3);
                    LocalPopChoice(y_11);
                    t = xtc_transform_file_2_0(k_0, n_0, t);
                  }
                else
                  {
                    t = x_11;
                    t = xtc_transform_term_2_0(s_0, u_0, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  a_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_3;
              t = if_verbose2_1_0(y_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 = NULL,p_5 = NULL;
      t = term_j_9;
      m_5 = t;
      t = term_d_12;
      p_5 = t;
      t = term_e_12;
      t = q_7(m_5, p_5, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm q_5 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  q_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_5), term_d_12);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = debug_1_0(e_1, t);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(b_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(c_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_5 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_s_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_10);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_5, (ATerm) ATinsert(ATempty, term_e_10));
      t = f_7(u_5, x_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm y_5 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  y_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_5);
  return(t);
}
static ATerm t_6 (ATerm f_79 (ATerm), ATerm m_181, ATerm d_18, ATerm t)
{
  ATerm z_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_181, term_g_12);
  t = e_7(t);
  z_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_5, d_18);
  t = f_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(match_cons(i_12, sym_Stream_1))
        {
          i_6 = ATgetArgument(i_12, 0);
        }
      else
        _fail(t);
      j_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(i_6, j_6, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL;
  h_6 = t;
  t = xtc_new_file_0_0(t);
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_6, h_6);
  t = t_6(g_1, g_6, h_6, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_6);
  t = xtc_transform_file_2_0(x_100, y_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm v_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_8 = ATgetArgument(t, 0);
      {
        ATerm c_4 = NULL,f_4 = NULL;
        t = SSL_int_to_string(x_8);
        c_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), c_4), term_j_12);
        f_4 = t;
        t = SSL_concat_strings(f_4);
      }
    }
  else
    {
      ATerm e_5 = NULL,f_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_8 = ATgetArgument(t, 0);
          y_8 = ATgetArgument(t, 1);
          z_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_8);
      e_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_8), term_o_12), e_5), term_m_12), x_8);
      f_5 = t;
      t = SSL_concat_strings(f_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm f_9 = NULL;
  static ATerm j_1 (ATerm t);
  static ATerm j_1 (ATerm t)
  {
    t = i_84(t);
    if(((f_9 != NULL) && (f_9 != t)))
      _fail(t);
    else
      f_9 = t;
    return(t);
  }
  t = fetch_1_0(j_1, t);
  t = not_null(f_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  {
    ATerm q_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm n_1 (ATerm t);
        static ATerm n_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm t_12 = ATgetArgument(t, 0);
              if((g_9 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm u_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), term_t_20), term_p_20), term_l_20), term_g_20), term_y_19), term_r_19), term_n_19), term_f_19), term_g_18), term_a_18), term_h_17), term_w_16), term_o_16), term_c_16), term_s_15), term_k_15), term_g_15), term_c_15), term_v_14), term_n_14), term_e_14), term_z_13), term_r_13), term_k_13), term_g_13), term_b_13), term_y_12);
        t = fetch_elem_1_0(n_1, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = q_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm n_9 = NULL,y_9 = NULL;
  n_9 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            y_9 = ATgetArgument(t, 1);
            {
              ATerm b_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_20);
        {
          ATerm c_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 = NULL,b_6 = NULL,c_6 = NULL;
              t = y_9;
              {
                ATerm e_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              w_5 = t;
              t = term_j_11;
              b_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, w_5), term_f_21);
              c_6 = t;
              t = SSL_printnl(b_6, c_6);
              t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, w_5), term_f_21));
              LocalPopChoice(d_21);
            }
          else
            {
              t = c_21;
              t = n_9;
            }
        }
      }
    else
      {
        t = y_20;
        t = n_9;
      }
  }
  t = n_9;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  n_10 = t;
  t = fork_0_0(t);
  m_10 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_10;
        t = u_77(t);
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = SSL_waitpid(m_10);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            if(((ATgetType(l_21) != AT_INT) || (ATgetInt((ATermInt) l_21) != 0)))
              _fail(t);
            {
              ATerm m_21 = ATgetArgument(t, 1);
            }
            {
              ATerm n_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_10;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm q_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  q_10 = t;
  t = d_79(t);
  s_10 = t;
  t = term_j_11;
  t_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_10), s_10);
  u_10 = t;
  t = SSL_printnl(t_10, u_10);
  t = q_10;
  return(t);
}
static ATerm w_6 (ATerm m_50, ATerm t)
{
  t = SSL_hashtable_keys(m_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  static ATerm o_1 (ATerm t);
  static ATerm o_1 (ATerm t)
  {
    ATerm x_10 = NULL,a_11 = NULL;
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_10), x_10);
    t = q_7(not_null(v_10), x_10, t);
    a_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_10, a_11);
    return(t);
  }
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = lookup_table_0_1(v_10, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_6(w_10, t);
  t = map_1_0(o_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  c_11 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_11 = NULL,i_11 = NULL,l_11 = NULL;
        t = term_j_9;
        i_11 = t;
        t = term_w_9;
        l_11 = t;
        t = term_x_9;
        t = q_7(i_11, l_11, t);
        h_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_11, term_j_20);
        t = geq_0_0(t);
        t = c_11;
        t = z_98(t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = c_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm p_11 = NULL;
  p_11 = t;
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_11 = NULL,v_11 = NULL,w_11 = NULL;
        t = term_j_9;
        v_11 = t;
        t = term_w_9;
        w_11 = t;
        t = term_x_9;
        t = q_7(v_11, w_11, t);
        u_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_11, term_i_15);
        t = geq_0_0(t);
        t = p_11;
        t = y_98(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = p_11;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  {
    ATerm w_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL,k_12 = NULL,n_12 = NULL;
        t = term_j_9;
        k_12 = t;
        t = term_w_9;
        n_12 = t;
        t = term_x_9;
        t = q_7(k_12, n_12, t);
        h_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_12, term_i_13);
        t = geq_0_0(t);
        t = c_12;
        t = a_99(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = w_21;
        t = c_12;
      }
  }
  return(t);
}
static ATerm y_6 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = l_88(t);
  {
    static ATerm s_1 (ATerm t);
    static ATerm s_1 (ATerm t)
    {
      ATerm r_12 = NULL;
      r_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, r_12);
      t = k_88(t);
      return(t);
    }
    t = fetch_1_0(s_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm z_6 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm x_13 (ATerm t);
  static ATerm x_13 (ATerm t)
  {
    ATerm m_13 = NULL,n_13 = NULL,u_13 = NULL;
    m_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_13 = ATgetFirst((ATermList) t);
            u_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_13;
              {
                static ATerm t_1 (ATerm t);
                static ATerm t_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = y_6(h_88, t_1, n_13, u_13, t);
              }
              t = x_13(t);
              LocalPopChoice(f_22);
            }
          else
            {
              t = b_22;
              {
                ATerm l_6 = NULL,o_6 = NULL,f_1 = NULL;
                t = SSLgetAnnotations(m_13);
                l_6 = t;
                t = u_13;
                t = x_13(t);
                o_6 = t;
                t = (ATerm) ATinsert(CheckATermList(o_6), n_13);
                f_1 = t;
                t = SSLsetAnnotations(f_1, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = x_13(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      if((s_14 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm d_14 = NULL,g_14 = NULL,h_14 = NULL,k_14 = NULL;
  d_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_22 = ATgetArgument(t, 0);
            ATerm j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = q_7(k_46, l_46, t);
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
        t = (ATerm) ATempty;
      }
  }
  h_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_14, m_46);
  t = z_6(u_1, h_14, m_46, t);
  g_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, g_14);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(l_46, g_14, k_14, t);
  t = d_14;
  return(t);
}
static ATerm b_7 (ATerm c_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm v_1 (ATerm t);
  static ATerm v_1 (ATerm t)
  {
    ATerm x_14 = NULL,y_14 = NULL;
    if(match_cons(t, sym__2))
      {
        x_14 = ATgetArgument(t, 0);
        y_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_46, x_14, y_14);
    t = c_99(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(v_1, t);
  return(t);
}
static ATerm f_7 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_access(v_51, w_51);
  return(t);
}
static ATerm u_15 (ATerm l_15, ATerm t)
{
  t = SSL_fclose(l_15);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_15 = ATgetArgument(t, 0);
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_15);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            t = u_15(p_15, t);
          }
      }
    }
  else
    {
      t = u_15(p_15, t);
    }
  return(t);
}
static ATerm c_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm d_7 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm v_15 = NULL;
  t = SSL_fopen(e_52, f_52);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_15);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_stdin_stream();
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_15);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  t = SSL_stdout_stream();
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_15);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_15 = NULL;
  t = SSL_stderr_stream();
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_15);
  return(t);
}
static ATerm n_17 (ATerm e_16, ATerm t)
{
  ATerm f_16 = NULL;
  t = SSL_explode_term(e_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
          {
            f_16 = ATgetFirst((ATermList) n_22);
            {
              ATerm o_22 = (ATerm) ATgetNext((ATermList) n_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_17 (ATerm i_16, ATerm j_16, ATerm k_16, ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,q_16 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(k_16);
  n_16 = t;
  t = i_16;
  if(match_cons(t, sym_Path_1))
    {
      q_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_16, j_16);
  h_1 = t;
  t = SSLsetAnnotations(h_1, n_16);
  if(match_cons(t, sym__2))
    {
      l_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(l_16, m_16, t);
  return(t);
}
static ATerm p_17 (ATerm s_16, ATerm t_16, ATerm u_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL,g_17 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(u_16);
  z_16 = t;
  t = SSL_is_string(s_16);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, t_16);
  i_1 = t;
  t = SSLsetAnnotations(i_1, z_16);
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(x_16, y_16, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
      {
        ATerm q_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_17(k_17, t);
            LocalPopChoice(v_22);
          }
        else
          {
            t = q_22;
            {
              ATerm w_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_17(l_17, m_17, k_17, t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = w_22;
                  t = p_17(l_17, m_17, k_17, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_17(k_17, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,v_17 = NULL,f_18 = NULL;
  f_18 = t;
  {
    ATerm a_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_18, term_d_23);
        t = e_7(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = a_23;
        {
          ATerm h_8 = NULL,i_8 = NULL;
          t = term_e_23;
          i_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_23, f_18);
          t = h_7(i_8, f_18, t);
          h_8 = t;
          t = SSL_perror(h_8);
          _fail(t);
        }
      }
  }
  s_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(v_17, t);
  r_17 = t;
  t = s_17;
  t = fclose_0_0(t);
  t = r_17;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = NULL,j_18 = NULL;
      i_18 = t;
      t = (ATerm) ATinsert(ATempty, term_k_23);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_18, (ATerm) ATinsert(ATempty, term_k_23));
      t = f_7(i_18, j_18, t);
      LocalPopChoice(j_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_23;
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 = t;
            if((PushChoice() == 0))
              {
                ATerm k_18 = NULL,l_18 = NULL;
                k_18 = t;
                t = (ATerm) ATinsert(ATempty, term_e_10);
                l_18 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_18, (ATerm) ATinsert(ATempty, term_e_10));
                t = f_7(k_18, l_18, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_23;
              }
            t = debug_1_0(w_1, t);
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
            t = debug_1_0(y_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = debug_1_0(d_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = term_j_11;
  i_19 = t;
  t = (ATerm) ATinsert(ATempty, term_r_23);
  j_19 = t;
  t = SSL_printnl(i_19, j_19);
  t = h_19;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm k_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__3))
    {
      k_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
      u_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(k_19, t_19, u_19, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm v_19 = NULL,a_20 = NULL,d_20 = NULL;
  v_19 = t;
  t = term_j_11;
  a_20 = t;
  t = (ATerm) ATinsert(ATempty, term_s_23);
  d_20 = t;
  t = SSL_printnl(a_20, d_20);
  t = v_19;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,h_20 = NULL;
  e_20 = t;
  t = term_j_11;
  f_20 = t;
  t = (ATerm) ATinsert(ATempty, term_r_23);
  h_20 = t;
  t = SSL_printnl(f_20, h_20);
  t = e_20;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,b_19 = NULL,c_19 = NULL;
  m_18 = t;
  t = if_verbose5_1_0(a_2, t);
  {
    ATerm t_23 = t;
    if((PushChoice() == 0))
      {
        ATerm d_19 = NULL,e_19 = NULL;
        t = term_u_23;
        d_19 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_18);
        e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Imported_1, m_18));
        t = q_7(d_19, e_19, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_23;
      }
  }
  o_18 = t;
  t = term_u_23;
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_23, term_v_23, (ATerm) ATinsert(ATempty, m_18));
  t = lookup_table_0_1(w_18, t);
  c_19 = t;
  t = term_v_23;
  x_18 = t;
  t = (ATerm) ATinsert(ATempty, m_18);
  y_18 = t;
  t = c_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(x_18, y_18, b_19, t);
  t = o_18;
  t = if_verbose4_1_0(g_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(j_2, t);
  n_18 = t;
  t = term_u_23;
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, n_18);
  t = b_7(l_2, v_18, n_18, t);
  t = if_verbose6_1_0(m_2, t);
  t = term_u_23;
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_23, (ATerm)ATmakeAppl(sym_Imported_1, m_18), (ATerm) ATempty);
  t = lookup_table_0_1(p_18, t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_18);
  r_18 = t;
  t = (ATerm) ATempty;
  s_18 = t;
  t = u_18;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(r_18, s_18, t_18, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_23, (ATerm)ATmakeAppl(sym_Imported_1, m_18), (ATerm) ATempty);
  t = if_verbose4_1_0(n_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,k_21 = NULL;
  g_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_21 = ATgetFirst((ATermList) t);
          k_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm x_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL,d_9 = NULL,e_9 = NULL,x_1 = NULL;
            t = SSLgetAnnotations(g_21);
            u_8 = t;
            t = h_21;
            t = o_92(t);
            d_9 = t;
            t = k_21;
            t = filter_1_0(o_92, t);
            e_9 = t;
            t = (ATerm) ATinsert(CheckATermList(e_9), d_9);
            x_1 = t;
            t = SSLsetAnnotations(x_1, u_8);
            LocalPopChoice(z_23);
          }
        else
          {
            t = x_23;
            t = k_21;
            t = filter_1_0(o_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  static ATerm o_21 (ATerm t);
  static ATerm o_21 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_82(t);
        t = o_21(t);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = b_82(t);
      }
    return(t);
  }
  t = o_21(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_21 = NULL,u_21 = NULL;
      t = term_j_9;
      p_21 = t;
      t = term_q_24;
      u_21 = t;
      t = term_s_24;
      t = q_7(p_21, u_21, t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_21 = NULL;
            t = term_v_24;
            v_21 = t;
            t = SSL_getenv(v_21);
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = term_u_23;
  d_22 = t;
  t = term_a_25;
  e_22 = t;
  t = term_i_25;
  t = q_7(d_22, e_22, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_25;
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_l_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm x_21 = NULL;
  t = if_verbose5_1_0(o_2, t);
  x_21 = t;
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_21 = NULL,z_21 = NULL;
        t = term_u_23;
        y_21 = t;
        t = term_v_23;
        z_21 = t;
        t = term_o_25;
        t = q_7(y_21, z_21, t);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        {
          ATerm c_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          c_22 = t;
          t = repeat_2_0(y_2, _id, t);
          t = c_22;
        }
      }
  }
  t = x_21;
  t = if_verbose5_1_0(z_2, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm y_23 (ATerm p_22, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
  t = term_u_23;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_22);
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Tool_1, p_22));
  t = q_7(s_22, t_22, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_25 = ATgetFirst((ATermList) t);
      if(match_cons(r_25, sym__2))
        {
          ATerm w_25 = ATgetArgument(r_25, 0);
          r_22 = ATgetArgument(r_25, 1);
        }
      else
        _fail(t);
      {
        ATerm s_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_22;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_u_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(b_4, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm a_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_22 = NULL,x_22 = NULL,y_22 = NULL;
      t = if_verbose5_1_0(o_3, t);
      t = xtc_load_0_0(t);
      y_22 = t;
      if(match_cons(t, sym__2))
        {
          u_22 = ATgetArgument(t, 0);
          x_22 = ATgetArgument(t, 1);
          {
            ATerm d_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_23 = NULL,i_23 = NULL,n_23 = NULL;
                t = term_u_23;
                i_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, u_22);
                n_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Tool_1, u_22));
                t = q_7(i_23, n_23, t);
                {
                  static ATerm v_3 (ATerm t);
                  static ATerm v_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((x_22 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((b_23 != NULL) && (b_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_3, t);
                }
                t = not_null(b_23);
                LocalPopChoice(h_26);
              }
            else
              {
                t = d_26;
                t = y_23(y_22, t);
              }
          }
        }
      else
        {
          t = y_23(y_22, t);
        }
      t = if_verbose5_1_0(w_3, t);
      LocalPopChoice(c_26);
    }
  else
    {
      t = a_26;
      {
        ATerm w_23 = NULL,o_9 = NULL,p_9 = NULL;
        w_23 = t;
        t = term_j_11;
        o_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_26), w_23), term_j_26);
        p_9 = t;
        t = SSL_printnl(o_9, p_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_26), w_23), term_j_26);
        t = if_verbose5_1_0(z_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  d_24 = t;
  t = y_101(t);
  t = xtc_find_0_0(t);
  c_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
  {
    static ATerm d_4 (ATerm t);
    static ATerm d_4 (ATerm t)
    {
      ATerm e_24 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_24, d_24);
      t = u_6(c_24, d_24, t);
      t = term_m_26;
      e_24 = t;
      t = SSL_exit(e_24);
      return(t);
    }
    t = fork_and_wait_1_0(d_4, t);
  }
  t = d_24;
  return(t);
}
static ATerm g_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm f_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL;
  k_24 = t;
  t = u_94(t);
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_24, j_35, h_35);
  t = r_7(f_24, j_35, h_35, t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL;
        t = term_u_26;
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_24, term_u_26);
        t = q_7(f_24, p_24, t);
        {
          ATerm v_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_26;
            }
        }
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
      i_24 = ATgetFirst((ATermList) t);
      j_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_24, term_u_26, (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATinsert(CheckATermList(i_24), j_35)));
  t = lookup_table_0_1(f_24, t);
  o_24 = t;
  t = term_u_26;
  l_24 = t;
  t = (ATerm) ATinsert(CheckATermList(j_24), (ATerm) ATinsert(CheckATermList(i_24), j_35));
  m_24 = t;
  t = o_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(l_24, m_24, n_24, t);
  t = k_24;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm r_24 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,d_10 = NULL;
      w_24 = t;
      t = term_b_27;
      d_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_24, term_b_27);
      t = h_7(w_24, d_10, t);
      r_24 = t;
      t = SSL_mkstemp(r_24);
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm x_24 = NULL;
        t = term_i_27;
        x_24 = t;
        t = SSL_perror(x_24);
        _fail(t);
      }
    }
  return(t);
}
static ATerm h_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm z_24 = NULL,b_25 = NULL,e_25 = NULL,f_25 = NULL,j_25 = NULL;
  t = P__tmpdir_0_0(t);
  f_25 = t;
  t = term_k_27;
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_25, term_k_27);
  t = h_7(f_25, j_25, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_25 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_27;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_25, term_m_27);
  t = g_7(g_4, b_25, e_25, t);
  t = SSL_close(z_24);
  t = b_25;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm q_25 = NULL,t_25 = NULL;
  q_25 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_25 = NULL,v_25 = NULL;
      t = q_25;
      t = xtc_new_file_0_0(t);
      u_25 = t;
      t = t_0(t);
      v_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_25, (ATerm) ATinsert(ATinsert(ATempty, u_25), term_k_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, u_25);
    }
  else
    {
      ATerm y_25 = NULL,z_25 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_25;
      t = xtc_new_file_0_0(t);
      y_25 = t;
      t = t_0(t);
      z_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_25, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_25), term_k_9), t_25), term_n_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_25);
    }
  return(t);
}
static ATerm q_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm b_26 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(h_47, b_26, t);
  return(t);
}
static ATerm k_7 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  f_26 = t;
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = q_7(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_27 = ATgetFirst((ATermList) t);
            e_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_27);
        {
          ATerm g_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, e_26);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(t_45, e_26, g_26, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, e_26);
        }
      }
    else
      {
        t = o_27;
        {
          ATerm i_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              i_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_7(t_45, i_26, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = f_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm l_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,w_26 = NULL;
  r_26 = t;
  t = r_94(t);
  q_26 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_26 = NULL;
        t = term_u_26;
        z_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_26, term_u_26);
        t = q_7(q_26, z_26, t);
        {
          ATerm y_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_27;
            }
        }
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_26 = ATgetFirst((ATermList) t);
      l_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_26, term_u_26, l_26);
  t = lookup_table_0_1(q_26, t);
  w_26 = t;
  t = term_u_26;
  s_26 = t;
  t = w_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_26, l_26, t_26, t);
  t = p_26;
  {
    static ATerm j_4 (ATerm t);
    static ATerm j_4 (ATerm t)
    {
      ATerm a_27 = NULL;
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_26, a_27);
      t = k_7(q_26, a_27, t);
      return(t);
    }
    t = map_1_0(j_4, t);
  }
  t = r_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm z_27 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_98(t);
      t = k_98(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = z_27;
      t = k_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,l_27 = NULL;
  d_27 = t;
  t = q_94(t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_27, term_u_26);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_28 = ATgetArgument(t, 0);
            ATerm i_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_26;
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_27, term_u_26);
        t = q_7(c_27, r_27, t);
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
  }
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_27, term_u_26, (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty));
  t = lookup_table_0_1(c_27, t);
  l_27 = t;
  t = term_u_26;
  f_27 = t;
  t = (ATerm) ATinsert(CheckATermList(e_27), (ATerm) ATempty);
  g_27 = t;
  t = l_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(f_27, g_27, h_27, t);
  t = d_27;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm a_28 = NULL;
  a_28 = t;
  {
    ATerm j_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_28);
        LocalPopChoice(l_28);
      }
    else
      {
        t = j_28;
        t = a_28;
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_j_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm u_27 = NULL;
  static ATerm o_4 (ATerm t);
  static ATerm o_4 (ATerm t)
  {
    ATerm v_27 = NULL;
    v_27 = t;
    {
      ATerm n_28 = t;
      int q_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_27 = NULL,x_27 = NULL;
          t = term_j_27;
          w_27 = t;
          t = term_u_26;
          x_27 = t;
          t = term_s_28;
          t = q_7(w_27, x_27, t);
          LocalPopChoice(q_28);
        }
      else
        {
          t = n_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((u_27 != NULL) && (u_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          u_27 = ATgetFirst((ATermList) t);
        {
          ATerm t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = u_27;
    t = map_1_0(p_4, t);
    t = v_27;
    t = end_scope_1_0(r_4, t);
    return(t);
  }
  t = begin_scope_1_0(l_4, t);
  t = restore_always_2_0(k_101, o_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,k_28 = NULL,m_28 = NULL;
  f_28 = t;
  t = term_m_27;
  t = whoami_0_0(t);
  g_28 = t;
  t = term_j_11;
  k_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_28), g_28), term_v_28);
  m_28 = t;
  t = SSL_printnl(k_28, m_28);
  t = term_o_11;
  h_28 = t;
  t = SSL_exit(h_28);
  t = f_28;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  if(match_string(t, "-k"))
    {
      t = o_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_28;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm p_28 = NULL,r_28 = NULL,u_28 = NULL;
  p_28 = t;
  t = SSL_string_to_int(p_28);
  r_28 = t;
  t = term_d_29;
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_29, r_28);
  t = t_7(u_28, r_28, t);
  t = p_28;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_e_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, y_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  if(match_string(t, "-S"))
    {
      t = w_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_28;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm x_28 = NULL,z_28 = NULL;
  t = term_w_9;
  x_28 = t;
  t = term_f_29;
  z_28 = t;
  t = term_g_29;
  t = t_7(x_28, z_28, t);
  t = term_i_29;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_j_29;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  b_29 = t;
  t = term_w_9;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, b_29);
  t = t_7(c_29, b_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_29);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_l_29;
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
  ATerm h_29 = NULL,k_29 = NULL;
  t = term_o_29;
  h_29 = t;
  t = term_m_27;
  k_29 = t;
  t = term_p_29;
  t = t_7(h_29, k_29, t);
  t = term_q_29;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_r_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, b_5, c_5, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm w_29 = t;
        int y_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, g_5, h_5, t);
            LocalPopChoice(y_29);
          }
        else
          {
            t = w_29;
            t = Option_3_0(i_5, j_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  t = term_j_9;
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, s_50, t_50);
  t = lookup_table_0_1(m_29, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(s_50, t_50, n_29, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, s_50, t_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,v_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_29 = NULL,b_30 = NULL,c_30 = NULL;
      t = term_m_27;
      t = h_0(t);
      x_29 = t;
      t = term_z_29;
      b_30 = t;
      t = term_a_30;
      c_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, x_29);
      t = r_7(b_30, c_30, x_29, t);
      _fail(t);
    }
  else
    {
      ATerm g_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_29 = ATgetFirst((ATermList) t);
          v_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_29;
      t = d_0(t);
      t = term_m_27;
      t = g_0(t);
      g_30 = t;
      t = (ATerm) ATinsert(CheckATermList(v_29), g_30);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  if(match_string(t, "-o"))
    {
      t = l_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_30;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  m_30 = t;
  t = term_k_9;
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_9, m_30);
  t = t_7(n_30, m_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_30);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_d_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, r_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  if(match_string(t, "-i"))
    {
      t = p_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_30;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm q_30 = NULL,t_30 = NULL;
  q_30 = t;
  t = term_n_27;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, q_30);
  t = t_7(t_30, q_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_30);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, v_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm b_32 (ATerm t);
  static ATerm b_32 (ATerm t)
  {
    ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
    y_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_31 = ATgetFirst((ATermList) t);
        x_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_10 = NULL,b_11 = NULL,z_1 = NULL;
          t = SSLgetAnnotations(y_31);
          r_10 = t;
          t = x_31;
          t = b_32(t);
          b_11 = t;
          t = (ATerm) ATinsert(CheckATermList(b_11), w_31);
          z_1 = t;
          t = SSLsetAnnotations(z_1, r_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_31;
        t = n_84(t);
      }
    return(t);
  }
  t = b_32(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_30 = NULL,x_30 = NULL,y_30 = NULL;
  v_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_30;
    }
  else
    {
      static ATerm a_6 (ATerm t);
      static ATerm a_6 (ATerm t)
      {
        t = not_null(y_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_30 = ATgetFirst((ATermList) t);
          if(((y_30 != NULL) && (y_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_30;
      t = at_end_1_0(a_6, t);
    }
  return(t);
}
static ATerm v_32 (ATerm h_32, ATerm t)
{
  ATerm k_32 = NULL;
  t = SSL_explode_term(h_32);
  if(match_cons(t, sym__2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_32;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_32 = NULL,o_32 = NULL,p_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      m_32 = ATgetArgument(t, 0);
      o_32 = ATgetArgument(t, 1);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm d_6 (ATerm t);
            static ATerm d_6 (ATerm t)
            {
              t = o_32;
              return(t);
            }
            t = m_32;
            t = at_end_1_0(d_6, t);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = v_32(p_32, t);
          }
      }
    }
  else
    {
      t = v_32(p_32, t);
    }
  return(t);
}
static ATerm i_7 (ATerm y_50, ATerm x_50, ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  t = y_50;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_33 = NULL;
        t = term_j_9;
        c_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_9, y_50);
        t = q_7(c_33, y_50, t);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = (ATerm) ATempty;
      }
  }
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_50, y_32);
  t = conc_0_0(t);
  x_32 = t;
  t = term_j_9;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, y_50, x_32);
  t = lookup_table_0_1(z_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(y_50, x_32, a_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_9, y_50, x_32);
  return(t);
}
static ATerm r_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,j_33 = NULL;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm o_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm u_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = q_7(n_45, o_45, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATempty;
      }
  }
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(f_33), m_45));
  t = lookup_table_0_1(n_45, t);
  j_33 = t;
  t = (ATerm) ATinsert(CheckATermList(f_33), m_45);
  g_33 = t;
  t = j_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(o_45, g_33, h_33, t);
  t = e_33;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm r_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_33 = NULL,c_34 = NULL,d_34 = NULL;
      t = term_m_27;
      t = p_0(t);
      z_33 = t;
      t = term_z_29;
      c_34 = t;
      t = term_a_30;
      d_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, z_33);
      t = r_7(c_34, d_34, z_33, t);
      _fail(t);
    }
  else
    {
      ATerm h_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_33 = ATgetFirst((ATermList) t);
          u_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_33;
      t = m_0(t);
      t = x_33;
      t = o_0(t);
      h_34 = t;
      t = (ATerm) ATinsert(CheckATermList(y_33), h_34);
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  i_34 = t;
  t = term_d_12;
  j_34 = t;
  t = (ATerm) ATinsert(ATempty, i_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATempty, i_34));
  t = i_7(j_34, k_34, t);
  t = i_34;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_w_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, k_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_27;
  t = whoami_0_0(t);
  l_34 = t;
  t = term_j_11;
  n_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_30), l_34);
  o_34 = t;
  t = SSL_printnl(n_34, o_34);
  t = term_o_11;
  m_34 = t;
  t = SSL_exit(m_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL;
  t = term_j_9;
  p_34 = t;
  t = term_a_31;
  q_34 = t;
  t = term_b_31;
  t = q_7(p_34, q_34, t);
  return(t);
}
static ATerm l_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_34;
      t = k_91(t);
    }
  else
    {
      ATerm y_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_34 = ATgetFirst((ATermList) t);
          v_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      t = foldr_2_0(k_91, l_91, t);
      y_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, y_34);
      t = l_91(t);
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
  t = term_f_29;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm r_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(r_11, t_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_35 = NULL,k_11 = NULL,n_11 = NULL;
  t = times_0_0(t);
  n_11 = t;
  t = SSL_explode_term(n_11);
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11;
  t = foldr_2_0(m_6, n_6, t);
  o_35 = t;
  t = SSL_TicksToSeconds(o_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,n_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      n_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_36;
        if((l_36 != t))
          {
            _fail(t);
          }
        t = k_36;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = (ATerm) ATmakeAppl(sym__2, l_36, n_36);
        {
          ATerm h_31 = t;
          int i_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_36, n_36);
              LocalPopChoice(i_31);
            }
          else
            {
              t = h_31;
              t = SSL_gtr(l_36, n_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_36, n_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
        t = term_j_9;
        w_36 = t;
        t = term_w_9;
        x_36 = t;
        t = term_x_9;
        t = q_7(w_36, x_36, t);
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_36, term_o_11);
        t = geq_0_0(t);
        t = t_36;
        t = v_98(t);
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = t_36;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,d_37 = NULL,g_37 = NULL;
  t = run_time_0_0(t);
  a_37 = t;
  t = term_m_27;
  t = whoami_0_0(t);
  b_37 = t;
  t = term_j_11;
  d_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_31), a_37), term_m_12), b_37);
  g_37 = t;
  t = SSL_printnl(d_37, g_37);
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_31), a_37), term_m_12), b_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_29;
  h_37 = t;
  t = SSL_exit(h_37);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm p_12 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(w_37);
            p_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_37);
            b_2 = t;
            t = SSLsetAnnotations(b_2, p_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_37 = NULL,l_37 = NULL;
      t = term_j_9;
      k_37 = t;
      t = term_o_31;
      l_37 = t;
      t = term_p_31;
      t = q_7(k_37, l_37, t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = fetch_1_0(q_6, t);
    }
  t = f_103(t);
  return(t);
}
static ATerm u_7 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm a_38 = NULL;
  t = SSL_hashtable_put(h_50, f_50, g_50);
  a_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_38);
  return(t);
}
static ATerm v_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_hashtable_get(j_50, i_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm o_38 = NULL;
  t = table_hashtable_0_0(t);
  o_38 = t;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL;
        t = o_38;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_7(z_46, w_12, t);
        LocalPopChoice(r_31);
      }
    else
      {
        t = q_31;
        {
          ATerm f_13 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = o_38;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_7(z_46, f_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm r_38 = NULL;
  t = SSL_hashtable_create(n_50, o_50);
  r_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_38);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,d_39 = NULL,g_39 = NULL;
  t_38 = t;
  t = term_s_31;
  d_39 = t;
  t = term_t_31;
  g_39 = t;
  t = t_38;
  t = new_hashtable_0_2(d_39, g_39, t);
  u_38 = t;
  t = t_38;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(t_38, u_38, v_38, t);
  t = t_38;
  return(t);
}
static ATerm n_7 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm h_39 = NULL;
  t = SSL_hashtable_remove(l_50, k_50);
  h_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_39);
  return(t);
}
static ATerm o_7 (ATerm p_50, ATerm t)
{
  ATerm k_39 = NULL;
  t = SSL_hashtable_destroy(p_50);
  k_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_39 = NULL;
  t = SSL_table_hashtable();
  m_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_39);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  n_39 = t;
  t = table_hashtable_0_0(t);
  r_39 = t;
  t = lookup_table_0_1(n_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(t_39, t);
  t = r_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_7(n_39, s_39, t);
  t = n_39;
  return(t);
}
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  static ATerm q_40 (ATerm t);
  static ATerm q_40 (ATerm t)
  {
    ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
    n_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_40;
      }
    else
      {
        ATerm q_13 = NULL,t_13 = NULL,y_13 = NULL,s_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_40 = ATgetFirst((ATermList) t);
            p_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_40);
        q_13 = t;
        t = o_40;
        t = w_83(t);
        t_13 = t;
        t = p_40;
        t = q_40(t);
        y_13 = t;
        t = (ATerm) ATinsert(CheckATermList(y_13), t_13);
        s_2 = t;
        t = SSLsetAnnotations(s_2, q_13);
      }
    return(t);
  }
  t = q_40(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_40 = ATgetFirst((ATermList) t);
      u_40 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_40 = NULL,z_40 = NULL;
        static ATerm r_6 (ATerm t);
        static ATerm r_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_40)), not_null(z_40));
          return(t);
        }
        t = u_40;
        t = l_0(t);
        if(((y_40 != NULL) && (y_40 != t)))
          _fail(t);
        else
          y_40 = t;
        t = t_40;
        t = j_0(t);
        if(((z_40 != NULL) && (z_40 != t)))
          _fail(t);
        else
          z_40 = t;
        t = u_40;
        t = reverse_acc_2_0(j_0, r_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_27;
      t = l_0(t);
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,t_3 = NULL;
  h_41 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_41);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_41);
  t_3 = t;
  t = SSLsetAnnotations(t_3, f_41);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm j_41 = NULL;
  j_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_41), term_u_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  ATerm v_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_41 = NULL,e_41 = NULL;
      t = term_j_9;
      d_41 = t;
      t = term_a_31;
      e_41 = t;
      t = term_b_31;
      t = q_7(d_41, e_41, t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = v_31;
      t = fetch_1_0(v_6, t);
    }
  t = term_a_32;
  t = echo_0_0(t);
  t = term_z_29;
  b_41 = t;
  t = term_a_30;
  c_41 = t;
  t = term_c_32;
  t = q_7(b_41, c_41, t);
  t = reverse_acc_2_0(_id, x_6, t);
  t = map_1_0(m_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm n_42 (ATerm t);
  static ATerm n_42 (ATerm t)
  {
    ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
    k_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_42 = ATgetFirst((ATermList) t);
        m_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL,z_14 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(k_42);
          o_14 = t;
          t = l_42;
          t = g_84(t);
          z_14 = t;
          t = (ATerm) ATinsert(CheckATermList(m_42), z_14);
          x_3 = t;
          t = SSLsetAnnotations(x_3, o_14);
          LocalPopChoice(e_32);
        }
      else
        {
          t = d_32;
          {
            ATerm q_15 = NULL,z_15 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(k_42);
            q_15 = t;
            t = m_42;
            t = n_42(t);
            z_15 = t;
            t = (ATerm) ATinsert(CheckATermList(z_15), l_42);
            a_4 = t;
            t = SSLsetAnnotations(a_4, q_15);
          }
        }
    }
    return(t);
  }
  t = n_42(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_42 = NULL,s_42 = NULL,t_42 = NULL;
  r_42 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_32 = ATgetFirst((ATermList) t);
                ATerm j_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_42;
          }
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        t = (ATerm) ATinsert(ATempty, r_42);
      }
  }
  s_42 = t;
  t = term_m_9;
  t_42 = t;
  t = SSL_printnl(t_42, s_42);
  t = r_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  t = term_j_9;
  x_42 = t;
  t = term_a_31;
  y_42 = t;
  t = term_b_31;
  t = q_7(x_42, y_42, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = term_l_32;
  z_42 = t;
  t = term_m_27;
  a_43 = t;
  t = term_n_32;
  t = t_7(z_42, a_43, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  t = term_l_32;
  d_43 = t;
  t = term_m_27;
  e_43 = t;
  t = term_n_32;
  t = t_7(d_43, e_43, t);
  t = term_t_32;
  b_43 = t;
  t = term_m_27;
  c_43 = t;
  t = term_u_32;
  t = t_7(b_43, c_43, t);
  t = term_w_32;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_7, s_7, w_7, t);
      LocalPopChoice(i_33);
    }
  else
    {
      t = d_33;
      t = Option_3_0(x_7, y_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,e_4 = NULL;
  k_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_43 = ATgetFirst((ATermList) t);
      h_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  f_43 = t;
  t = g_43;
  t = p_70(t);
  i_43 = t;
  t = h_43;
  t = q_70(t);
  j_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), i_43);
  e_4 = t;
  t = SSLsetAnnotations(e_4, f_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,u_43 = NULL,v_43 = NULL,n_4 = NULL;
  p_43 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = d_105(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
      }
  }
  t = p_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_43 = ATgetFirst((ATermList) t);
      s_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_43);
  q_43 = t;
  t = term_a_31;
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, r_43);
  t = t_7(v_43, r_43, t);
  t = s_43;
  {
    static ATerm f_44 (ATerm t);
    static ATerm f_44 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_43 = NULL;
              y_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_43;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              t = d_105(t);
              t = Cons_2_0(_id, f_44, t);
            }
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          {
            ATerm b_44 = NULL,c_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_44 = ATgetFirst((ATermList) t);
                c_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_44), (ATerm) ATmakeAppl(sym_Undefined_1, b_44));
          }
        }
      return(t);
    }
    t = f_44(t);
  }
  u_43 = t;
  t = (ATerm) ATinsert(CheckATermList(u_43), (ATerm) ATmakeAppl(sym_Program_1, r_43));
  n_4 = t;
  t = SSLsetAnnotations(n_4, q_43);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm s_44 = NULL;
  s_44 = t;
  if(match_string(t, "--help"))
    {
      t = s_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_44;
        }
    }
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL;
  t = term_o_31;
  t_44 = t;
  t = term_m_27;
  u_44 = t;
  t = term_s_33;
  t = t_7(t_44, u_44, t);
  t = term_t_33;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL;
  m_44 = t;
  t = term_z_29;
  n_44 = t;
  t = term_b_34;
  t = lookup_table_0_1(n_44, t);
  r_44 = t;
  t = term_a_30;
  o_44 = t;
  t = (ATerm) ATempty;
  p_44 = t;
  t = r_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(o_44, p_44, q_44, t);
  t = m_44;
  {
    static ATerm a_8 (ATerm t);
    static ATerm a_8 (ATerm t)
    {
      ATerm e_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_105(t);
          LocalPopChoice(f_34);
        }
      else
        {
          t = e_34;
          {
            ATerm g_34 = t;
            int r_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, c_8, d_8, t);
                LocalPopChoice(r_34);
              }
            else
              {
                t = g_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
  }
  {
    ATerm s_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_45 = NULL;
        g_45 = t;
        {
          ATerm x_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_17 = NULL;
              t = g_45;
              {
                ATerm a_35 = t;
                int b_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_17 = NULL,d_17 = NULL;
                    t = term_j_9;
                    b_17 = t;
                    t = term_o_31;
                    d_17 = t;
                    t = term_p_31;
                    t = q_7(b_17, d_17, t);
                    LocalPopChoice(b_35);
                  }
                else
                  {
                    t = a_35;
                    t = fetch_1_0(e_8, t);
                  }
              }
              t = g_45;
              t = default_system_usage_0_0(t);
              t = term_f_29;
              a_17 = t;
              t = SSL_exit(a_17);
              LocalPopChoice(z_34);
            }
          else
            {
              t = x_34;
              {
                ATerm q_17 = NULL,x_17 = NULL,y_17 = NULL;
                t = term_j_9;
                x_17 = t;
                t = term_l_32;
                y_17 = t;
                t = term_c_35;
                t = q_7(x_17, y_17, t);
                t = g_45;
                t = default_system_about_0_0(t);
                t = term_f_29;
                q_17 = t;
                t = SSL_exit(q_17);
              }
            }
        }
        LocalPopChoice(w_34);
      }
    else
      {
        t = s_34;
        {
          ATerm d_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_45 = NULL,p_45 = NULL,q_45 = NULL;
              static ATerm f_8 (ATerm t);
              static ATerm f_8 (ATerm t)
              {
                ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL,q_4 = NULL;
                w_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_45);
                u_45 = t;
                t = v_45;
                if(((k_44 != NULL) && (k_44 != t)))
                  _fail(t);
                else
                  k_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_45);
                q_4 = t;
                t = SSLsetAnnotations(q_4, u_45);
                return(t);
              }
              t = fetch_1_0(f_8, t);
              t = term_j_11;
              p_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_44)), term_f_35);
              q_45 = t;
              t = SSL_printnl(p_45, q_45);
              t = (ATerm) ATmakeAppl(sym__2, term_j_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_44)), term_f_35));
              t = default_system_usage_0_0(t);
              t = term_o_11;
              h_45 = t;
              t = SSL_exit(h_45);
              LocalPopChoice(e_35);
            }
          else
            {
              t = d_35;
            }
        }
      }
  }
  l_44 = t;
  t = term_z_29;
  t = table_destroy_0_0(t);
  t = l_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  t = parse_options_1_0(h_103, t);
  b_46 = t;
  t = term_g_35;
  t = table_create_0_0(t);
  t = term_g_35;
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_35, term_i_35, b_46);
  t = lookup_table_0_1(c_46, t);
  f_46 = t;
  t = term_i_35;
  d_46 = t;
  t = f_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(d_46, b_46, e_46, t);
  t = b_46;
  t = j_103(t);
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_103, t);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_35 = t;
      int s_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = pp_options_0_0(t);
          LocalPopChoice(s_35);
        }
      else
        {
          t = r_35;
          {
            ATerm t_35 = t;
            int u_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_option_0_0(t);
                LocalPopChoice(u_35);
              }
            else
              {
                t = t_35;
                {
                  ATerm v_35 = t;
                  int w_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = output_option_0_0(t);
                      LocalPopChoice(w_35);
                    }
                  else
                    {
                      t = v_35;
                      {
                        ATerm x_35 = t;
                        int y_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Option_3_0(k_8, l_8, m_8, t);
                            LocalPopChoice(y_35);
                          }
                        else
                          {
                            t = x_35;
                            {
                              ATerm z_35 = t;
                              int a_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = verbose_option_0_0(t);
                                  LocalPopChoice(a_36);
                                }
                              else
                                {
                                  t = z_35;
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
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm d_36 = t;
              int e_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(e_36);
                }
              else
                {
                  t = d_36;
                  {
                    ATerm f_36 = t;
                    int g_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_8, o_8, p_8, t);
                        LocalPopChoice(g_36);
                      }
                    else
                      {
                        t = f_36;
                        {
                          ATerm h_36 = t;
                          int i_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(i_36);
                            }
                          else
                            {
                              t = h_36;
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
static ATerm j_8 (ATerm t)
{
  t = xtc_temp_files_1_0(q_8, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm j_46 = NULL,p_46 = NULL;
  t = term_j_36;
  j_46 = t;
  t = term_m_27;
  p_46 = t;
  t = term_m_36;
  t = t_7(j_46, p_46, t);
  t = term_o_36;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL;
  t = term_j_36;
  q_46 = t;
  t = term_m_27;
  r_46 = t;
  t = term_m_36;
  t = t_7(q_46, r_46, t);
  t = term_o_36;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_46 = NULL,y_46 = NULL,d_47 = NULL;
      t = term_j_9;
      y_46 = t;
      t = term_n_27;
      d_47 = t;
      t = term_s_36;
      t = q_7(y_46, d_47, t);
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_46);
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      t = term_s_9;
    }
  {
    ATerm u_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL,m_47 = NULL;
        m_47 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_47 = ATgetArgument(t, 0);
            {
              ATerm a_19 = NULL,a_5 = NULL;
              t = SSLgetAnnotations(m_47);
              a_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_47);
              a_5 = t;
              t = SSLsetAnnotations(a_5, a_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_47;
          }
        LocalPopChoice(y_36);
        t = xtc_transform_file_2_0(r_8, create_pp_table_args_0_0, t);
      }
    else
      {
        t = u_36;
        t = xtc_transform_term_2_0(s_8, create_pp_table_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_z_36;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_8, default_usage_0_0, _id, j_8, t);
  return(t);
}
