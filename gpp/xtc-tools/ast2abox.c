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
ATerm term_d_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_v_36;
ATerm term_t_36;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_i_34;
ATerm term_g_34;
ATerm term_w_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_a_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_m_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_z_29;
ATerm term_v_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_z_26;
ATerm term_s_26;
ATerm term_q_26;
ATerm term_n_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_u_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_b_22;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_t_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_l_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_x_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_a_12, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_z_10, term_p_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_w_13, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_i_14, term_j_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_r_14, term_s_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_y_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_15, term_h_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_r_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_x_15, term_y_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_s_16, term_t_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_s_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_z_17, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_i_18, term_o_18);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_18, term_a_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_t_19, term_y_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_o_20, term_p_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_x_20);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_21, term_e_21, term_g_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_l_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_a_25);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_i_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_m_24, term_n_24);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_z_26);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_h_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_t_9);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_k_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_h_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, term_g_30, term_h_30);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_t_9);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_h_33, term_t_9);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym__2, term_h_32, term_t_9);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_a_33);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_t_36, term_t_9);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_o_27);
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm v_6 (ATerm n_14, ATerm m_14, ATerm t);
static ATerm n_7 (ATerm o_14, ATerm p_14, ATerm t);
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
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm x_6 (ATerm o_17, ATerm p_17, ATerm t);
static ATerm y_6 (ATerm c_69 (ATerm), ATerm e_170, ATerm y_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t);
static ATerm z_6 (ATerm g_14, ATerm h_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t);
static ATerm b_7 (ATerm q_40, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm b_86 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm a_86 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm d_7 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t);
static ATerm e_7 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm f_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t);
static ATerm g_7 (ATerm e_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t);
static ATerm k_7 (ATerm z_41, ATerm a_42, ATerm t);
static ATerm x_16 (ATerm r_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_7 (ATerm u_17, ATerm t);
static ATerm i_7 (ATerm i_42, ATerm j_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_18 (ATerm h_17, ATerm t);
static ATerm y_18 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm t);
static ATerm z_18 (ATerm g_18, ATerm h_18, ATerm k_18, ATerm t);
static ATerm j_7 (ATerm t);
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
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm l_25 (ATerm u_23, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm l_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm m_7 (ATerm l_32, ATerm m_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm v_7 (ATerm k_38, ATerm l_38, ATerm t);
static ATerm o_7 (ATerm w_36, ATerm x_36, ATerm t);
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm m_88 (ATerm), ATerm t);
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
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_7 (ATerm w_40, ATerm x_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_33 (ATerm k_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_7 (ATerm c_41, ATerm b_41, ATerm t);
static ATerm w_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm q_7 (ATerm q_33, ATerm r_33, ATerm t);
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm g_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm need_help_1_0 (ATerm i_90 (ATerm), ATerm t);
static ATerm z_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t);
static ATerm a_8 (ATerm m_40, ATerm n_40, ATerm t);
ATerm lookup_table_0_1 (ATerm d_38, ATerm t);
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm s_7 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm t_7 (ATerm t_40, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_92 (ATerm), ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm f_92 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
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
    int d_9 = stack_ptr;
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
        t = n_7(j_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
        LocalPopChoice(d_9);
      }
    else
      {
        t = g_3;
        {
          ATerm e_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_1 = NULL;
              t = i_1;
              t = o_0(t);
              g_1 = t;
              {
                ATerm g_9 = t;
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
                    t = g_9;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, j_1, g_1);
              t = n_7(j_1, g_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              LocalPopChoice(f_9);
            }
          else
            {
              t = e_9;
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL,g_2 = NULL;
      t = term_k_9;
      c_2 = t;
      t = term_l_9;
      g_2 = t;
      t = term_m_9;
      t = v_7(c_2, g_2, t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      t = term_n_9;
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
      t = term_l_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL,y_1 = NULL;
            t = term_k_9;
            x_1 = t;
            t = term_l_9;
            y_1 = t;
            t = term_m_9;
            t = v_7(x_1, y_1, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = term_n_9;
          }
      }
      q_1 = t;
      t = term_q_9;
      w_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, q_1);
      t = n_7(w_1, q_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm r_9 = ATgetArgument(t, 0);
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
  t = term_t_9;
  t = new_0_0(t);
  j_2 = t;
  t = term_u_9;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_u_9);
  t = m_7(j_2, k_2, t);
  m_2 = t;
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_9);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATempty, term_x_9));
        t = k_7(m_2, c_3, t);
        t = new_file_0_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
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
static ATerm v_6 (ATerm n_14, ATerm m_14, ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(n_14, m_14);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      t = get_errno_0_0(t);
      t = term_t_9;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = n_7(n_14, m_14, t);
      t = SSL_remove(n_14);
    }
  return(t);
}
static ATerm n_7 (ATerm o_14, ATerm p_14, ATerm t)
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
    ATerm b_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = z_3;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_n_9;
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, term_n_9);
        t = n_7(a_4, i_2, t);
        t = SSL_remove(a_4);
        t = term_n_9;
        LocalPopChoice(e_10);
      }
    else
      {
        t = b_10;
        {
          ATerm h_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 = NULL;
              t = z_3;
              t = t_0(t);
              r_2 = t;
              {
                ATerm j_10 = t;
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
                    t = j_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_4, r_2);
              t = v_6(a_4, r_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
              LocalPopChoice(i_10);
            }
          else
            {
              t = h_10;
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
  t = term_k_10;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_k_10;
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
  t = term_l_10;
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
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_4 = NULL,l_4 = NULL,q_0 = NULL;
            l_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm s_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_4);
            k_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
            q_0 = t;
            t = SSLsetAnnotations(q_0, k_4);
            LocalPopChoice(r_10);
            t = xtc_transform_file_2_0(f_0, j_0, t);
          }
        else
          {
            t = q_10;
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
ATerm if_verbose2_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        t = term_k_9;
        q_4 = t;
        t = term_x_10;
        r_4 = t;
        t = term_y_10;
        t = v_7(q_4, r_4, t);
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, term_z_10);
        t = geq_0_0(t);
        t = n_4;
        t = y_85(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
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
  t = term_a_11;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm t_4 = NULL,v_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,g_5 = NULL,l_5 = NULL,m_5 = NULL,v_0 = NULL;
  v_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), term_b_11), v_4);
  b_5 = t;
  t = SSL_concat_strings(b_5);
  a_5 = t;
  t = (ATerm) ATinsert(ATempty, term_x_9);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATempty, term_x_9));
  t = k_7(a_5, z_4, t);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, v_4);
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      ATerm e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  e_5 = t;
  t = SSL_modification_time(t_4);
  g_5 = t;
  t = SSL_modification_time(v_4);
  l_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_5, l_5);
  v_0 = t;
  t = SSLsetAnnotations(v_0, e_5);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, v_4);
  y_4 = t;
  t = SSL_explode_term(y_4);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            x_4 = ATgetFirst((ATermList) g_11);
            {
              ATerm h_11 = (ATerm) ATgetNext((ATermList) g_11);
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
ATerm at_suffix_1_0 (ATerm n_74 (ATerm), ATerm t)
{
  static ATerm k_6 (ATerm t)
  {
    ATerm j_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_74(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = j_11;
        {
          ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL,y_2 = NULL,d_3 = NULL,x_0 = NULL;
          b_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_6 = ATgetFirst((ATermList) t);
              d_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_6);
          y_2 = t;
          t = d_6;
          t = k_6(t);
          d_3 = t;
          t = (ATerm) ATinsert(CheckATermList(d_3), c_6);
          x_0 = t;
          t = SSLsetAnnotations(x_0, y_2);
        }
      }
    return(t);
  }
  t = k_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 = NULL,q_3 = NULL,s_3 = NULL;
      q_3 = t;
      t = term_o_11;
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
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm p_11 = t;
        int r_11 = stack_ptr;
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
            LocalPopChoice(r_11);
          }
        else
          {
            t = p_11;
            {
              ATerm r_7 = NULL,x_7 = NULL,b_8 = NULL,d_8 = NULL;
              r_7 = t;
              t = term_w_11;
              b_8 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, r_7), term_z_11);
              d_8 = t;
              t = SSL_printnl(b_8, d_8);
              t = term_a_12;
              x_7 = t;
              t = SSL_exit(x_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, r_7), term_z_11);
            }
          }
      }
      {
        ATerm e_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = e_12;
            t = parse_to_temp_file_0_0(t);
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_8 = NULL,g_8 = NULL;
      t = term_k_9;
      e_8 = t;
      t = term_s_12;
      g_8 = t;
      t = term_t_12;
      t = v_7(e_8, g_8, t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm i_8 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  i_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_8), term_s_12);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_u_12;
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
  ATerm l_8 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm n_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_x_9);
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_8, (ATerm) ATinsert(ATempty, term_x_9));
      t = k_7(l_8, n_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm x_6 (ATerm o_17, ATerm p_17, ATerm t)
{
  ATerm p_8 = NULL;
  t = SSL_write_term_to_stream_baf(o_17, p_17);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_8);
  return(t);
}
static ATerm y_6 (ATerm c_69 (ATerm), ATerm e_170, ATerm y_17, ATerm t)
{
  ATerm q_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_170, term_v_12);
  t = j_7(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, y_17);
  t = c_69(t);
  t = fclose_0_0(t);
  t = y_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(match_cons(w_12, sym_Stream_1))
        {
          t_8 = ATgetArgument(w_12, 0);
        }
      else
        _fail(t);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_6(t_8, u_8, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_87 (ATerm), ATerm a_88 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  s_8 = t;
  t = xtc_new_file_0_0(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  t = y_6(m_1, r_8, s_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
  t = xtc_transform_file_2_0(z_87, a_88, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm z_6 (ATerm g_14, ATerm h_14, ATerm t)
{
  t = SSL_execvp(g_14, h_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,f_10 = NULL,g_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_10 = ATgetArgument(t, 0);
      {
        ATerm u_4 = NULL,w_4 = NULL;
        t = SSL_int_to_string(d_10);
        u_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), u_4), term_x_12);
        w_4 = t;
        t = SSL_concat_strings(w_4);
      }
    }
  else
    {
      ATerm r_5 = NULL,s_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_10 = ATgetArgument(t, 0);
          f_10 = ATgetArgument(t, 1);
          g_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_10);
      r_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_10), term_c_13), r_5), term_a_13), d_10);
      s_5 = t;
      t = SSL_concat_strings(s_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_74 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = e_74(t);
    if(((m_10 != NULL) && (m_10 != t)))
      _fail(t);
    else
      m_10 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(m_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  n_10 = t;
  {
    ATerm d_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm h_13 = ATgetArgument(t, 0);
              if((n_10 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm i_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_21), term_i_21), term_y_20), term_t_20), term_i_20), term_z_19), term_p_19), term_j_19), term_f_19), term_p_18), term_e_18), term_t_17), term_g_17), term_w_16), term_p_16), term_k_16), term_e_16), term_z_15), term_s_15), term_k_15), term_d_15), term_z_14), term_u_14), term_k_14), term_e_14), term_y_13), term_r_13), term_n_13);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm t_10 = NULL,i_11 = NULL;
  t_10 = t;
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm s_21 = ATgetArgument(t, 0);
            i_11 = ATgetArgument(t, 1);
            {
              ATerm u_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_21);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_6 = NULL,j_6 = NULL,o_6 = NULL;
              t = i_11;
              {
                ATerm a_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              h_6 = t;
              t = term_w_11;
              j_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, h_6), term_b_22);
              o_6 = t;
              t = SSL_printnl(j_6, o_6);
              t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, h_6), term_b_22));
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = t_10;
            }
        }
      }
    else
      {
        t = q_21;
        t = t_10;
      }
  }
  t = t_10;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_67 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL;
  t_11 = t;
  t = fork_0_0(t);
  q_11 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = t_11;
        t = r_67(t);
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = SSL_waitpid(q_11);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            if(((ATgetType(e_22) != AT_INT) || (ATgetInt((ATermInt) e_22) != 0)))
              _fail(t);
            {
              ATerm f_22 = ATgetArgument(t, 1);
            }
            {
              ATerm g_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_11;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,x_11 = NULL,y_11 = NULL,b_12 = NULL;
  v_11 = t;
  t = a_69(t);
  x_11 = t;
  t = term_w_11;
  y_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_11), x_11);
  b_12 = t;
  t = SSL_printnl(y_11, b_12);
  t = v_11;
  return(t);
}
static ATerm b_7 (ATerm q_40, ATerm t)
{
  t = SSL_hashtable_keys(q_40);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL;
    f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), f_12);
    t = v_7(not_null(c_12), f_12, t);
    g_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_12, g_12);
    return(t);
  }
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = lookup_table_0_1(c_12, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_7(d_12, t);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL;
        t = term_k_9;
        q_12 = t;
        t = term_x_10;
        r_12 = t;
        t = term_y_10;
        t = v_7(q_12, r_12, t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_12, term_o_20);
        t = geq_0_0(t);
        t = k_12;
        t = b_86(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = k_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm y_12 = NULL;
  y_12 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = NULL,e_13 = NULL,f_13 = NULL;
        t = term_k_9;
        e_13 = t;
        t = term_x_10;
        f_13 = t;
        t = term_y_10;
        t = v_7(e_13, f_13, t);
        b_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_13, term_b_16);
        t = geq_0_0(t);
        t = y_12;
        t = a_86(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = y_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  ATerm k_13 = NULL;
  k_13 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_13 = NULL,t_13 = NULL,v_13 = NULL;
        t = term_k_9;
        t_13 = t;
        t = term_x_10;
        v_13 = t;
        t = term_y_10;
        t = v_7(t_13, v_13, t);
        q_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_13, term_a_14);
        t = geq_0_0(t);
        t = k_13;
        t = c_86(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = k_13;
      }
  }
  return(t);
}
static ATerm d_7 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm c_25, ATerm b_25, ATerm t)
{
  t = h_78(t);
  {
    static ATerm s_1 (ATerm t)
    {
      ATerm b_14 = NULL;
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, b_14);
      t = g_78(t);
      return(t);
    }
    t = fetch_1_0(s_1, t);
  }
  t = b_25;
  return(t);
}
static ATerm e_7 (ATerm d_78 (ATerm), ATerm y_24, ATerm x_24, ATerm t)
{
  static ATerm l_15 (ATerm t)
  {
    ATerm e_15 = NULL,f_15 = NULL,i_15 = NULL;
    e_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_15;
              {
                static ATerm u_1 (ATerm t)
                {
                  t = x_24;
                  return(t);
                }
                t = d_7(d_78, u_1, f_15, i_15, t);
              }
              t = l_15(t);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm u_6 = NULL,c_7 = NULL,b_1 = NULL;
                t = SSLgetAnnotations(e_15);
                u_6 = t;
                t = i_15;
                t = l_15(t);
                c_7 = t;
                t = (ATerm) ATinsert(CheckATermList(c_7), f_15);
                b_1 = t;
                t = SSLsetAnnotations(b_1, u_6);
              }
            }
        }
      }
    return(t);
  }
  t = y_24;
  t = l_15(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      if((d_16 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm o_37, ATerm p_37, ATerm q_37, ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,t_15 = NULL,u_15 = NULL;
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
  {
    ATerm p_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_37, p_37);
        t = v_7(o_37, p_37, t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATempty;
      }
  }
  t_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_15, q_37);
  t = e_7(z_1, t_15, q_37, t);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_37, p_37, q_15);
  t = lookup_table_0_1(o_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(p_37, q_15, u_15, t);
  t = p_15;
  return(t);
}
static ATerm g_7 (ATerm e_86 (ATerm), ATerm y_37, ATerm x_37, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm f_16 = NULL,g_16 = NULL;
    if(match_cons(t, sym__2))
      {
        f_16 = ATgetArgument(t, 0);
        g_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, y_37, f_16, g_16);
    t = e_86(t);
    return(t);
  }
  t = x_37;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm k_7 (ATerm z_41, ATerm a_42, ATerm t)
{
  t = SSL_access(z_41, a_42);
  return(t);
}
static ATerm x_16 (ATerm r_16, ATerm t)
{
  t = SSL_fclose(r_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_16 = ATgetArgument(t, 0);
      {
        ATerm w_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_16);
            LocalPopChoice(y_22);
          }
        else
          {
            t = w_22;
            t = x_16(v_16, t);
          }
      }
    }
  else
    {
      t = x_16(v_16, t);
    }
  return(t);
}
static ATerm h_7 (ATerm u_17, ATerm t)
{
  t = SSL_read_term_from_stream(u_17);
  return(t);
}
static ATerm i_7 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm y_16 = NULL;
  t = SSL_fopen(i_42, j_42);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_16 = NULL;
  t = SSL_stdin_stream();
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  t = SSL_stdout_stream();
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_17 = NULL;
  t = SSL_stderr_stream();
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_17);
  return(t);
}
static ATerm x_18 (ATerm h_17, ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_explode_term(h_17);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            i_17 = ATgetFirst((ATermList) d_23);
            {
              ATerm e_23 = (ATerm) ATgetNext((ATermList) d_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_18 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,v_17 = NULL,c_18 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(n_17);
  v_17 = t;
  t = l_17;
  if(match_cons(t, sym_Path_1))
    {
      c_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_18, m_17);
  d_1 = t;
  t = SSLsetAnnotations(d_1, v_17);
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(q_17, r_17, t);
  return(t);
}
static ATerm z_18 (ATerm g_18, ATerm h_18, ATerm k_18, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,q_18 = NULL,f_1 = NULL;
  t = SSLgetAnnotations(k_18);
  n_18 = t;
  t = SSL_is_string(g_18);
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_18, h_18);
  f_1 = t;
  t = SSLsetAnnotations(f_1, n_18);
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(l_18, m_18, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_18(s_18, t);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            {
              ATerm h_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_18(t_18, u_18, s_18, t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = h_23;
                  t = z_18(t_18, u_18, s_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_18(s_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL,n_19 = NULL;
  n_19 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_19, term_r_23);
        t = j_7(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm b_9 = NULL,c_9 = NULL;
          t = term_s_23;
          c_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_23, n_19);
          t = m_7(c_9, n_19, t);
          b_9 = t;
          t = SSL_perror(b_9);
          _fail(t);
        }
      }
  }
  c_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_7(d_19, t);
  b_19 = t;
  t = c_19;
  t = fclose_0_0(t);
  t = b_19;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_t_23;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_19 = NULL,s_19 = NULL;
      r_19 = t;
      t = (ATerm) ATinsert(ATempty, term_y_23);
      s_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_19, (ATerm) ATinsert(ATempty, term_y_23));
      t = k_7(r_19, s_19, t);
      LocalPopChoice(x_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_23;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_24 = t;
            if((PushChoice() == 0))
              {
                ATerm u_19 = NULL,v_19 = NULL;
                u_19 = t;
                t = (ATerm) ATinsert(ATempty, term_x_9);
                v_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_19, (ATerm) ATinsert(ATempty, term_x_9));
                t = k_7(u_19, v_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_24;
              }
            t = debug_1_0(d_2, t);
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
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
  t = term_c_24;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,d_21 = NULL;
  a_21 = t;
  t = term_w_11;
  b_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_24);
  d_21 = t;
  t = SSL_printnl(b_21, d_21);
  t = a_21;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm f_21 = NULL,h_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__3))
    {
      f_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      m_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_7(f_21, h_21, m_21, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,t_21 = NULL;
  n_21 = t;
  t = term_w_11;
  o_21 = t;
  t = (ATerm) ATinsert(ATempty, term_f_24);
  t_21 = t;
  t = SSL_printnl(o_21, t_21);
  t = n_21;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
  v_21 = t;
  t = term_w_11;
  w_21 = t;
  t = (ATerm) ATinsert(ATempty, term_e_24);
  x_21 = t;
  t = SSL_printnl(w_21, x_21);
  t = v_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,f_20 = NULL,g_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  w_19 = t;
  t = if_verbose5_1_0(f_2, t);
  {
    ATerm i_24 = t;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,z_20 = NULL;
        t = term_m_24;
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, w_19);
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_m_24, (ATerm) ATmakeAppl(sym_Imported_1, w_19));
        t = v_7(w_20, z_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_24;
      }
  }
  a_20 = t;
  t = term_m_24;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_24, term_n_24, (ATerm) ATinsert(ATempty, w_19));
  t = lookup_table_0_1(l_20, t);
  s_20 = t;
  t = term_n_24;
  m_20 = t;
  t = (ATerm) ATinsert(ATempty, w_19);
  q_20 = t;
  t = s_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(m_20, q_20, r_20, t);
  t = a_20;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_2, t);
  x_19 = t;
  t = term_m_24;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, x_19);
  t = g_7(p_2, k_20, x_19, t);
  t = if_verbose6_1_0(q_2, t);
  t = term_m_24;
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_24, (ATerm)ATmakeAppl(sym_Imported_1, w_19), (ATerm) ATempty);
  t = lookup_table_0_1(b_20, t);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, w_19);
  c_20 = t;
  t = (ATerm) ATempty;
  f_20 = t;
  t = j_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(c_20, f_20, g_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_24, (ATerm)ATmakeAppl(sym_Imported_1, w_19), (ATerm) ATempty);
  t = if_verbose4_1_0(t_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_82 (ATerm), ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_22 = ATgetFirst((ATermList) t);
          s_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_9 = NULL,s_9 = NULL,y_9 = NULL,r_1 = NULL;
            t = SSLgetAnnotations(q_22);
            h_9 = t;
            t = r_22;
            t = k_82(t);
            s_9 = t;
            t = s_22;
            t = filter_1_0(k_82, t);
            y_9 = t;
            t = (ATerm) ATinsert(CheckATermList(y_9), s_9);
            r_1 = t;
            t = SSLsetAnnotations(r_1, h_9);
            LocalPopChoice(q_24);
          }
        else
          {
            t = o_24;
            t = s_22;
            t = filter_1_0(k_82, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_71 (ATerm), ATerm y_71 (ATerm), ATerm t)
{
  static ATerm x_22 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_71(t);
        t = x_22(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = y_71(t);
      }
    return(t);
  }
  t = x_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22 = NULL,a_23 = NULL;
      t = term_k_9;
      z_22 = t;
      t = term_a_25;
      a_23 = t;
      t = term_d_25;
      t = v_7(z_22, a_23, t);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_23 = NULL;
            t = term_g_25;
            b_23 = t;
            t = SSL_getenv(b_23);
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
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
  t = term_h_25;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  t = term_m_24;
  m_23 = t;
  t = term_i_25;
  n_23 = t;
  t = term_j_25;
  t = v_7(m_23, n_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
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
  t = term_u_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_23 = NULL;
  t = if_verbose5_1_0(u_2, t);
  i_23 = t;
  {
    ATerm z_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_23 = NULL,k_23 = NULL;
        t = term_m_24;
        j_23 = t;
        t = term_n_24;
        k_23 = t;
        t = term_d_26;
        t = v_7(j_23, k_23, t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = z_25;
        {
          ATerm l_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_23 = t;
          t = repeat_2_0(w_2, _id, t);
          t = l_23;
        }
      }
  }
  t = i_23;
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
  t = term_e_26;
  return(t);
}
static ATerm l_25 (ATerm u_23, ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,j_24 = NULL;
  t = term_m_24;
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_23);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_24, (ATerm) ATmakeAppl(sym_Tool_1, u_23));
  t = v_7(h_24, j_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_26 = ATgetFirst((ATermList) t);
      if(match_cons(f_26, sym__2))
        {
          ATerm h_26 = ATgetArgument(f_26, 0);
          g_24 = ATgetArgument(f_26, 1);
        }
      else
        _fail(t);
      {
        ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_24;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(h_3, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_m_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(j_3, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_24 = NULL,l_24 = NULL,p_24 = NULL;
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      p_24 = t;
      if(match_cons(t, sym__2))
        {
          k_24 = ATgetArgument(t, 0);
          l_24 = ATgetArgument(t, 1);
          {
            ATerm l_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_24 = NULL,w_24 = NULL,z_24 = NULL;
                t = term_m_24;
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, k_24);
                z_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_24, (ATerm) ATmakeAppl(sym_Tool_1, k_24));
                t = v_7(w_24, z_24, t);
                {
                  static ATerm e_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((l_24 != ATgetArgument(t, 0)))
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
                  t = fetch_1_0(e_3, t);
                }
                t = not_null(v_24);
                LocalPopChoice(m_26);
              }
            else
              {
                t = l_26;
                t = l_25(p_24, t);
              }
          }
        }
      else
        {
          t = l_25(p_24, t);
        }
      t = if_verbose5_1_0(f_3, t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm k_25 = NULL,o_10 = NULL,p_10 = NULL;
        k_25 = t;
        t = term_w_11;
        o_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), k_25), term_n_26);
        p_10 = t;
        t = SSL_printnl(o_10, p_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_26), k_25), term_n_26);
        t = if_verbose5_1_0(i_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  o_25 = t;
  t = a_89(t);
  t = xtc_find_0_0(t);
  n_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
  {
    static ATerm m_3 (ATerm t)
    {
      ATerm p_25 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
      t = z_6(n_25, o_25, t);
      t = term_s_26;
      p_25 = t;
      t = SSL_exit(p_25);
      return(t);
    }
    t = fork_and_wait_1_0(m_3, t);
  }
  t = o_25;
  return(t);
}
static ATerm l_7 (ATerm o_84 (ATerm), ATerm e_35, ATerm c_35, ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL;
  t_25 = t;
  t = o_84(t);
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_25, e_35, c_35);
  t = w_7(q_25, e_35, c_35, t);
  {
    ATerm v_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        t = term_z_26;
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_25, term_z_26);
        t = v_7(q_25, a_26, t);
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
      r_25 = ATgetFirst((ATermList) t);
      s_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, q_25, term_z_26, (ATerm) ATinsert(CheckATermList(s_25), (ATerm) ATinsert(CheckATermList(r_25), e_35)));
  t = lookup_table_0_1(q_25, t);
  y_25 = t;
  t = term_z_26;
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(s_25), (ATerm) ATinsert(CheckATermList(r_25), e_35));
  w_25 = t;
  t = y_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(v_25, w_25, x_25, t);
  t = t_25;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm c_26 = NULL;
  ATerm e_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_26 = NULL,u_10 = NULL;
      o_26 = t;
      t = term_i_27;
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_26, term_i_27);
      t = m_7(o_26, u_10, t);
      c_26 = t;
      t = SSL_mkstemp(c_26);
      LocalPopChoice(h_27);
    }
  else
    {
      t = e_27;
      {
        ATerm p_26 = NULL;
        t = term_j_27;
        p_26 = t;
        t = SSL_perror(p_26);
        _fail(t);
      }
    }
  return(t);
}
static ATerm m_7 (ATerm l_32, ATerm m_32, ATerm t)
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
  t = term_l_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL,y_26 = NULL;
  t = P__tmpdir_0_0(t);
  w_26 = t;
  t = term_n_27;
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_26, term_n_27);
  t = m_7(w_26, y_26, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_t_9;
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_26, term_t_9);
  t = l_7(o_3, t_26, u_26, t);
  t = SSL_close(r_26);
  t = t_26;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  a_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm c_27 = NULL,d_27 = NULL;
      t = a_27;
      t = xtc_new_file_0_0(t);
      c_27 = t;
      t = r_0(t);
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_27, (ATerm) ATinsert(ATinsert(ATempty, c_27), term_l_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, c_27);
    }
  else
    {
      ATerm f_27 = NULL,g_27 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_27;
      t = xtc_new_file_0_0(t);
      f_27 = t;
      t = r_0(t);
      g_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_27), term_l_9), b_27), term_o_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_27);
    }
  return(t);
}
static ATerm v_7 (ATerm k_38, ATerm l_38, ATerm t)
{
  ATerm k_27 = NULL;
  t = lookup_table_0_1(k_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(l_38, k_27, t);
  return(t);
}
static ATerm o_7 (ATerm w_36, ATerm x_36, ATerm t)
{
  ATerm m_27 = NULL,p_27 = NULL;
  p_27 = t;
  {
    ATerm r_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        t = v_7(w_36, x_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_28 = ATgetFirst((ATermList) t);
            m_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_27);
        {
          ATerm q_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, m_27);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(x_36, m_27, q_27, t);
          t = (ATerm) ATmakeAppl(sym__3, w_36, x_36, m_27);
        }
      }
    else
      {
        t = r_27;
        {
          ATerm s_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
          t = lookup_table_0_1(w_36, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_7(x_36, s_27, t);
          t = (ATerm) ATmakeAppl(sym__2, w_36, x_36);
        }
      }
  }
  t = p_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm l_84 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,c_28 = NULL;
  x_27 = t;
  t = l_84(t);
  w_27 = t;
  {
    ATerm b_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_28 = NULL;
        t = term_z_26;
        d_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_27, term_z_26);
        t = v_7(w_27, d_28, t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_27 = ATgetFirst((ATermList) t);
      u_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_27, term_z_26, u_27);
  t = lookup_table_0_1(w_27, t);
  c_28 = t;
  t = term_z_26;
  y_27 = t;
  t = c_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(y_27, u_27, z_27, t);
  t = v_27;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm e_28 = NULL;
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_27, e_28);
      t = o_7(w_27, e_28, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = x_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_85(t);
      t = m_85(t);
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      t = m_85(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_84 (ATerm), ATerm t)
{
  ATerm g_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,q_28 = NULL;
  j_28 = t;
  t = k_84(t);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, term_z_26);
  {
    ATerm k_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            ATerm s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_z_26;
        w_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_28, term_z_26);
        t = v_7(g_28, w_28, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = k_28;
        t = (ATerm) ATempty;
      }
  }
  l_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_28, term_z_26, (ATerm) ATinsert(CheckATermList(l_28), (ATerm) ATempty));
  t = lookup_table_0_1(g_28, t);
  q_28 = t;
  t = term_z_26;
  m_28 = t;
  t = (ATerm) ATinsert(CheckATermList(l_28), (ATerm) ATempty);
  n_28 = t;
  t = q_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(m_28, n_28, o_28, t);
  t = j_28;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm n_29 = NULL;
  n_29 = t;
  {
    ATerm t_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(n_29);
        LocalPopChoice(u_28);
      }
    else
      {
        t = t_28;
        t = n_29;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm m_88 (ATerm), ATerm t)
{
  ATerm a_29 = NULL;
  static ATerm x_3 (ATerm t)
  {
    ATerm b_29 = NULL;
    b_29 = t;
    {
      ATerm v_28 = t;
      int x_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_29 = NULL,j_29 = NULL;
          t = term_l_27;
          g_29 = t;
          t = term_z_26;
          j_29 = t;
          t = term_y_28;
          t = v_7(g_29, j_29, t);
          LocalPopChoice(x_28);
        }
      else
        {
          t = v_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_29 != NULL) && (a_29 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_29 = ATgetFirst((ATermList) t);
        {
          ATerm z_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_29;
    t = map_1_0(c_4, t);
    t = b_29;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(u_3, t);
  t = restore_always_2_0(m_88, x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  q_29 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  r_29 = t;
  t = term_w_11;
  t_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_29), r_29), term_c_29);
  u_29 = t;
  t = SSL_printnl(t_29, u_29);
  t = term_a_12;
  s_29 = t;
  t = SSL_exit(s_29);
  t = q_29;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  if(match_string(t, "-k"))
    {
      t = w_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_29;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,a_30 = NULL;
  x_29 = t;
  t = SSL_string_to_int(x_29);
  y_29 = t;
  t = term_e_29;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, y_29);
  t = y_7(a_30, y_29, t);
  t = x_29;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_4, j_4, m_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  if(match_string(t, "-S"))
    {
      t = f_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_30;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  t = term_x_10;
  j_30 = t;
  t = term_h_29;
  k_30 = t;
  t = term_i_29;
  t = y_7(j_30, k_30, t);
  t = term_k_29;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_l_29;
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
  ATerm l_30 = NULL,n_30 = NULL,o_30 = NULL;
  l_30 = t;
  t = SSL_string_to_int(l_30);
  n_30 = t;
  t = term_x_10;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, n_30);
  t = y_7(o_30, n_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_30);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_m_29;
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
  ATerm p_30 = NULL,q_30 = NULL;
  t = term_o_29;
  p_30 = t;
  t = term_t_9;
  q_30 = t;
  t = term_p_29;
  t = y_7(p_30, q_30, t);
  t = term_v_29;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, s_4, c_5, t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, h_5, t);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = Option_3_0(i_5, j_5, k_5, t);
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm w_40, ATerm x_40, ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  t = term_k_9;
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, w_40, x_40);
  t = lookup_table_0_1(r_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(w_40, x_40, s_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, w_40, x_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
      t = term_t_9;
      t = e_0(t);
      a_31 = t;
      t = term_g_30;
      b_31 = t;
      t = term_h_30;
      c_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, a_31);
      t = w_7(b_31, c_31, a_31, t);
      _fail(t);
    }
  else
    {
      ATerm i_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_30 = ATgetFirst((ATermList) t);
          z_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_30;
      t = c_0(t);
      t = term_t_9;
      t = d_0(t);
      i_31 = t;
      t = (ATerm) ATinsert(CheckATermList(z_30), i_31);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm o_31 = NULL;
  o_31 = t;
  if(match_string(t, "-o"))
    {
      t = o_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_31;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  p_31 = t;
  t = term_l_9;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, p_31);
  t = y_7(q_31, p_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_31);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-i"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  v_31 = t;
  t = term_o_27;
  w_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, v_31);
  t = y_7(w_31, v_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_31);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, u_5, v_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_74 (ATerm), ATerm t)
{
  static ATerm e_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    d_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_33 = ATgetFirst((ATermList) t);
        c_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_11 = NULL,s_11 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(d_33);
          k_11 = t;
          t = c_33;
          t = e_33(t);
          s_11 = t;
          t = (ATerm) ATinsert(CheckATermList(s_11), b_33);
          t_1 = t;
          t = SSLsetAnnotations(t_1, k_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_33;
        t = j_74(t);
      }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,d_32 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_31;
    }
  else
    {
      static ATerm w_5 (ATerm t)
      {
        t = not_null(d_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          if(((d_32 != NULL) && (d_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm z_33 (ATerm k_33, ATerm t)
{
  ATerm l_33 = NULL;
  t = SSL_explode_term(k_33);
  if(match_cons(t, sym__2))
    {
      ATerm t_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_33 = NULL,s_33 = NULL,v_33 = NULL;
  v_33 = t;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t)
            {
              t = s_33;
              return(t);
            }
            t = p_33;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = z_33(v_33, t);
          }
      }
    }
  else
    {
      t = z_33(v_33, t);
    }
  return(t);
}
static ATerm p_7 (ATerm c_41, ATerm b_41, ATerm t)
{
  ATerm a_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  t = c_41;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL;
        t = term_k_9;
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, c_41);
        t = v_7(h_34, c_41, t);
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_41, d_34);
  t = conc_0_0(t);
  a_34 = t;
  t = term_k_9;
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, c_41, a_34);
  t = lookup_table_0_1(e_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(c_41, a_34, f_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, c_41, a_34);
  return(t);
}
static ATerm w_7 (ATerm r_36, ATerm s_36, ATerm q_36, ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_31 = ATgetArgument(t, 0);
            ATerm g_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = v_7(r_36, s_36, t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATempty;
      }
  }
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, (ATerm) ATinsert(CheckATermList(k_34), q_36));
  t = lookup_table_0_1(r_36, t);
  n_34 = t;
  t = (ATerm) ATinsert(CheckATermList(k_34), q_36);
  l_34 = t;
  t = n_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(s_36, l_34, m_34, t);
  t = j_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,l_35 = NULL,m_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_35 = NULL,o_35 = NULL,r_35 = NULL;
      t = term_t_9;
      t = n_0(t);
      n_35 = t;
      t = term_g_30;
      o_35 = t;
      t = term_h_30;
      r_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_30, term_h_30, n_35);
      t = w_7(o_35, r_35, n_35, t);
      _fail(t);
    }
  else
    {
      ATerm v_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_35 = ATgetFirst((ATermList) t);
          i_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_35 = ATgetFirst((ATermList) t);
          m_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_35;
      t = k_0(t);
      t = l_35;
      t = l_0(t);
      v_35 = t;
      t = (ATerm) ATinsert(CheckATermList(m_35), v_35);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  t = term_s_12;
  x_35 = t;
  t = (ATerm) ATinsert(ATempty, w_35);
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, (ATerm) ATinsert(ATempty, w_35));
  t = p_7(x_35, y_35, t);
  t = w_35;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, a_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_9;
  t = whoami_0_0(t);
  z_35 = t;
  t = term_w_11;
  b_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_31), z_35);
  c_36 = t;
  t = SSL_printnl(b_36, c_36);
  t = term_a_12;
  a_36 = t;
  t = SSL_exit(a_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_k_9;
  d_36 = t;
  t = term_k_31;
  e_36 = t;
  t = term_l_31;
  t = v_7(d_36, e_36, t);
  return(t);
}
static ATerm q_7 (ATerm q_33, ATerm r_33, ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_33, r_33);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      t = SSL_addr(q_33, r_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,k_36 = NULL;
  h_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_36;
      t = g_81(t);
    }
  else
    {
      ATerm u_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_36 = ATgetFirst((ATermList) t);
          k_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_36;
      t = foldr_2_0(g_81, h_81, t);
      u_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_36, u_36);
      t = h_81(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_h_29;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(o_12, p_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_37 = NULL,h_12 = NULL,i_12 = NULL;
  t = times_0_0(t);
  i_12 = t;
  t = SSL_explode_term(i_12);
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  t = foldr_2_0(e_6, f_6, t);
  c_37 = t;
  t = SSL_TicksToSeconds(c_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_38 = NULL,m_38 = NULL,n_38 = NULL;
  j_38 = t;
  if(match_cons(t, sym__2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_38;
        if((m_38 != t))
          {
            _fail(t);
          }
        t = j_38;
        LocalPopChoice(u_31);
      }
    else
      {
        t = t_31;
        t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
        {
          ATerm x_31 = t;
          int y_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_38, n_38);
              LocalPopChoice(y_31);
            }
          else
            {
              t = x_31;
              t = SSL_gtr(m_38, n_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_38, n_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm t_38 = NULL;
  t_38 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_38 = NULL,x_38 = NULL,a_39 = NULL;
        t = term_k_9;
        x_38 = t;
        t = term_x_10;
        a_39 = t;
        t = term_y_10;
        t = v_7(x_38, a_39, t);
        w_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_38, term_a_12);
        t = geq_0_0(t);
        t = t_38;
        t = x_85(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = t_38;
      }
  }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL,f_39 = NULL,g_39 = NULL;
  t = run_time_0_0(t);
  c_39 = t;
  t = term_t_9;
  t = whoami_0_0(t);
  d_39 = t;
  t = term_w_11;
  f_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), c_39), term_a_13), d_39);
  g_39 = t;
  t = SSL_printnl(f_39, g_39);
  t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), c_39), term_a_13), d_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_29;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_39 = ATgetArgument(t, 0);
          {
            ATerm l_13 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(v_39);
            l_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_39);
            v_1 = t;
            t = SSLsetAnnotations(v_1, l_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL;
      t = term_k_9;
      l_39 = t;
      t = term_h_32;
      m_39 = t;
      t = term_i_32;
      t = v_7(l_39, m_39, t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = fetch_1_0(i_6, t);
    }
  t = i_90(t);
  return(t);
}
static ATerm z_7 (ATerm j_40, ATerm k_40, ATerm l_40, ATerm t)
{
  ATerm x_39 = NULL;
  t = SSL_hashtable_put(l_40, j_40, k_40);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_39);
  return(t);
}
static ATerm a_8 (ATerm m_40, ATerm n_40, ATerm t)
{
  t = SSL_hashtable_get(n_40, m_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm d_38, ATerm t)
{
  ATerm z_40 = NULL;
  t = table_hashtable_0_0(t);
  z_40 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_13 = NULL;
        t = z_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_8(d_38, u_13, t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        {
          ATerm c_14 = NULL;
          t = d_38;
          t = table_create_0_0(t);
          t = z_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_8(d_38, c_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_hashtable_create(r_40, s_40);
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL;
  k_41 = t;
  t = term_n_32;
  p_41 = t;
  t = term_o_32;
  q_41 = t;
  t = k_41;
  t = new_hashtable_0_2(p_41, q_41, t);
  l_41 = t;
  t = k_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(k_41, l_41, n_41, t);
  t = k_41;
  return(t);
}
static ATerm s_7 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_hashtable_remove(p_40, o_40);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_41);
  return(t);
}
static ATerm t_7 (ATerm t_40, ATerm t)
{
  ATerm s_41 = NULL;
  t = SSL_hashtable_destroy(t_40);
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_41 = NULL;
  t = SSL_table_hashtable();
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,f_42 = NULL;
  w_41 = t;
  t = table_hashtable_0_0(t);
  x_41 = t;
  t = lookup_table_0_1(w_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(f_42, t);
  t = x_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(w_41, y_41, t);
  t = w_41;
  return(t);
}
ATerm map_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  static ATerm x_43 (ATerm t)
  {
    ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL;
    s_43 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_43;
      }
    else
      {
        ATerm q_14 = NULL,t_14 = NULL,x_14 = NULL,l_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_43 = ATgetFirst((ATermList) t);
            w_43 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_43);
        q_14 = t;
        t = t_43;
        t = s_73(t);
        t_14 = t;
        t = w_43;
        t = x_43(t);
        x_14 = t;
        t = (ATerm) ATinsert(CheckATermList(x_14), t_14);
        l_3 = t;
        t = SSLsetAnnotations(l_3, q_14);
      }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_44 = ATgetFirst((ATermList) t);
      f_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_44 = NULL,k_44 = NULL;
        static ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_44)), not_null(k_44));
          return(t);
        }
        t = f_44;
        t = i_0(t);
        if(((j_44 != NULL) && (j_44 != t)))
          _fail(t);
        else
          j_44 = t;
        t = e_44;
        t = g_0(t);
        if(((k_44 != NULL) && (k_44 != t)))
          _fail(t);
        else
          k_44 = t;
        t = f_44;
        t = reverse_acc_2_0(g_0, l_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_9;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,n_3 = NULL;
  a_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_45);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_44);
  n_3 = t;
  t = SSLsetAnnotations(n_3, y_44);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_45), term_p_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_44 = NULL,v_44 = NULL;
      t = term_k_9;
      t_44 = t;
      t = term_k_31;
      v_44 = t;
      t = term_l_31;
      t = v_7(t_44, v_44, t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      t = fetch_1_0(m_6, t);
    }
  t = term_s_32;
  t = echo_0_0(t);
  t = term_g_30;
  r_44 = t;
  t = term_h_30;
  s_44 = t;
  t = term_t_32;
  t = v_7(r_44, s_44, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  static ATerm k_46 (ATerm t)
  {
    ATerm f_46 = NULL,g_46 = NULL,j_46 = NULL;
    f_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_46 = ATgetFirst((ATermList) t);
        j_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_32 = t;
      int v_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_15 = NULL,w_15 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(f_46);
          o_15 = t;
          t = g_46;
          t = c_74(t);
          w_15 = t;
          t = (ATerm) ATinsert(CheckATermList(j_46), w_15);
          p_3 = t;
          t = SSLsetAnnotations(p_3, o_15);
          LocalPopChoice(v_32);
        }
      else
        {
          t = u_32;
          {
            ATerm l_16 = NULL,c_17 = NULL,r_3 = NULL;
            t = SSLgetAnnotations(f_46);
            l_16 = t;
            t = j_46;
            t = k_46(t);
            c_17 = t;
            t = (ATerm) ATinsert(CheckATermList(c_17), g_46);
            r_3 = t;
            t = SSLsetAnnotations(r_3, l_16);
          }
        }
    }
    return(t);
  }
  t = k_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL,q_46 = NULL;
  o_46 = t;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_32 = ATgetFirst((ATermList) t);
                ATerm z_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_46;
          }
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = (ATerm) ATinsert(ATempty, o_46);
      }
  }
  p_46 = t;
  t = term_n_9;
  q_46 = t;
  t = SSL_printnl(q_46, p_46);
  t = o_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  t = term_k_9;
  u_46 = t;
  t = term_k_31;
  v_46 = t;
  t = term_l_31;
  t = v_7(u_46, v_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL;
  t = term_a_33;
  w_46 = t;
  t = term_t_9;
  x_46 = t;
  t = term_f_33;
  t = y_7(w_46, x_46, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL;
  t = term_a_33;
  a_47 = t;
  t = term_t_9;
  b_47 = t;
  t = term_f_33;
  t = y_7(a_47, b_47, t);
  t = term_h_33;
  y_46 = t;
  t = term_t_9;
  z_46 = t;
  t = term_i_33;
  t = y_7(y_46, z_46, t);
  t = term_j_33;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, r_6, s_6, t);
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = Option_3_0(t_6, w_6, a_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_60 (ATerm), ATerm s_60 (ATerm), ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,w_3 = NULL;
  h_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_47 = ATgetFirst((ATermList) t);
      e_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_47);
  c_47 = t;
  t = d_47;
  t = r_60(t);
  f_47 = t;
  t = e_47;
  t = s_60(t);
  g_47 = t;
  t = (ATerm) ATinsert(CheckATermList(g_47), f_47);
  w_3 = t;
  t = SSLsetAnnotations(w_3, c_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,r_47 = NULL,s_47 = NULL,d_4 = NULL;
  m_47 = t;
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_33;
        t = g_92(t);
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
      }
  }
  t = m_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_47 = ATgetFirst((ATermList) t);
      p_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_47);
  n_47 = t;
  t = term_k_31;
  s_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_31, o_47);
  t = y_7(s_47, o_47, t);
  t = p_47;
  {
    static ATerm c_48 (ATerm t)
    {
      ATerm x_33 = t;
      int y_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_47 = NULL;
              v_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_47;
              LocalPopChoice(c_34);
            }
          else
            {
              t = b_34;
              t = g_92(t);
              t = Cons_2_0(_id, c_48, t);
            }
          LocalPopChoice(y_33);
        }
      else
        {
          t = x_33;
          {
            ATerm y_47 = NULL,z_47 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_47 = ATgetFirst((ATermList) t);
                z_47 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_47), (ATerm) ATmakeAppl(sym_Undefined_1, y_47));
          }
        }
      return(t);
    }
    t = c_48(t);
  }
  r_47 = t;
  t = (ATerm) ATinsert(CheckATermList(r_47), (ATerm) ATmakeAppl(sym_Program_1, o_47));
  d_4 = t;
  t = SSLsetAnnotations(d_4, n_47);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  if(match_string(t, "--help"))
    {
      t = p_48;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_48;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_48;
        }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm q_48 = NULL,r_48 = NULL;
  t = term_h_32;
  q_48 = t;
  t = term_t_9;
  r_48 = t;
  t = term_g_34;
  t = y_7(q_48, r_48, t);
  t = term_i_34;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  j_48 = t;
  t = term_g_30;
  k_48 = t;
  t = term_p_34;
  t = lookup_table_0_1(k_48, t);
  o_48 = t;
  t = term_h_30;
  l_48 = t;
  t = (ATerm) ATempty;
  m_48 = t;
  t = o_48;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(l_48, m_48, n_48, t);
  t = j_48;
  {
    static ATerm u_7 (ATerm t)
    {
      ATerm q_34 = t;
      int r_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_92(t);
          LocalPopChoice(r_34);
        }
      else
        {
          t = q_34;
          {
            ATerm s_34 = t;
            int t_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_8, f_8, h_8, t);
                LocalPopChoice(t_34);
              }
            else
              {
                t = s_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(u_7, t);
  }
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_49 = NULL;
        c_49 = t;
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_17 = NULL;
              t = c_49;
              {
                ATerm y_34 = t;
                int z_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_18 = NULL,b_18 = NULL;
                    t = term_k_9;
                    a_18 = t;
                    t = term_h_32;
                    b_18 = t;
                    t = term_i_32;
                    t = v_7(a_18, b_18, t);
                    LocalPopChoice(z_34);
                  }
                else
                  {
                    t = y_34;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = c_49;
              t = default_system_usage_0_0(t);
              t = term_h_29;
              x_17 = t;
              t = SSL_exit(x_17);
              LocalPopChoice(x_34);
            }
          else
            {
              t = w_34;
              {
                ATerm j_18 = NULL,v_18 = NULL,w_18 = NULL;
                t = term_k_9;
                v_18 = t;
                t = term_a_33;
                w_18 = t;
                t = term_a_35;
                t = v_7(v_18, w_18, t);
                t = c_49;
                t = default_system_about_0_0(t);
                t = term_h_29;
                j_18 = t;
                t = SSL_exit(j_18);
              }
            }
        }
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        {
          ATerm b_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_49 = NULL,e_49 = NULL,f_49 = NULL;
              static ATerm k_8 (ATerm t)
              {
                ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL,f_4 = NULL;
                i_49 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    h_49 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(i_49);
                g_49 = t;
                t = h_49;
                if(((h_48 != NULL) && (h_48 != t)))
                  _fail(t);
                else
                  h_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, h_49);
                f_4 = t;
                t = SSLsetAnnotations(f_4, g_49);
                return(t);
              }
              t = fetch_1_0(k_8, t);
              t = term_w_11;
              e_49 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_48)), term_f_35);
              f_49 = t;
              t = SSL_printnl(e_49, f_49);
              t = (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_48)), term_f_35));
              t = default_system_usage_0_0(t);
              t = term_a_12;
              d_49 = t;
              t = SSL_exit(d_49);
              LocalPopChoice(d_35);
            }
          else
            {
              t = b_35;
            }
        }
      }
  }
  i_48 = t;
  t = term_g_30;
  t = table_destroy_0_0(t);
  t = i_48;
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
  t = parse_options_1_0(k_90, t);
  n_49 = t;
  t = term_g_35;
  t = table_create_0_0(t);
  t = term_g_35;
  o_49 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_35, term_j_35, n_49);
  t = lookup_table_0_1(o_49, t);
  r_49 = t;
  t = term_j_35;
  p_49 = t;
  t = r_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(p_49, n_49, q_49, t);
  t = n_49;
  t = m_90(t);
  {
    ATerm k_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_90, t);
        LocalPopChoice(p_35);
      }
    else
      {
        t = k_35;
        {
          ATerm q_35 = t;
          int s_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_90(t);
              t = report_success_0_0(t);
              LocalPopChoice(s_35);
            }
          else
            {
              t = q_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            {
              ATerm j_36 = t;
              int l_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(v_8, w_8, x_8, t);
                        LocalPopChoice(n_36);
                      }
                    else
                      {
                        t = m_36;
                        {
                          ATerm o_36 = t;
                          int p_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(p_36);
                            }
                          else
                            {
                              t = o_36;
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
  t = xtc_temp_files_1_0(y_8, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL;
  t = term_t_36;
  v_49 = t;
  t = term_t_9;
  w_49 = t;
  t = term_v_36;
  t = y_7(v_49, w_49, t);
  t = term_y_36;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_z_36;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL;
      t = term_k_9;
      z_49 = t;
      t = term_o_27;
      a_50 = t;
      t = term_d_37;
      t = v_7(z_49, a_50, t);
      y_49 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, y_49);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      t = term_q_9;
    }
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_50 = NULL,h_50 = NULL;
        h_50 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_50 = ATgetArgument(t, 0);
            {
              ATerm k_19 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(h_50);
              k_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_50);
              q_5 = t;
              t = SSLsetAnnotations(q_5, k_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = h_50;
          }
        LocalPopChoice(f_37);
        t = xtc_transform_file_2_0(z_8, create_pp_table_args_0_0, t);
      }
    else
      {
        t = e_37;
        t = xtc_transform_term_2_0(a_9, create_pp_table_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_g_37;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_g_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_8, default_usage_0_0, _id, o_8, t);
  return(t);
}
