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
ATerm term_w_37;
ATerm term_t_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_i_37;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_l_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_i_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_g_32;
ATerm term_a_32;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_i_30;
ATerm term_y_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_s_28;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_k_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_a_12;
ATerm term_q_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_a_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_p_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_c_13, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_f_12, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_s_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_e_15, term_f_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_k_15, term_m_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_t_15, term_u_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_i_16, term_j_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_g_17, term_h_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_q_17, term_s_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_h_18, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_p_18, term_q_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_y_18, term_z_18);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_19, term_e_19, term_g_19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_19, term_j_19, term_k_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_s_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_h_20, term_j_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_n_20, term_o_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_u_20, term_v_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_20, term_y_20, term_z_20);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_u_24);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_y_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_d_24);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_v_26);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_h_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym__2, term_q_29, term_j_27);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_i_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_g_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_i_30, term_k_30);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_j_27);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_j_27);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_j_27);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__3, term_i_30, term_k_30, (ATerm) ATempty);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_i_33);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_i_37, term_j_27);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_k_27);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm s_7 (ATerm e_20, ATerm d_221, ATerm t);
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm v_7 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm b_7 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm c_7 (ATerm u_82 (ATerm), ATerm q_189, ATerm k_18, ATerm t);
static ATerm o_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t);
static ATerm d_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t);
static ATerm f_7 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm h_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm i_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm j_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm k_7 (ATerm s_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm u_7 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm i_20 (ATerm r_19, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm g_18, ATerm t);
static ATerm m_7 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_22 (ATerm c_21, ATerm t);
static ATerm b_23 (ATerm o_21, ATerm q_21, ATerm r_21, ATerm t);
static ATerm d_23 (ATerm c_22, ATerm d_22, ATerm i_22, ATerm t);
static ATerm n_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm p_28 (ATerm u_27, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_105 (ATerm), ATerm t);
static ATerm o_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm t_7 (ATerm y_32, ATerm z_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_8 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm w_7 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_8 (ATerm p_53, ATerm q_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_37 (ATerm f_37, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_7 (ATerm v_53, ATerm u_53, ATerm t);
static ATerm d_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_7 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm g_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
static ATerm h_8 (ATerm e_53, ATerm f_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_7 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm a_8 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_2 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = m_1;
        t = p_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, n_1, e_0);
        t = v_7(n_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(u_9);
      }
    else
      {
        t = d_2;
        {
          ATerm x_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = m_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm c_10 = t;
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
                            if((n_1 != t))
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
                    t = c_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_1, v_0);
              t = v_7(n_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(a_10);
            }
          else
            {
              t = x_9;
              t = m_1;
              t = p_0(t);
              if((n_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_1 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_1;
    }
  else
    {
      t = y_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm s_7 (ATerm e_20, ATerm d_221, ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    if((e_20 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = d_221;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm v_2 = NULL,w_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,y_0 = NULL,x_0 = NULL;
    f_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_3 = ATgetFirst((ATermList) t);
        c_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_3);
    a_3 = t;
    t = b_3;
    t = y_87(t);
    d_3 = t;
    t = (ATerm) ATinsert(CheckATermList(c_3), d_3);
    x_0 = t;
    t = SSLsetAnnotations(x_0, a_3);
    e_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_2 = ATgetFirst((ATermList) t);
        z_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_3);
    v_2 = t;
    t = z_2;
    if(((e_2 != NULL) && (e_2 != t)))
      _fail(t);
    else
      e_2 = t;
    t = (ATerm) ATinsert(CheckATermList(z_2), w_2);
    y_0 = t;
    t = SSLsetAnnotations(y_0, v_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, not_null(e_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm o_3 = NULL,t_3 = NULL;
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_97, t);
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm k_3 = NULL;
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      o_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm f_10 = ATgetFirst((ATermList) t);
              ATerm g_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_3;
          t = list_tokenize_1_0(d_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm h_10 = ATgetFirst((ATermList) t);
          ATerm i_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, o_3);
        }
      else
        {
          ATerm j_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_10 = ATgetFirst((ATermList) t);
              ATerm q_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_3;
          t = list_tokenize_1_0(d_97, t);
          j_4 = t;
          t = (ATerm) ATinsert(CheckATermList(j_4), o_3);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm v_4 = NULL;
  v_4 = t;
  t = SSL_implode_string(v_4);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm k_4 = NULL,m_4 = NULL,n_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,e_1 = NULL;
  t_4 = t;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  n_4 = t;
  t = SSL_explode_string(q_4);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, r_4);
  e_1 = t;
  t = SSLsetAnnotations(e_1, n_4);
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm u_4 = NULL;
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_4, k_4);
      t = s_7(u_4, k_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  i_5 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_1 = NULL;
        t = SSL_filemode(i_5);
        if(match_cons(t, sym__2))
          {
            l_1 = ATgetArgument(t, 0);
            {
              ATerm u_10 = ATgetArgument(t, 1);
              if(((ATgetType(u_10) != AT_INT) || (ATgetInt((ATermInt) u_10) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_1;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        {
          ATerm v_1 = NULL,a_2 = NULL;
          t = term_v_10;
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_10, i_5);
          t = t_7(a_2, i_5, t);
          v_1 = t;
          t = SSL_perror(v_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm v_7 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  s_5 = t;
  {
    ATerm w_10 = t;
    int x_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_5 = NULL,u_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_y_10);
        u_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_y_10));
        t = u_7(v_14, u_5, t);
        t = filemode_0_0(t);
        t_5 = t;
        t = SSL_S_ISDIR(t_5);
        t = s_5;
        LocalPopChoice(x_10);
        {
          ATerm v_5 = NULL,z_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_z_10), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          v_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_5), term_a_11), v_14);
          z_5 = t;
          t = SSL_concat_strings(z_5);
        }
      }
    else
      {
        t = w_10;
        t = v_14;
      }
  }
  r_5 = t;
  t = SSL_copy(w_14, r_5);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm b_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_6 = NULL,s_6 = NULL;
      t = term_h_11;
      r_6 = t;
      t = term_i_11;
      s_6 = t;
      t = term_j_11;
      t = c_8(r_6, s_6, t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = b_11;
      t = term_k_11;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm k_6 = NULL;
  k_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_2 = NULL,j_2 = NULL;
      t = term_i_11;
      {
        ATerm m_11 = t;
        int n_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 = NULL,l_2 = NULL;
            t = term_h_11;
            k_2 = t;
            t = term_i_11;
            l_2 = t;
            t = term_j_11;
            t = c_8(k_2, l_2, t);
            LocalPopChoice(n_11);
          }
        else
          {
            t = m_11;
            t = term_k_11;
          }
      }
      i_2 = t;
      t = term_q_11;
      j_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_11, i_2);
      t = v_7(j_2, i_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm t_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_6;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm e_7 = NULL;
  e_7 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,r_7 = NULL,y_7 = NULL;
        t = term_h_11;
        r_7 = t;
        t = term_a_12;
        y_7 = t;
        t = term_c_12;
        t = c_8(r_7, y_7, t);
        q_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_7, term_f_12);
        t = geq_0_0(t);
        t = e_7;
        t = m_102(t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = e_7;
      }
  }
  return(t);
}
static ATerm n_0 (ATerm t)
{
  t = debug_1_0(s_0, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_g_12;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,w_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,g_1 = NULL;
  k_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_12), term_h_12), k_8);
  w_8 = t;
  t = SSL_concat_strings(w_8);
  r_8 = t;
  t = (ATerm) ATinsert(ATempty, term_y_10);
  q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_8, (ATerm) ATinsert(ATempty, term_y_10));
  t = u_7(r_8, q_8, t);
  j_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, k_8);
  c_9 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_12 = ATgetArgument(t, 0);
      ATerm m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_9);
  z_8 = t;
  t = SSL_modification_time(j_8);
  a_9 = t;
  t = SSL_modification_time(k_8);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  g_1 = t;
  t = SSLsetAnnotations(g_1, z_8);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, j_8, k_8);
  p_8 = t;
  t = SSL_explode_term(p_8);
  if(match_cons(t, sym__2))
    {
      ATerm n_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_12 = ATgetArgument(t, 1);
        if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
          {
            l_8 = ATgetFirst((ATermList) o_12);
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
  t = l_8;
  t = if_verbose2_1_0(n_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  static ATerm w_9 (ATerm t);
  static ATerm w_9 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_88(t);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        {
          ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL,q_2 = NULL,t_2 = NULL,j_1 = NULL;
          s_9 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_9 = ATgetFirst((ATermList) t);
              v_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_9);
          q_2 = t;
          t = v_9;
          t = w_9(t);
          t_2 = t;
          t = (ATerm) ATinsert(CheckATermList(t_2), t_9);
          j_1 = t;
          t = SSLsetAnnotations(j_1, q_2);
        }
      }
    return(t);
  }
  t = w_9(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
      i_3 = t;
      t = term_w_12;
      j_3 = t;
      t = SSL_explode_string(j_3);
      h_3 = t;
      t = SSL_explode_string(i_3);
      {
        static ATerm t_0 (ATerm t);
        static ATerm t_0 (ATerm t)
        {
          if((h_3 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(t_0, t);
      }
      t = i_3;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_3 = NULL,r_3 = NULL,u_3 = NULL;
            r_3 = t;
            t = term_z_12;
            u_3 = t;
            t = SSL_explode_string(u_3);
            q_3 = t;
            t = SSL_explode_string(r_3);
            {
              static ATerm u_0 (ATerm t);
              static ATerm u_0 (ATerm t)
              {
                if((q_3 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(u_0, t);
            }
            t = r_3;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
              k_10 = t;
              t = term_a_13;
              m_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_10), term_b_13);
              n_10 = t;
              t = SSL_printnl(m_10, n_10);
              t = term_c_13;
              l_10 = t;
              t = SSL_exit(l_10);
              t = (ATerm) ATinsert(ATinsert(ATempty, k_10), term_b_13);
            }
          }
      }
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm c_11 = NULL,x_3 = NULL;
              c_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
              {
                ATerm f_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_4 = NULL,f_4 = NULL,s_1 = NULL;
                    f_4 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm h_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_4);
                    d_4 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, c_11);
                    s_1 = t;
                    t = SSLsetAnnotations(s_1, d_4);
                    LocalPopChoice(g_13);
                    t = xtc_transform_file_2_0(z_0, a_1, t);
                  }
                else
                  {
                    t = f_13;
                    t = xtc_transform_term_2_0(b_1, c_1, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  x_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_3;
              t = if_verbose2_1_0(d_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm l_13 = t;
  int n_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,f_11 = NULL;
      t = term_h_11;
      e_11 = t;
      t = term_p_13;
      f_11 = t;
      t = term_q_13;
      t = c_8(e_11, f_11, t);
      LocalPopChoice(n_13);
    }
  else
    {
      t = l_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm g_11 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  g_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_p_13);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_r_13;
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
  ATerm l_11 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_q_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm p_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_y_10);
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, (ATerm) ATinsert(ATempty, term_y_10));
      t = u_7(l_11, p_11, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm b_7 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm r_11 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_11);
  return(t);
}
static ATerm c_7 (ATerm u_82 (ATerm), ATerm q_189, ATerm k_18, ATerm t)
{
  ATerm s_11 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_189, term_s_13);
  t = n_7(t);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, k_18);
  t = u_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm x_11 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      if(match_cons(t_13, sym_Stream_1))
        {
          x_11 = ATgetArgument(t_13, 0);
        }
      else
        _fail(t);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(x_11, b_12, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  w_11 = t;
  t = xtc_new_file_0_0(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_11, w_11);
  t = c_7(o_1, v_11, w_11, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_11);
  t = xtc_transform_file_2_0(q_104, r_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm d_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL,o_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      k_13 = ATgetArgument(t, 0);
      {
        ATerm s_4 = NULL,w_4 = NULL;
        t = SSL_int_to_string(k_13);
        s_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_13), s_4), term_v_13);
        w_4 = t;
        t = SSL_concat_strings(w_4);
      }
    }
  else
    {
      ATerm w_5 = NULL,x_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          k_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
          o_13 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(m_13);
      w_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_13), term_a_14), w_5), term_z_13), k_13);
      x_5 = t;
      t = SSL_concat_strings(x_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm x_13 = NULL;
  static ATerm p_1 (ATerm t);
  static ATerm p_1 (ATerm t)
  {
    t = x_87(t);
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
    return(t);
  }
  t = fetch_1_0(p_1, t);
  t = not_null(x_13);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm q_1 (ATerm t);
        static ATerm q_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm f_14 = ATgetArgument(t, 0);
              if((y_13 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm g_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_21), term_w_20), term_q_20), term_k_20), term_f_20), term_y_19), term_u_19), term_p_19), term_l_19), term_h_19), term_a_19), term_s_18), term_m_18), term_e_18), term_y_17), term_t_17), term_i_17), term_b_17), term_s_16), term_l_16), term_e_16), term_a_16), term_p_15), term_h_15), term_c_15), term_y_14), term_p_14), term_j_14);
        t = fetch_elem_1_0(q_1, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_13);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_14 = NULL,r_14 = NULL;
  c_14 = t;
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm e_21 = ATgetArgument(t, 0);
            r_14 = ATgetArgument(t, 1);
            {
              ATerm f_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_21);
        {
          ATerm g_21 = t;
          int i_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_6 = NULL,m_6 = NULL,n_6 = NULL;
              t = r_14;
              {
                ATerm j_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              j_6 = t;
              t = term_a_13;
              m_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, j_6), term_k_21);
              n_6 = t;
              t = SSL_printnl(m_6, n_6);
              t = (ATerm) ATmakeAppl(sym__2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, j_6), term_k_21));
              LocalPopChoice(i_21);
            }
          else
            {
              t = g_21;
              t = c_14;
            }
        }
      }
    else
      {
        t = b_21;
        t = c_14;
      }
  }
  t = c_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm g_15 = NULL,i_15 = NULL;
  i_15 = t;
  t = fork_0_0(t);
  g_15 = t;
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_15;
        t = h_81(t);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        t = SSL_waitpid(g_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_21 = ATgetArgument(t, 0);
            if(((ATgetType(n_21) != AT_INT) || (ATgetInt((ATermInt) n_21) != 0)))
              _fail(t);
            {
              ATerm p_21 = ATgetArgument(t, 1);
            }
            {
              ATerm v_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_15;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,s_15 = NULL,v_15 = NULL;
  n_15 = t;
  t = s_82(t);
  o_15 = t;
  t = term_a_13;
  s_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_15), o_15);
  v_15 = t;
  t = SSL_printnl(s_15, v_15);
  t = n_15;
  return(t);
}
static ATerm f_7 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  static ATerm r_1 (ATerm t);
  static ATerm r_1 (ATerm t)
  {
    ATerm y_15 = NULL,z_15 = NULL;
    y_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), y_15);
    t = c_8(not_null(w_15), y_15, t);
    z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_15, z_15);
    return(t);
  }
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = lookup_table_0_1(w_15, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(x_15, t);
  t = map_1_0(r_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm h_16 = NULL;
  h_16 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
        t = term_h_11;
        p_16 = t;
        t = term_a_12;
        q_16 = t;
        t = term_c_12;
        t = c_8(p_16, q_16, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_16, term_h_20);
        t = geq_0_0(t);
        t = h_16;
        t = p_102(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = h_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm t_16 = NULL;
  t_16 = t;
  {
    ATerm y_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL;
        t = term_h_11;
        z_16 = t;
        t = term_a_12;
        a_17 = t;
        t = term_c_12;
        t = c_8(z_16, a_17, t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_g_17);
        t = geq_0_0(t);
        t = t_16;
        t = o_102(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = y_21;
        t = t_16;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm d_17 = NULL;
  d_17 = t;
  {
    ATerm b_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
        t = term_h_11;
        k_17 = t;
        t = term_a_12;
        l_17 = t;
        t = term_c_12;
        t = c_8(k_17, l_17, t);
        j_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_17, term_a_15);
        t = geq_0_0(t);
        t = d_17;
        t = q_102(t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = b_22;
        t = d_17;
      }
  }
  return(t);
}
static ATerm h_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = a_92(t);
  {
    static ATerm t_1 (ATerm t);
    static ATerm t_1 (ATerm t)
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, r_17);
      t = z_91(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm i_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm r_18 (ATerm t);
  static ATerm r_18 (ATerm t)
  {
    ATerm i_18 = NULL,l_18 = NULL,o_18 = NULL;
    i_18 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_18 = ATgetFirst((ATermList) t);
            o_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_18;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = h_7(w_91, u_1, l_18, o_18, t);
              }
              t = r_18(t);
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                ATerm v_6 = NULL,z_6 = NULL,m_3 = NULL;
                t = SSLgetAnnotations(i_18);
                v_6 = t;
                t = o_18;
                t = r_18(t);
                z_6 = t;
                t = (ATerm) ATinsert(CheckATermList(z_6), l_18);
                m_3 = t;
                t = SSLsetAnnotations(m_3, v_6);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = r_18(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      if((c_19 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm h_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_22 = ATgetArgument(t, 0);
            ATerm o_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = c_8(g_49, h_49, t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = h_22;
        t = (ATerm) ATempty;
      }
  }
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_18, i_49);
  t = i_7(w_1, w_18, i_49, t);
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, v_18);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(h_49, v_18, x_18, t);
  t = u_18;
  return(t);
}
static ATerm k_7 (ATerm s_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm z_1 (ATerm t);
  static ATerm z_1 (ATerm t)
  {
    ATerm d_19 = NULL,f_19 = NULL;
    if(match_cons(t, sym__2))
      {
        d_19 = ATgetArgument(t, 0);
        f_19 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, d_19, f_19);
    t = s_102(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(z_1, t);
  return(t);
}
static ATerm u_7 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm i_20 (ATerm r_19, ATerm t)
{
  t = SSL_fclose(r_19);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_19 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_19 = ATgetArgument(t, 0);
      {
        ATerm p_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_19);
            LocalPopChoice(r_22);
          }
        else
          {
            t = p_22;
            t = i_20(d_20, t);
          }
      }
    }
  else
    {
      t = i_20(d_20, t);
    }
  return(t);
}
static ATerm l_7 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm m_7 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm m_20 = NULL;
  t = SSL_fopen(n_55, o_55);
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_20);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_20 = NULL;
  t = SSL_stdin_stream();
  p_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_20);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_20 = NULL;
  t = SSL_stdout_stream();
  s_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_20);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_20 = NULL;
  t = SSL_stderr_stream();
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_20);
  return(t);
}
static ATerm w_22 (ATerm c_21, ATerm t)
{
  ATerm h_21 = NULL;
  t = SSL_explode_term(c_21);
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
          {
            h_21 = ATgetFirst((ATermList) x_22);
            {
              ATerm y_22 = (ATerm) ATgetNext((ATermList) x_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_21;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_21;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_21;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_21;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_23 (ATerm o_21, ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,z_21 = NULL,z_4 = NULL;
  t = SSLgetAnnotations(r_21);
  u_21 = t;
  t = o_21;
  if(match_cons(t, sym_Path_1))
    {
      z_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_21, q_21);
  z_4 = t;
  t = SSLsetAnnotations(z_4, u_21);
  if(match_cons(t, sym__2))
    {
      s_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(s_21, t_21, t);
  return(t);
}
static ATerm d_23 (ATerm c_22, ATerm d_22, ATerm i_22, ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,q_22 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(i_22);
  l_22 = t;
  t = SSL_is_string(c_22);
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_22, d_22);
  a_5 = t;
  t = SSLsetAnnotations(a_5, l_22);
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(j_22, k_22, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm s_22 = NULL,u_22 = NULL,v_22 = NULL;
  s_22 = t;
  if(match_cons(t, sym__2))
    {
      u_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_22(s_22, t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            {
              ATerm c_23 = t;
              int e_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_23(u_22, v_22, s_22, t);
                  LocalPopChoice(e_23);
                }
              else
                {
                  t = c_23;
                  t = d_23(u_22, v_22, s_22, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_22(s_22, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL,o_23 = NULL;
  o_23 = t;
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_23, term_k_23);
        t = n_7(t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        {
          ATerm d_9 = NULL,e_9 = NULL;
          t = term_l_23;
          e_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_23, o_23);
          t = t_7(e_9, o_23, t);
          d_9 = t;
          t = SSL_perror(d_9);
          _fail(t);
        }
      }
  }
  g_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(h_23, t);
  f_23 = t;
  t = g_23;
  t = fclose_0_0(t);
  t = f_23;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,c_24 = NULL;
      b_24 = t;
      t = (ATerm) ATinsert(ATempty, term_r_23);
      c_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_24, (ATerm) ATinsert(ATempty, term_r_23));
      t = u_7(b_24, c_24, t);
      LocalPopChoice(q_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_23;
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_23 = t;
            if((PushChoice() == 0))
              {
                ATerm e_24 = NULL,f_24 = NULL;
                e_24 = t;
                t = (ATerm) ATinsert(ATempty, term_y_10);
                f_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_24, (ATerm) ATinsert(ATempty, term_y_10));
                t = u_7(e_24, f_24, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_23;
              }
            t = debug_1_0(b_2, t);
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = debug_1_0(c_2, t);
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
  t = term_v_23;
  return(t);
}
static ATerm m_2 (ATerm t)
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  e_25 = t;
  t = term_a_13;
  f_25 = t;
  t = (ATerm) ATinsert(ATempty, term_x_23);
  g_25 = t;
  t = SSL_printnl(f_25, g_25);
  t = e_25;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__3))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
      m_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_7(h_25, i_25, m_25, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm n_25 = NULL,r_25 = NULL,t_25 = NULL;
  n_25 = t;
  t = term_a_13;
  r_25 = t;
  t = (ATerm) ATinsert(ATempty, term_y_23);
  t_25 = t;
  t = SSL_printnl(r_25, t_25);
  t = n_25;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  t = term_a_13;
  w_25 = t;
  t = (ATerm) ATinsert(ATempty, term_x_23);
  x_25 = t;
  t = SSL_printnl(w_25, x_25);
  t = v_25;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm g_24 = NULL,k_24 = NULL,m_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  g_24 = t;
  t = if_verbose5_1_0(g_2, t);
  {
    ATerm z_23 = t;
    if((PushChoice() == 0))
      {
        ATerm c_25 = NULL,d_25 = NULL;
        t = term_a_24;
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, g_24);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATmakeAppl(sym_Imported_1, g_24));
        t = c_8(c_25, d_25, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_23;
      }
  }
  m_24 = t;
  t = term_a_24;
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_24, term_d_24, (ATerm) ATinsert(ATempty, g_24));
  t = lookup_table_0_1(x_24, t);
  b_25 = t;
  t = term_d_24;
  y_24 = t;
  t = (ATerm) ATinsert(ATempty, g_24);
  z_24 = t;
  t = b_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(y_24, z_24, a_25, t);
  t = m_24;
  t = if_verbose4_1_0(m_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(o_2, t);
  k_24 = t;
  t = term_a_24;
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, k_24);
  t = k_7(p_2, w_24, k_24, t);
  t = if_verbose6_1_0(r_2, t);
  t = term_a_24;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_24, (ATerm)ATmakeAppl(sym_Imported_1, g_24), (ATerm) ATempty);
  t = lookup_table_0_1(p_24, t);
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, g_24);
  q_24 = t;
  t = (ATerm) ATempty;
  r_24 = t;
  t = t_24;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(q_24, r_24, s_24, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_24, (ATerm)ATmakeAppl(sym_Imported_1, g_24), (ATerm) ATempty);
  t = if_verbose4_1_0(s_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,w_26 = NULL;
  s_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_26;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_26 = ATgetFirst((ATermList) t);
          w_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_9 = NULL,y_9 = NULL,b_10 = NULL,e_5 = NULL;
            t = SSLgetAnnotations(s_26);
            q_9 = t;
            t = t_26;
            t = d_96(t);
            y_9 = t;
            t = w_26;
            t = filter_1_0(d_96, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), y_9);
            e_5 = t;
            t = SSLsetAnnotations(e_5, q_9);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = w_26;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  static ATerm b_27 (ATerm t);
  static ATerm b_27 (ATerm t)
  {
    ATerm j_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = b_27(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = j_24;
        t = q_85(t);
      }
    return(t);
  }
  t = b_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_27 = NULL,d_27 = NULL;
      t = term_h_11;
      c_27 = t;
      t = term_u_24;
      d_27 = t;
      t = term_v_24;
      t = c_8(c_27, d_27, t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm j_25 = t;
        int q_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_27 = NULL;
            t = term_s_25;
            e_27 = t;
            t = SSL_getenv(e_27);
            LocalPopChoice(q_25);
          }
        else
          {
            t = j_25;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_u_25;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  t = term_a_24;
  o_27 = t;
  t = term_y_25;
  p_27 = t;
  t = term_z_25;
  t = c_8(o_27, p_27, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_26;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = debug_1_0(l_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_27 = NULL;
  t = if_verbose5_1_0(u_2, t);
  i_27 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_27 = NULL,m_27 = NULL;
        t = term_a_24;
        l_27 = t;
        t = term_d_24;
        m_27 = t;
        t = term_e_26;
        t = c_8(l_27, m_27, t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm n_27 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_27 = t;
          t = repeat_2_0(y_2, _id, t);
          t = n_27;
        }
      }
  }
  t = i_27;
  t = if_verbose5_1_0(g_3, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm p_28 (ATerm u_27, ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,a_28 = NULL;
  t = term_a_24;
  y_27 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, u_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATmakeAppl(sym_Tool_1, u_27));
  t = c_8(y_27, a_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_26 = ATgetFirst((ATermList) t);
      if(match_cons(g_26, sym__2))
        {
          ATerm i_26 = ATgetArgument(g_26, 0);
          x_27 = ATgetArgument(g_26, 1);
        }
      else
        _fail(t);
      {
        ATerm h_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_27;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_a_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
      t = if_verbose5_1_0(n_3, t);
      t = xtc_load_0_0(t);
      d_28 = t;
      if(match_cons(t, sym__2))
        {
          b_28 = ATgetArgument(t, 0);
          c_28 = ATgetArgument(t, 1);
          {
            ATerm m_26 = t;
            int n_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL;
                t = term_a_24;
                h_28 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, b_28);
                i_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_a_24, (ATerm) ATmakeAppl(sym_Tool_1, b_28));
                t = c_8(h_28, i_28, t);
                {
                  static ATerm s_3 (ATerm t);
                  static ATerm s_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((c_28 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(s_3, t);
                }
                t = not_null(g_28);
                LocalPopChoice(n_26);
              }
            else
              {
                t = m_26;
                t = p_28(d_28, t);
              }
          }
        }
      else
        {
          t = p_28(d_28, t);
        }
      t = if_verbose5_1_0(v_3, t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm o_28 = NULL,o_10 = NULL,p_10 = NULL;
        o_28 = t;
        t = term_a_13;
        o_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), o_28), term_o_26);
        p_10 = t;
        t = SSL_printnl(o_10, p_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), o_28), term_o_26);
        t = if_verbose5_1_0(y_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  u_28 = t;
  t = u_105(t);
  t = xtc_find_0_0(t);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
  {
    static ATerm a_4 (ATerm t);
    static ATerm a_4 (ATerm t)
    {
      ATerm v_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_28, u_28);
      t = d_7(t_28, u_28, t);
      t = term_q_26;
      v_28 = t;
      t = SSL_exit(v_28);
      return(t);
    }
    t = fork_and_wait_1_0(a_4, t);
  }
  t = u_28;
  return(t);
}
static ATerm o_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,a_29 = NULL,b_29 = NULL,d_29 = NULL,e_29 = NULL,i_29 = NULL,j_29 = NULL;
  b_29 = t;
  t = j_98(t);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_28, u_35, s_35);
  t = d_8(w_28, u_35, s_35, t);
  {
    ATerm r_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL;
        t = term_v_26;
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_28, term_v_26);
        t = c_8(w_28, k_29, t);
        {
          ATerm x_26 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_26;
            }
        }
        LocalPopChoice(u_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_28 = ATgetFirst((ATermList) t);
      a_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_28, term_v_26, (ATerm) ATinsert(CheckATermList(a_29), (ATerm) ATinsert(CheckATermList(x_28), u_35)));
  t = lookup_table_0_1(w_28, t);
  j_29 = t;
  t = term_v_26;
  d_29 = t;
  t = (ATerm) ATinsert(CheckATermList(a_29), (ATerm) ATinsert(CheckATermList(x_28), u_35));
  e_29 = t;
  t = j_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(d_29, e_29, i_29, t);
  t = b_29;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm o_29 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_29 = NULL,t_10 = NULL;
      s_29 = t;
      t = term_a_27;
      t_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_29, term_a_27);
      t = t_7(s_29, t_10, t);
      o_29 = t;
      t = SSL_mkstemp(o_29);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm t_29 = NULL;
        t = term_f_27;
        t_29 = t;
        t = SSL_perror(t_29);
        _fail(t);
      }
    }
  return(t);
}
static ATerm t_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,a_30 = NULL,b_30 = NULL;
  t = P__tmpdir_0_0(t);
  a_30 = t;
  t = term_h_27;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_30, term_h_27);
  t = t_7(a_30, b_30, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_29 = ATgetArgument(t, 0);
      v_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_j_27;
  x_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, term_j_27);
  t = o_7(b_4, w_29, x_29, t);
  t = SSL_close(v_29);
  t = w_29;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_30 = NULL,j_30 = NULL;
      t = d_30;
      t = xtc_new_file_0_0(t);
      h_30 = t;
      t = r_0(t);
      j_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_30, (ATerm) ATinsert(ATinsert(ATempty, h_30), term_i_11));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_30);
    }
  else
    {
      ATerm l_30 = NULL,m_30 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_30;
      t = xtc_new_file_0_0(t);
      l_30 = t;
      t = r_0(t);
      m_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_30), term_i_11), e_30), term_k_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_30);
    }
  return(t);
}
static ATerm c_8 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm o_30 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(d_50, o_30, t);
  return(t);
}
static ATerm w_7 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL;
  t_30 = t;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = c_8(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_27 = ATgetFirst((ATermList) t);
            s_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_27);
        {
          ATerm u_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, s_30);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(p_48, s_30, u_30, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, s_30);
        }
      }
    else
      {
        t = q_27;
        {
          ATerm x_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              x_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(p_48, x_30, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = t_30;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,e_31 = NULL,h_31 = NULL,j_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL;
  j_31 = t;
  t = g_98(t);
  h_31 = t;
  {
    ATerm t_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL;
        t = term_v_26;
        s_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_31, term_v_26);
        t = c_8(h_31, s_31, t);
        {
          ATerm w_27 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = w_27;
            }
        }
        LocalPopChoice(v_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_31 = ATgetFirst((ATermList) t);
      z_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, h_31, term_v_26, z_30);
  t = lookup_table_0_1(h_31, t);
  r_31 = t;
  t = term_v_26;
  p_31 = t;
  t = r_31;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(p_31, z_30, q_31, t);
  t = e_31;
  {
    static ATerm c_4 (ATerm t);
    static ATerm c_4 (ATerm t)
    {
      ATerm u_31 = NULL;
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, u_31);
      t = w_7(h_31, u_31, t);
      return(t);
    }
    t = map_1_0(c_4, t);
  }
  t = j_31;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm z_27 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_101(t);
      t = a_102(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = z_27;
      t = a_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,h_32 = NULL,i_32 = NULL,l_32 = NULL;
  d_32 = t;
  t = f_98(t);
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_31, term_v_26);
  {
    ATerm f_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            ATerm l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_26;
        q_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_31, term_v_26);
        t = c_8(z_31, q_32, t);
        LocalPopChoice(j_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATempty;
      }
  }
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_31, term_v_26, (ATerm) ATinsert(CheckATermList(e_32), (ATerm) ATempty));
  t = lookup_table_0_1(z_31, t);
  l_32 = t;
  t = term_v_26;
  f_32 = t;
  t = (ATerm) ATinsert(CheckATermList(e_32), (ATerm) ATempty);
  h_32 = t;
  t = l_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(f_32, h_32, i_32, t);
  t = d_32;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_33);
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
        t = e_33;
      }
  }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm v_32 = NULL;
  static ATerm g_4 (ATerm t);
  static ATerm g_4 (ATerm t)
  {
    ATerm w_32 = NULL;
    w_32 = t;
    {
      ATerm q_28 = t;
      int r_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_32 = NULL,a_33 = NULL;
          t = term_g_27;
          x_32 = t;
          t = term_v_26;
          a_33 = t;
          t = term_s_28;
          t = c_8(x_32, a_33, t);
          LocalPopChoice(r_28);
        }
      else
        {
          t = q_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((v_32 != NULL) && (v_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          v_32 = ATgetFirst((ATermList) t);
        {
          ATerm y_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_32;
    t = map_1_0(h_4, t);
    t = w_32;
    t = end_scope_1_0(i_4, t);
    return(t);
  }
  t = begin_scope_1_0(e_4, t);
  t = restore_always_2_0(d_105, g_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL;
  j_33 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  k_33 = t;
  t = term_a_13;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_29), k_33), term_z_28);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = term_c_13;
  l_33 = t;
  t = SSL_exit(l_33);
  t = j_33;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  if(match_string(t, "-k"))
    {
      t = v_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_33;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  t = SSL_string_to_int(w_33);
  x_33 = t;
  t = term_f_29;
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_29, x_33);
  t = f_8(y_33, x_33, t);
  t = w_33;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_g_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, o_4, x_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  if(match_string(t, "-S"))
    {
      t = b_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_34;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  t = term_a_12;
  d_34 = t;
  t = term_h_29;
  e_34 = t;
  t = term_l_29;
  t = f_8(d_34, e_34, t);
  t = term_m_29;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_n_29;
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
  ATerm f_34 = NULL,i_34 = NULL,j_34 = NULL;
  f_34 = t;
  t = SSL_string_to_int(f_34);
  i_34 = t;
  t = term_a_12;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, i_34);
  t = f_8(j_34, i_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_34);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_p_29;
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
  ATerm k_34 = NULL,n_34 = NULL;
  t = term_q_29;
  k_34 = t;
  t = term_j_27;
  n_34 = t;
  t = term_r_29;
  t = f_8(k_34, n_34, t);
  t = term_u_29;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_29 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, b_5, c_5, t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = z_29;
      {
        ATerm f_30 = t;
        int g_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, h_5, t);
            LocalPopChoice(g_30);
          }
        else
          {
            t = f_30;
            t = Option_3_0(j_5, k_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL;
  t = term_h_11;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_11, p_53, q_53);
  t = lookup_table_0_1(o_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(p_53, q_53, p_34, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_11, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_35 = NULL,b_35 = NULL,e_35 = NULL;
      t = term_j_27;
      t = g_0(t);
      a_35 = t;
      t = term_i_30;
      b_35 = t;
      t = term_k_30;
      e_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_k_30, a_35);
      t = d_8(b_35, e_35, a_35, t);
      _fail(t);
    }
  else
    {
      ATerm h_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_34;
      t = d_0(t);
      t = term_j_27;
      t = f_0(t);
      h_35 = t;
      t = (ATerm) ATinsert(CheckATermList(y_34), h_35);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  if(match_string(t, "-o"))
    {
      t = j_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_35;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  k_35 = t;
  t = term_i_11;
  l_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, k_35);
  t = f_8(l_35, k_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_35);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  if(match_string(t, "-i"))
    {
      t = y_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_35;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  z_35 = t;
  t = term_k_27;
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, z_35);
  t = f_8(a_36, z_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_35);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_5, y_5, a_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  static ATerm b_37 (ATerm t);
  static ATerm b_37 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    a_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_36 = ATgetFirst((ATermList) t);
        z_36 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_11 = NULL,u_11 = NULL,g_5 = NULL;
          t = SSLgetAnnotations(a_37);
          o_11 = t;
          t = z_36;
          t = b_37(t);
          u_11 = t;
          t = (ATerm) ATinsert(CheckATermList(u_11), y_36);
          g_5 = t;
          t = SSLsetAnnotations(g_5, o_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_37;
        t = c_88(t);
      }
    return(t);
  }
  t = b_37(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_36 = NULL,f_36 = NULL,g_36 = NULL;
  d_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_36;
    }
  else
    {
      static ATerm b_6 (ATerm t);
      static ATerm b_6 (ATerm t)
      {
        t = not_null(g_36);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_36 = ATgetFirst((ATermList) t);
          if(((g_36 != NULL) && (g_36 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_36;
      t = at_end_1_0(b_6, t);
    }
  return(t);
}
static ATerm q_37 (ATerm f_37, ATerm t)
{
  ATerm g_37 = NULL;
  t = SSL_explode_term(f_37);
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_37;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  l_37 = t;
  if(match_cons(t, sym__2))
    {
      j_37 = ATgetArgument(t, 0);
      k_37 = ATgetArgument(t, 1);
      {
        ATerm r_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_6 (ATerm t);
            static ATerm c_6 (ATerm t)
            {
              t = k_37;
              return(t);
            }
            t = j_37;
            t = at_end_1_0(c_6, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = r_30;
            t = q_37(l_37, t);
          }
      }
    }
  else
    {
      t = q_37(l_37, t);
    }
  return(t);
}
static ATerm p_7 (ATerm v_53, ATerm u_53, ATerm t)
{
  ATerm r_37 = NULL,y_37 = NULL,b_38 = NULL,c_38 = NULL;
  t = v_53;
  {
    ATerm w_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL;
        t = term_h_11;
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_11, v_53);
        t = c_8(e_38, v_53, t);
        LocalPopChoice(y_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATempty;
      }
  }
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_53, y_37);
  t = conc_0_0(t);
  r_37 = t;
  t = term_h_11;
  b_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_11, v_53, r_37);
  t = lookup_table_0_1(b_38, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(v_53, r_37, c_38, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_11, v_53, r_37);
  return(t);
}
static ATerm d_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_31 = ATgetArgument(t, 0);
            ATerm d_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = c_8(j_48, k_48, t);
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
  }
  h_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(h_38), i_48));
  t = lookup_table_0_1(j_48, t);
  n_38 = t;
  t = (ATerm) ATinsert(CheckATermList(h_38), i_48);
  l_38 = t;
  t = n_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(k_48, l_38, m_38, t);
  t = g_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
      t = term_j_27;
      t = o_0(t);
      c_39 = t;
      t = term_i_30;
      d_39 = t;
      t = term_k_30;
      e_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_30, term_k_30, c_39);
      t = d_8(d_39, e_39, c_39, t);
      _fail(t);
    }
  else
    {
      ATerm k_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_38 = ATgetFirst((ATermList) t);
          y_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_38 = ATgetFirst((ATermList) t);
          a_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_38;
      t = l_0(t);
      t = z_38;
      t = m_0(t);
      k_39 = t;
      t = (ATerm) ATinsert(CheckATermList(a_39), k_39);
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
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  t = term_p_13;
  m_39 = t;
  t = (ATerm) ATinsert(ATempty, l_39);
  n_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATinsert(ATempty, l_39));
  t = p_7(m_39, n_39, t);
  t = l_39;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, h_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_27;
  t = whoami_0_0(t);
  o_39 = t;
  t = term_a_13;
  q_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_31), o_39);
  r_39 = t;
  t = SSL_printnl(q_39, r_39);
  t = term_c_13;
  p_39 = t;
  t = SSL_exit(p_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_39 = NULL,x_39 = NULL;
  t = term_h_11;
  u_39 = t;
  t = term_i_31;
  x_39 = t;
  t = term_k_31;
  t = c_8(u_39, x_39, t);
  return(t);
}
static ATerm x_7 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,d_40 = NULL;
  z_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_39;
      t = z_94(t);
    }
  else
    {
      ATerm g_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_40 = ATgetFirst((ATermList) t);
          d_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_40;
      t = foldr_2_0(z_94, a_95, t);
      g_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_40, g_40);
      t = a_95(t);
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
  t = term_h_29;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(i_12, j_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_40 = NULL,d_12 = NULL,e_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = foldr_2_0(l_6, o_6, t);
  n_40 = t;
  t = SSL_TicksToSeconds(n_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_41 = NULL,j_41 = NULL,k_41 = NULL;
  g_41 = t;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_41;
        if((j_41 != t))
          {
            _fail(t);
          }
        t = g_41;
        LocalPopChoice(t_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
        {
          ATerm v_31 = t;
          int w_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_41, k_41);
              LocalPopChoice(w_31);
            }
          else
            {
              t = v_31;
              t = SSL_gtr(j_41, k_41);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_41, k_41);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm u_41 = NULL;
  u_41 = t;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_41 = NULL,x_41 = NULL,a_42 = NULL;
        t = term_h_11;
        x_41 = t;
        t = term_a_12;
        a_42 = t;
        t = term_c_12;
        t = c_8(x_41, a_42, t);
        w_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_41, term_c_13);
        t = geq_0_0(t);
        t = u_41;
        t = l_102(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = u_41;
      }
  }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_42 = NULL,f_42 = NULL,i_42 = NULL,j_42 = NULL;
  t = run_time_0_0(t);
  c_42 = t;
  t = term_j_27;
  t = whoami_0_0(t);
  f_42 = t;
  t = term_a_13;
  i_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), c_42), term_z_13), f_42);
  j_42 = t;
  t = SSL_printnl(i_42, j_42);
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_32), c_42), term_z_13), f_42));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_42 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_29;
  l_42 = t;
  t = SSL_exit(l_42);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  y_42 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_42;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_42 = ATgetArgument(t, 0);
          {
            ATerm i_13 = NULL,l_5 = NULL;
            t = SSLgetAnnotations(y_42);
            i_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_42);
            l_5 = t;
            t = SSLsetAnnotations(l_5, i_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_42;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_42 = NULL,r_42 = NULL;
      t = term_h_11;
      q_42 = t;
      t = term_g_32;
      r_42 = t;
      t = term_j_32;
      t = c_8(q_42, r_42, t);
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
      t = fetch_1_0(q_6, t);
    }
  t = b_107(t);
  return(t);
}
static ATerm g_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm a_43 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_43);
  return(t);
}
static ATerm h_8 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm j_43 = NULL;
  t = table_hashtable_0_0(t);
  j_43 = t;
  {
    ATerm k_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_13 = NULL;
        t = j_43;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_8(v_49, u_13, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = k_32;
        {
          ATerm b_14 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = j_43;
          if(match_cons(t, sym_Hashtable_1))
            {
              b_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_8(v_49, b_14, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm m_43 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_43);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,r_43 = NULL,s_43 = NULL;
  n_43 = t;
  t = term_n_32;
  r_43 = t;
  t = term_o_32;
  s_43 = t;
  t = n_43;
  t = new_hashtable_0_2(r_43, s_43, t);
  o_43 = t;
  t = n_43;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(n_43, o_43, p_43, t);
  t = n_43;
  return(t);
}
static ATerm z_7 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm t_43 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_43);
  return(t);
}
static ATerm a_8 (ATerm l_53, ATerm t)
{
  ATerm u_43 = NULL;
  t = SSL_hashtable_destroy(l_53);
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_43);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_table_hashtable();
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_43);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,b_44 = NULL;
  w_43 = t;
  t = table_hashtable_0_0(t);
  x_43 = t;
  t = lookup_table_0_1(w_43, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(b_44, t);
  t = x_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(w_43, y_43, t);
  t = w_43;
  return(t);
}
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  static ATerm v_44 (ATerm t);
  static ATerm v_44 (ATerm t)
  {
    ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
    s_44 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_44;
      }
    else
      {
        ATerm m_14 = NULL,t_14 = NULL,u_14 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_44 = ATgetFirst((ATermList) t);
            u_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_44);
        m_14 = t;
        t = t_44;
        t = l_87(t);
        t_14 = t;
        t = u_44;
        t = v_44(t);
        u_14 = t;
        t = (ATerm) ATinsert(CheckATermList(u_14), t_14);
        d_6 = t;
        t = SSLsetAnnotations(d_6, m_14);
      }
    return(t);
  }
  t = v_44(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_44 = ATgetFirst((ATermList) t);
      z_44 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_45 = NULL,e_45 = NULL;
        static ATerm t_6 (ATerm t);
        static ATerm t_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(d_45)), not_null(e_45));
          return(t);
        }
        t = z_44;
        t = j_0(t);
        if(((d_45 != NULL) && (d_45 != t)))
          _fail(t);
        else
          d_45 = t;
        t = y_44;
        t = h_0(t);
        if(((e_45 != NULL) && (e_45 != t)))
          _fail(t);
        else
          e_45 = t;
        t = z_44;
        t = reverse_acc_2_0(h_0, t_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_27;
      t = j_0(t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL,g_6 = NULL;
  m_45 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_45);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_45);
  g_6 = t;
  t = SSLsetAnnotations(g_6, k_45);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_45), term_p_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_45 = NULL,j_45 = NULL;
      t = term_h_11;
      i_45 = t;
      t = term_i_31;
      j_45 = t;
      t = term_k_31;
      t = c_8(i_45, j_45, t);
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      t = fetch_1_0(u_6, t);
    }
  t = term_t_32;
  t = echo_0_0(t);
  t = term_i_30;
  g_45 = t;
  t = term_k_30;
  h_45 = t;
  t = term_u_32;
  t = c_8(g_45, h_45, t);
  t = reverse_acc_2_0(_id, w_6, t);
  t = map_1_0(x_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm l_46 (ATerm t);
  static ATerm l_46 (ATerm t)
  {
    ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
    i_46 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_46 = ATgetFirst((ATermList) t);
        k_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_15 = NULL,r_15 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(i_46);
          l_15 = t;
          t = j_46;
          t = v_87(t);
          r_15 = t;
          t = (ATerm) ATinsert(CheckATermList(k_46), r_15);
          i_6 = t;
          t = SSLsetAnnotations(i_6, l_15);
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          {
            ATerm f_16 = NULL,k_16 = NULL,y_6 = NULL;
            t = SSLgetAnnotations(i_46);
            f_16 = t;
            t = k_46;
            t = l_46(t);
            k_16 = t;
            t = (ATerm) ATinsert(CheckATermList(k_16), j_46);
            y_6 = t;
            t = SSLsetAnnotations(y_6, f_16);
          }
        }
    }
    return(t);
  }
  t = l_46(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  {
    ATerm d_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_46;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_33 = ATgetFirst((ATermList) t);
                ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_46;
          }
        LocalPopChoice(f_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATinsert(ATempty, p_46);
      }
  }
  q_46 = t;
  t = term_k_11;
  r_46 = t;
  t = SSL_printnl(r_46, q_46);
  t = p_46;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL;
  t = term_h_11;
  v_46 = t;
  t = term_i_31;
  w_46 = t;
  t = term_k_31;
  t = c_8(v_46, w_46, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  t = term_i_33;
  x_46 = t;
  t = term_j_27;
  y_46 = t;
  t = term_m_33;
  t = f_8(x_46, y_46, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_p_33;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL;
  t = term_i_33;
  b_47 = t;
  t = term_j_27;
  c_47 = t;
  t = term_m_33;
  t = f_8(b_47, c_47, t);
  t = term_q_33;
  z_46 = t;
  t = term_j_27;
  a_47 = t;
  t = term_r_33;
  t = f_8(z_46, a_47, t);
  t = term_s_33;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_7, g_7, b_8, t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = u_33;
      t = Option_3_0(e_8, i_8, m_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm d_47 = NULL,e_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_9 = NULL;
  i_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_47 = ATgetFirst((ATermList) t);
      f_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_47);
  d_47 = t;
  t = e_47;
  t = a_74(t);
  g_47 = t;
  t = f_47;
  t = b_74(t);
  h_47 = t;
  t = (ATerm) ATinsert(CheckATermList(h_47), g_47);
  j_9 = t;
  t = SSLsetAnnotations(j_9, d_47);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,s_47 = NULL,t_47 = NULL,l_9 = NULL;
  n_47 = t;
  {
    ATerm a_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_34;
        t = z_108(t);
        LocalPopChoice(c_34);
      }
    else
      {
        t = a_34;
      }
  }
  t = n_47;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_47 = ATgetFirst((ATermList) t);
      q_47 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_47);
  o_47 = t;
  t = term_i_31;
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_31, p_47);
  t = f_8(t_47, p_47, t);
  t = q_47;
  {
    static ATerm l_48 (ATerm t);
    static ATerm l_48 (ATerm t)
    {
      ATerm m_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_34 = t;
          int s_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_47 = NULL;
              w_47 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_47;
              LocalPopChoice(s_34);
            }
          else
            {
              t = r_34;
              t = z_108(t);
              t = Cons_2_0(_id, l_48, t);
            }
          LocalPopChoice(q_34);
        }
      else
        {
          t = m_34;
          {
            ATerm z_47 = NULL,a_48 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_47 = ATgetFirst((ATermList) t);
                a_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_48), (ATerm) ATmakeAppl(sym_Undefined_1, z_47));
          }
        }
      return(t);
    }
    t = l_48(t);
  }
  s_47 = t;
  t = (ATerm) ATinsert(CheckATermList(s_47), (ATerm) ATmakeAppl(sym_Program_1, p_47));
  l_9 = t;
  t = SSLsetAnnotations(l_9, o_47);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm b_49 = NULL;
  b_49 = t;
  if(match_string(t, "--help"))
    {
      t = b_49;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_49;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_49;
        }
    }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm c_49 = NULL,d_49 = NULL;
  t = term_g_32;
  c_49 = t;
  t = term_j_27;
  d_49 = t;
  t = term_t_34;
  t = f_8(c_49, d_49, t);
  t = term_u_34;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_v_34;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL;
  v_48 = t;
  t = term_i_30;
  w_48 = t;
  t = term_w_34;
  t = lookup_table_0_1(w_48, t);
  a_49 = t;
  t = term_k_30;
  x_48 = t;
  t = (ATerm) ATempty;
  y_48 = t;
  t = a_49;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(x_48, y_48, z_48, t);
  t = v_48;
  {
    static ATerm n_8 (ATerm t);
    static ATerm n_8 (ATerm t)
    {
      ATerm z_34 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_108(t);
          LocalPopChoice(c_35);
        }
      else
        {
          t = z_34;
          {
            ATerm d_35 = t;
            int f_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_8, s_8, t_8, t);
                LocalPopChoice(f_35);
              }
            else
              {
                t = d_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_8, t);
  }
  {
    ATerm g_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_50 = NULL;
        b_50 = t;
        {
          ATerm m_35 = t;
          int n_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_16 = NULL;
              t = b_50;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm c_17 = NULL,f_17 = NULL;
                    t = term_h_11;
                    c_17 = t;
                    t = term_g_32;
                    f_17 = t;
                    t = term_j_32;
                    t = c_8(c_17, f_17, t);
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    t = fetch_1_0(u_8, t);
                  }
              }
              t = b_50;
              t = default_system_usage_0_0(t);
              t = term_h_29;
              y_16 = t;
              t = SSL_exit(y_16);
              LocalPopChoice(n_35);
            }
          else
            {
              t = m_35;
              {
                ATerm m_17 = NULL,n_17 = NULL,p_17 = NULL;
                t = term_h_11;
                n_17 = t;
                t = term_i_33;
                p_17 = t;
                t = term_q_35;
                t = c_8(n_17, p_17, t);
                t = b_50;
                t = default_system_about_0_0(t);
                t = term_h_29;
                m_17 = t;
                t = SSL_exit(m_17);
              }
            }
        }
        LocalPopChoice(i_35);
      }
    else
      {
        t = g_35;
        {
          ATerm r_35 = t;
          int t_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
              static ATerm v_8 (ATerm t);
              static ATerm v_8 (ATerm t)
              {
                ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL,n_9 = NULL;
                j_50 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_50 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_50);
                h_50 = t;
                t = i_50;
                if(((t_48 != NULL) && (t_48 != t)))
                  _fail(t);
                else
                  t_48 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_50);
                n_9 = t;
                t = SSLsetAnnotations(n_9, h_50);
                return(t);
              }
              t = fetch_1_0(v_8, t);
              t = term_a_13;
              f_50 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_48)), term_v_35);
              g_50 = t;
              t = SSL_printnl(f_50, g_50);
              t = (ATerm) ATmakeAppl(sym__2, term_a_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_48)), term_v_35));
              t = default_system_usage_0_0(t);
              t = term_c_13;
              e_50 = t;
              t = SSL_exit(e_50);
              LocalPopChoice(t_35);
            }
          else
            {
              t = r_35;
            }
        }
      }
  }
  u_48 = t;
  t = term_i_30;
  t = table_destroy_0_0(t);
  t = u_48;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL;
  t = parse_options_1_0(d_107, t);
  o_50 = t;
  t = term_w_35;
  t = table_create_0_0(t);
  t = term_w_35;
  p_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_35, term_x_35, o_50);
  t = lookup_table_0_1(p_50, t);
  s_50 = t;
  t = term_x_35;
  q_50 = t;
  t = s_50;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(q_50, o_50, r_50, t);
  t = o_50;
  t = f_107(t);
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_107, t);
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        {
          ATerm e_36 = t;
          int h_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_36);
            }
          else
            {
              t = e_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = pp_options_0_0(t);
          LocalPopChoice(l_36);
        }
      else
        {
          t = k_36;
          {
            ATerm m_36 = t;
            int n_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_option_0_0(t);
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
                      t = output_option_0_0(t);
                      LocalPopChoice(p_36);
                    }
                  else
                    {
                      t = o_36;
                      {
                        ATerm q_36 = t;
                        int r_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Option_3_0(f_9, g_9, h_9, t);
                            LocalPopChoice(r_36);
                          }
                        else
                          {
                            t = q_36;
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
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            {
              ATerm w_36 = t;
              int x_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_36);
                }
              else
                {
                  t = w_36;
                  {
                    ATerm c_37 = t;
                    int d_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(i_9, k_9, m_9, t);
                        LocalPopChoice(d_37);
                      }
                    else
                      {
                        t = c_37;
                        {
                          ATerm e_37 = t;
                          int h_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(h_37);
                            }
                          else
                            {
                              t = e_37;
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
static ATerm y_8 (ATerm t)
{
  t = xtc_temp_files_1_0(o_9, t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  t = term_i_37;
  w_50 = t;
  t = term_j_27;
  x_50 = t;
  t = term_m_37;
  t = f_8(w_50, x_50, t);
  t = term_n_37;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm y_50 = NULL,z_50 = NULL;
  t = term_i_37;
  y_50 = t;
  t = term_j_27;
  z_50 = t;
  t = term_m_37;
  t = f_8(y_50, z_50, t);
  t = term_n_37;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_o_37;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm p_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
      t = term_h_11;
      c_51 = t;
      t = term_k_27;
      d_51 = t;
      t = term_t_37;
      t = c_8(c_51, d_51, t);
      b_51 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_51);
      LocalPopChoice(s_37);
    }
  else
    {
      t = p_37;
      t = term_q_11;
    }
  {
    ATerm u_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_51 = NULL,k_51 = NULL;
        k_51 = t;
        if(match_cons(t, sym_FILE_1))
          {
            j_51 = ATgetArgument(t, 0);
            {
              ATerm u_17 = NULL,z_9 = NULL;
              t = SSLgetAnnotations(k_51);
              u_17 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_51);
              z_9 = t;
              t = SSLsetAnnotations(z_9, u_17);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = k_51;
          }
        LocalPopChoice(v_37);
        t = xtc_transform_file_2_0(p_9, create_pp_table_args_0_0, t);
      }
    else
      {
        t = u_37;
        t = xtc_transform_term_2_0(r_9, create_pp_table_args_0_0, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_w_37;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_8, default_usage_0_0, _id, y_8, t);
  return(t);
}
