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
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_h_37;
ATerm term_f_37;
ATerm term_a_37;
ATerm term_u_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_z_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_a_32;
ATerm term_y_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_t_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_h_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_t_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_w_24;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_m_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_u_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_k_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_i_10);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_s_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_v_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_l_13, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_b_12, term_f_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_t_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_b_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_b_17, term_c_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_m_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_f_18, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_m_18, term_p_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_x_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_e_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_q_19, term_r_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_w_19, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_j_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_z_20);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_h_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_n_21, term_p_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_21, term_w_21, term_y_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_22, term_c_22, term_d_22);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_22, term_j_22, term_k_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_22, term_u_22, term_x_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_h_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_z_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_x_25);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_o_28);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_h_29);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_f_31);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_31);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym__2, term_m_31, term_z_10);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_y_32);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_f_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_c_31);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_z_10);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_h_35, term_z_10);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_z_10);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, (ATerm) ATempty);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_d_35);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_s_38, term_z_10);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_s_10, term_x_38);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
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
static ATerm b_7 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm u_7 (ATerm o_14, ATerm p_14, ATerm t);
ATerm rename_to_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm y_85 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm n_74 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm d_7 (ATerm w_33, ATerm x_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm e_7 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm f_7 (ATerm c_69 (ATerm), ATerm d_173, ATerm y_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t);
static ATerm g_7 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t);
static ATerm i_7 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_86 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm k_7 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm l_7 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm y_1 (ATerm t);
static ATerm m_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm n_7 (ATerm e_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm r_7 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm z_17 (ATerm l_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_7 (ATerm u_17, ATerm t);
static ATerm p_7 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_20 (ATerm j_18, ATerm t);
static ATerm b_20 (ATerm n_18, ATerm o_18, ATerm r_18, ATerm t);
static ATerm c_20 (ATerm f_19, ATerm g_19, ATerm h_19, ATerm t);
static ATerm q_7 (ATerm t);
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
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm k_26 (ATerm i_25, ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm s_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm v_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_88 (ATerm), ATerm t);
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
static ATerm f_8 (ATerm w_40, ATerm x_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_36 (ATerm d_36, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm w_7 (ATerm c_41, ATerm b_41, ATerm t);
static ATerm d_8 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm need_help_1_0 (ATerm i_90 (ATerm), ATerm t);
static ATerm g_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm a_8 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_8 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm c_8 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_92 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
ATerm parse_options_1_0 (ATerm f_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
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
    int a_10 = stack_ptr;
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
        t = u_7(h_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
        LocalPopChoice(a_10);
      }
    else
      {
        t = h_3;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 = NULL;
              t = g_1;
              t = o_0(t);
              j_1 = t;
              {
                ATerm e_10 = t;
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
                    t = e_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, h_1, j_1);
              t = u_7(h_1, j_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
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
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 = NULL,a_2 = NULL;
      t = term_h_10;
      z_1 = t;
      t = term_i_10;
      a_2 = t;
      t = term_j_10;
      t = c_8(z_1, a_2, t);
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_k_10;
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
      t = term_i_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 = NULL,c_2 = NULL;
            t = term_h_10;
            b_2 = t;
            t = term_i_10;
            c_2 = t;
            t = term_j_10;
            t = c_8(b_2, c_2, t);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = term_k_10;
          }
      }
      s_1 = t;
      t = term_n_10;
      v_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, s_1);
      t = u_7(v_1, s_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm o_10 = ATgetArgument(t, 0);
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
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 = NULL,h_2 = NULL;
      t = term_h_10;
      g_2 = t;
      t = term_s_10;
      h_2 = t;
      t = term_t_10;
      t = c_8(g_2, h_2, t);
      LocalPopChoice(q_10);
      t = (ATerm) ATinsert(ATempty, term_y_10);
    }
  else
    {
      t = p_10;
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
  t = term_z_10;
  t = new_0_0(t);
  m_2 = t;
  t = term_b_11;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_b_11);
  t = t_7(m_2, n_2, t);
  o_2 = t;
  {
    ATerm d_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_11);
        r_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATempty, term_h_11));
        t = r_7(o_2, r_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = d_11;
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
static ATerm b_7 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = get_errno_0_0(t);
      t = term_z_10;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = u_7(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm u_7 (ATerm o_14, ATerm p_14, ATerm t)
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
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = b_4;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_10;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, term_k_10);
        t = u_7(c_4, k_2, t);
        t = SSL_remove(c_4);
        t = term_k_10;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_2 = NULL;
              t = b_4;
              t = t_0(t);
              v_2 = t;
              {
                ATerm p_11 = t;
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
                    t = p_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, c_4, v_2);
              t = b_7(c_4, v_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_2);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
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
  t = term_q_11;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_q_11;
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
  t = term_r_11;
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
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_4 = NULL,n_4 = NULL,q_0 = NULL;
            n_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm v_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_4);
            l_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
            q_0 = t;
            t = SSLsetAnnotations(q_0, l_4);
            LocalPopChoice(u_11);
            t = xtc_transform_file_2_0(f_0, j_0, t);
          }
        else
          {
            t = t_11;
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
ATerm if_verbose2_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
        t = term_h_10;
        t_4 = t;
        t = term_z_11;
        u_4 = t;
        t = term_a_12;
        t = c_8(t_4, u_4, t);
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_b_12);
        t = geq_0_0(t);
        t = q_4;
        t = y_85(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
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
  t = term_c_12;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,b_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,m_5 = NULL,v_0 = NULL;
  x_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_d_12), x_4);
  f_5 = t;
  t = SSL_concat_strings(f_5);
  e_5 = t;
  t = (ATerm) ATinsert(ATempty, term_h_11);
  d_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, (ATerm) ATinsert(ATempty, term_h_11));
  t = r_7(e_5, d_5, t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      ATerm i_12 = ATgetArgument(t, 1);
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
      ATerm k_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_12 = ATgetArgument(t, 1);
        if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
          {
            y_4 = ATgetFirst((ATermList) o_12);
            {
              ATerm p_12 = (ATerm) ATgetNext((ATermList) o_12);
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
ATerm at_suffix_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  static ATerm i_6 (ATerm t)
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_74(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,c_3 = NULL,f_3 = NULL,x_0 = NULL;
          d_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_6 = ATgetFirst((ATermList) t);
              f_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_6);
          c_3 = t;
          t = f_6;
          t = i_6(t);
          f_3 = t;
          t = (ATerm) ATinsert(CheckATermList(f_3), e_6);
          x_0 = t;
          t = SSLsetAnnotations(x_0, c_3);
        }
      }
    return(t);
  }
  t = i_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm v_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL,n_3 = NULL,v_3 = NULL;
      n_3 = t;
      t = term_z_12;
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
      LocalPopChoice(x_12);
    }
  else
    {
      t = v_12;
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 = NULL,a_4 = NULL,d_4 = NULL;
            a_4 = t;
            t = term_e_13;
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
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            {
              ATerm t_6 = NULL,w_6 = NULL,j_7 = NULL,b_8 = NULL;
              t_6 = t;
              t = term_i_13;
              j_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_k_13);
              b_8 = t;
              t = SSL_printnl(j_7, b_8);
              t = term_l_13;
              w_6 = t;
              t = SSL_exit(w_6);
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_k_13);
            }
          }
      }
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm q_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,i_8 = NULL;
      t = term_h_10;
      e_8 = t;
      t = term_v_13;
      i_8 = t;
      t = term_z_13;
      t = c_8(e_8, i_8, t);
      LocalPopChoice(u_13);
    }
  else
    {
      t = q_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm j_8 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_8), term_v_13);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_a_14;
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
static ATerm d_7 (ATerm w_33, ATerm x_33, ATerm t)
{
  ATerm b_14 = t;
  int c_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(w_33, x_33);
      LocalPopChoice(c_14);
    }
  else
    {
      t = b_14;
      t = SSL_subtr(w_33, x_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm m_8 = NULL,o_8 = NULL,p_8 = NULL,r_8 = NULL;
  t = term_z_11;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_8 = NULL,u_8 = NULL;
        t = term_h_10;
        t_8 = t;
        t = term_z_11;
        u_8 = t;
        t = term_a_12;
        t = c_8(t_8, u_8, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = term_l_13;
      }
  }
  o_8 = t;
  t = term_l_13;
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_8, term_l_13);
  t = d_7(o_8, r_8, t);
  p_8 = t;
  t = SSL_int_to_string(p_8);
  m_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_8), term_z_11);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
  t = term_z_10;
  t = pass_verbose_0_0(t);
  v_8 = t;
  t = term_z_10;
  t = create_pp_table_args_0_0(t);
  w_8 = t;
  t = term_z_10;
  t = pass_conservative_0_0(t);
  x_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_8), w_8), v_8);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_n_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_h_11);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_h_11));
      t = r_7(c_9, e_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm e_7 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm k_9 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  k_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_9);
  return(t);
}
static ATerm f_7 (ATerm c_69 (ATerm), ATerm d_173, ATerm y_17, ATerm t)
{
  ATerm l_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_173, term_f_14);
  t = q_7(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, y_17);
  t = c_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_14 = ATgetArgument(t, 0);
      if(match_cons(i_14, sym_Stream_1))
        {
          t_9 = ATgetArgument(i_14, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(t_9, u_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,s_9 = NULL;
  s_9 = t;
  t = xtc_new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, s_9);
  t = f_7(m_1, m_9, s_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
  t = xtc_transform_file_2_0(z_87, a_88, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm g_7 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_10 = NULL,u_10 = NULL,w_10 = NULL,x_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_10 = ATgetArgument(t, 0);
      {
        ATerm p_4 = NULL,z_4 = NULL;
        t = SSL_int_to_string(u_10);
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_14), p_4), term_k_14);
        z_4 = t;
        t = SSL_concat_strings(z_4);
      }
    }
  else
    {
      ATerm r_5 = NULL,s_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          u_10 = ATgetArgument(t, 0);
          w_10 = ATgetArgument(t, 1);
          x_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_10);
      r_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_10), term_u_14), r_5), term_s_14), u_10);
      s_5 = t;
      t = SSL_concat_strings(s_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = e_74(t);
    if(((c_11 != NULL) && (c_11 != t)))
      _fail(t);
    else
      c_11 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(c_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  e_11 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm y_14 = ATgetArgument(t, 0);
              if((e_11 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm z_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), term_m_22), term_h_22), term_a_22), term_q_21), term_l_21), term_a_21), term_q_20), term_l_20), term_e_20), term_t_19), term_j_19), term_z_18), term_q_18), term_i_18), term_w_17), term_n_17), term_i_17), term_e_17), term_w_16), term_s_16), term_l_16), term_c_16), term_x_15), term_p_15), term_l_15), term_g_15), term_d_15);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, e_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_11 = NULL,w_11 = NULL;
  i_11 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            w_11 = ATgetArgument(t, 1);
            {
              ATerm c_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_23);
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL;
              t = w_11;
              {
                ATerm f_23 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_23;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              l_6 = t;
              t = term_i_13;
              o_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_6), term_g_23);
              p_6 = t;
              t = SSL_printnl(o_6, p_6);
              t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATempty, l_6), term_g_23));
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              t = i_11;
            }
        }
      }
    else
      {
        t = z_22;
        t = i_11;
      }
  }
  t = i_11;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL;
  g_12 = t;
  t = fork_0_0(t);
  f_12 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = g_12;
        t = r_67(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        t = SSL_waitpid(f_12);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            if(((ATgetType(j_23) != AT_INT) || (ATgetInt((ATermInt) j_23) != 0)))
              _fail(t);
            {
              ATerm k_23 = ATgetArgument(t, 1);
            }
            {
              ATerm l_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = g_12;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,m_12 = NULL,n_12 = NULL,q_12 = NULL;
  j_12 = t;
  t = a_69(t);
  m_12 = t;
  t = term_i_13;
  n_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_12), m_12);
  q_12 = t;
  t = SSL_printnl(n_12, q_12);
  t = j_12;
  return(t);
}
static ATerm i_7 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm w_12 = NULL,y_12 = NULL;
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_12), w_12);
    t = c_8(not_null(t_12), w_12, t);
    y_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_12, y_12);
    return(t);
  }
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  t = lookup_table_0_1(t_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(u_12, t);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm a_13 = NULL;
  a_13 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 = NULL,g_13 = NULL,j_13 = NULL;
        t = term_h_10;
        g_13 = t;
        t = term_z_11;
        j_13 = t;
        t = term_a_12;
        t = c_8(g_13, j_13, t);
        f_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_13, term_w_21);
        t = geq_0_0(t);
        t = a_13;
        t = b_86(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = a_13;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  o_13 = t;
  {
    ATerm o_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,t_13 = NULL,y_13 = NULL;
        t = term_h_10;
        t_13 = t;
        t = term_z_11;
        y_13 = t;
        t = term_a_12;
        t = c_8(t_13, y_13, t);
        s_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_13, term_k_17);
        t = geq_0_0(t);
        t = o_13;
        t = a_86(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = o_23;
        t = o_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm j_14 = NULL;
  j_14 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_14 = NULL,q_14 = NULL,t_14 = NULL;
        t = term_h_10;
        q_14 = t;
        t = term_z_11;
        t_14 = t;
        t = term_a_12;
        t = c_8(q_14, t_14, t);
        l_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_14, term_n_15);
        t = geq_0_0(t);
        t = j_14;
        t = c_86(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = j_14;
      }
  }
  return(t);
}
static ATerm k_7 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = h_78(t);
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm v_14 = NULL;
      v_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, v_14);
      t = g_78(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm l_7 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm a_16 (ATerm t)
  {
    ATerm r_15 = NULL,u_15 = NULL,v_15 = NULL;
    r_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_15 = ATgetFirst((ATermList) t);
            v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_15;
              {
                static ATerm w_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = k_7(d_78, w_1, u_15, v_15, t);
              }
              t = a_16(t);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                ATerm y_6 = NULL,c_7 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(r_15);
                y_6 = t;
                t = v_15;
                t = a_16(t);
                c_7 = t;
                t = (ATerm) ATinsert(CheckATermList(c_7), u_15);
                b_1 = t;
                t = SSLsetAnnotations(b_1, y_6);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = a_16(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      q_16 = ATgetArgument(t, 0);
      if((q_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL,h_16 = NULL;
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            ATerm e_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = c_8(o_37, p_37, t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATempty;
      }
  }
  g_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_16, q_37);
  t = l_7(y_1, g_16, q_37, t);
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, e_16);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(p_37, e_16, h_16, t);
  t = d_16;
  return(t);
}
static ATerm n_7 (ATerm e_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm d_2 (ATerm t)
  {
    ATerm x_16 = NULL,y_16 = NULL;
    if(match_cons(t, sym__2))
      {
        x_16 = ATgetArgument(t, 0);
        y_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, x_16, y_16);
    t = e_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(d_2, t);
  return(t);
}
static ATerm r_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm z_17 (ATerm l_17, ATerm t)
{
  t = SSL_fclose(l_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_17 = ATgetArgument(t, 0);
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_17);
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = z_17(v_17, t);
          }
      }
    }
  else
    {
      t = z_17(v_17, t);
    }
  return(t);
}
static ATerm o_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm p_7 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm a_18 = NULL;
  t = SSL_fopen(i_42, j_42);
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_18 = NULL;
  t = SSL_stdin_stream();
  b_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  t = SSL_stdout_stream();
  c_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_18 = NULL;
  t = SSL_stderr_stream();
  d_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_18);
  return(t);
}
static ATerm a_20 (ATerm j_18, ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_explode_term(j_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
          {
            k_18 = ATgetFirst((ATermList) o_24);
            {
              ATerm p_24 = (ATerm) ATgetNext((ATermList) o_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_20 (ATerm n_18, ATerm o_18, ATerm r_18, ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,w_18 = NULL,b_19 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(r_18);
  w_18 = t;
  t = n_18;
  if(match_cons(t, sym_Path_1))
    {
      b_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_19, o_18);
  d_1 = t;
  t = SSLsetAnnotations(d_1, w_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(s_18, t_18, t);
  return(t);
}
static ATerm c_20 (ATerm f_19, ATerm g_19, ATerm h_19, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,v_19 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(h_19);
  p_19 = t;
  t = SSL_is_string(f_19);
  v_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_19, g_19);
  f_1 = t;
  t = SSLsetAnnotations(f_1, p_19);
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_7(n_19, o_19, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  if(match_cons(t, sym__2))
    {
      y_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_20(x_19, t);
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            {
              ATerm s_24 = t;
              int t_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_20(y_19, z_19, x_19, t);
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  t = c_20(y_19, z_19, x_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_20(x_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,o_20 = NULL;
  o_20 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_20, term_w_24);
        t = q_7(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm i_9 = NULL,j_9 = NULL;
          t = term_z_24;
          j_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_24, o_20);
          t = t_7(j_9, o_20, t);
          i_9 = t;
          t = SSL_perror(i_9);
          _fail(t);
        }
      }
  }
  h_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_7(i_20, t);
  g_20 = t;
  t = h_20;
  t = fclose_0_0(t);
  t = g_20;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_a_25;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL,s_20 = NULL;
      r_20 = t;
      t = (ATerm) ATinsert(ATempty, term_g_25);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_20, (ATerm) ATinsert(ATempty, term_g_25));
      t = r_7(r_20, s_20, t);
      LocalPopChoice(f_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_25;
      {
        ATerm h_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_25 = t;
            if((PushChoice() == 0))
              {
                ATerm v_20 = NULL,w_20 = NULL;
                v_20 = t;
                t = (ATerm) ATinsert(ATempty, term_h_11);
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_20, (ATerm) ATinsert(ATempty, term_h_11));
                t = r_7(v_20, w_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_25;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(j_25);
          }
        else
          {
            t = h_25;
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
  t = term_l_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_m_25;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
  e_22 = t;
  t = term_i_13;
  f_22 = t;
  t = (ATerm) ATinsert(ATempty, term_o_25);
  g_22 = t;
  t = SSL_printnl(f_22, g_22);
  t = e_22;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(match_cons(t, sym__3))
    {
      l_22 = ATgetArgument(t, 0);
      n_22 = ATgetArgument(t, 1);
      o_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_7(l_22, n_22, o_22, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  t = term_i_13;
  q_22 = t;
  t = (ATerm) ATinsert(ATempty, term_q_25);
  r_22 = t;
  t = SSL_printnl(q_22, r_22);
  t = p_22;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm s_22 = NULL,v_22 = NULL,w_22 = NULL;
  s_22 = t;
  t = term_i_13;
  v_22 = t;
  t = (ATerm) ATinsert(ATempty, term_o_25);
  w_22 = t;
  t = SSL_printnl(v_22, w_22);
  t = s_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,o_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,v_21 = NULL;
  x_20 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm r_25 = t;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL,z_21 = NULL;
        t = term_w_25;
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, x_20);
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Imported_1, x_20));
        t = c_8(x_21, z_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_25;
      }
  }
  b_21 = t;
  t = term_w_25;
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, (ATerm) ATinsert(ATempty, x_20));
  t = lookup_table_0_1(o_21, t);
  v_21 = t;
  t = term_x_25;
  r_21 = t;
  t = (ATerm) ATinsert(ATempty, x_20);
  s_21 = t;
  t = v_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(r_21, s_21, t_21, t);
  t = b_21;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(q_2, t);
  y_20 = t;
  t = term_w_25;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, y_20);
  t = n_7(s_2, k_21, y_20, t);
  t = if_verbose6_1_0(t_2, t);
  t = term_w_25;
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, (ATerm)ATmakeAppl(sym_Imported_1, x_20), (ATerm) ATempty);
  t = lookup_table_0_1(c_21, t);
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, x_20);
  d_21 = t;
  t = (ATerm) ATempty;
  e_21 = t;
  t = j_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(d_21, e_21, i_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, (ATerm)ATmakeAppl(sym_Imported_1, x_20), (ATerm) ATempty);
  t = if_verbose4_1_0(u_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,r_23 = NULL,s_23 = NULL;
  p_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_23 = ATgetFirst((ATermList) t);
          s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL,x_9 = NULL,b_10 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(p_23);
            r_9 = t;
            t = r_23;
            t = k_82(t);
            x_9 = t;
            t = s_23;
            t = filter_1_0(k_82, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), x_9);
            q_1 = t;
            t = SSLsetAnnotations(q_1, r_9);
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = s_23;
            t = filter_1_0(k_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t)
{
  static ATerm a_24 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_71(t);
        t = a_24(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = y_71(t);
      }
    return(t);
  }
  t = a_24(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int g_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,c_24 = NULL;
      t = term_h_10;
      b_24 = t;
      t = term_h_26;
      c_24 = t;
      t = term_i_26;
      t = c_8(b_24, c_24, t);
      LocalPopChoice(g_26);
    }
  else
    {
      t = f_26;
      {
        ATerm l_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_24 = NULL;
            t = term_t_26;
            d_24 = t;
            t = SSL_getenv(d_24);
            LocalPopChoice(o_26);
          }
        else
          {
            t = l_26;
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
  t = term_y_26;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  t = term_w_25;
  l_24 = t;
  t = term_z_26;
  m_24 = t;
  t = term_a_27;
  t = c_8(l_24, m_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_27;
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
  t = term_e_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = if_verbose5_1_0(x_2, t);
  f_24 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_24 = NULL,j_24 = NULL;
        t = term_w_25;
        i_24 = t;
        t = term_x_25;
        j_24 = t;
        t = term_i_27;
        t = c_8(i_24, j_24, t);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        {
          ATerm k_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_24 = t;
          t = repeat_2_0(z_2, _id, t);
          t = k_24;
        }
      }
  }
  t = f_24;
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
  t = term_j_27;
  return(t);
}
static ATerm k_26 (ATerm i_25, ATerm t)
{
  ATerm n_25 = NULL,p_25 = NULL,s_25 = NULL;
  t = term_w_25;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_25);
  s_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Tool_1, i_25));
  t = c_8(p_25, s_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_27 = ATgetFirst((ATermList) t);
      if(match_cons(k_27, sym__2))
        {
          ATerm n_27 = ATgetArgument(k_27, 0);
          n_25 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_25;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_w_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_p_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
      t = if_verbose5_1_0(d_3, t);
      t = xtc_load_0_0(t);
      v_25 = t;
      if(match_cons(t, sym__2))
        {
          t_25 = ATgetArgument(t, 0);
          u_25 = ATgetArgument(t, 1);
          {
            ATerm z_27 = t;
            int a_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
                t = term_w_25;
                b_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, t_25);
                c_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Tool_1, t_25));
                t = c_8(b_26, c_26, t);
                {
                  static ATerm g_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((u_25 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((a_26 != NULL) && (a_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(g_3, t);
                }
                t = not_null(a_26);
                LocalPopChoice(a_28);
              }
            else
              {
                t = z_27;
                t = k_26(v_25, t);
              }
          }
        }
      else
        {
          t = k_26(v_25, t);
        }
      t = if_verbose5_1_0(i_3, t);
      LocalPopChoice(w_27);
    }
  else
    {
      t = q_27;
      {
        ATerm j_26 = NULL,v_10 = NULL,a_11 = NULL;
        j_26 = t;
        t = term_i_13;
        v_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_26), term_b_28);
        a_11 = t;
        t = SSL_printnl(v_10, a_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_28), j_26), term_b_28);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  n_26 = t;
  t = a_89(t);
  t = xtc_find_0_0(t);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm p_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_26, n_26);
      t = g_7(m_26, n_26, t);
      t = term_f_28;
      p_26 = t;
      t = SSL_exit(p_26);
      return(t);
    }
    t = fork_and_wait_1_0(p_3, t);
  }
  t = n_26;
  return(t);
}
static ATerm s_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,c_27 = NULL;
  u_26 = t;
  t = o_84(t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_26, e_35, c_35);
  t = d_8(q_26, e_35, c_35, t);
  {
    ATerm g_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_o_28;
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_26, term_o_28);
        t = c_8(q_26, d_27, t);
        LocalPopChoice(m_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_26, term_o_28, (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATinsert(CheckATermList(r_26), e_35)));
  t = lookup_table_0_1(q_26, t);
  c_27 = t;
  t = term_o_28;
  v_26 = t;
  t = (ATerm) ATinsert(CheckATermList(s_26), (ATerm) ATinsert(CheckATermList(r_26), e_35));
  w_26 = t;
  t = c_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(v_26, w_26, x_26, t);
  t = u_26;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm h_27 = NULL;
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,g_11 = NULL;
      m_27 = t;
      t = term_z_28;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_27, term_z_28);
      t = t_7(m_27, g_11, t);
      h_27 = t;
      t = SSL_mkstemp(h_27);
      LocalPopChoice(t_28);
    }
  else
    {
      t = s_28;
      {
        ATerm o_27 = NULL;
        t = term_a_29;
        o_27 = t;
        t = SSL_perror(o_27);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_7 (ATerm l_32, ATerm m_32, ATerm t)
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
  t = term_c_29;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  t = P__tmpdir_0_0(t);
  u_27 = t;
  t = term_d_29;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, term_d_29);
  t = t_7(u_27, v_27, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_10;
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, term_z_10);
  t = s_7(r_3, s_27, t_27, t);
  t = SSL_close(r_27);
  t = s_27;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  x_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_28 = NULL,d_28 = NULL;
      t = x_27;
      t = xtc_new_file_0_0(t);
      c_28 = t;
      t = r_0(t);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_28, (ATerm) ATinsert(ATinsert(ATempty, c_28), term_i_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_28);
    }
  else
    {
      ATerm h_28 = NULL,i_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_27;
      t = xtc_new_file_0_0(t);
      h_28 = t;
      t = r_0(t);
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_28), term_i_10), y_27), term_h_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_28);
    }
  return(t);
}
static ATerm v_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  k_28 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = c_8(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_29 = ATgetFirst((ATermList) t);
            j_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_29);
        {
          ATerm l_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, j_28);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(x_36, j_28, l_28, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, j_28);
        }
      }
    else
      {
        t = j_29;
        {
          ATerm n_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(x_36, n_28, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = k_28;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  u_28 = t;
  t = l_84(t);
  r_28 = t;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_28 = NULL;
        t = term_o_28;
        y_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_28, term_o_28);
        t = c_8(r_28, y_28, t);
        LocalPopChoice(q_29);
      }
    else
      {
        t = p_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, r_28, term_o_28, p_28);
  t = lookup_table_0_1(r_28, t);
  x_28 = t;
  t = term_o_28;
  v_28 = t;
  t = x_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(v_28, p_28, w_28, t);
  t = q_28;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm b_29 = NULL;
      b_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_28, b_29);
      t = v_7(r_28, b_29, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = u_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm r_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_85(t);
      t = m_85(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = r_29;
      t = m_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,i_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  f_29 = t;
  t = k_84(t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_29, term_o_28);
  {
    ATerm u_29 = t;
    int v_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_29 = ATgetArgument(t, 0);
            ATerm x_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_28;
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_29, term_o_28);
        t = c_8(e_29, s_29, t);
        LocalPopChoice(v_29);
      }
    else
      {
        t = u_29;
        t = (ATerm) ATempty;
      }
  }
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_29, term_o_28, (ATerm) ATinsert(CheckATermList(g_29), (ATerm) ATempty));
  t = lookup_table_0_1(e_29, t);
  n_29 = t;
  t = term_o_28;
  i_29 = t;
  t = (ATerm) ATinsert(CheckATermList(g_29), (ATerm) ATempty);
  l_29 = t;
  t = n_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(i_29, l_29, m_29, t);
  t = f_29;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm j_30 = NULL;
  j_30 = t;
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_30);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = j_30;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm b_30 = NULL;
  static ATerm e_4 (ATerm t)
  {
    ATerm d_30 = NULL;
    d_30 = t;
    {
      ATerm a_30 = t;
      int c_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_30 = NULL,f_30 = NULL;
          t = term_c_29;
          e_30 = t;
          t = term_o_28;
          f_30 = t;
          t = term_g_30;
          t = c_8(e_30, f_30, t);
          LocalPopChoice(c_30);
        }
      else
        {
          t = a_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_30 != NULL) && (b_30 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_30 = ATgetFirst((ATermList) t);
        {
          ATerm h_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = b_30;
    t = map_1_0(f_4, t);
    t = d_30;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  t = restore_always_2_0(m_88, e_4, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_30 = NULL,u_30 = NULL,x_30 = NULL;
      t = term_h_10;
      u_30 = t;
      t = term_h_29;
      x_30 = t;
      t = term_l_30;
      t = c_8(u_30, x_30, t);
      s_30 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_30);
      LocalPopChoice(k_30);
    }
  else
    {
      t = i_30;
      t = term_n_10;
    }
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,j_31 = NULL;
        j_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            i_31 = ATgetArgument(t, 0);
            {
              ATerm s_11 = NULL,t_1 = NULL;
              t = SSLgetAnnotations(j_31);
              s_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_31);
              t_1 = t;
              t = SSLsetAnnotations(t_1, s_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_31;
          }
        LocalPopChoice(n_30);
        t = xtc_transform_file_2_0(m_4, o_4, t);
      }
    else
      {
        t = m_30;
        t = xtc_transform_term_2_0(r_4, v_4, t);
      }
  }
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_31 = NULL,s_31 = NULL;
        s_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            q_31 = ATgetArgument(t, 0);
            {
              ATerm l_12 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(s_31);
              l_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_31);
              u_1 = t;
              t = SSLsetAnnotations(u_1, l_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = s_31;
          }
        LocalPopChoice(p_30);
        t = xtc_transform_file_2_0(a_5, c_5, t);
      }
    else
      {
        t = o_30;
        t = xtc_transform_term_2_0(i_5, k_5, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_30), term_v_30), term_t_30), term_r_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_30), term_v_30), term_t_30), term_r_30);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_z_10;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_y_30;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_z_10;
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
  ATerm v_31 = NULL,w_31 = NULL,z_31 = NULL,b_32 = NULL,c_32 = NULL;
  v_31 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  w_31 = t;
  t = term_i_13;
  b_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_31), w_31), term_z_30);
  c_32 = t;
  t = SSL_printnl(b_32, c_32);
  t = term_l_13;
  z_31 = t;
  t = SSL_exit(z_31);
  t = v_31;
  return(t);
}
static ATerm f_8 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm f_32 = NULL,i_32 = NULL;
  t = term_h_10;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, w_40, x_40);
  t = lookup_table_0_1(f_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(w_40, x_40, i_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, w_40, x_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
      t = term_z_10;
      t = e_0(t);
      q_32 = t;
      t = term_b_31;
      r_32 = t;
      t = term_c_31;
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, q_32);
      t = d_8(r_32, s_32, q_32, t);
      _fail(t);
    }
  else
    {
      ATerm x_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_32;
      t = c_0(t);
      t = term_z_10;
      t = d_0(t);
      x_32 = t;
      t = (ATerm) ATinsert(CheckATermList(p_32), x_32);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm a_33 = NULL;
  a_33 = t;
  if(match_string(t, "-k"))
    {
      t = a_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_33;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm b_33 = NULL,e_33 = NULL,f_33 = NULL;
  b_33 = t;
  t = SSL_string_to_int(b_33);
  e_33 = t;
  t = term_d_31;
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_31, e_33);
  t = f_8(f_33, e_33, t);
  t = b_33;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  if(match_string(t, "-S"))
    {
      t = i_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_33;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL;
  t = term_z_11;
  j_33 = t;
  t = term_f_31;
  k_33 = t;
  t = term_g_31;
  t = f_8(j_33, k_33, t);
  t = term_h_31;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_k_31;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm l_33 = NULL,t_33 = NULL,u_33 = NULL;
  l_33 = t;
  t = SSL_string_to_int(l_33);
  t_33 = t;
  t = term_z_11;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, t_33);
  t = f_8(u_33, t_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_33);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_l_31;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm v_33 = NULL,y_33 = NULL;
  t = term_m_31;
  v_33 = t;
  t = term_z_10;
  y_33 = t;
  t = term_n_31;
  t = f_8(v_33, y_33, t);
  t = term_o_31;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, t_5, t);
      LocalPopChoice(t_31);
    }
  else
    {
      t = r_31;
      {
        ATerm u_31 = t;
        int x_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_5, x_5, y_5, t);
            LocalPopChoice(x_31);
          }
        else
          {
            t = u_31;
            t = Option_3_0(z_5, a_6, b_6, t);
          }
      }
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_34 = NULL;
  c_34 = t;
  if(match_string(t, "-o"))
    {
      t = c_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = c_34;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  d_34 = t;
  t = term_i_10;
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, d_34);
  t = f_8(e_34, d_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, d_34);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_6, g_6, h_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-i"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm h_34 = NULL,k_34 = NULL;
  h_34 = t;
  t = term_h_29;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_29, h_34);
  t = f_8(k_34, h_34, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_34);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, m_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  static ATerm x_35 (ATerm t)
  {
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
    w_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_35 = ATgetFirst((ATermList) t);
        v_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_13 = NULL,h_13 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(w_35);
          b_13 = t;
          t = v_35;
          t = x_35(t);
          h_13 = t;
          t = (ATerm) ATinsert(CheckATermList(h_13), u_35);
          o_3 = t;
          t = SSLsetAnnotations(o_3, b_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_35;
        t = j_74(t);
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_34;
    }
  else
    {
      static ATerm n_6 (ATerm t)
      {
        t = not_null(q_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          if(((q_34 != NULL) && (q_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_34;
      t = at_end_1_0(n_6, t);
    }
  return(t);
}
static ATerm y_36 (ATerm d_36, ATerm t)
{
  ATerm e_36 = NULL;
  t = SSL_explode_term(d_36);
  if(match_cons(t, sym__2))
    {
      ATerm d_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_36 = NULL,i_36 = NULL,l_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym__2))
    {
      g_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      {
        ATerm e_32 = t;
        int g_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_6 (ATerm t)
            {
              t = i_36;
              return(t);
            }
            t = g_36;
            t = at_end_1_0(q_6, t);
            LocalPopChoice(g_32);
          }
        else
          {
            t = e_32;
            t = y_36(l_36, t);
          }
      }
    }
  else
    {
      t = y_36(l_36, t);
    }
  return(t);
}
static ATerm w_7 (ATerm c_41, ATerm b_41, ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  t = c_41;
  {
    ATerm h_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL;
        t = term_h_10;
        g_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, c_41);
        t = c_8(g_37, c_41, t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATempty;
      }
  }
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, c_37);
  t = conc_0_0(t);
  b_37 = t;
  t = term_h_10;
  d_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, c_41, b_37);
  t = lookup_table_0_1(d_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(c_41, b_37, e_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, c_41, b_37);
  return(t);
}
static ATerm d_8 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL;
  i_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm k_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_32 = ATgetArgument(t, 0);
            ATerm u_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = c_8(r_36, s_36, t);
        LocalPopChoice(n_32);
      }
    else
      {
        t = k_32;
        t = (ATerm) ATempty;
      }
  }
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(j_37), q_36));
  t = lookup_table_0_1(r_36, t);
  m_37 = t;
  t = (ATerm) ATinsert(CheckATermList(j_37), q_36);
  k_37 = t;
  t = m_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(s_36, k_37, l_37, t);
  t = i_37;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,m_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
      t = term_z_10;
      t = n_0(t);
      n_38 = t;
      t = term_b_31;
      o_38 = t;
      t = term_c_31;
      p_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, n_38);
      t = d_8(o_38, p_38, n_38, t);
      _fail(t);
    }
  else
    {
      ATerm v_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_38 = ATgetFirst((ATermList) t);
          i_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_38 = ATgetFirst((ATermList) t);
          m_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_38;
      t = k_0(t);
      t = j_38;
      t = l_0(t);
      v_38 = t;
      t = (ATerm) ATinsert(CheckATermList(m_38), v_38);
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm c_39 = NULL,f_39 = NULL,g_39 = NULL;
  c_39 = t;
  t = term_v_13;
  f_39 = t;
  t = (ATerm) ATinsert(ATempty, c_39);
  g_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATempty, c_39));
  t = w_7(f_39, g_39, t);
  t = c_39;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_v_32;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, u_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_10;
  t = whoami_0_0(t);
  h_39 = t;
  t = term_i_13;
  j_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_32), h_39);
  k_39 = t;
  t = SSL_printnl(j_39, k_39);
  t = term_l_13;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm l_39 = NULL,p_39 = NULL;
  t = term_h_10;
  l_39 = t;
  t = term_y_32;
  p_39 = t;
  t = term_z_32;
  t = c_8(l_39, p_39, t);
  return(t);
}
static ATerm x_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,u_39 = NULL;
  r_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_39;
      t = g_81(t);
    }
  else
    {
      ATerm z_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_39 = ATgetFirst((ATermList) t);
          u_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_39;
      t = foldr_2_0(g_81, h_81, t);
      z_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_39, z_39);
      t = h_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      w_13 = ATgetArgument(t, 0);
      x_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(w_13, x_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_40 = NULL,p_13 = NULL,r_13 = NULL;
  t = times_0_0(t);
  r_13 = t;
  t = SSL_explode_term(r_13);
  if(match_cons(t, sym__2))
    {
      ATerm g_33 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13;
  t = foldr_2_0(v_6, x_6, t);
  c_40 = t;
  t = SSL_TicksToSeconds(c_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,i_41 = NULL;
  f_41 = t;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_41;
        if((g_41 != t))
          {
            _fail(t);
          }
        t = f_41;
        LocalPopChoice(m_33);
      }
    else
      {
        t = h_33;
        t = (ATerm) ATmakeAppl(sym__2, g_41, i_41);
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_41, i_41);
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = SSL_gtr(g_41, i_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_41, i_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  {
    ATerm p_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_41 = NULL,t_41 = NULL,v_41 = NULL;
        t = term_h_10;
        t_41 = t;
        t = term_z_11;
        v_41 = t;
        t = term_a_12;
        t = c_8(t_41, v_41, t);
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_41, term_l_13);
        t = geq_0_0(t);
        t = m_41;
        t = x_85(t);
        LocalPopChoice(s_33);
      }
    else
      {
        t = p_33;
        t = m_41;
      }
  }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,e_42 = NULL,f_42 = NULL;
  t = run_time_0_0(t);
  x_41 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  y_41 = t;
  t = term_i_13;
  e_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_33), x_41), term_s_14), y_41);
  f_42 = t;
  t = SSL_printnl(e_42, f_42);
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_33), x_41), term_s_14), y_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_31;
  g_42 = t;
  t = SSL_exit(g_42);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  n_43 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_43;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_43 = ATgetArgument(t, 0);
          {
            ATerm a_15 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(n_43);
            a_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_43);
            q_3 = t;
            t = SSLsetAnnotations(q_3, a_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_43;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_42 = NULL,t_42 = NULL;
      t = term_h_10;
      r_42 = t;
      t = term_f_34;
      t_42 = t;
      t = term_i_34;
      t = c_8(r_42, t_42, t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = fetch_1_0(a_7, t);
    }
  t = i_90(t);
  return(t);
}
static ATerm g_8 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_43);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm h_44 = NULL;
  t = table_hashtable_0_0(t);
  h_44 = t;
  {
    ATerm j_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL;
        t = h_44;
        if(match_cons(t, sym_Hashtable_1))
          {
            k_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8(d_38, k_15, t);
        LocalPopChoice(l_34);
      }
    else
      {
        t = j_34;
        {
          ATerm s_15 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = h_44;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(d_38, s_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm m_44 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  m_44 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_44);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,v_44 = NULL,y_44 = NULL,z_44 = NULL;
  r_44 = t;
  t = term_n_34;
  y_44 = t;
  t = term_o_34;
  z_44 = t;
  t = r_44;
  t = new_hashtable_0_2(y_44, z_44, t);
  s_44 = t;
  t = r_44;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(r_44, s_44, v_44, t);
  t = r_44;
  return(t);
}
static ATerm z_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm i_45 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_45);
  return(t);
}
static ATerm a_8 (ATerm t_40, ATerm t)
{
  ATerm j_45 = NULL;
  t = SSL_hashtable_destroy(t_40);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_45 = NULL;
  t = SSL_table_hashtable();
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_45 = NULL,o_45 = NULL,p_45 = NULL,r_45 = NULL;
  l_45 = t;
  t = table_hashtable_0_0(t);
  o_45 = t;
  t = lookup_table_0_1(l_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(r_45, t);
  t = o_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(l_45, p_45, t);
  t = l_45;
  return(t);
}
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  static ATerm m_46 (ATerm t)
  {
    ATerm j_46 = NULL,k_46 = NULL,l_46 = NULL;
    j_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_46;
      }
    else
      {
        ATerm f_16 = NULL,o_16 = NULL,p_16 = NULL,s_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_46 = ATgetFirst((ATermList) t);
            l_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_46);
        f_16 = t;
        t = k_46;
        t = s_73(t);
        o_16 = t;
        t = l_46;
        t = m_46(t);
        p_16 = t;
        t = (ATerm) ATinsert(CheckATermList(p_16), o_16);
        s_3 = t;
        t = SSLsetAnnotations(s_3, f_16);
      }
    return(t);
  }
  t = m_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_46 = ATgetFirst((ATermList) t);
      q_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_46 = NULL,a_47 = NULL;
        static ATerm h_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), not_null(a_47));
          return(t);
        }
        t = q_46;
        t = i_0(t);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = p_46;
        t = g_0(t);
        if(((a_47 != NULL) && (a_47 != t)))
          _fail(t);
        else
          a_47 = t;
        t = q_46;
        t = reverse_acc_2_0(g_0, h_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_10;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,u_3 = NULL;
  i_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_47);
  g_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_47);
  u_3 = t;
  t = SSLsetAnnotations(u_3, g_47);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_47), term_r_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL;
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_47 = NULL,f_47 = NULL;
      t = term_h_10;
      e_47 = t;
      t = term_y_32;
      f_47 = t;
      t = term_z_32;
      t = c_8(e_47, f_47, t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = fetch_1_0(y_7, t);
    }
  t = term_u_34;
  t = echo_0_0(t);
  t = term_b_31;
  c_47 = t;
  t = term_c_31;
  d_47 = t;
  t = term_v_34;
  t = c_8(c_47, d_47, t);
  t = reverse_acc_2_0(_id, k_8, t);
  t = map_1_0(l_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  static ATerm h_48 (ATerm t)
  {
    ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
    e_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_48 = ATgetFirst((ATermList) t);
        g_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 = NULL,d_17 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(e_48);
          a_17 = t;
          t = f_48;
          t = c_74(t);
          d_17 = t;
          t = (ATerm) ATinsert(CheckATermList(g_48), d_17);
          x_3 = t;
          t = SSLsetAnnotations(x_3, a_17);
          LocalPopChoice(x_34);
        }
      else
        {
          t = w_34;
          {
            ATerm e_18 = NULL,h_18 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(e_48);
            e_18 = t;
            t = g_48;
            t = h_48(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), f_48);
            y_3 = t;
            t = SSLsetAnnotations(y_3, e_18);
          }
        }
    }
    return(t);
  }
  t = h_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_35 = ATgetFirst((ATermList) t);
                ATerm b_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_48;
          }
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        t = (ATerm) ATinsert(ATempty, l_48);
      }
  }
  m_48 = t;
  t = term_k_10;
  n_48 = t;
  t = SSL_printnl(n_48, m_48);
  t = l_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  t = term_h_10;
  r_48 = t;
  t = term_y_32;
  s_48 = t;
  t = term_z_32;
  t = c_8(r_48, s_48, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_8 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
static ATerm c_8 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm t_48 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(l_38, t_48, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  t = term_d_35;
  v_48 = t;
  t = term_z_10;
  w_48 = t;
  t = term_f_35;
  t = f_8(v_48, w_48, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_g_35;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  t = term_d_35;
  z_48 = t;
  t = term_z_10;
  a_49 = t;
  t = term_f_35;
  t = f_8(z_48, a_49, t);
  t = term_h_35;
  x_48 = t;
  t = term_z_10;
  y_48 = t;
  t = term_i_35;
  t = f_8(x_48, y_48, t);
  t = term_j_35;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_8, q_8, s_8, t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = Option_3_0(y_8, z_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_4 = NULL;
  g_49 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_49 = ATgetFirst((ATermList) t);
      d_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_49);
  b_49 = t;
  t = c_49;
  t = r_60(t);
  e_49 = t;
  t = d_49;
  t = s_60(t);
  f_49 = t;
  t = (ATerm) ATinsert(CheckATermList(f_49), e_49);
  h_4 = t;
  t = SSLsetAnnotations(h_4, b_49);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,q_49 = NULL,r_49 = NULL,u_5 = NULL;
  l_49 = t;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_35;
        t = g_92(t);
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
      }
  }
  t = l_49;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_49 = ATgetFirst((ATermList) t);
      o_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_49);
  m_49 = t;
  t = term_y_32;
  r_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_32, n_49);
  t = f_8(r_49, n_49, t);
  t = o_49;
  {
    static ATerm b_50 (ATerm t)
    {
      ATerm q_35 = t;
      int r_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_49 = NULL;
              u_49 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_49;
              LocalPopChoice(t_35);
            }
          else
            {
              t = s_35;
              t = g_92(t);
              t = Cons_2_0(_id, b_50, t);
            }
          LocalPopChoice(r_35);
        }
      else
        {
          t = q_35;
          {
            ATerm x_49 = NULL,y_49 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_49 = ATgetFirst((ATermList) t);
                y_49 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_49), (ATerm) ATmakeAppl(sym_Undefined_1, x_49));
          }
        }
      return(t);
    }
    t = b_50(t);
  }
  q_49 = t;
  t = (ATerm) ATinsert(CheckATermList(q_49), (ATerm) ATmakeAppl(sym_Program_1, n_49));
  u_5 = t;
  t = SSLsetAnnotations(u_5, m_49);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm o_50 = NULL;
  o_50 = t;
  if(match_string(t, "--help"))
    {
      t = o_50;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_50;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_50;
        }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  t = term_f_34;
  p_50 = t;
  t = term_z_10;
  q_50 = t;
  t = term_y_35;
  t = f_8(p_50, q_50, t);
  t = term_z_35;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_a_36;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
  i_50 = t;
  t = term_b_31;
  j_50 = t;
  t = term_b_36;
  t = lookup_table_0_1(j_50, t);
  n_50 = t;
  t = term_c_31;
  k_50 = t;
  t = (ATerm) ATempty;
  l_50 = t;
  t = n_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(k_50, l_50, m_50, t);
  t = i_50;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm c_36 = t;
      int f_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_92(t);
          LocalPopChoice(f_36);
        }
      else
        {
          t = c_36;
          {
            ATerm h_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_9, f_9, g_9, t);
                LocalPopChoice(j_36);
              }
            else
              {
                t = h_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
  }
  {
    ATerm k_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_51 = NULL;
        b_51 = t;
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_18 = NULL;
              t = b_51;
              {
                ATerm p_36 = t;
                int t_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_19 = NULL,d_19 = NULL;
                    t = term_h_10;
                    c_19 = t;
                    t = term_f_34;
                    d_19 = t;
                    t = term_i_34;
                    t = c_8(c_19, d_19, t);
                    LocalPopChoice(t_36);
                  }
                else
                  {
                    t = p_36;
                    t = fetch_1_0(h_9, t);
                  }
              }
              t = b_51;
              t = default_system_usage_0_0(t);
              t = term_f_31;
              y_18 = t;
              t = SSL_exit(y_18);
              LocalPopChoice(o_36);
            }
          else
            {
              t = n_36;
              {
                ATerm l_19 = NULL,m_19 = NULL,s_19 = NULL;
                t = term_h_10;
                m_19 = t;
                t = term_d_35;
                s_19 = t;
                t = term_u_36;
                t = c_8(m_19, s_19, t);
                t = b_51;
                t = default_system_about_0_0(t);
                t = term_f_31;
                l_19 = t;
                t = SSL_exit(l_19);
              }
            }
        }
        LocalPopChoice(m_36);
      }
    else
      {
        t = k_36;
        {
          ATerm v_36 = t;
          int z_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
              static ATerm n_9 (ATerm t)
              {
                ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,w_5 = NULL;
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
                if(((g_50 != NULL) && (g_50 != t)))
                  _fail(t);
                else
                  g_50 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_51);
                w_5 = t;
                t = SSLsetAnnotations(w_5, f_51);
                return(t);
              }
              t = fetch_1_0(n_9, t);
              t = term_i_13;
              d_51 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_50)), term_a_37);
              e_51 = t;
              t = SSL_printnl(d_51, e_51);
              t = (ATerm) ATmakeAppl(sym__2, term_i_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_50)), term_a_37));
              t = default_system_usage_0_0(t);
              t = term_l_13;
              c_51 = t;
              t = SSL_exit(c_51);
              LocalPopChoice(z_36);
            }
          else
            {
              t = v_36;
            }
        }
      }
  }
  h_50 = t;
  t = term_b_31;
  t = table_destroy_0_0(t);
  t = h_50;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  t = parse_options_1_0(k_90, t);
  m_51 = t;
  t = term_f_37;
  t = table_create_0_0(t);
  t = term_f_37;
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_37, term_h_37, m_51);
  t = lookup_table_0_1(n_51, t);
  q_51 = t;
  t = term_h_37;
  o_51 = t;
  t = q_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(o_51, m_51, p_51, t);
  t = m_51;
  t = m_90(t);
  {
    ATerm n_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_90, t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = n_37;
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm w_37 = t;
        int z_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_37);
          }
        else
          {
            t = w_37;
            {
              ATerm a_38 = t;
              int b_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_38);
                }
              else
                {
                  t = a_38;
                  {
                    ATerm c_38 = t;
                    int e_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(p_9, q_9, v_9, t);
                        LocalPopChoice(e_38);
                      }
                    else
                      {
                        t = c_38;
                        {
                          ATerm f_38 = t;
                          int g_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(g_38);
                            }
                          else
                            {
                              t = f_38;
                              {
                                ATerm q_38 = t;
                                int r_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(r_38);
                                  }
                                else
                                  {
                                    t = q_38;
                                    t = Option_3_0(w_9, y_9, z_9, t);
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
static ATerm p_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  t = term_s_38;
  s_51 = t;
  t = term_z_10;
  t_51 = t;
  t = term_t_38;
  t = f_8(s_51, t_51, t);
  t = term_u_38;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_w_38;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL;
  u_51 = t;
  t = term_s_10;
  v_51 = t;
  t = term_x_38;
  w_51 = t;
  t = term_y_38;
  t = f_8(v_51, w_51, t);
  t = u_51;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(o_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
