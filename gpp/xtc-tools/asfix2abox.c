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
ATerm term_b_39;
ATerm term_a_39;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_s_38;
ATerm term_q_38;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_h_36;
ATerm term_e_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_r_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_e_34;
ATerm term_f_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_z_32;
ATerm term_g_32;
ATerm term_e_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_s_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_p_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_m_25;
ATerm term_i_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_g_23;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
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
ATerm term_p_20;
ATerm term_o_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_v_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_a_13;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_t_10;
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
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_t_10);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
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
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_m_13, term_c_15);
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
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_o_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_v_15, term_w_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_o_16, term_s_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
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
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_l_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_s_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_f_18, term_g_18);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_18, term_n_18, term_o_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_w_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_b_19, term_k_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_q_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_c_20, term_g_20);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_20, term_j_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_o_20, term_p_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_z_20, term_a_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_p_21, term_q_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_21, term_y_21, term_a_22);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_22, term_d_22, term_h_22);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_22, term_k_22, term_m_22);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_22, term_w_22, term_x_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_m_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_a_27);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym__2, term_w_25, term_x_25);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_h_29, term_s_28);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_k_29);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_p_31, term_z_10);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_d_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_k_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_d_31, term_e_31);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_e_35, term_z_10);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_z_10);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_z_10);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(sym__3, term_d_31, term_e_31, (ATerm) ATempty);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_e_35);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_q_38, term_z_10);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_y_38);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_conservative_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm c_7 (ATerm s_14, ATerm r_14, ATerm t);
static ATerm v_7 (ATerm t_14, ATerm u_14, ATerm t);
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t);
static ATerm c_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_98 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm n_84 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm e_7 (ATerm b_34, ATerm c_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm f_7 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm g_7 (ATerm b_79 (ATerm), ATerm h_184, ATerm d_18, ATerm t);
static ATerm l_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t);
static ATerm h_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t);
static ATerm j_7 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm l_7 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm m_7 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm y_1 (ATerm t);
static ATerm n_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm o_7 (ATerm y_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm s_7 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm v_17 (ATerm k_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_7 (ATerm z_17, ATerm t);
static ATerm q_7 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_19 (ATerm i_18, ATerm t);
static ATerm a_20 (ATerm m_18, ATerm p_18, ATerm q_18, ATerm t);
static ATerm b_20 (ATerm e_19, ATerm f_19, ATerm g_19, ATerm t);
static ATerm r_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm h_26 (ATerm b_25, ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_101 (ATerm), ATerm t);
static ATerm t_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm u_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm w_7 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_101 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_8 (ATerm q_50, ATerm r_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
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
static ATerm d_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_36 (ATerm c_36, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm x_7 (ATerm w_50, ATerm v_50, ATerm t);
static ATerm e_8 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm y_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_98 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t);
static ATerm h_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm a_8 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm b_8 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_8 (ATerm g_50, ATerm h_50, ATerm t);
static ATerm d_8 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
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
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
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
        ATerm e_0 = NULL;
        t = g_1;
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
        t = (ATerm) ATmakeAppl(sym__2, h_1, e_0);
        t = v_7(h_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
        LocalPopChoice(a_10);
      }
    else
      {
        t = h_3;
        {
          ATerm b_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 = NULL;
              t = g_1;
              t = q_0(t);
              k_1 = t;
              {
                ATerm e_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm m_1 = NULL;
                    m_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = m_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = m_1;
                          }
                        else
                          {
                            t = m_1;
                            if((h_1 != t))
                              {
                                _fail(t);
                              }
                            t = m_1;
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
              t = (ATerm) ATmakeAppl(sym__2, h_1, k_1);
              t = v_7(h_1, k_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
              LocalPopChoice(d_10);
            }
          else
            {
              t = b_10;
              t = g_1;
              t = q_0(t);
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
      t = d_8(z_1, a_2, t);
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
      ATerm t_1 = NULL,w_1 = NULL;
      t = term_i_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 = NULL,d_2 = NULL;
            t = term_h_10;
            c_2 = t;
            t = term_i_10;
            d_2 = t;
            t = term_j_10;
            t = d_8(c_2, d_2, t);
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            t = term_k_10;
          }
      }
      t_1 = t;
      t = term_n_10;
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, t_1);
      t = v_7(w_1, t_1, t);
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
      t = term_t_10;
      h_2 = t;
      t = term_u_10;
      t = d_8(g_2, h_2, t);
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
  t = term_c_11;
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_c_11);
  t = u_7(m_2, n_2, t);
  o_2 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_2 = NULL;
        t = (ATerm) ATinsert(ATempty, term_h_11);
        q_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_2, (ATerm) ATinsert(ATempty, term_h_11));
        t = s_7(o_2, q_2, t);
        t = new_file_0_0(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
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
static ATerm c_7 (ATerm s_14, ATerm r_14, ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(s_14, r_14);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = get_errno_0_0(t);
      t = term_z_10;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, s_14, r_14);
      t = v_7(s_14, r_14, t);
      t = SSL_remove(s_14);
    }
  return(t);
}
static ATerm v_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm z_3 = NULL,c_4 = NULL;
  z_3 = t;
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
        t = z_3;
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_k_10;
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_4, term_k_10);
        t = v_7(c_4, k_2, t);
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
              ATerm w_2 = NULL;
              t = z_3;
              t = u_0(t);
              w_2 = t;
              {
                ATerm p_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_2 = NULL;
                    x_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_2;
                      }
                    else
                      {
                        t = x_2;
                        if((c_4 != t))
                          {
                            _fail(t);
                          }
                        t = x_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_11;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, c_4, w_2);
              t = c_7(c_4, w_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_2);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = z_3;
              t = u_0(t);
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
static ATerm c_0 (ATerm t)
{
  t = term_q_11;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_q_11;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_0 (ATerm t)
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
        ATerm s_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL,m_4 = NULL,i_0 = NULL;
            m_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm w_11 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_4);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, i_4);
            i_0 = t;
            t = SSLsetAnnotations(i_0, k_4);
            LocalPopChoice(u_11);
            t = xtc_transform_file_2_0(c_0, f_0, t);
          }
        else
          {
            t = s_11;
            t = xtc_transform_term_2_0(k_0, n_0, t);
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
  t = if_verbose2_1_0(v_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_98 (ATerm), ATerm t)
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
        t = d_8(t_4, u_4, t);
        s_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_4, term_b_12);
        t = geq_0_0(t);
        t = q_4;
        t = s_98(t);
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
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,c_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,s_0 = NULL;
  x_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_12), term_d_12), x_4);
  f_5 = t;
  t = SSL_concat_strings(f_5);
  e_5 = t;
  t = (ATerm) ATinsert(ATempty, term_h_11);
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_5, (ATerm) ATinsert(ATempty, term_h_11));
  t = s_7(e_5, c_5, t);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
  k_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      ATerm i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_5);
  g_5 = t;
  t = SSL_modification_time(w_4);
  h_5 = t;
  t = SSL_modification_time(x_4);
  i_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
  s_0 = t;
  t = SSLsetAnnotations(s_0, g_5);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
  z_4 = t;
  t = SSL_explode_term(z_4);
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_12 = ATgetArgument(t, 1);
        if(((ATgetType(p_12) == AT_LIST) && !(ATisEmpty(p_12))))
          {
            y_4 = ATgetFirst((ATermList) p_12);
            {
              ATerm q_12 = (ATerm) ATgetNext((ATermList) p_12);
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
ATerm at_suffix_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm g_6 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_84(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        {
          ATerm c_6 = NULL,e_6 = NULL,f_6 = NULL,d_3 = NULL,g_3 = NULL,x_0 = NULL;
          c_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_6 = ATgetFirst((ATermList) t);
              f_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_6);
          d_3 = t;
          t = f_6;
          t = g_6(t);
          g_3 = t;
          t = (ATerm) ATinsert(CheckATermList(g_3), e_6);
          x_0 = t;
          t = SSLsetAnnotations(x_0, d_3);
        }
      }
    return(t);
  }
  t = g_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_3 = NULL,n_3 = NULL,w_3 = NULL;
      n_3 = t;
      t = term_a_13;
      w_3 = t;
      t = SSL_explode_string(w_3);
      m_3 = t;
      t = SSL_explode_string(n_3);
      {
        static ATerm b_1 (ATerm t)
        {
          if((m_3 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(b_1, t);
      }
      t = n_3;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm b_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 = NULL,b_4 = NULL,e_4 = NULL;
            b_4 = t;
            t = term_h_13;
            e_4 = t;
            t = SSL_explode_string(e_4);
            a_4 = t;
            t = SSL_explode_string(b_4);
            {
              static ATerm c_1 (ATerm t)
              {
                if((a_4 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
            }
            t = b_4;
            LocalPopChoice(e_13);
          }
        else
          {
            t = b_13;
            {
              ATerm t_6 = NULL,u_6 = NULL,x_6 = NULL,k_7 = NULL;
              t_6 = t;
              t = term_j_13;
              x_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_k_13);
              k_7 = t;
              t = SSL_printnl(x_6, k_7);
              t = term_m_13;
              u_6 = t;
              t = SSL_exit(u_6);
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_k_13);
            }
          }
      }
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm p_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_8 = NULL,f_8 = NULL;
      t = term_h_10;
      c_8 = t;
      t = term_w_13;
      f_8 = t;
      t = term_x_13;
      t = d_8(c_8, f_8, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = p_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm j_8 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  j_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_8), term_w_13);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_a_14;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(i_1, t);
  return(t);
}
static ATerm e_7 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm b_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(b_34, c_34);
      LocalPopChoice(d_14);
    }
  else
    {
      t = b_14;
      t = SSL_subtr(b_34, c_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm k_8 = NULL,n_8 = NULL,p_8 = NULL,q_8 = NULL;
  t = term_z_11;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,u_8 = NULL;
        t = term_h_10;
        s_8 = t;
        t = term_z_11;
        u_8 = t;
        t = term_a_12;
        t = d_8(s_8, u_8, t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = term_m_13;
      }
  }
  n_8 = t;
  t = term_m_13;
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, term_m_13);
  t = e_7(n_8, q_8, t);
  p_8 = t;
  t = SSL_int_to_string(p_8);
  k_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_8), term_z_11);
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
      t = s_7(c_9, e_9, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm f_7 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm f_9 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_9);
  return(t);
}
static ATerm g_7 (ATerm b_79 (ATerm), ATerm h_184, ATerm d_18, ATerm t)
{
  ATerm l_9 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_184, term_i_14);
  t = r_7(t);
  l_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_9, d_18);
  t = b_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_14 = ATgetArgument(t, 0);
      if(match_cons(j_14, sym_Stream_1))
        {
          t_9 = ATgetArgument(j_14, 0);
        }
      else
        _fail(t);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_7(t_9, u_9, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  n_9 = t;
  t = xtc_new_file_0_0(t);
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
  t = g_7(l_1, m_9, n_9, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
  t = xtc_transform_file_2_0(t_100, u_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm h_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,v_10 = NULL,x_10 = NULL;
  r_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_10 = ATgetArgument(t, 0);
      {
        ATerm p_4 = NULL,a_5 = NULL;
        t = SSL_int_to_string(s_10);
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_14), p_4), term_k_14);
        a_5 = t;
        t = SSL_concat_strings(a_5);
      }
    }
  else
    {
      ATerm r_5 = NULL,s_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_10 = ATgetArgument(t, 0);
          v_10 = ATgetArgument(t, 1);
          x_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_10);
      r_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_10), term_v_14), r_5), term_p_14), s_10);
      s_5 = t;
      t = SSL_concat_strings(s_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm a_11 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = e_84(t);
    if(((a_11 != NULL) && (a_11 != t)))
      _fail(t);
    else
      a_11 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(a_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  d_11 = t;
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
              if((d_11 != ATgetArgument(t, 1)))
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_22), term_t_22), term_i_22), term_b_22), term_u_21), term_m_21), term_f_21), term_t_20), term_l_20), term_h_20), term_u_19), term_l_19), term_y_18), term_u_18), term_k_18), term_b_18), term_n_17), term_i_17), term_e_17), term_y_16), term_t_16), term_l_16), term_f_16), term_y_15), term_q_15), term_k_15), term_g_15), term_d_15);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, d_11);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm i_11 = NULL,v_11 = NULL;
  i_11 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            v_11 = ATgetArgument(t, 1);
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
              ATerm m_6 = NULL,p_6 = NULL,q_6 = NULL;
              t = v_11;
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
              m_6 = t;
              t = term_j_13;
              p_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, m_6), term_g_23);
              q_6 = t;
              t = SSL_printnl(p_6, q_6);
              t = (ATerm) ATmakeAppl(sym__2, term_j_13, (ATerm) ATinsert(ATinsert(ATempty, m_6), term_g_23));
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
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t)
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
        t = q_77(t);
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
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL;
  j_12 = t;
  t = z_78(t);
  k_12 = t;
  t = term_j_13;
  n_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_12), k_12);
  o_12 = t;
  t = SSL_printnl(n_12, o_12);
  t = j_12;
  return(t);
}
static ATerm j_7 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL;
    v_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), v_12);
    t = d_8(not_null(r_12), v_12, t);
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
    return(t);
  }
  if(((r_12 != NULL) && (r_12 != t)))
    _fail(t);
  else
    r_12 = t;
  t = lookup_table_0_1(r_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_7(u_12, t);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_13 = NULL,f_13 = NULL,g_13 = NULL;
        t = term_h_10;
        f_13 = t;
        t = term_z_11;
        g_13 = t;
        t = term_a_12;
        t = d_8(f_13, g_13, t);
        d_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_13, term_y_21);
        t = geq_0_0(t);
        t = z_12;
        t = v_98(t);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = z_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm l_13 = NULL;
  l_13 = t;
  {
    ATerm q_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL,s_13 = NULL,t_13 = NULL;
        t = term_h_10;
        s_13 = t;
        t = term_z_11;
        t_13 = t;
        t = term_a_12;
        t = d_8(s_13, t_13, t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_13, term_l_17);
        t = geq_0_0(t);
        t = l_13;
        t = u_98(t);
        LocalPopChoice(s_23);
      }
    else
      {
        t = q_23;
        t = l_13;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm c_14 = NULL;
  c_14 = t;
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_14 = NULL,h_14 = NULL,o_14 = NULL;
        t = term_h_10;
        h_14 = t;
        t = term_z_11;
        o_14 = t;
        t = term_a_12;
        t = d_8(h_14, o_14, t);
        g_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_14, term_o_15);
        t = geq_0_0(t);
        t = c_14;
        t = w_98(t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = c_14;
      }
  }
  return(t);
}
static ATerm l_7 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = h_88(t);
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm q_14 = NULL;
      q_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, q_14);
      t = g_88(t);
      return(t);
    }
    t = fetch_1_0(r_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm m_7 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm x_15 (ATerm t)
  {
    ATerm n_15 = NULL,r_15 = NULL,u_15 = NULL;
    n_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_15 = ATgetFirst((ATermList) t);
            u_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_15;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = l_7(d_88, v_1, r_15, u_15, t);
              }
              t = x_15(t);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              {
                ATerm z_6 = NULL,d_7 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(n_15);
                z_6 = t;
                t = u_15;
                t = x_15(t);
                d_7 = t;
                t = (ATerm) ATinsert(CheckATermList(d_7), r_15);
                a_1 = t;
                t = SSLsetAnnotations(a_1, z_6);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = x_15(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      if((n_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,g_16 = NULL;
  c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm x_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_24 = ATgetArgument(t, 0);
            ATerm g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = d_8(i_46, j_46, t);
        LocalPopChoice(z_23);
      }
    else
      {
        t = x_23;
        t = (ATerm) ATempty;
      }
  }
  e_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_16, k_46);
  t = m_7(y_1, e_16, k_46, t);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, d_16);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(j_46, d_16, g_16, t);
  t = c_16;
  return(t);
}
static ATerm o_7 (ATerm y_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm q_16 = NULL,x_16 = NULL;
    if(match_cons(t, sym__2))
      {
        q_16 = ATgetArgument(t, 0);
        x_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, q_16, x_16);
    t = y_98(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm s_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm v_17 (ATerm k_17, ATerm t)
{
  t = SSL_fclose(k_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  r_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_17 = ATgetArgument(t, 0);
      {
        ATerm h_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_17);
            LocalPopChoice(m_24);
          }
        else
          {
            t = h_24;
            t = v_17(r_17, t);
          }
      }
    }
  else
    {
      t = v_17(r_17, t);
    }
  return(t);
}
static ATerm p_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm q_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_fopen(c_52, d_52);
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_17 = NULL;
  t = SSL_stdin_stream();
  x_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  t = SSL_stdout_stream();
  y_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_18 = NULL;
  t = SSL_stderr_stream();
  a_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_18);
  return(t);
}
static ATerm z_19 (ATerm i_18, ATerm t)
{
  ATerm j_18 = NULL;
  t = SSL_explode_term(i_18);
  if(match_cons(t, sym__2))
    {
      ATerm n_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_24 = ATgetArgument(t, 1);
        if(((ATgetType(o_24) == AT_LIST) && !(ATisEmpty(o_24))))
          {
            j_18 = ATgetFirst((ATermList) o_24);
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
  t = j_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_20 (ATerm m_18, ATerm p_18, ATerm q_18, ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,a_19 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(q_18);
  t_18 = t;
  t = m_18;
  if(match_cons(t, sym_Path_1))
    {
      a_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_19, p_18);
  d_1 = t;
  t = SSLsetAnnotations(d_1, t_18);
  if(match_cons(t, sym__2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(r_18, s_18, t);
  return(t);
}
static ATerm b_20 (ATerm e_19, ATerm f_19, ATerm g_19, ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,m_19 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(g_19);
  j_19 = t;
  t = SSL_is_string(e_19);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, f_19);
  e_1 = t;
  t = SSLsetAnnotations(e_1, j_19);
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(h_19, i_19, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_19(v_19, t);
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
                  t = a_20(w_19, x_19, v_19, t);
                  LocalPopChoice(t_24);
                }
              else
                {
                  t = s_24;
                  t = b_20(w_19, x_19, v_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_19(v_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,n_20 = NULL;
  n_20 = t;
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_20, term_w_24);
        t = r_7(t);
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
        {
          ATerm j_9 = NULL,k_9 = NULL;
          t = term_x_24;
          k_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_24, n_20);
          t = u_7(k_9, n_20, t);
          j_9 = t;
          t = SSL_perror(j_9);
          _fail(t);
        }
      }
  }
  e_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_7(f_20, t);
  d_20 = t;
  t = e_20;
  t = fclose_0_0(t);
  t = d_20;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_20 = NULL,r_20 = NULL;
      q_20 = t;
      t = (ATerm) ATinsert(ATempty, term_i_25);
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_20, (ATerm) ATinsert(ATempty, term_i_25));
      t = s_7(q_20, r_20, t);
      LocalPopChoice(e_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_25 = t;
            if((PushChoice() == 0))
              {
                ATerm s_20 = NULL,v_20 = NULL;
                s_20 = t;
                t = (ATerm) ATinsert(ATempty, term_h_11);
                v_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_20, (ATerm) ATinsert(ATempty, term_h_11));
                t = s_7(s_20, v_20, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_25;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
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
  t = term_m_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = term_o_25;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_21 = NULL,e_22 = NULL,f_22 = NULL;
  z_21 = t;
  t = term_j_13;
  e_22 = t;
  t = (ATerm) ATinsert(ATempty, term_q_25);
  f_22 = t;
  t = SSL_printnl(e_22, f_22);
  t = z_21;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm g_22 = NULL,l_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__3))
    {
      g_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
      n_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = n_7(g_22, l_22, n_22, t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  o_22 = t;
  t = term_j_13;
  p_22 = t;
  t = (ATerm) ATinsert(ATempty, term_r_25);
  q_22 = t;
  t = SSL_printnl(p_22, q_22);
  t = o_22;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,v_22 = NULL;
  r_22 = t;
  t = term_j_13;
  s_22 = t;
  t = (ATerm) ATinsert(ATempty, term_q_25);
  v_22 = t;
  t = SSL_printnl(s_22, v_22);
  t = r_22;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,o_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL;
  w_20 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm v_25 = t;
    if((PushChoice() == 0))
      {
        ATerm v_21 = NULL,x_21 = NULL;
        t = term_w_25;
        v_21 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_20);
        x_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Imported_1, w_20));
        t = d_8(v_21, x_21, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_25;
      }
  }
  y_20 = t;
  t = term_w_25;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, term_x_25, (ATerm) ATinsert(ATempty, w_20));
  t = lookup_table_0_1(k_21, t);
  t_21 = t;
  t = term_x_25;
  o_21 = t;
  t = (ATerm) ATinsert(ATempty, w_20);
  r_21 = t;
  t = t_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(o_21, r_21, s_21, t);
  t = y_20;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(r_2, t);
  x_20 = t;
  t = term_w_25;
  j_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, x_20);
  t = o_7(s_2, j_21, x_20, t);
  t = if_verbose6_1_0(t_2, t);
  t = term_w_25;
  b_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, (ATerm)ATmakeAppl(sym_Imported_1, w_20), (ATerm) ATempty);
  t = lookup_table_0_1(b_21, t);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_20);
  c_21 = t;
  t = (ATerm) ATempty;
  d_21 = t;
  t = i_21;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(c_21, d_21, e_21, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_25, (ATerm)ATmakeAppl(sym_Imported_1, w_20), (ATerm) ATempty);
  t = if_verbose4_1_0(u_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,r_23 = NULL;
  o_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_23;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_23 = ATgetFirst((ATermList) t);
          r_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_25 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_9 = NULL,x_9 = NULL,c_10 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(o_23);
            s_9 = t;
            t = p_23;
            t = k_92(t);
            x_9 = t;
            t = r_23;
            t = filter_1_0(k_92, t);
            c_10 = t;
            t = (ATerm) ATinsert(CheckATermList(c_10), x_9);
            q_1 = t;
            t = SSLsetAnnotations(q_1, s_9);
            LocalPopChoice(c_26);
          }
        else
          {
            t = y_25;
            t = r_23;
            t = filter_1_0(k_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t)
{
  static ATerm y_23 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        t = y_23(t);
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        t = x_81(t);
      }
    return(t);
  }
  t = y_23(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_24 = NULL,b_24 = NULL;
      t = term_h_10;
      a_24 = t;
      t = term_m_26;
      b_24 = t;
      t = term_n_26;
      t = d_8(a_24, b_24, t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = f_26;
      {
        ATerm o_26 = t;
        int t_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_24 = NULL;
            t = term_y_26;
            c_24 = t;
            t = SSL_getenv(c_24);
            LocalPopChoice(t_26);
          }
        else
          {
            t = o_26;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_z_26;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  t = term_w_25;
  k_24 = t;
  t = term_a_27;
  l_24 = t;
  t = term_b_27;
  t = d_8(k_24, l_24, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_27;
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
  ATerm e_24 = NULL;
  t = if_verbose5_1_0(v_2, t);
  e_24 = t;
  {
    ATerm f_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL,i_24 = NULL;
        t = term_w_25;
        f_24 = t;
        t = term_x_25;
        i_24 = t;
        t = term_i_27;
        t = d_8(f_24, i_24, t);
        LocalPopChoice(h_27);
      }
    else
      {
        t = f_27;
        {
          ATerm j_24 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_24 = t;
          t = repeat_2_0(z_2, _id, t);
          t = j_24;
        }
      }
  }
  t = e_24;
  t = if_verbose5_1_0(a_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = debug_1_0(e_3, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_j_27;
  return(t);
}
static ATerm h_26 (ATerm b_25, ATerm t)
{
  ATerm f_25 = NULL,n_25 = NULL,p_25 = NULL;
  t = term_w_25;
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, b_25);
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Tool_1, b_25));
  t = d_8(n_25, p_25, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_27 = ATgetFirst((ATermList) t);
      if(match_cons(k_27, sym__2))
        {
          ATerm o_27 = ATgetArgument(k_27, 0);
          f_25 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm n_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_25;
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
  ATerm v_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
      t = if_verbose5_1_0(c_3, t);
      t = xtc_load_0_0(t);
      u_25 = t;
      if(match_cons(t, sym__2))
        {
          s_25 = ATgetArgument(t, 0);
          t_25 = ATgetArgument(t, 1);
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
                t = term_w_25;
                a_26 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, s_25);
                b_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Tool_1, s_25));
                t = d_8(a_26, b_26, t);
                {
                  static ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((t_25 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_25 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(f_3, t);
                }
                t = not_null(z_25);
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = h_26(u_25, t);
              }
          }
        }
      else
        {
          t = h_26(u_25, t);
        }
      t = if_verbose5_1_0(i_3, t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = v_27;
      {
        ATerm g_26 = NULL,w_10 = NULL,b_11 = NULL;
        g_26 = t;
        t = term_j_13;
        w_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_28), g_26), term_d_28);
        b_11 = t;
        t = SSL_printnl(w_10, b_11);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_28), g_26), term_d_28);
        t = if_verbose5_1_0(k_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL;
  k_26 = t;
  t = u_101(t);
  t = xtc_find_0_0(t);
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_26, k_26);
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm l_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, j_26, k_26);
      t = h_7(j_26, k_26, t);
      t = term_g_28;
      l_26 = t;
      t = SSL_exit(l_26);
      return(t);
    }
    t = fork_and_wait_1_0(p_3, t);
  }
  t = k_26;
  return(t);
}
static ATerm t_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  s_26 = t;
  t = q_94(t);
  p_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_26, j_35, h_35);
  t = e_8(p_26, j_35, h_35, t);
  {
    ATerm l_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_27 = NULL;
        t = term_s_28;
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_26, term_s_28);
        t = d_8(p_26, c_27, t);
        {
          ATerm t_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_28;
            }
        }
        LocalPopChoice(n_28);
      }
    else
      {
        t = l_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_26 = ATgetFirst((ATermList) t);
      r_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_26, term_s_28, (ATerm) ATinsert(CheckATermList(r_26), (ATerm) ATinsert(CheckATermList(q_26), j_35)));
  t = lookup_table_0_1(p_26, t);
  x_26 = t;
  t = term_s_28;
  u_26 = t;
  t = (ATerm) ATinsert(CheckATermList(r_26), (ATerm) ATinsert(CheckATermList(q_26), j_35));
  v_26 = t;
  t = x_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(u_26, v_26, w_26, t);
  t = s_26;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm g_27 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_27 = NULL,g_11 = NULL;
      l_27 = t;
      t = term_b_29;
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_27, term_b_29);
      t = u_7(l_27, g_11, t);
      g_27 = t;
      t = SSL_mkstemp(g_27);
      LocalPopChoice(a_29);
    }
  else
    {
      t = z_28;
      {
        ATerm m_27 = NULL;
        t = term_c_29;
        m_27 = t;
        t = SSL_perror(m_27);
        _fail(t);
      }
    }
  return(t);
}
static ATerm u_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
  t = P__tmpdir_0_0(t);
  t_27 = t;
  t = term_j_29;
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_27, term_j_29);
  t = u_7(t_27, u_27, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_10;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, term_z_10);
  t = t_7(r_3, r_27, s_27, t);
  t = SSL_close(q_27);
  t = r_27;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm y_27 = NULL,c_28 = NULL;
      t = w_27;
      t = xtc_new_file_0_0(t);
      y_27 = t;
      t = t_0(t);
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_28, (ATerm) ATinsert(ATinsert(ATempty, y_27), term_i_10));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_27);
    }
  else
    {
      ATerm e_28 = NULL,h_28 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_27;
      t = xtc_new_file_0_0(t);
      e_28 = t;
      t = t_0(t);
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_28), term_i_10), x_27), term_k_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_28);
    }
  return(t);
}
static ATerm w_7 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  j_28 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = d_8(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_29 = ATgetFirst((ATermList) t);
            i_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_29);
        {
          ATerm k_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, i_28);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              k_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(r_45, i_28, k_28, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, i_28);
        }
      }
    else
      {
        t = n_29;
        {
          ATerm m_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_8(r_45, m_28, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = j_28;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  r_28 = t;
  t = n_94(t);
  q_28 = t;
  {
    ATerm q_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_28 = NULL;
        t = term_s_28;
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_28, term_s_28);
        t = d_8(q_28, x_28, t);
        {
          ATerm t_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_29;
            }
        }
        LocalPopChoice(s_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_28 = ATgetFirst((ATermList) t);
      o_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_28, term_s_28, o_28);
  t = lookup_table_0_1(q_28, t);
  w_28 = t;
  t = term_s_28;
  u_28 = t;
  t = w_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(u_28, o_28, v_28, t);
  t = p_28;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm y_28 = NULL;
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_28, y_28);
      t = w_7(q_28, y_28, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = r_28;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_98(t);
      t = g_98(t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      t = g_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,i_29 = NULL,l_29 = NULL,m_29 = NULL;
  e_29 = t;
  t = m_94(t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, term_s_28);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_29 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_29 = ATgetArgument(t, 0);
            ATerm a_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_28;
        r_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_29, term_s_28);
        t = d_8(d_29, r_29, t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATempty;
      }
  }
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_29, term_s_28, (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATempty));
  t = lookup_table_0_1(d_29, t);
  m_29 = t;
  t = term_s_28;
  g_29 = t;
  t = (ATerm) ATinsert(CheckATermList(f_29), (ATerm) ATempty);
  i_29 = t;
  t = m_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(g_29, i_29, l_29, t);
  t = e_29;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm i_30 = NULL;
  i_30 = t;
  {
    ATerm c_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(i_30);
        LocalPopChoice(f_30);
      }
    else
      {
        t = c_30;
        t = i_30;
      }
  }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm y_29 = NULL;
  static ATerm d_4 (ATerm t)
  {
    ATerm b_30 = NULL;
    b_30 = t;
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_30 = NULL,e_30 = NULL;
          t = term_h_29;
          d_30 = t;
          t = term_s_28;
          e_30 = t;
          t = term_j_30;
          t = d_8(d_30, e_30, t);
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((y_29 != NULL) && (y_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          y_29 = ATgetFirst((ATermList) t);
        {
          ATerm k_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = y_29;
    t = map_1_0(f_4, t);
    t = b_30;
    t = end_scope_1_0(g_4, t);
    return(t);
  }
  t = begin_scope_1_0(v_3, t);
  t = restore_always_2_0(g_101, d_4, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_30 = NULL,s_30 = NULL,u_30 = NULL;
      t = term_h_10;
      s_30 = t;
      t = term_k_29;
      u_30 = t;
      t = term_n_30;
      t = d_8(s_30, u_30, t);
      r_30 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_30);
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = term_n_10;
    }
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL,i_31 = NULL;
        i_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            h_31 = ATgetArgument(t, 0);
            {
              ATerm t_11 = NULL,s_1 = NULL;
              t = SSLgetAnnotations(i_31);
              t_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_31);
              s_1 = t;
              t = SSLsetAnnotations(s_1, t_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = i_31;
          }
        LocalPopChoice(p_30);
        t = xtc_transform_file_2_0(n_4, o_4, t);
      }
    else
      {
        t = o_30;
        t = xtc_transform_term_2_0(r_4, v_4, t);
      }
  }
  {
    ATerm q_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_31 = NULL,q_31 = NULL;
        q_31 = t;
        if(match_cons(t, sym_FILE_1))
          {
            o_31 = ATgetArgument(t, 0);
            {
              ATerm m_12 = NULL,u_1 = NULL;
              t = SSLgetAnnotations(q_31);
              m_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, o_31);
              u_1 = t;
              t = SSLsetAnnotations(u_1, m_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = q_31;
          }
        LocalPopChoice(t_30);
        t = xtc_transform_file_2_0(b_5, d_5, t);
      }
    else
      {
        t = q_30;
        t = xtc_transform_term_2_0(j_5, l_5, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_30), term_y_30), term_x_30), term_w_30);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_v_30;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_30), term_y_30), term_x_30), term_w_30);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_z_10;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_z_10;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(l_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,z_31 = NULL,b_32 = NULL;
  u_31 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  v_31 = t;
  t = term_j_13;
  z_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_31), v_31), term_b_31);
  b_32 = t;
  t = SSL_printnl(z_31, b_32);
  t = term_m_13;
  w_31 = t;
  t = SSL_exit(w_31);
  t = u_31;
  return(t);
}
static ATerm g_8 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm c_32 = NULL,f_32 = NULL;
  t = term_h_10;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, q_50, r_50);
  t = lookup_table_0_1(c_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(q_50, r_50, f_32, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, q_50, r_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_32 = NULL,o_32 = NULL,s_32 = NULL;
      t = term_z_10;
      t = h_0(t);
      n_32 = t;
      t = term_d_31;
      o_32 = t;
      t = term_e_31;
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_31, term_e_31, n_32);
      t = e_8(o_32, s_32, n_32, t);
      _fail(t);
    }
  else
    {
      ATerm w_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_32 = ATgetFirst((ATermList) t);
          m_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_32;
      t = d_0(t);
      t = term_z_10;
      t = g_0(t);
      w_32 = t;
      t = (ATerm) ATinsert(CheckATermList(m_32), w_32);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  if(match_string(t, "-k"))
    {
      t = y_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_32;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,e_33 = NULL;
  a_33 = t;
  t = SSL_string_to_int(a_33);
  b_33 = t;
  t = term_f_31;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, b_33);
  t = g_8(e_33, b_33, t);
  t = a_33;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm g_33 = NULL;
  g_33 = t;
  if(match_string(t, "-S"))
    {
      t = g_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_33;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  t = term_z_11;
  i_33 = t;
  t = term_j_31;
  j_33 = t;
  t = term_k_31;
  t = g_8(i_33, j_33, t);
  t = term_l_31;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = term_m_31;
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
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL;
  p_33 = t;
  t = SSL_string_to_int(p_33);
  q_33 = t;
  t = term_z_11;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, q_33);
  t = g_8(r_33, q_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_33);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_n_31;
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
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_p_31;
  s_33 = t;
  t = term_z_10;
  t_33 = t;
  t = term_r_31;
  t = g_8(s_33, t_33, t);
  t = term_s_31;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, t_5, t);
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm a_32 = t;
        int d_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_5, x_5, y_5, t);
            LocalPopChoice(d_32);
          }
        else
          {
            t = a_32;
            t = Option_3_0(z_5, a_6, b_6, t);
          }
      }
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm x_33 = NULL;
  x_33 = t;
  if(match_string(t, "-o"))
    {
      t = x_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_33;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm a_34 = NULL,d_34 = NULL;
  a_34 = t;
  t = term_i_10;
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_10, a_34);
  t = g_8(d_34, a_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_34);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_6, h_6, i_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  if(match_string(t, "-i"))
    {
      t = f_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_34;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  t = term_k_29;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, g_34);
  t = g_8(h_34, g_34, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_34);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_g_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  static ATerm w_35 (ATerm t)
  {
    ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
    v_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_35 = ATgetFirst((ATermList) t);
        u_35 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_13 = NULL,i_13 = NULL,o_3 = NULL;
          t = SSLgetAnnotations(v_35);
          c_13 = t;
          t = u_35;
          t = w_35(t);
          i_13 = t;
          t = (ATerm) ATinsert(CheckATermList(i_13), t_35);
          o_3 = t;
          t = SSLsetAnnotations(o_3, c_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_35;
        t = j_84(t);
      }
    return(t);
  }
  t = w_35(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,p_34 = NULL;
  l_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_34;
    }
  else
    {
      static ATerm n_6 (ATerm t)
      {
        t = not_null(p_34);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_34 = ATgetFirst((ATermList) t);
          if(((p_34 != NULL) && (p_34 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_34;
      t = at_end_1_0(n_6, t);
    }
  return(t);
}
static ATerm m_36 (ATerm c_36, ATerm t)
{
  ATerm d_36 = NULL;
  t = SSL_explode_term(c_36);
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      d_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_36;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,j_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__2))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      {
        ATerm i_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_6 (ATerm t)
            {
              t = g_36;
              return(t);
            }
            t = f_36;
            t = at_end_1_0(o_6, t);
            LocalPopChoice(j_32);
          }
        else
          {
            t = i_32;
            t = m_36(j_36, t);
          }
      }
    }
  else
    {
      t = m_36(j_36, t);
    }
  return(t);
}
static ATerm x_7 (ATerm w_50, ATerm v_50, ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  t = w_50;
  {
    ATerm k_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL;
        t = term_h_10;
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_10, w_50);
        t = d_8(u_36, w_50, t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = k_32;
        t = (ATerm) ATempty;
      }
  }
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, q_36);
  t = conc_0_0(t);
  p_36 = t;
  t = term_h_10;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, w_50, p_36);
  t = lookup_table_0_1(r_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(w_50, p_36, s_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_10, w_50, p_36);
  return(t);
}
static ATerm e_8 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = d_8(l_45, m_45, t);
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = (ATerm) ATempty;
      }
  }
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(x_36), k_45));
  t = lookup_table_0_1(l_45, t);
  a_37 = t;
  t = (ATerm) ATinsert(CheckATermList(x_36), k_45);
  y_36 = t;
  t = a_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(m_45, y_36, z_36, t);
  t = w_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,n_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_37 = NULL,v_37 = NULL,y_37 = NULL;
      t = term_z_10;
      t = p_0(t);
      o_37 = t;
      t = term_d_31;
      v_37 = t;
      t = term_e_31;
      y_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_31, term_e_31, o_37);
      t = e_8(v_37, y_37, o_37, t);
      _fail(t);
    }
  else
    {
      ATerm c_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_37 = ATgetFirst((ATermList) t);
          j_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_37;
      t = m_0(t);
      t = k_37;
      t = o_0(t);
      c_38 = t;
      t = (ATerm) ATinsert(CheckATermList(n_37), c_38);
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
  ATerm d_38 = NULL,e_38 = NULL,i_38 = NULL;
  d_38 = t;
  t = term_w_13;
  e_38 = t;
  t = (ATerm) ATinsert(ATempty, d_38);
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, (ATerm) ATinsert(ATempty, d_38));
  t = x_7(e_38, i_38, t);
  t = d_38;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, v_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,n_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_10;
  t = whoami_0_0(t);
  j_38 = t;
  t = term_j_13;
  l_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_33), j_38);
  n_38 = t;
  t = SSL_printnl(l_38, n_38);
  t = term_m_13;
  k_38 = t;
  t = SSL_exit(k_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_38 = NULL,r_38 = NULL;
  t = term_h_10;
  o_38 = t;
  t = term_d_33;
  r_38 = t;
  t = term_f_33;
  t = d_8(o_38, r_38, t);
  return(t);
}
static ATerm y_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm h_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(k_33);
    }
  else
    {
      t = h_33;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
  t_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_38;
      t = g_91(t);
    }
  else
    {
      ATerm z_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_38 = ATgetFirst((ATermList) t);
          v_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_38;
      t = foldr_2_0(g_91, h_91, t);
      z_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_38, z_38);
      t = h_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_j_31;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_7(y_13, z_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_39 = NULL,r_13 = NULL,u_13 = NULL;
  t = times_0_0(t);
  u_13 = t;
  t = SSL_explode_term(u_13);
  if(match_cons(t, sym__2))
    {
      ATerm l_33 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13;
  t = foldr_2_0(w_6, y_6, t);
  c_39 = t;
  t = SSL_TicksToSeconds(c_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_39 = NULL,u_39 = NULL,v_39 = NULL;
  r_39 = t;
  if(match_cons(t, sym__2))
    {
      u_39 = ATgetArgument(t, 0);
      v_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_39;
        if((u_39 != t))
          {
            _fail(t);
          }
        t = r_39;
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
        {
          ATerm o_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_39, v_39);
              LocalPopChoice(u_33);
            }
          else
            {
              t = o_33;
              t = SSL_gtr(u_39, v_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_39, v_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm b_40 = NULL;
  b_40 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL,g_40 = NULL,h_40 = NULL;
        t = term_h_10;
        g_40 = t;
        t = term_z_11;
        h_40 = t;
        t = term_a_12;
        t = d_8(g_40, h_40, t);
        d_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_40, term_m_13);
        t = geq_0_0(t);
        t = b_40;
        t = r_98(t);
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = b_40;
      }
  }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,p_40 = NULL,q_40 = NULL;
  t = run_time_0_0(t);
  m_40 = t;
  t = term_z_10;
  t = whoami_0_0(t);
  n_40 = t;
  t = term_j_13;
  p_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_34), m_40), term_p_14), n_40);
  q_40 = t;
  t = SSL_printnl(p_40, q_40);
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_34), m_40), term_p_14), n_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_31;
  r_40 = t;
  t = SSL_exit(r_40);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm n_41 = NULL,r_41 = NULL;
  r_41 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_41;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_41 = ATgetArgument(t, 0);
          {
            ATerm b_15 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(r_41);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_41);
            q_3 = t;
            t = SSLsetAnnotations(q_3, b_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_41;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_40 = NULL,a_41 = NULL;
      t = term_h_10;
      v_40 = t;
      t = term_k_34;
      a_41 = t;
      t = term_n_34;
      t = d_8(v_40, a_41, t);
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = fetch_1_0(b_7, t);
    }
  t = b_103(t);
  return(t);
}
static ATerm h_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm t_41 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_41);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm i_42 = NULL;
  t = table_hashtable_0_0(t);
  i_42 = t;
  {
    ATerm o_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL;
        t = i_42;
        if(match_cons(t, sym_Hashtable_1))
          {
            m_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_8(x_46, m_15, t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = o_34;
        {
          ATerm t_15 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = i_42;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_8(x_46, t_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm n_42 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_42);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,s_42 = NULL,t_42 = NULL;
  o_42 = t;
  t = term_r_34;
  s_42 = t;
  t = term_s_34;
  t_42 = t;
  t = o_42;
  t = new_hashtable_0_2(s_42, t_42, t);
  p_42 = t;
  t = o_42;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(o_42, p_42, q_42, t);
  t = o_42;
  return(t);
}
static ATerm a_8 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_42);
  return(t);
}
static ATerm b_8 (ATerm n_50, ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_hashtable_destroy(n_50);
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  t = SSL_table_hashtable();
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  c_43 = t;
  t = table_hashtable_0_0(t);
  d_43 = t;
  t = lookup_table_0_1(c_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(f_43, t);
  t = d_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(c_43, e_43, t);
  t = c_43;
  return(t);
}
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  static ATerm u_43 (ATerm t)
  {
    ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
    r_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_43;
      }
    else
      {
        ATerm j_16 = NULL,p_16 = NULL,r_16 = NULL,s_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_43 = ATgetFirst((ATermList) t);
            t_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_43);
        j_16 = t;
        t = s_43;
        t = s_83(t);
        p_16 = t;
        t = t_43;
        t = u_43(t);
        r_16 = t;
        t = (ATerm) ATinsert(CheckATermList(r_16), p_16);
        s_3 = t;
        t = SSLsetAnnotations(s_3, j_16);
      }
    return(t);
  }
  t = u_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_43 = ATgetFirst((ATermList) t);
      y_43 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_44 = NULL,d_44 = NULL;
        static ATerm i_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(c_44)), not_null(d_44));
          return(t);
        }
        t = y_43;
        t = l_0(t);
        if(((c_44 != NULL) && (c_44 != t)))
          _fail(t);
        else
          c_44 = t;
        t = x_43;
        t = j_0(t);
        if(((d_44 != NULL) && (d_44 != t)))
          _fail(t);
        else
          d_44 = t;
        t = y_43;
        t = reverse_acc_2_0(j_0, i_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_10;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,u_3 = NULL;
  l_44 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_44);
  j_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_44);
  u_3 = t;
  t = SSLsetAnnotations(u_3, j_44);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_44), term_t_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL;
  ATerm u_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_44 = NULL,i_44 = NULL;
      t = term_h_10;
      h_44 = t;
      t = term_d_33;
      i_44 = t;
      t = term_f_33;
      t = d_8(h_44, i_44, t);
      LocalPopChoice(v_34);
    }
  else
    {
      t = u_34;
      t = fetch_1_0(z_7, t);
    }
  t = term_w_34;
  t = echo_0_0(t);
  t = term_d_31;
  f_44 = t;
  t = term_e_31;
  g_44 = t;
  t = term_x_34;
  t = d_8(f_44, g_44, t);
  t = reverse_acc_2_0(_id, l_8, t);
  t = map_1_0(m_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  static ATerm v_45 (ATerm t)
  {
    ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
    s_45 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_45 = ATgetFirst((ATermList) t);
        u_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_34 = t;
      int z_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 = NULL,d_17 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(s_45);
          a_17 = t;
          t = t_45;
          t = c_84(t);
          d_17 = t;
          t = (ATerm) ATinsert(CheckATermList(u_45), d_17);
          x_3 = t;
          t = SSLsetAnnotations(x_3, a_17);
          LocalPopChoice(z_34);
        }
      else
        {
          t = y_34;
          {
            ATerm e_18 = NULL,h_18 = NULL,y_3 = NULL;
            t = SSLgetAnnotations(s_45);
            e_18 = t;
            t = u_45;
            t = v_45(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), t_45);
            y_3 = t;
            t = SSLsetAnnotations(y_3, e_18);
          }
        }
    }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL;
  z_45 = t;
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_45;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_35 = ATgetFirst((ATermList) t);
                ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_45;
          }
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATinsert(ATempty, z_45);
      }
  }
  a_46 = t;
  t = term_k_10;
  b_46 = t;
  t = SSL_printnl(b_46, a_46);
  t = z_45;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  t = term_h_10;
  f_46 = t;
  t = term_d_33;
  g_46 = t;
  t = term_f_33;
  t = d_8(f_46, g_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_8 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
static ATerm d_8 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm h_46 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_8(f_47, h_46, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  t = term_e_35;
  o_46 = t;
  t = term_z_10;
  p_46 = t;
  t = term_f_35;
  t = g_8(o_46, p_46, t);
  return(t);
}
static ATerm t_8 (ATerm t)
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
  ATerm q_46 = NULL,v_46 = NULL,w_46 = NULL,b_47 = NULL;
  t = term_e_35;
  w_46 = t;
  t = term_z_10;
  b_47 = t;
  t = term_f_35;
  t = g_8(w_46, b_47, t);
  t = term_i_35;
  q_46 = t;
  t = term_z_10;
  v_46 = t;
  t = term_k_35;
  t = g_8(q_46, v_46, t);
  t = term_l_35;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, r_8, t_8, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = Option_3_0(y_8, z_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,h_4 = NULL;
  j_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_47 = ATgetFirst((ATermList) t);
      g_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_47);
  c_47 = t;
  t = d_47;
  t = l_70(t);
  h_47 = t;
  t = g_47;
  t = m_70(t);
  i_47 = t;
  t = (ATerm) ATinsert(CheckATermList(i_47), h_47);
  h_4 = t;
  t = SSLsetAnnotations(h_4, c_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,t_47 = NULL,u_47 = NULL,u_5 = NULL;
  o_47 = t;
  {
    ATerm p_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_35;
        t = z_104(t);
        LocalPopChoice(q_35);
      }
    else
      {
        t = p_35;
      }
  }
  t = o_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_47 = ATgetFirst((ATermList) t);
      r_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_47);
  p_47 = t;
  t = term_d_33;
  u_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_33, q_47);
  t = g_8(u_47, q_47, t);
  t = r_47;
  {
    static ATerm e_48 (ATerm t)
    {
      ATerm s_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_35 = t;
          int z_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_47 = NULL;
              x_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_47;
              LocalPopChoice(z_35);
            }
          else
            {
              t = y_35;
              t = z_104(t);
              t = Cons_2_0(_id, e_48, t);
            }
          LocalPopChoice(x_35);
        }
      else
        {
          t = s_35;
          {
            ATerm a_48 = NULL,b_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_48 = ATgetFirst((ATermList) t);
                b_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_48), (ATerm) ATmakeAppl(sym_Undefined_1, a_48));
          }
        }
      return(t);
    }
    t = e_48(t);
  }
  t_47 = t;
  t = (ATerm) ATinsert(CheckATermList(t_47), (ATerm) ATmakeAppl(sym_Program_1, q_47));
  u_5 = t;
  t = SSLsetAnnotations(u_5, p_47);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm r_48 = NULL;
  r_48 = t;
  if(match_string(t, "--help"))
    {
      t = r_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_48;
        }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL;
  t = term_k_34;
  s_48 = t;
  t = term_z_10;
  t_48 = t;
  t = term_a_36;
  t = g_8(s_48, t_48, t);
  t = term_b_36;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_e_36;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL;
  l_48 = t;
  t = term_d_31;
  m_48 = t;
  t = term_h_36;
  t = lookup_table_0_1(m_48, t);
  q_48 = t;
  t = term_e_31;
  n_48 = t;
  t = (ATerm) ATempty;
  o_48 = t;
  t = q_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(n_48, o_48, p_48, t);
  t = l_48;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm i_36 = t;
      int k_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          LocalPopChoice(k_36);
        }
      else
        {
          t = i_36;
          {
            ATerm l_36 = t;
            int n_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_9, g_9, h_9, t);
                LocalPopChoice(n_36);
              }
            else
              {
                t = l_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
  }
  {
    ATerm o_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_49 = NULL;
        e_49 = t;
        {
          ATerm v_36 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_19 = NULL;
              t = e_49;
              {
                ATerm c_37 = t;
                int d_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_19 = NULL,n_19 = NULL;
                    t = term_h_10;
                    d_19 = t;
                    t = term_k_34;
                    n_19 = t;
                    t = term_n_34;
                    t = d_8(d_19, n_19, t);
                    LocalPopChoice(d_37);
                  }
                else
                  {
                    t = c_37;
                    t = fetch_1_0(i_9, t);
                  }
              }
              t = e_49;
              t = default_system_usage_0_0(t);
              t = term_j_31;
              c_19 = t;
              t = SSL_exit(c_19);
              LocalPopChoice(b_37);
            }
          else
            {
              t = v_36;
              {
                ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
                t = term_h_10;
                s_19 = t;
                t = term_e_35;
                t_19 = t;
                t = term_e_37;
                t = d_8(s_19, t_19, t);
                t = e_49;
                t = default_system_about_0_0(t);
                t = term_j_31;
                r_19 = t;
                t = SSL_exit(r_19);
              }
            }
        }
        LocalPopChoice(t_36);
      }
    else
      {
        t = o_36;
        {
          ATerm f_37 = t;
          int g_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
              static ATerm o_9 (ATerm t)
              {
                ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,w_5 = NULL;
                k_49 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    j_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_49);
                i_49 = t;
                t = j_49;
                if(((j_48 != NULL) && (j_48 != t)))
                  _fail(t);
                else
                  j_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, j_49);
                w_5 = t;
                t = SSLsetAnnotations(w_5, i_49);
                return(t);
              }
              t = fetch_1_0(o_9, t);
              t = term_j_13;
              g_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_48)), term_h_37);
              h_49 = t;
              t = SSL_printnl(g_49, h_49);
              t = (ATerm) ATmakeAppl(sym__2, term_j_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_48)), term_h_37));
              t = default_system_usage_0_0(t);
              t = term_m_13;
              f_49 = t;
              t = SSL_exit(f_49);
              LocalPopChoice(g_37);
            }
          else
            {
              t = f_37;
            }
        }
      }
  }
  k_48 = t;
  t = term_d_31;
  t = table_destroy_0_0(t);
  t = k_48;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  t = parse_options_1_0(d_103, t);
  p_49 = t;
  t = term_l_37;
  t = table_create_0_0(t);
  t = term_l_37;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_37, term_m_37, p_49);
  t = lookup_table_0_1(q_49, t);
  t_49 = t;
  t = term_m_37;
  r_49 = t;
  t = t_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(r_49, p_49, s_49, t);
  t = p_49;
  t = f_103(t);
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_103, t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
          ATerm r_37 = t;
          int s_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_37);
            }
          else
            {
              t = r_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm t_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(u_37);
    }
  else
    {
      t = t_37;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm z_37 = t;
              int a_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(a_38);
                }
              else
                {
                  t = z_37;
                  {
                    ATerm b_38 = t;
                    int f_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(q_9, r_9, v_9, t);
                        LocalPopChoice(f_38);
                      }
                    else
                      {
                        t = b_38;
                        {
                          ATerm g_38 = t;
                          int h_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(h_38);
                            }
                          else
                            {
                              t = g_38;
                              {
                                ATerm m_38 = t;
                                int p_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(p_38);
                                  }
                                else
                                  {
                                    t = m_38;
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
static ATerm q_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  t = term_q_38;
  v_49 = t;
  t = term_z_10;
  w_49 = t;
  t = term_s_38;
  t = g_8(v_49, w_49, t);
  t = term_w_38;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_x_38;
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
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  t = term_t_10;
  y_49 = t;
  t = term_y_38;
  z_49 = t;
  t = term_a_39;
  t = g_8(y_49, z_49, t);
  t = x_49;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(p_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
