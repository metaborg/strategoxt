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
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_d_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_t_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_u_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_d_33;
ATerm term_b_33;
ATerm term_x_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_u_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_o_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_28;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_l_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_u_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_i_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_f_22;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
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
ATerm term_f_19;
ATerm term_e_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_o_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_j_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_p_10;
ATerm term_i_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_h_12, term_r_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_13, term_c_11, term_v_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_13, term_z_13, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_j_14, term_s_14);
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
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_b_15, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_f_15, term_h_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_w_15, term_x_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_k_16, term_o_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_17, term_w_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_o_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_18, term_u_18, term_v_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_a_19, term_c_19);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_q_19, term_r_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_d_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_j_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_r_20, term_s_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_y_20, term_z_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_i_21, term_j_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_z_25);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_h_25, term_i_25);
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym__2, term_y_26, term_x_26);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_d_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_a_10);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_z_29, term_a_30);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_a_10);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym__2, term_j_34, term_a_10);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_b_33, term_a_10);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_a_10);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_y_9, term_t_37);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm pass_conservative_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm new_file_0_0 (ATerm t);
ATerm EXDEV_0_0 (ATerm t);
ATerm get_errno_0_0 (ATerm t);
static ATerm t_6 (ATerm m_14, ATerm l_14, ATerm t);
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
ATerm parse_to_temp_file_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_80 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm lookup_pp_af_0_0 (ATerm t);
ATerm at_suffix_1_0 (ATerm m_70 (ATerm), ATerm t);
ATerm ensure_pp_table_parsed_0_0 (ATerm t);
ATerm get_config_p_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm create_pp_table_args_0_0 (ATerm t);
static ATerm v_6 (ATerm k_33, ATerm l_33, ATerm t);
ATerm pass_verbose_0_0 (ATerm t);
ATerm build_impl_args_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm w_6 (ATerm n_17, ATerm o_17, ATerm t);
static ATerm x_6 (ATerm c_65 (ATerm), ATerm i_167, ATerm v_17, ATerm t);
static ATerm m_1 (ATerm t);
ATerm xtc_transform_term_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t);
static ATerm y_6 (ATerm f_14, ATerm g_14, ATerm t);
ATerm signal_to_descr_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t);
ATerm signal_from_number_0_0 (ATerm t);
ATerm warn_ifsignaled_0_0 (ATerm t);
ATerm fork_0_0 (ATerm t);
ATerm fork_and_wait_1_0 (ATerm r_63 (ATerm), ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm if_verbose5_1_0 (ATerm a_81 (ATerm), ATerm t);
ATerm if_verbose4_1_0 (ATerm z_80 (ATerm), ATerm t);
ATerm if_verbose6_1_0 (ATerm b_81 (ATerm), ATerm t);
static ATerm b_7 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t);
static ATerm c_7 (ATerm w_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_7 (ATerm g_36, ATerm h_36, ATerm i_36, ATerm t);
static ATerm e_7 (ATerm d_81 (ATerm), ATerm q_36, ATerm p_36, ATerm t);
static ATerm i_7 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm d_13 (ATerm t_12, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm t_17, ATerm t);
static ATerm g_7 (ATerm a_39, ATerm b_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_16 (ATerm y_13, ATerm t);
static ATerm e_16 (ATerm e_14, ATerm h_14, ATerm i_14, ATerm t);
static ATerm f_16 (ATerm i_15, ATerm j_15, ATerm k_15, ATerm t);
static ATerm h_7 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm read_repository_file_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm xtc_read_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm t);
ATerm repeat_2_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm t);
ATerm xtc_location_0_0 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm xtc_load_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm h_21 (ATerm e_20, ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_find_0_0 (ATerm t);
ATerm xtc_command_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm j_7 (ATerm s_79 (ATerm), ATerm s_34, ATerm q_34, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm l_7 (ATerm o_35, ATerm p_35, ATerm t);
ATerm end_scope_1_0 (ATerm p_79 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_79 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm k_83 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
ATerm xtc_io_1_0 (ATerm l_83 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm asfix2abox_0_0 (ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm u_7 (ATerm j_37, ATerm k_37, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_30 (ATerm m_30, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_7 (ATerm p_37, ATerm o_37, ATerm t);
static ATerm s_7 (ATerm j_35, ATerm k_35, ATerm i_35, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm c_8 (ATerm t);
ATerm pp_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_7 (ATerm e_33, ATerm f_33, ATerm t);
ATerm foldr_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm g_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm need_help_1_0 (ATerm g_85 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_7 (ATerm z_31, ATerm a_32, ATerm t);
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t);
ATerm map_1_0 (ATerm s_69 (ATerm), ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_7 (ATerm a_37, ATerm b_37, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_87 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm parse_options_1_0 (ATerm d_87 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
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
  ATerm u_0 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_9;
      t = get_config_0_0(t);
      LocalPopChoice(x_9);
      t = (ATerm) ATinsert(ATempty, term_z_9);
    }
  else
    {
      t = u_0;
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
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_a_10;
  t = new_0_0(t);
  b_0 = t;
  t = term_b_10;
  c_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_0, term_b_10);
  t = q_7(b_0, c_0, t);
  e_0 = t;
  {
    ATerm d_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_0 = NULL;
        t = (ATerm) ATinsert(ATempty, term_i_10);
        j_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_0, (ATerm) ATinsert(ATempty, term_i_10));
        t = i_7(e_0, j_0, t);
        t = new_file_0_0(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = d_10;
        t = e_0;
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
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(m_14, l_14);
      LocalPopChoice(l_10);
    }
  else
    {
      t = j_10;
      t = get_errno_0_0(t);
      t = term_a_10;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, m_14, l_14);
      t = k_7(m_14, l_14, t);
      t = SSL_remove(m_14);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL;
  q_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      r_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = q_1;
        t = x_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_p_10;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_1, term_p_10);
        t = k_7(r_1, s_0, t);
        t = SSL_remove(r_1);
        t = term_p_10;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          ATerm q_10 = t;
          int r_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_1 = NULL;
              t = q_1;
              t = x_0(t);
              c_1 = t;
              {
                ATerm s_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_1 = NULL;
                    f_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_1;
                      }
                    else
                      {
                        t = f_1;
                        if((r_1 != t))
                          {
                            _fail(t);
                          }
                        t = f_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_10;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, r_1, c_1);
              t = t_6(r_1, c_1, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
              LocalPopChoice(r_10);
            }
          else
            {
              t = q_10;
              t = q_1;
              t = x_0(t);
              if((r_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, r_1);
            }
        }
      }
  }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = term_u_10;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = debug_1_0(y_0, t);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL;
  w_1 = t;
  {
    static ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_1 = NULL,d_2 = NULL,d_1 = NULL;
            d_2 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm y_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_2);
            y_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, w_1);
            d_1 = t;
            t = SSLsetAnnotations(d_1, y_1);
            LocalPopChoice(x_10);
            t = xtc_transform_file_2_0(f_0, h_0, t);
          }
        else
          {
            t = w_10;
            t = xtc_transform_term_2_0(m_0, q_0, t);
          }
      }
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(a_0, t);
  }
  if(match_cons(t, sym_FILE_1))
    {
      x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_1;
  t = if_verbose2_1_0(w_0, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm f_2 = NULL;
  f_2 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        k_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_2, term_c_11);
        t = geq_0_0(t);
        t = f_2;
        t = x_80(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = f_2;
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
  t = term_d_11;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL,d_3 = NULL,e_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,g_1 = NULL;
  n_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_11), term_h_11), n_2);
  h_3 = t;
  t = SSL_concat_strings(h_3);
  g_3 = t;
  t = (ATerm) ATinsert(ATempty, term_i_10);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_3, (ATerm) ATinsert(ATempty, term_i_10));
  t = i_7(g_3, e_3, t);
  m_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_2, n_2);
  l_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm j_11 = ATgetArgument(t, 0);
      ATerm k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  i_3 = t;
  t = SSL_modification_time(m_2);
  j_3 = t;
  t = SSL_modification_time(n_2);
  k_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, k_3);
  g_1 = t;
  t = SSLsetAnnotations(g_1, i_3);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, m_2, n_2);
  d_3 = t;
  t = SSL_explode_term(d_3);
  if(match_cons(t, sym__2))
    {
      ATerm m_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_11 = ATgetArgument(t, 1);
        if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
          {
            p_2 = ATgetFirst((ATermList) n_11);
            {
              ATerm p_11 = (ATerm) ATgetNext((ATermList) n_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_2;
  t = if_verbose2_1_0(z_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  static ATerm f_4 (ATerm t)
  {
    ATerm q_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        LocalPopChoice(t_11);
      }
    else
      {
        t = q_11;
        {
          ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL,a_2 = NULL,e_2 = NULL,i_1 = NULL;
          b_4 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_4 = ATgetFirst((ATermList) t);
              e_4 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_4);
          a_2 = t;
          t = e_4;
          t = f_4(t);
          e_2 = t;
          t = (ATerm) ATinsert(CheckATermList(e_2), d_4);
          i_1 = t;
          t = SSLsetAnnotations(i_1, a_2);
        }
      }
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
      r_2 = t;
      t = term_x_11;
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
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm y_11 = t;
        int z_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
            v_2 = t;
            t = term_b_12;
            w_2 = t;
            t = SSL_explode_string(w_2);
            u_2 = t;
            t = SSL_explode_string(v_2);
            {
              static ATerm e_1 (ATerm t)
              {
                if((u_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(e_1, t);
            }
            t = v_2;
            LocalPopChoice(z_11);
          }
        else
          {
            t = y_11;
            {
              ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
              n_4 = t;
              t = term_d_12;
              p_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_g_12);
              q_4 = t;
              t = SSL_printnl(p_4, q_4);
              t = term_h_12;
              o_4 = t;
              t = SSL_exit(o_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, n_4), term_g_12);
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
static ATerm h_1 (ATerm t)
{
  ATerm r_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  r_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_4), term_n_12);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(h_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(j_1, t);
  return(t);
}
static ATerm v_6 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm p_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_33, l_33);
      LocalPopChoice(s_12);
    }
  else
    {
      t = p_12;
      t = SSL_subtr(k_33, l_33);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL,x_4 = NULL;
  t = term_b_11;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = term_h_12;
      }
  }
  t_4 = t;
  t = term_h_12;
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_4, term_h_12);
  t = v_6(t_4, x_4, t);
  u_4 = t;
  t = SSL_int_to_string(u_4);
  s_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_4), term_b_11);
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL;
  t = term_a_10;
  t = pass_verbose_0_0(t);
  z_4 = t;
  t = term_a_10;
  t = create_pp_table_args_0_0(t);
  a_5 = t;
  t = term_a_10;
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
      t = term_w_12;
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
static ATerm x_6 (ATerm c_65 (ATerm), ATerm i_167, ATerm v_17, ATerm t)
{
  ATerm n_5 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_167, term_x_12);
  t = h_7(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, v_17);
  t = c_65(t);
  t = fclose_0_0(t);
  t = v_17;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if(match_cons(c_13, sym_Stream_1))
        {
          r_5 = ATgetArgument(c_13, 0);
        }
      else
        _fail(t);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(r_5, s_5, t);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm t)
{
  ATerm o_5 = NULL,q_5 = NULL;
  q_5 = t;
  t = xtc_new_file_0_0(t);
  o_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_5, q_5);
  t = x_6(m_1, o_5, q_5, t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, o_5);
  t = xtc_transform_file_2_0(x_82, y_82, t);
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
  ATerm v_7 = NULL,x_7 = NULL,y_7 = NULL,a_8 = NULL;
  v_7 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_7 = ATgetArgument(t, 0);
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = SSL_int_to_string(x_7);
        b_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_13), b_3), term_h_13);
        c_3 = t;
        t = SSL_concat_strings(c_3);
      }
    }
  else
    {
      ATerm g_4 = NULL,i_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          x_7 = ATgetArgument(t, 0);
          y_7 = ATgetArgument(t, 1);
          a_8 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(y_7);
      g_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_8), term_l_13), g_4), term_k_13), x_7);
      i_4 = t;
      t = SSL_concat_strings(i_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm e_8 = NULL;
  static ATerm n_1 (ATerm t)
  {
    t = e_70(t);
    if(((e_8 != NULL) && (e_8 != t)))
      _fail(t);
    else
      e_8 = t;
    return(t);
  }
  t = fetch_1_0(n_1, t);
  t = not_null(e_8);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  {
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm o_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_13 = ATgetArgument(t, 0);
              if((f_8 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm p_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_21), term_k_21), term_e_21), term_a_21), term_t_20), term_l_20), term_f_20), term_a_20), term_w_19), term_n_19), term_j_19), term_e_19), term_w_18), term_s_18), term_l_18), term_h_18), term_d_18), term_z_17), term_s_16), term_y_15), term_t_15), term_l_15), term_d_15), term_y_14), term_t_14), term_c_14), term_w_13), term_s_13);
        t = fetch_elem_1_0(o_1, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_8);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_8 = NULL,z_8 = NULL;
  k_8 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm v_21 = ATgetArgument(t, 0);
            z_8 = ATgetArgument(t, 1);
            {
              ATerm w_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_21);
        {
          ATerm z_21 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_5 = NULL,h_5 = NULL,j_5 = NULL;
              t = z_8;
              {
                ATerm e_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_22;
                  }
              }
              t = signal_from_number_0_0(t);
              t = signal_to_descr_0_0(t);
              e_5 = t;
              t = term_d_12;
              h_5 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, e_5), term_f_22);
              j_5 = t;
              t = SSL_printnl(h_5, j_5);
              t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, e_5), term_f_22));
              LocalPopChoice(d_22);
            }
          else
            {
              t = z_21;
              t = k_8;
            }
        }
      }
    else
      {
        t = t_21;
        t = k_8;
      }
  }
  t = k_8;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm r_63 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL;
  j_9 = t;
  t = fork_0_0(t);
  h_9 = t;
  {
    ATerm h_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = j_9;
        t = r_63(t);
        LocalPopChoice(j_22);
      }
    else
      {
        t = h_22;
        t = SSL_waitpid(h_9);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            if(((ATgetType(k_22) != AT_INT) || (ATgetInt((ATermInt) k_22) != 0)))
              _fail(t);
            {
              ATerm q_22 = ATgetArgument(t, 1);
            }
            {
              ATerm r_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = j_9;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_9 = NULL;
  static ATerm s_1 (ATerm t)
  {
    ATerm m_9 = NULL,n_9 = NULL;
    m_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), m_9);
    t = r_7(not_null(l_9), m_9, t);
    n_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
    return(t);
  }
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  t = SSL_table_keys(l_9);
  t = map_1_0(s_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  q_9 = t;
  {
    ATerm u_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        s_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_9, term_y_20);
        t = geq_0_0(t);
        t = q_9;
        t = a_81(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = u_22;
        t = q_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        c_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_10, term_b_18);
        t = geq_0_0(t);
        t = w_9;
        t = z_80(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = w_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm f_10 = NULL;
  f_10 = t;
  {
    ATerm e_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_10 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        k_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, term_j_14);
        t = geq_0_0(t);
        t = f_10;
        t = b_81(t);
        LocalPopChoice(f_23);
      }
    else
      {
        t = e_23;
        t = f_10;
      }
  }
  return(t);
}
static ATerm b_7 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm q_24, ATerm p_24, ATerm t)
{
  t = a_74(t);
  {
    static ATerm t_1 (ATerm t)
    {
      ATerm m_10 = NULL;
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_24, m_10);
      t = z_73(t);
      return(t);
    }
    t = fetch_1_0(t_1, t);
  }
  t = p_24;
  return(t);
}
static ATerm c_7 (ATerm w_73 (ATerm), ATerm m_24, ATerm l_24, ATerm t)
{
  static ATerm l_11 (ATerm t)
  {
    ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
    e_11 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_24;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_11 = ATgetFirst((ATermList) t);
            g_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_11;
              {
                static ATerm v_1 (ATerm t)
                {
                  t = l_24;
                  return(t);
                }
                t = b_7(w_73, v_1, f_11, g_11, t);
              }
              t = l_11(t);
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              {
                ATerm w_5 = NULL,g_6 = NULL,l_1 = NULL;
                t = SSLgetAnnotations(e_11);
                w_5 = t;
                t = g_11;
                t = l_11(t);
                g_6 = t;
                t = (ATerm) ATinsert(CheckATermList(g_6), f_11);
                l_1 = t;
                t = SSLsetAnnotations(l_1, w_5);
              }
            }
        }
      }
    return(t);
  }
  t = m_24;
  t = l_11(t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm a_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      if((a_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_7 (ATerm g_36, ATerm h_36, ATerm i_36, ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL;
  r_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            ATerm l_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
        t = r_7(g_36, h_36, t);
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATempty;
      }
  }
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_11, i_36);
  t = c_7(z_1, u_11, i_36, t);
  s_11 = t;
  t = SSL_table_put(g_36, h_36, s_11);
  t = r_11;
  return(t);
}
static ATerm e_7 (ATerm d_81 (ATerm), ATerm q_36, ATerm p_36, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm c_12 = NULL,f_12 = NULL;
    if(match_cons(t, sym__2))
      {
        c_12 = ATgetArgument(t, 0);
        f_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, q_36, c_12, f_12);
    t = d_81(t);
    return(t);
  }
  t = p_36;
  t = map_1_0(b_2, t);
  return(t);
}
static ATerm i_7 (ATerm r_38, ATerm s_38, ATerm t)
{
  t = SSL_access(r_38, s_38);
  return(t);
}
static ATerm d_13 (ATerm t_12, ATerm t)
{
  t = SSL_fclose(t_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_12 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_12 = ATgetArgument(t, 0);
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_12);
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = d_13(b_13, t);
          }
      }
    }
  else
    {
      t = d_13(b_13, t);
    }
  return(t);
}
static ATerm f_7 (ATerm t_17, ATerm t)
{
  t = SSL_read_term_from_stream(t_17);
  return(t);
}
static ATerm g_7 (ATerm a_39, ATerm b_39, ATerm t)
{
  ATerm e_13 = NULL;
  t = SSL_fopen(a_39, b_39);
  e_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_13);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_stdin_stream();
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stdout_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_13 = NULL;
  t = SSL_stderr_stream();
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_13);
  return(t);
}
static ATerm d_16 (ATerm y_13, ATerm t)
{
  ATerm a_14 = NULL;
  t = SSL_explode_term(y_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            a_14 = ATgetFirst((ATermList) p_23);
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
  t = a_14;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_14;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_14;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_14;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_16 (ATerm e_14, ATerm h_14, ATerm i_14, ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,a_15 = NULL,p_1 = NULL;
  t = SSLgetAnnotations(i_14);
  r_14 = t;
  t = e_14;
  if(match_cons(t, sym_Path_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_15, h_14);
  p_1 = t;
  t = SSLsetAnnotations(p_1, r_14);
  if(match_cons(t, sym__2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(p_14, q_14, t);
  return(t);
}
static ATerm f_16 (ATerm i_15, ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,v_15 = NULL,u_1 = NULL;
  t = SSLgetAnnotations(k_15);
  s_15 = t;
  t = SSL_is_string(i_15);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, j_15);
  u_1 = t;
  t = SSLsetAnnotations(u_1, s_15);
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(q_15, r_15, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm z_15 = NULL,b_16 = NULL,c_16 = NULL;
  z_15 = t;
  if(match_cons(t, sym__2))
    {
      b_16 = ATgetArgument(t, 0);
      c_16 = ATgetArgument(t, 1);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_16(z_15, t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm t_23 = t;
              int u_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_16(b_16, c_16, z_15, t);
                  LocalPopChoice(u_23);
                }
              else
                {
                  t = t_23;
                  t = f_16(b_16, c_16, z_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_16(z_15, t);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16 = NULL;
      j_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_16, term_a_24);
      t = h_7(t);
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  h_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(i_16, t);
  g_16 = t;
  t = h_16;
  t = fclose_0_0(t);
  t = g_16;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_b_24;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_16 = NULL,m_16 = NULL;
      l_16 = t;
      t = (ATerm) ATinsert(ATempty, term_i_24);
      m_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_16, (ATerm) ATinsert(ATempty, term_i_24));
      t = i_7(l_16, m_16, t);
      LocalPopChoice(g_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = e_24;
      {
        ATerm r_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_24 = t;
            if((PushChoice() == 0))
              {
                ATerm n_16 = NULL,q_16 = NULL;
                n_16 = t;
                t = (ATerm) ATinsert(ATempty, term_i_10);
                q_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_16, (ATerm) ATinsert(ATempty, term_i_10));
                t = i_7(n_16, q_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_24;
              }
            t = debug_1_0(g_2, t);
            LocalPopChoice(t_24);
          }
        else
          {
            t = r_24;
            t = debug_1_0(h_2, t);
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
  t = term_b_25;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = debug_1_0(o_2, t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL;
  h_17 = t;
  t = term_d_12;
  i_17 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = h_17;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__3))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
      m_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = d_7(k_17, l_17, m_17, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  t = term_d_12;
  q_17 = t;
  t = (ATerm) ATinsert(ATempty, term_f_25);
  r_17 = t;
  t = SSL_printnl(q_17, r_17);
  t = p_17;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm s_17 = NULL,x_17 = NULL,y_17 = NULL;
  s_17 = t;
  t = term_d_12;
  x_17 = t;
  t = (ATerm) ATinsert(ATempty, term_d_25);
  y_17 = t;
  t = SSL_printnl(x_17, y_17);
  t = s_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm r_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  r_16 = t;
  t = if_verbose5_1_0(i_2, t);
  {
    ATerm g_25 = t;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL,g_17 = NULL;
        t = term_h_25;
        f_17 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, r_16);
        g_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATmakeAppl(sym_Imported_1, r_16));
        t = r_7(f_17, g_17, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_25;
      }
  }
  v_16 = t;
  t = term_h_25;
  c_17 = t;
  t = term_i_25;
  d_17 = t;
  t = (ATerm) ATinsert(ATempty, r_16);
  e_17 = t;
  t = SSL_table_put(c_17, d_17, e_17);
  t = v_16;
  t = if_verbose4_1_0(l_2, t);
  t = read_repository_file_0_0(t);
  t = if_verbose6_1_0(t_2, t);
  u_16 = t;
  t = term_h_25;
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, u_16);
  t = e_7(y_2, b_17, u_16, t);
  t = if_verbose6_1_0(z_2, t);
  t = term_h_25;
  w_16 = t;
  t = (ATerm) ATmakeAppl(sym_Imported_1, r_16);
  x_16 = t;
  t = (ATerm) ATempty;
  y_16 = t;
  t = SSL_table_put(w_16, x_16, y_16);
  t = (ATerm) ATmakeAppl(sym__3, term_h_25, (ATerm)ATmakeAppl(sym_Imported_1, r_16), (ATerm) ATempty);
  t = if_verbose4_1_0(a_3, t);
  return(t);
}
ATerm filter_1_0 (ATerm o_77 (ATerm), ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL;
  p_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_18 = ATgetFirst((ATermList) t);
          r_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_8 = NULL,i_8 = NULL,j_8 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(p_18);
            b_8 = t;
            t = q_18;
            t = o_77(t);
            i_8 = t;
            t = r_18;
            t = filter_1_0(o_77, t);
            j_8 = t;
            t = (ATerm) ATinsert(CheckATermList(j_8), i_8);
            x_2 = t;
            t = SSLsetAnnotations(x_2, b_8);
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            t = r_18;
            t = filter_1_0(o_77, t);
          }
      }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm x_67 (ATerm), ATerm y_67 (ATerm), ATerm t)
{
  static ATerm x_18 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_67(t);
        t = x_18(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = y_67(t);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm r_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_25;
      t = get_config_0_0(t);
      LocalPopChoice(t_25);
    }
  else
    {
      t = r_25;
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_18 = NULL;
            t = term_x_25;
            z_18 = t;
            t = SSL_getenv(z_18);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = debug_1_0(m_3, t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  t = term_h_25;
  u_19 = t;
  t = term_z_25;
  v_19 = t;
  t = term_b_26;
  t = r_7(u_19, v_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm c_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_26;
      }
  }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  t = if_verbose5_1_0(f_3, t);
  d_19 = t;
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_19 = NULL,s_19 = NULL;
        t = term_h_25;
        p_19 = t;
        t = term_i_25;
        s_19 = t;
        t = term_g_26;
        t = r_7(p_19, s_19, t);
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm t_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          t_19 = t;
          t = repeat_2_0(n_3, _id, t);
          t = t_19;
        }
      }
  }
  t = d_19;
  t = if_verbose5_1_0(o_3, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
static ATerm h_21 (ATerm e_20, ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,n_20 = NULL;
  t = term_h_25;
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, e_20);
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATmakeAppl(sym_Tool_1, e_20));
  t = r_7(i_20, n_20, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_26 = ATgetFirst((ATermList) t);
      if(match_cons(i_26, sym__2))
        {
          ATerm k_26 = ATgetArgument(i_26, 0);
          h_20 = ATgetArgument(i_26, 1);
        }
      else
        _fail(t);
      {
        ATerm j_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_20;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = debug_1_0(w_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_h_26;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_h_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_l_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
      t = if_verbose5_1_0(s_3, t);
      t = xtc_load_0_0(t);
      q_20 = t;
      if(match_cons(t, sym__2))
        {
          o_20 = ATgetArgument(t, 0);
          p_20 = ATgetArgument(t, 1);
          {
            ATerm o_26 = t;
            int p_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
                t = term_h_25;
                w_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, o_20);
                x_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_h_25, (ATerm) ATmakeAppl(sym_Tool_1, o_20));
                t = r_7(w_20, x_20, t);
                {
                  static ATerm u_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((p_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_3, t);
                }
                t = not_null(v_20);
                LocalPopChoice(p_26);
              }
            else
              {
                t = o_26;
                t = h_21(q_20, t);
              }
          }
        }
      else
        {
          t = h_21(q_20, t);
        }
      t = if_verbose5_1_0(v_3, t);
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm g_21 = NULL,w_8 = NULL,x_8 = NULL;
        g_21 = t;
        t = term_d_12;
        w_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), g_21), term_q_26);
        x_8 = t;
        t = SSL_printnl(w_8, x_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_26), g_21), term_q_26);
        t = if_verbose5_1_0(y_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL;
  m_21 = t;
  t = y_83(t);
  t = xtc_find_0_0(t);
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
  {
    static ATerm c_4 (ATerm t)
    {
      ATerm n_21 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_21, m_21);
      t = y_6(l_21, m_21, t);
      t = term_u_26;
      n_21 = t;
      t = SSL_exit(n_21);
      return(t);
    }
    t = fork_and_wait_1_0(c_4, t);
  }
  t = m_21;
  return(t);
}
static ATerm j_7 (ATerm s_79 (ATerm), ATerm s_34, ATerm q_34, ATerm t)
{
  ATerm s_21 = NULL,x_21 = NULL,y_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  t = s_79(t);
  s_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_21, s_34, q_34);
  t = s_7(s_21, s_34, q_34, t);
  {
    ATerm v_26 = t;
    int w_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_22 = NULL;
        t = term_x_26;
        g_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_21, term_x_26);
        t = r_7(s_21, g_22, t);
        LocalPopChoice(w_26);
      }
    else
      {
        t = v_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_21 = ATgetFirst((ATermList) t);
      y_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_26;
  b_22 = t;
  t = (ATerm) ATinsert(CheckATermList(y_21), (ATerm) ATinsert(CheckATermList(x_21), s_34));
  c_22 = t;
  t = SSL_table_put(s_21, b_22, c_22);
  t = a_22;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm i_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,s_22 = NULL,t_22 = NULL;
  t = P__tmpdir_0_0(t);
  n_22 = t;
  t = term_z_26;
  t_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_22, term_z_26);
  t = q_7(n_22, t_22, t);
  p_22 = t;
  t = term_c_27;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, term_c_27);
  t = q_7(p_22, s_22, t);
  o_22 = t;
  t = SSL_mkstemp(o_22);
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_10;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_22, term_a_10);
  t = j_7(h_4, l_22, m_22, t);
  t = SSL_close(i_22);
  t = l_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm x_22 = NULL,y_22 = NULL;
      t = v_22;
      t = xtc_new_file_0_0(t);
      x_22 = t;
      t = v_0(t);
      y_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_22, (ATerm) ATinsert(ATinsert(ATempty, x_22), term_d_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_22);
    }
  else
    {
      ATerm a_23 = NULL,b_23 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_22;
      t = xtc_new_file_0_0(t);
      a_23 = t;
      t = v_0(t);
      b_23 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_23), term_d_27), w_22), term_e_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_23);
    }
  return(t);
}
static ATerm k_7 (ATerm n_14, ATerm o_14, ATerm t)
{
  t = SSL_copy(n_14, o_14);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_9 = NULL;
        t = v_23;
        t = r_0(t);
        p_9 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = p_9;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = p_9;
          }
        t = (ATerm) ATmakeAppl(sym__2, w_23, p_9);
        t = k_7(w_23, p_9, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_10 = NULL;
              t = v_23;
              t = r_0(t);
              e_10 = t;
              {
                ATerm p_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_10 = NULL;
                    g_10 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_10;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_10;
                          }
                        else
                          {
                            t = g_10;
                            if((w_23 != t))
                              {
                                _fail(t);
                              }
                            t = g_10;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_27;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, w_23, e_10);
              t = k_7(w_23, e_10, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = v_23;
              t = r_0(t);
              if((w_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_23);
            }
        }
      }
  }
  return(t);
}
static ATerm l_7 (ATerm o_35, ATerm p_35, ATerm t)
{
  ATerm d_24 = NULL,f_24 = NULL;
  f_24 = t;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
        t = r_7(o_35, p_35, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_27 = ATgetFirst((ATermList) t);
            d_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_27);
        t = SSL_table_put(o_35, p_35, d_24);
        t = (ATerm) ATmakeAppl(sym__3, o_35, p_35, d_24);
      }
    else
      {
        t = q_27;
        t = SSL_table_remove(o_35, p_35);
        t = (ATerm) ATmakeAppl(sym__2, o_35, p_35);
      }
  }
  t = f_24;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,j_24 = NULL,k_24 = NULL,n_24 = NULL,o_24 = NULL;
  n_24 = t;
  t = p_79(t);
  k_24 = t;
  {
    ATerm w_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_24 = NULL;
        t = term_x_26;
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_24, term_x_26);
        t = r_7(k_24, s_24, t);
        LocalPopChoice(z_27);
      }
    else
      {
        t = w_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_24 = ATgetFirst((ATermList) t);
      h_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_26;
  o_24 = t;
  t = SSL_table_put(k_24, o_24, h_24);
  t = j_24;
  {
    static ATerm k_4 (ATerm t)
    {
      ATerm u_24 = NULL;
      u_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_24, u_24);
      t = l_7(k_24, u_24, t);
      return(t);
    }
    t = map_1_0(k_4, t);
  }
  t = n_24;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_80(t);
      t = l_80(t);
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      t = l_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_79 (ATerm), ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  x_24 = t;
  t = o_79(t);
  w_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_24, term_x_26);
  {
    ATerm c_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_26;
        e_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_24, term_x_26);
        t = r_7(w_24, e_25, t);
        LocalPopChoice(e_28);
      }
    else
      {
        t = c_28;
        t = (ATerm) ATempty;
      }
  }
  y_24 = t;
  t = term_x_26;
  z_24 = t;
  t = (ATerm) ATinsert(CheckATermList(y_24), (ATerm) ATempty);
  a_25 = t;
  t = SSL_table_put(w_24, z_24, a_25);
  t = x_24;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(s_25);
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = s_25;
      }
  }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm j_25 = NULL;
  static ATerm v_4 (ATerm t)
  {
    ATerm k_25 = NULL;
    k_25 = t;
    {
      ATerm n_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_25 = NULL,m_25 = NULL;
          t = term_y_26;
          l_25 = t;
          t = term_x_26;
          m_25 = t;
          t = term_p_28;
          t = r_7(l_25, m_25, t);
          LocalPopChoice(o_28);
        }
      else
        {
          t = n_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((j_25 != NULL) && (j_25 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          j_25 = ATgetFirst((ATermList) t);
        {
          ATerm v_28 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = j_25;
    t = map_1_0(w_4, t);
    t = k_25;
    t = end_scope_1_0(y_4, t);
    return(t);
  }
  t = begin_scope_1_0(l_4, t);
  t = restore_always_2_0(k_83, v_4, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm w_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_27;
      t = get_config_0_0(t);
      LocalPopChoice(a_29);
    }
  else
    {
      t = w_28;
      t = term_p_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  static ATerm c_5 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_26 = NULL;
        t = term_e_27;
        t = get_config_0_0(t);
        a_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_26);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = term_w_12;
      }
    t = l_83(t);
    t = copy_to_1_0(d_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(c_5, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm f_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_26 = NULL,t_26 = NULL;
      t_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          s_26 = ATgetArgument(t, 0);
          {
            ATerm t_10 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(t_26);
            t_10 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, s_26);
            p_3 = t;
            t = SSLsetAnnotations(p_3, t_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_26;
        }
      LocalPopChoice(h_29);
      t = xtc_transform_file_2_0(g_5, k_5, t);
    }
  else
    {
      t = f_29;
      t = xtc_transform_term_2_0(p_5, t_5, t);
    }
  {
    ATerm l_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_27 = NULL,b_27 = NULL;
        b_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            a_27 = ATgetArgument(t, 0);
            {
              ATerm o_11 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(b_27);
              o_11 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, a_27);
              q_3 = t;
              t = SSLsetAnnotations(q_3, o_11);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = b_27;
          }
        LocalPopChoice(p_29);
        t = xtc_transform_file_2_0(u_5, v_5, t);
      }
    else
      {
        t = l_29;
        t = xtc_transform_term_2_0(x_5, z_5, t);
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), term_t_29), term_s_29), term_r_29);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_q_29;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_29), term_t_29), term_s_29), term_r_29);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_a_10;
  t = build_impl_args_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_v_29;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_a_10;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(f_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm h_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  h_27 = t;
  t = term_a_10;
  t = whoami_0_0(t);
  k_27 = t;
  t = term_d_12;
  m_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_29), k_27), term_w_29);
  n_27 = t;
  t = SSL_printnl(m_27, n_27);
  t = term_h_12;
  l_27 = t;
  t = SSL_exit(l_27);
  t = h_27;
  return(t);
}
static ATerm u_7 (ATerm j_37, ATerm k_37, ATerm t)
{
  ATerm o_27 = NULL;
  t = term_y_29;
  o_27 = t;
  t = SSL_table_put(o_27, j_37, k_37);
  t = (ATerm) ATmakeAppl(sym__3, term_y_29, j_37, k_37);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_27 = NULL,x_27 = NULL,y_27 = NULL;
      t = term_a_10;
      t = i_0(t);
      v_27 = t;
      t = term_z_29;
      x_27 = t;
      t = term_a_30;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, v_27);
      t = s_7(x_27, y_27, v_27, t);
      _fail(t);
    }
  else
    {
      ATerm d_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = d_0(t);
      t = term_a_10;
      t = g_0(t);
      d_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_27), d_28);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
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
static ATerm c_6 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  t = SSL_string_to_int(k_28);
  l_28 = t;
  t = term_b_30;
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_30, l_28);
  t = u_7(m_28, l_28, t);
  t = k_28;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, c_6, d_6, t);
  return(t);
}
static ATerm f_6 (ATerm t)
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
static ATerm h_6 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  t = term_b_11;
  r_28 = t;
  t = term_d_30;
  s_28 = t;
  t = term_i_30;
  t = u_7(r_28, s_28, t);
  t = term_j_30;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_k_30;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,x_28 = NULL;
  t_28 = t;
  t = SSL_string_to_int(t_28);
  u_28 = t;
  t = term_b_11;
  x_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, u_28);
  t = u_7(x_28, u_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_28);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_l_30;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL;
  t = term_o_30;
  y_28 = t;
  t = term_a_10;
  z_28 = t;
  t = term_r_30;
  t = u_7(y_28, z_28, t);
  t = term_s_30;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_6, h_6, j_6, t);
      LocalPopChoice(y_30);
    }
  else
    {
      t = v_30;
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, l_6, n_6, t);
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = Option_3_0(o_6, p_6, q_6, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm d_29 = NULL;
  d_29 = t;
  if(match_string(t, "-o"))
    {
      t = d_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_29;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm e_29 = NULL,g_29 = NULL;
  e_29 = t;
  t = term_d_27;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_27, e_29);
  t = u_7(g_29, e_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_29);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = term_f_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, s_6, u_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  if(match_string(t, "-i"))
    {
      t = i_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_29;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  j_29 = t;
  t = term_e_27;
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, j_29);
  t = u_7(k_29, j_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_29);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = term_h_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, a_7, o_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  static ATerm h_30 (ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
    g_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_30 = ATgetFirst((ATermList) t);
        f_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_12 = NULL,i_12 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(g_30);
          e_12 = t;
          t = f_30;
          t = h_30(t);
          i_12 = t;
          t = (ATerm) ATinsert(CheckATermList(i_12), e_30);
          x_3 = t;
          t = SSLsetAnnotations(x_3, e_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_30;
        t = i_70(t);
      }
    return(t);
  }
  t = h_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_29;
    }
  else
    {
      static ATerm p_7 (ATerm t)
      {
        t = not_null(o_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_29 = ATgetFirst((ATermList) t);
          if(((o_29 != NULL) && (o_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      t = at_end_1_0(p_7, t);
    }
  return(t);
}
static ATerm w_30 (ATerm m_30, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_explode_term(m_30);
  if(match_cons(t, sym__2))
    {
      ATerm i_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_30;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,t_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_7 (ATerm t)
            {
              t = q_30;
              return(t);
            }
            t = p_30;
            t = at_end_1_0(t_7, t);
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            t = w_30(t_30, t);
          }
      }
    }
  else
    {
      t = w_30(t_30, t);
    }
  return(t);
}
static ATerm m_7 (ATerm p_37, ATerm o_37, ATerm t)
{
  ATerm x_30 = NULL,z_30 = NULL,a_31 = NULL;
  t = p_37;
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
  }
  z_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_37, z_30);
  t = conc_0_0(t);
  x_30 = t;
  t = term_y_29;
  a_31 = t;
  t = SSL_table_put(a_31, p_37, x_30);
  t = (ATerm) ATmakeAppl(sym__3, term_y_29, p_37, x_30);
  return(t);
}
static ATerm s_7 (ATerm j_35, ATerm k_35, ATerm i_35, ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,g_31 = NULL;
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_31 = ATgetArgument(t, 0);
            ATerm q_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_35, k_35);
        t = r_7(j_35, k_35, t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = (ATerm) ATempty;
      }
  }
  e_31 = t;
  t = (ATerm) ATinsert(CheckATermList(e_31), i_35);
  g_31 = t;
  t = SSL_table_put(j_35, k_35, g_31);
  t = d_31;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL,y_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
      t = term_a_10;
      t = p_0(t);
      b_32 = t;
      t = term_z_29;
      c_32 = t;
      t = term_a_30;
      d_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_29, term_a_30, b_32);
      t = s_7(c_32, d_32, b_32, t);
      _fail(t);
    }
  else
    {
      ATerm i_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_31 = ATgetFirst((ATermList) t);
          v_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_31;
      t = n_0(t);
      t = x_31;
      t = o_0(t);
      i_32 = t;
      t = (ATerm) ATinsert(CheckATermList(y_31), i_32);
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
  l_32 = t;
  t = term_n_12;
  m_32 = t;
  t = (ATerm) ATinsert(ATempty, l_32);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, (ATerm) ATinsert(ATempty, l_32));
  t = m_7(m_32, n_32, t);
  t = l_32;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_r_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_7, z_7, c_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_10;
  t = whoami_0_0(t);
  o_32 = t;
  t = term_d_12;
  q_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_31), o_32);
  r_32 = t;
  t = SSL_printnl(q_32, r_32);
  t = term_h_12;
  p_32 = t;
  t = SSL_exit(p_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_31;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_7 (ATerm e_33, ATerm f_33, ATerm t)
{
  ATerm w_31 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_33, f_33);
      LocalPopChoice(e_32);
    }
  else
    {
      t = w_31;
      t = SSL_addr(e_33, f_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_76 (ATerm), ATerm l_76 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_32;
      t = k_76(t);
    }
  else
    {
      ATerm z_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_32 = ATgetFirst((ATermList) t);
          w_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_32;
      t = foldr_2_0(k_76, l_76, t);
      z_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_32, z_32);
      t = l_76(t);
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
  t = term_d_30;
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      a_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_7(z_12, a_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_33 = NULL,q_12 = NULL,r_12 = NULL;
  t = times_0_0(t);
  r_12 = t;
  t = SSL_explode_term(r_12);
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12;
  t = foldr_2_0(d_8, g_8, t);
  c_33 = t;
  t = SSL_TicksToSeconds(c_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_34 = NULL,e_34 = NULL,f_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_34;
        if((e_34 != t))
          {
            _fail(t);
          }
        t = c_34;
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_34, f_34);
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              t = SSL_gtr(e_34, f_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        t = term_b_11;
        t = get_config_0_0(t);
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, term_h_12);
        t = geq_0_0(t);
        t = v_34;
        t = w_80(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = v_34;
      }
  }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_35 = NULL,q_35 = NULL,v_35 = NULL,w_35 = NULL;
  t = run_time_0_0(t);
  c_35 = t;
  t = term_a_10;
  t = whoami_0_0(t);
  q_35 = t;
  t = term_d_12;
  v_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), c_35), term_k_13), q_35);
  w_35 = t;
  t = SSL_printnl(v_35, w_35);
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_32), c_35), term_k_13), q_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_30;
  x_35 = t;
  t = SSL_exit(x_35);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm f_36 = NULL,m_36 = NULL;
  m_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_36 = ATgetArgument(t, 0);
          {
            ATerm t_13 = NULL,a_4 = NULL;
            t = SSLgetAnnotations(m_36);
            t_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_36);
            a_4 = t;
            t = SSLsetAnnotations(a_4, t_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_85 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_33;
      t = get_config_0_0(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = y_32;
      t = fetch_1_0(l_8, t);
    }
  t = g_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_36 = ATgetFirst((ATermList) t);
      y_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_37 = NULL,f_37 = NULL;
        static ATerm m_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_37)), not_null(f_37));
          return(t);
        }
        t = y_36;
        t = l_0(t);
        if(((e_37 != NULL) && (e_37 != t)))
          _fail(t);
        else
          e_37 = t;
        t = x_36;
        t = k_0(t);
        if(((f_37 != NULL) && (f_37 != t)))
          _fail(t);
        else
          f_37 = t;
        t = y_36;
        t = reverse_acc_2_0(k_0, m_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_10;
      t = l_0(t);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,j_4 = NULL;
  n_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_37);
  l_37 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_37);
  j_4 = t;
  t = SSLsetAnnotations(j_4, l_37);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_37), term_d_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL;
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_31;
      t = get_config_0_0(t);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = fetch_1_0(n_8, t);
    }
  t = term_i_33;
  t = echo_0_0(t);
  t = term_z_29;
  h_37 = t;
  t = term_a_30;
  i_37 = t;
  t = term_j_33;
  t = r_7(h_37, i_37, t);
  t = reverse_acc_2_0(_id, o_8, t);
  t = map_1_0(p_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  static ATerm w_38 (ATerm t)
  {
    ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
    t_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_38 = ATgetFirst((ATermList) t);
        v_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_33 = t;
      int n_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_14 = NULL,u_14 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(t_38);
          k_14 = t;
          t = u_38;
          t = c_70(t);
          u_14 = t;
          t = (ATerm) ATinsert(CheckATermList(v_38), u_14);
          m_4 = t;
          t = SSLsetAnnotations(m_4, k_14);
          LocalPopChoice(n_33);
        }
      else
        {
          t = m_33;
          {
            ATerm g_15 = NULL,m_15 = NULL,y_5 = NULL;
            t = SSLgetAnnotations(t_38);
            g_15 = t;
            t = v_38;
            t = w_38(t);
            m_15 = t;
            t = (ATerm) ATinsert(CheckATermList(m_15), u_38);
            y_5 = t;
            t = SSLsetAnnotations(y_5, g_15);
          }
        }
    }
    return(t);
  }
  t = w_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_39;
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
            t = e_39;
          }
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = (ATerm) ATinsert(ATempty, e_39);
      }
  }
  f_39 = t;
  t = term_p_10;
  g_39 = t;
  t = SSL_printnl(g_39, f_39);
  t = e_39;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_7 (ATerm z_31, ATerm a_32, ATerm t)
{
  t = SSL_strcat(z_31, a_32);
  return(t);
}
ATerm debug_1_0 (ATerm a_65 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL;
  k_39 = t;
  t = a_65(t);
  l_39 = t;
  t = term_d_12;
  m_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_39), l_39);
  n_39 = t;
  t = SSL_printnl(m_39, n_39);
  t = k_39;
  return(t);
}
ATerm map_1_0 (ATerm s_69 (ATerm), ATerm t)
{
  static ATerm s_40 (ATerm t)
  {
    ATerm o_40 = NULL,p_40 = NULL,r_40 = NULL;
    o_40 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_40;
      }
    else
      {
        ATerm p_16 = NULL,z_16 = NULL,a_17 = NULL,b_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_40 = ATgetFirst((ATermList) t);
            r_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_40);
        p_16 = t;
        t = p_40;
        t = s_69(t);
        z_16 = t;
        t = r_40;
        t = s_40(t);
        a_17 = t;
        t = (ATerm) ATinsert(CheckATermList(a_17), z_16);
        b_6 = t;
        t = SSLsetAnnotations(b_6, p_16);
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
static ATerm q_8 (ATerm t)
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
static ATerm r_8 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_41 = NULL;
      b_41 = t;
      t = SSL_is_string(b_41);
      LocalPopChoice(w_33);
    }
  else
    {
      t = v_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_8, t);
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            {
              ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
              j_41 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_41 = ATgetArgument(t, 0);
                  t = k_41;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_41 = ATgetArgument(t, 0);
                      t = k_41;
                      {
                        ATerm z_33 = t;
                        int a_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(a_34);
                          }
                        else
                          {
                            t = z_33;
                            t = debug_1_0(r_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_41 = NULL,q_41 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_41 = ATgetArgument(t, 0);
                          l_41 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_41;
                      t = eval_config_0_0(t);
                      p_41 = t;
                      t = l_41;
                      t = eval_config_0_0(t);
                      q_41 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_41, q_41);
                      t = q_7(p_41, q_41, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm a_37, ATerm b_37, ATerm t)
{
  t = SSL_table_get(a_37, b_37);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL;
  z_41 = t;
  t = term_y_29;
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_29, z_41);
  t = r_7(a_42, z_41, t);
  {
    ATerm b_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_42 = NULL,c_42 = NULL;
        t = eval_config_0_0(t);
        b_42 = t;
        t = term_y_29;
        c_42 = t;
        t = SSL_table_put(c_42, z_41, b_42);
        t = b_42;
        LocalPopChoice(d_34);
      }
    else
      {
        t = b_34;
      }
  }
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
  ATerm f_42 = NULL,g_42 = NULL;
  t = term_g_34;
  f_42 = t;
  t = term_a_10;
  g_42 = t;
  t = term_h_34;
  t = u_7(f_42, g_42, t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_i_34;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  t = term_g_34;
  k_42 = t;
  t = term_a_10;
  l_42 = t;
  t = term_h_34;
  t = u_7(k_42, l_42, t);
  t = term_j_34;
  i_42 = t;
  t = term_a_10;
  j_42 = t;
  t = term_k_34;
  t = u_7(i_42, j_42, t);
  t = term_l_34;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, u_8, t);
      LocalPopChoice(o_34);
    }
  else
    {
      t = n_34;
      t = Option_3_0(v_8, y_8, a_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_56 (ATerm), ATerm t_56 (ATerm), ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,e_6 = NULL;
  r_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_42 = ATgetFirst((ATermList) t);
      o_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  m_42 = t;
  t = n_42;
  t = s_56(t);
  p_42 = t;
  t = o_42;
  t = t_56(t);
  q_42 = t;
  t = (ATerm) ATinsert(CheckATermList(q_42), p_42);
  e_6 = t;
  t = SSLsetAnnotations(e_6, m_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_87 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,b_43 = NULL,c_43 = NULL,i_6 = NULL;
  w_42 = t;
  {
    ATerm p_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_34;
        t = e_87(t);
        LocalPopChoice(r_34);
      }
    else
      {
        t = p_34;
      }
  }
  t = w_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_42 = ATgetFirst((ATermList) t);
      z_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_42);
  x_42 = t;
  t = term_t_31;
  c_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, y_42);
  t = u_7(c_43, y_42, t);
  t = z_42;
  {
    static ATerm m_43 (ATerm t)
    {
      ATerm u_34 = t;
      int w_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_43 = NULL;
              f_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_43;
              LocalPopChoice(y_34);
            }
          else
            {
              t = x_34;
              t = e_87(t);
              t = Cons_2_0(_id, m_43, t);
            }
          LocalPopChoice(w_34);
        }
      else
        {
          t = u_34;
          {
            ATerm i_43 = NULL,j_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_43 = ATgetFirst((ATermList) t);
                j_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_43), (ATerm) ATmakeAppl(sym_Undefined_1, i_43));
          }
        }
      return(t);
    }
    t = m_43(t);
  }
  b_43 = t;
  t = (ATerm) ATinsert(CheckATermList(b_43), (ATerm) ATmakeAppl(sym_Program_1, y_42));
  i_6 = t;
  t = SSLsetAnnotations(i_6, x_42);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  if(match_string(t, "--help"))
    {
      t = y_43;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_43;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_43;
        }
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL;
  t = term_b_33;
  z_43 = t;
  t = term_a_10;
  a_44 = t;
  t = term_a_35;
  t = u_7(z_43, a_44, t);
  t = term_b_35;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_d_35;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_87 (ATerm), ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  t_43 = t;
  t = term_z_29;
  v_43 = t;
  t = term_a_30;
  w_43 = t;
  t = (ATerm) ATempty;
  x_43 = t;
  t = SSL_table_put(v_43, w_43, x_43);
  t = t_43;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_87(t);
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          {
            ATerm g_35 = t;
            int h_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_9, d_9, e_9, t);
                LocalPopChoice(h_35);
              }
            else
              {
                t = g_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
  }
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_44 = NULL;
        h_44 = t;
        {
          ATerm n_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_19 = NULL;
              t = h_44;
              {
                ATerm s_35 = t;
                int t_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_33;
                    t = get_config_0_0(t);
                    LocalPopChoice(t_35);
                  }
                else
                  {
                    t = s_35;
                    t = fetch_1_0(f_9, t);
                  }
              }
              t = h_44;
              t = default_system_usage_0_0(t);
              t = term_d_30;
              b_19 = t;
              t = SSL_exit(b_19);
              LocalPopChoice(r_35);
            }
          else
            {
              t = n_35;
              {
                ATerm g_19 = NULL;
                t = term_g_34;
                t = get_config_0_0(t);
                t = h_44;
                t = default_system_about_0_0(t);
                t = term_d_30;
                g_19 = t;
                t = SSL_exit(g_19);
              }
            }
        }
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
        {
          ATerm u_35 = t;
          int y_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
              static ATerm g_9 (ATerm t)
              {
                ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,m_6 = NULL;
                n_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_44);
                l_44 = t;
                t = m_44;
                if(((r_43 != NULL) && (r_43 != t)))
                  _fail(t);
                else
                  r_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_44);
                m_6 = t;
                t = SSLsetAnnotations(m_6, l_44);
                return(t);
              }
              t = fetch_1_0(g_9, t);
              t = term_d_12;
              j_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_43)), term_z_35);
              k_44 = t;
              t = SSL_printnl(j_44, k_44);
              t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_43)), term_z_35));
              t = default_system_usage_0_0(t);
              t = term_h_12;
              i_44 = t;
              t = SSL_exit(i_44);
              LocalPopChoice(y_35);
            }
          else
            {
              t = u_35;
            }
        }
      }
  }
  s_43 = t;
  t = term_z_29;
  u_43 = t;
  t = SSL_table_destroy(u_43);
  t = s_43;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_85 (ATerm), ATerm j_85 (ATerm), ATerm k_85 (ATerm), ATerm l_85 (ATerm), ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t = parse_options_1_0(i_85, t);
  s_44 = t;
  t = term_a_36;
  v_44 = t;
  t = SSL_table_create(v_44);
  t = term_a_36;
  t_44 = t;
  t = term_b_36;
  u_44 = t;
  t = SSL_table_put(t_44, u_44, s_44);
  t = s_44;
  t = k_85(t);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_85, t);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        {
          ATerm e_36 = t;
          int j_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_85(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_36);
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
static ATerm i_9 (ATerm t)
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
        ATerm n_36 = t;
        int o_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(o_36);
          }
        else
          {
            t = n_36;
            {
              ATerm r_36 = t;
              int s_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(k_9, o_9, r_9, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(w_36);
                            }
                          else
                            {
                              t = v_36;
                              {
                                ATerm z_36 = t;
                                int c_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    LocalPopChoice(c_37);
                                  }
                                else
                                  {
                                    t = z_36;
                                    t = Option_3_0(t_9, u_9, v_9, t);
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
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  t = term_d_37;
  x_44 = t;
  t = term_a_10;
  y_44 = t;
  t = term_g_37;
  t = u_7(x_44, y_44, t);
  t = term_q_37;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_s_37;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  t = term_y_9;
  a_45 = t;
  t = term_t_37;
  b_45 = t;
  t = term_u_37;
  t = u_7(a_45, b_45, t);
  t = z_44;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_v_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
