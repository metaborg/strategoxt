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
Symbol sym_None_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
ATerm term_f_38;
ATerm term_e_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_v_37;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_g_36;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_d_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_s_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_x_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_d_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_l_24;
ATerm term_j_24;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_q_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_v_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_q_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_t_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_g_13, term_v_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_x_11, term_z_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_h_15, term_i_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_o_15, term_q_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_d_16, term_e_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_j_16, term_l_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_j_17, term_l_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_s_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_z_17, term_a_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_x_18, term_y_18);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_l_19, term_m_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_f_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_m_20, term_n_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_v_20, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_l_21, term_m_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_v_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_22, term_e_22, term_g_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_j_22, term_k_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_h_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_n_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_m_25, term_p_25);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_j_28);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_r_28);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym__2, term_t_11, term_p_30);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_v_10);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_v_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_n_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_l_30);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_v_10);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym__2, term_t_34, term_v_10);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_v_10);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_l_34);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_v_37, term_v_10);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_c_38);
  ATprotect(&(term_f_38));
  term_f_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_conservative_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm p_6 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm h_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm w_83 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm t_72 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm r_6 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm s_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm t_6 (ATerm i_67 (ATerm), ATerm a_171, ATerm y_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t);
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_83 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_83 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_84 (ATerm), ATerm t);
static ATerm x_6 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm y_6 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm a_7 (ATerm c_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm e_7 (ATerm f_40, ATerm g_40, ATerm t);
static ATerm e_17 (ATerm v_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_7 (ATerm u_17, ATerm t);
static ATerm c_7 (ATerm o_40, ATerm p_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_19 (ATerm q_17, ATerm t);
static ATerm g_19 (ATerm b_18, ATerm e_18, ATerm f_18, ATerm t);
static ATerm h_19 (ATerm r_18, ATerm s_18, ATerm t_18, ATerm t);
static ATerm d_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm o_25 (ATerm k_24, ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_86 (ATerm), ATerm t);
static ATerm f_7 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm g_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm i_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_7 (ATerm c_39, ATerm d_39, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_34 (ATerm v_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_7 (ATerm i_39, ATerm h_39, ATerm t);
static ATerm o_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_83 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm need_help_1_0 (ATerm f_88 (ATerm), ATerm t);
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_7 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_90 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
ATerm parse_options_1_0 (ATerm c_90 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_3 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_0 = NULL;
        t = g_1;
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
        t = (ATerm) ATmakeAppl(sym__2, h_1, h_0);
        t = h_7(h_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
        LocalPopChoice(t_9);
      }
    else
      {
        t = h_3;
        {
          ATerm u_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 = NULL;
              t = g_1;
              t = o_0(t);
              j_1 = t;
              {
                ATerm w_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_1 = NULL;
                    l_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_1;
                          }
                        else
                          {
                            t = l_1;
                            if((h_1 != t))
                              {
                                _fail(t);
                              }
                            t = l_1;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_1, j_1);
              t = h_7(h_1, j_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
              LocalPopChoice(v_9);
            }
          else
            {
              t = u_9;
              t = g_1;
              t = o_0(t);
              if((h_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
            }
        }
      }
  }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm x_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 = NULL,a_2 = NULL;
      t = term_a_10;
      z_1 = t;
      t = term_b_10;
      a_2 = t;
      t = term_c_10;
      t = n_7(z_1, a_2, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = x_9;
      t = term_d_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm x_1 = NULL;
  x_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm s_1 = NULL,v_1 = NULL;
      t = term_b_10;
      {
        ATerm f_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 = NULL,c_2 = NULL;
            t = term_a_10;
            b_2 = t;
            t = term_b_10;
            c_2 = t;
            t = term_c_10;
            t = n_7(b_2, c_2, t);
            LocalPopChoice(h_10);
          }
        else
          {
            t = f_10;
            t = term_d_10;
          }
      }
      s_1 = t;
      t = term_l_10;
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, s_1);
      t = h_7(v_1, s_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_1;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,h_2 = NULL;
      t = term_a_10;
      g_2 = t;
      t = term_q_10;
      h_2 = t;
      t = term_t_10;
      t = n_7(g_2, h_2, t);
      LocalPopChoice(p_10);
      t = (ATerm) ATinsert(ATempty, term_u_10);
    }
  else
    {
      t = o_10;
      t = (ATerm) ATempty;
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
  ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
  t = term_v_10;
  t = new_0_0(t);
  m_2 = t;
  t = term_y_10;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_y_10);
  t = g_7(m_2, n_2, t);
  o_2 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_11);
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATempty, term_d_11));
        t = e_7(o_2, r_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = o_2;
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
static ATerm p_6 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      t = get_errno_0_0(t);
      t = term_v_10;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = h_7(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm h_7 (ATerm o_14, ATerm p_14, ATerm t)
{
  t = SSL_copy(o_14, p_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  b_4 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = b_4;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_d_10;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, term_d_10);
        t = h_7(c_4, k_2, t);
        t = SSL_remove(c_4);
        t = term_d_10;
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_2 = NULL;
              t = b_4;
              t = t_0(t);
              v_2 = t;
              {
                ATerm l_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_2 = NULL;
                    w_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_2;
                      }
                    else
                      {
                        t = w_2;
                        if((c_4 != t))
                          {
                            _fail(t);
                          }
                        t = w_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, c_4, v_2);
              t = p_6(c_4, v_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              t = b_4;
              t = t_0(t);
              if((c_4 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_4);
            }
        }
      }
  }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_m_11;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_m_11;
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
  t = term_n_11;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL;
  i_4 = t;
  {
    static ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL,n_4 = NULL,q_0 = NULL;
            n_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm q_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_4);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
            q_0 = t;
            t = SSLsetAnnotations(q_0, l_4);
            LocalPopChoice(p_11);
            t = xtc_transform_file_2_0(f_0, j_0, t);
          }
        else
          {
            t = o_11;
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
      j_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_4;
  t = if_verbose2_1_0(u_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
        t = term_a_10;
        t_4 = t;
        t = term_t_11;
        u_4 = t;
        t = term_u_11;
        t = n_7(t_4, u_4, t);
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_x_11);
        t = geq_0_0(t);
        t = q_4;
        t = w_83(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = q_4;
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
  t = term_y_11;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,m_5 = NULL,v_0 = NULL;
  x_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_12), term_a_12), x_4);
  f_5 = t;
  t = SSL_concat_strings(f_5);
  e_5 = t;
  t = (ATerm) ATinsert(ATempty, term_d_11);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, (ATerm) ATinsert(ATempty, term_d_11));
  t = e_7(e_5, d_5, t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      ATerm f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  g_5 = t;
  t = SSL_modification_time(w_4);
  h_5 = t;
  t = SSL_modification_time(x_4);
  j_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, j_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, g_5);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
  b_5 = t;
  t = SSL_explode_term(b_5);
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_12 = ATgetArgument(t, 1);
        if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
          {
            y_4 = ATgetFirst((ATermList) n_12);
            {
              ATerm o_12 = (ATerm) ATgetNext((ATermList) n_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_4;
  t = if_verbose2_1_0(y_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  static ATerm f_6 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_72(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        {
          ATerm a_6 = NULL,b_6 = NULL,e_6 = NULL,c_3 = NULL,f_3 = NULL,x_0 = NULL;
          a_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_6 = ATgetFirst((ATermList) t);
              e_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_6);
          c_3 = t;
          t = e_6;
          t = f_6(t);
          f_3 = t;
          t = (ATerm) ATinsert(CheckATermList(f_3), b_6);
          x_0 = t;
          t = SSLsetAnnotations(x_0, c_3);
        }
      }
    return(t);
  }
  t = f_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL,n_3 = NULL,v_3 = NULL;
      n_3 = t;
      t = term_v_12;
      v_3 = t;
      t = SSL_explode_string(v_3);
      m_3 = t;
      t = SSL_explode_string(n_3);
      {
        static ATerm a_1 (ATerm t)
        {
          if((m_3 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
      }
      t = n_3;
      LocalPopChoice(u_12);
    }
  else
    {
      t = s_12;
      {
        ATerm w_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,a_4 = NULL,d_4 = NULL;
            a_4 = t;
            t = term_b_13;
            d_4 = t;
            t = SSL_explode_string(d_4);
            z_3 = t;
            t = SSL_explode_string(a_4);
            {
              static ATerm c_1 (ATerm t)
              {
                if((z_3 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
            }
            t = a_4;
            LocalPopChoice(a_13);
          }
        else
          {
            t = w_12;
            {
              ATerm r_7 = NULL,s_7 = NULL,v_7 = NULL,x_7 = NULL;
              r_7 = t;
              t = term_c_13;
              v_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, r_7), term_e_13);
              x_7 = t;
              t = SSL_printnl(v_7, x_7);
              t = term_g_13;
              s_7 = t;
              t = SSL_exit(s_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, r_7), term_e_13);
            }
          }
      }
      {
        ATerm h_13 = t;
        int i_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(i_13);
          }
        else
          {
            t = h_13;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm m_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_7 = NULL,a_8 = NULL;
      t = term_a_10;
      y_7 = t;
      t = term_r_13;
      a_8 = t;
      t = term_s_13;
      t = n_7(y_7, a_8, t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = m_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm c_8 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  c_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_8), term_r_13);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(e_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(i_1, t);
  return(t);
}
static ATerm r_6 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
  t = term_t_11;
  {
    ATerm b_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_8 = NULL,j_8 = NULL;
        t = term_a_10;
        h_8 = t;
        t = term_t_11;
        j_8 = t;
        t = term_u_11;
        t = n_7(h_8, j_8, t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = b_14;
        t = term_g_13;
      }
  }
  e_8 = t;
  t = term_g_13;
  g_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_8, term_g_13);
  t = r_6(e_8, g_8, t);
  f_8 = t;
  t = SSL_int_to_string(f_8);
  d_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_8), term_t_11);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  t = term_v_10;
  t = pass_verbose_0_0(t);
  k_8 = t;
  t = term_v_10;
  t = create_pp_table_args_0_0(t);
  l_8 = t;
  t = term_v_10;
  t = pass_conservative_0_0(t);
  m_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_8), l_8), k_8);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_11);
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_8, (ATerm) ATinsert(ATempty, term_d_11));
      t = e_7(t_8, v_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm s_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm d_9 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_9);
  return(t);
}
static ATerm t_6 (ATerm i_67 (ATerm), ATerm a_171, ATerm y_17, ATerm t)
{
  ATerm e_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_171, term_e_14);
  t = d_7(t);
  e_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_9, y_17);
  t = i_67(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_14 = ATgetArgument(t, 0);
      if(match_cons(f_14, sym_Stream_1))
        {
          h_9 = ATgetArgument(f_14, 0);
        }
      else
        _fail(t);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_6(h_9, i_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  g_9 = t;
  t = xtc_new_file_0_0(t);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
  t = t_6(m_1, f_9, g_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_9);
  t = xtc_transform_file_2_0(w_85, x_85, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm u_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,n_10 = NULL;
  i_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_10 = ATgetArgument(t, 0);
      {
        ATerm p_4 = NULL,z_4 = NULL;
        t = SSL_int_to_string(j_10);
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_14), p_4), term_i_14);
        z_4 = t;
        t = SSL_concat_strings(z_4);
      }
    }
  else
    {
      ATerm y_5 = NULL,c_6 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_10 = ATgetArgument(t, 0);
          k_10 = ATgetArgument(t, 1);
          n_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_10);
      y_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, n_10), term_l_14), y_5), term_k_14), j_10);
      c_6 = t;
      t = SSL_concat_strings(c_6);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm r_10 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = k_72(t);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(r_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm s_14 = ATgetArgument(t, 0);
              if((s_10 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm t_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_22), term_h_22), term_w_21), term_q_21), term_c_21), term_y_20), term_r_20), term_j_20), term_d_20), term_z_19), term_u_19), term_n_19), term_a_19), term_p_18), term_c_18), term_w_17), term_m_17), term_a_17), term_w_16), term_r_16), term_m_16), term_f_16), term_b_16), term_r_15), term_l_15), term_e_15), term_a_15), term_w_14);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_11 = NULL,k_11 = NULL;
  c_11 = t;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_22 = ATgetArgument(t, 0);
            k_11 = ATgetArgument(t, 1);
            {
              ATerm p_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_22);
        {
          ATerm q_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_6 = NULL,q_6 = NULL,v_6 = NULL;
              t = k_11;
              {
                ATerm s_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              m_6 = t;
              t = term_c_13;
              q_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_6), term_t_22);
              v_6 = t;
              t = SSL_printnl(q_6, v_6);
              t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, m_6), term_t_22));
              LocalPopChoice(r_22);
            }
          else
            {
              t = q_22;
              t = c_11;
            }
        }
      }
    else
      {
        t = m_22;
        t = c_11;
      }
  }
  t = c_11;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm x_65 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,z_11 = NULL;
  z_11 = t;
  t = fork_0_0(t);
  w_11 = t;
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_11;
        t = x_65(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = SSL_waitpid(w_11);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            if(((ATgetType(w_22) != AT_INT) || (ATgetInt((ATermInt) w_22) != 0)))
              _fail(t);
            {
              ATerm a_23 = ATgetArgument(t, 1);
            }
            {
              ATerm b_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_11;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm g_67 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,g_12 = NULL,h_12 = NULL;
  d_12 = t;
  t = g_67(t);
  e_12 = t;
  t = term_c_13;
  g_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_12), e_12);
  h_12 = t;
  t = SSL_printnl(g_12, h_12);
  t = d_12;
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_12 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm j_12 = NULL,k_12 = NULL;
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), j_12);
    t = n_7(not_null(i_12), j_12, t);
    k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_12, k_12);
    return(t);
  }
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = SSL_table_keys(i_12);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_12 = NULL,x_12 = NULL,z_12 = NULL;
        t = term_a_10;
        x_12 = t;
        t = term_t_11;
        z_12 = t;
        t = term_u_11;
        t = n_7(x_12, z_12, t);
        t_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_12, term_l_21);
        t = geq_0_0(t);
        t = r_12;
        t = z_83(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = r_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL;
        t = term_a_10;
        k_13 = t;
        t = term_t_11;
        l_13 = t;
        t = term_u_11;
        t = n_7(k_13, l_13, t);
        j_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_13, term_j_17);
        t = geq_0_0(t);
        t = f_13;
        t = y_83(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = f_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_84 (ATerm), ATerm t)
{
  ATerm q_13 = NULL;
  q_13 = t;
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
        t = term_a_10;
        z_13 = t;
        t = term_t_11;
        a_14 = t;
        t = term_u_11;
        t = n_7(z_13, a_14, t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_13, term_h_15);
        t = geq_0_0(t);
        t = q_13;
        t = a_84(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = q_13;
      }
  }
  return(t);
}
static ATerm x_6 (ATerm m_76 (ATerm), ATerm n_76 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = n_76(t);
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm c_14 = NULL;
      c_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, c_14);
      t = m_76(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm y_6 (ATerm j_76 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm n_15 (ATerm t)
  {
    ATerm g_15 = NULL,j_15 = NULL,k_15 = NULL;
    g_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_15 = ATgetFirst((ATermList) t);
            k_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_15;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = x_6(j_76, w_1, j_15, k_15, t);
              }
              t = n_15(t);
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              {
                ATerm u_7 = NULL,b_8 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(g_15);
                u_7 = t;
                t = k_15;
                t = n_15(t);
                b_8 = t;
                t = (ATerm) ATinsert(CheckATermList(b_8), j_15);
                b_1 = t;
                t = SSLsetAnnotations(b_1, u_7);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = n_15(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      if((a_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_23 = ATgetArgument(t, 0);
            ATerm r_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = n_7(o_37, p_37, t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = (ATerm) ATempty;
      }
  }
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_15, q_37);
  t = y_6(y_1, u_15, q_37, t);
  t_15 = t;
  t = SSL_table_put(o_37, p_37, t_15);
  t = s_15;
  return(t);
}
static ATerm a_7 (ATerm c_84 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    ATerm h_16 = NULL,i_16 = NULL;
    if(match_cons(t, sym__2))
      {
        h_16 = ATgetArgument(t, 0);
        i_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, h_16, i_16);
    t = c_84(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_2, t);
  return(t);
}
static ATerm e_7 (ATerm f_40, ATerm g_40, ATerm t)
{
  t = SSL_access(f_40, g_40);
  return(t);
}
static ATerm e_17 (ATerm v_16, ATerm t)
{
  t = SSL_fclose(v_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL;
  c_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_17 = ATgetArgument(t, 0);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_17);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = e_17(c_17, t);
          }
      }
    }
  else
    {
      t = e_17(c_17, t);
    }
  return(t);
}
static ATerm b_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm c_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm f_17 = NULL;
  t = SSL_fopen(o_40, p_40);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  t = SSL_stdin_stream();
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_17 = NULL;
  t = SSL_stdout_stream();
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_stderr_stream();
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_17);
  return(t);
}
static ATerm e_19 (ATerm q_17, ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_explode_term(q_17);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
          {
            t_17 = ATgetFirst((ATermList) v_23);
            {
              ATerm x_23 = (ATerm) ATgetNext((ATermList) v_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_19 (ATerm b_18, ATerm e_18, ATerm f_18, ATerm t)
{
  ATerm g_18 = NULL,j_18 = NULL,k_18 = NULL,n_18 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(f_18);
  k_18 = t;
  t = b_18;
  if(match_cons(t, sym_Path_1))
    {
      n_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_18, e_18);
  d_1 = t;
  t = SSLsetAnnotations(d_1, k_18);
  if(match_cons(t, sym__2))
    {
      g_18 = ATgetArgument(t, 0);
      j_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(g_18, j_18, t);
  return(t);
}
static ATerm h_19 (ATerm r_18, ATerm s_18, ATerm t_18, ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,z_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(t_18);
  w_18 = t;
  t = SSL_is_string(r_18);
  z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_18, s_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, w_18);
  if(match_cons(t, sym__2))
    {
      u_18 = ATgetArgument(t, 0);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(u_18, v_18, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
      {
        ATerm y_23 = t;
        int e_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_19(b_19, t);
            LocalPopChoice(e_24);
          }
        else
          {
            t = y_23;
            {
              ATerm f_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_19(c_19, d_19, b_19, t);
                  LocalPopChoice(g_24);
                }
              else
                {
                  t = f_24;
                  t = h_19(c_19, d_19, b_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_19(b_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,y_19 = NULL;
  y_19 = t;
  {
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_19, term_j_24);
        t = d_7(t);
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm j_9 = NULL,k_9 = NULL;
          t = term_l_24;
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_24, y_19);
          t = g_7(k_9, y_19, t);
          j_9 = t;
          t = SSL_perror(j_9);
          _fail(t);
        }
      }
  }
  p_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(q_19, t);
  o_19 = t;
  t = p_19;
  t = fclose_0_0(t);
  t = o_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm u_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_20 = NULL,h_20 = NULL;
      g_20 = t;
      t = (ATerm) ATinsert(ATempty, term_d_25);
      h_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_20, (ATerm) ATinsert(ATempty, term_d_25));
      t = e_7(g_20, h_20, t);
      LocalPopChoice(a_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = u_24;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_25 = t;
            if((PushChoice() == 0))
              {
                ATerm l_20 = NULL,o_20 = NULL;
                l_20 = t;
                t = (ATerm) ATinsert(ATempty, term_d_11);
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(ATempty, term_d_11));
                t = e_7(l_20, o_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = g_25;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            t = debug_1_0(f_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_h_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_i_25;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  t = term_c_13;
  o_21 = t;
  t = (ATerm) ATinsert(ATempty, term_j_25);
  p_21 = t;
  t = SSL_printnl(o_21, p_21);
  t = n_21;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__3))
    {
      r_21 = ATgetArgument(t, 0);
      s_21 = ATgetArgument(t, 1);
      x_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_6(r_21, s_21, x_21, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  t = term_c_13;
  z_21 = t;
  t = (ATerm) ATinsert(ATempty, term_k_25);
  a_22 = t;
  t = SSL_printnl(z_21, a_22);
  t = y_21;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,f_22 = NULL;
  b_22 = t;
  t = term_c_13;
  c_22 = t;
  t = (ATerm) ATinsert(ATempty, term_j_25);
  f_22 = t;
  t = SSL_printnl(c_22, f_22);
  t = b_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,s_20 = NULL,u_20 = NULL,w_20 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL;
  p_20 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm l_25 = t;
    if((PushChoice() == 0))
      {
        ATerm j_21 = NULL,k_21 = NULL;
        t = term_m_25;
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, p_20);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATmakeAppl(sym_Imported_1, p_20));
        t = n_7(j_21, k_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_25;
      }
  }
  s_20 = t;
  t = term_m_25;
  g_21 = t;
  t = term_p_25;
  h_21 = t;
  t = (ATerm) ATinsert(ATempty, p_20);
  i_21 = t;
  t = SSL_table_put(g_21, h_21, i_21);
  t = s_20;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_2, t);
  q_20 = t;
  t = term_m_25;
  f_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, q_20);
  t = a_7(s_2, f_21, q_20, t);
  t = if_verbose6_1_0(t_2, t);
  t = term_m_25;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, p_20);
  w_20 = t;
  t = (ATerm) ATempty;
  d_21 = t;
  t = SSL_table_put(u_20, w_20, d_21);
  t = (ATerm) ATmakeAppl(sym__3, term_m_25, (ATerm)ATmakeAppl(sym_Imported_1, p_20), (ATerm) ATempty);
  t = if_verbose4_1_0(u_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
  x_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_22 = ATgetFirst((ATermList) t);
          z_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL,e_10 = NULL,g_10 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(x_22);
            y_9 = t;
            t = y_22;
            t = i_80(t);
            e_10 = t;
            t = z_22;
            t = filter_1_0(i_80, t);
            g_10 = t;
            t = (ATerm) ATinsert(CheckATermList(g_10), e_10);
            q_1 = t;
            t = SSLsetAnnotations(q_1, y_9);
            LocalPopChoice(t_25);
          }
        else
          {
            t = q_25;
            t = z_22;
            t = filter_1_0(i_80, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  static ATerm m_23 (ATerm t)
  {
    ATerm v_25 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        t = m_23(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = v_25;
        t = e_70(t);
      }
    return(t);
  }
  t = m_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,p_23 = NULL;
      t = term_a_10;
      o_23 = t;
      t = term_h_26;
      p_23 = t;
      t = term_i_26;
      t = n_7(o_23, p_23, t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL;
            t = term_l_26;
            q_23 = t;
            t = SSL_getenv(q_23);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_m_26;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  t = term_m_25;
  c_24 = t;
  t = term_n_26;
  d_24 = t;
  t = term_o_26;
  t = n_7(c_24, d_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_26;
      }
  }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_x_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_23 = NULL;
  t = if_verbose5_1_0(x_2, t);
  w_23 = t;
  {
    ATerm z_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL,a_24 = NULL;
        t = term_m_25;
        z_23 = t;
        t = term_p_25;
        a_24 = t;
        t = term_e_27;
        t = n_7(z_23, a_24, t);
        LocalPopChoice(b_27);
      }
    else
      {
        t = z_26;
        {
          ATerm b_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          b_24 = t;
          t = repeat_2_0(z_2, _id, t);
          t = b_24;
        }
      }
  }
  t = w_23;
  t = if_verbose5_1_0(a_3, t);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm o_25 (ATerm k_24, ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  t = term_m_25;
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, k_24);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATmakeAppl(sym_Tool_1, k_24));
  t = n_7(n_24, o_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_27 = ATgetFirst((ATermList) t);
      if(match_cons(j_27, sym__2))
        {
          ATerm m_27 = ATgetArgument(j_27, 0);
          m_24 = ATgetArgument(j_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_24;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_h_27;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_m_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_n_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm p_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
      t = if_verbose5_1_0(d_3, t);
      t = xtc_load_0_0(t);
      r_24 = t;
      if(match_cons(t, sym__2))
        {
          p_24 = ATgetArgument(t, 0);
          q_24 = ATgetArgument(t, 1);
          {
            ATerm x_27 = t;
            int z_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_24 = NULL,w_24 = NULL,z_24 = NULL;
                t = term_m_25;
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, p_24);
                z_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_25, (ATerm) ATmakeAppl(sym_Tool_1, p_24));
                t = n_7(w_24, z_24, t);
                {
                  static ATerm g_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((q_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_24 != NULL) && (v_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_3, t);
                }
                t = not_null(v_24);
                LocalPopChoice(z_27);
              }
            else
              {
                t = x_27;
                t = o_25(r_24, t);
              }
          }
        }
      else
        {
          t = o_25(r_24, t);
        }
      t = if_verbose5_1_0(i_3, t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = p_27;
      {
        ATerm n_25 = NULL,w_10 = NULL,x_10 = NULL;
        n_25 = t;
        t = term_c_13;
        w_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_28), n_25), term_a_28);
        x_10 = t;
        t = SSL_printnl(w_10, x_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_28), n_25), term_a_28);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  s_25 = t;
  t = x_86(t);
  t = xtc_find_0_0(t);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, s_25);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm u_25 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, r_25, s_25);
      t = u_6(r_25, s_25, t);
      t = term_g_28;
      u_25 = t;
      t = SSL_exit(u_25);
      return(t);
    }
    t = fork_and_wait_1_0(p_3, t);
  }
  t = s_25;
  return(t);
}
static ATerm f_7 (ATerm m_82 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  t = m_82(t);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_25, e_35, c_35);
  t = o_7(w_25, e_35, c_35, t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_26 = NULL;
        t = term_j_28;
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_25, term_j_28);
        t = n_7(w_25, c_26, t);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_25 = ATgetFirst((ATermList) t);
      y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_28;
  a_26 = t;
  t = (ATerm) ATinsert(CheckATermList(y_25), (ATerm) ATinsert(CheckATermList(x_25), e_35));
  b_26 = t;
  t = SSL_table_put(w_25, a_26, b_26);
  t = z_25;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm e_26 = NULL;
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_26 = NULL,b_11 = NULL;
      p_26 = t;
      t = term_n_28;
      b_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_26, term_n_28);
      t = g_7(p_26, b_11, t);
      e_26 = t;
      t = SSL_mkstemp(e_26);
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm q_26 = NULL;
        t = term_o_28;
        q_26 = t;
        t = SSL_perror(q_26);
        _fail(t);
      }
    }
  return(t);
}
static ATerm g_7 (ATerm l_32, ATerm m_32, ATerm t)
{
  t = SSL_strcat(l_32, m_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL;
  t = P__tmpdir_0_0(t);
  v_26 = t;
  t = term_q_28;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_26, term_q_28);
  t = g_7(v_26, w_26, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_10;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, term_v_10);
  t = f_7(r_3, t_26, u_26, t);
  t = SSL_close(s_26);
  t = t_26;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,a_27 = NULL;
  y_26 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_27 = NULL,d_27 = NULL;
      t = y_26;
      t = xtc_new_file_0_0(t);
      c_27 = t;
      t = r_0(t);
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, (ATerm) ATinsert(ATinsert(ATempty, c_27), term_b_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_27);
    }
  else
    {
      ATerm f_27 = NULL,g_27 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_27;
      t = xtc_new_file_0_0(t);
      f_27 = t;
      t = r_0(t);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_27), term_b_10), a_27), term_r_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_27);
    }
  return(t);
}
static ATerm i_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm i_27 = NULL,l_27 = NULL;
  l_27 = t;
  {
    ATerm t_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = n_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_28 = ATgetFirst((ATermList) t);
            i_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_28);
        t = SSL_table_put(w_36, x_36, i_27);
        t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, i_27);
      }
    else
      {
        t = t_28;
        t = SSL_table_remove(w_36, x_36);
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
      }
  }
  t = l_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_82 (ATerm), ATerm t)
{
  ATerm o_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL;
  s_27 = t;
  t = j_82(t);
  r_27 = t;
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL;
        t = term_j_28;
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_27, term_j_28);
        t = n_7(r_27, v_27, t);
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      o_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_j_28;
  t_27 = t;
  t = SSL_table_put(r_27, t_27, o_27);
  t = q_27;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm w_27 = NULL;
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_27, w_27);
      t = i_7(r_27, w_27, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = s_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_83 (ATerm), ATerm k_83 (ATerm), ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_83(t);
      t = k_83(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = k_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  b_28 = t;
  t = i_82(t);
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_27, term_j_28);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_29 = ATgetArgument(t, 0);
            ATerm h_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_28;
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_27, term_j_28);
        t = n_7(y_27, m_28, t);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        t = (ATerm) ATempty;
      }
  }
  c_28 = t;
  t = term_j_28;
  d_28 = t;
  t = (ATerm) ATinsert(CheckATermList(c_28), (ATerm) ATempty);
  e_28 = t;
  t = SSL_table_put(y_27, d_28, e_28);
  t = b_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  {
    ATerm i_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_28);
        LocalPopChoice(l_29);
      }
    else
      {
        t = i_29;
        t = z_28;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_86 (ATerm), ATerm t)
{
  ATerm s_28 = NULL;
  static ATerm e_4 (ATerm t)
  {
    ATerm u_28 = NULL;
    u_28 = t;
    {
      ATerm m_29 = t;
      int o_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_28 = NULL,w_28 = NULL;
          t = term_p_28;
          v_28 = t;
          t = term_j_28;
          w_28 = t;
          t = term_p_29;
          t = n_7(v_28, w_28, t);
          LocalPopChoice(o_29);
        }
      else
        {
          t = m_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_28 != NULL) && (s_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_28 = ATgetFirst((ATermList) t);
        {
          ATerm q_29 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = s_28;
    t = map_1_0(f_4, t);
    t = u_28;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  t = restore_always_2_0(j_86, e_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,n_29 = NULL;
      t = term_a_10;
      k_29 = t;
      t = term_r_28;
      n_29 = t;
      t = term_t_29;
      t = n_7(k_29, n_29, t);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_29);
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      t = term_l_10;
    }
  {
    ATerm u_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_29 = NULL,w_29 = NULL;
        w_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            v_29 = ATgetArgument(t, 0);
            {
              ATerm v_11 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(w_29);
              v_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_29);
              t_1 = t;
              t = SSLsetAnnotations(t_1, v_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = w_29;
          }
        LocalPopChoice(x_29);
        t = xtc_transform_file_2_0(m_4, o_4, t);
      }
    else
      {
        t = u_29;
        t = xtc_transform_term_2_0(r_4, v_4, t);
      }
  }
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_30 = NULL,i_30 = NULL;
        i_30 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_30 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(i_30);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_30);
              u_1 = t;
              t = SSLsetAnnotations(u_1, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_30;
          }
        LocalPopChoice(z_29);
        t = xtc_transform_file_2_0(a_5, c_5, t);
      }
    else
      {
        t = y_29;
        t = xtc_transform_term_2_0(i_5, k_5, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), term_d_30), term_c_30), term_b_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_a_30;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), term_d_30), term_c_30), term_b_30);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_v_10;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_f_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_v_10;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(k_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
  m_30 = t;
  t = term_v_10;
  t = whoami_0_0(t);
  s_30 = t;
  t = term_c_13;
  u_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_30), s_30), term_g_30);
  v_30 = t;
  t = SSL_printnl(u_30, v_30);
  t = term_g_13;
  t_30 = t;
  t = SSL_exit(t_30);
  t = m_30;
  return(t);
}
static ATerm q_7 (ATerm c_39, ATerm d_39, ATerm t)
{
  ATerm w_30 = NULL;
  t = term_a_10;
  w_30 = t;
  t = SSL_table_put(w_30, c_39, d_39);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, c_39, d_39);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,e_31 = NULL,h_31 = NULL;
      t = term_v_10;
      t = e_0(t);
      d_31 = t;
      t = term_k_30;
      e_31 = t;
      t = term_l_30;
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_l_30, d_31);
      t = o_7(e_31, h_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm m_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_31;
      t = c_0(t);
      t = term_v_10;
      t = d_0(t);
      m_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), m_31);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  if(match_string(t, "-k"))
    {
      t = q_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_31;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,u_31 = NULL;
  r_31 = t;
  t = SSL_string_to_int(r_31);
  s_31 = t;
  t = term_n_30;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, s_31);
  t = q_7(u_31, s_31, t);
  t = r_31;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_o_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  if(match_string(t, "-S"))
    {
      t = y_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_31;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  t = term_t_11;
  z_31 = t;
  t = term_p_30;
  a_32 = t;
  t = term_q_30;
  t = q_7(z_31, a_32, t);
  t = term_r_30;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_x_30;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  b_32 = t;
  t = SSL_string_to_int(b_32);
  c_32 = t;
  t = term_t_11;
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_11, c_32);
  t = q_7(d_32, c_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_32);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  t = term_z_30;
  e_32 = t;
  t = term_v_10;
  f_32 = t;
  t = term_a_31;
  t = q_7(e_32, f_32, t);
  t = term_f_31;
  return(t);
}
static ATerm d_6 (ATerm t)
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
      t = Option_3_0(p_5, q_5, s_5, t);
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
            t = ArgOption_3_0(t_5, v_5, w_5, t);
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            t = Option_3_0(x_5, z_5, d_6, t);
          }
      }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm h_32 = NULL;
  h_32 = t;
  if(match_string(t, "-o"))
    {
      t = h_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_32;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm i_32 = NULL,n_32 = NULL;
  i_32 = t;
  t = term_b_10;
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_10, i_32);
  t = q_7(n_32, i_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_32);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm p_32 = NULL;
  p_32 = t;
  if(match_string(t, "-i"))
    {
      t = p_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_32;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL;
  q_32 = t;
  t = term_r_28;
  r_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, q_32);
  t = q_7(r_32, q_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_32);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_o_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_72 (ATerm), ATerm t)
{
  static ATerm p_33 (ATerm t)
  {
    ATerm l_33 = NULL,m_33 = NULL,o_33 = NULL;
    o_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_33 = ATgetFirst((ATermList) t);
        m_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm y_12 = NULL,d_13 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(o_33);
          y_12 = t;
          t = m_33;
          t = p_33(t);
          d_13 = t;
          t = (ATerm) ATinsert(CheckATermList(d_13), l_33);
          o_3 = t;
          t = SSLsetAnnotations(o_3, y_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_33;
        t = p_72(t);
      }
    return(t);
  }
  t = p_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_32 = NULL,w_32 = NULL,x_32 = NULL;
  t_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_32;
    }
  else
    {
      static ATerm n_6 (ATerm t)
      {
        t = not_null(x_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_32 = ATgetFirst((ATermList) t);
          if(((x_32 != NULL) && (x_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      t = at_end_1_0(n_6, t);
    }
  return(t);
}
static ATerm o_34 (ATerm v_33, ATerm t)
{
  ATerm a_34 = NULL;
  t = SSL_explode_term(v_33);
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL;
  k_34 = t;
  if(match_cons(t, sym__2))
    {
      i_34 = ATgetArgument(t, 0);
      j_34 = ATgetArgument(t, 1);
      {
        ATerm t_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_6 (ATerm t)
            {
              t = j_34;
              return(t);
            }
            t = i_34;
            t = at_end_1_0(o_6, t);
            LocalPopChoice(v_31);
          }
        else
          {
            t = t_31;
            t = o_34(k_34, t);
          }
      }
    }
  else
    {
      t = o_34(k_34, t);
    }
  return(t);
}
static ATerm j_7 (ATerm i_39, ATerm h_39, ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  t = i_39;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_34 = NULL;
        t = term_a_10;
        s_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, i_39);
        t = n_7(s_34, i_39, t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATempty;
      }
  }
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_39, q_34);
  t = conc_0_0(t);
  p_34 = t;
  t = term_a_10;
  r_34 = t;
  t = SSL_table_put(r_34, i_39, p_34);
  t = (ATerm) ATmakeAppl(sym__3, term_a_10, i_39, p_34);
  return(t);
}
static ATerm o_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm v_34 = NULL,j_35 = NULL,k_35 = NULL;
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm g_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_32 = ATgetArgument(t, 0);
            ATerm o_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = n_7(r_36, s_36, t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATempty;
      }
  }
  j_35 = t;
  t = (ATerm) ATinsert(CheckATermList(j_35), q_36);
  k_35 = t;
  t = SSL_table_put(r_36, s_36, k_35);
  t = v_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
      t = term_v_10;
      t = n_0(t);
      w_35 = t;
      t = term_k_30;
      x_35 = t;
      t = term_l_30;
      y_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_l_30, w_35);
      t = o_7(x_35, y_35, w_35, t);
      _fail(t);
    }
  else
    {
      ATerm e_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_35 = ATgetFirst((ATermList) t);
          t_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_35 = ATgetFirst((ATermList) t);
          v_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_35;
      t = k_0(t);
      t = u_35;
      t = l_0(t);
      e_36 = t;
      t = (ATerm) ATinsert(CheckATermList(v_35), e_36);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
  h_36 = t;
  t = term_r_13;
  i_36 = t;
  t = (ATerm) ATinsert(ATempty, h_36);
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, (ATerm) ATinsert(ATempty, h_36));
  t = j_7(i_36, k_36, t);
  t = h_36;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, l_7, m_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_36 = NULL,t_36 = NULL,a_37 = NULL,d_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_10;
  t = whoami_0_0(t);
  l_36 = t;
  t = term_c_13;
  a_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_32), l_36);
  d_37 = t;
  t = SSL_printnl(a_37, d_37);
  t = term_g_13;
  t_36 = t;
  t = SSL_exit(t_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  t = term_a_10;
  g_37 = t;
  t = term_v_32;
  h_37 = t;
  t = term_y_32;
  t = n_7(g_37, h_37, t);
  return(t);
}
static ATerm k_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,w_37 = NULL;
  m_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_37;
      t = e_79(t);
    }
  else
    {
      ATerm d_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_37 = ATgetFirst((ATermList) t);
          w_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_37;
      t = foldr_2_0(e_79, f_79, t);
      d_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_37, d_38);
      t = f_79(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(u_13, v_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_38 = NULL,n_13 = NULL,p_13 = NULL;
  t = times_0_0(t);
  p_13 = t;
  t = SSL_explode_term(p_13);
  if(match_cons(t, sym__2))
    {
      ATerm b_33 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13;
  t = foldr_2_0(p_7, t_7, t);
  g_38 = t;
  t = SSL_TicksToSeconds(g_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm b_39 = NULL,e_39 = NULL,f_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      e_39 = ATgetArgument(t, 0);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_39;
        if((e_39 != t))
          {
            _fail(t);
          }
        t = b_39;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
        {
          ATerm e_33 = t;
          int f_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_39, f_39);
              LocalPopChoice(f_33);
            }
          else
            {
              t = e_33;
              t = SSL_gtr(e_39, f_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_39, f_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm l_39 = NULL;
  l_39 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
        t = term_a_10;
        p_39 = t;
        t = term_t_11;
        q_39 = t;
        t = term_u_11;
        t = n_7(p_39, q_39, t);
        o_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_39, term_g_13);
        t = geq_0_0(t);
        t = l_39;
        t = v_83(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = l_39;
      }
  }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm s_39 = NULL,u_39 = NULL,b_40 = NULL,c_40 = NULL;
  t = run_time_0_0(t);
  s_39 = t;
  t = term_v_10;
  t = whoami_0_0(t);
  u_39 = t;
  t = term_c_13;
  b_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), s_39), term_k_14), u_39);
  c_40 = t;
  t = SSL_printnl(b_40, c_40);
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), s_39), term_k_14), u_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_30;
  d_40 = t;
  t = SSL_exit(d_40);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  u_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_40 = ATgetArgument(t, 0);
          {
            ATerm x_14 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(u_40);
            x_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_40);
            q_3 = t;
            t = SSLsetAnnotations(q_3, x_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL,j_40 = NULL;
      t = term_a_10;
      i_40 = t;
      t = term_n_33;
      j_40 = t;
      t = term_s_33;
      t = n_7(i_40, j_40, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = fetch_1_0(z_7, t);
    }
  t = f_88(t);
  return(t);
}
ATerm map_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  static ATerm x_41 (ATerm t)
  {
    ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL;
    u_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_41;
      }
    else
      {
        ATerm p_15 = NULL,v_15 = NULL,w_15 = NULL,s_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_41 = ATgetFirst((ATermList) t);
            w_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_41);
        p_15 = t;
        t = v_41;
        t = y_71(t);
        v_15 = t;
        t = w_41;
        t = x_41(t);
        w_15 = t;
        t = (ATerm) ATinsert(CheckATermList(w_15), v_15);
        s_3 = t;
        t = SSLsetAnnotations(s_3, p_15);
      }
    return(t);
  }
  t = x_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_42 = ATgetFirst((ATermList) t);
      d_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_42 = NULL,k_42 = NULL;
        static ATerm i_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(k_42));
          return(t);
        }
        t = d_42;
        t = i_0(t);
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        t = c_42;
        t = g_0(t);
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = d_42;
        t = reverse_acc_2_0(g_0, i_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_10;
      t = i_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,u_3 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_42);
  u_3 = t;
  t = SSLsetAnnotations(u_3, q_42);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm u_42 = NULL;
  u_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_42), term_t_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  ATerm u_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL,p_42 = NULL;
      t = term_a_10;
      o_42 = t;
      t = term_v_32;
      p_42 = t;
      t = term_y_32;
      t = n_7(o_42, p_42, t);
      LocalPopChoice(y_33);
    }
  else
    {
      t = u_33;
      t = fetch_1_0(n_8, t);
    }
  t = term_z_33;
  t = echo_0_0(t);
  t = term_k_30;
  m_42 = t;
  t = term_l_30;
  n_42 = t;
  t = term_b_34;
  t = n_7(m_42, n_42, t);
  t = reverse_acc_2_0(_id, o_8, t);
  t = map_1_0(p_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm z_43 (ATerm t)
  {
    ATerm v_43 = NULL,x_43 = NULL,y_43 = NULL;
    v_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_43 = ATgetFirst((ATermList) t);
        y_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_16 = NULL,n_16 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(v_43);
          k_16 = t;
          t = x_43;
          t = i_72(t);
          n_16 = t;
          t = (ATerm) ATinsert(CheckATermList(y_43), n_16);
          x_3 = t;
          t = SSLsetAnnotations(x_3, k_16);
          LocalPopChoice(d_34);
        }
      else
        {
          t = c_34;
          {
            ATerm k_17 = NULL,n_17 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(v_43);
            k_17 = t;
            t = y_43;
            t = z_43(t);
            n_17 = t;
            t = (ATerm) ATinsert(CheckATermList(n_17), x_43);
            y_3 = t;
            t = SSLsetAnnotations(y_3, k_17);
          }
        }
    }
    return(t);
  }
  t = z_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  {
    ATerm e_34 = t;
    int f_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_44;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_34 = ATgetFirst((ATermList) t);
                ATerm h_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_44;
          }
        LocalPopChoice(f_34);
      }
    else
      {
        t = e_34;
        t = (ATerm) ATinsert(ATempty, d_44);
      }
  }
  e_44 = t;
  t = term_d_10;
  f_44 = t;
  t = SSL_printnl(f_44, e_44);
  t = d_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = term_a_10;
  j_44 = t;
  t = term_v_32;
  k_44 = t;
  t = term_y_32;
  t = n_7(j_44, k_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm i_38, ATerm j_38, ATerm t)
{
  t = SSL_table_get(i_38, j_38);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  t = term_l_34;
  l_44 = t;
  t = term_v_10;
  m_44 = t;
  t = term_m_34;
  t = q_7(l_44, m_44, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_n_34;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  t = term_l_34;
  p_44 = t;
  t = term_v_10;
  q_44 = t;
  t = term_m_34;
  t = q_7(p_44, q_44, t);
  t = term_t_34;
  n_44 = t;
  t = term_v_10;
  o_44 = t;
  t = term_u_34;
  t = q_7(n_44, o_44, t);
  t = term_w_34;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_8, r_8, s_8, t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      t = Option_3_0(u_8, w_8, x_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_58 (ATerm), ATerm y_58 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,h_4 = NULL;
  w_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_44 = ATgetFirst((ATermList) t);
      t_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_44);
  r_44 = t;
  t = s_44;
  t = x_58(t);
  u_44 = t;
  t = t_44;
  t = y_58(t);
  v_44 = t;
  t = (ATerm) ATinsert(CheckATermList(v_44), u_44);
  h_4 = t;
  t = SSLsetAnnotations(h_4, r_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL,r_5 = NULL;
  b_45 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_35;
        t = d_90(t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
      }
  }
  t = b_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_45 = ATgetFirst((ATermList) t);
      e_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_45);
  c_45 = t;
  t = term_v_32;
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, d_45);
  t = q_7(h_45, d_45, t);
  t = e_45;
  {
    static ATerm r_45 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_45 = NULL;
              k_45 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_45;
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              t = d_90(t);
              t = Cons_2_0(_id, r_45, t);
            }
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          {
            ATerm n_45 = NULL,o_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_45 = ATgetFirst((ATermList) t);
                o_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_45), (ATerm) ATmakeAppl(sym_Undefined_1, n_45));
          }
        }
      return(t);
    }
    t = r_45(t);
  }
  g_45 = t;
  t = (ATerm) ATinsert(CheckATermList(g_45), (ATerm) ATmakeAppl(sym_Program_1, d_45));
  r_5 = t;
  t = SSLsetAnnotations(r_5, c_45);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm d_46 = NULL;
  d_46 = t;
  if(match_string(t, "--help"))
    {
      t = d_46;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_46;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_46;
        }
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  t = term_n_33;
  e_46 = t;
  t = term_v_10;
  f_46 = t;
  t = term_l_35;
  t = q_7(e_46, f_46, t);
  t = term_m_35;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  t = term_n_35;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_90 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  y_45 = t;
  t = term_k_30;
  a_46 = t;
  t = term_l_30;
  b_46 = t;
  t = (ATerm) ATempty;
  c_46 = t;
  t = SSL_table_put(a_46, b_46, c_46);
  t = y_45;
  {
    static ATerm y_8 (ATerm t)
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_90(t);
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(z_8, a_9, b_9, t);
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(y_8, t);
  }
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 = NULL;
        q_46 = t;
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_18 = NULL;
              t = q_46;
              {
                ATerm d_36 = t;
                int f_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_18 = NULL,i_18 = NULL;
                    t = term_a_10;
                    h_18 = t;
                    t = term_n_33;
                    i_18 = t;
                    t = term_s_33;
                    t = n_7(h_18, i_18, t);
                    LocalPopChoice(f_36);
                  }
                else
                  {
                    t = d_36;
                    t = fetch_1_0(c_9, t);
                  }
              }
              t = q_46;
              t = default_system_usage_0_0(t);
              t = term_p_30;
              d_18 = t;
              t = SSL_exit(d_18);
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              {
                ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
                t = term_a_10;
                j_19 = t;
                t = term_l_34;
                k_19 = t;
                t = term_g_36;
                t = n_7(j_19, k_19, t);
                t = q_46;
                t = default_system_about_0_0(t);
                t = term_p_30;
                i_19 = t;
                t = SSL_exit(i_19);
              }
            }
        }
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm j_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
              static ATerm l_9 (ATerm t)
              {
                ATerm u_46 = NULL,v_46 = NULL,w_46 = NULL,u_5 = NULL;
                w_46 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_46 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_46);
                u_46 = t;
                t = v_46;
                if(((w_45 != NULL) && (w_45 != t)))
                  _fail(t);
                else
                  w_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_46);
                u_5 = t;
                t = SSLsetAnnotations(u_5, u_46);
                return(t);
              }
              t = fetch_1_0(l_9, t);
              t = term_c_13;
              s_46 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_45)), term_n_36);
              t_46 = t;
              t = SSL_printnl(s_46, t_46);
              t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_45)), term_n_36));
              t = default_system_usage_0_0(t);
              t = term_g_13;
              r_46 = t;
              t = SSL_exit(r_46);
              LocalPopChoice(m_36);
            }
          else
            {
              t = j_36;
            }
        }
      }
  }
  x_45 = t;
  t = term_k_30;
  z_45 = t;
  t = SSL_table_destroy(z_45);
  t = x_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm), ATerm k_88 (ATerm), ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
  t = parse_options_1_0(h_88, t);
  b_47 = t;
  t = term_o_36;
  e_47 = t;
  t = SSL_table_create(e_47);
  t = term_o_36;
  c_47 = t;
  t = term_p_36;
  d_47 = t;
  t = SSL_table_put(c_47, d_47, b_47);
  t = b_47;
  t = j_88(t);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_88, t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        {
          ATerm y_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_88(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_36);
            }
          else
            {
              t = y_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            {
              ATerm i_37 = t;
              int j_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(j_37);
                }
              else
                {
                  t = i_37;
                  {
                    ATerm k_37 = t;
                    int l_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_9, o_9, p_9, t);
                        LocalPopChoice(l_37);
                      }
                    else
                      {
                        t = k_37;
                        {
                          ATerm r_37 = t;
                          int s_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_37);
                            }
                          else
                            {
                              t = r_37;
                              {
                                ATerm t_37 = t;
                                int u_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(u_37);
                                  }
                                else
                                  {
                                    t = t_37;
                                    t = Option_3_0(q_9, r_9, s_9, t);
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
static ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  t = term_v_37;
  g_47 = t;
  t = term_v_10;
  h_47 = t;
  t = term_z_37;
  t = q_7(g_47, h_47, t);
  t = term_a_38;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL;
  i_47 = t;
  t = term_q_10;
  j_47 = t;
  t = term_c_38;
  k_47 = t;
  t = term_e_38;
  t = q_7(j_47, k_47, t);
  t = i_47;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_f_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
