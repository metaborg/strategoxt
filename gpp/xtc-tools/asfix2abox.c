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
Symbol sym_None_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_n_36;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_l_35;
ATerm term_e_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_x_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_j_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_e_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_s_29;
ATerm term_l_29;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_z_27;
ATerm term_v_27;
ATerm term_n_27;
ATerm term_g_27;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_m_26;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_e_24;
ATerm term_k_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_y_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_j_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_f_10);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_q_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_v_10);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_f_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_p_12, term_b_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_x_10, term_g_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_c_15, term_d_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_h_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_q_15, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_v_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_16, term_e_16, term_f_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_u_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_d_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_w_17, term_x_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_g_18, term_j_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_u_18, term_v_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_p_19, term_q_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_y_19);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_20, term_i_20, term_j_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_w_20, term_x_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_f_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_u_21, term_v_21);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_21, term_y_21, term_z_21);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_y_25);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_g_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_z_24, term_a_25);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_n_28, term_g_28);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_q_28);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym__2, term_z_30, term_n_13);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_m_32);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_l_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym__2, term_h_30, term_i_30);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_n_13);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_p_34, term_n_13);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_n_13);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__3, term_h_30, term_i_30, (ATerm) ATempty);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_e_10, term_k_34);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_n_13);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_q_10, term_c_38);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm p_7 (ATerm t_14, ATerm u_14, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_conservative_0_0 (ATerm t);
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
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm y_6 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm z_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm a_7 (ATerm f_79 (ATerm), ATerm l_184, ATerm d_18, ATerm t);
static ATerm g_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t);
static ATerm b_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t);
static ATerm d_7 (ATerm m_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm z_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm y_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm a_99 (ATerm), ATerm t);
static ATerm f_7 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm g_7 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm h_7 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm i_7 (ATerm c_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t);
static ATerm m_7 (ATerm v_51, ATerm w_51, ATerm t);
static ATerm o_16 (ATerm d_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_7 (ATerm z_17, ATerm t);
static ATerm k_7 (ATerm e_52, ATerm f_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_18 (ATerm b_17, ATerm t);
static ATerm q_18 (ATerm f_17, ATerm g_17, ATerm h_17, ATerm t);
static ATerm r_18 (ATerm r_17, ATerm s_17, ATerm v_17, ATerm t);
static ATerm l_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_24 (ATerm m_23, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm y_101 (ATerm), ATerm t);
static ATerm n_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm o_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm q_7 (ATerm s_45, ATerm t_45, ATerm t);
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_101 (ATerm), ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_8 (ATerm s_50, ATerm t_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_34 (ATerm n_34, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_7 (ATerm y_50, ATerm x_50, ATerm t);
static ATerm y_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_98 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t);
static ATerm b_8 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
ATerm lookup_table_0_1 (ATerm z_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_7 (ATerm k_50, ATerm l_50, ATerm t);
static ATerm v_7 (ATerm p_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_8 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm x_7 (ATerm g_47, ATerm h_47, ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm r_9 (ATerm t);
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
    ATerm s_9 = t;
    int t_9 = stack_ptr;
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
        t = p_7(l_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          ATerm w_9 = t;
          int x_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = k_1;
              t = q_0(t);
              v_0 = t;
              {
                ATerm y_9 = t;
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
                    t = y_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, l_1, v_0);
              t = p_7(l_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              LocalPopChoice(x_9);
            }
          else
            {
              t = w_9;
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
static ATerm p_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm z_9 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL,g_2 = NULL;
      t = term_e_10;
      f_2 = t;
      t = term_f_10;
      g_2 = t;
      t = term_g_10;
      t = x_7(f_2, g_2, t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = z_9;
      t = term_h_10;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm d_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm o_1 = NULL,q_1 = NULL;
      t = term_f_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 = NULL,s_1 = NULL;
            t = term_e_10;
            r_1 = t;
            t = term_f_10;
            s_1 = t;
            t = term_g_10;
            t = x_7(r_1, s_1, t);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = term_h_10;
          }
      }
      o_1 = t;
      t = term_l_10;
      q_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_l_10, o_1);
      t = p_7(q_1, o_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_2;
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
      ATerm i_2 = NULL,j_2 = NULL;
      t = term_e_10;
      i_2 = t;
      t = term_q_10;
      j_2 = t;
      t = term_r_10;
      t = x_7(i_2, j_2, t);
      LocalPopChoice(p_10);
      t = (ATerm) ATinsert(ATempty, term_s_10);
    }
  else
    {
      t = o_10;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm l_2 = NULL;
  l_2 = t;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL,d_3 = NULL,g_3 = NULL;
        t = term_e_10;
        d_3 = t;
        t = term_v_10;
        g_3 = t;
        t = term_w_10;
        t = x_7(d_3, g_3, t);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_3, term_x_10);
        t = geq_0_0(t);
        t = l_2;
        t = w_98(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = l_2;
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
  t = term_y_10;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,s_3 = NULL,u_3 = NULL,x_0 = NULL;
  j_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_11), term_c_11), j_3);
  o_3 = t;
  t = SSL_concat_strings(o_3);
  n_3 = t;
  t = (ATerm) ATinsert(ATempty, term_j_11);
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_3, (ATerm) ATinsert(ATempty, term_j_11));
  t = m_7(n_3, m_3, t);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_3, j_3);
  u_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      ATerm o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  p_3 = t;
  t = SSL_modification_time(i_3);
  q_3 = t;
  t = SSL_modification_time(j_3);
  s_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_3, s_3);
  x_0 = t;
  t = SSLsetAnnotations(x_0, p_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, i_3, j_3);
  l_3 = t;
  t = SSL_explode_term(l_3);
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_11 = ATgetArgument(t, 1);
        if(((ATgetType(q_11) == AT_LIST) && !(ATisEmpty(q_11))))
          {
            k_3 = ATgetFirst((ATermList) q_11);
            {
              ATerm t_11 = (ATerm) ATgetNext((ATermList) q_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_3;
  t = if_verbose2_1_0(b_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  static ATerm p_4 (ATerm t);
  static ATerm p_4 (ATerm t)
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_84(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,z_1 = NULL,n_2 = NULL,z_0 = NULL;
          m_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_4 = ATgetFirst((ATermList) t);
              o_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_4);
          z_1 = t;
          t = o_4;
          t = p_4(t);
          n_2 = t;
          t = (ATerm) ATinsert(CheckATermList(n_2), n_4);
          z_0 = t;
          t = SSLsetAnnotations(z_0, z_1);
        }
      }
    return(t);
  }
  t = p_4(t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_y_11;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_y_11;
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
  t = term_z_11;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
      u_2 = t;
      t = term_d_12;
      v_2 = t;
      t = SSL_explode_string(v_2);
      t_2 = t;
      t = SSL_explode_string(u_2);
      {
        static ATerm f_0 (ATerm t);
        static ATerm f_0 (ATerm t)
        {
          if((t_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(f_0, t);
      }
      t = u_2;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      {
        ATerm e_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL;
            y_2 = t;
            t = term_i_12;
            z_2 = t;
            t = SSL_explode_string(z_2);
            x_2 = t;
            t = SSL_explode_string(y_2);
            {
              static ATerm i_0 (ATerm t);
              static ATerm i_0 (ATerm t)
              {
                if((x_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(i_0, t);
            }
            t = y_2;
            LocalPopChoice(h_12);
          }
        else
          {
            t = e_12;
            {
              ATerm x_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL;
              x_4 = t;
              t = term_j_12;
              a_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_o_12);
              b_5 = t;
              t = SSL_printnl(a_5, b_5);
              t = term_p_12;
              z_4 = t;
              t = SSL_exit(z_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, x_4), term_o_12);
            }
          }
      }
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm o_5 = NULL,e_3 = NULL;
              o_5 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_5);
              {
                ATerm s_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_3 = NULL,t_3 = NULL,c_1 = NULL;
                    t_3 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm y_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_3);
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, o_5);
                    c_1 = t;
                    t = SSLsetAnnotations(c_1, r_3);
                    LocalPopChoice(u_12);
                    t = xtc_transform_file_2_0(k_0, n_0, t);
                  }
                else
                  {
                    t = s_12;
                    t = xtc_transform_term_2_0(s_0, u_0, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  e_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_3;
              t = if_verbose2_1_0(y_0, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_5 = NULL,r_5 = NULL;
      t = term_e_10;
      q_5 = t;
      t = term_f_13;
      r_5 = t;
      t = term_h_13;
      t = x_7(q_5, r_5, t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = a_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm s_5 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  s_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_5), term_f_13);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(b_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(d_1, t);
  return(t);
}
static ATerm y_6 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
  t = term_v_10;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL,a_6 = NULL;
        t = term_e_10;
        z_5 = t;
        t = term_v_10;
        a_6 = t;
        t = term_w_10;
        t = x_7(z_5, a_6, t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = term_p_12;
      }
  }
  v_5 = t;
  t = term_p_12;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_5, term_p_12);
  t = y_6(v_5, x_5, t);
  w_5 = t;
  t = SSL_int_to_string(w_5);
  u_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_5), term_v_10);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm b_6 = NULL,e_6 = NULL,f_6 = NULL;
  t = term_n_13;
  t = pass_verbose_0_0(t);
  b_6 = t;
  t = term_n_13;
  t = create_pp_table_args_0_0(t);
  e_6 = t;
  t = term_n_13;
  t = pass_conservative_0_0(t);
  f_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_6), e_6), b_6);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_l_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_7 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          p_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_11);
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_6, (ATerm) ATinsert(ATempty, term_j_11));
      t = m_7(p_6, e_7, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm z_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm w_7 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_7);
  return(t);
}
static ATerm a_7 (ATerm f_79 (ATerm), ATerm l_184, ATerm d_18, ATerm t)
{
  ATerm z_7 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_184, term_o_13);
  t = l_7(t);
  z_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_7, d_18);
  t = f_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_13 = ATgetArgument(t, 0);
      if(match_cons(p_13, sym_Stream_1))
        {
          h_8 = ATgetArgument(p_13, 0);
        }
      else
        _fail(t);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_6(h_8, i_8, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_100 (ATerm), ATerm y_100 (ATerm), ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  e_8 = t;
  t = xtc_new_file_0_0(t);
  d_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_8, e_8);
  t = a_7(g_1, d_8, e_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_8);
  t = xtc_transform_file_2_0(x_100, y_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm b_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
  m_9 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      o_9 = ATgetArgument(t, 0);
      {
        ATerm z_3 = NULL,c_4 = NULL;
        t = SSL_int_to_string(o_9);
        z_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_13), z_3), term_q_13);
        c_4 = t;
        t = SSL_concat_strings(c_4);
      }
    }
  else
    {
      ATerm h_5 = NULL,j_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          o_9 = ATgetArgument(t, 0);
          p_9 = ATgetArgument(t, 1);
          q_9 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(p_9);
      h_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_9), term_t_13), h_5), term_s_13), o_9);
      j_5 = t;
      t = SSL_concat_strings(j_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_84 (ATerm), ATerm t)
{
  ATerm u_9 = NULL;
  static ATerm h_1 (ATerm t);
  static ATerm h_1 (ATerm t)
  {
    t = i_84(t);
    if(((u_9 != NULL) && (u_9 != t)))
      _fail(t);
    else
      u_9 = t;
    return(t);
  }
  t = fetch_1_0(h_1, t);
  t = not_null(u_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_9 = NULL;
  v_9 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm m_1 (ATerm t);
        static ATerm m_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_13 = ATgetArgument(t, 0);
              if((v_9 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm x_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), term_w_21), term_s_21), term_o_21), term_i_21), term_b_21), term_t_20), term_m_20), term_d_20), term_r_19), term_d_19), term_y_18), term_l_18), term_a_18), term_o_17), term_e_17), term_w_16), term_n_16), term_h_16), term_b_16), term_w_15), term_s_15), term_m_15), term_e_15), term_x_14), term_p_14), term_i_14), term_d_14);
        t = fetch_elem_1_0(m_1, t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_9);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_10 = NULL,n_10 = NULL;
  d_10 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_22 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
            {
              ATerm e_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_22);
        {
          ATerm f_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_6 = NULL,g_6 = NULL,h_6 = NULL;
              t = n_10;
              {
                ATerm j_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              c_6 = t;
              t = term_j_12;
              g_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, c_6), term_k_22);
              h_6 = t;
              t = SSL_printnl(g_6, h_6);
              t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, c_6), term_k_22));
              LocalPopChoice(i_22);
            }
          else
            {
              t = f_22;
              t = d_10;
            }
        }
      }
    else
      {
        t = b_22;
        t = d_10;
      }
  }
  t = d_10;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  b_11 = t;
  t = fork_0_0(t);
  a_11 = t;
  {
    ATerm l_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = b_11;
        t = u_77(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = l_22;
        t = SSL_waitpid(a_11);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm o_22 = ATgetArgument(t, 0);
            if(((ATgetType(o_22) != AT_INT) || (ATgetInt((ATermInt) o_22) != 0)))
              _fail(t);
            {
              ATerm s_22 = ATgetArgument(t, 1);
            }
            {
              ATerm t_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = b_11;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL;
  e_11 = t;
  t = d_79(t);
  f_11 = t;
  t = term_j_12;
  g_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_11), f_11);
  h_11 = t;
  t = SSL_printnl(g_11, h_11);
  t = e_11;
  return(t);
}
static ATerm d_7 (ATerm m_50, ATerm t)
{
  t = SSL_hashtable_keys(m_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm i_11 = NULL,l_11 = NULL;
  static ATerm n_1 (ATerm t);
  static ATerm n_1 (ATerm t)
  {
    ATerm m_11 = NULL,n_11 = NULL;
    m_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_11), m_11);
    t = x_7(not_null(i_11), m_11, t);
    n_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_11, n_11);
    return(t);
  }
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = lookup_table_0_1(i_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_7(l_11, t);
  t = map_1_0(n_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_98 (ATerm), ATerm t)
{
  ATerm s_11 = NULL;
  s_11 = t;
  {
    ATerm v_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL,x_11 = NULL,a_12 = NULL;
        t = term_e_10;
        x_11 = t;
        t = term_v_10;
        a_12 = t;
        t = term_w_10;
        t = x_7(x_11, a_12, t);
        w_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_11, term_k_21);
        t = geq_0_0(t);
        t = s_11;
        t = z_98(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = v_22;
        t = s_11;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_98 (ATerm), ATerm t)
{
  ATerm f_12 = NULL;
  f_12 = t;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,m_12 = NULL,n_12 = NULL;
        t = term_e_10;
        m_12 = t;
        t = term_v_10;
        n_12 = t;
        t = term_w_10;
        t = x_7(m_12, n_12, t);
        k_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_12, term_s_16);
        t = geq_0_0(t);
        t = f_12;
        t = y_98(t);
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        t = f_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_12 = NULL,z_12 = NULL,c_13 = NULL;
        t = term_e_10;
        z_12 = t;
        t = term_v_10;
        c_13 = t;
        t = term_w_10;
        t = x_7(z_12, c_13, t);
        x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_12, term_r_14);
        t = geq_0_0(t);
        t = t_12;
        t = a_99(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = t_12;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm k_88 (ATerm), ATerm l_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = l_88(t);
  {
    static ATerm p_1 (ATerm t);
    static ATerm p_1 (ATerm t)
    {
      ATerm g_13 = NULL;
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, g_13);
      t = k_88(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm g_7 (ATerm h_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm h_14 (ATerm t);
  static ATerm h_14 (ATerm t)
  {
    ATerm z_13 = NULL,c_14 = NULL,e_14 = NULL;
    z_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_14 = ATgetFirst((ATermList) t);
            e_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_13;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = f_7(h_88, u_1, c_14, e_14, t);
              }
              t = h_14(t);
              LocalPopChoice(i_23);
            }
          else
            {
              t = g_23;
              {
                ATerm n_6 = NULL,t_6 = NULL,e_1 = NULL;
                t = SSLgetAnnotations(z_13);
                n_6 = t;
                t = e_14;
                t = h_14(t);
                t_6 = t;
                t = (ATerm) ATinsert(CheckATermList(t_6), c_14);
                e_1 = t;
                t = SSLsetAnnotations(e_1, n_6);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = h_14(t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm i_15 = NULL;
  if(match_cons(t, sym__2))
    {
      i_15 = ATgetArgument(t, 0);
      if((i_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  w_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_23 = ATgetArgument(t, 0);
            ATerm n_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_46, l_46);
        t = x_7(k_46, l_46, t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = (ATerm) ATempty;
      }
  }
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_15, m_46);
  t = g_7(v_1, a_15, m_46, t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_46, l_46, z_14);
  t = lookup_table_0_1(k_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(l_46, z_14, b_15, t);
  t = w_14;
  return(t);
}
static ATerm i_7 (ATerm c_99 (ATerm), ATerm u_46, ATerm t_46, ATerm t)
{
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm j_15 = NULL,k_15 = NULL;
    if(match_cons(t, sym__2))
      {
        j_15 = ATgetArgument(t, 0);
        k_15 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, u_46, j_15, k_15);
    t = c_99(t);
    return(t);
  }
  t = t_46;
  t = map_1_0(w_1, t);
  return(t);
}
static ATerm m_7 (ATerm v_51, ATerm w_51, ATerm t)
{
  t = SSL_access(v_51, w_51);
  return(t);
}
static ATerm o_16 (ATerm d_16, ATerm t)
{
  t = SSL_fclose(d_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  m_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_16 = ATgetArgument(t, 0);
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_16);
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            t = o_16(m_16, t);
          }
      }
    }
  else
    {
      t = o_16(m_16, t);
    }
  return(t);
}
static ATerm j_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm k_7 (ATerm e_52, ATerm f_52, ATerm t)
{
  ATerm p_16 = NULL;
  t = SSL_fopen(e_52, f_52);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = SSL_stdin_stream();
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_16 = NULL;
  t = SSL_stdout_stream();
  t_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_16 = NULL;
  t = SSL_stderr_stream();
  v_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_16);
  return(t);
}
static ATerm p_18 (ATerm b_17, ATerm t)
{
  ATerm c_17 = NULL;
  t = SSL_explode_term(b_17);
  if(match_cons(t, sym__2))
    {
      ATerm u_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
          {
            c_17 = ATgetFirst((ATermList) v_23);
            {
              ATerm w_23 = (ATerm) ATgetNext((ATermList) v_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_18 (ATerm f_17, ATerm g_17, ATerm h_17, ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,p_17 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(h_17);
  k_17 = t;
  t = f_17;
  if(match_cons(t, sym_Path_1))
    {
      p_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_17, g_17);
  i_1 = t;
  t = SSLsetAnnotations(i_1, k_17);
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(i_17, j_17, t);
  return(t);
}
static ATerm r_18 (ATerm r_17, ATerm s_17, ATerm v_17, ATerm t)
{
  ATerm y_17 = NULL,e_18 = NULL,f_18 = NULL,k_18 = NULL,j_1 = NULL;
  t = SSLgetAnnotations(v_17);
  f_18 = t;
  t = SSL_is_string(r_17);
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_18, s_17);
  j_1 = t;
  t = SSLsetAnnotations(j_1, f_18);
  if(match_cons(t, sym__2))
    {
      y_17 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(y_17, e_18, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  if(match_cons(t, sym__2))
    {
      n_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_18(m_18, t);
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            {
              ATerm z_23 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_18(n_18, o_18, m_18, t);
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = z_23;
                  t = r_18(n_18, o_18, m_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_18(m_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL;
  c_19 = t;
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_19, term_e_24);
        t = l_7(t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm n_8 = NULL,o_8 = NULL;
          t = term_g_24;
          o_8 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_24, c_19);
          t = o_7(o_8, c_19, t);
          n_8 = t;
          t = SSL_perror(n_8);
          _fail(t);
        }
      }
  }
  w_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(x_18, t);
  t_18 = t;
  t = w_18;
  t = fclose_0_0(t);
  t = t_18;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_19 = NULL,g_19 = NULL;
      f_19 = t;
      t = (ATerm) ATinsert(ATempty, term_n_24);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_19, (ATerm) ATinsert(ATempty, term_n_24));
      t = m_7(f_19, g_19, t);
      LocalPopChoice(m_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_24;
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_24 = t;
            if((PushChoice() == 0))
              {
                ATerm h_19 = NULL,i_19 = NULL;
                h_19 = t;
                t = (ATerm) ATinsert(ATempty, term_j_11);
                i_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_19, (ATerm) ATinsert(ATempty, term_j_11));
                t = m_7(h_19, i_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_24;
              }
            t = debug_1_0(x_1, t);
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = debug_1_0(y_1, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = debug_1_0(e_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_s_24;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = debug_1_0(k_2, t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_t_24;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  t = term_j_12;
  q_20 = t;
  t = (ATerm) ATinsert(ATempty, term_u_24);
  r_20 = t;
  t = SSL_printnl(q_20, r_20);
  t = p_20;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm v_20 = NULL,y_20 = NULL,z_20 = NULL;
  if(match_cons(t, sym__3))
    {
      v_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
      z_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_7(v_20, y_20, z_20, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm a_21 = NULL,c_21 = NULL,e_21 = NULL;
  a_21 = t;
  t = term_j_12;
  c_21 = t;
  t = (ATerm) ATinsert(ATempty, term_v_24);
  e_21 = t;
  t = SSL_printnl(c_21, e_21);
  t = a_21;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm g_21 = NULL,l_21 = NULL,m_21 = NULL;
  g_21 = t;
  t = term_j_12;
  l_21 = t;
  t = (ATerm) ATinsert(ATempty, term_u_24);
  m_21 = t;
  t = SSL_printnl(l_21, m_21);
  t = g_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_19 = NULL,l_19 = NULL,m_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  j_19 = t;
  t = if_verbose5_1_0(c_2, t);
  {
    ATerm y_24 = t;
    if((PushChoice() == 0))
      {
        ATerm k_20 = NULL,l_20 = NULL;
        t = term_z_24;
        k_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_19);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATmakeAppl(sym_Imported_1, j_19));
        t = x_7(k_20, l_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_24;
      }
  }
  m_19 = t;
  t = term_z_24;
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, term_a_25, (ATerm) ATinsert(ATempty, j_19));
  t = lookup_table_0_1(b_20, t);
  h_20 = t;
  t = term_a_25;
  c_20 = t;
  t = (ATerm) ATinsert(ATempty, j_19);
  f_20 = t;
  t = h_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(c_20, f_20, g_20, t);
  t = m_19;
  t = if_verbose4_1_0(h_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(m_2, t);
  l_19 = t;
  t = term_z_24;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, l_19);
  t = i_7(o_2, a_20, l_19, t);
  t = if_verbose6_1_0(p_2, t);
  t = term_z_24;
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, (ATerm)ATmakeAppl(sym_Imported_1, j_19), (ATerm) ATempty);
  t = lookup_table_0_1(s_19, t);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_19);
  t_19 = t;
  t = (ATerm) ATempty;
  u_19 = t;
  t = z_19;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(t_19, u_19, v_19, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_24, (ATerm)ATmakeAppl(sym_Imported_1, j_19), (ATerm) ATempty);
  t = if_verbose4_1_0(q_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL,m_22 = NULL;
  g_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm i_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_8 = NULL,f_9 = NULL,h_9 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(g_22);
            u_8 = t;
            t = h_22;
            t = o_92(t);
            f_9 = t;
            t = m_22;
            t = filter_1_0(o_92, t);
            h_9 = t;
            t = (ATerm) ATinsert(CheckATermList(h_9), f_9);
            t_1 = t;
            t = SSLsetAnnotations(t_1, u_8);
            LocalPopChoice(k_25);
          }
        else
          {
            t = i_25;
            t = m_22;
            t = filter_1_0(o_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_82 (ATerm), ATerm b_82 (ATerm), ATerm t)
{
  static ATerm p_22 (ATerm t);
  static ATerm p_22 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_82(t);
        t = p_22(t);
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        t = b_82(t);
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_22 = NULL,r_22 = NULL;
      t = term_e_10;
      q_22 = t;
      t = term_y_25;
      r_22 = t;
      t = term_z_25;
      t = x_7(q_22, r_22, t);
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
        ATerm c_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_22 = NULL;
            t = term_e_26;
            u_22 = t;
            t = SSL_getenv(u_22);
            LocalPopChoice(d_26);
          }
        else
          {
            t = c_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = debug_1_0(s_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm f_23 = NULL,h_23 = NULL;
  t = term_z_24;
  f_23 = t;
  t = term_g_26;
  h_23 = t;
  t = term_j_26;
  t = x_7(f_23, h_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm k_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_26;
      }
  }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm w_22 = NULL;
  t = if_verbose5_1_0(r_2, t);
  w_22 = t;
  {
    ATerm n_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_22 = NULL,z_22 = NULL;
        t = term_z_24;
        y_22 = t;
        t = term_a_25;
        z_22 = t;
        t = term_r_26;
        t = x_7(y_22, z_22, t);
        LocalPopChoice(q_26);
      }
    else
      {
        t = n_26;
        {
          ATerm a_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          a_23 = t;
          t = repeat_2_0(a_3, _id, t);
          t = a_23;
        }
      }
  }
  t = w_22;
  t = if_verbose5_1_0(b_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm x_24 (ATerm m_23, ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL,s_23 = NULL;
  t = term_z_24;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, m_23);
  s_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATmakeAppl(sym_Tool_1, m_23));
  t = x_7(r_23, s_23, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_26 = ATgetFirst((ATermList) t);
      if(match_cons(w_26, sym__2))
        {
          ATerm e_27 = ATgetArgument(w_26, 0);
          q_23 = ATgetArgument(w_26, 1);
        }
      else
        _fail(t);
      {
        ATerm y_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_23;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_z_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_23 = NULL,a_24 = NULL,f_24 = NULL;
      t = if_verbose5_1_0(h_3, t);
      t = xtc_load_0_0(t);
      f_24 = t;
      if(match_cons(t, sym__2))
        {
          t_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          {
            ATerm j_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_24 = NULL,k_24 = NULL,o_24 = NULL;
                t = term_z_24;
                k_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_23);
                o_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_z_24, (ATerm) ATmakeAppl(sym_Tool_1, t_23));
                t = x_7(k_24, o_24, t);
                {
                  static ATerm w_3 (ATerm t);
                  static ATerm w_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_3, t);
                }
                t = not_null(j_24);
                LocalPopChoice(m_27);
              }
            else
              {
                t = j_27;
                t = x_24(f_24, t);
              }
          }
        }
      else
        {
          t = x_24(f_24, t);
        }
      t = if_verbose5_1_0(x_3, t);
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm w_24 = NULL,a_10 = NULL,b_10 = NULL;
        w_24 = t;
        t = term_j_12;
        a_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), w_24), term_n_27);
        b_10 = t;
        t = SSL_printnl(a_10, b_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), w_24), term_n_27);
        t = if_verbose5_1_0(b_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm b_25 = NULL,e_25 = NULL;
  e_25 = t;
  t = y_101(t);
  t = xtc_find_0_0(t);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_25, e_25);
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      ATerm f_25 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_25, e_25);
      t = b_7(b_25, e_25, t);
      t = term_z_27;
      f_25 = t;
      t = SSL_exit(f_25);
      return(t);
    }
    t = fork_and_wait_1_0(g_4, t);
  }
  t = e_25;
  return(t);
}
static ATerm n_7 (ATerm u_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm j_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
  n_25 = t;
  t = u_94(t);
  j_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_25, j_35, h_35);
  t = y_7(j_25, j_35, h_35, t);
  {
    ATerm a_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_25 = NULL;
        t = term_g_28;
        s_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_25, term_g_28);
        t = x_7(j_25, s_25, t);
        {
          ATerm h_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_28;
            }
        }
        LocalPopChoice(f_28);
      }
    else
      {
        t = a_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_25 = ATgetFirst((ATermList) t);
      m_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_25, term_g_28, (ATerm) ATinsert(CheckATermList(m_25), (ATerm) ATinsert(CheckATermList(l_25), j_35)));
  t = lookup_table_0_1(j_25, t);
  r_25 = t;
  t = term_g_28;
  o_25 = t;
  t = (ATerm) ATinsert(CheckATermList(m_25), (ATerm) ATinsert(CheckATermList(l_25), j_35));
  p_25 = t;
  t = r_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(o_25, p_25, q_25, t);
  t = n_25;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_25 = NULL;
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_26 = NULL,i_10 = NULL;
      a_26 = t;
      t = term_k_28;
      i_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_26, term_k_28);
      t = o_7(a_26, i_10, t);
      v_25 = t;
      t = SSL_mkstemp(v_25);
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm b_26 = NULL;
        t = term_m_28;
        b_26 = t;
        t = SSL_perror(b_26);
        _fail(t);
      }
    }
  return(t);
}
static ATerm o_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL,l_26 = NULL,o_26 = NULL,p_26 = NULL;
  t = P__tmpdir_0_0(t);
  o_26 = t;
  t = term_o_28;
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_26, term_o_28);
  t = o_7(o_26, p_26, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_13;
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_26, term_n_13);
  t = n_7(h_4, i_26, l_26, t);
  t = SSL_close(h_26);
  t = i_26;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm v_26 = NULL,x_26 = NULL;
      t = s_26;
      t = xtc_new_file_0_0(t);
      v_26 = t;
      t = t_0(t);
      x_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_26, (ATerm) ATinsert(ATinsert(ATempty, v_26), term_f_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_26);
    }
  else
    {
      ATerm z_26 = NULL,a_27 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_26;
      t = xtc_new_file_0_0(t);
      z_26 = t;
      t = t_0(t);
      a_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_26), term_f_10), t_26), term_q_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_26);
    }
  return(t);
}
static ATerm q_7 (ATerm s_45, ATerm t_45, ATerm t)
{
  ATerm b_27 = NULL,c_27 = NULL;
  c_27 = t;
  {
    ATerm r_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        t = x_7(s_45, t_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_28 = ATgetFirst((ATermList) t);
            b_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_28);
        {
          ATerm d_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, b_27);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_8(t_45, b_27, d_27, t);
          t = (ATerm) ATmakeAppl(sym__3, s_45, t_45, b_27);
        }
      }
    else
      {
        t = r_28;
        {
          ATerm f_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
          t = lookup_table_0_1(s_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_7(t_45, f_27, t);
          t = (ATerm) ATmakeAppl(sym__2, s_45, t_45);
        }
      }
  }
  t = c_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  p_27 = t;
  t = r_94(t);
  o_27 = t;
  {
    ATerm x_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL;
        t = term_g_28;
        t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, term_g_28);
        t = x_7(o_27, t_27, t);
        {
          ATerm a_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_29;
            }
        }
        LocalPopChoice(z_28);
      }
    else
      {
        t = x_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_27, term_g_28, k_27);
  t = lookup_table_0_1(o_27, t);
  s_27 = t;
  t = term_g_28;
  q_27 = t;
  t = s_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(q_27, k_27, r_27, t);
  t = l_27;
  {
    static ATerm i_4 (ATerm t);
    static ATerm i_4 (ATerm t)
    {
      ATerm u_27 = NULL;
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_27, u_27);
      t = q_7(o_27, u_27, t);
      return(t);
    }
    t = map_1_0(i_4, t);
  }
  t = p_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_98(t);
      t = k_98(t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      t = k_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_94 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL;
  x_27 = t;
  t = q_94(t);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_27, term_g_28);
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_29 = ATgetArgument(t, 0);
            ATerm g_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_28;
        l_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_27, term_g_28);
        t = x_7(w_27, l_28, t);
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = (ATerm) ATempty;
      }
  }
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_27, term_g_28, (ATerm) ATinsert(CheckATermList(y_27), (ATerm) ATempty));
  t = lookup_table_0_1(w_27, t);
  e_28 = t;
  t = term_g_28;
  b_28 = t;
  t = (ATerm) ATinsert(CheckATermList(y_27), (ATerm) ATempty);
  c_28 = t;
  t = e_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(b_28, c_28, d_28, t);
  t = x_27;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_28);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = y_28;
      }
  }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_n_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm p_28 = NULL;
  static ATerm q_4 (ATerm t);
  static ATerm q_4 (ATerm t)
  {
    ATerm s_28 = NULL;
    s_28 = t;
    {
      ATerm j_29 = t;
      int k_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = NULL,u_28 = NULL;
          t = term_n_28;
          t_28 = t;
          t = term_g_28;
          u_28 = t;
          t = term_l_29;
          t = x_7(t_28, u_28, t);
          LocalPopChoice(k_29);
        }
      else
        {
          t = j_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_28 != NULL) && (p_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_28 = ATgetFirst((ATermList) t);
        {
          ATerm o_29 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = p_28;
    t = map_1_0(r_4, t);
    t = s_28;
    t = end_scope_1_0(t_4, t);
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  t = restore_always_2_0(k_101, q_4, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_29 = NULL,n_29 = NULL,p_29 = NULL;
      t = term_e_10;
      n_29 = t;
      t = term_q_28;
      p_29 = t;
      t = term_s_29;
      t = x_7(n_29, p_29, t);
      m_29 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_29);
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      t = term_l_10;
    }
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_29 = NULL,y_29 = NULL;
        y_29 = t;
        if(match_cons(t, sym_FILE_1))
          {
            x_29 = ATgetArgument(t, 0);
            {
              ATerm z_10 = NULL,a_2 = NULL;
              t = SSLgetAnnotations(y_29);
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_29);
              a_2 = t;
              t = SSLsetAnnotations(a_2, z_10);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = y_29;
          }
        LocalPopChoice(u_29);
        t = xtc_transform_file_2_0(v_4, w_4, t);
      }
    else
      {
        t = t_29;
        t = xtc_transform_term_2_0(y_4, d_5, t);
      }
  }
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_30 = NULL,m_30 = NULL;
        m_30 = t;
        if(match_cons(t, sym_FILE_1))
          {
            l_30 = ATgetArgument(t, 0);
            {
              ATerm r_11 = NULL,b_2 = NULL;
              t = SSLgetAnnotations(m_30);
              r_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, l_30);
              b_2 = t;
              t = SSLsetAnnotations(b_2, r_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = m_30;
          }
        LocalPopChoice(w_29);
        t = xtc_transform_file_2_0(e_5, g_5, t);
      }
    else
      {
        t = v_29;
        t = xtc_transform_term_2_0(i_5, k_5, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_z_29;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), term_c_30), term_b_30), term_a_30);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_z_29;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_30), term_c_30), term_b_30), term_a_30);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_n_13;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_e_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_n_13;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(u_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  q_30 = t;
  t = term_n_13;
  t = whoami_0_0(t);
  r_30 = t;
  t = term_j_12;
  t_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_30), r_30), term_f_30);
  u_30 = t;
  t = SSL_printnl(t_30, u_30);
  t = term_p_12;
  s_30 = t;
  t = SSL_exit(s_30);
  t = q_30;
  return(t);
}
static ATerm a_8 (ATerm s_50, ATerm t_50, ATerm t)
{
  ATerm v_30 = NULL,x_30 = NULL;
  t = term_e_10;
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, s_50, t_50);
  t = lookup_table_0_1(v_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(s_50, t_50, x_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, s_50, t_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_31 = NULL,i_31 = NULL,j_31 = NULL;
      t = term_n_13;
      t = h_0(t);
      g_31 = t;
      t = term_h_30;
      i_31 = t;
      t = term_i_30;
      j_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_30, term_i_30, g_31);
      t = y_7(i_31, j_31, g_31, t);
      _fail(t);
    }
  else
    {
      ATerm q_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_31 = ATgetFirst((ATermList) t);
          d_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_31;
      t = d_0(t);
      t = term_n_13;
      t = g_0(t);
      q_31 = t;
      t = (ATerm) ATinsert(CheckATermList(d_31), q_31);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-k"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  t = SSL_string_to_int(t_31);
  u_31 = t;
  t = term_j_30;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_30, u_31);
  t = a_8(v_31, u_31, t);
  t = t_31;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, m_5, n_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm z_31 = NULL;
  z_31 = t;
  if(match_string(t, "-S"))
    {
      t = z_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_31;
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm a_32 = NULL,c_32 = NULL;
  t = term_v_10;
  a_32 = t;
  t = term_n_30;
  c_32 = t;
  t = term_o_30;
  t = a_8(a_32, c_32, t);
  t = term_p_30;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_w_30;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm d_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  t = SSL_string_to_int(d_32);
  g_32 = t;
  t = term_v_10;
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_10, g_32);
  t = a_8(h_32, g_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_32);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm i_32 = NULL,k_32 = NULL;
  t = term_z_30;
  i_32 = t;
  t = term_n_13;
  k_32 = t;
  t = term_a_31;
  t = a_8(i_32, k_32, t);
  t = term_b_31;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int h_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, t_5, y_5, t);
      LocalPopChoice(h_31);
    }
  else
    {
      t = f_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_6, i_6, j_6, t);
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            t = Option_3_0(k_6, l_6, m_6, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm s_32 = NULL;
  s_32 = t;
  if(match_string(t, "-o"))
    {
      t = s_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_32;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm t_32 = NULL,v_32 = NULL;
  t_32 = t;
  t = term_f_10;
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, t_32);
  t = a_8(v_32, t_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_32);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, q_6, r_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  if(match_string(t, "-i"))
    {
      t = x_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_32;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  y_32 = t;
  t = term_q_28;
  z_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, y_32);
  t = a_8(z_32, y_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_32);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_6, u_6, v_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm j_34 (ATerm t);
  static ATerm j_34 (ATerm t)
  {
    ATerm e_34 = NULL,f_34 = NULL,i_34 = NULL;
    i_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_34 = ATgetFirst((ATermList) t);
        f_34 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_12 = NULL,l_12 = NULL,w_2 = NULL;
          t = SSLgetAnnotations(i_34);
          g_12 = t;
          t = f_34;
          t = j_34(t);
          l_12 = t;
          t = (ATerm) ATinsert(CheckATermList(l_12), e_34);
          w_2 = t;
          t = SSLsetAnnotations(w_2, g_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_34;
        t = n_84(t);
      }
    return(t);
  }
  t = j_34(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL;
  d_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_33;
    }
  else
    {
      static ATerm w_6 (ATerm t);
      static ATerm w_6 (ATerm t)
      {
        t = not_null(f_33);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_33 = ATgetFirst((ATermList) t);
          if(((f_33 != NULL) && (f_33 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_33;
      t = at_end_1_0(w_6, t);
    }
  return(t);
}
static ATerm w_34 (ATerm n_34, ATerm t)
{
  ATerm o_34 = NULL;
  t = SSL_explode_term(n_34);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_34;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  s_34 = t;
  if(match_cons(t, sym__2))
    {
      q_34 = ATgetArgument(t, 0);
      r_34 = ATgetArgument(t, 1);
      {
        ATerm p_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_6 (ATerm t);
            static ATerm x_6 (ATerm t)
            {
              t = r_34;
              return(t);
            }
            t = q_34;
            t = at_end_1_0(x_6, t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = p_31;
            t = w_34(s_34, t);
          }
      }
    }
  else
    {
      t = w_34(s_34, t);
    }
  return(t);
}
static ATerm r_7 (ATerm y_50, ATerm x_50, ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,m_35 = NULL;
  t = y_50;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_35 = NULL;
        t = term_e_10;
        q_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_10, y_50);
        t = x_7(q_35, y_50, t);
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATempty;
      }
  }
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_50, z_34);
  t = conc_0_0(t);
  y_34 = t;
  t = term_e_10;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, y_50, y_34);
  t = lookup_table_0_1(a_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(y_50, y_34, m_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_10, y_50, y_34);
  return(t);
}
static ATerm y_7 (ATerm n_45, ATerm o_45, ATerm m_45, ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
  {
    ATerm y_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_32 = ATgetArgument(t, 0);
            ATerm f_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, o_45);
        t = x_7(n_45, o_45, t);
        LocalPopChoice(b_32);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATempty;
      }
  }
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_45, o_45, (ATerm) ATinsert(CheckATermList(t_35), m_45));
  t = lookup_table_0_1(n_45, t);
  y_35 = t;
  t = (ATerm) ATinsert(CheckATermList(t_35), m_45);
  w_35 = t;
  t = y_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(o_45, w_35, x_35, t);
  t = s_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_36 = NULL,k_36 = NULL,m_36 = NULL;
      t = term_n_13;
      t = p_0(t);
      j_36 = t;
      t = term_h_30;
      k_36 = t;
      t = term_i_30;
      m_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_30, term_i_30, j_36);
      t = y_7(k_36, m_36, j_36, t);
      _fail(t);
    }
  else
    {
      ATerm q_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_36 = ATgetFirst((ATermList) t);
          g_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_36;
      t = m_0(t);
      t = h_36;
      t = o_0(t);
      q_36 = t;
      t = (ATerm) ATinsert(CheckATermList(i_36), q_36);
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_36 = NULL,u_36 = NULL,v_36 = NULL;
  r_36 = t;
  t = term_f_13;
  u_36 = t;
  t = (ATerm) ATinsert(ATempty, r_36);
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, (ATerm) ATinsert(ATempty, r_36));
  t = r_7(u_36, v_36, t);
  t = r_36;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_7, t_7, f_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_13;
  t = whoami_0_0(t);
  c_37 = t;
  t = term_j_12;
  g_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_32), c_37);
  h_37 = t;
  t = SSL_printnl(g_37, h_37);
  t = term_p_12;
  f_37 = t;
  t = SSL_exit(f_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  t = term_e_10;
  i_37 = t;
  t = term_m_32;
  j_37 = t;
  t = term_n_32;
  t = x_7(i_37, j_37, t);
  return(t);
}
static ATerm s_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,p_37 = NULL,q_37 = NULL;
  l_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_37;
      t = k_91(t);
    }
  else
    {
      ATerm u_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_37 = ATgetFirst((ATermList) t);
          q_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_37;
      t = foldr_2_0(k_91, l_91, t);
      u_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_37, u_37);
      t = l_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm b_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      b_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(b_13, d_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_37 = NULL,v_12 = NULL,w_12 = NULL;
  t = times_0_0(t);
  w_12 = t;
  t = SSL_explode_term(w_12);
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      v_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12;
  t = foldr_2_0(g_8, j_8, t);
  z_37 = t;
  t = SSL_TicksToSeconds(z_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  if(match_cons(t, sym__2))
    {
      o_38 = ATgetArgument(t, 0);
      p_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_38;
        if((o_38 != t))
          {
            _fail(t);
          }
        t = n_38;
        LocalPopChoice(a_33);
      }
    else
      {
        t = w_32;
        t = (ATerm) ATmakeAppl(sym__2, o_38, p_38);
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_38, p_38);
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = SSL_gtr(o_38, p_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_38, p_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_38 = NULL,y_38 = NULL,b_39 = NULL;
        t = term_e_10;
        y_38 = t;
        t = term_v_10;
        b_39 = t;
        t = term_w_10;
        t = x_7(y_38, b_39, t);
        v_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_38, term_p_12);
        t = geq_0_0(t);
        t = t_38;
        t = v_98(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = t_38;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,i_39 = NULL,j_39 = NULL;
  t = run_time_0_0(t);
  d_39 = t;
  t = term_n_13;
  t = whoami_0_0(t);
  e_39 = t;
  t = term_j_12;
  i_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), d_39), term_s_13), e_39);
  j_39 = t;
  t = SSL_printnl(i_39, j_39);
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_33), d_39), term_s_13), e_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_30;
  k_39 = t;
  t = SSL_exit(k_39);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  b_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_40 = ATgetArgument(t, 0);
          {
            ATerm a_14 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(b_40);
            a_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_40);
            a_4 = t;
            t = SSLsetAnnotations(a_4, a_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_39 = NULL,t_39 = NULL;
      t = term_e_10;
      r_39 = t;
      t = term_l_33;
      t_39 = t;
      t = term_m_33;
      t = x_7(r_39, t_39, t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = fetch_1_0(l_8, t);
    }
  t = f_103(t);
  return(t);
}
static ATerm b_8 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm h_40 = NULL;
  t = SSL_hashtable_put(h_50, f_50, g_50);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm z_46, ATerm t)
{
  ATerm a_41 = NULL;
  t = table_hashtable_0_0(t);
  a_41 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_14 = NULL;
        t = a_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_14 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_8(z_46, n_14, t);
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        {
          ATerm v_14 = NULL;
          t = z_46;
          t = table_create_0_0(t);
          t = a_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_8(z_46, v_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_50, ATerm o_50, ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_hashtable_create(n_50, o_50);
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_41 = NULL,j_41 = NULL,l_41 = NULL,n_41 = NULL,p_41 = NULL;
  g_41 = t;
  t = term_p_33;
  n_41 = t;
  t = term_q_33;
  p_41 = t;
  t = g_41;
  t = new_hashtable_0_2(n_41, p_41, t);
  j_41 = t;
  t = g_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(g_41, j_41, l_41, t);
  t = g_41;
  return(t);
}
static ATerm u_7 (ATerm k_50, ATerm l_50, ATerm t)
{
  ATerm s_41 = NULL;
  t = SSL_hashtable_remove(l_50, k_50);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_41);
  return(t);
}
static ATerm v_7 (ATerm p_50, ATerm t)
{
  ATerm t_41 = NULL;
  t = SSL_hashtable_destroy(p_50);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_table_hashtable();
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  v_41 = t;
  t = table_hashtable_0_0(t);
  w_41 = t;
  t = lookup_table_0_1(v_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_7(y_41, t);
  t = w_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_41, x_41, t);
  t = v_41;
  return(t);
}
ATerm map_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  static ATerm s_42 (ATerm t);
  static ATerm s_42 (ATerm t)
  {
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
    p_42 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_42;
      }
    else
      {
        ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,d_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_42 = ATgetFirst((ATermList) t);
            r_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_42);
        l_15 = t;
        t = q_42;
        t = w_83(t);
        o_15 = t;
        t = r_42;
        t = s_42(t);
        p_15 = t;
        t = (ATerm) ATinsert(CheckATermList(p_15), o_15);
        d_4 = t;
        t = SSLsetAnnotations(d_4, l_15);
      }
    return(t);
  }
  t = s_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_43 = NULL,b_43 = NULL;
        static ATerm m_8 (ATerm t);
        static ATerm m_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_43)), not_null(b_43));
          return(t);
        }
        t = w_42;
        t = l_0(t);
        if(((a_43 != NULL) && (a_43 != t)))
          _fail(t);
        else
          a_43 = t;
        t = v_42;
        t = j_0(t);
        if(((b_43 != NULL) && (b_43 != t)))
          _fail(t);
        else
          b_43 = t;
        t = w_42;
        t = reverse_acc_2_0(j_0, m_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_13;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,j_43 = NULL,f_4 = NULL;
  j_43 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_43);
  h_43 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_43);
  f_4 = t;
  t = SSLsetAnnotations(f_4, h_43);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm l_43 = NULL;
  l_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_43), term_r_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL;
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_43 = NULL,g_43 = NULL;
      t = term_e_10;
      f_43 = t;
      t = term_m_32;
      g_43 = t;
      t = term_n_32;
      t = x_7(f_43, g_43, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = fetch_1_0(p_8, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_h_30;
  d_43 = t;
  t = term_i_30;
  e_43 = t;
  t = term_x_33;
  t = x_7(d_43, e_43, t);
  t = reverse_acc_2_0(_id, q_8, t);
  t = map_1_0(r_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_84 (ATerm), ATerm t)
{
  static ATerm i_44 (ATerm t);
  static ATerm i_44 (ATerm t)
  {
    ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL;
    f_44 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_44 = ATgetFirst((ATermList) t);
        h_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_33 = t;
      int z_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = NULL,g_16 = NULL,j_4 = NULL;
          t = SSLgetAnnotations(f_44);
          a_16 = t;
          t = g_44;
          t = g_84(t);
          g_16 = t;
          t = (ATerm) ATinsert(CheckATermList(h_44), g_16);
          j_4 = t;
          t = SSLsetAnnotations(j_4, a_16);
          LocalPopChoice(z_33);
        }
      else
        {
          t = y_33;
          {
            ATerm x_16 = NULL,a_17 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(f_44);
            x_16 = t;
            t = h_44;
            t = i_44(t);
            a_17 = t;
            t = (ATerm) ATinsert(CheckATermList(a_17), g_44);
            l_4 = t;
            t = SSLsetAnnotations(l_4, x_16);
          }
        }
    }
    return(t);
  }
  t = i_44(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL;
  m_44 = t;
  {
    ATerm a_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_44;
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
            t = m_44;
          }
        LocalPopChoice(d_34);
      }
    else
      {
        t = a_34;
        t = (ATerm) ATinsert(ATempty, m_44);
      }
  }
  n_44 = t;
  t = term_h_10;
  o_44 = t;
  t = SSL_printnl(o_44, n_44);
  t = m_44;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL;
  t = term_e_10;
  s_44 = t;
  t = term_m_32;
  t_44 = t;
  t = term_n_32;
  t = x_7(s_44, t_44, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_8 (ATerm i_50, ATerm j_50, ATerm t)
{
  t = SSL_hashtable_get(j_50, i_50);
  return(t);
}
static ATerm x_7 (ATerm g_47, ATerm h_47, ATerm t)
{
  ATerm u_44 = NULL;
  t = lookup_table_0_1(g_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_8(h_47, u_44, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL;
  t = term_k_34;
  w_44 = t;
  t = term_n_13;
  x_44 = t;
  t = term_l_34;
  t = a_8(w_44, x_44, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_m_34;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
  t = term_k_34;
  a_45 = t;
  t = term_n_13;
  b_45 = t;
  t = term_l_34;
  t = a_8(a_45, b_45, t);
  t = term_p_34;
  y_44 = t;
  t = term_n_13;
  z_44 = t;
  t = term_t_34;
  t = a_8(y_44, z_44, t);
  t = term_u_34;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_34 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, v_8, t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = x_34;
      t = Option_3_0(w_8, x_8, y_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_70 (ATerm), ATerm q_70 (ATerm), ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL,g_45 = NULL,h_45 = NULL,p_45 = NULL,s_4 = NULL;
  p_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_45 = ATgetFirst((ATermList) t);
      e_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_45);
  c_45 = t;
  t = d_45;
  t = p_70(t);
  g_45 = t;
  t = e_45;
  t = q_70(t);
  h_45 = t;
  t = (ATerm) ATinsert(CheckATermList(h_45), g_45);
  s_4 = t;
  t = SSLsetAnnotations(s_4, c_45);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,c_46 = NULL,d_46 = NULL,c_5 = NULL;
  x_45 = t;
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_35;
        t = d_105(t);
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
      }
  }
  t = x_45;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_45 = ATgetFirst((ATermList) t);
      a_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  y_45 = t;
  t = term_m_32;
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_32, z_45);
  t = a_8(d_46, z_45, t);
  t = a_46;
  {
    static ATerm s_46 (ATerm t);
    static ATerm s_46 (ATerm t)
    {
      ATerm f_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_46 = NULL;
              g_46 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_46;
              LocalPopChoice(k_35);
            }
          else
            {
              t = i_35;
              t = d_105(t);
              t = Cons_2_0(_id, s_46, t);
            }
          LocalPopChoice(g_35);
        }
      else
        {
          t = f_35;
          {
            ATerm j_46 = NULL,p_46 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_46 = ATgetFirst((ATermList) t);
                p_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_46), (ATerm) ATmakeAppl(sym_Undefined_1, j_46));
          }
        }
      return(t);
    }
    t = s_46(t);
  }
  c_46 = t;
  t = (ATerm) ATinsert(CheckATermList(c_46), (ATerm) ATmakeAppl(sym_Program_1, z_45));
  c_5 = t;
  t = SSLsetAnnotations(c_5, y_45);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm p_47 = NULL;
  p_47 = t;
  if(match_string(t, "--help"))
    {
      t = p_47;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_47;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_47;
        }
    }
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL;
  t = term_l_33;
  q_47 = t;
  t = term_n_13;
  r_47 = t;
  t = term_l_35;
  t = a_8(q_47, r_47, t);
  t = term_n_35;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_o_35;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  j_47 = t;
  t = term_h_30;
  k_47 = t;
  t = term_p_35;
  t = lookup_table_0_1(k_47, t);
  o_47 = t;
  t = term_i_30;
  l_47 = t;
  t = (ATerm) ATempty;
  m_47 = t;
  t = o_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(l_47, m_47, n_47, t);
  t = j_47;
  {
    static ATerm z_8 (ATerm t);
    static ATerm z_8 (ATerm t)
    {
      ATerm r_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_105(t);
          LocalPopChoice(u_35);
        }
      else
        {
          t = r_35;
          {
            ATerm v_35 = t;
            int z_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_9, b_9, c_9, t);
                LocalPopChoice(z_35);
              }
            else
              {
                t = v_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_8, t);
  }
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_48 = NULL;
        c_48 = t;
        {
          ATerm c_36 = t;
          int d_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_18 = NULL;
              t = c_48;
              {
                ATerm e_36 = t;
                int l_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_18 = NULL,i_18 = NULL;
                    t = term_e_10;
                    h_18 = t;
                    t = term_l_33;
                    i_18 = t;
                    t = term_m_33;
                    t = x_7(h_18, i_18, t);
                    LocalPopChoice(l_36);
                  }
                else
                  {
                    t = e_36;
                    t = fetch_1_0(d_9, t);
                  }
              }
              t = c_48;
              t = default_system_usage_0_0(t);
              t = term_n_30;
              c_18 = t;
              t = SSL_exit(c_18);
              LocalPopChoice(d_36);
            }
          else
            {
              t = c_36;
              {
                ATerm k_19 = NULL,n_19 = NULL,o_19 = NULL;
                t = term_e_10;
                n_19 = t;
                t = term_k_34;
                o_19 = t;
                t = term_n_36;
                t = x_7(n_19, o_19, t);
                t = c_48;
                t = default_system_about_0_0(t);
                t = term_n_30;
                k_19 = t;
                t = SSL_exit(k_19);
              }
            }
        }
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        {
          ATerm o_36 = t;
          int p_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL;
              static ATerm e_9 (ATerm t);
              static ATerm e_9 (ATerm t)
              {
                ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL,f_5 = NULL;
                i_48 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_48 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_48);
                g_48 = t;
                t = h_48;
                if(((f_47 != NULL) && (f_47 != t)))
                  _fail(t);
                else
                  f_47 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_48);
                f_5 = t;
                t = SSLsetAnnotations(f_5, g_48);
                return(t);
              }
              t = fetch_1_0(e_9, t);
              t = term_j_12;
              e_48 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_47)), term_s_36);
              f_48 = t;
              t = SSL_printnl(e_48, f_48);
              t = (ATerm) ATmakeAppl(sym__2, term_j_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_47)), term_s_36));
              t = default_system_usage_0_0(t);
              t = term_p_12;
              d_48 = t;
              t = SSL_exit(d_48);
              LocalPopChoice(p_36);
            }
          else
            {
              t = o_36;
            }
        }
      }
  }
  i_47 = t;
  t = term_h_30;
  t = table_destroy_0_0(t);
  t = i_47;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  t = parse_options_1_0(h_103, t);
  n_48 = t;
  t = term_t_36;
  t = table_create_0_0(t);
  t = term_t_36;
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_36, term_w_36, n_48);
  t = lookup_table_0_1(o_48, t);
  r_48 = t;
  t = term_w_36;
  p_48 = t;
  t = r_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(p_48, n_48, q_48, t);
  t = n_48;
  t = j_103(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_103, t);
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm z_36 = t;
          int a_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_37);
            }
          else
            {
              t = z_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm b_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(d_37);
    }
  else
    {
      t = b_37;
      {
        ATerm e_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(k_37);
          }
        else
          {
            t = e_37;
            {
              ATerm m_37 = t;
              int n_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_37);
                }
              else
                {
                  t = m_37;
                  {
                    ATerm o_37 = t;
                    int r_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_9, j_9, k_9, t);
                        LocalPopChoice(r_37);
                      }
                    else
                      {
                        t = o_37;
                        {
                          ATerm s_37 = t;
                          int t_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(t_37);
                            }
                          else
                            {
                              t = s_37;
                              {
                                ATerm v_37 = t;
                                int w_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(w_37);
                                  }
                                else
                                  {
                                    t = v_37;
                                    t = Option_3_0(l_9, n_9, r_9, t);
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
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  t = term_x_37;
  t_48 = t;
  t = term_n_13;
  u_48 = t;
  t = term_y_37;
  t = a_8(t_48, u_48, t);
  t = term_a_38;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_b_38;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  t = term_q_10;
  w_48 = t;
  t = term_c_38;
  x_48 = t;
  t = term_d_38;
  t = a_8(w_48, x_48, t);
  t = v_48;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
