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
ATerm term_d_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_l_35;
ATerm term_g_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_b_34;
ATerm term_r_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_m_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_u_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_s_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_d_27;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_i_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_b_22;
ATerm term_q_21;
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
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
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
ATerm term_s_9;
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
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_s_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_13, term_b_12, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_z_10, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_v_13, term_x_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_d_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_v_14, term_w_14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_15, term_b_15, term_c_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_s_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_e_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_n_16, term_o_16);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_s_16, term_v_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_o_17, term_p_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_x_17, term_a_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_n_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_i_19, term_j_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_q_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_z_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_i_20, term_j_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_t_20);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_20, term_x_20, term_y_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_g_21, term_i_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_p_21);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_y_24);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_k_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_n_24, term_o_24);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_o_27, term_d_27);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_x_10, term_k_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_s_9);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_n_31);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_j_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_s_30);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_s_9);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_s_9);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_s_9);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__3, term_m_30, term_s_30, (ATerm) ATempty);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_g_33);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_s_9);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_s_27);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm w_6 (ATerm s_14, ATerm r_14, ATerm t);
static ATerm o_7 (ATerm t_14, ATerm u_14, ATerm t);
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
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm y_6 (ATerm t_17, ATerm u_17, ATerm t);
static ATerm z_6 (ATerm b_79 (ATerm), ATerm i_181, ATerm d_18, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t);
static ATerm a_7 (ATerm l_14, ATerm m_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t);
static ATerm c_7 (ATerm k_50, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm v_98 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm u_98 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm w_98 (ATerm), ATerm t);
static ATerm e_7 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t);
static ATerm f_7 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm g_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t);
static ATerm h_7 (ATerm y_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t);
static ATerm l_7 (ATerm t_51, ATerm u_51, ATerm t);
static ATerm w_16 (ATerm q_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_7 (ATerm z_17, ATerm t);
static ATerm j_7 (ATerm c_52, ATerm d_52, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_18 (ATerm g_17, ATerm t);
static ATerm x_18 (ATerm k_17, ATerm l_17, ATerm m_17, ATerm t);
static ATerm y_18 (ATerm f_18, ATerm g_18, ATerm h_18, ATerm t);
static ATerm k_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm j_25 (ATerm t_23, ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_101 (ATerm), ATerm t);
static ATerm m_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm n_7 (ATerm q_32, ATerm r_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm w_7 (ATerm e_47, ATerm f_47, ATerm t);
static ATerm p_7 (ATerm q_45, ATerm r_45, ATerm t);
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_101 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_7 (ATerm q_50, ATerm r_50, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_33 (ATerm j_33, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_7 (ATerm w_50, ATerm v_50, ATerm t);
static ATerm x_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_7 (ATerm v_33, ATerm w_33, ATerm t);
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_98 (ATerm), ATerm t);
static ATerm h_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t);
static ATerm a_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t);
static ATerm b_8 (ATerm g_50, ATerm h_50, ATerm t);
ATerm lookup_table_0_1 (ATerm x_46, ATerm t);
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_7 (ATerm i_50, ATerm j_50, ATerm t);
static ATerm u_7 (ATerm n_50, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
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
ATerm copy_to_1_0 (ATerm q_0 (ATerm), ATerm t)
{
  ATerm g_1 = NULL,j_1 = NULL;
  g_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_3 = t;
    int c_9 = stack_ptr;
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
        t = (ATerm) ATmakeAppl(sym__2, j_1, e_0);
        t = o_7(j_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
        LocalPopChoice(c_9);
      }
    else
      {
        t = g_3;
        {
          ATerm e_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 = NULL;
              t = g_1;
              t = q_0(t);
              h_1 = t;
              {
                ATerm g_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_1 = NULL;
                    i_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = i_1;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = i_1;
                          }
                        else
                          {
                            t = i_1;
                            if((j_1 != t))
                              {
                                _fail(t);
                              }
                            t = i_1;
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
              t = (ATerm) ATmakeAppl(sym__2, j_1, h_1);
              t = o_7(j_1, h_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              LocalPopChoice(f_9);
            }
          else
            {
              t = e_9;
              t = g_1;
              t = q_0(t);
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
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL,d_2 = NULL;
      t = term_k_9;
      c_2 = t;
      t = term_l_9;
      d_2 = t;
      t = term_m_9;
      t = w_7(c_2, d_2, t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
      t = term_n_9;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm w_1 = NULL;
  w_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_1 = NULL,x_1 = NULL;
      t = term_l_9;
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,z_1 = NULL;
            t = term_k_9;
            y_1 = t;
            t = term_l_9;
            z_1 = t;
            t = term_m_9;
            t = w_7(y_1, z_1, t);
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = term_n_9;
          }
      }
      r_1 = t;
      t = term_q_9;
      x_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_9, r_1);
      t = o_7(x_1, r_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm r_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_1;
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
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  t = term_s_9;
  t = new_0_0(t);
  j_2 = t;
  t = term_u_9;
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, term_u_9);
  t = n_7(j_2, k_2, t);
  l_2 = t;
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL;
        t = (ATerm) ATinsert(ATempty, term_x_9);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_2, (ATerm) ATinsert(ATempty, term_x_9));
        t = l_7(l_2, c_3, t);
        t = new_file_0_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        t = l_2;
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
static ATerm w_6 (ATerm s_14, ATerm r_14, ATerm t)
{
  ATerm y_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(s_14, r_14);
      LocalPopChoice(a_10);
    }
  else
    {
      t = y_9;
      t = get_errno_0_0(t);
      t = term_s_9;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, s_14, r_14);
      t = o_7(s_14, r_14, t);
      t = SSL_remove(s_14);
    }
  return(t);
}
static ATerm o_7 (ATerm t_14, ATerm u_14, ATerm t)
{
  t = SSL_copy(t_14, u_14);
  return(t);
}
ATerm rename_to_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm y_3 = NULL,a_4 = NULL;
  y_3 = t;
  if(match_cons(t, sym_FILE_1))
    {
      a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL;
        t = y_3;
        t = u_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_n_9;
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_4, term_n_9);
        t = o_7(a_4, i_2, t);
        t = SSL_remove(a_4);
        t = term_n_9;
        LocalPopChoice(f_10);
      }
    else
      {
        t = b_10;
        {
          ATerm h_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_2 = NULL;
              t = y_3;
              t = u_0(t);
              s_2 = t;
              {
                ATerm j_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_2 = NULL;
                    t_2 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = t_2;
                      }
                    else
                      {
                        t = t_2;
                        if((a_4 != t))
                          {
                            _fail(t);
                          }
                        t = t_2;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, a_4, s_2);
              t = w_6(a_4, s_2, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_2);
              LocalPopChoice(i_10);
            }
          else
            {
              t = h_10;
              t = y_3;
              t = u_0(t);
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
static ATerm c_0 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = term_k_10;
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
  t = term_l_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm f_4 = NULL,h_4 = NULL;
  f_4 = t;
  {
    static ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_4 = NULL,l_4 = NULL,i_0 = NULL;
            l_4 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm t_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_4);
            j_4 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_4);
            i_0 = t;
            t = SSLsetAnnotations(i_0, j_4);
            LocalPopChoice(s_10);
            t = xtc_transform_file_2_0(c_0, f_0, t);
          }
        else
          {
            t = q_10;
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
      h_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_4;
  t = if_verbose2_1_0(v_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_98 (ATerm), ATerm t)
{
  ATerm n_4 = NULL;
  n_4 = t;
  {
    ATerm u_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
        t = term_k_9;
        q_4 = t;
        t = term_x_10;
        r_4 = t;
        t = term_y_10;
        t = w_7(q_4, r_4, t);
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, term_z_10);
        t = geq_0_0(t);
        t = n_4;
        t = s_98(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = u_10;
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
  ATerm t_4 = NULL,u_4 = NULL,w_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL,f_5 = NULL,h_5 = NULL,m_5 = NULL,s_0 = NULL;
  u_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_11), term_b_11), u_4);
  b_5 = t;
  t = SSL_concat_strings(b_5);
  a_5 = t;
  t = (ATerm) ATinsert(ATempty, term_x_9);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, (ATerm) ATinsert(ATempty, term_x_9));
  t = l_7(a_5, z_4, t);
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
  m_5 = t;
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      ATerm e_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_5);
  c_5 = t;
  t = SSL_modification_time(t_4);
  f_5 = t;
  t = SSL_modification_time(u_4);
  h_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_5, h_5);
  s_0 = t;
  t = SSLsetAnnotations(s_0, c_5);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
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
            w_4 = ATgetFirst((ATermList) g_11);
            {
              ATerm i_11 = (ATerm) ATgetNext((ATermList) g_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_4;
  t = if_verbose2_1_0(y_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm n_84 (ATerm), ATerm t)
{
  static ATerm e_6 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_84(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm a_6 = NULL,c_6 = NULL,d_6 = NULL,z_2 = NULL,e_3 = NULL,x_0 = NULL;
          a_6 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_6 = ATgetFirst((ATermList) t);
              d_6 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_6);
          z_2 = t;
          t = d_6;
          t = e_6(t);
          e_3 = t;
          t = (ATerm) ATinsert(CheckATermList(e_3), c_6);
          x_0 = t;
          t = SSLsetAnnotations(x_0, z_2);
        }
      }
    return(t);
  }
  t = e_6(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 = NULL,r_3 = NULL,t_3 = NULL;
      r_3 = t;
      t = term_o_11;
      t_3 = t;
      t = SSL_explode_string(t_3);
      k_3 = t;
      t = SSL_explode_string(r_3);
      {
        static ATerm b_1 (ATerm t)
        {
          if((k_3 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(b_1, t);
      }
      t = r_3;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm p_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 = NULL,z_3 = NULL,c_4 = NULL;
            z_3 = t;
            t = term_u_11;
            c_4 = t;
            t = SSL_explode_string(c_4);
            w_3 = t;
            t = SSL_explode_string(z_3);
            {
              static ATerm c_1 (ATerm t)
              {
                if((w_3 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
            }
            t = z_3;
            LocalPopChoice(s_11);
          }
        else
          {
            t = p_11;
            {
              ATerm t_6 = NULL,s_7 = NULL,y_7 = NULL,c_8 = NULL;
              t_6 = t;
              t = term_x_11;
              y_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_a_12);
              c_8 = t;
              t = SSL_printnl(y_7, c_8);
              t = term_b_12;
              s_7 = t;
              t = SSL_exit(s_7);
              t = (ATerm) ATinsert(ATinsert(ATempty, t_6), term_a_12);
            }
          }
      }
      {
        ATerm f_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = f_12;
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
      ATerm e_8 = NULL,f_8 = NULL;
      t = term_k_9;
      e_8 = t;
      t = term_s_12;
      f_8 = t;
      t = term_t_12;
      t = w_7(e_8, f_8, t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm h_8 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  h_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_8), term_s_12);
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
  t = map_1_0(f_1, t);
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
      t = l_7(l_8, n_8, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm y_6 (ATerm t_17, ATerm u_17, ATerm t)
{
  ATerm o_8 = NULL;
  t = SSL_write_term_to_stream_baf(t_17, u_17);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_8);
  return(t);
}
static ATerm z_6 (ATerm b_79 (ATerm), ATerm i_181, ATerm d_18, ATerm t)
{
  ATerm q_8 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_181, term_v_12);
  t = k_7(t);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_8, d_18);
  t = b_79(t);
  t = fclose_0_0(t);
  t = d_18;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_12 = ATgetArgument(t, 0);
      if(match_cons(x_12, sym_Stream_1))
        {
          t_8 = ATgetArgument(x_12, 0);
        }
      else
        _fail(t);
      u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_6(t_8, u_8, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL;
  s_8 = t;
  t = xtc_new_file_0_0(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
  t = z_6(m_1, r_8, s_8, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_8);
  t = xtc_transform_file_2_0(t_100, u_100, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm l_14, ATerm m_14, ATerm t)
{
  t = SSL_execvp(l_14, m_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,g_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_10 = ATgetArgument(t, 0);
      {
        ATerm v_4 = NULL,x_4 = NULL;
        t = SSL_int_to_string(d_10);
        v_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), v_4), term_y_12);
        x_4 = t;
        t = SSL_concat_strings(x_4);
      }
    }
  else
    {
      ATerm s_5 = NULL,t_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_10 = ATgetArgument(t, 0);
          e_10 = ATgetArgument(t, 1);
          g_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(e_10);
      s_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_10), term_d_13), s_5), term_c_13), d_10);
      t_5 = t;
      t = SSL_concat_strings(t_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_84 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = e_84(t);
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
    ATerm f_13 = t;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_21), term_j_21), term_c_21), term_u_20), term_n_20), term_e_20), term_r_19), term_l_19), term_f_19), term_o_18), term_e_18), term_s_17), term_i_17), term_b_17), term_p_16), term_k_16), term_g_16), term_z_15), term_u_15), term_l_15), term_g_15), term_z_14), term_p_14), term_i_14), term_e_14), term_y_13), term_s_13), term_n_13);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_10);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm r_10 = NULL,h_11 = NULL;
  r_10 = t;
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            h_11 = ATgetArgument(t, 1);
            {
              ATerm x_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_21);
        {
          ATerm y_21 = t;
          int z_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_6 = NULL,k_6 = NULL,p_6 = NULL;
              t = h_11;
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
              i_6 = t;
              t = term_x_11;
              k_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_6), term_b_22);
              p_6 = t;
              t = SSL_printnl(k_6, p_6);
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, i_6), term_b_22));
              LocalPopChoice(z_21);
            }
          else
            {
              t = y_21;
              t = r_10;
            }
        }
      }
    else
      {
        t = r_21;
        t = r_10;
      }
  }
  t = r_10;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  r_11 = t;
  t = fork_0_0(t);
  q_11 = t;
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = r_11;
        t = q_77(t);
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
        t = r_11;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm z_78 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,y_11 = NULL,z_11 = NULL;
  v_11 = t;
  t = z_78(t);
  w_11 = t;
  t = term_x_11;
  y_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_11), w_11);
  z_11 = t;
  t = SSL_printnl(y_11, z_11);
  t = v_11;
  return(t);
}
static ATerm c_7 (ATerm k_50, ATerm t)
{
  t = SSL_hashtable_keys(k_50);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  static ATerm p_1 (ATerm t)
  {
    ATerm e_12 = NULL,g_12 = NULL;
    e_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), e_12);
    t = w_7(not_null(c_12), e_12, t);
    g_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_12, g_12);
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
  t = c_7(d_12, t);
  t = map_1_0(p_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm i_12 = NULL;
  i_12 = t;
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,o_12 = NULL,r_12 = NULL;
        t = term_k_9;
        o_12 = t;
        t = term_x_10;
        r_12 = t;
        t = term_y_10;
        t = w_7(o_12, r_12, t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_12, term_p_20);
        t = geq_0_0(t);
        t = i_12;
        t = v_98(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = i_12;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm u_98 (ATerm), ATerm t)
{
  ATerm w_12 = NULL;
  w_12 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_13 = NULL,b_13 = NULL,e_13 = NULL;
        t = term_k_9;
        b_13 = t;
        t = term_x_10;
        e_13 = t;
        t = term_y_10;
        t = w_7(b_13, e_13, t);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_13, term_c_16);
        t = geq_0_0(t);
        t = w_12;
        t = u_98(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
        t = w_12;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_13 = NULL,q_13 = NULL,t_13 = NULL;
        t = term_k_9;
        q_13 = t;
        t = term_x_10;
        t_13 = t;
        t = term_y_10;
        t = w_7(q_13, t_13, t);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_13, term_b_14);
        t = geq_0_0(t);
        t = j_13;
        t = w_98(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        t = j_13;
      }
  }
  return(t);
}
static ATerm e_7 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm h_25, ATerm g_25, ATerm t)
{
  t = h_88(t);
  {
    static ATerm s_1 (ATerm t)
    {
      ATerm z_13 = NULL;
      z_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_25, z_13);
      t = g_88(t);
      return(t);
    }
    t = fetch_1_0(s_1, t);
  }
  t = g_25;
  return(t);
}
static ATerm f_7 (ATerm d_88 (ATerm), ATerm d_25, ATerm c_25, ATerm t)
{
  static ATerm k_15 (ATerm t)
  {
    ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL;
    d_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_15 = ATgetFirst((ATermList) t);
            f_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_15;
              {
                static ATerm u_1 (ATerm t)
                {
                  t = c_25;
                  return(t);
                }
                t = e_7(d_88, u_1, e_15, f_15, t);
              }
              t = k_15(t);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm v_6 = NULL,d_7 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(d_15);
                v_6 = t;
                t = f_15;
                t = k_15(t);
                d_7 = t;
                t = (ATerm) ATinsert(CheckATermList(d_7), e_15);
                a_1 = t;
                t = SSLsetAnnotations(a_1, v_6);
              }
            }
        }
      }
    return(t);
  }
  t = d_25;
  t = k_15(t);
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm g_7 (ATerm i_46, ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,t_15 = NULL;
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
  {
    ATerm s_22 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
        t = w_7(i_46, j_46, t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATempty;
      }
  }
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_15, k_46);
  t = f_7(a_2, q_15, k_46, t);
  p_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_46, j_46, p_15);
  t = lookup_table_0_1(i_46, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(j_46, p_15, t_15, t);
  t = o_15;
  return(t);
}
static ATerm h_7 (ATerm y_98 (ATerm), ATerm s_46, ATerm r_46, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm d_16 = NULL,f_16 = NULL;
    if(match_cons(t, sym__2))
      {
        d_16 = ATgetArgument(t, 0);
        f_16 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_46, d_16, f_16);
    t = y_98(t);
    return(t);
  }
  t = r_46;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm l_7 (ATerm t_51, ATerm u_51, ATerm t)
{
  t = SSL_access(t_51, u_51);
  return(t);
}
static ATerm w_16 (ATerm q_16, ATerm t)
{
  t = SSL_fclose(q_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_16 = ATgetArgument(t, 0);
      {
        ATerm y_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_16);
            LocalPopChoice(b_23);
          }
        else
          {
            t = y_22;
            t = w_16(u_16, t);
          }
      }
    }
  else
    {
      t = w_16(u_16, t);
    }
  return(t);
}
static ATerm i_7 (ATerm z_17, ATerm t)
{
  t = SSL_read_term_from_stream(z_17);
  return(t);
}
static ATerm j_7 (ATerm c_52, ATerm d_52, ATerm t)
{
  ATerm x_16 = NULL;
  t = SSL_fopen(c_52, d_52);
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_16);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_16 = NULL;
  t = SSL_stdin_stream();
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_16);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_16 = NULL;
  t = SSL_stdout_stream();
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_16);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_17 = NULL;
  t = SSL_stderr_stream();
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_17);
  return(t);
}
static ATerm u_18 (ATerm g_17, ATerm t)
{
  ATerm h_17 = NULL;
  t = SSL_explode_term(g_17);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            h_17 = ATgetFirst((ATermList) d_23);
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
  t = h_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_18 (ATerm k_17, ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm n_17 = NULL,q_17 = NULL,r_17 = NULL,w_17 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(m_17);
  r_17 = t;
  t = k_17;
  if(match_cons(t, sym_Path_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_17, l_17);
  d_1 = t;
  t = SSLsetAnnotations(d_1, r_17);
  if(match_cons(t, sym__2))
    {
      n_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(n_17, q_17, t);
  return(t);
}
static ATerm y_18 (ATerm f_18, ATerm g_18, ATerm h_18, ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,p_18 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(h_18);
  m_18 = t;
  t = SSL_is_string(f_18);
  p_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_18, g_18);
  e_1 = t;
  t = SSLsetAnnotations(e_1, m_18);
  if(match_cons(t, sym__2))
    {
      k_18 = ATgetArgument(t, 0);
      l_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(k_18, l_18, t);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      {
        ATerm f_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_18(r_18, t);
            LocalPopChoice(h_23);
          }
        else
          {
            t = f_23;
            {
              ATerm n_23 = t;
              int o_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_18(s_18, t_18, r_18, t);
                  LocalPopChoice(o_23);
                }
              else
                {
                  t = n_23;
                  t = y_18(s_18, t_18, r_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_18(r_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,h_19 = NULL;
  h_19 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_19, term_r_23);
        t = k_7(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm b_9 = NULL,d_9 = NULL;
          t = term_s_23;
          d_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_23, h_19);
          t = n_7(d_9, h_19, t);
          b_9 = t;
          t = SSL_perror(b_9);
          _fail(t);
        }
      }
  }
  b_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_7(c_19, t);
  a_19 = t;
  t = b_19;
  t = fclose_0_0(t);
  t = a_19;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_u_23;
  return(t);
}
static ATerm f_2 (ATerm t)
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
      ATerm k_19 = NULL,m_19 = NULL;
      k_19 = t;
      t = (ATerm) ATinsert(ATempty, term_y_23);
      m_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_19, (ATerm) ATinsert(ATempty, term_y_23));
      t = l_7(k_19, m_19, t);
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
            ATerm c_24 = t;
            if((PushChoice() == 0))
              {
                ATerm s_19 = NULL,t_19 = NULL;
                s_19 = t;
                t = (ATerm) ATinsert(ATempty, term_x_9);
                t_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(ATempty, term_x_9));
                t = l_7(s_19, t_19, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = c_24;
              }
            t = debug_1_0(e_2, t);
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            t = debug_1_0(f_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  z_20 = t;
  t = term_x_11;
  a_21 = t;
  t = (ATerm) ATinsert(ATempty, term_f_24);
  b_21 = t;
  t = SSL_printnl(a_21, b_21);
  t = z_20;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm d_21 = NULL,f_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__3))
    {
      d_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
      h_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_7(d_21, f_21, h_21, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  t = term_x_11;
  n_21 = t;
  t = (ATerm) ATinsert(ATempty, term_i_24);
  o_21 = t;
  t = SSL_printnl(n_21, o_21);
  t = m_21;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm t_21 = NULL,v_21 = NULL,w_21 = NULL;
  t_21 = t;
  t = term_x_11;
  v_21 = t;
  t = (ATerm) ATinsert(ATempty, term_f_24);
  w_21 = t;
  t = SSL_printnl(v_21, w_21);
  t = t_21;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,g_20 = NULL,h_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,q_20 = NULL,r_20 = NULL;
  u_19 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        ATerm s_20 = NULL,w_20 = NULL;
        t = term_n_24;
        s_20 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_19);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_24, (ATerm) ATmakeAppl(sym_Imported_1, u_19));
        t = w_7(s_20, w_20, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
  }
  w_19 = t;
  t = term_n_24;
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_24, term_o_24, (ATerm) ATinsert(ATempty, u_19));
  t = lookup_table_0_1(k_20, t);
  r_20 = t;
  t = term_o_24;
  l_20 = t;
  t = (ATerm) ATinsert(ATempty, u_19);
  m_20 = t;
  t = r_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(l_20, m_20, q_20, t);
  t = w_19;
  t = if_verbose4_1_0(m_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_2, t);
  v_19 = t;
  t = term_n_24;
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, v_19);
  t = h_7(p_2, h_20, v_19, t);
  t = if_verbose6_1_0(q_2, t);
  t = term_n_24;
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_24, (ATerm)ATmakeAppl(sym_Imported_1, u_19), (ATerm) ATempty);
  t = lookup_table_0_1(a_20, t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, u_19);
  b_20 = t;
  t = (ATerm) ATempty;
  c_20 = t;
  t = g_20;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(b_20, c_20, d_20, t);
  t = (ATerm) ATmakeAppl(sym__3, term_n_24, (ATerm)ATmakeAppl(sym_Imported_1, u_19), (ATerm) ATempty);
  t = if_verbose4_1_0(r_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm k_92 (ATerm), ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_22 = ATgetFirst((ATermList) t);
          r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_24 = t;
        int q_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 = NULL,t_9 = NULL,z_9 = NULL,q_1 = NULL;
            t = SSLgetAnnotations(p_22);
            i_9 = t;
            t = q_22;
            t = k_92(t);
            t_9 = t;
            t = r_22;
            t = filter_1_0(k_92, t);
            z_9 = t;
            t = (ATerm) ATinsert(CheckATermList(z_9), t_9);
            q_1 = t;
            t = SSLsetAnnotations(q_1, i_9);
            LocalPopChoice(q_24);
          }
        else
          {
            t = p_24;
            t = r_22;
            t = filter_1_0(k_92, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t)
{
  static ATerm w_22 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        t = w_22(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        t = x_81(t);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm t_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL,z_22 = NULL;
      t = term_k_9;
      x_22 = t;
      t = term_y_24;
      z_22 = t;
      t = term_z_24;
      t = w_7(x_22, z_22, t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = t_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_23 = NULL;
            t = term_e_25;
            a_23 = t;
            t = SSL_getenv(a_23);
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
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
  t = term_i_25;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  t = term_n_24;
  l_23 = t;
  t = term_k_25;
  m_23 = t;
  t = term_l_25;
  t = w_7(l_23, m_23, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm u_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_25;
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
  t = term_z_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  t = if_verbose5_1_0(u_2, t);
  g_23 = t;
  {
    ATerm a_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_23 = NULL,j_23 = NULL;
        t = term_n_24;
        i_23 = t;
        t = term_o_24;
        j_23 = t;
        t = term_d_26;
        t = w_7(i_23, j_23, t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = a_26;
        {
          ATerm k_23 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_23 = t;
          t = repeat_2_0(w_2, _id, t);
          t = k_23;
        }
      }
  }
  t = g_23;
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
static ATerm j_25 (ATerm t_23, ATerm t)
{
  ATerm b_24 = NULL,g_24 = NULL,h_24 = NULL;
  t = term_n_24;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_23);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_24, (ATerm) ATmakeAppl(sym_Tool_1, t_23));
  t = w_7(g_24, h_24, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_26 = ATgetFirst((ATermList) t);
      if(match_cons(f_26, sym__2))
        {
          ATerm h_26 = ATgetArgument(f_26, 0);
          b_24 = ATgetArgument(f_26, 1);
        }
      else
        _fail(t);
      {
        ATerm g_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_24;
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
  t = term_n_24;
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
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
      t = if_verbose5_1_0(a_3, t);
      t = xtc_load_0_0(t);
      l_24 = t;
      if(match_cons(t, sym__2))
        {
          j_24 = ATgetArgument(t, 0);
          k_24 = ATgetArgument(t, 1);
          {
            ATerm m_26 = t;
            int n_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
                t = term_n_24;
                v_24 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, j_24);
                w_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_n_24, (ATerm) ATmakeAppl(sym_Tool_1, j_24));
                t = w_7(v_24, w_24, t);
                {
                  static ATerm d_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((k_24 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((u_24 != NULL) && (u_24 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_24 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(d_3, t);
                }
                t = not_null(u_24);
                LocalPopChoice(n_26);
              }
            else
              {
                t = m_26;
                t = j_25(l_24, t);
              }
          }
        }
      else
        {
          t = j_25(l_24, t);
        }
      t = if_verbose5_1_0(f_3, t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm f_25 = NULL,o_10 = NULL,p_10 = NULL;
        f_25 = t;
        t = term_x_11;
        o_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), f_25), term_p_26);
        p_10 = t;
        t = SSL_printnl(o_10, p_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_26), f_25), term_p_26);
        t = if_verbose5_1_0(i_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  n_25 = t;
  t = u_101(t);
  t = xtc_find_0_0(t);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_25, n_25);
  {
    static ATerm m_3 (ATerm t)
    {
      ATerm o_25 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, m_25, n_25);
      t = a_7(m_25, n_25, t);
      t = term_v_26;
      o_25 = t;
      t = SSL_exit(o_25);
      return(t);
    }
    t = fork_and_wait_1_0(m_3, t);
  }
  t = n_25;
  return(t);
}
static ATerm m_7 (ATerm q_94 (ATerm), ATerm j_35, ATerm h_35, ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  s_25 = t;
  t = q_94(t);
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_25, j_35, h_35);
  t = x_7(p_25, j_35, h_35, t);
  {
    ATerm x_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_25 = NULL;
        t = term_d_27;
        y_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_25, term_d_27);
        t = w_7(p_25, y_25, t);
        {
          ATerm h_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_27;
            }
        }
        LocalPopChoice(y_26);
      }
    else
      {
        t = x_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_25 = ATgetFirst((ATermList) t);
      r_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_25, term_d_27, (ATerm) ATinsert(CheckATermList(r_25), (ATerm) ATinsert(CheckATermList(q_25), j_35)));
  t = lookup_table_0_1(p_25, t);
  x_25 = t;
  t = term_d_27;
  t_25 = t;
  t = (ATerm) ATinsert(CheckATermList(r_25), (ATerm) ATinsert(CheckATermList(q_25), j_35));
  v_25 = t;
  t = x_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(t_25, v_25, w_25, t);
  t = s_25;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm b_26 = NULL;
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_26 = NULL,v_10 = NULL;
      j_26 = t;
      t = term_k_27;
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_26, term_k_27);
      t = n_7(j_26, v_10, t);
      b_26 = t;
      t = SSL_mkstemp(b_26);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm o_26 = NULL;
        t = term_n_27;
        o_26 = t;
        t = SSL_perror(o_26);
        _fail(t);
      }
    }
  return(t);
}
static ATerm n_7 (ATerm q_32, ATerm r_32, ATerm t)
{
  t = SSL_strcat(q_32, r_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL;
  t = P__tmpdir_0_0(t);
  u_26 = t;
  t = term_q_27;
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, term_q_27);
  t = n_7(u_26, w_26, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_s_9;
  t_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_26, term_s_9);
  t = m_7(o_3, r_26, t_26, t);
  t = SSL_close(q_26);
  t = r_26;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  z_26 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm b_27 = NULL,c_27 = NULL;
      t = z_26;
      t = xtc_new_file_0_0(t);
      b_27 = t;
      t = t_0(t);
      c_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_27, (ATerm) ATinsert(ATinsert(ATempty, b_27), term_l_9));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_27);
    }
  else
    {
      ATerm e_27 = NULL,f_27 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_27;
      t = xtc_new_file_0_0(t);
      e_27 = t;
      t = t_0(t);
      f_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_27, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, e_27), term_l_9), a_27), term_s_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(r_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_27);
    }
  return(t);
}
static ATerm w_7 (ATerm e_47, ATerm f_47, ATerm t)
{
  ATerm g_27 = NULL;
  t = lookup_table_0_1(e_47, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_8(f_47, g_27, t);
  return(t);
}
static ATerm p_7 (ATerm q_45, ATerm r_45, ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  m_27 = t;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        t = w_7(q_45, r_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_28 = ATgetFirst((ATermList) t);
            l_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_28);
        {
          ATerm p_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, l_27);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_8(r_45, l_27, p_27, t);
          t = (ATerm) ATmakeAppl(sym__3, q_45, r_45, l_27);
        }
      }
    else
      {
        t = a_28;
        {
          ATerm r_27 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
          t = lookup_table_0_1(q_45, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_7(r_45, r_27, t);
          t = (ATerm) ATmakeAppl(sym__2, q_45, r_45);
        }
      }
  }
  t = m_27;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_94 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  w_27 = t;
  t = n_94(t);
  v_27 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_28 = NULL;
        t = term_d_27;
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_27, term_d_27);
        t = w_7(v_27, c_28, t);
        {
          ATerm k_28 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_28;
            }
        }
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
      u_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_27, term_d_27, t_27);
  t = lookup_table_0_1(v_27, t);
  z_27 = t;
  t = term_d_27;
  x_27 = t;
  t = z_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(x_27, t_27, y_27, t);
  t = u_27;
  {
    static ATerm s_3 (ATerm t)
    {
      ATerm d_28 = NULL;
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_27, d_28);
      t = p_7(v_27, d_28, t);
      return(t);
    }
    t = map_1_0(s_3, t);
  }
  t = w_27;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_98 (ATerm), ATerm g_98 (ATerm), ATerm t)
{
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_98(t);
      t = g_98(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      t = g_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_94 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,j_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  g_28 = t;
  t = m_94(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_28, term_d_27);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_28 = ATgetArgument(t, 0);
            ATerm u_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_27;
        v_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_28, term_d_27);
        t = w_7(f_28, v_28, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATempty;
      }
  }
  j_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_28, term_d_27, (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty));
  t = lookup_table_0_1(f_28, t);
  o_28 = t;
  t = term_d_27;
  l_28 = t;
  t = (ATerm) ATinsert(CheckATermList(j_28), (ATerm) ATempty);
  m_28 = t;
  t = o_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(l_28, m_28, n_28, t);
  t = g_28;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = term_o_27;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_29);
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = m_29;
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_o_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_101 (ATerm), ATerm t)
{
  ATerm z_28 = NULL;
  static ATerm x_3 (ATerm t)
  {
    ATerm a_29 = NULL;
    a_29 = t;
    {
      ATerm y_28 = t;
      int c_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_29 = NULL,g_29 = NULL;
          t = term_o_27;
          b_29 = t;
          t = term_d_27;
          g_29 = t;
          t = term_d_29;
          t = w_7(b_29, g_29, t);
          LocalPopChoice(c_29);
        }
      else
        {
          t = y_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((z_28 != NULL) && (z_28 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          z_28 = ATgetFirst((ATermList) t);
        {
          ATerm e_29 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = z_28;
    t = map_1_0(b_4, t);
    t = a_29;
    t = end_scope_1_0(e_4, t);
    return(t);
  }
  t = begin_scope_1_0(u_3, t);
  t = restore_always_2_0(g_101, x_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  p_29 = t;
  t = term_s_9;
  t = whoami_0_0(t);
  q_29 = t;
  t = term_x_11;
  s_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_29), q_29), term_f_29);
  t_29 = t;
  t = SSL_printnl(s_29, t_29);
  t = term_b_12;
  r_29 = t;
  t = SSL_exit(r_29);
  t = p_29;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-k"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL;
  w_29 = t;
  t = SSL_string_to_int(w_29);
  x_29 = t;
  t = term_i_29;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_29, x_29);
  t = z_7(y_29, x_29, t);
  t = w_29;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_4, k_4, m_4, t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_30 = NULL;
  d_30 = t;
  if(match_string(t, "-S"))
    {
      t = d_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_30;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm f_30 = NULL,j_30 = NULL;
  t = term_x_10;
  f_30 = t;
  t = term_k_29;
  j_30 = t;
  t = term_l_29;
  t = z_7(f_30, j_30, t);
  t = term_n_29;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_o_29;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,n_30 = NULL;
  k_30 = t;
  t = SSL_string_to_int(k_30);
  l_30 = t;
  t = term_x_10;
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, l_30);
  t = z_7(n_30, l_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_30);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  t = term_z_29;
  o_30 = t;
  t = term_s_9;
  p_30 = t;
  t = term_a_30;
  t = z_7(o_30, p_30, t);
  t = term_b_30;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, s_4, d_5, t);
      LocalPopChoice(g_30);
    }
  else
    {
      t = e_30;
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_5, g_5, i_5, t);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = Option_3_0(j_5, k_5, l_5, t);
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL;
  t = term_k_9;
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, q_50, r_50);
  t = lookup_table_0_1(q_30, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(q_50, r_50, r_30, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, q_50, r_50);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_30 = NULL,y_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
      t = term_s_9;
      t = h_0(t);
      z_30 = t;
      t = term_m_30;
      a_31 = t;
      t = term_s_30;
      b_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_s_30, z_30);
      t = x_7(a_31, b_31, z_30, t);
      _fail(t);
    }
  else
    {
      ATerm h_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_30 = ATgetFirst((ATermList) t);
          y_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_30;
      t = d_0(t);
      t = term_s_9;
      t = g_0(t);
      h_31 = t;
      t = (ATerm) ATinsert(CheckATermList(y_30), h_31);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-o"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  o_31 = t;
  t = term_l_9;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, o_31);
  t = z_7(p_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_31);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-i"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm s_31 = NULL,v_31 = NULL;
  s_31 = t;
  t = term_s_27;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_27, s_31);
  t = z_7(v_31, s_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_31);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_5, u_5, v_5, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_84 (ATerm), ATerm t)
{
  static ATerm d_33 (ATerm t)
  {
    ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
    c_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_33 = ATgetFirst((ATermList) t);
        b_33 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_11 = NULL,t_11 = NULL,t_1 = NULL;
          t = SSLgetAnnotations(c_33);
          l_11 = t;
          t = b_33;
          t = d_33(t);
          t_11 = t;
          t = (ATerm) ATinsert(CheckATermList(t_11), a_33);
          t_1 = t;
          t = SSLsetAnnotations(t_1, l_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_33;
        t = j_84(t);
      }
    return(t);
  }
  t = d_33(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_31 = NULL,z_31 = NULL,a_32 = NULL;
  x_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_31;
    }
  else
    {
      static ATerm w_5 (ATerm t)
      {
        t = not_null(a_32);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          if(((a_32 != NULL) && (a_32 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      t = at_end_1_0(w_5, t);
    }
  return(t);
}
static ATerm x_33 (ATerm j_33, ATerm t)
{
  ATerm k_33 = NULL;
  t = SSL_explode_term(j_33);
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_33;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym__2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
      {
        ATerm x_30 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_5 (ATerm t)
            {
              t = p_33;
              return(t);
            }
            t = o_33;
            t = at_end_1_0(x_5, t);
            LocalPopChoice(c_31);
          }
        else
          {
            t = x_30;
            t = x_33(q_33, t);
          }
      }
    }
  else
    {
      t = x_33(q_33, t);
    }
  return(t);
}
static ATerm q_7 (ATerm w_50, ATerm v_50, ATerm t)
{
  ATerm z_33 = NULL,a_34 = NULL,d_34 = NULL,e_34 = NULL;
  t = w_50;
  {
    ATerm d_31 = t;
    int e_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_34 = NULL;
        t = term_k_9;
        g_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_9, w_50);
        t = w_7(g_34, w_50, t);
        LocalPopChoice(e_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATempty;
      }
  }
  a_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_50, a_34);
  t = conc_0_0(t);
  z_33 = t;
  t = term_k_9;
  d_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, w_50, z_33);
  t = lookup_table_0_1(d_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(w_50, z_33, e_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_k_9, w_50, z_33);
  return(t);
}
static ATerm x_7 (ATerm l_45, ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_31 = ATgetArgument(t, 0);
            ATerm j_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, m_45);
        t = w_7(l_45, m_45, t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = (ATerm) ATempty;
      }
  }
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_45, m_45, (ATerm) ATinsert(CheckATermList(j_34), k_45));
  t = lookup_table_0_1(l_45, t);
  m_34 = t;
  t = (ATerm) ATinsert(CheckATermList(j_34), k_45);
  k_34 = t;
  t = m_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(m_45, k_34, l_34, t);
  t = i_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,a_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
      t = term_s_9;
      t = p_0(t);
      m_35 = t;
      t = term_m_30;
      n_35 = t;
      t = term_s_30;
      o_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_30, term_s_30, m_35);
      t = x_7(n_35, o_35, m_35, t);
      _fail(t);
    }
  else
    {
      ATerm u_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_34 = ATgetFirst((ATermList) t);
          w_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          a_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      t = m_0(t);
      t = x_34;
      t = o_0(t);
      u_35 = t;
      t = (ATerm) ATinsert(CheckATermList(a_35), u_35);
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
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  t = term_s_12;
  w_35 = t;
  t = (ATerm) ATinsert(ATempty, v_35);
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, (ATerm) ATinsert(ATempty, v_35));
  t = q_7(w_35, x_35, t);
  t = v_35;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, b_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_9;
  t = whoami_0_0(t);
  y_35 = t;
  t = term_x_11;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_31), y_35);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = term_b_12;
  z_35 = t;
  t = SSL_exit(z_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  t = term_k_9;
  c_36 = t;
  t = term_n_31;
  d_36 = t;
  t = term_q_31;
  t = w_7(c_36, d_36, t);
  return(t);
}
static ATerm r_7 (ATerm v_33, ATerm w_33, ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_33, w_33);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      t = SSL_addr(v_33, w_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm t)
{
  ATerm f_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_36;
      t = g_91(t);
    }
  else
    {
      ATerm l_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      t = foldr_2_0(g_91, h_91, t);
      l_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_36, l_36);
      t = h_91(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_k_29;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      p_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(p_12, q_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_36 = NULL,h_12 = NULL,j_12 = NULL;
  t = times_0_0(t);
  j_12 = t;
  t = SSL_explode_term(j_12);
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12;
  t = foldr_2_0(f_6, g_6, t);
  q_36 = t;
  t = SSL_TicksToSeconds(q_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,p_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      p_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_31 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_37;
        if((n_37 != t))
          {
            _fail(t);
          }
        t = m_37;
        LocalPopChoice(b_32);
      }
    else
      {
        t = y_31;
        t = (ATerm) ATmakeAppl(sym__2, n_37, p_37);
        {
          ATerm c_32 = t;
          int d_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_37, p_37);
              LocalPopChoice(d_32);
            }
          else
            {
              t = c_32;
              t = SSL_gtr(n_37, p_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_37, p_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_98 (ATerm), ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
        t = term_k_9;
        y_37 = t;
        t = term_x_10;
        z_37 = t;
        t = term_y_10;
        t = w_7(y_37, z_37, t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_b_12);
        t = geq_0_0(t);
        t = v_37;
        t = r_98(t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = v_37;
      }
  }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,f_38 = NULL,i_38 = NULL;
  t = run_time_0_0(t);
  c_38 = t;
  t = term_s_9;
  t = whoami_0_0(t);
  d_38 = t;
  t = term_x_11;
  f_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), c_38), term_c_13), d_38);
  i_38 = t;
  t = SSL_printnl(f_38, i_38);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_32), c_38), term_c_13), d_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_29;
  j_38 = t;
  t = SSL_exit(j_38);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  y_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_38 = ATgetArgument(t, 0);
          {
            ATerm m_13 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(y_38);
            m_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
            v_1 = t;
            t = SSLsetAnnotations(v_1, m_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_38 = NULL,n_38 = NULL;
      t = term_k_9;
      m_38 = t;
      t = term_j_32;
      n_38 = t;
      t = term_k_32;
      t = w_7(m_38, n_38, t);
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      t = fetch_1_0(j_6, t);
    }
  t = b_103(t);
  return(t);
}
static ATerm a_8 (ATerm d_50, ATerm e_50, ATerm f_50, ATerm t)
{
  ATerm c_39 = NULL;
  t = SSL_hashtable_put(f_50, d_50, e_50);
  c_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_39);
  return(t);
}
static ATerm b_8 (ATerm g_50, ATerm h_50, ATerm t)
{
  t = SSL_hashtable_get(h_50, g_50);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_46, ATerm t)
{
  ATerm q_39 = NULL;
  t = table_hashtable_0_0(t);
  q_39 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_13 = NULL;
        t = q_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_8(x_46, w_13, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm c_14 = NULL;
          t = x_46;
          t = table_create_0_0(t);
          t = q_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_8(x_46, c_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm l_50, ATerm m_50, ATerm t)
{
  ATerm t_39 = NULL;
  t = SSL_hashtable_create(l_50, m_50);
  t_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,f_40 = NULL,i_40 = NULL;
  v_39 = t;
  t = term_n_32;
  f_40 = t;
  t = term_o_32;
  i_40 = t;
  t = v_39;
  t = new_hashtable_0_2(f_40, i_40, t);
  w_39 = t;
  t = v_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(v_39, w_39, x_39, t);
  t = v_39;
  return(t);
}
static ATerm t_7 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_hashtable_remove(j_50, i_50);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_40);
  return(t);
}
static ATerm u_7 (ATerm n_50, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_hashtable_destroy(n_50);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm o_40 = NULL;
  t = SSL_table_hashtable();
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm p_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  p_40 = t;
  t = table_hashtable_0_0(t);
  t_40 = t;
  t = lookup_table_0_1(p_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_7(v_40, t);
  t = t_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(p_40, u_40, t);
  t = p_40;
  return(t);
}
ATerm map_1_0 (ATerm s_83 (ATerm), ATerm t)
{
  static ATerm s_41 (ATerm t)
  {
    ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL;
    p_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_41;
      }
    else
      {
        ATerm n_14 = NULL,x_14 = NULL,y_14 = NULL,l_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_41 = ATgetFirst((ATermList) t);
            r_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_41);
        n_14 = t;
        t = q_41;
        t = s_83(t);
        x_14 = t;
        t = r_41;
        t = s_41(t);
        y_14 = t;
        t = (ATerm) ATinsert(CheckATermList(y_14), x_14);
        l_3 = t;
        t = SSLsetAnnotations(l_3, n_14);
      }
    return(t);
  }
  t = s_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_41 = ATgetFirst((ATermList) t);
      w_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_42 = NULL,b_42 = NULL;
        static ATerm l_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), not_null(b_42));
          return(t);
        }
        t = w_41;
        t = l_0(t);
        if(((a_42 != NULL) && (a_42 != t)))
          _fail(t);
        else
          a_42 = t;
        t = v_41;
        t = j_0(t);
        if(((b_42 != NULL) && (b_42 != t)))
          _fail(t);
        else
          b_42 = t;
        t = w_41;
        t = reverse_acc_2_0(j_0, l_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_9;
      t = l_0(t);
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,o_42 = NULL,n_3 = NULL;
  o_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_42);
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_42);
  n_3 = t;
  t = SSLsetAnnotations(n_3, k_42);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_42), term_p_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL;
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_42 = NULL,j_42 = NULL;
      t = term_k_9;
      i_42 = t;
      t = term_n_31;
      j_42 = t;
      t = term_q_31;
      t = w_7(i_42, j_42, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = fetch_1_0(m_6, t);
    }
  t = term_u_32;
  t = echo_0_0(t);
  t = term_m_30;
  d_42 = t;
  t = term_s_30;
  e_42 = t;
  t = term_v_32;
  t = w_7(d_42, e_42, t);
  t = reverse_acc_2_0(_id, n_6, t);
  t = map_1_0(o_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  static ATerm n_43 (ATerm t)
  {
    ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
    k_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_43 = ATgetFirst((ATermList) t);
        m_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_32 = t;
      int x_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_15 = NULL,x_15 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(k_43);
          r_15 = t;
          t = l_43;
          t = c_84(t);
          x_15 = t;
          t = (ATerm) ATinsert(CheckATermList(m_43), x_15);
          p_3 = t;
          t = SSLsetAnnotations(p_3, r_15);
          LocalPopChoice(x_32);
        }
      else
        {
          t = w_32;
          {
            ATerm m_16 = NULL,c_17 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(k_43);
            m_16 = t;
            t = m_43;
            t = n_43(t);
            c_17 = t;
            t = (ATerm) ATinsert(CheckATermList(c_17), l_43);
            q_3 = t;
            t = SSLsetAnnotations(q_3, m_16);
          }
        }
    }
    return(t);
  }
  t = n_43(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
  r_43 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_43;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_33 = ATgetFirst((ATermList) t);
                ATerm f_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_43;
          }
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = (ATerm) ATinsert(ATempty, r_43);
      }
  }
  s_43 = t;
  t = term_n_9;
  t_43 = t;
  t = SSL_printnl(t_43, s_43);
  t = r_43;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  t = term_k_9;
  x_43 = t;
  t = term_n_31;
  y_43 = t;
  t = term_q_31;
  t = w_7(x_43, y_43, t);
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
  ATerm z_43 = NULL,a_44 = NULL;
  t = term_g_33;
  z_43 = t;
  t = term_s_9;
  a_44 = t;
  t = term_h_33;
  t = z_7(z_43, a_44, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_i_33;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
  t = term_g_33;
  d_44 = t;
  t = term_s_9;
  e_44 = t;
  t = term_h_33;
  t = z_7(d_44, e_44, t);
  t = term_l_33;
  b_44 = t;
  t = term_s_9;
  c_44 = t;
  t = term_m_33;
  t = z_7(b_44, c_44, t);
  t = term_n_33;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_6, r_6, s_6, t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      t = Option_3_0(u_6, x_6, b_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm t)
{
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,v_3 = NULL;
  k_44 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_44 = ATgetFirst((ATermList) t);
      h_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_44);
  f_44 = t;
  t = g_44;
  t = l_70(t);
  i_44 = t;
  t = h_44;
  t = m_70(t);
  j_44 = t;
  t = (ATerm) ATinsert(CheckATermList(j_44), i_44);
  v_3 = t;
  t = SSLsetAnnotations(v_3, f_44);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,u_44 = NULL,v_44 = NULL,d_4 = NULL;
  p_44 = t;
  {
    ATerm u_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_34;
        t = z_104(t);
        LocalPopChoice(y_33);
      }
    else
      {
        t = u_33;
      }
  }
  t = p_44;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_44 = ATgetFirst((ATermList) t);
      s_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_44);
  q_44 = t;
  t = term_n_31;
  v_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, r_44);
  t = z_7(v_44, r_44, t);
  t = s_44;
  {
    static ATerm n_45 (ATerm t)
    {
      ATerm c_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_34 = t;
          int n_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_44 = NULL;
              y_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_44;
              LocalPopChoice(n_34);
            }
          else
            {
              t = h_34;
              t = z_104(t);
              t = Cons_2_0(_id, n_45, t);
            }
          LocalPopChoice(f_34);
        }
      else
        {
          t = c_34;
          {
            ATerm b_45 = NULL,c_45 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_45 = ATgetFirst((ATermList) t);
                c_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_45), (ATerm) ATmakeAppl(sym_Undefined_1, b_45));
          }
        }
      return(t);
    }
    t = n_45(t);
  }
  u_44 = t;
  t = (ATerm) ATinsert(CheckATermList(u_44), (ATerm) ATmakeAppl(sym_Program_1, r_44));
  d_4 = t;
  t = SSLsetAnnotations(d_4, q_44);
  return(t);
}
static ATerm d_8 (ATerm t)
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
static ATerm g_8 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  t = term_j_32;
  e_46 = t;
  t = term_s_9;
  f_46 = t;
  t = term_o_34;
  t = z_7(e_46, f_46, t);
  t = term_p_34;
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  x_45 = t;
  t = term_m_30;
  y_45 = t;
  t = term_r_34;
  t = lookup_table_0_1(y_45, t);
  c_46 = t;
  t = term_s_30;
  z_45 = t;
  t = (ATerm) ATempty;
  a_46 = t;
  t = c_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(z_45, a_46, b_46, t);
  t = x_45;
  {
    static ATerm v_7 (ATerm t)
    {
      ATerm s_34 = t;
      int t_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_104(t);
          LocalPopChoice(t_34);
        }
      else
        {
          t = s_34;
          {
            ATerm u_34 = t;
            int y_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_8, g_8, i_8, t);
                LocalPopChoice(y_34);
              }
            else
              {
                t = u_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_7, t);
  }
  {
    ATerm z_34 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_47 = NULL;
        d_47 = t;
        {
          ATerm c_35 = t;
          int d_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_17 = NULL;
              t = d_47;
              {
                ATerm e_35 = t;
                int f_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_18 = NULL,c_18 = NULL;
                    t = term_k_9;
                    b_18 = t;
                    t = term_j_32;
                    c_18 = t;
                    t = term_k_32;
                    t = w_7(b_18, c_18, t);
                    LocalPopChoice(f_35);
                  }
                else
                  {
                    t = e_35;
                    t = fetch_1_0(j_8, t);
                  }
              }
              t = d_47;
              t = default_system_usage_0_0(t);
              t = term_k_29;
              y_17 = t;
              t = SSL_exit(y_17);
              LocalPopChoice(d_35);
            }
          else
            {
              t = c_35;
              {
                ATerm v_18 = NULL,w_18 = NULL,z_18 = NULL;
                t = term_k_9;
                w_18 = t;
                t = term_g_33;
                z_18 = t;
                t = term_g_35;
                t = w_7(w_18, z_18, t);
                t = d_47;
                t = default_system_about_0_0(t);
                t = term_k_29;
                v_18 = t;
                t = SSL_exit(v_18);
              }
            }
        }
        LocalPopChoice(b_35);
      }
    else
      {
        t = z_34;
        {
          ATerm i_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
              static ATerm k_8 (ATerm t)
              {
                ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,g_4 = NULL;
                l_47 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_47 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_47);
                j_47 = t;
                t = k_47;
                if(((v_45 != NULL) && (v_45 != t)))
                  _fail(t);
                else
                  v_45 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_47);
                g_4 = t;
                t = SSLsetAnnotations(g_4, j_47);
                return(t);
              }
              t = fetch_1_0(k_8, t);
              t = term_x_11;
              h_47 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), term_l_35);
              i_47 = t;
              t = SSL_printnl(h_47, i_47);
              t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_45)), term_l_35));
              t = default_system_usage_0_0(t);
              t = term_b_12;
              g_47 = t;
              t = SSL_exit(g_47);
              LocalPopChoice(k_35);
            }
          else
            {
              t = i_35;
            }
        }
      }
  }
  w_45 = t;
  t = term_m_30;
  t = table_destroy_0_0(t);
  t = w_45;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  t = parse_options_1_0(d_103, t);
  q_47 = t;
  t = term_p_35;
  t = table_create_0_0(t);
  t = term_p_35;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_35, term_q_35, q_47);
  t = lookup_table_0_1(r_47, t);
  u_47 = t;
  t = term_q_35;
  s_47 = t;
  t = u_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(s_47, q_47, t_47, t);
  t = q_47;
  t = f_103(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_103, t);
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        {
          ATerm t_35 = t;
          int e_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_36);
            }
          else
            {
              t = t_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm g_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(j_36);
    }
  else
    {
      t = g_36;
      {
        ATerm k_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(m_36);
          }
        else
          {
            t = k_36;
            {
              ATerm n_36 = t;
              int o_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(o_36);
                }
              else
                {
                  t = n_36;
                  {
                    ATerm p_36 = t;
                    int r_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(v_8, w_8, x_8, t);
                        LocalPopChoice(r_36);
                      }
                    else
                      {
                        t = p_36;
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
static ATerm p_8 (ATerm t)
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
  ATerm y_47 = NULL,z_47 = NULL;
  t = term_u_36;
  y_47 = t;
  t = term_s_9;
  z_47 = t;
  t = term_v_36;
  t = z_7(y_47, z_47, t);
  t = term_w_36;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_48 = NULL,c_48 = NULL,d_48 = NULL;
      t = term_k_9;
      c_48 = t;
      t = term_s_27;
      d_48 = t;
      t = term_a_37;
      t = w_7(c_48, d_48, t);
      b_48 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = term_q_9;
    }
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_48 = NULL,k_48 = NULL;
        k_48 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_48 = ATgetArgument(t, 0);
            {
              ATerm p_19 = NULL,q_5 = NULL;
              t = SSLgetAnnotations(k_48);
              p_19 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_48);
              q_5 = t;
              t = SSLsetAnnotations(q_5, p_19);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_48;
          }
        LocalPopChoice(c_37);
        t = xtc_transform_file_2_0(z_8, create_pp_table_args_0_0, t);
      }
    else
      {
        t = b_37;
        t = xtc_transform_term_2_0(a_9, create_pp_table_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_8, default_usage_0_0, _id, p_8, t);
  return(t);
}
