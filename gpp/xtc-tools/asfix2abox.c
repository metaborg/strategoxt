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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
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
ATerm term_k_37;
ATerm term_j_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_x_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_t_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_u_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_b_30;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_i_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_e_28;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_n_26;
ATerm term_h_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_s_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_k_25;
ATerm term_v_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_f_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_w_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_i_12, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_d_11, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_h_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_b_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_v_15, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_c_16, term_m_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_w_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_l_18, term_m_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_d_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_n_19, term_o_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_s_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_z_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_g_20, term_h_20);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_20, term_m_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_y_20, term_z_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_g_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_21, term_m_21, term_n_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_q_25);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_v_24);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_w_26);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_b_10);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_b_30, term_e_30);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym__2, term_h_34, term_b_10);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym__2, term_l_34, term_b_10);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_b_10);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_b_10);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_f_37);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_conservative_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm t_6 (ATerm m_14, ATerm l_14, ATerm t);
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
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm v_6 (ATerm o_33, ATerm p_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm w_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm x_6 (ATerm s_66 (ATerm), ATerm b_170, ATerm x_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
static ATerm y_6 (ATerm f_14, ATerm g_14, ATerm t);
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
static ATerm b_7 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t);
static ATerm c_7 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_7 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t);
static ATerm e_7 (ATerm c_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t);
static ATerm i_7 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm f_13 (ATerm x_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm t_17, ATerm t);
static ATerm g_7 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm f_16 (ATerm a_14, ATerm t);
static ATerm g_16 (ATerm i_14, ATerm j_14, ATerm k_14, ATerm t);
static ATerm h_16 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm t);
static ATerm h_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm x_21 (ATerm t_20, ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm x_85 (ATerm), ATerm t);
static ATerm j_7 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm o_36, ATerm p_36, ATerm t);
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm j_85 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
ATerm xtc_io_1_0 (ATerm k_85 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm u_7 (ATerm j_38, ATerm k_38, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_31 (ATerm g_31, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm p_38, ATerm o_38, ATerm t);
static ATerm s_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm i_33, ATerm j_33, ATerm t);
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_82 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm need_help_1_0 (ATerm f_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_7 (ATerm d_32, ATerm e_32, ATerm t);
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_7 (ATerm a_38, ATerm b_38, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_89 (ATerm), ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm parse_options_1_0 (ATerm c_89 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm v_0 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_9;
      t = get_config_0_0(t);
      LocalPopChoice(w_9);
      t = (ATerm) ATinsert(ATempty, term_a_10);
    }
  else
    {
      t = v_0;
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
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL;
  t = term_b_10;
  t = new_0_0(t);
  b_0 = t;
  t = term_c_10;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_c_10);
  t = q_7(b_0, f_0, t);
  j_0 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_10);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_0, (ATerm) ATinsert(ATempty, term_i_10));
        t = i_7(j_0, q_0, t);
        t = new_file_0_0(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
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
static ATerm t_6 (ATerm m_14, ATerm l_14, ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      t = get_errno_0_0(t);
      t = term_b_10;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = k_7(m_14, l_14, t);
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
    ATerm m_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL;
        t = p_1;
        t = t_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_p_10;
        w_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_1, term_p_10);
        t = k_7(q_1, w_0, t);
        t = SSL_remove(q_1);
        t = term_p_10;
        LocalPopChoice(o_10);
      }
    else
      {
        t = m_10;
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_1 = NULL;
              t = p_1;
              t = t_0(t);
              e_1 = t;
              {
                ATerm t_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_1 = NULL;
                    j_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = j_1;
                      }
                    else
                      {
                        t = j_1;
                        if((q_1 != t))
                          {
                            _fail(t);
                          }
                        t = j_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, q_1, e_1);
              t = t_6(q_1, e_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
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
  t = term_v_10;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_v_10;
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
  t = term_w_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL;
  v_1 = t;
  {
    static ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 = NULL,c_2 = NULL,c_1 = NULL;
            c_2 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm z_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_2);
            x_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_1);
            c_1 = t;
            t = SSLsetAnnotations(c_1, x_1);
            LocalPopChoice(y_10);
            t = xtc_transform_file_2_0(h_0, m_0, t);
          }
        else
          {
            t = x_10;
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
      w_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_1;
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm e_2 = NULL;
  e_2 = t;
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL;
        t = term_c_11;
        t = get_config_0_0(t);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_2, term_d_11);
        t = geq_0_0(t);
        t = e_2;
        t = w_82(t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        t = e_2;
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
  t = term_e_11;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,o_2 = NULL,d_3 = NULL,e_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,f_1 = NULL;
  m_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), term_h_11), m_2);
  i_3 = t;
  t = SSL_concat_strings(i_3);
  h_3 = t;
  t = (ATerm) ATinsert(ATempty, term_i_10);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_3, (ATerm) ATinsert(ATempty, term_i_10));
  t = i_7(h_3, e_3, t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
  m_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      ATerm l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_3);
  j_3 = t;
  t = SSL_modification_time(l_2);
  k_3 = t;
  t = SSL_modification_time(m_2);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_3, l_3);
  f_1 = t;
  t = SSLsetAnnotations(f_1, j_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, l_2, m_2);
  d_3 = t;
  t = SSL_explode_term(d_3);
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_11 = ATgetArgument(t, 1);
        if(((ATgetType(o_11) == AT_LIST) && !(ATisEmpty(o_11))))
          {
            o_2 = ATgetFirst((ATermList) o_11);
            {
              ATerm q_11 = (ATerm) ATgetNext((ATermList) o_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_2;
  t = if_verbose2_1_0(z_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  static ATerm h_4 (ATerm t)
  {
    ATerm r_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_72(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = r_11;
        {
          ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,a_2 = NULL,f_2 = NULL,h_1 = NULL;
          d_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_4 = ATgetFirst((ATermList) t);
              f_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_4);
          a_2 = t;
          t = f_4;
          t = h_4(t);
          f_2 = t;
          t = (ATerm) ATinsert(CheckATermList(f_2), e_4);
          h_1 = t;
          t = SSLsetAnnotations(h_1, a_2);
        }
      }
    return(t);
  }
  t = h_4(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm w_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
      r_2 = t;
      t = term_y_11;
      s_2 = t;
      t = SSL_explode_string(s_2);
      q_2 = t;
      t = SSL_explode_string(r_2);
      {
        static ATerm b_1 (ATerm t)
        {
          if((q_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(b_1, t);
      }
      t = r_2;
      LocalPopChoice(x_11);
    }
  else
    {
      t = w_11;
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
            v_2 = t;
            t = term_c_12;
            w_2 = t;
            t = SSL_explode_string(w_2);
            u_2 = t;
            t = SSL_explode_string(v_2);
            {
              static ATerm d_1 (ATerm t)
              {
                if((u_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(d_1, t);
            }
            t = v_2;
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            {
              ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
              n_4 = t;
              t = term_d_12;
              p_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_h_12);
              q_4 = t;
              t = SSL_printnl(p_4, q_4);
              t = term_i_12;
              o_4 = t;
              t = SSL_exit(o_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_h_12);
            }
          }
      }
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = lookup_pp_af_0_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
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
      t = term_n_12;
      t = get_config_0_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm r_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  r_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_n_12);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = debug_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(g_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(i_1, t);
  return(t);
}
static ATerm v_6 (ATerm o_33, ATerm p_33, ATerm t)
{
  ATerm p_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(o_33, p_33);
      LocalPopChoice(r_12);
    }
  else
    {
      t = p_12;
      t = SSL_subtr(o_33, p_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,x_4 = NULL;
  t = term_c_11;
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = term_i_12;
      }
  }
  t_4 = t;
  t = term_i_12;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_i_12);
  t = v_6(t_4, x_4, t);
  u_4 = t;
  t = SSL_int_to_string(u_4);
  s_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_c_11);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  t = term_b_10;
  t = pass_verbose_0_0(t);
  z_4 = t;
  t = term_b_10;
  t = create_pp_table_args_0_0(t);
  a_5 = t;
  t = term_b_10;
  t = pass_conservative_0_0(t);
  b_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_5), a_5), z_4);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_5 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_10);
      l_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, (ATerm) ATinsert(ATempty, term_i_10));
      t = i_7(i_5, l_5, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm w_6 (ATerm n_17, ATerm o_17, ATerm t)
{
  ATerm m_5 = NULL;
  t = SSL_write_term_to_stream_baf(n_17, o_17);
  m_5 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_5);
  return(t);
}
static ATerm x_6 (ATerm s_66 (ATerm), ATerm b_170, ATerm x_17, ATerm t)
{
  ATerm n_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_170, term_w_12);
  t = h_7(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, x_17);
  t = s_66(t);
  t = fclose_0_0(t);
  t = x_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm s_5 = NULL,t_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_12 = ATgetArgument(t, 0);
      if(match_cons(y_12, sym_Stream_1))
        {
          s_5 = ATgetArgument(y_12, 0);
        }
      else
        _fail(t);
      t_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(s_5, t_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,r_5 = NULL;
  r_5 = t;
  t = xtc_new_file_0_0(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, r_5);
  t = x_6(m_1, o_5, r_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_5);
  t = xtc_transform_file_2_0(w_84, x_84, t);
  t = read_from_0_0(t);
  return(t);
}
static ATerm y_6 (ATerm f_14, ATerm g_14, ATerm t)
{
  t = SSL_execvp(f_14, g_14);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL,a_8 = NULL,c_8 = NULL;
  x_7 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      y_7 = ATgetArgument(t, 0);
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = SSL_int_to_string(y_7);
        b_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_13), b_3), term_z_12);
        c_3 = t;
        t = SSL_concat_strings(c_3);
      }
    }
  else
    {
      ATerm c_4 = NULL,g_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          y_7 = ATgetArgument(t, 0);
          a_8 = ATgetArgument(t, 1);
          c_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(a_8);
      c_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_8), term_e_13), c_4), term_b_13), y_7);
      g_4 = t;
      t = SSL_concat_strings(g_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_71 (ATerm), ATerm t)
{
  ATerm f_8 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = u_71(t);
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(f_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_8 = NULL;
  g_8 = t;
  {
    ATerm j_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_13 = ATgetArgument(t, 0);
              if((g_8 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm r_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_21), term_h_21), term_d_21), term_s_20), term_o_20), term_k_20), term_c_20), term_u_19), term_p_19), term_k_19), term_f_19), term_z_18), term_v_18), term_r_18), term_n_18), term_g_18), term_w_16), term_r_16), term_n_16), term_y_15), term_q_15), term_j_15), term_d_15), term_y_14), term_u_14), term_d_14), term_x_13), term_u_13);
        t = fetch_elem_1_0(r_1, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_8 = NULL,a_9 = NULL;
  l_8 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm r_21 = ATgetArgument(t, 0);
            a_9 = ATgetArgument(t, 1);
            {
              ATerm t_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_21);
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 = NULL,h_5 = NULL,j_5 = NULL;
              t = a_9;
              {
                ATerm w_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = w_21;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_5 = t;
              t = term_d_12;
              h_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_5), term_y_21);
              j_5 = t;
              t = SSL_printnl(h_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, e_5), term_y_21));
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              t = l_8;
            }
        }
      }
    else
      {
        t = p_21;
        t = l_8;
      }
  }
  t = l_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  k_9 = t;
  t = fork_0_0(t);
  j_9 = t;
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_9;
        t = h_65(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = SSL_waitpid(j_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_22 = ATgetArgument(t, 0);
            if(((ATgetType(b_22) != AT_INT) || (ATgetInt((ATermInt) b_22) != 0)))
              _fail(t);
            {
              ATerm c_22 = ATgetArgument(t, 1);
            }
            {
              ATerm e_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_9;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm m_9 = NULL;
  static ATerm s_1 (ATerm t)
  {
    ATerm n_9 = NULL,p_9 = NULL;
    n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), n_9);
    t = r_7(not_null(m_9), n_9, t);
    p_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_9, p_9);
    return(t);
  }
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = SSL_table_keys(m_9);
  t = map_1_0(s_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  r_9 = t;
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_c_11;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_q_20);
        t = geq_0_0(t);
        t = r_9;
        t = z_82(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        t = r_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_82 (ATerm), ATerm t)
{
  ATerm y_9 = NULL;
  y_9 = t;
  {
    ATerm k_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = term_c_11;
        t = get_config_0_0(t);
        d_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_10, term_u_16);
        t = geq_0_0(t);
        t = y_9;
        t = y_82(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = k_22;
        t = y_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_83 (ATerm), ATerm t)
{
  ATerm g_10 = NULL;
  g_10 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_10 = NULL;
        t = term_c_11;
        t = get_config_0_0(t);
        l_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, term_h_14);
        t = geq_0_0(t);
        t = g_10;
        t = a_83(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = g_10;
      }
  }
  return(t);
}
static ATerm b_7 (ATerm q_75 (ATerm), ATerm r_75 (ATerm), ATerm u_24, ATerm t_24, ATerm t)
{
  t = r_75(t);
  {
    static ATerm u_1 (ATerm t)
    {
      ATerm n_10 = NULL;
      n_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_24, n_10);
      t = q_75(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
  }
  t = t_24;
  return(t);
}
static ATerm c_7 (ATerm n_75 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  static ATerm n_11 (ATerm t)
  {
    ATerm f_11 = NULL,g_11 = NULL,j_11 = NULL;
    f_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_11 = ATgetFirst((ATermList) t);
            j_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_11;
              {
                static ATerm y_1 (ATerm t)
                {
                  t = p_24;
                  return(t);
                }
                t = b_7(n_75, y_1, g_11, j_11, t);
              }
              t = n_11(t);
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              {
                ATerm w_5 = NULL,g_6 = NULL,k_1 = NULL;
                t = SSLgetAnnotations(f_11);
                w_5 = t;
                t = j_11;
                t = n_11(t);
                g_6 = t;
                t = (ATerm) ATinsert(CheckATermList(g_6), g_11);
                k_1 = t;
                t = SSLsetAnnotations(k_1, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = q_24;
  t = n_11(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      b_12 = ATgetArgument(t, 0);
      if((b_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm g_37, ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL;
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_22 = ATgetArgument(t, 0);
            ATerm a_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_37, h_37);
        t = r_7(g_37, h_37, t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
        t = (ATerm) ATempty;
      }
  }
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_11, i_37);
  t = c_7(z_1, v_11, i_37, t);
  u_11 = t;
  t = SSL_table_put(g_37, h_37, u_11);
  t = s_11;
  return(t);
}
static ATerm e_7 (ATerm c_83 (ATerm), ATerm q_37, ATerm p_37, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm f_12 = NULL,g_12 = NULL;
    if(match_cons(t, sym__2))
      {
        f_12 = ATgetArgument(t, 0);
        g_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_37, f_12, g_12);
    t = c_83(t);
    return(t);
  }
  t = p_37;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm i_7 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_access(r_39, s_39);
  return(t);
}
static ATerm f_13 (ATerm x_12, ATerm t)
{
  t = SSL_fclose(x_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  d_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_13 = ATgetArgument(t, 0);
      {
        ATerm d_23 = t;
        int j_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_13);
            LocalPopChoice(j_23);
          }
        else
          {
            t = d_23;
            t = f_13(d_13, t);
          }
      }
    }
  else
    {
      t = f_13(d_13, t);
    }
  return(t);
}
static ATerm f_7 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm g_7 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_fopen(a_40, b_40);
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdin_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_stdout_stream();
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_13 = NULL;
  t = SSL_stderr_stream();
  l_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_13);
  return(t);
}
static ATerm f_16 (ATerm a_14, ATerm t)
{
  ATerm b_14 = NULL;
  t = SSL_explode_term(a_14);
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            b_14 = ATgetFirst((ATermList) p_23);
            {
              ATerm q_23 = (ATerm) ATgetNext((ATermList) p_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm g_16 (ATerm i_14, ATerm j_14, ATerm k_14, ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,c_15 = NULL,o_1 = NULL;
  t = SSLgetAnnotations(k_14);
  s_14 = t;
  t = i_14;
  if(match_cons(t, sym_Path_1))
    {
      c_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_15, j_14);
  o_1 = t;
  t = SSLsetAnnotations(o_1, s_14);
  if(match_cons(t, sym__2))
    {
      q_14 = ATgetArgument(t, 0);
      r_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(q_14, r_14, t);
  return(t);
}
static ATerm h_16 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,x_15 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(m_15);
  u_15 = t;
  t = SSL_is_string(k_15);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, l_15);
  t_1 = t;
  t = SSLsetAnnotations(t_1, u_15);
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(s_15, t_15, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_16 = NULL,d_16 = NULL,e_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_16(b_16, t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm v_23 = t;
              int w_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_16(d_16, e_16, b_16, t);
                  LocalPopChoice(w_23);
                }
              else
                {
                  t = v_23;
                  t = h_16(d_16, e_16, b_16, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_16(b_16, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,s_16 = NULL;
  s_16 = t;
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_16, term_z_23);
        t = h_7(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm w_7 = NULL,z_7 = NULL;
          t = term_a_24;
          z_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_24, s_16);
          t = q_7(z_7, s_16, t);
          w_7 = t;
          t = SSL_perror(w_7);
          _fail(t);
        }
      }
  }
  k_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(l_16, t);
  j_16 = t;
  t = k_16;
  t = fclose_0_0(t);
  t = j_16;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_16 = NULL,y_16 = NULL;
      x_16 = t;
      t = (ATerm) ATinsert(ATempty, term_f_24);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_16, (ATerm) ATinsert(ATempty, term_f_24));
      t = i_7(x_16, y_16, t);
      LocalPopChoice(e_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = d_24;
      {
        ATerm g_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_24 = t;
            if((PushChoice() == 0))
              {
                ATerm z_16 = NULL,a_17 = NULL;
                z_16 = t;
                t = (ATerm) ATinsert(ATempty, term_i_10);
                a_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_16, (ATerm) ATinsert(ATempty, term_i_10));
                t = i_7(z_16, a_17, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = i_24;
              }
            t = debug_1_0(d_2, t);
            LocalPopChoice(h_24);
          }
        else
          {
            t = g_24;
            t = debug_1_0(g_2, t);
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
  t = term_j_24;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  t = term_k_24;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,u_17 = NULL;
  r_17 = t;
  t = term_d_12;
  s_17 = t;
  t = (ATerm) ATinsert(ATempty, term_l_24);
  u_17 = t;
  t = SSL_printnl(s_17, u_17);
  t = r_17;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__3))
    {
      v_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_7(v_17, z_17, a_18, t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  b_18 = t;
  t = term_d_12;
  c_18 = t;
  t = (ATerm) ATinsert(ATempty, term_m_24);
  d_18 = t;
  t = SSL_printnl(c_18, d_18);
  t = b_18;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL,i_18 = NULL;
  e_18 = t;
  t = term_d_12;
  f_18 = t;
  t = (ATerm) ATinsert(ATempty, term_l_24);
  i_18 = t;
  t = SSL_printnl(f_18, i_18);
  t = e_18;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  d_17 = t;
  t = if_verbose5_1_0(h_2, t);
  {
    ATerm n_24 = t;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,q_17 = NULL;
        t = term_o_24;
        p_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, d_17);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATmakeAppl(sym_Imported_1, d_17));
        t = r_7(p_17, q_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_24;
      }
  }
  f_17 = t;
  t = term_o_24;
  k_17 = t;
  t = term_v_24;
  l_17 = t;
  t = (ATerm) ATinsert(ATempty, d_17);
  m_17 = t;
  t = SSL_table_put(k_17, l_17, m_17);
  t = f_17;
  t = if_verbose4_1_0(k_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(p_2, t);
  e_17 = t;
  t = term_o_24;
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, e_17);
  t = e_7(t_2, j_17, e_17, t);
  t = if_verbose6_1_0(y_2, t);
  t = term_o_24;
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, d_17);
  h_17 = t;
  t = (ATerm) ATempty;
  i_17 = t;
  t = SSL_table_put(g_17, h_17, i_17);
  t = (ATerm) ATmakeAppl(sym__3, term_o_24, (ATerm)ATmakeAppl(sym_Imported_1, d_17), (ATerm) ATempty);
  t = if_verbose4_1_0(z_2, t);
  return(t);
}
ATerm filter_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm c_19 = NULL,e_19 = NULL,g_19 = NULL;
  c_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_19 = ATgetFirst((ATermList) t);
          g_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm w_24 = t;
        int x_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_8 = NULL,s_8 = NULL,u_8 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(c_19);
            k_8 = t;
            t = e_19;
            t = i_79(t);
            s_8 = t;
            t = g_19;
            t = filter_1_0(i_79, t);
            u_8 = t;
            t = (ATerm) ATinsert(CheckATermList(u_8), s_8);
            x_2 = t;
            t = SSLsetAnnotations(x_2, k_8);
            LocalPopChoice(x_24);
          }
        else
          {
            t = w_24;
            t = g_19;
            t = filter_1_0(i_79, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm n_69 (ATerm), ATerm o_69 (ATerm), ATerm t)
{
  static ATerm x_19 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_69(t);
        t = x_19(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = o_69(t);
      }
    return(t);
  }
  t = x_19(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm c_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_25;
      t = get_config_0_0(t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = c_25;
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_19 = NULL;
            t = term_o_25;
            y_19 = t;
            t = SSL_getenv(y_19);
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = debug_1_0(f_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  t = term_o_24;
  i_20 = t;
  t = term_q_25;
  j_20 = t;
  t = term_s_25;
  t = r_7(i_20, j_20, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm x_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_25;
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
  t = term_y_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_20 = NULL;
  t = if_verbose5_1_0(a_3, t);
  a_20 = t;
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_20 = NULL,e_20 = NULL;
        t = term_o_24;
        b_20 = t;
        t = term_v_24;
        e_20 = t;
        t = term_b_26;
        t = r_7(b_20, e_20, t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        {
          ATerm f_20 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_20 = t;
          t = repeat_2_0(g_3, _id, t);
          t = f_20;
        }
      }
  }
  t = a_20;
  t = if_verbose5_1_0(n_3, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm x_21 (ATerm t_20, ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  t = term_o_24;
  w_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_20);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATmakeAppl(sym_Tool_1, t_20));
  t = r_7(w_20, x_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_26 = ATgetFirst((ATermList) t);
      if(match_cons(d_26, sym__2))
        {
          ATerm f_26 = ATgetArgument(d_26, 0);
          v_20 = ATgetArgument(d_26, 1);
        }
      else
        _fail(t);
      {
        ATerm e_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_20;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_o_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(x_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL;
      t = if_verbose5_1_0(p_3, t);
      t = xtc_load_0_0(t);
      c_21 = t;
      if(match_cons(t, sym__2))
        {
          a_21 = ATgetArgument(t, 0);
          b_21 = ATgetArgument(t, 1);
          {
            ATerm k_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
                t = term_o_24;
                k_21 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_21);
                l_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_o_24, (ATerm) ATmakeAppl(sym_Tool_1, a_21));
                t = r_7(k_21, l_21, t);
                {
                  static ATerm t_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_21 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(t_3, t);
                }
                t = not_null(j_21);
                LocalPopChoice(l_26);
              }
            else
              {
                t = k_26;
                t = x_21(c_21, t);
              }
          }
        }
      else
        {
          t = x_21(c_21, t);
        }
      t = if_verbose5_1_0(u_3, t);
      LocalPopChoice(j_26);
    }
  else
    {
      t = i_26;
      {
        ATerm s_21 = NULL,i_9 = NULL,o_9 = NULL;
        s_21 = t;
        t = term_d_12;
        i_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), s_21), term_n_26);
        o_9 = t;
        t = SSL_printnl(i_9, o_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), s_21), term_n_26);
        t = if_verbose5_1_0(w_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,f_22 = NULL;
  f_22 = t;
  t = x_85(t);
  t = xtc_find_0_0(t);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_22, f_22);
  {
    static ATerm z_3 (ATerm t)
    {
      ATerm g_22 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, d_22, f_22);
      t = y_6(d_22, f_22, t);
      t = term_s_26;
      g_22 = t;
      t = SSL_exit(g_22);
      return(t);
    }
    t = fork_and_wait_1_0(z_3, t);
  }
  t = f_22;
  return(t);
}
static ATerm j_7 (ATerm m_81 (ATerm), ATerm w_34, ATerm u_34, ATerm t)
{
  ATerm h_22 = NULL,l_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  q_22 = t;
  t = m_81(t);
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_22, w_34, u_34);
  t = s_7(h_22, w_34, u_34, t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_22 = NULL;
        t = term_w_26;
        t_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_22, term_w_26);
        t = r_7(h_22, t_22, t);
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_w_26;
  r_22 = t;
  t = (ATerm) ATinsert(CheckATermList(n_22), (ATerm) ATinsert(CheckATermList(l_22), w_34));
  s_22 = t;
  t = SSL_table_put(h_22, r_22, s_22);
  t = q_22;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_23 = NULL,x_9 = NULL;
      b_23 = t;
      t = term_a_27;
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_23, term_a_27);
      t = q_7(b_23, x_9, t);
      x_22 = t;
      t = SSL_mkstemp(x_22);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm c_23 = NULL;
        t = term_b_27;
        c_23 = t;
        t = SSL_perror(c_23);
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
  t = term_c_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL;
  t = P__tmpdir_0_0(t);
  h_23 = t;
  t = term_d_27;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_23, term_d_27);
  t = q_7(h_23, i_23, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_b_10;
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_23, term_b_10);
  t = j_7(a_4, f_23, g_23, t);
  t = SSL_close(e_23);
  t = f_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL;
  l_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_23 = NULL,o_23 = NULL;
      t = l_23;
      t = xtc_new_file_0_0(t);
      n_23 = t;
      t = r_0(t);
      o_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_23, (ATerm) ATinsert(ATinsert(ATempty, n_23), term_e_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
    }
  else
    {
      ATerm t_23 = NULL,u_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_23;
      t = xtc_new_file_0_0(t);
      t_23 = t;
      t = r_0(t);
      u_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_23), term_e_27), m_23), term_f_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_23);
    }
  return(t);
}
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = r_24;
        t = o_0(t);
        h_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = h_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = h_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_24, h_10);
        t = k_7(s_24, h_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_10 = NULL;
              t = r_24;
              t = o_0(t);
              s_10 = t;
              {
                ATerm k_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_10 = NULL;
                    u_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = u_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = u_10;
                          }
                        else
                          {
                            t = u_10;
                            if((s_24 != t))
                              {
                                _fail(t);
                              }
                            t = u_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, s_24, s_10);
              t = k_7(s_24, s_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = r_24;
              t = o_0(t);
              if((s_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_24);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm o_36, ATerm p_36, ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  b_25 = t;
  {
    ATerm l_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
        t = r_7(o_36, p_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_27 = ATgetFirst((ATermList) t);
            a_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_27);
        t = SSL_table_put(o_36, p_36, a_25);
        t = (ATerm) ATmakeAppl(sym__3, o_36, p_36, a_25);
      }
    else
      {
        t = l_27;
        t = SSL_table_remove(o_36, p_36);
        t = (ATerm) ATmakeAppl(sym__2, o_36, p_36);
      }
  }
  t = b_25;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm d_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  h_25 = t;
  t = j_81(t);
  g_25 = t;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_25 = NULL;
        t = term_w_26;
        j_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_25, term_w_26);
        t = r_7(g_25, j_25, t);
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_w_26;
  i_25 = t;
  t = SSL_table_put(g_25, i_25, d_25);
  t = f_25;
  {
    static ATerm i_4 (ATerm t)
    {
      ATerm l_25 = NULL;
      l_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_25, l_25);
      t = l_7(g_25, l_25, t);
      return(t);
    }
    t = map_1_0(i_4, t);
  }
  t = h_25;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      t = k_82(t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      t = k_82(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t_25 = t;
  t = i_81(t);
  r_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_25, term_w_26);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_27 = ATgetArgument(t, 0);
            ATerm x_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_26;
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_25, term_w_26);
        t = r_7(r_25, g_26, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
  }
  u_25 = t;
  t = term_w_26;
  v_25 = t;
  t = (ATerm) ATinsert(CheckATermList(u_25), (ATerm) ATempty);
  w_25 = t;
  t = SSL_table_put(r_25, v_25, w_25);
  t = t_25;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  {
    ATerm a_28 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_26);
        LocalPopChoice(b_28);
      }
    else
      {
        t = a_28;
        t = t_26;
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_c_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm m_26 = NULL;
  static ATerm l_4 (ATerm t)
  {
    ATerm o_26 = NULL;
    o_26 = t;
    {
      ATerm c_28 = t;
      int d_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_26 = NULL,q_26 = NULL;
          t = term_c_27;
          p_26 = t;
          t = term_w_26;
          q_26 = t;
          t = term_e_28;
          t = r_7(p_26, q_26, t);
          LocalPopChoice(d_28);
        }
      else
        {
          t = c_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_26 != NULL) && (m_26 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_26 = ATgetFirst((ATermList) t);
        {
          ATerm f_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = m_26;
    t = map_1_0(v_4, t);
    t = o_26;
    t = end_scope_1_0(w_4, t);
    return(t);
  }
  t = begin_scope_1_0(k_4, t);
  t = restore_always_2_0(j_85, l_4, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_27;
      t = get_config_0_0(t);
      LocalPopChoice(k_28);
    }
  else
    {
      t = j_28;
      t = term_p_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  static ATerm y_4 (ATerm t)
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_26 = NULL;
        t = term_f_27;
        t = get_config_0_0(t);
        x_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = term_u_12;
      }
    t = k_85(t);
    t = copy_to_1_0(c_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_4, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_27 = NULL,p_27 = NULL;
      p_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          m_27 = ATgetArgument(t, 0);
          {
            ATerm p_11 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(p_27);
            p_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_27);
            q_3 = t;
            t = SSLsetAnnotations(q_3, p_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_27;
        }
      LocalPopChoice(s_28);
      t = xtc_transform_file_2_0(f_5, g_5, t);
    }
  else
    {
      t = r_28;
      t = xtc_transform_term_2_0(k_5, p_5, t);
    }
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL,z_27 = NULL;
        z_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_27 = ATgetArgument(t, 0);
            {
              ATerm e_12 = NULL,s_3 = NULL;
              t = SSLgetAnnotations(z_27);
              e_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_27);
              s_3 = t;
              t = SSLsetAnnotations(s_3, e_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_27;
          }
        LocalPopChoice(x_28);
        t = xtc_transform_file_2_0(q_5, u_5, t);
      }
    else
      {
        t = w_28;
        t = xtc_transform_term_2_0(v_5, x_5, t);
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), term_d_29), term_b_29), term_a_29);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_29), term_d_29), term_b_29), term_a_29);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_b_10;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_n_29;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_b_10;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(d_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL;
  g_28 = t;
  t = term_b_10;
  t = whoami_0_0(t);
  h_28 = t;
  t = term_d_12;
  l_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), h_28), term_o_29);
  m_28 = t;
  t = SSL_printnl(l_28, m_28);
  t = term_i_12;
  i_28 = t;
  t = SSL_exit(i_28);
  t = g_28;
  return(t);
}
static ATerm u_7 (ATerm j_38, ATerm k_38, ATerm t)
{
  ATerm n_28 = NULL;
  t = term_x_29;
  n_28 = t;
  t = SSL_table_put(n_28, j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__3, term_x_29, j_38, k_38);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,t_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_28 = NULL,v_28 = NULL,y_28 = NULL;
      t = term_b_10;
      t = e_0(t);
      u_28 = t;
      t = term_b_30;
      v_28 = t;
      t = term_e_30;
      y_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_e_30, u_28);
      t = s_7(v_28, y_28, u_28, t);
      _fail(t);
    }
  else
    {
      ATerm c_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          t_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = c_0(t);
      t = term_b_10;
      t = d_0(t);
      c_29 = t;
      t = (ATerm) ATinsert(CheckATermList(t_28), c_29);
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  if(match_string(t, "-k"))
    {
      t = e_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_29;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
  f_29 = t;
  t = SSL_string_to_int(f_29);
  g_29 = t;
  t = term_g_30;
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_30, g_29);
  t = u_7(h_29, g_29, t);
  t = f_29;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, a_6, b_6, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm j_29 = NULL;
  j_29 = t;
  if(match_string(t, "-S"))
    {
      t = j_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_29;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  t = term_c_11;
  k_29 = t;
  t = term_i_30;
  l_29 = t;
  t = term_j_30;
  t = u_7(k_29, l_29, t);
  t = term_k_30;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm m_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  t = SSL_string_to_int(m_29);
  p_29 = t;
  t = term_c_11;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, p_29);
  t = u_7(q_29, p_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_29);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  t = term_n_30;
  r_29 = t;
  t = term_b_10;
  s_29 = t;
  t = term_o_30;
  t = u_7(r_29, s_29, t);
  t = term_p_30;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, f_6, h_6, t);
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      {
        ATerm t_30 = t;
        int u_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_6, k_6, l_6, t);
            LocalPopChoice(u_30);
          }
        else
          {
            t = t_30;
            t = Option_3_0(m_6, o_6, p_6, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  if(match_string(t, "-o"))
    {
      t = u_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_29;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL;
  v_29 = t;
  t = term_e_27;
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, v_29);
  t = u_7(w_29, v_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_29);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, s_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  if(match_string(t, "-i"))
    {
      t = y_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_29;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  t = term_f_27;
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, z_29);
  t = u_7(a_30, z_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_29);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_6, z_6, a_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  static ATerm a_31 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,z_30 = NULL;
    z_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_30 = ATgetFirst((ATermList) t);
        x_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_12 = NULL,v_12 = NULL,y_3 = NULL;
          t = SSLgetAnnotations(z_30);
          q_12 = t;
          t = x_30;
          t = a_31(t);
          v_12 = t;
          t = (ATerm) ATinsert(CheckATermList(v_12), w_30);
          y_3 = t;
          t = SSLsetAnnotations(y_3, q_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_30;
        t = z_71(t);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL,f_30 = NULL;
  c_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_30;
    }
  else
    {
      static ATerm o_7 (ATerm t)
      {
        t = not_null(f_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_30 = ATgetFirst((ATermList) t);
          if(((f_30 != NULL) && (f_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_30;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
static ATerm v_31 (ATerm g_31, ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_explode_term(g_31);
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym__2))
    {
      p_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_7 (ATerm t)
            {
              t = q_31;
              return(t);
            }
            t = p_31;
            t = at_end_1_0(p_7, t);
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = v_31(r_31, t);
          }
      }
    }
  else
    {
      t = v_31(r_31, t);
    }
  return(t);
}
static ATerm m_7 (ATerm p_38, ATerm o_38, ATerm t)
{
  ATerm w_31 = NULL,y_31 = NULL,z_31 = NULL;
  t = p_38;
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATempty;
      }
  }
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_38, y_31);
  t = conc_0_0(t);
  w_31 = t;
  t = term_x_29;
  z_31 = t;
  t = SSL_table_put(z_31, p_38, w_31);
  t = (ATerm) ATmakeAppl(sym__3, term_x_29, p_38, w_31);
  return(t);
}
static ATerm s_7 (ATerm j_36, ATerm k_36, ATerm i_36, ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
  {
    ATerm i_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_31 = ATgetArgument(t, 0);
            ATerm l_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = r_7(j_36, k_36, t);
        LocalPopChoice(j_31);
      }
    else
      {
        t = i_31;
        t = (ATerm) ATempty;
      }
  }
  g_32 = t;
  t = (ATerm) ATinsert(CheckATermList(g_32), i_36);
  h_32 = t;
  t = SSL_table_put(j_36, k_36, h_32);
  t = f_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
      t = term_b_10;
      t = n_0(t);
      t_32 = t;
      t = term_b_30;
      u_32 = t;
      t = term_e_30;
      v_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_e_30, t_32);
      t = s_7(u_32, v_32, t_32, t);
      _fail(t);
    }
  else
    {
      ATerm z_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_32 = ATgetFirst((ATermList) t);
          q_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_32 = ATgetFirst((ATermList) t);
          s_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = k_0(t);
      t = r_32;
      t = l_0(t);
      z_32 = t;
      t = (ATerm) ATinsert(CheckATermList(s_32), z_32);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  t = term_n_12;
  d_33 = t;
  t = (ATerm) ATinsert(ATempty, c_33);
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, (ATerm) ATinsert(ATempty, c_33));
  t = m_7(d_33, e_33, t);
  t = c_33;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_7, v_7, b_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_10;
  t = whoami_0_0(t);
  h_33 = t;
  t = term_d_12;
  l_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_31), h_33);
  m_33 = t;
  t = SSL_printnl(l_33, m_33);
  t = term_i_12;
  k_33 = t;
  t = SSL_exit(k_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_31;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_33, j_33);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = SSL_addr(i_33, j_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_78 (ATerm), ATerm f_78 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,y_33 = NULL,b_34 = NULL;
  v_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_33;
      t = e_78(t);
    }
  else
    {
      ATerm e_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_33 = ATgetFirst((ATermList) t);
          b_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_34;
      t = foldr_2_0(e_78, f_78, t);
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_33, e_34);
      t = f_78(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      q_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(p_13, q_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_13 = NULL,m_13 = NULL;
  t = times_0_0(t);
  m_13 = t;
  t = SSL_explode_term(m_13);
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13;
  t = foldr_2_0(d_8, e_8, t);
  j_34 = t;
  t = SSL_TicksToSeconds(j_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
  l_35 = t;
  if(match_cons(t, sym__2))
    {
      m_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_35;
        if((m_35 != t))
          {
            _fail(t);
          }
        t = l_35;
        LocalPopChoice(a_32);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
        {
          ATerm b_32 = t;
          int c_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_35, n_35);
              LocalPopChoice(c_32);
            }
          else
            {
              t = b_32;
              t = SSL_gtr(m_35, n_35);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_35, n_35);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_35 = NULL;
        t = term_c_11;
        t = get_config_0_0(t);
        y_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_35, term_i_12);
        t = geq_0_0(t);
        t = w_35;
        t = v_82(t);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = w_35;
      }
  }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm a_36 = NULL,c_36 = NULL,l_36 = NULL,m_36 = NULL;
  t = run_time_0_0(t);
  a_36 = t;
  t = term_b_10;
  t = whoami_0_0(t);
  c_36 = t;
  t = term_d_12;
  l_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), a_36), term_b_13), c_36);
  m_36 = t;
  t = SSL_printnl(l_36, m_36);
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_32), a_36), term_b_13), c_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_30;
  q_36 = t;
  t = SSL_exit(q_36);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  z_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = z_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          y_36 = ATgetArgument(t, 0);
          {
            ATerm p_14 = NULL,b_4 = NULL;
            t = SSLgetAnnotations(z_36);
            p_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, y_36);
            b_4 = t;
            t = SSLsetAnnotations(b_4, p_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = z_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_32;
      t = get_config_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = fetch_1_0(i_8, t);
    }
  t = f_87(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_37 = ATgetFirst((ATermList) t);
      d_37 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_37 = NULL,n_37 = NULL;
        static ATerm j_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_37)), not_null(n_37));
          return(t);
        }
        t = d_37;
        t = i_0(t);
        if(((m_37 != NULL) && (m_37 != t)))
          _fail(t);
        else
          m_37 = t;
        t = c_37;
        t = g_0(t);
        if(((n_37 != NULL) && (n_37 != t)))
          _fail(t);
        else
          n_37 = t;
        t = d_37;
        t = reverse_acc_2_0(g_0, j_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_10;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,j_4 = NULL;
  x_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_37);
  j_4 = t;
  t = SSLsetAnnotations(j_4, v_37);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_37), term_o_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL;
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_31;
      t = get_config_0_0(t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = fetch_1_0(m_8, t);
    }
  t = term_y_32;
  t = echo_0_0(t);
  t = term_b_30;
  t_37 = t;
  t = term_e_30;
  u_37 = t;
  t = term_a_33;
  t = r_7(t_37, u_37, t);
  t = reverse_acc_2_0(_id, n_8, t);
  t = map_1_0(o_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  static ATerm i_39 (ATerm t)
  {
    ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
    f_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_39 = ATgetFirst((ATermList) t);
        h_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_15 = NULL,h_15 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(f_39);
          e_15 = t;
          t = g_39;
          t = s_71(t);
          h_15 = t;
          t = (ATerm) ATinsert(CheckATermList(h_39), h_15);
          m_4 = t;
          t = SSLsetAnnotations(m_4, e_15);
          LocalPopChoice(f_33);
        }
      else
        {
          t = b_33;
          {
            ATerm z_15 = NULL,i_16 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(f_39);
            z_15 = t;
            t = h_39;
            t = i_39(t);
            i_16 = t;
            t = (ATerm) ATinsert(CheckATermList(i_16), g_39);
            z_5 = t;
            t = SSLsetAnnotations(z_5, z_15);
          }
        }
    }
    return(t);
  }
  t = i_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  {
    ATerm g_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = n_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_33 = ATgetFirst((ATermList) t);
                ATerm r_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = n_39;
          }
        LocalPopChoice(n_33);
      }
    else
      {
        t = g_33;
        t = (ATerm) ATinsert(ATempty, n_39);
      }
  }
  o_39 = t;
  t = term_p_10;
  p_39 = t;
  t = SSL_printnl(p_39, o_39);
  t = n_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_7 (ATerm d_32, ATerm e_32, ATerm t)
{
  t = SSL_strcat(d_32, e_32);
  return(t);
}
ATerm debug_1_0 (ATerm q_66 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  v_39 = t;
  t = q_66(t);
  w_39 = t;
  t = term_d_12;
  x_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_39), w_39);
  y_39 = t;
  t = SSL_printnl(x_39, y_39);
  t = v_39;
  return(t);
}
ATerm map_1_0 (ATerm i_71 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,t_40 = NULL;
    o_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_40;
      }
    else
      {
        ATerm y_17 = NULL,j_18 = NULL,k_18 = NULL,c_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_40 = ATgetFirst((ATermList) t);
            t_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_40);
        y_17 = t;
        t = p_40;
        t = i_71(t);
        j_18 = t;
        t = t_40;
        t = e_41(t);
        k_18 = t;
        t = (ATerm) ATinsert(CheckATermList(k_18), j_18);
        c_6 = t;
        t = SSLsetAnnotations(c_6, y_17);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
    }
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_41 = NULL;
      o_41 = t;
      t = SSL_is_string(o_41);
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_8, t);
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            {
              ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
              w_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_41 = ATgetArgument(t, 0);
                  t = x_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_41 = ATgetArgument(t, 0);
                      t = x_41;
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(d_34);
                          }
                        else
                          {
                            t = c_34;
                            t = debug_1_0(q_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_42 = NULL,d_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_41 = ATgetArgument(t, 0);
                          y_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_41;
                      t = eval_config_0_0(t);
                      c_42 = t;
                      t = y_41;
                      t = eval_config_0_0(t);
                      d_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_42, d_42);
                      t = q_7(c_42, d_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm a_38, ATerm b_38, ATerm t)
{
  t = SSL_table_get(a_38, b_38);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  j_42 = t;
  t = term_x_29;
  k_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, j_42);
  t = r_7(k_42, j_42, t);
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_42 = NULL,m_42 = NULL;
        t = eval_config_0_0(t);
        l_42 = t;
        t = term_x_29;
        m_42 = t;
        t = SSL_table_put(m_42, j_42, l_42);
        t = l_42;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
      }
  }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  t = term_h_34;
  p_42 = t;
  t = term_b_10;
  q_42 = t;
  t = term_i_34;
  t = u_7(p_42, q_42, t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_k_34;
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
  ATerm r_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  t = term_h_34;
  y_42 = t;
  t = term_b_10;
  z_42 = t;
  t = term_i_34;
  t = u_7(y_42, z_42, t);
  t = term_l_34;
  r_42 = t;
  t = term_b_10;
  x_42 = t;
  t = term_m_34;
  t = u_7(r_42, x_42, t);
  t = term_n_34;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_8, t_8, v_8, t);
      LocalPopChoice(q_34);
    }
  else
    {
      t = p_34;
      t = Option_3_0(w_8, x_8, y_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_58 (ATerm), ATerm j_58 (ATerm), ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,e_6 = NULL;
  f_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_43 = ATgetFirst((ATermList) t);
      c_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_43);
  a_43 = t;
  t = b_43;
  t = i_58(t);
  d_43 = t;
  t = c_43;
  t = j_58(t);
  e_43 = t;
  t = (ATerm) ATinsert(CheckATermList(e_43), d_43);
  e_6 = t;
  t = SSLsetAnnotations(e_6, a_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_89 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,q_43 = NULL,r_43 = NULL,i_6 = NULL;
  l_43 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_34;
        t = d_89(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
      }
  }
  t = l_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_43 = ATgetFirst((ATermList) t);
      o_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_43);
  m_43 = t;
  t = term_o_31;
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_31, n_43);
  t = u_7(r_43, n_43, t);
  t = o_43;
  {
    static ATerm b_44 (ATerm t)
    {
      ATerm v_34 = t;
      int x_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_43 = NULL;
              u_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_43;
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              t = d_89(t);
              t = Cons_2_0(_id, b_44, t);
            }
          LocalPopChoice(x_34);
        }
      else
        {
          t = v_34;
          {
            ATerm x_43 = NULL,y_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_43 = ATgetFirst((ATermList) t);
                y_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_43), (ATerm) ATmakeAppl(sym_Undefined_1, x_43));
          }
        }
      return(t);
    }
    t = b_44(t);
  }
  q_43 = t;
  t = (ATerm) ATinsert(CheckATermList(q_43), (ATerm) ATmakeAppl(sym_Program_1, n_43));
  i_6 = t;
  t = SSLsetAnnotations(i_6, m_43);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  if(match_string(t, "--help"))
    {
      t = n_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_44;
        }
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  t = term_n_32;
  o_44 = t;
  t = term_b_10;
  p_44 = t;
  t = term_a_35;
  t = u_7(o_44, p_44, t);
  t = term_b_35;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_c_35;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_89 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  i_44 = t;
  t = term_b_30;
  k_44 = t;
  t = term_e_30;
  l_44 = t;
  t = (ATerm) ATempty;
  m_44 = t;
  t = SSL_table_put(k_44, l_44, m_44);
  t = i_44;
  {
    static ATerm z_8 (ATerm t)
    {
      ATerm d_35 = t;
      int e_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_89(t);
          LocalPopChoice(e_35);
        }
      else
        {
          t = d_35;
          {
            ATerm f_35 = t;
            int g_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_9, c_9, d_9, t);
                LocalPopChoice(g_35);
              }
            else
              {
                t = f_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(z_8, t);
  }
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL;
        w_44 = t;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_19 = NULL;
              t = w_44;
              {
                ATerm o_35 = t;
                int p_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_n_32;
                    t = get_config_0_0(t);
                    LocalPopChoice(p_35);
                  }
                else
                  {
                    t = o_35;
                    t = fetch_1_0(e_9, t);
                  }
              }
              t = w_44;
              t = default_system_usage_0_0(t);
              t = term_i_30;
              l_19 = t;
              t = SSL_exit(l_19);
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm q_19 = NULL;
                t = term_h_34;
                t = get_config_0_0(t);
                t = w_44;
                t = default_system_about_0_0(t);
                t = term_i_30;
                q_19 = t;
                t = SSL_exit(q_19);
              }
            }
        }
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm q_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL;
              static ATerm f_9 (ATerm t)
              {
                ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,n_6 = NULL;
                c_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    b_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(c_45);
                a_45 = t;
                t = b_45;
                if(((g_44 != NULL) && (g_44 != t)))
                  _fail(t);
                else
                  g_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, b_45);
                n_6 = t;
                t = SSLsetAnnotations(n_6, a_45);
                return(t);
              }
              t = fetch_1_0(f_9, t);
              t = term_d_12;
              y_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_44)), term_s_35);
              z_44 = t;
              t = SSL_printnl(y_44, z_44);
              t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_44)), term_s_35));
              t = default_system_usage_0_0(t);
              t = term_i_12;
              x_44 = t;
              t = SSL_exit(x_44);
              LocalPopChoice(r_35);
            }
          else
            {
              t = q_35;
            }
        }
      }
  }
  h_44 = t;
  t = term_b_30;
  j_44 = t;
  t = SSL_table_destroy(j_44);
  t = h_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  t = parse_options_1_0(h_87, t);
  h_45 = t;
  t = term_t_35;
  k_45 = t;
  t = SSL_table_create(k_45);
  t = term_t_35;
  i_45 = t;
  t = term_u_35;
  j_45 = t;
  t = SSL_table_put(i_45, j_45, h_45);
  t = h_45;
  t = j_87(t);
  {
    ATerm v_35 = t;
    int x_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_87, t);
        LocalPopChoice(x_35);
      }
    else
      {
        t = v_35;
        {
          ATerm z_35 = t;
          int b_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_87(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_36);
            }
          else
            {
              t = z_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
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
              ATerm h_36 = t;
              int n_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(n_36);
                }
              else
                {
                  t = h_36;
                  {
                    ATerm r_36 = t;
                    int s_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_9, l_9, q_9, t);
                        LocalPopChoice(s_36);
                      }
                    else
                      {
                        t = r_36;
                        {
                          ATerm t_36 = t;
                          int u_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(u_36);
                            }
                          else
                            {
                              t = t_36;
                              {
                                ATerm v_36 = t;
                                int w_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(w_36);
                                  }
                                else
                                  {
                                    t = v_36;
                                    t = Option_3_0(s_9, u_9, v_9, t);
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
static ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm m_45 = NULL,n_45 = NULL;
  t = term_x_36;
  m_45 = t;
  t = term_b_10;
  n_45 = t;
  t = term_a_37;
  t = u_7(m_45, n_45, t);
  t = term_b_37;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_e_37;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
  o_45 = t;
  t = term_z_9;
  p_45 = t;
  t = term_f_37;
  q_45 = t;
  t = term_j_37;
  t = u_7(p_45, q_45, t);
  t = o_45;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(g_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
