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
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_c_35;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_o_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_e_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_g_32;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_q_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_s_27;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_o_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_w_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_u_22;
ATerm term_o_22;
ATerm term_w_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_h_17;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_n_9;
ATerm term_b_9;
ATerm term_w_8;
ATerm term_v_0;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_0));
  term_v_0 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
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
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_f_11, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_g_10, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_y_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_i_13);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_l_13, term_m_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_r_13, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_c_14, term_e_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_t_14, term_u_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
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
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_r_16, term_s_16);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_j_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_x_18, term_z_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_q_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_v_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_f_20, term_g_20);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_d_24);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym__2, term_o_23, term_p_23);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym__2, term_a_26, term_r_25);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_f_10, term_l_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym__2, term_w_28, term_v_0);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(sym__2, term_f_29, term_g_29);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_v_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_v_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_v_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_c_35, term_v_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm n_6 (ATerm m_14, ATerm l_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm d_72 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm p_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm q_6 (ATerm s_66 (ATerm), ATerm c_167, ATerm x_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
static ATerm r_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm u_71 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_65 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_82 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_83 (ATerm), ATerm t);
static ATerm u_6 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm v_6 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm w_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm x_6 (ATerm c_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm b_7 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm a_13 (ATerm m_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_6 (ATerm t_17, ATerm t);
static ATerm z_6 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_15 (ATerm w_13, ATerm t);
static ATerm r_15 (ATerm a_14, ATerm h_14, ATerm p_14, ATerm t);
static ATerm s_15 (ATerm a_15, ATerm b_15, ATerm c_15, ATerm t);
static ATerm a_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm c_21 (ATerm x_19, ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm c_7 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm d_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm e_7 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_85 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm k_85 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_7 (ATerm j_38, ATerm k_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_30 (ATerm r_29, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm f_7 (ATerm p_38, ATerm o_38, ATerm t);
static ATerm l_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_7 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_82 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm need_help_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_7 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm k_7 (ATerm a_38, ATerm b_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
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
  t = term_w_8;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_w_8);
  t = j_7(b_0, f_0, t);
  j_0 = t;
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = (ATerm) ATinsert(ATempty, term_b_9);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_0, (ATerm) ATinsert(ATempty, term_b_9));
        t = b_7(j_0, q_0, t);
        t = new_file_0_0(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
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
static ATerm n_6 (ATerm m_14, ATerm l_14, ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = get_errno_0_0(t);
      t = term_v_0;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = d_7(m_14, l_14, t);
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
        t = term_n_9;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, term_n_9);
        t = d_7(q_1, w_0, t);
        t = SSL_remove(q_1);
        t = term_n_9;
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
          ATerm p_9 = t;
          int r_9 = stack_ptr;
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
              t = n_6(q_1, e_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
              LocalPopChoice(r_9);
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
  t = term_u_9;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_u_9;
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
  t = term_v_9;
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
        ATerm w_9 = t;
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
            t = w_9;
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
ATerm if_verbose2_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm g_2 = NULL;
  g_2 = t;
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, term_g_10);
        t = geq_0_0(t);
        t = g_2;
        t = w_82(t);
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
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
  ATerm z_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,f_1 = NULL;
  c_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), term_i_10), c_3);
  h_3 = t;
  t = SSL_concat_strings(h_3);
  g_3 = t;
  t = (ATerm) ATinsert(ATempty, term_b_9);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATempty, term_b_9));
  t = b_7(g_3, f_3, t);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, c_3);
  l_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      ATerm l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  i_3 = t;
  t = SSL_modification_time(z_2);
  j_3 = t;
  t = SSL_modification_time(c_3);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
  f_1 = t;
  t = SSLsetAnnotations(f_1, i_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_2, c_3);
  e_3 = t;
  t = SSL_explode_term(e_3);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_10 = ATgetArgument(t, 1);
        if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
          {
            d_3 = ATgetFirst((ATermList) o_10);
            {
              ATerm q_10 = (ATerm) ATgetNext((ATermList) o_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_3;
  t = if_verbose2_1_0(z_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  static ATerm h_4 (ATerm t)
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_72(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm d_4 = NULL,e_4 = NULL,g_4 = NULL,w_1 = NULL,c_2 = NULL,j_1 = NULL;
          d_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_4 = ATgetFirst((ATermList) t);
              g_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_4);
          w_1 = t;
          t = g_4;
          t = h_4(t);
          c_2 = t;
          t = (ATerm) ATinsert(CheckATermList(c_2), e_4);
          j_1 = t;
          t = SSLsetAnnotations(j_1, w_1);
        }
      }
    return(t);
  }
  t = h_4(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
      n_2 = t;
      t = term_y_10;
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
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
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
              ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL;
              m_4 = t;
              t = term_d_11;
              o_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_e_11);
              p_4 = t;
              t = SSL_printnl(o_4, p_4);
              t = term_f_11;
              n_4 = t;
              t = SSL_exit(n_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, m_4), term_e_11);
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
      t = term_n_11;
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
  ATerm r_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  r_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_n_11);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_p_11;
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
  ATerm v_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm x_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_9);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, (ATerm) ATinsert(ATempty, term_b_9));
      t = b_7(v_4, x_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm p_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm c_5 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_5);
  return(t);
}
static ATerm q_6 (ATerm s_66 (ATerm), ATerm c_167, ATerm x_17, ATerm t)
{
  ATerm d_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_167, term_t_11);
  t = a_7(t);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_5, x_17);
  t = s_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(match_cons(u_11, sym_Stream_1))
        {
          g_5 = ATgetArgument(u_11, 0);
        }
      else
        _fail(t);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_6(g_5, h_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL;
  f_5 = t;
  t = xtc_new_file_0_0(t);
  e_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
  t = q_6(m_1, e_5, f_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, e_5);
  t = xtc_transform_file_2_0(w_84, x_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_6 = NULL,o_6 = NULL,m_7 = NULL,o_7 = NULL;
  k_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_6 = ATgetArgument(t, 0);
      {
        ATerm x_2 = NULL,a_3 = NULL;
        t = SSL_int_to_string(o_6);
        x_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_11), x_2), term_x_11);
        a_3 = t;
        t = SSL_concat_strings(a_3);
      }
    }
  else
    {
      ATerm b_4 = NULL,f_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_6 = ATgetArgument(t, 0);
          m_7 = ATgetArgument(t, 1);
          o_7 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_7);
      b_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_7), term_c_12), b_4), term_b_12), o_6);
      f_4 = t;
      t = SSL_concat_strings(f_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm v_7 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = u_71(t);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(v_7);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_7 = NULL;
  w_7 = t;
  {
    ATerm e_12 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_12 = ATgetArgument(t, 0);
              if((w_7 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_20), term_c_20), term_w_19), term_s_19), term_k_19), term_g_19), term_a_19), term_t_18), term_k_18), term_g_18), term_c_18), term_y_17), term_s_17), term_h_17), term_g_16), term_z_15), term_k_15), term_g_15), term_w_14), term_i_14), term_z_13), term_t_13), term_o_13), term_j_13), term_z_12), term_u_12), term_p_12), term_l_12);
        t = fetch_elem_1_0(r_1, t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = e_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_7);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm a_8 = NULL,i_8 = NULL;
  a_8 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_20 = ATgetArgument(t, 0);
            i_8 = ATgetArgument(t, 1);
            {
              ATerm p_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_20);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL,i_5 = NULL,j_5 = NULL;
              t = i_8;
              {
                ATerm v_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_20;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              a_5 = t;
              t = term_d_11;
              i_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_w_20);
              j_5 = t;
              t = SSL_printnl(i_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, a_5), term_w_20));
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = a_8;
            }
        }
      }
    else
      {
        t = m_20;
        t = a_8;
      }
  }
  t = a_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL;
  y_8 = t;
  t = fork_0_0(t);
  x_8 = t;
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_8;
        t = h_65(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = SSL_waitpid(x_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            if(((ATgetType(z_20) != AT_INT) || (ATgetInt((ATermInt) z_20) != 0)))
              _fail(t);
            {
              ATerm a_21 = ATgetArgument(t, 1);
            }
            {
              ATerm d_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = y_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  static ATerm t_1 (ATerm t)
  {
    ATerm d_9 = NULL,e_9 = NULL;
    d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), d_9);
    t = k_7(not_null(c_9), d_9, t);
    e_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_9, e_9);
    return(t);
  }
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = SSL_table_keys(c_9);
  t = map_1_0(t_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_9 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        k_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_9, term_q_19);
        t = geq_0_0(t);
        t = g_9;
        t = z_82(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = g_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm o_9 = NULL;
  o_9 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_i_15);
        t = geq_0_0(t);
        t = o_9;
        t = y_82(t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = o_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_10 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        a_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_10, term_x_12);
        t = geq_0_0(t);
        t = y_9;
        t = a_83(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = y_9;
      }
  }
  return(t);
}
static ATerm u_6 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = r_75(t);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm e_10 = NULL;
      e_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, e_10);
      t = q_75(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
  }
  t = t_24;
  return(t);
}
static ATerm v_6 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm c_11 (ATerm t)
  {
    ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
    v_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_10 = ATgetFirst((ATermList) t);
            x_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_10;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = u_6(n_75, v_1, w_10, x_10, t);
              }
              t = c_11(t);
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm o_5 = NULL,e_6 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(v_10);
                o_5 = t;
                t = x_10;
                t = c_11(t);
                e_6 = t;
                t = (ATerm) ATinsert(CheckATermList(e_6), w_10);
                l_1 = t;
                t = SSLsetAnnotations(l_1, o_5);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = c_11(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      r_11 = ATgetArgument(t, 0);
      if((r_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            ATerm y_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = k_7(g_37, h_37, t);
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        t = (ATerm) ATempty;
      }
  }
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_11, i_37);
  t = v_6(x_1, i_11, i_37, t);
  h_11 = t;
  t = SSL_table_put(g_37, h_37, h_11);
  t = g_11;
  return(t);
}
static ATerm x_6 (ATerm c_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm a_2 (ATerm t)
  {
    ATerm v_11 = NULL,w_11 = NULL;
    if(match_cons(t, sym__2))
      {
        v_11 = ATgetArgument(t, 0);
        w_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, v_11, w_11);
    t = c_83(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(a_2, t);
  return(t);
}
static ATerm b_7 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm a_13 (ATerm m_12, ATerm t)
{
  t = SSL_fclose(m_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL;
  v_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_12 = ATgetArgument(t, 0);
      {
        ATerm z_21 = t;
        int a_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_12);
            LocalPopChoice(a_22);
          }
        else
          {
            t = z_21;
            t = a_13(v_12, t);
          }
      }
    }
  else
    {
      t = a_13(v_12, t);
    }
  return(t);
}
static ATerm y_6 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm z_6 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm b_13 = NULL;
  t = SSL_fopen(a_40, b_40);
  b_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  t = SSL_stdin_stream();
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_13 = NULL;
  t = SSL_stdout_stream();
  d_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_stderr_stream();
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
static ATerm q_15 (ATerm w_13, ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_explode_term(w_13);
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            x_13 = ATgetFirst((ATermList) d_22);
            {
              ATerm e_22 = (ATerm) ATgetNext((ATermList) d_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_15 (ATerm a_14, ATerm h_14, ATerm p_14, ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,v_14 = NULL,o_1 = NULL;
  t = SSLgetAnnotations(p_14);
  s_14 = t;
  t = a_14;
  if(match_cons(t, sym_Path_1))
    {
      v_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_14, h_14);
  o_1 = t;
  t = SSLsetAnnotations(o_1, s_14);
  if(match_cons(t, sym__2))
    {
      q_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(q_14, r_14, t);
  return(t);
}
static ATerm s_15 (ATerm a_15, ATerm b_15, ATerm c_15, ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,l_15 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(c_15);
  f_15 = t;
  t = SSL_is_string(a_15);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, b_15);
  s_1 = t;
  t = SSLsetAnnotations(s_1, f_15);
  if(match_cons(t, sym__2))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(d_15, e_15, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL;
  n_15 = t;
  if(match_cons(t, sym__2))
    {
      o_15 = ATgetArgument(t, 0);
      p_15 = ATgetArgument(t, 1);
      {
        ATerm f_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_15(n_15, t);
            LocalPopChoice(h_22);
          }
        else
          {
            t = f_22;
            {
              ATerm i_22 = t;
              int j_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_15(o_15, p_15, n_15, t);
                  LocalPopChoice(j_22);
                }
              else
                {
                  t = i_22;
                  t = s_15(o_15, p_15, n_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_15(n_15, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL;
  b_16 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_16, term_o_22);
        t = a_7(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm s_7 = NULL,u_7 = NULL;
          t = term_u_22;
          u_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_22, b_16);
          t = j_7(u_7, b_16, t);
          s_7 = t;
          t = SSL_perror(s_7);
          _fail(t);
        }
      }
  }
  v_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_6(w_15, t);
  u_15 = t;
  t = v_15;
  t = fclose_0_0(t);
  t = u_15;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_z_22;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,f_16 = NULL;
      e_16 = t;
      t = (ATerm) ATinsert(ATempty, term_f_23);
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_16, (ATerm) ATinsert(ATempty, term_f_23));
      t = b_7(e_16, f_16, t);
      LocalPopChoice(e_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = t;
            if((PushChoice() == 0))
              {
                ATerm i_16 = NULL,j_16 = NULL;
                i_16 = t;
                t = (ATerm) ATinsert(ATempty, term_b_9);
                j_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_16, (ATerm) ATinsert(ATempty, term_b_9));
                t = b_7(i_16, j_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_23;
              }
            t = debug_1_0(b_2, t);
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            t = debug_1_0(f_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_j_23;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  t = term_d_11;
  b_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_23);
  c_17 = t;
  t = SSL_printnl(b_17, c_17);
  t = a_17;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym__3))
    {
      d_17 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
      f_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_6(d_17, e_17, f_17, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL,j_17 = NULL;
  g_17 = t;
  t = term_d_11;
  i_17 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = g_17;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  t = term_d_11;
  l_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_23);
  m_17 = t;
  t = SSL_printnl(l_17, m_17);
  t = k_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  m_16 = t;
  t = if_verbose5_1_0(h_2, t);
  {
    ATerm n_23 = t;
    if((PushChoice() == 0))
      {
        ATerm y_16 = NULL,z_16 = NULL;
        t = term_o_23;
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_16);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Imported_1, m_16));
        t = k_7(y_16, z_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_23;
      }
  }
  o_16 = t;
  t = term_o_23;
  v_16 = t;
  t = term_p_23;
  w_16 = t;
  t = (ATerm) ATinsert(ATempty, m_16);
  x_16 = t;
  t = SSL_table_put(v_16, w_16, x_16);
  t = o_16;
  t = if_verbose4_1_0(k_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_2, t);
  n_16 = t;
  t = term_o_23;
  u_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, n_16);
  t = x_6(u_2, u_16, n_16, t);
  t = if_verbose6_1_0(v_2, t);
  t = term_o_23;
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, m_16);
  q_16 = t;
  t = (ATerm) ATempty;
  t_16 = t;
  t = SSL_table_put(p_16, q_16, t_16);
  t = (ATerm) ATmakeAppl(sym__3, term_o_23, (ATerm)ATmakeAppl(sym_Imported_1, m_16), (ATerm) ATempty);
  t = if_verbose4_1_0(w_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
  l_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_18 = ATgetFirst((ATermList) t);
          n_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL,o_8 = NULL,p_8 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(l_18);
            k_8 = t;
            t = m_18;
            t = i_79(t);
            o_8 = t;
            t = n_18;
            t = filter_1_0(i_79, t);
            p_8 = t;
            t = (ATerm) ATinsert(CheckATermList(p_8), o_8);
            t_2 = t;
            t = SSLsetAnnotations(t_2, k_8);
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            t = n_18;
            t = filter_1_0(i_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  static ATerm s_18 (ATerm t)
  {
    ATerm s_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_69(t);
        t = s_18(t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = s_23;
        t = o_69(t);
      }
    return(t);
  }
  t = s_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_23;
      t = get_config_0_0(t);
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL;
            t = term_z_23;
            u_18 = t;
            t = SSL_getenv(u_18);
            LocalPopChoice(y_23);
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
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  t = term_o_23;
  o_19 = t;
  t = term_d_24;
  p_19 = t;
  t = term_e_24;
  t = k_7(o_19, p_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  t = if_verbose5_1_0(y_2, t);
  y_18 = t;
  {
    ATerm s_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,m_19 = NULL;
        t = term_o_23;
        f_19 = t;
        t = term_p_23;
        m_19 = t;
        t = term_x_24;
        t = k_7(f_19, m_19, t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = s_24;
        {
          ATerm n_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_19 = t;
          t = repeat_2_0(m_3, _id, t);
          t = n_19;
        }
      }
  }
  t = y_18;
  t = if_verbose5_1_0(n_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm c_21 (ATerm x_19, ATerm t)
{
  ATerm a_20 = NULL,e_20 = NULL,i_20 = NULL;
  t = term_o_23;
  e_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, x_19);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Tool_1, x_19));
  t = k_7(e_20, i_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_25 = ATgetFirst((ATermList) t);
      if(match_cons(c_25, sym__2))
        {
          ATerm f_25 = ATgetArgument(c_25, 0);
          a_20 = ATgetArgument(c_25, 1);
        }
      else
        _fail(t);
      {
        ATerm d_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_20;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_o_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_g_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
      t = if_verbose5_1_0(p_3, t);
      t = xtc_load_0_0(t);
      l_20 = t;
      if(match_cons(t, sym__2))
        {
          j_20 = ATgetArgument(t, 0);
          k_20 = ATgetArgument(t, 1);
          {
            ATerm j_25 = t;
            int k_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
                t = term_o_23;
                r_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_20);
                s_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Tool_1, j_20));
                t = k_7(r_20, s_20, t);
                {
                  static ATerm r_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(r_3, t);
                }
                t = not_null(q_20);
                LocalPopChoice(k_25);
              }
            else
              {
                t = j_25;
                t = c_21(l_20, t);
              }
          }
        }
      else
        {
          t = c_21(l_20, t);
        }
      t = if_verbose5_1_0(s_3, t);
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm b_21 = NULL,f_9 = NULL,h_9 = NULL;
        b_21 = t;
        t = term_d_11;
        f_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_25), b_21), term_m_25);
        h_9 = t;
        t = SSL_printnl(f_9, h_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_25), b_21), term_m_25);
        t = if_verbose5_1_0(v_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  h_21 = t;
  t = x_85(t);
  t = xtc_find_0_0(t);
  g_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
  {
    static ATerm y_3 (ATerm t)
    {
      ATerm i_21 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_21, h_21);
      t = r_6(g_21, h_21, t);
      t = term_o_25;
      i_21 = t;
      t = SSL_exit(i_21);
      return(t);
    }
    t = fork_and_wait_1_0(y_3, t);
  }
  t = h_21;
  return(t);
}
static ATerm c_7 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm n_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = m_81(t);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_21, w_34, u_34);
  t = l_7(n_21, w_34, u_34, t);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_22 = NULL;
        t = term_r_25;
        b_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, term_r_25);
        t = k_7(n_21, b_22, t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_21 = ATgetFirst((ATermList) t);
      t_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_25;
  w_21 = t;
  t = (ATerm) ATinsert(CheckATermList(t_21), (ATerm) ATinsert(CheckATermList(s_21), w_34));
  x_21 = t;
  t = SSL_table_put(n_21, w_21, x_21);
  t = v_21;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_22 = NULL,q_9 = NULL;
      k_22 = t;
      t = term_v_25;
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_22, term_v_25);
      t = j_7(k_22, q_9, t);
      g_22 = t;
      t = SSL_mkstemp(g_22);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm n_22 = NULL;
        t = term_z_25;
        n_22 = t;
        t = SSL_perror(n_22);
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
static ATerm a_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
  t = P__tmpdir_0_0(t);
  s_22 = t;
  t = term_b_26;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_22, term_b_26);
  t = j_7(s_22, t_22, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_0;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_22, term_v_0);
  t = c_7(a_4, q_22, r_22, t);
  t = SSL_close(p_22);
  t = q_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_22 = NULL,y_22 = NULL;
      t = v_22;
      t = xtc_new_file_0_0(t);
      x_22 = t;
      t = r_0(t);
      y_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_22, (ATerm) ATinsert(ATinsert(ATempty, x_22), term_c_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
    }
  else
    {
      ATerm b_23 = NULL,c_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_22;
      t = xtc_new_file_0_0(t);
      b_23 = t;
      t = r_0(t);
      c_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_23), term_c_26), w_22), term_d_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_23);
    }
  return(t);
}
static ATerm d_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_9 = NULL;
        t = a_24;
        t = o_0(t);
        x_9 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = x_9;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = x_9;
          }
        t = (ATerm) ATmakeAppl(sym__2, b_24, x_9);
        t = d_7(b_24, x_9, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        {
          ATerm i_26 = t;
          int m_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_10 = NULL;
              t = a_24;
              t = o_0(t);
              n_10 = t;
              {
                ATerm p_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_10 = NULL;
                    p_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = p_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = p_10;
                          }
                        else
                          {
                            t = p_10;
                            if((b_24 != t))
                              {
                                _fail(t);
                              }
                            t = p_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_26;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, b_24, n_10);
              t = d_7(b_24, n_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
              LocalPopChoice(m_26);
            }
          else
            {
              t = i_26;
              t = a_24;
              t = o_0(t);
              if((b_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_24);
            }
        }
      }
  }
  return(t);
}
static ATerm e_7 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL;
  g_24 = t;
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = k_7(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_26 = ATgetFirst((ATermList) t);
            f_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_26);
        t = SSL_table_put(o_36, p_36, f_24);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, f_24);
      }
    else
      {
        t = q_26;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = g_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL;
  k_24 = t;
  t = j_81(t);
  j_24 = t;
  {
    ATerm t_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL;
        t = term_r_25;
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_24, term_r_25);
        t = k_7(j_24, n_24, t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = t_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_24 = ATgetFirst((ATermList) t);
      h_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_25;
  l_24 = t;
  t = SSL_table_put(j_24, l_24, h_24);
  t = i_24;
  {
    static ATerm j_4 (ATerm t)
    {
      ATerm r_24 = NULL;
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_24, r_24);
      t = e_7(j_24, r_24, t);
      return(t);
    }
    t = map_1_0(j_4, t);
  }
  t = k_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,y_24 = NULL,z_24 = NULL,b_25 = NULL,e_25 = NULL;
  y_24 = t;
  t = i_81(t);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_24, term_r_25);
  {
    ATerm e_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_27 = ATgetArgument(t, 0);
            ATerm m_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_25;
        l_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_r_25);
        t = k_7(w_24, l_25, t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = e_27;
        t = (ATerm) ATempty;
      }
  }
  z_24 = t;
  t = term_r_25;
  b_25 = t;
  t = (ATerm) ATinsert(CheckATermList(z_24), (ATerm) ATempty);
  e_25 = t;
  t = SSL_table_put(w_24, b_25, e_25);
  t = y_24;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_26);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = e_26;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm s_25 = NULL;
  static ATerm q_4 (ATerm t)
  {
    ATerm w_25 = NULL;
    w_25 = t;
    {
      ATerm p_27 = t;
      int r_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_25 = NULL,y_25 = NULL;
          t = term_a_26;
          x_25 = t;
          t = term_r_25;
          y_25 = t;
          t = term_s_27;
          t = k_7(x_25, y_25, t);
          LocalPopChoice(r_27);
        }
      else
        {
          t = p_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_25 != NULL) && (s_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_25 = ATgetFirst((ATermList) t);
        {
          ATerm v_27 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = s_25;
    t = map_1_0(s_4, t);
    t = w_25;
    t = end_scope_1_0(t_4, t);
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  t = restore_always_2_0(j_85, q_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm w_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_26;
      t = get_config_0_0(t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = w_27;
      t = term_n_9;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t)
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_d_26;
        t = get_config_0_0(t);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_26);
        LocalPopChoice(d_28);
      }
    else
      {
        t = b_28;
        t = term_q_11;
      }
    t = k_85(t);
    t = copy_to_1_0(w_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,n_26 = NULL,o_26 = NULL;
  j_26 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  k_26 = t;
  t = term_d_11;
  n_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_28), k_26), term_e_28);
  o_26 = t;
  t = SSL_printnl(n_26, o_26);
  t = term_f_11;
  l_26 = t;
  t = SSL_exit(l_26);
  t = j_26;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  if(match_string(t, "-k"))
    {
      t = u_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_26;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  t = SSL_string_to_int(v_26);
  w_26 = t;
  t = term_i_28;
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_28, w_26);
  t = n_7(x_26, w_26, t);
  t = v_26;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, b_5, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm b_27 = NULL;
  b_27 = t;
  if(match_string(t, "-S"))
    {
      t = b_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_27;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  t = term_f_10;
  c_27 = t;
  t = term_l_28;
  d_27 = t;
  t = term_n_28;
  t = n_7(c_27, d_27, t);
  t = term_q_28;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_u_28;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,j_27 = NULL;
  f_27 = t;
  t = SSL_string_to_int(f_27);
  g_27 = t;
  t = term_f_10;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, g_27);
  t = n_7(j_27, g_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_27);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_v_28;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  t = term_w_28;
  k_27 = t;
  t = term_v_0;
  l_27 = t;
  t = term_x_28;
  t = n_7(k_27, l_27, t);
  t = term_y_28;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, l_5, m_5, t);
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm c_29 = t;
        int d_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_5, p_5, r_5, t);
            LocalPopChoice(d_29);
          }
        else
          {
            t = c_29;
            t = Option_3_0(s_5, u_5, w_5, t);
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm q_27 = NULL;
  t = term_e_29;
  q_27 = t;
  t = SSL_table_put(q_27, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_e_29, j_38, k_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
      t = term_v_0;
      t = e_0(t);
      x_27 = t;
      t = term_f_29;
      y_27 = t;
      t = term_g_29;
      z_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_29, term_g_29, x_27);
      t = l_7(y_27, z_27, x_27, t);
      _fail(t);
    }
  else
    {
      ATerm c_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = c_0(t);
      t = term_v_0;
      t = d_0(t);
      c_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_27), c_28);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  if(match_string(t, "-o"))
    {
      t = g_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_28;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm h_28 = NULL,k_28 = NULL;
  h_28 = t;
  t = term_c_26;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, h_28);
  t = n_7(k_28, h_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_28);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm m_28 = NULL;
  m_28 = t;
  if(match_string(t, "-i"))
    {
      t = m_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_28;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  t = term_d_26;
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, o_28);
  t = n_7(p_28, o_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_28);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_i_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_6, c_6, d_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm m_29 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
    l_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_29 = ATgetFirst((ATermList) t);
        k_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_11 = NULL,s_11 = NULL,t_3 = NULL;
          t = SSLgetAnnotations(l_29);
          o_11 = t;
          t = k_29;
          t = m_29(t);
          s_11 = t;
          t = (ATerm) ATinsert(CheckATermList(s_11), j_29);
          t_3 = t;
          t = SSLsetAnnotations(t_3, o_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_29;
        t = z_71(t);
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_28;
    }
  else
    {
      static ATerm f_6 (ATerm t)
      {
        t = not_null(t_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_28 = ATgetFirst((ATermList) t);
          if(((t_28 != NULL) && (t_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_28;
      t = at_end_1_0(f_6, t);
    }
  return(t);
}
static ATerm b_30 (ATerm r_29, ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_explode_term(r_29);
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL;
  w_29 = t;
  if(match_cons(t, sym__2))
    {
      u_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
      {
        ATerm o_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_6 (ATerm t)
            {
              t = v_29;
              return(t);
            }
            t = u_29;
            t = at_end_1_0(g_6, t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = o_29;
            t = b_30(w_29, t);
          }
      }
    }
  else
    {
      t = b_30(w_29, t);
    }
  return(t);
}
static ATerm f_7 (ATerm p_38, ATerm o_38, ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
  t = p_38;
  {
    ATerm q_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATempty;
      }
  }
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, d_30);
  t = conc_0_0(t);
  c_30 = t;
  t = term_e_29;
  e_30 = t;
  t = SSL_table_put(e_30, p_38, c_30);
  t = (ATerm) ATmakeAppl(sym__3, term_e_29, p_38, c_30);
  return(t);
}
static ATerm l_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_29 = ATgetArgument(t, 0);
            ATerm a_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = k_7(j_36, k_36, t);
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
  }
  i_30 = t;
  t = (ATerm) ATinsert(CheckATermList(i_30), i_36);
  j_30 = t;
  t = SSL_table_put(j_36, k_36, j_30);
  t = h_30;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,f_31 = NULL,g_31 = NULL;
      t = term_v_0;
      t = n_0(t);
      d_31 = t;
      t = term_f_29;
      f_31 = t;
      t = term_g_29;
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_29, term_g_29, d_31);
      t = l_7(f_31, g_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm l_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_30 = ATgetFirst((ATermList) t);
          a_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_30;
      t = k_0(t);
      t = b_31;
      t = l_0(t);
      l_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), l_31);
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = term_n_11;
  p_31 = t;
  t = (ATerm) ATinsert(ATempty, o_31);
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, (ATerm) ATinsert(ATempty, o_31));
  t = f_7(p_31, q_31, t);
  t = o_31;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_6, i_6, j_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_0;
  t = whoami_0_0(t);
  r_31 = t;
  t = term_d_11;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_30), r_31);
  u_31 = t;
  t = SSL_printnl(t_31, u_31);
  t = term_f_11;
  s_31 = t;
  t = SSL_exit(s_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_30;
  t = get_config_0_0(t);
  return(t);
}
static ATerm g_7 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_31;
      t = e_78(t);
    }
  else
    {
      ATerm c_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_31 = ATgetFirst((ATermList) t);
          z_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      t = foldr_2_0(e_78, f_78, t);
      c_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_31, c_32);
      t = f_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_l_28;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm d_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(d_12, g_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_32 = NULL,z_11 = NULL,a_12 = NULL;
  t = times_0_0(t);
  a_12 = t;
  t = SSL_explode_term(a_12);
  if(match_cons(t, sym__2))
    {
      ATerm n_30 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11;
  t = foldr_2_0(l_6, m_6, t);
  h_32 = t;
  t = SSL_TicksToSeconds(h_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_33;
        if((c_33 != t))
          {
            _fail(t);
          }
        t = b_33;
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATmakeAppl(sym__2, c_33, d_33);
        {
          ATerm q_30 = t;
          int r_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_33, d_33);
              LocalPopChoice(r_30);
            }
          else
            {
              t = q_30;
              t = SSL_gtr(c_33, d_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, c_33, d_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  {
    ATerm s_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL;
        t = term_f_10;
        t = get_config_0_0(t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_f_11);
        t = geq_0_0(t);
        t = n_33;
        t = v_82(t);
        LocalPopChoice(u_30);
      }
    else
      {
        t = s_30;
        t = n_33;
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm t_33 = NULL,x_33 = NULL,c_34 = NULL,d_34 = NULL;
  t = run_time_0_0(t);
  t_33 = t;
  t = term_v_0;
  t = whoami_0_0(t);
  x_33 = t;
  t = term_d_11;
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), t_33), term_b_12), x_33);
  d_34 = t;
  t = SSL_printnl(c_34, d_34);
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_30), t_33), term_b_12), x_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_28;
  e_34 = t;
  t = SSL_exit(e_34);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm m_34 = NULL,a_35 = NULL;
  a_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_34 = ATgetArgument(t, 0);
          {
            ATerm f_13 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(a_35);
            f_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_34);
            w_3 = t;
            t = SSLsetAnnotations(w_3, f_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_30;
      t = get_config_0_0(t);
      LocalPopChoice(x_30);
    }
  else
    {
      t = w_30;
      t = fetch_1_0(t_6, t);
    }
  t = f_87(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_35 = ATgetFirst((ATermList) t);
      e_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_35 = NULL,j_35 = NULL;
        static ATerm h_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_35)), not_null(j_35));
          return(t);
        }
        t = e_35;
        t = i_0(t);
        if(((i_35 != NULL) && (i_35 != t)))
          _fail(t);
        else
          i_35 = t;
        t = d_35;
        t = g_0(t);
        if(((j_35 != NULL) && (j_35 != t)))
          _fail(t);
        else
          j_35 = t;
        t = e_35;
        t = reverse_acc_2_0(g_0, h_7, t);
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
static ATerm i_7 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL,z_3 = NULL;
  p_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_35);
  z_3 = t;
  t = SSLsetAnnotations(z_3, n_35);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_35), term_z_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  ATerm e_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_30;
      t = get_config_0_0(t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = e_31;
      t = fetch_1_0(i_7, t);
    }
  t = term_i_31;
  t = echo_0_0(t);
  t = term_f_29;
  l_35 = t;
  t = term_g_29;
  m_35 = t;
  t = term_j_31;
  t = k_7(l_35, m_35, t);
  t = reverse_acc_2_0(_id, p_7, t);
  t = map_1_0(q_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  static ATerm z_36 (ATerm t)
  {
    ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
    w_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_36 = ATgetFirst((ATermList) t);
        y_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm k_31 = t;
      int m_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13 = NULL,q_13 = NULL,c_4 = NULL;
          t = SSLgetAnnotations(w_36);
          n_13 = t;
          t = x_36;
          t = s_71(t);
          q_13 = t;
          t = (ATerm) ATinsert(CheckATermList(y_36), q_13);
          c_4 = t;
          t = SSLsetAnnotations(c_4, n_13);
          LocalPopChoice(m_31);
        }
      else
        {
          t = k_31;
          {
            ATerm d_14 = NULL,j_14 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(w_36);
            d_14 = t;
            t = y_36;
            t = z_36(t);
            j_14 = t;
            t = (ATerm) ATinsert(CheckATermList(j_14), x_36);
            i_4 = t;
            t = SSLsetAnnotations(i_4, d_14);
          }
        }
    }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  {
    ATerm n_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_31 = ATgetFirst((ATermList) t);
                ATerm a_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_37;
          }
        LocalPopChoice(v_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATinsert(ATempty, d_37);
      }
  }
  e_37 = t;
  t = term_n_9;
  f_37 = t;
  t = SSL_printnl(f_37, e_37);
  t = d_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  o_37 = t;
  t = q_66(t);
  t_37 = t;
  t = term_d_11;
  u_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_37), t_37);
  v_37 = t;
  t = SSL_printnl(u_37, v_37);
  t = o_37;
  return(t);
}
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  static ATerm q_38 (ATerm t)
  {
    ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
    l_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_38;
      }
    else
      {
        ATerm t_15 = NULL,k_16 = NULL,l_16 = NULL,l_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_38 = ATgetFirst((ATermList) t);
            n_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_38);
        t_15 = t;
        t = m_38;
        t = i_71(t);
        k_16 = t;
        t = n_38;
        t = q_38(t);
        l_16 = t;
        t = (ATerm) ATinsert(CheckATermList(l_16), k_16);
        l_4 = t;
        t = SSLsetAnnotations(l_4, t_15);
      }
    return(t);
  }
  t = q_38(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm b_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(f_32);
    }
  else
    {
      t = b_32;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_39 = NULL;
      e_39 = t;
      t = SSL_is_string(e_39);
      LocalPopChoice(j_32);
    }
  else
    {
      t = i_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_7, t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm k_39 = NULL,l_39 = NULL,n_39 = NULL;
              k_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_39 = ATgetArgument(t, 0);
                  t = l_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_39 = ATgetArgument(t, 0);
                      t = l_39;
                      {
                        ATerm m_32 = t;
                        int n_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_32);
                          }
                        else
                          {
                            t = m_32;
                            t = debug_1_0(t_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_39 = NULL,u_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_39 = ATgetArgument(t, 0);
                          n_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_39;
                      t = eval_config_0_0(t);
                      t_39 = t;
                      t = n_39;
                      t = eval_config_0_0(t);
                      u_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_39, u_39);
                      t = j_7(t_39, u_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  t = term_e_29;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, y_39);
  t = k_7(z_39, y_39, t);
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_40 = NULL,f_40 = NULL;
        t = eval_config_0_0(t);
        e_40 = t;
        t = term_e_29;
        f_40 = t;
        t = SSL_table_put(f_40, y_39, e_40);
        t = e_40;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
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
static ATerm y_7 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_q_32;
  i_40 = t;
  t = term_v_0;
  j_40 = t;
  t = term_r_32;
  t = n_7(i_40, j_40, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = term_s_32;
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
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  t = term_q_32;
  m_40 = t;
  t = term_v_0;
  n_40 = t;
  t = term_r_32;
  t = n_7(m_40, n_40, t);
  t = term_t_32;
  k_40 = t;
  t = term_v_0;
  l_40 = t;
  t = term_u_32;
  t = n_7(k_40, l_40, t);
  t = term_v_32;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_7, y_7, z_7, t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      t = Option_3_0(b_8, c_8, d_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,t_40 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,q_5 = NULL;
  g_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_40 = ATgetFirst((ATermList) t);
      t_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  o_40 = t;
  t = p_40;
  t = i_58(t);
  e_41 = t;
  t = t_40;
  t = j_58(t);
  f_41 = t;
  t = (ATerm) ATinsert(CheckATermList(f_41), e_41);
  q_5 = t;
  t = SSLsetAnnotations(q_5, o_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm l_41 = NULL,o_41 = NULL,p_41 = NULL,r_41 = NULL,t_41 = NULL,v_41 = NULL,t_5 = NULL;
  l_41 = t;
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = d_89(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
      }
  }
  t = l_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_41 = ATgetFirst((ATermList) t);
      r_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_41);
  o_41 = t;
  t = term_k_30;
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_30, p_41);
  t = n_7(v_41, p_41, t);
  t = r_41;
  {
    static ATerm f_42 (ATerm t)
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_41 = NULL;
              y_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_41;
              LocalPopChoice(k_33);
            }
          else
            {
              t = h_33;
              t = d_89(t);
              t = Cons_2_0(_id, f_42, t);
            }
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          {
            ATerm b_42 = NULL,c_42 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_42 = ATgetFirst((ATermList) t);
                c_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_42), (ATerm) ATmakeAppl(sym_Undefined_1, b_42));
          }
        }
      return(t);
    }
    t = f_42(t);
  }
  t_41 = t;
  t = (ATerm) ATinsert(CheckATermList(t_41), (ATerm) ATmakeAppl(sym_Program_1, p_41));
  t_5 = t;
  t = SSLsetAnnotations(t_5, o_41);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm y_42 = NULL;
  y_42 = t;
  if(match_string(t, "--help"))
    {
      t = y_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_42;
        }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = term_y_30;
  z_42 = t;
  t = term_v_0;
  a_43 = t;
  t = term_l_33;
  t = n_7(z_42, a_43, t);
  t = term_m_33;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_o_33;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,x_42 = NULL;
  o_42 = t;
  t = term_f_29;
  q_42 = t;
  t = term_g_29;
  r_42 = t;
  t = (ATerm) ATempty;
  x_42 = t;
  t = SSL_table_put(q_42, r_42, x_42);
  t = o_42;
  {
    static ATerm e_8 (ATerm t)
    {
      ATerm p_33 = t;
      int q_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_89(t);
          LocalPopChoice(q_33);
        }
      else
        {
          t = p_33;
          {
            ATerm s_33 = t;
            int u_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_8, g_8, h_8, t);
                LocalPopChoice(u_33);
              }
            else
              {
                t = s_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_8, t);
  }
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_43 = NULL;
        i_43 = t;
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_18 = NULL;
              t = i_43;
              {
                ATerm a_34 = t;
                int b_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_y_30;
                    t = get_config_0_0(t);
                    LocalPopChoice(b_34);
                  }
                else
                  {
                    t = a_34;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = i_43;
              t = default_system_usage_0_0(t);
              t = term_l_28;
              o_18 = t;
              t = SSL_exit(o_18);
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              {
                ATerm w_18 = NULL;
                t = term_q_32;
                t = get_config_0_0(t);
                t = i_43;
                t = default_system_about_0_0(t);
                t = term_l_28;
                w_18 = t;
                t = SSL_exit(w_18);
              }
            }
        }
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        {
          ATerm f_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL;
              static ATerm l_8 (ATerm t)
              {
                ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,v_5 = NULL;
                o_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_43);
                m_43 = t;
                t = n_43;
                if(((m_42 != NULL) && (m_42 != t)))
                  _fail(t);
                else
                  m_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_43);
                v_5 = t;
                t = SSLsetAnnotations(v_5, m_43);
                return(t);
              }
              t = fetch_1_0(l_8, t);
              t = term_d_11;
              k_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), term_h_34);
              l_43 = t;
              t = SSL_printnl(k_43, l_43);
              t = (ATerm) ATmakeAppl(sym__2, term_d_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), term_h_34));
              t = default_system_usage_0_0(t);
              t = term_f_11;
              j_43 = t;
              t = SSL_exit(j_43);
              LocalPopChoice(g_34);
            }
          else
            {
              t = f_34;
            }
        }
      }
  }
  n_42 = t;
  t = term_f_29;
  p_42 = t;
  t = SSL_table_destroy(p_42);
  t = n_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  t = parse_options_1_0(h_87, t);
  t_43 = t;
  t = term_i_34;
  w_43 = t;
  t = SSL_table_create(w_43);
  t = term_i_34;
  u_43 = t;
  t = term_j_34;
  v_43 = t;
  t = SSL_table_put(u_43, v_43, t_43);
  t = t_43;
  t = j_87(t);
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_87, t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      {
        ATerm r_34 = t;
        int s_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_34);
          }
        else
          {
            t = r_34;
            {
              ATerm t_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = t_34;
                  {
                    ATerm x_34 = t;
                    int y_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_8, r_8, s_8, t);
                        LocalPopChoice(y_34);
                      }
                    else
                      {
                        t = x_34;
                        {
                          ATerm z_34 = t;
                          int b_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(b_35);
                            }
                          else
                            {
                              t = z_34;
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
static ATerm n_8 (ATerm t)
{
  t = xtc_io_1_0(t_8, t);
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
  ATerm a_44 = NULL,b_44 = NULL;
  t = term_c_35;
  a_44 = t;
  t = term_v_0;
  b_44 = t;
  t = term_f_35;
  t = n_7(a_44, b_44, t);
  t = term_g_35;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm k_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_44 = NULL,j_44 = NULL;
      j_44 = t;
      if(match_cons(t, sym_FILE_1))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm b_19 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(j_44);
            b_19 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_44);
            x_5 = t;
            t = SSLsetAnnotations(x_5, b_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_44;
        }
      LocalPopChoice(q_35);
      t = xtc_transform_file_2_0(u_8, create_pp_table_args_0_0, t);
    }
  else
    {
      t = k_35;
      t = xtc_transform_term_2_0(v_8, create_pp_table_args_0_0, t);
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_s_35;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_8, default_usage_0_0, _id, n_8, t);
  return(t);
}
