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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_s_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_c_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_h_31;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_o_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_y_28;
ATerm term_x_28;
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
ATerm term_i_28;
ATerm term_c_28;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_x_25;
ATerm term_q_25;
ATerm term_j_25;
ATerm term_h_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_n_24;
ATerm term_w_23;
ATerm term_u_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_e_21;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
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
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_v_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_x_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_o_9;
ATerm term_g_9;
ATerm term_a_9;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_i_11, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_g_10, term_m_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_13, term_x_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_d_14, term_e_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_u_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_f_15, term_g_15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_15, term_k_15, term_v_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_i_16, term_j_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_u_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_i_18, term_k_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_c_19, term_d_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_g_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_l_19, term_n_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_t_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_l_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_y_24);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_w_23);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_f_26);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_m_28);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_r_28, term_v_0);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_j_29, term_o_29);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_s_32, term_v_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, term_y_32, term_v_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_v_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_k_35, term_v_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm m_6 (ATerm m_14, ATerm l_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm u_80 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm j_70 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm o_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm p_6 (ATerm z_64 (ATerm), ATerm g_164, ATerm v_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t);
static ATerm q_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm o_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm x_80 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm w_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm y_80 (ATerm), ATerm t);
static ATerm t_6 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm u_6 (ATerm t_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm v_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t);
static ATerm w_6 (ATerm a_81 (ATerm), ATerm o_36, ATerm n_36, ATerm t);
static ATerm a_7 (ATerm p_38, ATerm q_38, ATerm t);
static ATerm y_12 (ATerm l_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_6 (ATerm t_17, ATerm t);
static ATerm y_6 (ATerm y_38, ATerm z_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_15 (ATerm t_13, ATerm t);
static ATerm p_15 (ATerm a_14, ATerm c_14, ATerm j_14, ATerm t);
static ATerm q_15 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm r_20 (ATerm k_19, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm t);
static ATerm b_7 (ATerm p_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm m_35, ATerm n_35, ATerm t);
ATerm end_scope_1_0 (ATerm m_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm l_79 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm m_7 (ATerm h_37, ATerm i_37, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_29 (ATerm a_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_7 (ATerm n_37, ATerm m_37, ATerm t);
static ATerm k_7 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_7 (ATerm c_33, ATerm d_33, ATerm t);
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm t_80 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_7 (ATerm x_31, ATerm y_31, ATerm t);
ATerm debug_1_0 (ATerm x_64 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm j_7 (ATerm y_36, ATerm z_36, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_87 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm parse_options_1_0 (ATerm a_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  t = term_v_0;
  t = new_0_0(t);
  b_0 = t;
  t = term_a_9;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_a_9);
  t = i_7(b_0, f_0, t);
  j_0 = t;
  {
    ATerm d_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = (ATerm) ATinsert(ATempty, term_g_9);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_0, (ATerm) ATinsert(ATempty, term_g_9));
        t = a_7(j_0, q_0, t);
        t = new_file_0_0(t);
        LocalPopChoice(f_9);
      }
    else
      {
        t = d_9;
        t = j_0;
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
static ATerm m_6 (ATerm m_14, ATerm l_14, ATerm t)
{
  ATerm h_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(k_9);
    }
  else
    {
      t = h_9;
      t = get_errno_0_0(t);
      t = term_v_0;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = c_7(m_14, l_14, t);
      t = SSL_remove(m_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
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
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL;
        t = p_1;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_o_9;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, term_o_9);
        t = c_7(q_1, w_0, t);
        t = SSL_remove(q_1);
        t = term_o_9;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 = NULL;
              t = p_1;
              t = t_0(t);
              e_1 = t;
              {
                ATerm s_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_1 = NULL;
                    g_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_1;
                      }
                    else
                      {
                        t = g_1;
                        if((q_1 != t))
                          {
                            _fail(t);
                          }
                        t = g_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_1, e_1);
              t = m_6(q_1, e_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = p_1;
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
static ATerm h_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_t_9;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = debug_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_u_9;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  {
    static ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
      {
        ATerm x_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 = NULL,e_2 = NULL,c_1 = NULL;
            e_2 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm b_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_2);
            d_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
            c_1 = t;
            t = SSLsetAnnotations(c_1, d_2);
            LocalPopChoice(z_9);
            t = xtc_transform_file_2_0(h_0, m_0, t);
          }
        else
          {
            t = x_9;
            t = xtc_transform_term_2_0(s_0, u_0, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(a_0, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_1;
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, term_g_10);
        t = geq_0_0(t);
        t = g_2;
        t = u_80(t);
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = g_2;
      }
  }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = debug_1_0(a_1, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,f_1 = NULL;
  a_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), term_i_10), a_3);
  f_3 = t;
  t = SSL_concat_strings(f_3);
  e_3 = t;
  t = (ATerm) ATinsert(ATempty, term_g_9);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATempty, term_g_9));
  t = a_7(e_3, d_3, t);
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
  j_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      ATerm l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_3);
  g_3 = t;
  t = SSL_modification_time(y_2);
  h_3 = t;
  t = SSL_modification_time(a_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, i_3);
  f_1 = t;
  t = SSLsetAnnotations(f_1, g_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, y_2, a_3);
  c_3 = t;
  t = SSL_explode_term(c_3);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_10 = ATgetArgument(t, 1);
        if(((ATgetType(n_10) == AT_LIST) && !(ATisEmpty(n_10))))
          {
            b_3 = ATgetFirst((ATermList) n_10);
            {
              ATerm o_10 = (ATerm) ATgetNext((ATermList) n_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_3;
  t = if_verbose2_1_0(z_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  static ATerm g_4 (ATerm t)
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_70(t);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm b_4 = NULL,d_4 = NULL,f_4 = NULL,w_1 = NULL,c_2 = NULL,j_1 = NULL;
          b_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_4 = ATgetFirst((ATermList) t);
              f_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_4);
          w_1 = t;
          t = f_4;
          t = g_4(t);
          c_2 = t;
          t = (ATerm) ATinsert(CheckATermList(c_2), d_4);
          j_1 = t;
          t = SSLsetAnnotations(j_1, w_1);
        }
      }
    return(t);
  }
  t = g_4(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
      n_2 = t;
      t = term_x_10;
      o_2 = t;
      t = SSL_explode_string(o_2);
      m_2 = t;
      t = SSL_explode_string(n_2);
      {
        static ATerm b_1 (ATerm t)
        {
          if((m_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(b_1, t);
      }
      t = n_2;
      LocalPopChoice(w_10);
    }
  else
    {
      t = r_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
            r_2 = t;
            t = term_b_11;
            s_2 = t;
            t = SSL_explode_string(s_2);
            q_2 = t;
            t = SSL_explode_string(r_2);
            {
              static ATerm d_1 (ATerm t)
              {
                if((q_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(d_1, t);
            }
            t = r_2;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
              ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
              l_4 = t;
              t = term_e_11;
              n_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_h_11);
              o_4 = t;
              t = SSL_printnl(n_4, o_4);
              t = term_i_11;
              m_4 = t;
              t = SSL_exit(m_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, l_4), term_h_11);
            }
          }
      }
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_11;
      t = get_config_0_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm q_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  q_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_4), term_q_11);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(h_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(i_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_w_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          u_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_g_9);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_4, (ATerm) ATinsert(ATempty, term_g_9));
      t = a_7(u_4, w_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm o_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm z_4 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_4);
  return(t);
}
static ATerm p_6 (ATerm z_64 (ATerm), ATerm g_164, ATerm v_17, ATerm t)
{
  ATerm b_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_164, term_x_11);
  t = z_6(t);
  b_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_5, v_17);
  t = z_64(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_11 = ATgetArgument(t, 0);
      if(match_cons(y_11, sym_Stream_1))
        {
          f_5 = ATgetArgument(y_11, 0);
        }
      else
        _fail(t);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_6(f_5, g_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  e_5 = t;
  t = xtc_new_file_0_0(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, e_5);
  t = p_6(m_1, d_5, e_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_5);
  t = xtc_transform_file_2_0(u_82, v_82, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm h_6 = NULL,k_6 = NULL,h_7 = NULL,n_7 = NULL;
  h_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_6 = ATgetArgument(t, 0);
      {
        ATerm z_2 = NULL,k_3 = NULL;
        t = SSL_int_to_string(k_6);
        z_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_12), z_2), term_z_11);
        k_3 = t;
        t = SSL_concat_strings(k_3);
      }
    }
  else
    {
      ATerm e_4 = NULL,p_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_6 = ATgetArgument(t, 0);
          h_7 = ATgetArgument(t, 1);
          n_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(h_7);
      e_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_7), term_c_12), e_4), term_b_12), k_6);
      p_4 = t;
      t = SSL_concat_strings(p_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm s_7 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = b_70(t);
    if(((s_7 != NULL) && (s_7 != t)))
      _fail(t);
    else
      s_7 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(s_7);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm u_7 = NULL;
  u_7 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_12 = ATgetArgument(t, 0);
              if((u_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_20), term_i_20), term_b_20), term_x_19), term_o_19), term_i_19), term_e_19), term_a_19), term_w_18), term_o_18), term_e_18), term_w_17), term_q_17), term_k_17), term_g_17), term_p_16), term_e_16), term_h_15), term_v_14), term_h_14), term_z_13), term_u_13), term_n_13), term_j_13), term_d_13), term_u_12), term_n_12), term_j_12);
        t = fetch_elem_1_0(r_1, t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, u_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_7 = NULL,g_8 = NULL;
  y_7 = t;
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            g_8 = ATgetArgument(t, 1);
            {
              ATerm s_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_20);
        {
          ATerm t_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = g_8;
              {
                ATerm a_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              c_5 = t;
              t = term_e_11;
              i_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_5), term_e_21);
              j_5 = t;
              t = SSL_printnl(i_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATempty, c_5), term_e_21));
              LocalPopChoice(z_20);
            }
          else
            {
              t = t_20;
              t = y_7;
            }
        }
      }
    else
      {
        t = o_20;
        t = y_7;
      }
  }
  t = y_7;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm o_63 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  w_8 = t;
  t = fork_0_0(t);
  v_8 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = w_8;
        t = o_63(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = SSL_waitpid(v_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            if(((ATgetType(h_21) != AT_INT) || (ATgetInt((ATermInt) h_21) != 0)))
              _fail(t);
            {
              ATerm j_21 = ATgetArgument(t, 1);
            }
            {
              ATerm k_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm z_8 = NULL;
  static ATerm t_1 (ATerm t)
  {
    ATerm b_9 = NULL,c_9 = NULL;
    b_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), b_9);
    t = j_7(not_null(z_8), b_9, t);
    c_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
    return(t);
  }
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = SSL_table_keys(z_8);
  t = map_1_0(t_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_9 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_9, term_t_19);
        t = geq_0_0(t);
        t = e_9;
        t = x_80(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = e_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm n_9 = NULL;
  n_9 = t;
  {
    ATerm p_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_9 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        r_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_9, term_k_15);
        t = geq_0_0(t);
        t = n_9;
        t = w_80(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = p_21;
        t = n_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_9 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        y_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_9, term_w_12);
        t = geq_0_0(t);
        t = w_9;
        t = y_80(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = w_9;
      }
  }
  return(t);
}
static ATerm t_6 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = x_73(t);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm c_10 = NULL;
      c_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, c_10);
      t = w_73(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm u_6 (ATerm t_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm y_10 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
    t_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_10 = ATgetFirst((ATermList) t);
            v_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_10;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = t_6(t_73, v_1, u_10, v_10, t);
              }
              t = y_10(t);
              LocalPopChoice(z_21);
            }
          else
            {
              t = x_21;
              {
                ATerm z_5 = NULL,e_6 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(t_10);
                z_5 = t;
                t = v_10;
                t = y_10(t);
                e_6 = t;
                t = (ATerm) ATinsert(CheckATermList(e_6), u_10);
                l_1 = t;
                t = SSLsetAnnotations(l_1, z_5);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = y_10(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      if((p_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm e_36, ATerm f_36, ATerm g_36, ATerm t)
{
  ATerm d_11 = NULL,f_11 = NULL,g_11 = NULL;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
  {
    ATerm a_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            ATerm h_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
        t = j_7(e_36, f_36, t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = a_22;
        t = (ATerm) ATempty;
      }
  }
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_11, g_36);
  t = u_6(x_1, g_11, g_36, t);
  f_11 = t;
  t = SSL_table_put(e_36, f_36, f_11);
  t = d_11;
  return(t);
}
static ATerm w_6 (ATerm a_81 (ATerm), ATerm o_36, ATerm n_36, ATerm t)
{
  static ATerm a_2 (ATerm t)
  {
    ATerm r_11 = NULL,u_11 = NULL;
    if(match_cons(t, sym__2))
      {
        r_11 = ATgetArgument(t, 0);
        u_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, o_36, r_11, u_11);
    t = a_81(t);
    return(t);
  }
  t = n_36;
  t = map_1_0(a_2, t);
  return(t);
}
static ATerm a_7 (ATerm p_38, ATerm q_38, ATerm t)
{
  t = SSL_access(p_38, q_38);
  return(t);
}
static ATerm y_12 (ATerm l_12, ATerm t)
{
  t = SSL_fclose(l_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL;
  t_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_12 = ATgetArgument(t, 0);
      {
        ATerm k_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_12);
            LocalPopChoice(n_22);
          }
        else
          {
            t = k_22;
            t = y_12(t_12, t);
          }
      }
    }
  else
    {
      t = y_12(t_12, t);
    }
  return(t);
}
static ATerm x_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm y_6 (ATerm y_38, ATerm z_38, ATerm t)
{
  ATerm z_12 = NULL;
  t = SSL_fopen(y_38, z_38);
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_13 = NULL;
  t = SSL_stdin_stream();
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_stdout_stream();
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_stderr_stream();
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_13);
  return(t);
}
static ATerm o_15 (ATerm t_13, ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_explode_term(t_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
          {
            v_13 = ATgetFirst((ATermList) p_22);
            {
              ATerm q_22 = (ATerm) ATgetNext((ATermList) p_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm p_15 (ATerm a_14, ATerm c_14, ATerm j_14, ATerm t)
{
  ATerm k_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL,o_1 = NULL;
  t = SSLgetAnnotations(j_14);
  q_14 = t;
  t = a_14;
  if(match_cons(t, sym_Path_1))
    {
      t_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_14, c_14);
  o_1 = t;
  t = SSLsetAnnotations(o_1, q_14);
  if(match_cons(t, sym__2))
    {
      k_14 = ATgetArgument(t, 0);
      p_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(k_14, p_14, t);
  return(t);
}
static ATerm q_15 (ATerm y_14, ATerm z_14, ATerm a_15, ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL,j_15 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(a_15);
  d_15 = t;
  t = SSL_is_string(y_14);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_15, z_14);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_15);
  if(match_cons(t, sym__2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(b_15, c_15, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL;
  l_15 = t;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      {
        ATerm r_22 = t;
        int s_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_15(l_15, t);
            LocalPopChoice(s_22);
          }
        else
          {
            t = r_22;
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_15(m_15, n_15, l_15, t);
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = q_15(m_15, n_15, l_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_15(l_15, t);
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_v_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL;
      u_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, term_y_22);
      t = z_6(t);
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = debug_1_0(b_2, t);
      _fail(t);
    }
  s_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_6(t_15, t);
  r_15 = t;
  t = s_15;
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_15 = NULL,x_15 = NULL;
      w_15 = t;
      t = (ATerm) ATinsert(ATempty, term_d_23);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_15, (ATerm) ATinsert(ATempty, term_d_23));
      t = a_7(w_15, x_15, t);
      LocalPopChoice(c_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = b_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = t;
            if((PushChoice() == 0))
              {
                ATerm y_15 = NULL,z_15 = NULL;
                y_15 = t;
                t = (ATerm) ATinsert(ATempty, term_g_9);
                z_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_15, (ATerm) ATinsert(ATempty, term_g_9));
                t = a_7(y_15, z_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_23;
              }
            t = debug_1_0(f_2, t);
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = debug_1_0(h_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  t = term_e_11;
  t_16 = t;
  t = (ATerm) ATinsert(ATempty, term_o_23);
  u_16 = t;
  t = SSL_printnl(t_16, u_16);
  t = s_16;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__3))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
      x_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_6(v_16, w_16, x_16, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL;
  y_16 = t;
  t = term_e_11;
  z_16 = t;
  t = (ATerm) ATinsert(ATempty, term_r_23);
  a_17 = t;
  t = SSL_printnl(z_16, a_17);
  t = y_16;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  t = term_e_11;
  c_17 = t;
  t = (ATerm) ATinsert(ATempty, term_o_23);
  d_17 = t;
  t = SSL_printnl(c_17, d_17);
  t = b_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  a_16 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm s_23 = t;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL,r_16 = NULL;
        t = term_u_23;
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_16);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Imported_1, a_16));
        t = j_7(o_16, r_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_23;
      }
  }
  c_16 = t;
  t = term_u_23;
  l_16 = t;
  t = term_w_23;
  m_16 = t;
  t = (ATerm) ATinsert(ATempty, a_16);
  n_16 = t;
  t = SSL_table_put(l_16, m_16, n_16);
  t = c_16;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(u_2, t);
  b_16 = t;
  t = term_u_23;
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, b_16);
  t = w_6(v_2, k_16, b_16, t);
  t = if_verbose6_1_0(w_2, t);
  t = term_u_23;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, a_16);
  g_16 = t;
  t = (ATerm) ATempty;
  h_16 = t;
  t = SSL_table_put(d_16, g_16, h_16);
  t = (ATerm) ATmakeAppl(sym__3, term_u_23, (ATerm)ATmakeAppl(sym_Imported_1, a_16), (ATerm) ATempty);
  t = if_verbose4_1_0(x_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_17 = ATgetFirst((ATermList) t);
          z_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 = NULL,i_8 = NULL,j_8 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(x_17);
            w_7 = t;
            t = y_17;
            t = l_77(t);
            i_8 = t;
            t = z_17;
            t = filter_1_0(l_77, t);
            j_8 = t;
            t = (ATerm) ATinsert(CheckATermList(j_8), i_8);
            t_2 = t;
            t = SSLsetAnnotations(t_2, w_7);
            LocalPopChoice(a_24);
          }
        else
          {
            t = y_23;
            t = z_17;
            t = filter_1_0(l_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_67 (ATerm), ATerm v_67 (ATerm), ATerm t)
{
  static ATerm f_18 (ATerm t)
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_67(t);
        t = f_18(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = v_67(t);
      }
    return(t);
  }
  t = f_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_24;
      t = get_config_0_0(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = i_24;
      {
        ATerm r_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_18 = NULL;
            t = term_w_24;
            j_18 = t;
            t = SSL_getenv(j_18);
            LocalPopChoice(t_24);
          }
        else
          {
            t = r_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_x_24;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm r_18 = NULL,t_18 = NULL;
  t = term_u_23;
  r_18 = t;
  t = term_y_24;
  t_18 = t;
  t = term_z_24;
  t = j_7(r_18, t_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_25;
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_c_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = if_verbose5_1_0(l_3, t);
  l_18 = t;
  {
    ATerm e_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,n_18 = NULL;
        t = term_u_23;
        m_18 = t;
        t = term_w_23;
        n_18 = t;
        t = term_h_25;
        t = j_7(m_18, n_18, t);
        LocalPopChoice(g_25);
      }
    else
      {
        t = e_25;
        {
          ATerm p_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          p_18 = t;
          t = repeat_2_0(n_3, _id, t);
          t = p_18;
        }
      }
  }
  t = l_18;
  t = if_verbose5_1_0(o_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm r_20 (ATerm k_19, ATerm t)
{
  ATerm m_19 = NULL,p_19 = NULL,r_19 = NULL;
  t = term_u_23;
  p_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_19);
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Tool_1, k_19));
  t = j_7(p_19, r_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_25 = ATgetFirst((ATermList) t);
      if(match_cons(k_25, sym__2))
        {
          ATerm p_25 = ATgetArgument(k_25, 0);
          m_19 = ATgetArgument(k_25, 1);
        }
      else
        _fail(t);
      {
        ATerm m_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_19;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_u_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(a_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_19 = NULL,u_19 = NULL,v_19 = NULL;
      t = if_verbose5_1_0(q_3, t);
      t = xtc_load_0_0(t);
      v_19 = t;
      if(match_cons(t, sym__2))
        {
          s_19 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
          {
            ATerm v_25 = t;
            int w_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
                t = term_u_23;
                f_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_19);
                g_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Tool_1, s_19));
                t = j_7(f_20, g_20, t);
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_19 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          e_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_3, t);
                }
                t = not_null(e_20);
                LocalPopChoice(w_25);
              }
            else
              {
                t = v_25;
                t = r_20(v_19, t);
              }
          }
        }
      else
        {
          t = r_20(v_19, t);
        }
      t = if_verbose5_1_0(v_3, t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      {
        ATerm n_20 = NULL,u_8 = NULL,y_8 = NULL;
        n_20 = t;
        t = term_e_11;
        u_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_25), n_20), term_x_25);
        y_8 = t;
        t = SSL_printnl(u_8, y_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_25), n_20), term_x_25);
        t = if_verbose5_1_0(y_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL;
  v_20 = t;
  t = v_83(t);
  t = xtc_find_0_0(t);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
  {
    static ATerm c_4 (ATerm t)
    {
      ATerm w_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_20, v_20);
      t = q_6(u_20, v_20, t);
      t = term_a_26;
      w_20 = t;
      t = SSL_exit(w_20);
      return(t);
    }
    t = fork_and_wait_1_0(c_4, t);
  }
  t = v_20;
  return(t);
}
static ATerm b_7 (ATerm p_79 (ATerm), ATerm q_34, ATerm o_34, ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,i_21 = NULL;
  c_21 = t;
  t = p_79(t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_20, q_34, o_34);
  t = k_7(x_20, q_34, o_34, t);
  {
    ATerm b_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL;
        t = term_f_26;
        n_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_20, term_f_26);
        t = j_7(x_20, n_21, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_20 = ATgetFirst((ATermList) t);
      b_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_26;
  d_21 = t;
  t = (ATerm) ATinsert(CheckATermList(b_21), (ATerm) ATinsert(CheckATermList(y_20), q_34));
  i_21 = t;
  t = SSL_table_put(x_20, d_21, i_21);
  t = c_21;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm o_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,w_21 = NULL,y_21 = NULL,b_22 = NULL,c_22 = NULL;
  t = P__tmpdir_0_0(t);
  s_21 = t;
  t = term_p_26;
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_21, term_p_26);
  t = i_7(s_21, c_22, t);
  y_21 = t;
  t = term_q_26;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_21, term_q_26);
  t = i_7(y_21, b_22, t);
  w_21 = t;
  t = SSL_mkstemp(w_21);
  if(match_cons(t, sym__2))
    {
      q_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_0;
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_21, term_v_0);
  t = b_7(i_4, q_21, r_21, t);
  t = SSL_close(o_21);
  t = q_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  e_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_22 = NULL,j_22 = NULL;
      t = e_22;
      t = xtc_new_file_0_0(t);
      i_22 = t;
      t = r_0(t);
      j_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_22, (ATerm) ATinsert(ATinsert(ATempty, i_22), term_r_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_22);
    }
  else
    {
      ATerm l_22 = NULL,m_22 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_22;
      t = xtc_new_file_0_0(t);
      l_22 = t;
      t = r_0(t);
      m_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_22), term_r_26), f_22), term_t_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_22);
    }
  return(t);
}
static ATerm c_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL;
        t = g_23;
        t = o_0(t);
        i_9 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_9;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_9;
          }
        t = (ATerm) ATmakeAppl(sym__2, h_23, i_9);
        t = c_7(h_23, i_9, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
        LocalPopChoice(w_26);
      }
    else
      {
        t = u_26;
        {
          ATerm x_26 = t;
          int b_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_9 = NULL;
              t = g_23;
              t = o_0(t);
              v_9 = t;
              {
                ATerm c_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_10 = NULL;
                    a_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_10;
                          }
                        else
                          {
                            t = a_10;
                            if((h_23 != t))
                              {
                                _fail(t);
                              }
                            t = a_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_23, v_9);
              t = c_7(h_23, v_9, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
              LocalPopChoice(b_27);
            }
          else
            {
              t = x_26;
              t = g_23;
              t = o_0(t);
              if((h_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_23);
            }
        }
      }
  }
  return(t);
}
static ATerm d_7 (ATerm m_35, ATerm n_35, ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  m_23 = t;
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        t = j_7(m_35, n_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_27 = ATgetFirst((ATermList) t);
            l_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(e_27);
        t = SSL_table_put(m_35, n_35, l_23);
        t = (ATerm) ATmakeAppl(sym__3, m_35, n_35, l_23);
      }
    else
      {
        t = d_27;
        t = SSL_table_remove(m_35, n_35);
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  t = m_23;
  return(t);
}
ATerm end_scope_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm n_23 = NULL,p_23 = NULL,q_23 = NULL,t_23 = NULL,v_23 = NULL;
  t_23 = t;
  t = m_79(t);
  q_23 = t;
  {
    ATerm i_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_23 = NULL;
        t = term_f_26;
        x_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_23, term_f_26);
        t = j_7(q_23, x_23, t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_23 = ATgetFirst((ATermList) t);
      n_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_f_26;
  v_23 = t;
  t = SSL_table_put(q_23, v_23, n_23);
  t = p_23;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm z_23 = NULL;
      z_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_23, z_23);
      t = d_7(q_23, z_23, t);
      return(t);
    }
    t = map_1_0(j_4, t);
  }
  t = t_23;
  return(t);
}
ATerm restore_always_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_80(t);
      t = i_80(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      t = i_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  c_24 = t;
  t = l_79(t);
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_24, term_f_26);
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_27 = ATgetArgument(t, 0);
            ATerm t_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_f_26;
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_24, term_f_26);
        t = j_7(b_24, j_24, t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATempty;
      }
  }
  d_24 = t;
  t = term_f_26;
  e_24 = t;
  t = (ATerm) ATinsert(CheckATermList(d_24), (ATerm) ATempty);
  f_24 = t;
  t = SSL_table_put(b_24, e_24, f_24);
  t = c_24;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_25 = NULL;
  a_25 = t;
  {
    ATerm v_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_25);
        LocalPopChoice(z_27);
      }
    else
      {
        t = v_27;
        t = a_25;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm o_24 = NULL;
  static ATerm s_4 (ATerm t)
  {
    ATerm s_24 = NULL;
    s_24 = t;
    {
      ATerm a_28 = t;
      int b_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = NULL,v_24 = NULL;
          t = term_m_26;
          u_24 = t;
          t = term_f_26;
          v_24 = t;
          t = term_c_28;
          t = j_7(u_24, v_24, t);
          LocalPopChoice(b_28);
        }
      else
        {
          t = a_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_24 != NULL) && (o_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_24 = ATgetFirst((ATermList) t);
        {
          ATerm d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_24;
    t = map_1_0(t_4, t);
    t = s_24;
    t = end_scope_1_0(v_4, t);
    return(t);
  }
  t = begin_scope_1_0(r_4, t);
  t = restore_always_2_0(h_83, s_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_26;
      t = get_config_0_0(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = term_o_9;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  static ATerm x_4 (ATerm t)
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL;
        t = term_t_26;
        t = get_config_0_0(t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_25);
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = term_w_11;
      }
    t = i_83(t);
    t = copy_to_1_0(y_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_25 = NULL,i_25 = NULL,l_25 = NULL,n_25 = NULL,o_25 = NULL;
  f_25 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  i_25 = t;
  t = term_e_11;
  n_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_28), i_25), term_i_28);
  o_25 = t;
  t = SSL_printnl(n_25, o_25);
  t = term_i_11;
  l_25 = t;
  t = SSL_exit(l_25);
  t = f_25;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm r_25 = NULL;
  r_25 = t;
  if(match_string(t, "-k"))
    {
      t = r_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_25;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm u_25 = NULL,y_25 = NULL,c_26 = NULL;
  u_25 = t;
  t = SSL_string_to_int(u_25);
  y_25 = t;
  t = term_k_28;
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_28, y_25);
  t = m_7(c_26, y_25, t);
  t = u_25;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, h_5, k_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  if(match_string(t, "-S"))
    {
      t = e_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_26;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL;
  t = term_f_10;
  g_26 = t;
  t = term_m_28;
  h_26 = t;
  t = term_n_28;
  t = m_7(g_26, h_26, t);
  t = term_o_28;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  t = SSL_string_to_int(i_26);
  j_26 = t;
  t = term_f_10;
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, j_26);
  t = m_7(k_26, j_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_26);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL;
  t = term_r_28;
  l_26 = t;
  t = term_v_0;
  n_26 = t;
  t = term_s_28;
  t = m_7(l_26, n_26, t);
  t = term_x_28;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_28 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_5, m_5, n_5, t);
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
            t = ArgOption_3_0(p_5, q_5, s_5, t);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = Option_3_0(u_5, w_5, x_5, t);
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm o_26 = NULL;
  t = term_i_29;
  o_26 = t;
  t = SSL_table_put(o_26, h_37, i_37);
  t = (ATerm) ATmakeAppl(sym__3, term_i_29, h_37, i_37);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,v_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
      t = term_v_0;
      t = e_0(t);
      y_26 = t;
      t = term_j_29;
      z_26 = t;
      t = term_o_29;
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_29, term_o_29, y_26);
      t = k_7(z_26, a_27, y_26, t);
      _fail(t);
    }
  else
    {
      ATerm f_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_26 = ATgetFirst((ATermList) t);
          v_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_26;
      t = c_0(t);
      t = term_v_0;
      t = d_0(t);
      f_27 = t;
      t = (ATerm) ATinsert(CheckATermList(v_26), f_27);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm h_27 = NULL;
  h_27 = t;
  if(match_string(t, "-o"))
    {
      t = h_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_27;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  j_27 = t;
  t = term_r_26;
  k_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_26, j_27);
  t = m_7(k_27, j_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_27);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, a_6, b_6, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  if(match_string(t, "-i"))
    {
      t = o_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_27;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm p_27 = NULL,u_27 = NULL;
  p_27 = t;
  t = term_t_26;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, p_27);
  t = m_7(u_27, p_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_27);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, d_6, f_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  static ATerm w_28 (ATerm t)
  {
    ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
    v_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_28 = ATgetFirst((ATermList) t);
        u_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_10 = NULL,c_11 = NULL,r_3 = NULL;
          t = SSLgetAnnotations(v_28);
          s_10 = t;
          t = u_28;
          t = w_28(t);
          c_11 = t;
          t = (ATerm) ATinsert(CheckATermList(c_11), t_28);
          r_3 = t;
          t = SSLsetAnnotations(r_3, s_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_28;
        t = f_70(t);
      }
    return(t);
  }
  t = w_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_27;
    }
  else
    {
      static ATerm g_6 (ATerm t)
      {
        t = not_null(y_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_27 = ATgetFirst((ATermList) t);
          if(((y_27 != NULL) && (y_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_27;
      t = at_end_1_0(g_6, t);
    }
  return(t);
}
static ATerm k_29 (ATerm a_29, ATerm t)
{
  ATerm b_29 = NULL;
  t = SSL_explode_term(a_29);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym__2))
    {
      f_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_6 (ATerm t)
            {
              t = g_29;
              return(t);
            }
            t = f_29;
            t = at_end_1_0(i_6, t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            t = k_29(h_29, t);
          }
      }
    }
  else
    {
      t = k_29(h_29, t);
    }
  return(t);
}
static ATerm e_7 (ATerm n_37, ATerm m_37, ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  t = n_37;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
  }
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_37, m_29);
  t = conc_0_0(t);
  l_29 = t;
  t = term_i_29;
  n_29 = t;
  t = SSL_table_put(n_29, n_37, l_29);
  t = (ATerm) ATmakeAppl(sym__3, term_i_29, n_37, l_29);
  return(t);
}
static ATerm k_7 (ATerm h_35, ATerm i_35, ATerm g_35, ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_30 = ATgetArgument(t, 0);
            ATerm j_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_35, i_35);
        t = j_7(h_35, i_35, t);
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATempty;
      }
  }
  q_29 = t;
  t = (ATerm) ATinsert(CheckATermList(q_29), g_35);
  r_29 = t;
  t = SSL_table_put(h_35, i_35, r_29);
  t = p_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
      t = term_v_0;
      t = n_0(t);
      f_30 = t;
      t = term_j_29;
      g_30 = t;
      t = term_o_29;
      h_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_29, term_o_29, f_30);
      t = k_7(g_30, h_30, f_30, t);
      _fail(t);
    }
  else
    {
      ATerm m_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_29 = ATgetFirst((ATermList) t);
          a_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_29;
      t = k_0(t);
      t = b_30;
      t = l_0(t);
      m_30 = t;
      t = (ATerm) ATinsert(CheckATermList(c_30), m_30);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm n_30 = NULL,p_30 = NULL,q_30 = NULL;
  n_30 = t;
  t = term_q_11;
  p_30 = t;
  t = (ATerm) ATinsert(ATempty, n_30);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, (ATerm) ATinsert(ATempty, n_30));
  t = e_7(p_30, q_30, t);
  t = n_30;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, l_6, n_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,v_30 = NULL,w_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  s_30 = t;
  t = term_e_11;
  v_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_30), s_30);
  w_30 = t;
  t = SSL_printnl(v_30, w_30);
  t = term_i_11;
  t_30 = t;
  t = SSL_exit(t_30);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm f_7 (ATerm c_33, ATerm d_33, ATerm t)
{
  ATerm r_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_33, d_33);
      LocalPopChoice(u_30);
    }
  else
    {
      t = r_30;
      t = SSL_addr(c_33, d_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_76 (ATerm), ATerm i_76 (ATerm), ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_31;
      t = h_76(t);
    }
  else
    {
      ATerm k_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_31 = ATgetFirst((ATermList) t);
          g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_31;
      t = foldr_2_0(h_76, i_76, t);
      k_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_31, k_31);
      t = i_76(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_m_28;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      v_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(t_11, v_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_31 = NULL,n_11 = NULL,o_11 = NULL;
  t = times_0_0(t);
  o_11 = t;
  t = SSL_explode_term(o_11);
  if(match_cons(t, sym__2))
    {
      ATerm x_30 = ATgetArgument(t, 0);
      n_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_11;
  t = foldr_2_0(r_6, s_6, t);
  o_31 = t;
  t = SSL_TicksToSeconds(o_31);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_32 = NULL,f_32 = NULL,g_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym__2))
    {
      f_32 = ATgetArgument(t, 0);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_32;
        if((f_32 != t))
          {
            _fail(t);
          }
        t = d_32;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = (ATerm) ATmakeAppl(sym__2, f_32, g_32);
        {
          ATerm a_31 = t;
          int b_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_32, g_32);
              LocalPopChoice(b_31);
            }
          else
            {
              t = a_31;
              t = SSL_gtr(f_32, g_32);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, f_32, g_32);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_80 (ATerm), ATerm t)
{
  ATerm k_32 = NULL;
  k_32 = t;
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_32 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, term_i_11);
        t = geq_0_0(t);
        t = k_32;
        t = t_80(t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = k_32;
      }
  }
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,v_32 = NULL,w_32 = NULL;
  t = run_time_0_0(t);
  o_32 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  p_32 = t;
  t = term_e_11;
  v_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_31), o_32), term_b_12), p_32);
  w_32 = t;
  t = SSL_printnl(v_32, w_32);
  t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_31), o_32), term_b_12), p_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_28;
  x_32 = t;
  t = SSL_exit(x_32);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_33 = ATgetArgument(t, 0);
          {
            ATerm o_12 = NULL,u_3 = NULL;
            t = SSLgetAnnotations(r_33);
            o_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_33);
            u_3 = t;
            t = SSLsetAnnotations(u_3, o_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_31;
      t = get_config_0_0(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      t = fetch_1_0(l_7, t);
    }
  t = d_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_33 = ATgetFirst((ATermList) t);
      x_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_34 = NULL,t_34 = NULL;
        static ATerm o_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(h_34)), not_null(t_34));
          return(t);
        }
        t = x_33;
        t = i_0(t);
        if(((h_34 != NULL) && (h_34 != t)))
          _fail(t);
        else
          h_34 = t;
        t = w_33;
        t = g_0(t);
        if(((t_34 != NULL) && (t_34 != t)))
          _fail(t);
        else
          t_34 = t;
        t = x_33;
        t = reverse_acc_2_0(g_0, o_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_0;
      t = i_0(t);
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,a_35 = NULL,x_3 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_35);
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_34);
  x_3 = t;
  t = SSLsetAnnotations(x_3, x_34);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_35), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_30;
      t = get_config_0_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(p_7, t);
    }
  t = term_q_31;
  t = echo_0_0(t);
  t = term_j_29;
  v_34 = t;
  t = term_o_29;
  w_34 = t;
  t = term_r_31;
  t = j_7(v_34, w_34, t);
  t = reverse_acc_2_0(_id, q_7, t);
  t = map_1_0(r_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  static ATerm u_36 (ATerm t)
  {
    ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
    r_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_36 = ATgetFirst((ATermList) t);
        t_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_31 = t;
      int t_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_13 = NULL,h_13 = NULL,z_3 = NULL;
          t = SSLgetAnnotations(r_36);
          e_13 = t;
          t = s_36;
          t = z_69(t);
          h_13 = t;
          t = (ATerm) ATinsert(CheckATermList(t_36), h_13);
          z_3 = t;
          t = SSLsetAnnotations(z_3, e_13);
          LocalPopChoice(t_31);
        }
      else
        {
          t = s_31;
          {
            ATerm p_13 = NULL,s_13 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(r_36);
            p_13 = t;
            t = t_36;
            t = u_36(t);
            s_13 = t;
            t = (ATerm) ATinsert(CheckATermList(s_13), s_36);
            h_4 = t;
            t = SSLsetAnnotations(h_4, p_13);
          }
        }
    }
    return(t);
  }
  t = u_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm z_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_37;
          }
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATinsert(ATempty, a_37);
      }
  }
  b_37 = t;
  t = term_o_9;
  c_37 = t;
  t = SSL_printnl(c_37, b_37);
  t = a_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_7 (ATerm x_31, ATerm y_31, ATerm t)
{
  t = SSL_strcat(x_31, y_31);
  return(t);
}
ATerm debug_1_0 (ATerm x_64 (ATerm), ATerm t)
{
  ATerm g_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  g_37 = t;
  t = x_64(t);
  j_37 = t;
  t = term_e_11;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_37), j_37);
  l_37 = t;
  t = SSL_printnl(k_37, l_37);
  t = g_37;
  return(t);
}
ATerm map_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  static ATerm i_38 (ATerm t)
  {
    ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
    f_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_38;
      }
    else
      {
        ATerm i_14 = NULL,x_14 = NULL,e_15 = NULL,k_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_38 = ATgetFirst((ATermList) t);
            h_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_38);
        i_14 = t;
        t = g_38;
        t = p_69(t);
        x_14 = t;
        t = h_38;
        t = i_38(t);
        e_15 = t;
        t = (ATerm) ATinsert(CheckATermList(e_15), x_14);
        k_4 = t;
        t = SSLsetAnnotations(k_4, i_14);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_38 = NULL;
      s_38 = t;
      t = SSL_is_string(s_38);
      LocalPopChoice(h_32);
    }
  else
    {
      t = e_32;
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_7, t);
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            {
              ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
              c_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_39 = ATgetArgument(t, 0);
                  t = d_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_39 = ATgetArgument(t, 0);
                      t = d_39;
                      {
                        ATerm l_32 = t;
                        int n_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_32);
                          }
                        else
                          {
                            t = l_32;
                            t = debug_1_0(v_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_39 = NULL,j_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_39 = ATgetArgument(t, 0);
                          e_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_39;
                      t = eval_config_0_0(t);
                      i_39 = t;
                      t = e_39;
                      t = eval_config_0_0(t);
                      j_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_39, j_39);
                      t = i_7(i_39, j_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm y_36, ATerm z_36, ATerm t)
{
  t = SSL_table_get(y_36, z_36);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_39 = NULL,b_40 = NULL;
  q_39 = t;
  t = term_i_29;
  b_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, q_39);
  t = j_7(b_40, q_39, t);
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_40 = NULL,d_40 = NULL;
        t = eval_config_0_0(t);
        c_40 = t;
        t = term_i_29;
        d_40 = t;
        t = SSL_table_put(d_40, q_39, c_40);
        t = c_40;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = term_s_32;
  g_40 = t;
  t = term_v_0;
  h_40 = t;
  t = term_t_32;
  t = m_7(g_40, h_40, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_u_32;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm i_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL;
  t = term_s_32;
  m_40 = t;
  t = term_v_0;
  o_40 = t;
  t = term_t_32;
  t = m_7(m_40, o_40, t);
  t = term_y_32;
  i_40 = t;
  t = term_v_0;
  l_40 = t;
  t = term_z_32;
  t = m_7(i_40, l_40, t);
  t = term_a_33;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_7, z_7, a_8, t);
      LocalPopChoice(f_33);
    }
  else
    {
      t = e_33;
      t = Option_3_0(b_8, c_8, d_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_56 (ATerm), ATerm q_56 (ATerm), ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,o_5 = NULL;
  v_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_40 = ATgetFirst((ATermList) t);
      s_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  p_40 = t;
  t = q_40;
  t = p_56(t);
  t_40 = t;
  t = s_40;
  t = q_56(t);
  u_40 = t;
  t = (ATerm) ATinsert(CheckATermList(u_40), t_40);
  o_5 = t;
  t = SSLsetAnnotations(o_5, p_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,f_41 = NULL,h_41 = NULL,i_41 = NULL,r_5 = NULL;
  a_41 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = b_87(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
      }
  }
  t = a_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_41 = ATgetFirst((ATermList) t);
      f_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_41);
  b_41 = t;
  t = term_o_30;
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_30, c_41);
  t = m_7(i_41, c_41, t);
  t = f_41;
  {
    static ATerm x_41 (ATerm t)
    {
      ATerm j_33 = t;
      int k_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_33 = t;
          int m_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_41 = NULL;
              l_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_41;
              LocalPopChoice(m_33);
            }
          else
            {
              t = l_33;
              t = b_87(t);
              t = Cons_2_0(_id, x_41, t);
            }
          LocalPopChoice(k_33);
        }
      else
        {
          t = j_33;
          {
            ATerm o_41 = NULL,u_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_41 = ATgetFirst((ATermList) t);
                u_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_41), (ATerm) ATmakeAppl(sym_Undefined_1, o_41));
          }
        }
      return(t);
    }
    t = x_41(t);
  }
  h_41 = t;
  t = (ATerm) ATinsert(CheckATermList(h_41), (ATerm) ATmakeAppl(sym_Program_1, c_41));
  r_5 = t;
  t = SSLsetAnnotations(r_5, b_41);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  if(match_string(t, "--help"))
    {
      t = k_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_42;
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  t = term_l_31;
  l_42 = t;
  t = term_v_0;
  m_42 = t;
  t = term_n_33;
  t = m_7(l_42, m_42, t);
  t = term_o_33;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_p_33;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  f_42 = t;
  t = term_j_29;
  h_42 = t;
  t = term_o_29;
  i_42 = t;
  t = (ATerm) ATempty;
  j_42 = t;
  t = SSL_table_put(h_42, i_42, j_42);
  t = f_42;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_87(t);
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          {
            ATerm u_33 = t;
            int v_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_8, h_8, k_8, t);
                LocalPopChoice(v_33);
              }
            else
              {
                t = u_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_8, t);
  }
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL;
        t_42 = t;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_18 = NULL;
              t = t_42;
              {
                ATerm c_34 = t;
                int d_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_31;
                    t = get_config_0_0(t);
                    LocalPopChoice(d_34);
                  }
                else
                  {
                    t = c_34;
                    t = fetch_1_0(l_8, t);
                  }
              }
              t = t_42;
              t = default_system_usage_0_0(t);
              t = term_m_28;
              a_18 = t;
              t = SSL_exit(a_18);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              {
                ATerm h_18 = NULL;
                t = term_s_32;
                t = get_config_0_0(t);
                t = t_42;
                t = default_system_about_0_0(t);
                t = term_m_28;
                h_18 = t;
                t = SSL_exit(h_18);
              }
            }
        }
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
              static ATerm m_8 (ATerm t)
              {
                ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,t_5 = NULL;
                z_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_42);
                x_42 = t;
                t = y_42;
                if(((c_42 != NULL) && (c_42 != t)))
                  _fail(t);
                else
                  c_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_42);
                t_5 = t;
                t = SSLsetAnnotations(t_5, x_42);
                return(t);
              }
              t = fetch_1_0(m_8, t);
              t = term_e_11;
              v_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_42)), term_g_34);
              w_42 = t;
              t = SSL_printnl(v_42, w_42);
              t = (ATerm) ATmakeAppl(sym__2, term_e_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_42)), term_g_34));
              t = default_system_usage_0_0(t);
              t = term_i_11;
              u_42 = t;
              t = SSL_exit(u_42);
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
            }
        }
      }
  }
  d_42 = t;
  t = term_j_29;
  g_42 = t;
  t = SSL_table_destroy(g_42);
  t = d_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_85 (ATerm), ATerm g_85 (ATerm), ATerm h_85 (ATerm), ATerm i_85 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  t = parse_options_1_0(f_85, t);
  e_43 = t;
  t = term_i_34;
  h_43 = t;
  t = SSL_table_create(h_43);
  t = term_i_34;
  f_43 = t;
  t = term_j_34;
  g_43 = t;
  t = SSL_table_put(f_43, g_43, e_43);
  t = e_43;
  t = h_85(t);
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_85, t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        {
          ATerm m_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(n_34);
            }
          else
            {
              t = m_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm p_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = p_34;
      {
        ATerm s_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_34);
          }
        else
          {
            t = s_34;
            {
              ATerm z_34 = t;
              int b_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_35);
                }
              else
                {
                  t = z_34;
                  {
                    ATerm c_35 = t;
                    int d_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_8, q_8, r_8, t);
                        LocalPopChoice(d_35);
                      }
                    else
                      {
                        t = c_35;
                        {
                          ATerm e_35 = t;
                          int f_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_35);
                            }
                          else
                            {
                              t = e_35;
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
  t = xtc_io_1_0(s_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  t = term_k_35;
  l_43 = t;
  t = term_v_0;
  m_43 = t;
  t = term_l_35;
  t = m_7(l_43, m_43, t);
  t = term_o_35;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_p_35;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_43 = NULL,u_43 = NULL;
      u_43 = t;
      if(match_cons(t, sym_FILE_1))
        {
          t_43 = ATgetArgument(t, 0);
          {
            ATerm q_18 = NULL,v_5 = NULL;
            t = SSLgetAnnotations(u_43);
            q_18 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, t_43);
            v_5 = t;
            t = SSLsetAnnotations(v_5, q_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_43;
        }
      LocalPopChoice(r_35);
      t = xtc_transform_file_2_0(t_8, create_pp_table_args_0_0, t);
    }
  else
    {
      t = q_35;
      t = xtc_transform_term_2_0(x_8, create_pp_table_args_0_0, t);
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(n_8, default_usage_0_0, _id, o_8, t);
  return(t);
}
