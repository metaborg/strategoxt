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
ATerm term_z_35;
ATerm term_w_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_p_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_b_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_i_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_z_31;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_h_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_o_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_r_28;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_f_26;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_k_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_d_23;
ATerm term_o_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_j_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_f_9);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_s_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_k_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_z_11, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_u_10, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_q_13, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_y_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_y_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_e_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_l_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_c_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_e_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_m_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_d_18, term_k_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_x_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_k_19, term_l_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_q_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_w_19, term_y_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_i_20, term_j_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_t_20, term_u_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_s_24);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_i_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_e_24);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym__2, term_k_27, term_z_26);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_f_29);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_m_9);
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_w_30);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_o_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(sym__2, term_y_29, term_b_30);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_m_9);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_m_9);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_m_9);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_q_32);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym__2, term_p_35, term_m_9);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym__2, term_e_9, term_o_27);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm j_6 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm a_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm v_72 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm l_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm m_6 (ATerm k_67 (ATerm), ATerm d_168, ATerm y_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t);
static ATerm n_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm m_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm z_65 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm i_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_84 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_84 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_84 (ATerm), ATerm t);
static ATerm q_6 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm r_6 (ATerm l_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm s_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm t_6 (ATerm e_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm x_6 (ATerm h_40, ATerm i_40, ATerm t);
static ATerm h_16 (ATerm b_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_6 (ATerm u_17, ATerm t);
static ATerm v_6 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_18 (ATerm r_16, ATerm t);
static ATerm i_18 (ATerm x_16, ATerm y_16, ATerm z_16, ATerm t);
static ATerm j_18 (ATerm n_17, ATerm q_17, ATerm r_17, ATerm t);
static ATerm w_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm h_24 (ATerm l_23, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm z_86 (ATerm), ATerm t);
static ATerm y_6 (ATerm o_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm z_6 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm g_7 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm b_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_82 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm l_86 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_7 (ATerm e_39, ATerm f_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm r_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_32 (ATerm r_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm c_7 (ATerm k_39, ATerm j_39, ATerm t);
static ATerm h_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm x_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_83 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm need_help_1_0 (ATerm h_88 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_72 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm f_90 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm parse_options_1_0 (ATerm e_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
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
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_3 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = i_1;
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
        t = (ATerm) ATmakeAppl(sym__2, j_1, h_0);
        t = a_7(j_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
        LocalPopChoice(w_8);
      }
    else
      {
        t = g_3;
        {
          ATerm x_8 = t;
          int y_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_1 = NULL;
              t = i_1;
              t = o_0(t);
              g_1 = t;
              {
                ATerm a_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_1 = NULL;
                    h_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = h_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = h_1;
                          }
                        else
                          {
                            t = h_1;
                            if((j_1 != t))
                              {
                                _fail(t);
                              }
                            t = h_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_1, g_1);
              t = a_7(j_1, g_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              LocalPopChoice(y_8);
            }
          else
            {
              t = x_8;
              t = i_1;
              t = o_0(t);
              if((j_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
            }
        }
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm c_9 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL,g_2 = NULL;
      t = term_e_9;
      c_2 = t;
      t = term_f_9;
      g_2 = t;
      t = term_g_9;
      t = g_7(c_2, g_2, t);
      LocalPopChoice(d_9);
    }
  else
    {
      t = c_9;
      t = term_h_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_1 = NULL,w_1 = NULL;
      t = term_f_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL,y_1 = NULL;
            t = term_e_9;
            x_1 = t;
            t = term_f_9;
            y_1 = t;
            t = term_g_9;
            t = g_7(x_1, y_1, t);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            t = term_h_9;
          }
      }
      q_1 = t;
      t = term_k_9;
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_k_9, q_1);
      t = a_7(w_1, q_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm l_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,m_2 = NULL;
  t = term_m_9;
  t = new_0_0(t);
  j_2 = t;
  t = term_n_9;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_n_9);
  t = z_6(j_2, k_2, t);
  m_2 = t;
  {
    ATerm o_9 = t;
    int q_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL;
        t = (ATerm) ATinsert(ATempty, term_s_9);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATempty, term_s_9));
        t = x_6(m_2, c_3, t);
        t = new_file_0_0(t);
        LocalPopChoice(q_9);
      }
    else
      {
        t = o_9;
        t = m_2;
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
static ATerm j_6 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm u_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(y_9);
    }
  else
    {
      t = u_9;
      t = get_errno_0_0(t);
      t = term_m_9;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = a_7(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm a_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  z_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_9 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = z_3;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_h_9;
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, term_h_9);
        t = a_7(a_4, i_2, t);
        t = SSL_remove(a_4);
        t = term_h_9;
        LocalPopChoice(d_10);
      }
    else
      {
        t = z_9;
        {
          ATerm e_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL;
              t = z_3;
              t = t_0(t);
              r_2 = t;
              {
                ATerm g_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_2 = NULL;
                    s_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = s_2;
                      }
                    else
                      {
                        t = s_2;
                        if((a_4 != t))
                          {
                            _fail(t);
                          }
                        t = s_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_4, r_2);
              t = j_6(a_4, r_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
              LocalPopChoice(f_10);
            }
          else
            {
              t = e_10;
              t = z_3;
              t = t_0(t);
              if((a_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_4);
            }
        }
      }
  }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_h_10;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_h_10;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = debug_1_0(w_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm g_4 = NULL,i_4 = NULL;
  g_4 = t;
  {
    static ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL,l_4 = NULL,q_0 = NULL;
            l_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm o_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_4);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
            q_0 = t;
            t = SSLsetAnnotations(q_0, k_4);
            LocalPopChoice(n_10);
            t = xtc_transform_file_2_0(f_0, j_0, t);
          }
        else
          {
            t = m_10;
            t = xtc_transform_term_2_0(m_0, s_0, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(b_0, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      i_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_4;
  t = if_verbose2_1_0(u_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    ATerm p_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        t = term_e_9;
        q_4 = t;
        t = term_s_10;
        r_4 = t;
        t = term_t_10;
        t = g_7(q_4, r_4, t);
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, term_u_10);
        t = geq_0_0(t);
        t = n_4;
        t = y_83(t);
        LocalPopChoice(r_10);
      }
    else
      {
        t = p_10;
        t = n_4;
      }
  }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,v_0 = NULL;
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_10), term_w_10), v_4);
  b_5 = t;
  t = SSL_concat_strings(b_5);
  a_5 = t;
  t = (ATerm) ATinsert(ATempty, term_s_9);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATempty, term_s_9));
  t = x_6(a_5, z_4, t);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, v_4);
  j_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      ATerm a_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_5);
  e_5 = t;
  t = SSL_modification_time(t_4);
  g_5 = t;
  t = SSL_modification_time(v_4);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, i_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, e_5);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, v_4);
  y_4 = t;
  t = SSL_explode_term(y_4);
  if(match_cons(t, sym__2))
    {
      ATerm b_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_11 = ATgetArgument(t, 1);
        if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
          {
            x_4 = ATgetFirst((ATermList) c_11);
            {
              ATerm d_11 = (ATerm) ATgetNext((ATermList) c_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_4;
  t = if_verbose2_1_0(y_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_72 (ATerm), ATerm t)
{
  static ATerm g_6 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_72(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm y_5 = NULL,z_5 = NULL,e_6 = NULL,y_2 = NULL,d_3 = NULL,x_0 = NULL;
          y_5 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_5 = ATgetFirst((ATermList) t);
              e_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_5);
          y_2 = t;
          t = e_6;
          t = g_6(t);
          d_3 = t;
          t = (ATerm) ATinsert(CheckATermList(d_3), z_5);
          x_0 = t;
          t = SSLsetAnnotations(x_0, y_2);
        }
      }
    return(t);
  }
  t = g_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm g_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 = NULL,q_3 = NULL,s_3 = NULL;
      q_3 = t;
      t = term_j_11;
      s_3 = t;
      t = SSL_explode_string(s_3);
      k_3 = t;
      t = SSL_explode_string(q_3);
      {
        static ATerm a_1 (ATerm t)
        {
          if((k_3 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
      }
      t = q_3;
      LocalPopChoice(i_11);
    }
  else
    {
      t = g_11;
      {
        ATerm l_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 = NULL,y_3 = NULL,b_4 = NULL;
            y_3 = t;
            t = term_u_11;
            b_4 = t;
            t = SSL_explode_string(b_4);
            v_3 = t;
            t = SSL_explode_string(y_3);
            {
              static ATerm c_1 (ATerm t)
              {
                if((v_3 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
            }
            t = y_3;
            LocalPopChoice(t_11);
          }
        else
          {
            t = l_11;
            {
              ATerm p_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
              p_7 = t;
              t = term_x_11;
              s_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, p_7), term_y_11);
              t_7 = t;
              t = SSL_printnl(s_7, t_7);
              t = term_z_11;
              r_7 = t;
              t = SSL_exit(r_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, p_7), term_y_11);
            }
          }
      }
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 = NULL,v_7 = NULL;
      t = term_e_9;
      u_7 = t;
      t = term_k_12;
      v_7 = t;
      t = term_o_12;
      t = g_7(u_7, v_7, t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm w_7 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  w_7 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_7), term_k_12);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(e_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(k_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_s_9);
      c_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_8, (ATerm) ATinsert(ATempty, term_s_9));
      t = x_6(a_8, c_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm d_8 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_8);
  return(t);
}
static ATerm m_6 (ATerm k_67 (ATerm), ATerm d_168, ATerm y_17, ATerm t)
{
  ATerm e_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_168, term_q_12);
  t = w_6(t);
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, y_17);
  t = k_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if(match_cons(t_12, sym_Stream_1))
        {
          j_8 = ATgetArgument(t_12, 0);
        }
      else
        _fail(t);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_6(j_8, k_8, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm f_8 = NULL,i_8 = NULL;
  i_8 = t;
  t = xtc_new_file_0_0(t);
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_8, i_8);
  t = m_6(m_1, f_8, i_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_8);
  t = xtc_transform_file_2_0(y_85, z_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm p_9 = NULL,t_9 = NULL,w_9 = NULL,x_9 = NULL;
  p_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_9 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,w_4 = NULL;
        t = SSL_int_to_string(t_9);
        u_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_12), u_4), term_u_12);
        w_4 = t;
        t = SSL_concat_strings(w_4);
      }
    }
  else
    {
      ATerm w_5 = NULL,a_6 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_9 = ATgetArgument(t, 0);
          w_9 = ATgetArgument(t, 1);
          x_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_9);
      w_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_9), term_y_12), w_5), term_x_12), t_9);
      a_6 = t;
      t = SSL_concat_strings(a_6);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm a_10 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = m_72(t);
    if(((a_10 != NULL) && (a_10 != t)))
      _fail(t);
    else
      a_10 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(a_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  b_10 = t;
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm c_13 = ATgetArgument(t, 0);
              if((b_10 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm d_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_21), term_y_20), term_k_20), term_g_20), term_a_20), term_r_19), term_m_19), term_i_19), term_b_19), term_s_18), term_l_18), term_a_18), term_i_17), term_v_16), term_p_16), term_d_16), term_y_15), term_t_15), term_m_15), term_i_15), term_z_14), term_u_14), term_j_14), term_d_14), term_z_13), term_s_13), term_m_13), term_i_13);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, b_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_10 = NULL,x_10 = NULL;
  i_10 = t;
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            x_10 = ATgetArgument(t, 1);
            {
              ATerm k_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(i_21);
        {
          ATerm l_21 = t;
          int m_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_6 = NULL,p_6 = NULL,e_7 = NULL;
              t = x_10;
              {
                ATerm n_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              i_6 = t;
              t = term_x_11;
              p_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_6), term_o_21);
              e_7 = t;
              t = SSL_printnl(p_6, e_7);
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, i_6), term_o_21));
              LocalPopChoice(m_21);
            }
          else
            {
              t = l_21;
              t = i_10;
            }
        }
      }
    else
      {
        t = h_21;
        t = i_10;
      }
  }
  t = i_10;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_65 (ATerm), ATerm t)
{
  ATerm h_11 = NULL,k_11 = NULL;
  k_11 = t;
  t = fork_0_0(t);
  h_11 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_11;
        t = z_65(t);
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = SSL_waitpid(h_11);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            if(((ATgetType(r_21) != AT_INT) || (ATgetInt((ATermInt) r_21) != 0)))
              _fail(t);
            {
              ATerm s_21 = ATgetArgument(t, 1);
            }
            {
              ATerm t_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_11;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm i_67 (ATerm), ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  m_11 = t;
  t = i_67(t);
  o_11 = t;
  t = term_x_11;
  p_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_11), o_11);
  q_11 = t;
  t = SSL_printnl(p_11, q_11);
  t = m_11;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_11 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm s_11 = NULL,v_11 = NULL;
    s_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_11), s_11);
    t = g_7(not_null(r_11), s_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_11, v_11);
    return(t);
  }
  if(((r_11 != NULL) && (r_11 != t)))
    _fail(t);
  else
    r_11 = t;
  t = SSL_table_keys(r_11);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm a_12 = NULL;
  a_12 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = NULL,g_12 = NULL,i_12 = NULL;
        t = term_e_9;
        g_12 = t;
        t = term_s_10;
        i_12 = t;
        t = term_t_10;
        t = g_7(g_12, i_12, t);
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, term_d_20);
        t = geq_0_0(t);
        t = a_12;
        t = b_84(t);
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        t = a_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL,s_12 = NULL,w_12 = NULL;
        t = term_e_9;
        s_12 = t;
        t = term_s_10;
        w_12 = t;
        t = term_t_10;
        t = g_7(s_12, w_12, t);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_12, term_w_15);
        t = geq_0_0(t);
        t = n_12;
        t = a_84(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = n_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL,k_13 = NULL,n_13 = NULL;
        t = term_e_9;
        k_13 = t;
        t = term_s_10;
        n_13 = t;
        t = term_t_10;
        t = g_7(k_13, n_13, t);
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_13, term_v_13);
        t = geq_0_0(t);
        t = z_12;
        t = c_84(t);
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = z_12;
      }
  }
  return(t);
}
static ATerm q_6 (ATerm o_76 (ATerm), ATerm p_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = p_76(t);
  {
    static ATerm s_1 (ATerm t)
    {
      ATerm p_13 = NULL;
      p_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, p_13);
      t = o_76(t);
      return(t);
    }
    t = fetch_1_0(s_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm r_6 (ATerm l_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm a_15 (ATerm t)
  {
    ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
    q_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_14 = ATgetFirst((ATermList) t);
            s_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_22 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_14;
              {
                static ATerm u_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = q_6(l_76, u_1, r_14, s_14, t);
              }
              t = a_15(t);
              LocalPopChoice(e_22);
            }
          else
            {
              t = d_22;
              {
                ATerm q_7 = NULL,g_8 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(q_14);
                q_7 = t;
                t = s_14;
                t = a_15(t);
                g_8 = t;
                t = (ATerm) ATinsert(CheckATermList(g_8), r_14);
                b_1 = t;
                t = SSLsetAnnotations(b_1, q_7);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = a_15(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      n_15 = ATgetArgument(t, 0);
      if((n_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            ATerm l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = g_7(o_37, p_37, t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = (ATerm) ATempty;
      }
  }
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_15, q_37);
  t = r_6(z_1, h_15, q_37, t);
  g_15 = t;
  t = SSL_table_put(o_37, p_37, g_15);
  t = f_15;
  return(t);
}
static ATerm t_6 (ATerm e_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm p_15 = NULL,q_15 = NULL;
    if(match_cons(t, sym__2))
      {
        p_15 = ATgetArgument(t, 0);
        q_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, p_15, q_15);
    t = e_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm x_6 (ATerm h_40, ATerm i_40, ATerm t)
{
  t = SSL_access(h_40, i_40);
  return(t);
}
static ATerm h_16 (ATerm b_16, ATerm t)
{
  t = SSL_fclose(b_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_16 = ATgetArgument(t, 0);
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_16);
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            t = h_16(f_16, t);
          }
      }
    }
  else
    {
      t = h_16(f_16, t);
    }
  return(t);
}
static ATerm u_6 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm v_6 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm i_16 = NULL;
  t = SSL_fopen(q_40, r_40);
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_16 = NULL;
  t = SSL_stdin_stream();
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_16 = NULL;
  t = SSL_stdout_stream();
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_16 = NULL;
  t = SSL_stderr_stream();
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_16);
  return(t);
}
static ATerm h_18 (ATerm r_16, ATerm t)
{
  ATerm s_16 = NULL;
  t = SSL_explode_term(r_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
          {
            s_16 = ATgetFirst((ATermList) q_22);
            {
              ATerm r_22 = (ATerm) ATgetNext((ATermList) q_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_16;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_16;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_16;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_16;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_18 (ATerm x_16, ATerm y_16, ATerm z_16, ATerm t)
{
  ATerm c_17 = NULL,f_17 = NULL,g_17 = NULL,l_17 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(z_16);
  g_17 = t;
  t = x_16;
  if(match_cons(t, sym_Path_1))
    {
      l_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_17, y_16);
  d_1 = t;
  t = SSLsetAnnotations(d_1, g_17);
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(c_17, f_17, t);
  return(t);
}
static ATerm j_18 (ATerm n_17, ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL,z_17 = NULL,c_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(r_17);
  z_17 = t;
  t = SSL_is_string(n_17);
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_18, q_17);
  f_1 = t;
  t = SSLsetAnnotations(f_1, z_17);
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_6(v_17, w_17, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  if(match_cons(t, sym__2))
    {
      f_18 = ATgetArgument(t, 0);
      g_18 = ATgetArgument(t, 1);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_18(e_18, t);
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm v_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_18(f_18, g_18, e_18, t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = v_22;
                  t = j_18(f_18, g_18, e_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_18(e_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,t_18 = NULL;
  t_18 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_18, term_d_23);
        t = w_6(t);
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm z_8 = NULL,b_9 = NULL;
          t = term_f_23;
          b_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_23, t_18);
          t = z_6(b_9, t_18, t);
          z_8 = t;
          t = SSL_perror(z_8);
          _fail(t);
        }
      }
  }
  n_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_6(o_18, t);
  m_18 = t;
  t = n_18;
  t = fclose_0_0(t);
  t = m_18;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL,z_18 = NULL;
      y_18 = t;
      t = (ATerm) ATinsert(ATempty, term_k_23);
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_18, (ATerm) ATinsert(ATempty, term_k_23));
      t = x_6(y_18, z_18, t);
      LocalPopChoice(j_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_23;
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 = t;
            if((PushChoice() == 0))
              {
                ATerm a_19 = NULL,e_19 = NULL;
                a_19 = t;
                t = (ATerm) ATinsert(ATempty, term_s_9);
                e_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, a_19, (ATerm) ATinsert(ATempty, term_s_9));
                t = x_6(a_19, e_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = o_23;
              }
            t = debug_1_0(d_2, t);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = debug_1_0(e_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_w_23;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  t = term_x_11;
  p_20 = t;
  t = (ATerm) ATinsert(ATempty, term_a_24);
  q_20 = t;
  t = SSL_printnl(p_20, q_20);
  t = o_20;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__3))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
      v_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_6(r_20, s_20, v_20, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,z_20 = NULL;
  w_20 = t;
  t = term_x_11;
  x_20 = t;
  t = (ATerm) ATinsert(ATempty, term_b_24);
  z_20 = t;
  t = SSL_printnl(x_20, z_20);
  t = w_20;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm a_21 = NULL,f_21 = NULL,g_21 = NULL;
  a_21 = t;
  t = term_x_11;
  f_21 = t;
  t = (ATerm) ATinsert(ATempty, term_a_24);
  g_21 = t;
  t = SSL_printnl(f_21, g_21);
  t = a_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL,p_19 = NULL,s_19 = NULL,u_19 = NULL,v_19 = NULL,x_19 = NULL,z_19 = NULL,b_20 = NULL,f_20 = NULL;
  f_19 = t;
  t = if_verbose5_1_0(f_2, t);
  {
    ATerm c_24 = t;
    if((PushChoice() == 0))
      {
        ATerm l_20 = NULL,n_20 = NULL;
        t = term_d_24;
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_19);
        n_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_24, (ATerm) ATmakeAppl(sym_Imported_1, f_19));
        t = g_7(l_20, n_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_24;
      }
  }
  p_19 = t;
  t = term_d_24;
  z_19 = t;
  t = term_e_24;
  b_20 = t;
  t = (ATerm) ATinsert(ATempty, f_19);
  f_20 = t;
  t = SSL_table_put(z_19, b_20, f_20);
  t = p_19;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_2, t);
  g_19 = t;
  t = term_d_24;
  x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, g_19);
  t = t_6(p_2, x_19, g_19, t);
  t = if_verbose6_1_0(q_2, t);
  t = term_d_24;
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, f_19);
  u_19 = t;
  t = (ATerm) ATempty;
  v_19 = t;
  t = SSL_table_put(s_19, u_19, v_19);
  t = (ATerm) ATmakeAppl(sym__3, term_d_24, (ATerm)ATmakeAppl(sym_Imported_1, f_19), (ATerm) ATempty);
  t = if_verbose4_1_0(t_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_21;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_21 = ATgetFirst((ATermList) t);
          a_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL,v_9 = NULL,c_10 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(y_21);
            r_9 = t;
            t = z_21;
            t = k_80(t);
            v_9 = t;
            t = a_22;
            t = filter_1_0(k_80, t);
            c_10 = t;
            t = (ATerm) ATinsert(CheckATermList(c_10), v_9);
            r_1 = t;
            t = SSLsetAnnotations(r_1, r_9);
            LocalPopChoice(i_24);
          }
        else
          {
            t = g_24;
            t = a_22;
            t = filter_1_0(k_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  static ATerm f_22 (ATerm t)
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_70(t);
        t = f_22(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = g_70(t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_22 = NULL,h_22 = NULL;
      t = term_e_9;
      g_22 = t;
      t = term_s_24;
      h_22 = t;
      t = term_v_24;
      t = g_7(g_22, h_22, t);
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm z_24 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_22 = NULL;
            t = term_f_25;
            o_22 = t;
            t = SSL_getenv(o_22);
            LocalPopChoice(d_25);
          }
        else
          {
            t = z_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(v_2, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm c_23 = NULL,e_23 = NULL;
  t = term_d_24;
  c_23 = t;
  t = term_i_25;
  e_23 = t;
  t = term_j_25;
  t = g_7(c_23, e_23, t);
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
static ATerm x_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm u_22 = NULL;
  t = if_verbose5_1_0(u_2, t);
  u_22 = t;
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_22 = NULL,x_22 = NULL;
        t = term_d_24;
        w_22 = t;
        t = term_e_24;
        x_22 = t;
        t = term_q_25;
        t = g_7(w_22, x_22, t);
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        {
          ATerm y_22 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_22 = t;
          t = repeat_2_0(w_2, _id, t);
          t = y_22;
        }
      }
  }
  t = u_22;
  t = if_verbose5_1_0(x_2, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm h_24 (ATerm l_23, ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  t = term_d_24;
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, l_23);
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_24, (ATerm) ATmakeAppl(sym_Tool_1, l_23));
  t = g_7(q_23, r_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_25 = ATgetFirst((ATermList) t);
      if(match_cons(u_25, sym__2))
        {
          ATerm d_26 = ATgetArgument(u_25, 0);
          p_23 = ATgetArgument(u_25, 1);
        }
      else
        _fail(t);
      {
        ATerm y_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_23;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_d_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      u_23 = t;
      if(match_cons(t, sym__2))
        {
          s_23 = ATgetArgument(t, 0);
          t_23 = ATgetArgument(t, 1);
          {
            ATerm j_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
                t = term_d_24;
                y_23 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_23);
                z_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_24, (ATerm) ATmakeAppl(sym_Tool_1, s_23));
                t = g_7(y_23, z_23, t);
                {
                  static ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_23 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_23 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(e_3, t);
                }
                t = not_null(x_23);
                LocalPopChoice(p_26);
              }
            else
              {
                t = j_26;
                t = h_24(u_23, t);
              }
          }
        }
      else
        {
          t = h_24(u_23, t);
        }
      t = if_verbose5_1_0(f_3, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm f_24 = NULL,k_10 = NULL,l_10 = NULL;
        f_24 = t;
        t = term_x_11;
        k_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), f_24), term_r_26);
        l_10 = t;
        t = SSL_printnl(k_10, l_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), f_24), term_r_26);
        t = if_verbose5_1_0(i_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,o_24 = NULL;
  o_24 = t;
  t = z_86(t);
  t = xtc_find_0_0(t);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_24, o_24);
  {
    static ATerm m_3 (ATerm t)
    {
      ATerm p_24 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_24, o_24);
      t = n_6(l_24, o_24, t);
      t = term_u_26;
      p_24 = t;
      t = SSL_exit(p_24);
      return(t);
    }
    t = fork_and_wait_1_0(m_3, t);
  }
  t = o_24;
  return(t);
}
static ATerm y_6 (ATerm o_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,t_24 = NULL,u_24 = NULL,w_24 = NULL,a_25 = NULL;
  u_24 = t;
  t = o_82(t);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_24, e_35, c_35);
  t = h_7(q_24, e_35, c_35, t);
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        t = term_z_26;
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_24, term_z_26);
        t = g_7(q_24, e_25, t);
        LocalPopChoice(x_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_24 = ATgetFirst((ATermList) t);
      t_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_26;
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(t_24), (ATerm) ATinsert(CheckATermList(r_24), e_35));
  a_25 = t;
  t = SSL_table_put(q_24, w_24, a_25);
  t = u_24;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_25 = NULL;
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_25 = NULL,q_10 = NULL;
      l_25 = t;
      t = term_h_27;
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_25, term_h_27);
      t = z_6(l_25, q_10, t);
      h_25 = t;
      t = SSL_mkstemp(h_25);
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      {
        ATerm m_25 = NULL;
        t = term_j_27;
        m_25 = t;
        t = SSL_perror(m_25);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_6 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  t = P__tmpdir_0_0(t);
  w_25 = t;
  t = term_m_27;
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_25, term_m_27);
  t = z_6(w_25, x_25, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      s_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_m_9;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_25, term_m_9);
  t = y_6(o_3, s_25, v_25, t);
  t = SSL_close(r_25);
  t = s_25;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  z_25 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_26 = NULL,c_26 = NULL;
      t = z_25;
      t = xtc_new_file_0_0(t);
      b_26 = t;
      t = r_0(t);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_26, (ATerm) ATinsert(ATinsert(ATempty, b_26), term_f_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_26);
    }
  else
    {
      ATerm e_26 = NULL,g_26 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_26;
      t = xtc_new_file_0_0(t);
      e_26 = t;
      t = r_0(t);
      g_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_26, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_26), term_f_9), a_26), term_o_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_26);
    }
  return(t);
}
static ATerm g_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm b_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL;
  l_26 = t;
  {
    ATerm p_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = g_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_27 = ATgetFirst((ATermList) t);
            k_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_27);
        t = SSL_table_put(w_36, x_36, k_26);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, k_26);
      }
    else
      {
        t = p_27;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = l_26;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,q_26 = NULL,t_26 = NULL;
  q_26 = t;
  t = l_82(t);
  o_26 = t;
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL;
        t = term_z_26;
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_26, term_z_26);
        t = g_7(o_26, w_26, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_26 = ATgetFirst((ATermList) t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_z_26;
  t_26 = t;
  t = SSL_table_put(o_26, t_26, m_26);
  t = n_26;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm y_26 = NULL;
      y_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, y_26);
      t = b_7(o_26, y_26, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = q_26;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_83(t);
      t = m_83(t);
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      t = m_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL;
  b_27 = t;
  t = k_82(t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, term_z_26);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm h_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_26;
        i_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_27, term_z_26);
        t = g_7(a_27, i_27, t);
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
  }
  c_27 = t;
  t = term_z_26;
  d_27 = t;
  t = (ATerm) ATinsert(CheckATermList(c_27), (ATerm) ATempty);
  e_27 = t;
  t = SSL_table_put(a_27, d_27, e_27);
  t = b_27;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_k_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_27 = NULL;
  y_27 = t;
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_27);
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
        t = y_27;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_k_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm l_27 = NULL;
  static ATerm x_3 (ATerm t)
  {
    ATerm n_27 = NULL;
    n_27 = t;
    {
      ATerm o_28 = t;
      int p_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_27 = NULL,s_27 = NULL;
          t = term_k_27;
          q_27 = t;
          t = term_z_26;
          s_27 = t;
          t = term_r_28;
          t = g_7(q_27, s_27, t);
          LocalPopChoice(p_28);
        }
      else
        {
          t = o_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_27 != NULL) && (l_27 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_27 = ATgetFirst((ATermList) t);
        {
          ATerm s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = l_27;
    t = map_1_0(c_4, t);
    t = n_27;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(u_3, t);
  t = restore_always_2_0(l_86, x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
  c_28 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  d_28 = t;
  t = term_x_11;
  f_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_28), d_28), term_u_28);
  g_28 = t;
  t = SSL_printnl(f_28, g_28);
  t = term_z_11;
  e_28 = t;
  t = SSL_exit(e_28);
  t = c_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  if(match_string(t, "-k"))
    {
      t = j_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_28;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  t = SSL_string_to_int(l_28);
  m_28 = t;
  t = term_b_29;
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_29, m_28);
  t = j_7(n_28, m_28, t);
  t = l_28;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, m_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  if(match_string(t, "-S"))
    {
      t = q_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_28;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm t_28 = NULL,w_28 = NULL;
  t = term_s_10;
  t_28 = t;
  t = term_f_29;
  w_28 = t;
  t = term_g_29;
  t = j_7(t_28, w_28, t);
  t = term_h_29;
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
static ATerm f_5 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  x_28 = t;
  t = SSL_string_to_int(x_28);
  y_28 = t;
  t = term_s_10;
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_10, y_28);
  t = j_7(z_28, y_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_28);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm a_29 = NULL,d_29 = NULL;
  t = term_o_29;
  a_29 = t;
  t = term_m_9;
  d_29 = t;
  t = term_q_29;
  t = j_7(a_29, d_29, t);
  t = term_r_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_29 = t;
  int u_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, s_4, c_5, t);
      LocalPopChoice(u_29);
    }
  else
    {
      t = t_29;
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, h_5, t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            t = Option_3_0(k_5, l_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm e_39, ATerm f_39, ATerm t)
{
  ATerm e_29 = NULL;
  t = term_e_9;
  e_29 = t;
  t = SSL_table_put(e_29, e_39, f_39);
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, e_39, f_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,l_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_29 = NULL,n_29 = NULL,p_29 = NULL;
      t = term_m_9;
      t = e_0(t);
      m_29 = t;
      t = term_y_29;
      n_29 = t;
      t = term_b_30;
      p_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_29, term_b_30, m_29);
      t = h_7(n_29, p_29, m_29, t);
      _fail(t);
    }
  else
    {
      ATerm x_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_29 = ATgetFirst((ATermList) t);
          l_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_29;
      t = c_0(t);
      t = term_m_9;
      t = d_0(t);
      x_29 = t;
      t = (ATerm) ATinsert(CheckATermList(l_29), x_29);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-o"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm a_30 = NULL,d_30 = NULL;
  a_30 = t;
  t = term_f_9;
  d_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, a_30);
  t = j_7(d_30, a_30, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_30);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, q_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  if(match_string(t, "-i"))
    {
      t = f_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_30;
    }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  g_30 = t;
  t = term_o_27;
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, g_30);
  t = j_7(h_30, g_30, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_30);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, s_5, t_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_72 (ATerm), ATerm t)
{
  static ATerm l_31 (ATerm t)
  {
    ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
    k_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_31 = ATgetFirst((ATermList) t);
        j_31 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_11 = NULL,w_11 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(k_31);
          n_11 = t;
          t = j_31;
          t = l_31(t);
          w_11 = t;
          t = (ATerm) ATinsert(CheckATermList(w_11), i_31);
          t_1 = t;
          t = SSLsetAnnotations(t_1, n_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_31;
        t = r_72(t);
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_30;
    }
  else
    {
      static ATerm u_5 (ATerm t)
      {
        t = not_null(n_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          if(((n_30 != NULL) && (n_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = at_end_1_0(u_5, t);
    }
  return(t);
}
static ATerm b_32 (ATerm r_31, ATerm t)
{
  ATerm s_31 = NULL;
  t = SSL_explode_term(r_31);
  if(match_cons(t, sym__2))
    {
      ATerm i_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  y_31 = t;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_5 (ATerm t)
            {
              t = x_31;
              return(t);
            }
            t = w_31;
            t = at_end_1_0(v_5, t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            t = b_32(y_31, t);
          }
      }
    }
  else
    {
      t = b_32(y_31, t);
    }
  return(t);
}
static ATerm c_7 (ATerm k_39, ATerm j_39, ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = k_39;
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_32 = NULL;
        t = term_e_9;
        f_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, k_39);
        t = g_7(f_32, k_39, t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATempty;
      }
  }
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_39, d_32);
  t = conc_0_0(t);
  c_32 = t;
  t = term_e_9;
  e_32 = t;
  t = SSL_table_put(e_32, k_39, c_32);
  t = (ATerm) ATmakeAppl(sym__3, term_e_9, k_39, c_32);
  return(t);
}
static ATerm h_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_30 = ATgetArgument(t, 0);
            ATerm t_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = g_7(r_36, s_36, t);
        LocalPopChoice(r_30);
      }
    else
      {
        t = q_30;
        t = (ATerm) ATempty;
      }
  }
  i_32 = t;
  t = (ATerm) ATinsert(CheckATermList(i_32), q_36);
  j_32 = t;
  t = SSL_table_put(r_36, s_36, j_32);
  t = h_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,y_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_32 = NULL,g_33 = NULL,h_33 = NULL;
      t = term_m_9;
      t = n_0(t);
      z_32 = t;
      t = term_y_29;
      g_33 = t;
      t = term_b_30;
      h_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_29, term_b_30, z_32);
      t = h_7(g_33, h_33, z_32, t);
      _fail(t);
    }
  else
    {
      ATerm l_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          y_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_32;
      t = k_0(t);
      t = v_32;
      t = l_0(t);
      l_33 = t;
      t = (ATerm) ATinsert(CheckATermList(y_32), l_33);
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = term_k_12;
  o_33 = t;
  t = (ATerm) ATinsert(ATempty, n_33);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, (ATerm) ATinsert(ATempty, n_33));
  t = c_7(o_33, p_33, t);
  t = n_33;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, b_6, c_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_33 = NULL,u_33 = NULL,v_33 = NULL,y_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_9;
  t = whoami_0_0(t);
  s_33 = t;
  t = term_x_11;
  v_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_30), s_33);
  y_33 = t;
  t = SSL_printnl(v_33, y_33);
  t = term_z_11;
  u_33 = t;
  t = SSL_exit(u_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL;
  t = term_e_9;
  z_33 = t;
  t = term_w_30;
  a_34 = t;
  t = term_x_30;
  t = g_7(z_33, a_34, t);
  return(t);
}
static ATerm d_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm y_30 = t;
  int z_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(z_30);
    }
  else
    {
      t = y_30;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_79 (ATerm), ATerm h_79 (ATerm), ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_34;
      t = g_79(t);
    }
  else
    {
      ATerm i_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_34 = ATgetFirst((ATermList) t);
          e_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_34;
      t = foldr_2_0(g_79, h_79, t);
      i_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_34, i_34);
      t = h_79(t);
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
  t = term_f_29;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(l_12, m_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_34 = NULL,d_12 = NULL,f_12 = NULL;
  t = times_0_0(t);
  f_12 = t;
  t = SSL_explode_term(f_12);
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = foldr_2_0(d_6, f_6, t);
  l_34 = t;
  t = SSL_TicksToSeconds(l_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,q_35 = NULL;
  l_35 = t;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      q_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_35;
        if((m_35 != t))
          {
            _fail(t);
          }
        t = l_35;
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATmakeAppl(sym__2, m_35, q_35);
        {
          ATerm d_31 = t;
          int e_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_35, q_35);
              LocalPopChoice(e_31);
            }
          else
            {
              t = d_31;
              t = SSL_gtr(m_35, q_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_35, q_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_83 (ATerm), ATerm t)
{
  ATerm a_36 = NULL;
  a_36 = t;
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL,h_36 = NULL,i_36 = NULL;
        t = term_e_9;
        h_36 = t;
        t = term_s_10;
        i_36 = t;
        t = term_t_10;
        t = g_7(h_36, i_36, t);
        d_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_36, term_z_11);
        t = geq_0_0(t);
        t = a_36;
        t = x_83(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = a_36;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm l_36 = NULL,t_36 = NULL,a_37 = NULL,b_37 = NULL;
  t = run_time_0_0(t);
  l_36 = t;
  t = term_m_9;
  t = whoami_0_0(t);
  t_36 = t;
  t = term_x_11;
  a_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_31), l_36), term_x_12), t_36);
  b_37 = t;
  t = SSL_printnl(a_37, b_37);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_31), l_36), term_x_12), t_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_29;
  f_37 = t;
  t = SSL_exit(f_37);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  c_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_38 = ATgetArgument(t, 0);
          {
            ATerm h_13 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(c_38);
            h_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_38);
            v_1 = t;
            t = SSLsetAnnotations(v_1, h_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL,m_37 = NULL;
      t = term_e_9;
      l_37 = t;
      t = term_o_31;
      m_37 = t;
      t = term_p_31;
      t = g_7(l_37, m_37, t);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = fetch_1_0(k_6, t);
    }
  t = h_88(t);
  return(t);
}
ATerm map_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  static ATerm u_38 (ATerm t)
  {
    ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
    r_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_38;
      }
    else
      {
        ATerm t_13 = NULL,w_13 = NULL,x_13 = NULL,l_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_38 = ATgetFirst((ATermList) t);
            t_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_38);
        t_13 = t;
        t = s_38;
        t = a_72(t);
        w_13 = t;
        t = t_38;
        t = u_38(t);
        x_13 = t;
        t = (ATerm) ATinsert(CheckATermList(x_13), w_13);
        l_3 = t;
        t = SSLsetAnnotations(l_3, t_13);
      }
    return(t);
  }
  t = u_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_39 = ATgetFirst((ATermList) t);
      b_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_39 = NULL,m_39 = NULL;
        static ATerm o_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(l_39)), not_null(m_39));
          return(t);
        }
        t = b_39;
        t = i_0(t);
        if(((l_39 != NULL) && (l_39 != t)))
          _fail(t);
        else
          l_39 = t;
        t = a_39;
        t = g_0(t);
        if(((m_39 != NULL) && (m_39 != t)))
          _fail(t);
        else
          m_39 = t;
        t = b_39;
        t = reverse_acc_2_0(g_0, o_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,n_3 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_39);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_39);
  n_3 = t;
  t = SSLsetAnnotations(n_3, t_39);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_39 = NULL;
  x_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_39), term_q_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_39 = NULL,q_39 = NULL;
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_39 = NULL,s_39 = NULL;
      t = term_e_9;
      r_39 = t;
      t = term_w_30;
      s_39 = t;
      t = term_x_30;
      t = g_7(r_39, s_39, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = fetch_1_0(f_7, t);
    }
  t = term_v_31;
  t = echo_0_0(t);
  t = term_y_29;
  o_39 = t;
  t = term_b_30;
  q_39 = t;
  t = term_z_31;
  t = g_7(o_39, q_39, t);
  t = reverse_acc_2_0(_id, i_7, t);
  t = map_1_0(k_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  static ATerm b_41 (ATerm t)
  {
    ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
    y_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_40 = ATgetFirst((ATermList) t);
        a_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_32 = t;
      int g_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_14 = NULL,d_15 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(y_40);
          x_14 = t;
          t = z_40;
          t = k_72(t);
          d_15 = t;
          t = (ATerm) ATinsert(CheckATermList(a_41), d_15);
          p_3 = t;
          t = SSLsetAnnotations(p_3, x_14);
          LocalPopChoice(g_32);
        }
      else
        {
          t = a_32;
          {
            ATerm v_15 = NULL,m_16 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(y_40);
            v_15 = t;
            t = a_41;
            t = b_41(t);
            m_16 = t;
            t = (ATerm) ATinsert(CheckATermList(m_16), z_40);
            r_3 = t;
            t = SSLsetAnnotations(r_3, v_15);
          }
        }
    }
    return(t);
  }
  t = b_41(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_41 = NULL,j_41 = NULL,u_41 = NULL;
  f_41 = t;
  {
    ATerm k_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_41;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_32 = ATgetFirst((ATermList) t);
                ATerm p_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_41;
          }
        LocalPopChoice(n_32);
      }
    else
      {
        t = k_32;
        t = (ATerm) ATinsert(ATempty, f_41);
      }
  }
  j_41 = t;
  t = term_h_9;
  u_41 = t;
  t = SSL_printnl(u_41, j_41);
  t = f_41;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  t = term_e_9;
  y_41 = t;
  t = term_w_30;
  z_41 = t;
  t = term_x_30;
  t = g_7(y_41, z_41, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  t = term_q_32;
  a_42 = t;
  t = term_m_9;
  b_42 = t;
  t = term_r_32;
  t = j_7(a_42, b_42, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = term_q_32;
  h_42 = t;
  t = term_m_9;
  i_42 = t;
  t = term_r_32;
  t = j_7(h_42, i_42, t);
  t = term_w_32;
  e_42 = t;
  t = term_m_9;
  f_42 = t;
  t = term_x_32;
  t = j_7(e_42, f_42, t);
  t = term_a_33;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_7, m_7, n_7, t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = Option_3_0(o_7, x_7, y_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,w_3 = NULL;
  p_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_42 = ATgetFirst((ATermList) t);
      m_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_42);
  j_42 = t;
  t = k_42;
  t = z_58(t);
  n_42 = t;
  t = m_42;
  t = a_59(t);
  o_42 = t;
  t = (ATerm) ATinsert(CheckATermList(o_42), n_42);
  w_3 = t;
  t = SSLsetAnnotations(w_3, j_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,z_42 = NULL,b_43 = NULL,c_43 = NULL,d_4 = NULL;
  u_42 = t;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_33;
        t = f_90(t);
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
      }
  }
  t = u_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_42);
  v_42 = t;
  t = term_w_30;
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_30, w_42);
  t = j_7(c_43, w_42, t);
  t = z_42;
  {
    static ATerm r_43 (ATerm t)
    {
      ATerm j_33 = t;
      int k_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_33 = t;
          int t_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_43 = NULL;
              f_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_43;
              LocalPopChoice(t_33);
            }
          else
            {
              t = m_33;
              t = f_90(t);
              t = Cons_2_0(_id, r_43, t);
            }
          LocalPopChoice(k_33);
        }
      else
        {
          t = j_33;
          {
            ATerm i_43 = NULL,o_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_43 = ATgetFirst((ATermList) t);
                o_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_43), (ATerm) ATmakeAppl(sym_Undefined_1, i_43));
          }
        }
      return(t);
    }
    t = r_43(t);
  }
  b_43 = t;
  t = (ATerm) ATinsert(CheckATermList(b_43), (ATerm) ATmakeAppl(sym_Program_1, w_42));
  d_4 = t;
  t = SSLsetAnnotations(d_4, v_42);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  if(match_string(t, "--help"))
    {
      t = e_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_44;
        }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  t = term_o_31;
  f_44 = t;
  t = term_m_9;
  g_44 = t;
  t = term_w_33;
  t = j_7(f_44, g_44, t);
  t = term_x_33;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  z_43 = t;
  t = term_y_29;
  b_44 = t;
  t = term_b_30;
  c_44 = t;
  t = (ATerm) ATempty;
  d_44 = t;
  t = SSL_table_put(b_44, c_44, d_44);
  t = z_43;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_90(t);
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          {
            ATerm h_34 = t;
            int j_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, h_8, l_8, t);
                LocalPopChoice(j_34);
              }
            else
              {
                t = h_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_7, t);
  }
  {
    ATerm k_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_44 = NULL;
        r_44 = t;
        {
          ATerm n_34 = t;
          int o_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_17 = NULL;
              t = r_44;
              {
                ATerm p_34 = t;
                int q_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_17 = NULL,d_17 = NULL;
                    t = term_e_9;
                    b_17 = t;
                    t = term_o_31;
                    d_17 = t;
                    t = term_p_31;
                    t = g_7(b_17, d_17, t);
                    LocalPopChoice(q_34);
                  }
                else
                  {
                    t = p_34;
                    t = fetch_1_0(m_8, t);
                  }
              }
              t = r_44;
              t = default_system_usage_0_0(t);
              t = term_f_29;
              a_17 = t;
              t = SSL_exit(a_17);
              LocalPopChoice(o_34);
            }
          else
            {
              t = n_34;
              {
                ATerm s_17 = NULL,t_17 = NULL,x_17 = NULL;
                t = term_e_9;
                t_17 = t;
                t = term_q_32;
                x_17 = t;
                t = term_r_34;
                t = g_7(t_17, x_17, t);
                t = r_44;
                t = default_system_about_0_0(t);
                t = term_f_29;
                s_17 = t;
                t = SSL_exit(s_17);
              }
            }
        }
        LocalPopChoice(m_34);
      }
    else
      {
        t = k_34;
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
              static ATerm n_8 (ATerm t)
              {
                ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,f_4 = NULL;
                x_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    w_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(x_44);
                v_44 = t;
                t = w_44;
                if(((w_43 != NULL) && (w_43 != t)))
                  _fail(t);
                else
                  w_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, w_44);
                f_4 = t;
                t = SSLsetAnnotations(f_4, v_44);
                return(t);
              }
              t = fetch_1_0(n_8, t);
              t = term_x_11;
              t_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_43)), term_u_34);
              u_44 = t;
              t = SSL_printnl(t_44, u_44);
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_43)), term_u_34));
              t = default_system_usage_0_0(t);
              t = term_z_11;
              s_44 = t;
              t = SSL_exit(s_44);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
            }
        }
      }
  }
  x_43 = t;
  t = term_y_29;
  a_44 = t;
  t = SSL_table_destroy(a_44);
  t = x_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm m_88 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  t = parse_options_1_0(j_88, t);
  c_45 = t;
  t = term_v_34;
  f_45 = t;
  t = SSL_table_create(f_45);
  t = term_v_34;
  d_45 = t;
  t = term_w_34;
  e_45 = t;
  t = SSL_table_put(d_45, e_45, c_45);
  t = c_45;
  t = l_88(t);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_88, t);
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm b_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(d_35);
    }
  else
    {
      t = b_35;
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            {
              ATerm h_35 = t;
              int i_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(i_35);
                }
              else
                {
                  t = h_35;
                  {
                    ATerm j_35 = t;
                    int k_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_8, r_8, s_8, t);
                        LocalPopChoice(k_35);
                      }
                    else
                      {
                        t = j_35;
                        {
                          ATerm n_35 = t;
                          int o_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(o_35);
                            }
                          else
                            {
                              t = n_35;
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
static ATerm p_8 (ATerm t)
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
  ATerm j_45 = NULL,k_45 = NULL;
  t = term_p_35;
  j_45 = t;
  t = term_m_9;
  k_45 = t;
  t = term_r_35;
  t = j_7(j_45, k_45, t);
  t = term_s_35;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_t_35;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm u_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL;
      t = term_e_9;
      n_45 = t;
      t = term_o_27;
      o_45 = t;
      t = term_w_35;
      t = g_7(n_45, o_45, t);
      m_45 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_45);
      LocalPopChoice(v_35);
    }
  else
    {
      t = u_35;
      t = term_k_9;
    }
  {
    ATerm x_35 = t;
    int y_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_45 = NULL,v_45 = NULL;
        v_45 = t;
        if(match_cons(t, sym_FILE_1))
          {
            u_45 = ATgetArgument(t, 0);
            {
              ATerm w_18 = NULL,p_5 = NULL;
              t = SSLgetAnnotations(v_45);
              w_18 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_45);
              p_5 = t;
              t = SSLsetAnnotations(p_5, w_18);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = v_45;
          }
        LocalPopChoice(y_35);
        t = xtc_transform_file_2_0(u_8, create_pp_table_args_0_0, t);
      }
    else
      {
        t = x_35;
        t = xtc_transform_term_2_0(v_8, create_pp_table_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_8, default_usage_0_0, _id, p_8, t);
  return(t);
}
