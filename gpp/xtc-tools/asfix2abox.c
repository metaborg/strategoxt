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
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_z_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_t_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_c_34;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_l_30;
ATerm term_d_30;
ATerm term_w_28;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_j_28;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_m_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_t_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_p_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
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
ATerm term_s_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_j_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_m_11;
ATerm term_e_11;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/filemode: Cannot get filemode from ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(47);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_b_12);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_s_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_b_14, term_r_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_c_13, term_u_15);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_15, term_y_15, term_a_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_n_16, term_p_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_a_17, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_t_17, term_u_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_s_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_p_19, term_q_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_h_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_20, term_r_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_w_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_b_21);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_21, term_g_21, term_h_21);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_k_21, term_l_21);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_21, term_t_21, term_u_21);
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_21, term_x_21, term_y_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_22, term_b_22, term_c_22);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_r_26);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_z_26);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_g_25);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_q_28, term_j_28);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_w_28);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_l_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_31);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym__2, term_s_31, term_c_15);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_m_33);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_f_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_g_31);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_c_15);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_c_15);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym__2, term_f_34, term_c_15);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__3, term_e_31, term_g_31, (ATerm) ATempty);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_f_35);
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_r_38, term_c_15);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_v_38);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm y_7 (ATerm e_20, ATerm c_224, ATerm t);
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t);
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t);
static ATerm i_0 (ATerm t);
ATerm string_tokenize_0_0 (ATerm t);
ATerm filemode_0_0 (ATerm t);
static ATerm b_8 (ATerm w_14, ATerm v_14, ATerm t);
static ATerm k_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm pass_conservative_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm h_7 (ATerm m_34, ATerm n_34, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm i_7 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm j_7 (ATerm u_82 (ATerm), ATerm p_192, ATerm k_18, ATerm t);
static ATerm o_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t);
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t);
static ATerm m_7 (ATerm i_53, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm p_102 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm o_102 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm q_102 (ATerm), ATerm t);
static ATerm o_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t);
static ATerm p_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm q_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t);
static ATerm r_7 (ATerm s_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t);
static ATerm a_8 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm m_21 (ATerm y_20, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm s_7 (ATerm g_18, ATerm t);
static ATerm t_7 (ATerm n_55, ATerm o_55, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm y_23 (ATerm i_22, ATerm t);
static ATerm z_23 (ATerm m_22, ATerm n_22, ATerm q_22, ATerm t);
static ATerm a_24 (ATerm d_23, ATerm e_23, ATerm f_23, ATerm t);
static ATerm u_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t);
ATerm GetInternalDefaultXtcRepository_0_0 (ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm q_29 (ATerm p_28, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm u_105 (ATerm), ATerm t);
static ATerm v_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
static ATerm z_7 (ATerm y_32, ATerm z_32, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm c_8 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm m_8 (ATerm p_53, ATerm q_53, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm b_40 (ATerm n_39, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_8 (ATerm v_53, ATerm u_53, ATerm t);
static ATerm k_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm w_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_8 (ATerm g_34, ATerm h_34, ATerm t);
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm t);
static ATerm f_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t);
static ATerm n_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t);
ATerm lookup_table_0_1 (ATerm v_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm g_8 (ATerm g_53, ATerm h_53, ATerm t);
static ATerm h_8 (ATerm l_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_8 (ATerm e_53, ATerm f_53, ATerm t);
static ATerm j_8 (ATerm c_50, ATerm d_50, ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      m_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_2 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = l_1;
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
        t = (ATerm) ATmakeAppl(sym__2, m_1, e_0);
        t = b_8(m_1, e_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
        LocalPopChoice(i_10);
      }
    else
      {
        t = d_2;
        {
          ATerm j_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = l_1;
              t = p_0(t);
              v_0 = t;
              {
                ATerm n_10 = t;
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
                            if((m_1 != t))
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
                    t = n_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, m_1, v_0);
              t = b_8(m_1, v_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
              LocalPopChoice(l_10);
            }
          else
            {
              t = j_10;
              t = l_1;
              t = p_0(t);
              if((m_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, m_1);
            }
        }
      }
  }
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_1 = ATgetFirst((ATermList) t);
      z_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_1;
    }
  else
    {
      t = z_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm y_7 (ATerm e_20, ATerm c_224, ATerm t)
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
  t = c_224;
  t = fetch_1_0(a_0, t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL;
  static ATerm b_0 (ATerm t);
  static ATerm b_0 (ATerm t)
  {
    ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,a_3 = NULL,b_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,y_0 = NULL,x_0 = NULL;
    g_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_3 = ATgetFirst((ATermList) t);
        b_3 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_3);
    k_2 = t;
    t = a_3;
    t = y_87(t);
    e_3 = t;
    t = (ATerm) ATinsert(CheckATermList(b_3), e_3);
    x_0 = t;
    t = SSLsetAnnotations(x_0, k_2);
    f_3 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_2 = ATgetFirst((ATermList) t);
        j_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_3);
    h_2 = t;
    t = j_2;
    if(((e_2 != NULL) && (e_2 != t)))
      _fail(t);
    else
      e_2 = t;
    t = (ATerm) ATinsert(CheckATermList(j_2), i_2);
    y_0 = t;
    t = SSLsetAnnotations(y_0, h_2);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(b_0, t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, not_null(e_2));
  return(t);
}
ATerm list_tokenize_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,y_3 = NULL;
  ATerm o_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = split_fetch_1_0(d_97, t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = o_10;
      {
        ATerm l_3 = NULL;
        l_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, (ATerm) ATempty);
      }
    }
  if(match_cons(t, sym__2))
    {
      q_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_3;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm u_10 = ATgetFirst((ATermList) t);
              ATerm v_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_3;
          t = list_tokenize_1_0(d_97, t);
        }
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm w_10 = ATgetFirst((ATermList) t);
          ATerm x_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_3;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATinsert(ATempty, q_3);
        }
      else
        {
          ATerm k_4 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm y_10 = ATgetFirst((ATermList) t);
              ATerm z_10 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = y_3;
          t = list_tokenize_1_0(d_97, t);
          k_4 = t;
          t = (ATerm) ATinsert(CheckATermList(k_4), q_3);
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm w_4 = NULL;
  w_4 = t;
  t = SSL_implode_string(w_4);
  return(t);
}
ATerm string_tokenize_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,u_4 = NULL,c_1 = NULL;
  u_4 = t;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_4);
  o_4 = t;
  t = SSL_explode_string(r_4);
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, s_4);
  c_1 = t;
  t = SSLsetAnnotations(c_1, o_4);
  if(match_cons(t, sym__2))
    {
      m_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4;
  {
    static ATerm c_0 (ATerm t);
    static ATerm c_0 (ATerm t)
    {
      ATerm v_4 = NULL;
      v_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_4, m_4);
      t = y_7(v_4, m_4, t);
      return(t);
    }
    t = list_tokenize_1_0(c_0, t);
  }
  t = map_1_0(i_0, t);
  return(t);
}
ATerm filemode_0_0 (ATerm t)
{
  ATerm j_5 = NULL;
  j_5 = t;
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 = NULL;
        t = SSL_filemode(j_5);
        if(match_cons(t, sym__2))
          {
            n_1 = ATgetArgument(t, 0);
            {
              ATerm d_11 = ATgetArgument(t, 1);
              if(((ATgetType(d_11) != AT_INT) || (ATgetInt((ATermInt) d_11) != 0)))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = n_1;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        {
          ATerm v_1 = NULL,w_1 = NULL;
          t = term_e_11;
          w_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_11, j_5);
          t = z_7(w_1, j_5, t);
          v_1 = t;
          t = SSL_perror(v_1);
          _fail(t);
        }
      }
  }
  return(t);
}
static ATerm b_8 (ATerm w_14, ATerm v_14, ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL;
  n_5 = t;
  {
    ATerm g_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_5 = NULL,w_5 = NULL;
        t = (ATerm) ATinsert(ATempty, term_m_11);
        w_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_14, (ATerm) ATinsert(ATempty, term_m_11));
        t = a_8(v_14, w_5, t);
        t = filemode_0_0(t);
        r_5 = t;
        t = SSL_S_ISDIR(r_5);
        t = n_5;
        LocalPopChoice(j_11);
        {
          ATerm x_5 = NULL,y_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, term_t_11), w_14);
          t = string_tokenize_0_0(t);
          t = last_0_0(t);
          x_5 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_5), term_x_11), v_14);
          y_5 = t;
          t = SSL_concat_strings(y_5);
        }
      }
    else
      {
        t = g_11;
        t = v_14;
      }
  }
  m_5 = t;
  t = SSL_copy(w_14, m_5);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 = NULL,n_6 = NULL;
      t = term_a_12;
      m_6 = t;
      t = term_b_12;
      n_6 = t;
      t = term_c_12;
      t = j_8(m_6, n_6, t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      t = term_e_12;
    }
  return(t);
}
ATerm xtc_write_output_0_0 (ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_2 = NULL,n_2 = NULL;
      t = term_b_12;
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 = NULL,p_2 = NULL;
            t = term_a_12;
            o_2 = t;
            t = term_b_12;
            p_2 = t;
            t = term_c_12;
            t = j_8(o_2, p_2, t);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            t = term_e_12;
          }
      }
      m_2 = t;
      t = term_j_12;
      n_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_j_12, m_2);
      t = b_8(n_2, m_2, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm l_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_6;
      t = copy_to_1_0(k_0, t);
    }
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm m_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_6 = NULL,x_6 = NULL;
      t = term_a_12;
      v_6 = t;
      t = term_s_12;
      x_6 = t;
      t = term_t_12;
      t = j_8(v_6, x_6, t);
      LocalPopChoice(q_12);
      t = (ATerm) ATinsert(ATempty, term_v_12);
    }
  else
    {
      t = m_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_102 (ATerm), ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_7 = NULL,l_7 = NULL,n_7 = NULL;
        t = term_a_12;
        l_7 = t;
        t = term_z_12;
        n_7 = t;
        t = term_b_13;
        t = j_8(l_7, n_7, t);
        g_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_7, term_c_13);
        t = geq_0_0(t);
        t = d_7;
        t = m_102(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = d_7;
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
  t = term_d_13;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm x_7 = NULL,i_8 = NULL,p_8 = NULL,q_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,g_9 = NULL,f_1 = NULL;
  i_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), term_e_13), i_8);
  v_8 = t;
  t = SSL_concat_strings(v_8);
  u_8 = t;
  t = (ATerm) ATinsert(ATempty, term_m_11);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_8, (ATerm) ATinsert(ATempty, term_m_11));
  t = a_8(u_8, t_8, t);
  x_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, i_8);
  g_9 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      ATerm h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_9);
  a_9 = t;
  t = SSL_modification_time(x_7);
  b_9 = t;
  t = SSL_modification_time(i_8);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
  f_1 = t;
  t = SSLsetAnnotations(f_1, a_9);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, x_7, i_8);
  q_8 = t;
  t = SSL_explode_term(q_8);
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_13 = ATgetArgument(t, 1);
        if(((ATgetType(k_13) == AT_LIST) && !(ATisEmpty(k_13))))
          {
            p_8 = ATgetFirst((ATermList) k_13);
            {
              ATerm m_13 = (ATerm) ATgetNext((ATermList) k_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_8;
  t = if_verbose2_1_0(n_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  static ATerm c_10 (ATerm t);
  static ATerm c_10 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_88(t);
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        {
          ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,u_2 = NULL,x_2 = NULL,j_1 = NULL;
          w_9 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_9 = ATgetFirst((ATermList) t);
              y_9 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_9);
          u_2 = t;
          t = y_9;
          t = c_10(t);
          x_2 = t;
          t = (ATerm) ATinsert(CheckATermList(x_2), x_9);
          j_1 = t;
          t = SSLsetAnnotations(j_1, u_2);
        }
      }
    return(t);
  }
  t = c_10(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = debug_1_0(g_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL;
      i_3 = t;
      t = term_v_13;
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
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_3 = NULL,o_3 = NULL,r_3 = NULL;
            o_3 = t;
            t = term_y_13;
            r_3 = t;
            t = SSL_explode_string(r_3);
            n_3 = t;
            t = SSL_explode_string(o_3);
            {
              static ATerm u_0 (ATerm t);
              static ATerm u_0 (ATerm t)
              {
                if((n_3 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(u_0, t);
            }
            t = o_3;
            LocalPopChoice(x_13);
          }
        else
          {
            t = w_13;
            {
              ATerm k_10 = NULL,m_10 = NULL,r_10 = NULL,t_10 = NULL;
              k_10 = t;
              t = term_z_13;
              r_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_10), term_a_14);
              t_10 = t;
              t = SSL_printnl(r_10, t_10);
              t = term_b_14;
              m_10 = t;
              t = SSL_exit(m_10);
              t = (ATerm) ATinsert(ATinsert(ATempty, k_10), term_a_14);
            }
          }
      }
      {
        ATerm c_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(h_14);
          }
        else
          {
            t = c_14;
            {
              ATerm f_11 = NULL,u_3 = NULL;
              f_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_11);
              {
                ATerm i_14 = t;
                int k_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_4 = NULL,c_4 = NULL,p_1 = NULL;
                    c_4 = t;
                    if(match_cons(t, sym_FILE_1))
                      {
                        ATerm l_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(c_4);
                    a_4 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, f_11);
                    p_1 = t;
                    t = SSLsetAnnotations(p_1, a_4);
                    LocalPopChoice(k_14);
                    t = xtc_transform_file_2_0(z_0, a_1, t);
                  }
                else
                  {
                    t = i_14;
                    t = xtc_transform_term_2_0(b_1, d_1, t);
                  }
              }
              if(match_cons(t, sym_FILE_1))
                {
                  u_3 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = u_3;
              t = if_verbose2_1_0(e_1, t);
            }
          }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm m_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_11 = NULL,i_11 = NULL;
      t = term_a_12;
      h_11 = t;
      t = term_r_14;
      i_11 = t;
      t = term_s_14;
      t = j_8(h_11, i_11, t);
      LocalPopChoice(q_14);
    }
  else
    {
      t = m_14;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm k_11 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  k_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_11), term_r_14);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_u_14;
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
static ATerm h_7 (ATerm m_34, ATerm n_34, ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(m_34, n_34);
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      t = SSL_subtr(m_34, n_34);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL;
  t = term_z_12;
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_11 = NULL,r_11 = NULL;
        t = term_a_12;
        q_11 = t;
        t = term_z_12;
        r_11 = t;
        t = term_b_13;
        t = j_8(q_11, r_11, t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = term_b_14;
      }
  }
  n_11 = t;
  t = term_b_14;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_11, term_b_14);
  t = h_7(n_11, p_11, t);
  o_11 = t;
  t = SSL_int_to_string(o_11);
  l_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_11), term_z_12);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm s_11 = NULL,v_11 = NULL,w_11 = NULL;
  t = term_c_15;
  t = pass_verbose_0_0(t);
  s_11 = t;
  t = term_c_15;
  t = create_pp_table_args_0_0(t);
  v_11 = t;
  t = term_c_15;
  t = pass_conservative_0_0(t);
  w_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_11), v_11), s_11);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm h_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_m_11);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_12, (ATerm) ATinsert(ATempty, term_m_11));
      t = a_8(d_12, h_12, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm i_7 (ATerm a_18, ATerm b_18, ATerm t)
{
  ATerm k_12 = NULL;
  t = SSL_write_term_to_stream_baf(a_18, b_18);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
static ATerm j_7 (ATerm u_82 (ATerm), ATerm p_192, ATerm k_18, ATerm t)
{
  ATerm n_12 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, p_192, term_d_15);
  t = u_7(t);
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_12, k_18);
  t = u_82(t);
  t = fclose_0_0(t);
  t = k_18;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm r_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_15 = ATgetArgument(t, 0);
      if(match_cons(e_15, sym_Stream_1))
        {
          r_12 = ATgetArgument(e_15, 0);
        }
      else
        _fail(t);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(r_12, u_12, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm q_104 (ATerm), ATerm r_104 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  p_12 = t;
  t = xtc_new_file_0_0(t);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_12, p_12);
  t = j_7(o_1, o_12, p_12, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_12);
  t = xtc_transform_file_2_0(q_104, r_104, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_execvp(n_14, o_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_14 = ATgetArgument(t, 0);
      {
        ATerm p_4 = NULL,t_4 = NULL;
        t = SSL_int_to_string(e_14);
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_15), p_4), term_f_15);
        t_4 = t;
        t = SSL_concat_strings(t_4);
      }
    }
  else
    {
      ATerm u_5 = NULL,v_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_14 = ATgetArgument(t, 0);
          f_14 = ATgetArgument(t, 1);
          g_14 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_14);
      u_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_14), term_j_15), u_5), term_h_15), e_14);
      v_5 = t;
      t = SSL_concat_strings(v_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm j_14 = NULL;
  static ATerm q_1 (ATerm t);
  static ATerm q_1 (ATerm t)
  {
    t = x_87(t);
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
    return(t);
  }
  t = fetch_1_0(q_1, t);
  t = not_null(j_14);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  p_14 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t);
        static ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm m_15 = ATgetArgument(t, 0);
              if((p_14 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_15 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_22), term_z_21), term_v_21), term_p_21), term_i_21), term_c_21), term_x_20), term_t_20), term_p_20), term_l_20), term_d_20), term_y_19), term_u_19), term_m_19), term_f_19), term_b_19), term_x_18), term_p_18), term_d_18), term_w_17), term_o_17), term_j_17), term_e_17), term_v_16), term_q_16), term_d_16), term_v_15), term_s_15);
        t = fetch_elem_1_0(r_1, t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, p_14);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm y_14 = NULL,o_15 = NULL;
  y_14 = t;
  {
    ATerm e_22 = t;
    int f_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            o_15 = ATgetArgument(t, 1);
            {
              ATerm h_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(f_22);
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_6 = NULL,q_6 = NULL,r_6 = NULL;
              t = o_15;
              {
                ATerm o_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              l_6 = t;
              t = term_z_13;
              q_6 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, l_6), term_p_22);
              r_6 = t;
              t = SSL_printnl(q_6, r_6);
              t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, l_6), term_p_22));
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = y_14;
            }
        }
      }
    else
      {
        t = e_22;
        t = y_14;
      }
  }
  t = y_14;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL;
  z_15 = t;
  t = fork_0_0(t);
  x_15 = t;
  {
    ATerm t_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = z_15;
        t = h_81(t);
        LocalPopChoice(v_22);
      }
    else
      {
        t = t_22;
        t = SSL_waitpid(x_15);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            if(((ATgetType(w_22) != AT_INT) || (ATgetInt((ATermInt) w_22) != 0)))
              _fail(t);
            {
              ATerm x_22 = ATgetArgument(t, 1);
            }
            {
              ATerm y_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = z_15;
      }
  }
  return(t);
}
ATerm debug_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  b_16 = t;
  t = s_82(t);
  e_16 = t;
  t = term_z_13;
  f_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_16), e_16);
  g_16 = t;
  t = SSL_printnl(f_16, g_16);
  t = b_16;
  return(t);
}
static ATerm m_7 (ATerm i_53, ATerm t)
{
  t = SSL_hashtable_keys(i_53);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  static ATerm s_1 (ATerm t);
  static ATerm s_1 (ATerm t)
  {
    ATerm l_16 = NULL,o_16 = NULL;
    l_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), l_16);
    t = j_8(not_null(j_16), l_16, t);
    o_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_16, o_16);
    return(t);
  }
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = lookup_table_0_1(j_16, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_7(k_16, t);
  t = map_1_0(s_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_102 (ATerm), ATerm t)
{
  ATerm r_16 = NULL;
  r_16 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_16 = NULL,z_16 = NULL,d_17 = NULL;
        t = term_a_12;
        z_16 = t;
        t = term_z_12;
        d_17 = t;
        t = term_b_13;
        t = j_8(z_16, d_17, t);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_16, term_k_21);
        t = geq_0_0(t);
        t = r_16;
        t = p_102(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = r_16;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm i_17 = NULL;
  i_17 = t;
  {
    ATerm c_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL,r_17 = NULL,s_17 = NULL;
        t = term_a_12;
        r_17 = t;
        t = term_z_12;
        s_17 = t;
        t = term_b_13;
        t = j_8(r_17, s_17, t);
        k_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_17, term_s_18);
        t = geq_0_0(t);
        t = i_17;
        t = o_102(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = c_23;
        t = i_17;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm c_18 = NULL;
  c_18 = t;
  {
    ATerm h_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,i_18 = NULL,n_18 = NULL;
        t = term_a_12;
        i_18 = t;
        t = term_z_12;
        n_18 = t;
        t = term_b_13;
        t = j_8(i_18, n_18, t);
        h_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_18, term_n_16);
        t = geq_0_0(t);
        t = c_18;
        t = q_102(t);
        LocalPopChoice(l_23);
      }
    else
      {
        t = h_23;
        t = c_18;
      }
  }
  return(t);
}
static ATerm o_7 (ATerm z_91 (ATerm), ATerm a_92 (ATerm), ATerm p_25, ATerm o_25, ATerm t)
{
  t = a_92(t);
  {
    static ATerm t_1 (ATerm t);
    static ATerm t_1 (ATerm t)
    {
      ATerm r_18 = NULL;
      r_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_25, r_18);
      t = z_91(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = o_25;
  return(t);
}
static ATerm p_7 (ATerm w_91 (ATerm), ATerm l_25, ATerm k_25, ATerm t)
{
  static ATerm o_19 (ATerm t);
  static ATerm o_19 (ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
    j_19 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_25;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_19 = ATgetFirst((ATermList) t);
            l_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_19;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  t = k_25;
                  return(t);
                }
                t = o_7(w_91, u_1, k_19, l_19, t);
              }
              t = o_19(t);
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
              {
                ATerm y_6 = NULL,b_7 = NULL,k_3 = NULL;
                t = SSLgetAnnotations(j_19);
                y_6 = t;
                t = l_19;
                t = o_19(t);
                b_7 = t;
                t = (ATerm) ATinsert(CheckATermList(b_7), k_19);
                k_3 = t;
                t = SSLsetAnnotations(k_3, y_6);
              }
            }
        }
      }
    return(t);
  }
  t = l_25;
  t = o_19(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      if((i_20 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_7 (ATerm g_49, ATerm h_49, ATerm i_49, ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,z_19 = NULL;
  r_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            ATerm s_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_49, h_49);
        t = j_8(g_49, h_49, t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
  }
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, i_49);
  t = p_7(x_1, t_19, i_49, t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_49, h_49, s_19);
  t = lookup_table_0_1(g_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(h_49, s_19, z_19, t);
  t = r_19;
  return(t);
}
static ATerm r_7 (ATerm s_102 (ATerm), ATerm q_49, ATerm p_49, ATerm t)
{
  static ATerm a_2 (ATerm t);
  static ATerm a_2 (ATerm t)
  {
    ATerm j_20 = NULL,k_20 = NULL;
    if(match_cons(t, sym__2))
      {
        j_20 = ATgetArgument(t, 0);
        k_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_49, j_20, k_20);
    t = s_102(t);
    return(t);
  }
  t = p_49;
  t = map_1_0(a_2, t);
  return(t);
}
static ATerm a_8 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_access(b_55, c_55);
  return(t);
}
static ATerm m_21 (ATerm y_20, ATerm t)
{
  t = SSL_fclose(y_20);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_21 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_21);
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = m_21(f_21, t);
          }
      }
    }
  else
    {
      t = m_21(f_21, t);
    }
  return(t);
}
static ATerm s_7 (ATerm g_18, ATerm t)
{
  t = SSL_read_term_from_stream(g_18);
  return(t);
}
static ATerm t_7 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm n_21 = NULL;
  t = SSL_fopen(n_55, o_55);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_21);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  t = SSL_stdin_stream();
  o_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_21);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_21 = NULL;
  t = SSL_stdout_stream();
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_21);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_21 = NULL;
  t = SSL_stderr_stream();
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_21);
  return(t);
}
static ATerm y_23 (ATerm i_22, ATerm t)
{
  ATerm j_22 = NULL;
  t = SSL_explode_term(i_22);
  if(match_cons(t, sym__2))
    {
      ATerm b_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_24 = ATgetArgument(t, 1);
        if(((ATgetType(c_24) == AT_LIST) && !(ATisEmpty(c_24))))
          {
            j_22 = ATgetFirst((ATermList) c_24);
            {
              ATerm d_24 = (ATerm) ATgetNext((ATermList) c_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_22;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_22;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_22;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_22;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm z_23 (ATerm m_22, ATerm n_22, ATerm q_22, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,u_22 = NULL,b_23 = NULL,z_4 = NULL;
  t = SSLgetAnnotations(q_22);
  u_22 = t;
  t = m_22;
  if(match_cons(t, sym_Path_1))
    {
      b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, n_22);
  z_4 = t;
  t = SSLsetAnnotations(z_4, u_22);
  if(match_cons(t, sym__2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(r_22, s_22, t);
  return(t);
}
static ATerm a_24 (ATerm d_23, ATerm e_23, ATerm f_23, ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,o_23 = NULL,a_5 = NULL;
  t = SSLgetAnnotations(f_23);
  k_23 = t;
  t = SSL_is_string(d_23);
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_23, e_23);
  a_5 = t;
  t = SSLsetAnnotations(a_5, k_23);
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_7(i_23, j_23, t);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_23(v_23, t);
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            {
              ATerm j_24 = t;
              int k_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_23(w_23, x_23, v_23, t);
                  LocalPopChoice(k_24);
                }
              else
                {
                  t = j_24;
                  t = a_24(w_23, x_23, v_23, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_23(v_23, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,w_24 = NULL;
  w_24 = t;
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_n_24);
        t = u_7(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm f_9 = NULL,h_9 = NULL;
          t = term_o_24;
          h_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_24, w_24);
          t = z_7(h_9, w_24, t);
          f_9 = t;
          t = SSL_perror(f_9);
          _fail(t);
        }
      }
  }
  f_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_7(g_24, t);
  e_24 = t;
  t = f_24;
  t = fclose_0_0(t);
  t = e_24;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_q_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_25 = NULL,e_25 = NULL;
      c_25 = t;
      t = (ATerm) ATinsert(ATempty, term_t_24);
      e_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_25, (ATerm) ATinsert(ATempty, term_t_24));
      t = a_8(c_25, e_25, t);
      LocalPopChoice(s_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_24 = t;
            if((PushChoice() == 0))
              {
                ATerm h_25 = NULL,i_25 = NULL;
                h_25 = t;
                t = (ATerm) ATinsert(ATempty, term_m_11);
                i_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_25, (ATerm) ATinsert(ATempty, term_m_11));
                t = a_8(h_25, i_25, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = x_24;
              }
            t = debug_1_0(b_2, t);
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            t = debug_1_0(c_2, t);
          }
      }
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = debug_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_z_24;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,k_26 = NULL;
  i_26 = t;
  t = term_z_13;
  j_26 = t;
  t = (ATerm) ATinsert(ATempty, term_a_25);
  k_26 = t;
  t = SSL_printnl(j_26, k_26);
  t = i_26;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__3))
    {
      l_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
      o_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_7(l_26, n_26, o_26, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,x_26 = NULL;
  p_26 = t;
  t = term_z_13;
  q_26 = t;
  t = (ATerm) ATinsert(ATempty, term_b_25);
  x_26 = t;
  t = SSL_printnl(q_26, x_26);
  t = p_26;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm y_26 = NULL,b_27 = NULL,c_27 = NULL;
  y_26 = t;
  t = term_z_13;
  b_27 = t;
  t = (ATerm) ATinsert(ATempty, term_a_25);
  c_27 = t;
  t = SSL_printnl(b_27, c_27);
  t = y_26;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_25 = NULL,m_25 = NULL,n_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  j_25 = t;
  t = if_verbose5_1_0(f_2, t);
  {
    ATerm d_25 = t;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL,g_26 = NULL;
        t = term_f_25;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_25);
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Imported_1, j_25));
        t = j_8(f_26, g_26, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_25;
      }
  }
  n_25 = t;
  t = term_f_25;
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, term_g_25, (ATerm) ATinsert(ATempty, j_25));
  t = lookup_table_0_1(a_26, t);
  e_26 = t;
  t = term_g_25;
  b_26 = t;
  t = (ATerm) ATinsert(ATempty, j_25);
  c_26 = t;
  t = e_26;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(b_26, c_26, d_26, t);
  t = n_25;
  t = if_verbose4_1_0(q_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(s_2, t);
  m_25 = t;
  t = term_f_25;
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, m_25);
  t = r_7(t_2, z_25, m_25, t);
  t = if_verbose6_1_0(v_2, t);
  t = term_f_25;
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, (ATerm)ATmakeAppl(sym_Imported_1, j_25), (ATerm) ATempty);
  t = lookup_table_0_1(u_25, t);
  y_25 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, j_25);
  v_25 = t;
  t = (ATerm) ATempty;
  w_25 = t;
  t = y_25;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(v_25, w_25, x_25, t);
  t = (ATerm) ATmakeAppl(sym__3, term_f_25, (ATerm)ATmakeAppl(sym_Imported_1, j_25), (ATerm) ATempty);
  t = if_verbose4_1_0(w_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm d_96 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_27;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_25 = t;
        int r_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_9 = NULL,a_10 = NULL,b_10 = NULL,d_5 = NULL;
            t = SSLgetAnnotations(r_27);
            r_9 = t;
            t = s_27;
            t = d_96(t);
            a_10 = t;
            t = t_27;
            t = filter_1_0(d_96, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
            d_5 = t;
            t = SSLsetAnnotations(d_5, r_9);
            LocalPopChoice(r_25);
          }
        else
          {
            t = q_25;
            t = t_27;
            t = filter_1_0(d_96, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  static ATerm y_27 (ATerm t);
  static ATerm y_27 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_85(t);
        t = y_27(t);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        t = q_85(t);
      }
    return(t);
  }
  t = y_27(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_27 = NULL,a_28 = NULL;
      t = term_a_12;
      z_27 = t;
      t = term_r_26;
      a_28 = t;
      t = term_s_26;
      t = j_8(z_27, a_28, t);
      LocalPopChoice(m_26);
    }
  else
    {
      t = h_26;
      {
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_28 = NULL;
            t = term_v_26;
            b_28 = t;
            t = SSL_getenv(b_28);
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = GetInternalDefaultXtcRepository_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_w_26;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  t = term_f_25;
  h_28 = t;
  t = term_z_26;
  i_28 = t;
  t = term_a_27;
  t = j_8(h_28, i_28, t);
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
static ATerm d_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_e_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_28 = NULL;
  t = if_verbose5_1_0(y_2, t);
  d_28 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_28 = NULL,f_28 = NULL;
        t = term_f_25;
        e_28 = t;
        t = term_g_25;
        f_28 = t;
        t = term_h_27;
        t = j_8(e_28, f_28, t);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        {
          ATerm g_28 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          g_28 = t;
          t = repeat_2_0(c_3, _id, t);
          t = g_28;
        }
      }
  }
  t = d_28;
  t = if_verbose5_1_0(d_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm q_29 (ATerm p_28, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  t = term_f_25;
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_28);
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Tool_1, p_28));
  t = j_8(t_28, u_28, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_27 = ATgetFirst((ATermList) t);
      if(match_cons(j_27, sym__2))
        {
          ATerm l_27 = ATgetArgument(j_27, 0);
          s_28 = ATgetArgument(j_27, 1);
        }
      else
        _fail(t);
      {
        ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_28;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_i_27;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_f_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_m_27;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm n_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_28 = NULL,y_28 = NULL,z_28 = NULL;
      t = if_verbose5_1_0(p_3, t);
      t = xtc_load_0_0(t);
      z_28 = t;
      if(match_cons(t, sym__2))
        {
          v_28 = ATgetArgument(t, 0);
          y_28 = ATgetArgument(t, 1);
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
                t = term_f_25;
                h_29 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, v_28);
                i_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_f_25, (ATerm) ATmakeAppl(sym_Tool_1, v_28));
                t = j_8(h_29, i_29, t);
                {
                  static ATerm t_3 (ATerm t);
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((y_28 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((g_29 != NULL) && (g_29 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_29 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_3, t);
                }
                t = not_null(g_29);
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = q_29(z_28, t);
              }
          }
        }
      else
        {
          t = q_29(z_28, t);
        }
      t = if_verbose5_1_0(v_3, t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = n_27;
      {
        ATerm p_29 = NULL,p_10 = NULL,q_10 = NULL;
        p_29 = t;
        t = term_z_13;
        p_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), p_29), term_u_27);
        q_10 = t;
        t = SSL_printnl(p_10, q_10);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_27), p_29), term_u_27);
        t = if_verbose5_1_0(x_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm u_105 (ATerm), ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t_29 = t;
  t = u_105(t);
  t = xtc_find_0_0(t);
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
  {
    static ATerm b_4 (ATerm t);
    static ATerm b_4 (ATerm t)
    {
      ATerm u_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_29, t_29);
      t = k_7(s_29, t_29, t);
      t = term_w_27;
      u_29 = t;
      t = SSL_exit(u_29);
      return(t);
    }
    t = fork_and_wait_1_0(b_4, t);
  }
  t = t_29;
  return(t);
}
static ATerm v_7 (ATerm j_98 (ATerm), ATerm u_35, ATerm s_35, ATerm t)
{
  ATerm v_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,f_30 = NULL,h_30 = NULL;
  a_30 = t;
  t = j_98(t);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_29, u_35, s_35);
  t = k_8(v_29, u_35, s_35, t);
  {
    ATerm x_27 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_30 = NULL;
        t = term_j_28;
        i_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_29, term_j_28);
        t = j_8(v_29, i_30, t);
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
        LocalPopChoice(c_28);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_29, term_j_28, (ATerm) ATinsert(CheckATermList(z_29), (ATerm) ATinsert(CheckATermList(y_29), u_35)));
  t = lookup_table_0_1(v_29, t);
  h_30 = t;
  t = term_j_28;
  b_30 = t;
  t = (ATerm) ATinsert(CheckATermList(z_29), (ATerm) ATinsert(CheckATermList(y_29), u_35));
  c_30 = t;
  t = h_30;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(b_30, c_30, f_30, t);
  t = a_30;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm k_30 = NULL;
  ATerm l_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_30 = NULL,a_11 = NULL;
      r_30 = t;
      t = term_n_28;
      a_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_30, term_n_28);
      t = z_7(r_30, a_11, t);
      k_30 = t;
      t = SSL_mkstemp(k_30);
      LocalPopChoice(m_28);
    }
  else
    {
      t = l_28;
      {
        ATerm s_30 = NULL;
        t = term_o_28;
        s_30 = t;
        t = SSL_perror(s_30);
        _fail(t);
      }
    }
  return(t);
}
static ATerm z_7 (ATerm y_32, ATerm z_32, ATerm t)
{
  t = SSL_strcat(y_32, z_32);
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL,x_30 = NULL,c_31 = NULL,f_31 = NULL;
  t = P__tmpdir_0_0(t);
  c_31 = t;
  t = term_r_28;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_31, term_r_28);
  t = z_7(c_31, f_31, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      w_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_c_15;
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, term_c_15);
  t = v_7(d_4, w_30, x_30, t);
  t = SSL_close(v_30);
  t = w_30;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  i_31 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm p_31 = NULL,r_31 = NULL;
      t = i_31;
      t = xtc_new_file_0_0(t);
      p_31 = t;
      t = r_0(t);
      r_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_31, (ATerm) ATinsert(ATinsert(ATempty, p_31), term_b_12));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_31);
    }
  else
    {
      ATerm t_31 = NULL,u_31 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_31;
      t = xtc_new_file_0_0(t);
      t_31 = t;
      t = r_0(t);
      u_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_31), term_b_12), j_31), term_w_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(q_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_31);
    }
  return(t);
}
static ATerm c_8 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  y_31 = t;
  {
    ATerm x_28 = t;
    int a_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = j_8(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_29 = ATgetFirst((ATermList) t);
            x_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_29);
        {
          ATerm z_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, x_31);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              z_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_8(p_48, x_31, z_31, t);
          t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, x_31);
        }
      }
    else
      {
        t = x_28;
        {
          ATerm b_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
          t = lookup_table_0_1(o_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(p_48, b_32, t);
          t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        }
      }
  }
  t = y_31;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,i_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,q_32 = NULL,r_32 = NULL;
  n_32 = t;
  t = g_98(t);
  m_32 = t;
  {
    ATerm c_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_32 = NULL;
        t = term_j_28;
        s_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_32, term_j_28);
        t = j_8(m_32, s_32, t);
        {
          ATerm e_29 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_29;
            }
        }
        LocalPopChoice(d_29);
      }
    else
      {
        t = c_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_32 = ATgetFirst((ATermList) t);
      g_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_32, term_j_28, g_32);
  t = lookup_table_0_1(m_32, t);
  r_32 = t;
  t = term_j_28;
  o_32 = t;
  t = r_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(o_32, g_32, q_32, t);
  t = i_32;
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      ATerm t_32 = NULL;
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_32, t_32);
      t = c_8(m_32, t_32, t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  t = n_32;
  return(t);
}
ATerm restore_always_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  ATerm f_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_101(t);
      t = a_102(t);
      LocalPopChoice(j_29);
    }
  else
    {
      t = f_29;
      t = a_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_98 (ATerm), ATerm t)
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL,a_33 = NULL,c_33 = NULL,e_33 = NULL,f_33 = NULL;
  w_32 = t;
  t = f_98(t);
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_32, term_j_28);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_29 = ATgetArgument(t, 0);
            ATerm n_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_28;
        j_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_32, term_j_28);
        t = j_8(v_32, j_33, t);
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = (ATerm) ATempty;
      }
  }
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_32, term_j_28, (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATempty));
  t = lookup_table_0_1(v_32, t);
  f_33 = t;
  t = term_j_28;
  a_33 = t;
  t = (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATempty);
  c_33 = t;
  t = f_33;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(a_33, c_33, e_33, t);
  t = w_32;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_33 = NULL;
  z_33 = t;
  {
    ATerm o_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_33);
        LocalPopChoice(r_29);
      }
    else
      {
        t = o_29;
        t = z_33;
      }
  }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm o_33 = NULL;
  static ATerm g_4 (ATerm t);
  static ATerm g_4 (ATerm t)
  {
    ATerm q_33 = NULL;
    q_33 = t;
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_33 = NULL,u_33 = NULL;
          t = term_q_28;
          r_33 = t;
          t = term_j_28;
          u_33 = t;
          t = term_d_30;
          t = j_8(r_33, u_33, t);
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((o_33 != NULL) && (o_33 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          o_33 = ATgetFirst((ATermList) t);
        {
          ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = o_33;
    t = map_1_0(h_4, t);
    t = q_33;
    t = end_scope_1_0(i_4, t);
    return(t);
  }
  t = begin_scope_1_0(f_4, t);
  t = restore_always_2_0(d_105, g_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_34 = NULL,l_34 = NULL,o_34 = NULL;
      t = term_a_12;
      l_34 = t;
      t = term_w_28;
      o_34 = t;
      t = term_l_30;
      t = j_8(l_34, o_34, t);
      k_34 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_34);
      LocalPopChoice(j_30);
    }
  else
    {
      t = g_30;
      t = term_j_12;
    }
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_34 = NULL,z_34 = NULL;
        z_34 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_34 = ATgetArgument(t, 0);
            {
              ATerm u_11 = NULL,g_5 = NULL;
              t = SSLgetAnnotations(z_34);
              u_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_34);
              g_5 = t;
              t = SSLsetAnnotations(g_5, u_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_34;
          }
        LocalPopChoice(n_30);
        t = xtc_transform_file_2_0(l_4, x_4, t);
      }
    else
      {
        t = m_30;
        t = xtc_transform_term_2_0(y_4, b_5, t);
      }
  }
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_35 = NULL,l_35 = NULL;
        l_35 = t;
        if(match_cons(t, sym_FILE_1))
          {
            k_35 = ATgetArgument(t, 0);
            {
              ATerm i_12 = NULL,i_5 = NULL;
              t = SSLgetAnnotations(l_35);
              i_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_35);
              i_5 = t;
              t = SSLsetAnnotations(i_5, i_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = l_35;
          }
        LocalPopChoice(p_30);
        t = xtc_transform_file_2_0(c_5, e_5, t);
      }
    else
      {
        t = o_30;
        t = xtc_transform_term_2_0(f_5, h_5, t);
      }
  }
  t = xtc_write_output_0_0(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_30), term_y_30), term_u_30), term_t_30);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_q_30;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_30), term_y_30), term_u_30), term_t_30);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_c_15;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_a_31;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_c_15;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_temp_files_1_0(j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,h_36 = NULL;
  b_36 = t;
  t = term_c_15;
  t = whoami_0_0(t);
  c_36 = t;
  t = term_z_13;
  e_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_31), c_36), term_b_31);
  h_36 = t;
  t = SSL_printnl(e_36, h_36);
  t = term_b_14;
  d_36 = t;
  t = SSL_exit(d_36);
  t = b_36;
  return(t);
}
static ATerm m_8 (ATerm p_53, ATerm q_53, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = term_a_12;
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_12, p_53, q_53);
  t = lookup_table_0_1(i_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(p_53, q_53, j_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_12, p_53, q_53);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_36 = NULL,v_36 = NULL,y_36 = NULL;
      t = term_c_15;
      t = g_0(t);
      u_36 = t;
      t = term_e_31;
      v_36 = t;
      t = term_g_31;
      y_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_g_31, u_36);
      t = k_8(v_36, y_36, u_36, t);
      _fail(t);
    }
  else
    {
      ATerm b_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_36 = ATgetFirst((ATermList) t);
          s_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_36;
      t = d_0(t);
      t = term_c_15;
      t = f_0(t);
      b_37 = t;
      t = (ATerm) ATinsert(CheckATermList(s_36), b_37);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  if(match_string(t, "-k"))
    {
      t = d_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_37;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  t = SSL_string_to_int(e_37);
  f_37 = t;
  t = term_h_31;
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_31, f_37);
  t = m_8(g_37, f_37, t);
  t = e_37;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_5, l_5, o_5, t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_37 = NULL;
  i_37 = t;
  if(match_string(t, "-S"))
    {
      t = i_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_37;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm k_37 = NULL,m_37 = NULL;
  t = term_z_12;
  k_37 = t;
  t = term_l_31;
  m_37 = t;
  t = term_m_31;
  t = m_8(k_37, m_37, t);
  t = term_n_31;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_o_31;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  t = SSL_string_to_int(n_37);
  o_37 = t;
  t = term_z_12;
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, o_37);
  t = m_8(p_37, o_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_37);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm q_37 = NULL,t_37 = NULL;
  t = term_s_31;
  q_37 = t;
  t = term_c_15;
  t_37 = t;
  t = term_v_31;
  t = m_8(q_37, t_37, t);
  t = term_w_31;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_5, q_5, s_5, t);
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm e_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_5, z_5, a_6, t);
            LocalPopChoice(f_32);
          }
        else
          {
            t = e_32;
            t = Option_3_0(c_6, d_6, e_6, t);
          }
      }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  if(match_string(t, "-o"))
    {
      t = v_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_37;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm w_37 = NULL,z_37 = NULL;
  w_37 = t;
  t = term_b_12;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_12, w_37);
  t = m_8(z_37, w_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_37);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_6, h_6, k_6, t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm b_38 = NULL;
  b_38 = t;
  if(match_string(t, "-i"))
    {
      t = b_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_38;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL;
  c_38 = t;
  t = term_w_28;
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_28, c_38);
  t = m_8(d_38, c_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_38);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_6, p_6, s_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  static ATerm j_39 (ATerm t);
  static ATerm j_39 (ATerm t)
  {
    ATerm y_38 = NULL,f_39 = NULL,i_39 = NULL;
    i_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_38 = ATgetFirst((ATermList) t);
        f_39 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm w_12 = NULL,a_13 = NULL,b_6 = NULL;
          t = SSLgetAnnotations(i_39);
          w_12 = t;
          t = f_39;
          t = j_39(t);
          a_13 = t;
          t = (ATerm) ATinsert(CheckATermList(a_13), y_38);
          b_6 = t;
          t = SSLsetAnnotations(b_6, w_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_39;
        t = c_88(t);
      }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_38;
    }
  else
    {
      static ATerm t_6 (ATerm t);
      static ATerm t_6 (ATerm t)
      {
        t = not_null(h_38);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_38 = ATgetFirst((ATermList) t);
          if(((h_38 != NULL) && (h_38 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_38;
      t = at_end_1_0(t_6, t);
    }
  return(t);
}
static ATerm b_40 (ATerm n_39, ATerm t)
{
  ATerm o_39 = NULL;
  t = SSL_explode_term(n_39);
  if(match_cons(t, sym__2))
    {
      ATerm k_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_39;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
  v_39 = t;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      u_39 = ATgetArgument(t, 1);
      {
        ATerm l_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_6 (ATerm t);
            static ATerm u_6 (ATerm t)
            {
              t = u_39;
              return(t);
            }
            t = t_39;
            t = at_end_1_0(u_6, t);
            LocalPopChoice(p_32);
          }
        else
          {
            t = l_32;
            t = b_40(v_39, t);
          }
      }
    }
  else
    {
      t = b_40(v_39, t);
    }
  return(t);
}
static ATerm d_8 (ATerm v_53, ATerm u_53, ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  t = v_53;
  {
    ATerm u_32 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_40 = NULL;
        t = term_a_12;
        h_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_a_12, v_53);
        t = j_8(h_40, v_53, t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = u_32;
        t = (ATerm) ATempty;
      }
  }
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_53, d_40);
  t = conc_0_0(t);
  c_40 = t;
  t = term_a_12;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_12, v_53, c_40);
  t = lookup_table_0_1(e_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(v_53, c_40, f_40, t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_12, v_53, c_40);
  return(t);
}
static ATerm k_8 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,q_40 = NULL;
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm d_33 = t;
    int g_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_33 = ATgetArgument(t, 0);
            ATerm i_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = j_8(j_48, k_48, t);
        LocalPopChoice(g_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATempty;
      }
  }
  l_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, (ATerm) ATinsert(CheckATermList(l_40), i_48));
  t = lookup_table_0_1(j_48, t);
  q_40 = t;
  t = (ATerm) ATinsert(CheckATermList(l_40), i_48);
  m_40 = t;
  t = q_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(k_48, m_40, n_40, t);
  t = k_40;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,b_41 = NULL,e_41 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
      t = term_c_15;
      t = o_0(t);
      f_41 = t;
      t = term_e_31;
      g_41 = t;
      t = term_g_31;
      h_41 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_g_31, f_41);
      t = k_8(g_41, h_41, f_41, t);
      _fail(t);
    }
  else
    {
      ATerm n_41 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_40 = ATgetFirst((ATermList) t);
          y_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_41 = ATgetFirst((ATermList) t);
          e_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_40;
      t = l_0(t);
      t = b_41;
      t = m_0(t);
      n_41 = t;
      t = (ATerm) ATinsert(CheckATermList(e_41), n_41);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,u_41 = NULL;
  q_41 = t;
  t = term_r_14;
  r_41 = t;
  t = (ATerm) ATinsert(ATempty, q_41);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_14, (ATerm) ATinsert(ATempty, q_41));
  t = d_8(r_41, u_41, t);
  t = q_41;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, z_6, a_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_15;
  t = whoami_0_0(t);
  w_41 = t;
  t = term_z_13;
  y_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_33), w_41);
  z_41 = t;
  t = SSL_printnl(y_41, z_41);
  t = term_b_14;
  x_41 = t;
  t = SSL_exit(x_41);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  t = term_a_12;
  a_42 = t;
  t = term_m_33;
  b_42 = t;
  t = term_n_33;
  t = j_8(a_42, b_42, t);
  return(t);
}
static ATerm e_8 (ATerm g_34, ATerm h_34, ATerm t)
{
  ATerm p_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_34, h_34);
      LocalPopChoice(s_33);
    }
  else
    {
      t = p_33;
      t = SSL_addr(g_34, h_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,k_42 = NULL;
  e_42 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_42;
      t = z_94(t);
    }
  else
    {
      ATerm r_42 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_42 = ATgetFirst((ATermList) t);
          k_42 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_42;
      t = foldr_2_0(z_94, a_95, t);
      r_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_42, r_42);
      t = a_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_l_31;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm p_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      s_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_8(p_13, s_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_42 = NULL,j_13 = NULL,l_13 = NULL;
  t = times_0_0(t);
  l_13 = t;
  t = SSL_explode_term(l_13);
  if(match_cons(t, sym__2))
    {
      ATerm t_33 = ATgetArgument(t, 0);
      j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_13;
  t = foldr_2_0(c_7, e_7, t);
  x_42 = t;
  t = SSL_TicksToSeconds(x_42);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_43 = NULL,s_43 = NULL,v_43 = NULL;
  q_43 = t;
  if(match_cons(t, sym__2))
    {
      s_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_43;
        if((s_43 != t))
          {
            _fail(t);
          }
        t = q_43;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = (ATerm) ATmakeAppl(sym__2, s_43, v_43);
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_43, v_43);
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              t = SSL_gtr(s_43, v_43);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_43, v_43);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  {
    ATerm a_34 = t;
    int b_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_44 = NULL,c_44 = NULL,d_44 = NULL;
        t = term_a_12;
        c_44 = t;
        t = term_z_12;
        d_44 = t;
        t = term_b_13;
        t = j_8(c_44, d_44, t);
        b_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_44, term_b_14);
        t = geq_0_0(t);
        t = z_43;
        t = l_102(t);
        LocalPopChoice(b_34);
      }
    else
      {
        t = a_34;
        t = z_43;
      }
  }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm f_44 = NULL,h_44 = NULL,n_44 = NULL,o_44 = NULL;
  t = run_time_0_0(t);
  f_44 = t;
  t = term_c_15;
  t = whoami_0_0(t);
  h_44 = t;
  t = term_z_13;
  n_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_34), f_44), term_h_15), h_44);
  o_44 = t;
  t = SSL_printnl(n_44, o_44);
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_34), f_44), term_h_15), h_44));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_44 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_31;
  p_44 = t;
  t = SSL_exit(p_44);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  a_45 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = a_45;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          z_44 = ATgetArgument(t, 0);
          {
            ATerm t_14 = NULL,f_6 = NULL;
            t = SSLgetAnnotations(a_45);
            t_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, z_44);
            f_6 = t;
            t = SSLsetAnnotations(f_6, t_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = a_45;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_44 = NULL,t_44 = NULL;
      t = term_a_12;
      s_44 = t;
      t = term_f_34;
      t_44 = t;
      t = term_i_34;
      t = j_8(s_44, t_44, t);
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      t = fetch_1_0(w_7, t);
    }
  t = b_107(t);
  return(t);
}
static ATerm n_8 (ATerm b_53, ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm c_45 = NULL;
  t = SSL_hashtable_put(d_53, b_53, c_53);
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_45);
  return(t);
}
ATerm lookup_table_0_1 (ATerm v_49, ATerm t)
{
  ATerm l_45 = NULL;
  t = table_hashtable_0_0(t);
  l_45 = t;
  {
    ATerm j_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL;
        t = l_45;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_15 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_8(v_49, i_15, t);
        LocalPopChoice(p_34);
      }
    else
      {
        t = j_34;
        {
          ATerm n_15 = NULL;
          t = v_49;
          t = table_create_0_0(t);
          t = l_45;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_8(v_49, n_15, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm j_53, ATerm k_53, ATerm t)
{
  ATerm o_45 = NULL;
  t = SSL_hashtable_create(j_53, k_53);
  o_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_45);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL;
  p_45 = t;
  t = term_q_34;
  t_45 = t;
  t = term_r_34;
  u_45 = t;
  t = p_45;
  t = new_hashtable_0_2(t_45, u_45, t);
  q_45 = t;
  t = p_45;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(p_45, q_45, r_45, t);
  t = p_45;
  return(t);
}
static ATerm g_8 (ATerm g_53, ATerm h_53, ATerm t)
{
  ATerm v_45 = NULL;
  t = SSL_hashtable_remove(h_53, g_53);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_45);
  return(t);
}
static ATerm h_8 (ATerm l_53, ATerm t)
{
  ATerm w_45 = NULL;
  t = SSL_hashtable_destroy(l_53);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_45);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_table_hashtable();
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_45);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  y_45 = t;
  t = table_hashtable_0_0(t);
  z_45 = t;
  t = lookup_table_0_1(y_45, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_8(b_46, t);
  t = z_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(y_45, a_46, t);
  t = y_45;
  return(t);
}
ATerm map_1_0 (ATerm l_87 (ATerm), ATerm t)
{
  static ATerm q_46 (ATerm t);
  static ATerm q_46 (ATerm t)
  {
    ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL;
    n_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_46;
      }
    else
      {
        ATerm c_16 = NULL,i_16 = NULL,m_16 = NULL,i_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_46 = ATgetFirst((ATermList) t);
            p_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_46);
        c_16 = t;
        t = o_46;
        t = l_87(t);
        i_16 = t;
        t = p_46;
        t = q_46(t);
        m_16 = t;
        t = (ATerm) ATinsert(CheckATermList(m_16), i_16);
        i_6 = t;
        t = SSLsetAnnotations(i_6, c_16);
      }
    return(t);
  }
  t = q_46(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_46 = ATgetFirst((ATermList) t);
      u_46 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_46 = NULL,z_46 = NULL;
        static ATerm f_8 (ATerm t);
        static ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_46)), not_null(z_46));
          return(t);
        }
        t = u_46;
        t = j_0(t);
        if(((y_46 != NULL) && (y_46 != t)))
          _fail(t);
        else
          y_46 = t;
        t = t_46;
        t = h_0(t);
        if(((z_46 != NULL) && (z_46 != t)))
          _fail(t);
        else
          z_46 = t;
        t = u_46;
        t = reverse_acc_2_0(h_0, f_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_15;
      t = j_0(t);
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,l_9 = NULL;
  h_47 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_47);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_47);
  l_9 = t;
  t = SSLsetAnnotations(l_9, f_47);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_47), term_s_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_47 = NULL,c_47 = NULL;
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_47 = NULL,e_47 = NULL;
      t = term_a_12;
      d_47 = t;
      t = term_m_33;
      e_47 = t;
      t = term_n_33;
      t = j_8(d_47, e_47, t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = t_34;
      t = fetch_1_0(l_8, t);
    }
  t = term_v_34;
  t = echo_0_0(t);
  t = term_e_31;
  b_47 = t;
  t = term_g_31;
  c_47 = t;
  t = term_w_34;
  t = j_8(b_47, c_47, t);
  t = reverse_acc_2_0(_id, r_8, t);
  t = map_1_0(s_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  static ATerm r_48 (ATerm t);
  static ATerm r_48 (ATerm t)
  {
    ATerm l_48 = NULL,m_48 = NULL,q_48 = NULL;
    l_48 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_48 = ATgetFirst((ATermList) t);
        q_48 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_16 = NULL,c_17 = NULL,o_9 = NULL;
          t = SSLgetAnnotations(l_48);
          y_16 = t;
          t = m_48;
          t = v_87(t);
          c_17 = t;
          t = (ATerm) ATinsert(CheckATermList(q_48), c_17);
          o_9 = t;
          t = SSLsetAnnotations(o_9, y_16);
          LocalPopChoice(a_35);
        }
      else
        {
          t = x_34;
          {
            ATerm p_17 = NULL,v_17 = NULL,p_9 = NULL;
            t = SSLgetAnnotations(l_48);
            p_17 = t;
            t = q_48;
            t = r_48(t);
            v_17 = t;
            t = (ATerm) ATinsert(CheckATermList(v_17), m_48);
            p_9 = t;
            t = SSLsetAnnotations(p_9, p_17);
          }
        }
    }
    return(t);
  }
  t = r_48(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_48;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_35 = ATgetFirst((ATermList) t);
                ATerm e_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_48;
          }
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = (ATerm) ATinsert(ATempty, v_48);
      }
  }
  w_48 = t;
  t = term_e_12;
  x_48 = t;
  t = SSL_printnl(x_48, w_48);
  t = v_48;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL;
  t = term_a_12;
  b_49 = t;
  t = term_m_33;
  c_49 = t;
  t = term_n_33;
  t = j_8(b_49, c_49, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_8 (ATerm e_53, ATerm f_53, ATerm t)
{
  t = SSL_hashtable_get(f_53, e_53);
  return(t);
}
static ATerm j_8 (ATerm c_50, ATerm d_50, ATerm t)
{
  ATerm d_49 = NULL;
  t = lookup_table_0_1(c_50, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_8(d_50, d_49, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm f_49 = NULL,l_49 = NULL;
  t = term_f_35;
  f_49 = t;
  t = term_c_15;
  l_49 = t;
  t = term_g_35;
  t = m_8(f_49, l_49, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL,t_49 = NULL;
  t = term_f_35;
  o_49 = t;
  t = term_c_15;
  t_49 = t;
  t = term_g_35;
  t = m_8(o_49, t_49, t);
  t = term_i_35;
  m_49 = t;
  t = term_c_15;
  n_49 = t;
  t = term_j_35;
  t = m_8(m_49, n_49, t);
  t = term_m_35;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_8, x_8, y_8, t);
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
      t = Option_3_0(z_8, d_9, e_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  ATerm u_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,e_50 = NULL,f_50 = NULL,u_9 = NULL;
  f_50 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_49 = ATgetFirst((ATermList) t);
      a_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_50);
  u_49 = t;
  t = z_49;
  t = a_74(t);
  b_50 = t;
  t = a_50;
  t = b_74(t);
  e_50 = t;
  t = (ATerm) ATinsert(CheckATermList(e_50), b_50);
  u_9 = t;
  t = SSLsetAnnotations(u_9, u_49);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,p_50 = NULL,q_50 = NULL,d_10 = NULL;
  k_50 = t;
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_35;
        t = z_108(t);
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
      }
  }
  t = k_50;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_50 = ATgetFirst((ATermList) t);
      n_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_50);
  l_50 = t;
  t = term_m_33;
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_33, m_50);
  t = m_8(q_50, m_50, t);
  t = n_50;
  {
    static ATerm a_51 (ATerm t);
    static ATerm a_51 (ATerm t)
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_50 = NULL;
              t_50 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_50;
              LocalPopChoice(y_35);
            }
          else
            {
              t = x_35;
              t = z_108(t);
              t = Cons_2_0(_id, a_51, t);
            }
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          {
            ATerm w_50 = NULL,x_50 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_50 = ATgetFirst((ATermList) t);
                x_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_50), (ATerm) ATmakeAppl(sym_Undefined_1, w_50));
          }
        }
      return(t);
    }
    t = a_51(t);
  }
  p_50 = t;
  t = (ATerm) ATinsert(CheckATermList(p_50), (ATerm) ATmakeAppl(sym_Program_1, m_50));
  d_10 = t;
  t = SSLsetAnnotations(d_10, l_50);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm n_51 = NULL;
  n_51 = t;
  if(match_string(t, "--help"))
    {
      t = n_51;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_51;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_51;
        }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  t = term_f_34;
  o_51 = t;
  t = term_c_15;
  p_51 = t;
  t = term_z_35;
  t = m_8(o_51, p_51, t);
  t = term_a_36;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  h_51 = t;
  t = term_e_31;
  i_51 = t;
  t = term_g_36;
  t = lookup_table_0_1(i_51, t);
  m_51 = t;
  t = term_g_31;
  j_51 = t;
  t = (ATerm) ATempty;
  k_51 = t;
  t = m_51;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(j_51, k_51, l_51, t);
  t = h_51;
  {
    static ATerm i_9 (ATerm t);
    static ATerm i_9 (ATerm t)
    {
      ATerm k_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_108(t);
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
                t = Option_3_0(j_9, k_9, m_9, t);
                LocalPopChoice(n_36);
              }
            else
              {
                t = m_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_9, t);
  }
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_52 = NULL;
        a_52 = t;
        {
          ATerm q_36 = t;
          int t_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_18 = NULL;
              t = a_52;
              {
                ATerm w_36 = t;
                int x_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_18 = NULL,m_18 = NULL;
                    t = term_a_12;
                    l_18 = t;
                    t = term_f_34;
                    m_18 = t;
                    t = term_i_34;
                    t = j_8(l_18, m_18, t);
                    LocalPopChoice(x_36);
                  }
                else
                  {
                    t = w_36;
                    t = fetch_1_0(n_9, t);
                  }
              }
              t = a_52;
              t = default_system_usage_0_0(t);
              t = term_l_31;
              j_18 = t;
              t = SSL_exit(j_18);
              LocalPopChoice(t_36);
            }
          else
            {
              t = q_36;
              {
                ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
                t = term_a_12;
                u_18 = t;
                t = term_f_35;
                v_18 = t;
                t = term_z_36;
                t = j_8(u_18, v_18, t);
                t = a_52;
                t = default_system_about_0_0(t);
                t = term_l_31;
                t_18 = t;
                t = SSL_exit(t_18);
              }
            }
        }
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        {
          ATerm a_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
              static ATerm q_9 (ATerm t);
              static ATerm q_9 (ATerm t)
              {
                ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,g_10 = NULL;
                g_52 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_52 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_52);
                e_52 = t;
                t = f_52;
                if(((f_51 != NULL) && (f_51 != t)))
                  _fail(t);
                else
                  f_51 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_52);
                g_10 = t;
                t = SSLsetAnnotations(g_10, e_52);
                return(t);
              }
              t = fetch_1_0(q_9, t);
              t = term_z_13;
              c_52 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_51)), term_h_37);
              d_52 = t;
              t = SSL_printnl(c_52, d_52);
              t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_51)), term_h_37));
              t = default_system_usage_0_0(t);
              t = term_b_14;
              b_52 = t;
              t = SSL_exit(b_52);
              LocalPopChoice(c_37);
            }
          else
            {
              t = a_37;
            }
        }
      }
  }
  g_51 = t;
  t = term_e_31;
  t = table_destroy_0_0(t);
  t = g_51;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  t = parse_options_1_0(d_107, t);
  l_52 = t;
  t = term_j_37;
  t = table_create_0_0(t);
  t = term_j_37;
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_37, term_l_37, l_52);
  t = lookup_table_0_1(m_52, t);
  p_52 = t;
  t = term_l_37;
  n_52 = t;
  t = p_52;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_8(n_52, l_52, o_52, t);
  t = l_52;
  t = f_107(t);
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_107, t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        {
          ATerm u_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(x_37);
            }
          else
            {
              t = u_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm y_37 = t;
  int a_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(a_38);
    }
  else
    {
      t = y_37;
      {
        ATerm e_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = e_38;
            {
              ATerm j_38 = t;
              int k_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(k_38);
                }
              else
                {
                  t = j_38;
                  {
                    ATerm l_38 = t;
                    int m_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_9, v_9, z_9, t);
                        LocalPopChoice(m_38);
                      }
                    else
                      {
                        t = l_38;
                        {
                          ATerm n_38 = t;
                          int o_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(o_38);
                            }
                          else
                            {
                              t = n_38;
                              {
                                ATerm p_38 = t;
                                int q_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(q_38);
                                  }
                                else
                                  {
                                    t = p_38;
                                    t = Option_3_0(e_10, f_10, h_10, t);
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
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  t = term_r_38;
  r_52 = t;
  t = term_c_15;
  s_52 = t;
  t = term_s_38;
  t = m_8(r_52, s_52, t);
  t = term_t_38;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL;
  t_52 = t;
  t = term_s_12;
  u_52 = t;
  t = term_v_38;
  v_52 = t;
  t = term_w_38;
  t = m_8(u_52, v_52, t);
  t = t_52;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
