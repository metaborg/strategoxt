#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
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
void init_constructors (void)
{
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_x_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_q_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_m_29;
ATerm term_j_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_a_27;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_g_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_y_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_k_11;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
void init_constant_terms (void)
{
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_a_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_n_10, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_f_14, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_14, term_m_14, term_n_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_w_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_15, term_n_15, term_r_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_w_15, term_x_15);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_h_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_w_16, term_x_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_x_17, term_y_17);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_i_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_r_18, term_s_18);
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
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_f_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_19, term_r_19, term_y_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_20, term_q_20, term_r_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_y_20);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_21, term_c_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_j_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_o_21, term_t_21);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_21, term_w_21, term_y_21);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_27);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(sym__3, term_s_28, term_v_30, term_d_13);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm xtc_parse_pp_table_0_0 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_80 (ATerm), ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm lookup_or_parse_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm must_be_pp_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm e_70 (ATerm), ATerm);
ATerm has_extension_1_0 (ATerm g_78 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_81 (ATerm), ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm x_78 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm n_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_79 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_79 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm d_83 (ATerm), ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm asfix2abox_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm u_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm f_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm a_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm k_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm);
ATerm io_asfix2abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_9;
      t = get_config_0_0(t);
      LocalPopChoice(w_9);
      t = (ATerm) ATinsert(ATempty, term_y_9);
    }
  else
    {
      t = v_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_1 = NULL,x_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(x_1, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(x_1);
        t = term_b_10;
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_0 = NULL;
              t = u_1;
              t = n_0(t);
              s_0 = t;
              {
                ATerm f_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_10 = t;
                    int h_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(h_10);
                      }
                    else
                      {
                        t = g_10;
                        {
                          ATerm t_0 = NULL;
                          t_0 = t;
                          if((x_1 != t))
                            {
                              _fail(t);
                            }
                          t = t_0;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_10;
                  }
                t = SSL_rename(x_1, s_0);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_0);
              }
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              t = u_1;
              t = n_0(t);
              if((x_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_1);
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(r_83, c_0, t);
  return(t);
}
ATerm xtc_parse_pp_table_0_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    t = term_k_10;
    return(t);
  }
  t = xtc_transform_1_0(e_0, t);
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  e_2 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
      t = xtc_parse_pp_table_0_0(t);
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        f_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_2;
    {
      ATerm p_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = debug_1_0(q_0, t);
        return(t);
      }
      t = if_verbose2_1_0(p_0, t);
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm g_2 = NULL,l_2 = NULL;
    g_2 = t;
    t = term_m_10;
    t = get_config_0_0(t);
    l_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_2, term_n_10);
    t = geq_0_0(t);
    t = g_2;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  if(match_cons(t, sym__2))
    {
      u_2 = ATgetArgument(t, 0);
      v_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_2), term_q_10), u_2);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm w_2 = NULL,z_2 = NULL,v_0 = NULL,z_0 = NULL;
  w_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_2, term_t_10);
  t = add_extension_0_0(t);
  v_0 = t;
  t = SSL_access(v_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_2, w_2);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm a_3 = NULL;
      a_3 = t;
      t = SSL_modification_time(a_3);
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm b_3 = NULL;
      b_3 = t;
      t = SSL_modification_time(b_3);
      return(t);
    }
    t = _2_0(u_0, w_0, t);
    t = geq_0_0(t);
    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_2, w_2));
    if(match_cons(t, sym__2))
      {
        ATerm v_10 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm w_10 = ATgetArgument(t, 1);
          if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
            {
              z_0 = ATgetFirst((ATermList) w_10);
              {
                ATerm j_11 = (ATerm) ATgetNext((ATermList) w_10);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = z_0;
    {
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = term_k_11;
          return(t);
        }
        t = debug_1_0(y_0, t);
        return(t);
      }
      t = if_verbose2_1_0(x_0, t);
    }
  }
  return(t);
}
ATerm lookup_or_parse_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0_0(t);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = q_11;
      t = parse_to_temp_file_0_0(t);
    }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), c_3);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_3;
  return(t);
}
ATerm must_be_pp_0_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_d_12;
        return(t);
      }
      t = has_extension_1_0(a_1, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm d_3 = NULL;
        d_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, d_3), term_h_12);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm i_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        ;
        LocalPopChoice(o_12);
      }
    else
      {
        t = i_12;
        t = Cons_2_0(_id, f_3, t);
      }
    return(t);
  }
  t = f_3(t);
  return(t);
}
ATerm has_extension_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL;
  g_3 = t;
  t = g_78(t);
  i_3 = t;
  t = SSL_explode_string(i_3);
  h_3 = t;
  t = SSL_explode_string(g_3);
  {
    ATerm b_1 (ATerm t)
    {
      if((h_3 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = at_suffix_1_0(b_1, t);
    t = g_3;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm q_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        t = term_t_12;
        return(t);
      }
      t = has_extension_1_0(c_1, t);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = q_12;
      t = must_be_pp_0_0(t);
      t = lookup_or_parse_0_0(t);
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm j_3 = NULL;
      t = ensure_pp_table_parsed_0_0(t);
      j_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, j_3), term_w_12);
      return(t);
    }
    t = map_1_0(d_1, t);
    t = concat_0_0(t);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_x_12;
          return(t);
        }
        t = debug_1_0(f_1, t);
        return(t);
      }
      t = if_verbose5_1_0(e_1, t);
    }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm m_3 = NULL,o_3 = NULL,q_3 = NULL;
  t = term_m_10;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = term_a_13;
      }
    m_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_3, term_a_13);
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(m_3, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          t = SSL_subtr(m_3, (ATerm) ATmakeInt(1));
        }
      q_3 = t;
      t = SSL_int_to_string(q_3);
      o_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, o_3), term_m_10);
    }
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL;
  t = term_d_13;
  t = pass_verbose_0_0(t);
  t_3 = t;
  t = term_d_13;
  t = create_pp_table_args_0_0(t);
  u_3 = t;
  t = term_d_13;
  t = pass_conservative_0_0(t);
  v_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, v_3), u_3), t_3);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  y_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = y_3;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          z_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(z_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm c_4 = NULL,d_4 = NULL,e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_4, term_g_13);
  t = open_stream_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, d_4);
  t = r_65(t);
  t = fclose_0_0(t);
  t = d_4;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm f_4 = NULL,g_4 = NULL,i_4 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_13 = ATgetArgument(t, 0);
        if(match_cons(h_13, sym_Stream_1))
          {
            f_4 = ATgetArgument(h_13, 0);
          }
        else
          _fail(t);
        g_4 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_4, g_4);
    i_4 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, i_4);
    return(t);
  }
  t = WriteToFile_1_0(g_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  t = xtc_new_file_0_0(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_4, l_4);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(m_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, m_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm z_83 (ATerm), ATerm a_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(z_83, a_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm n_4 = NULL;
  ATerm h_1 (ATerm t)
  {
    ATerm o_4 = NULL;
    o_4 = t;
    t = SSL_explode_string(o_4);
    return(t);
  }
  t = map_1_0(h_1, t);
  t = concat_0_0(t);
  n_4 = t;
  t = SSL_implode_string(n_4);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
  m_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      n_5 = ATgetArgument(t, 0);
      {
        ATerm i_1 = NULL;
        t = SSL_int_to_string(n_5);
        i_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), i_1), term_m_13);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm z_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          n_5 = ATgetArgument(t, 0);
          o_5 = ATgetArgument(t, 1);
          p_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(o_5);
      z_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_5), term_p_13), z_1), term_o_13), n_5);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm u_5 = NULL;
  ATerm j_1 (ATerm t)
  {
    t = w_69(t);
    u_5 = t;
    return(t);
  }
  t = fetch_1_0(j_1, t);
  t = not_null(u_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_22), term_u_21), term_k_21), term_e_21), term_z_20), term_t_20), term_o_20), term_e_20), term_p_19), term_j_19), term_d_19), term_t_18), term_j_18), term_b_18), term_s_17), term_o_17), term_k_17), term_a_17), term_o_16), term_a_16), term_t_15), term_e_15), term_x_14), term_o_14), term_h_14), term_d_14), term_x_13), term_u_13);
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm d_22 = ATgetArgument(t, 0);
                if((v_5 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm f_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(k_1, t);
        }
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, v_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm e_6 = NULL,g_6 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm n_22 = ATgetArgument(t, 0);
          e_6 = ATgetArgument(t, 1);
          {
            ATerm o_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_6;
      {
        ATerm p_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_22;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        g_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, g_6), term_r_22));
      }
      return(t);
    }
    t = try_1_0(l_1, t);
    t = d_6;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm e_64 (ATerm), ATerm f_64 (ATerm), ATerm t)
{
  ATerm k_6 = NULL,q_6 = NULL;
  k_6 = t;
  t = fork_0_0(t);
  q_6 = t;
  {
    ATerm s_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_6;
        t = e_64(t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = s_22;
        t = (ATerm) ATmakeAppl(sym__2, q_6, k_6);
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm x_6 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm y_6 = NULL;
    if(match_cons(t, sym__2))
      {
        y_6 = ATgetArgument(t, 0);
        x_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(y_6);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm y_22 = ATgetArgument(t, 0);
        if(((ATgetType(y_22) != AT_INT) || (ATgetInt((ATermInt) y_22) != 0)))
          _fail(t);
        {
          ATerm z_22 = ATgetArgument(t, 1);
        }
        {
          ATerm a_23 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = x_6;
    return(t);
  }
  t = fork_2_0(g_64, m_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm i_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      i_7 = ATgetArgument(t, 0);
      k_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_1 (ATerm t)
    {
      t = SSL_execvp(i_7, k_7);
      return(t);
    }
    t = fork_and_wait_1_0(n_1, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_table_keys(q_7);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm s_7 = NULL,v_7 = NULL;
      s_7 = t;
      t = SSL_table_get(q_7, s_7);
      v_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_7, v_7);
      return(t);
    }
    t = map_1_0(o_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL;
    w_7 = t;
    t = term_m_10;
    t = get_config_0_0(t);
    x_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_7, term_c_21);
    t = geq_0_0(t);
    t = w_7;
    t = c_81(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  if(match_cons(t, sym__2))
    {
      b_8 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, b_8));
  {
    ATerm q_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((c_8 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          d_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = not_null(d_8);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      {
        ATerm g_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = filter_1_0(d_77, t);
              return(t);
            }
            t = Cons_2_0(d_77, r_1, t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = g_23;
            {
              ATerm h_8 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm i_23 = ATgetFirst((ATermList) t);
                  h_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_8;
              t = filter_1_0(d_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm j_8 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = x_78(t);
      t = j_8(t);
      return(t);
    }
    t = try_1_0(s_1, t);
    return(t);
  }
  t = j_8(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  {
    ATerm t_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm j_23 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_23;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_1, t);
    t = k_8;
  }
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,h_2 = NULL;
  m_8 = t;
  t = h_65(t);
  h_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_2));
  t = m_8;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm n_8 = NULL,o_8 = NULL;
    n_8 = t;
    t = term_m_10;
    t = get_config_0_0(t);
    o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_8, term_i_17);
    t = geq_0_0(t);
    t = n_8;
    t = b_81(t);
    return(t);
  }
  t = try_1_0(v_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm p_8 = NULL,q_8 = NULL;
    p_8 = t;
    t = term_m_10;
    t = get_config_0_0(t);
    q_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_8, term_f_14);
    t = geq_0_0(t);
    t = p_8;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(w_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm v_8 = NULL,w_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_8 = ATgetFirst((ATermList) t);
      w_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_73(t);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm x_8 = NULL;
      x_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_8, x_8);
      t = r_73(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
    t = w_8;
  }
  return(t);
}
ATerm union_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(match_cons(t, sym__2))
    {
      z_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm a_9 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_8;
          ;
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_2 (ATerm t)
                {
                  t = y_8;
                  return(t);
                }
                t = HdMember_p__2_0(n_73, a_2, t);
                t = a_9(t);
                ;
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                t = Cons_2_0(_id, a_9, t);
              }
          }
        }
      return(t);
    }
    t = a_9(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm b_9 = NULL;
    if(match_cons(t, sym__2))
      {
        b_9 = ATgetArgument(t, 0);
        if((b_9 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(b_2, t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__3))
    {
      e_9 = ATgetArgument(t, 0);
      f_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_9, f_9);
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
        t = SSL_table_get(e_9, f_9);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = (ATerm) ATempty;
      }
    h_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, g_9);
    t = union_0_0(t);
    i_9 = t;
    t = SSL_table_put(e_9, f_9, i_9);
    t = (ATerm) ATmakeAppl(sym__3, e_9, f_9, g_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_9;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym__2))
        {
          l_9 = ATgetArgument(t, 0);
          m_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, k_9, l_9, m_9);
      t = m_81(t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_10 (ATerm e_10, ATerm t)
  {
    t = SSL_fclose(e_10);
    return(t);
  }
  ATerm i_10 = NULL,j_10 = NULL;
  j_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_10 = ATgetArgument(t, 0);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_10);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = o_10(j_10, t);
          }
      }
    }
  else
    {
      t = o_10(j_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  t = SSL_stdin_stream();
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_10 = NULL;
  t = SSL_stdout_stream();
  r_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL;
  t = SSL_stderr_stream();
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_10);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  u_10 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      ATerm w_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL,x_3 = NULL;
        w_3 = t;
        t = SSL_explode_term(w_3);
        if(match_cons(t, sym__2))
          {
            ATerm z_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_24 = ATgetArgument(t, 1);
              if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
                {
                  x_3 = ATgetFirst((ATermList) a_24);
                  {
                    ATerm b_24 = (ATerm) ATgetNext((ATermList) a_24);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_3;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
              ATerm d_2 (ATerm t)
              {
                ATerm a_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_11;
                return(t);
              }
              t = _2_0(d_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_10 = ATgetArgument(t, 0);
                  y_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_10, y_10);
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_10);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
                ATerm i_2 (ATerm t)
                {
                  ATerm e_11 = NULL;
                  e_11 = t;
                  t = SSL_is_string(e_11);
                  return(t);
                }
                t = _2_0(i_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_11 = ATgetArgument(t, 0);
                    c_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_11, c_11);
                d_11 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_11);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_11 = NULL;
      i_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_11, term_g_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_h_24;
          return(t);
        }
        t = debug_1_0(j_2, t);
        _fail(t);
      }
    }
  f_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_11);
  g_11 = t;
  t = f_11;
  t = fclose_0_0(t);
  t = g_11;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_4 = NULL;
      h_4 = t;
      t = SSL_access(h_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(j_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_24;
      {
        ATerm k_24 = t;
        int l_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = t;
            if((PushChoice() == 0))
              {
                ATerm k_4 = NULL;
                k_4 = t;
                t = SSL_access(k_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_24;
              }
            {
              ATerm k_2 (ATerm t)
              {
                t = term_n_24;
                return(t);
              }
              t = debug_1_0(k_2, t);
            }
            ;
            LocalPopChoice(l_24);
          }
        else
          {
            t = k_24;
            {
              ATerm m_2 (ATerm t)
              {
                t = term_o_24;
                return(t);
              }
              t = debug_1_0(m_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
  l_11 = t;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm o_2 (ATerm t)
      {
        t = term_p_24;
        return(t);
      }
      t = debug_1_0(o_2, t);
      return(t);
    }
    t = if_verbose5_1_0(n_2, t);
    {
      ATerm q_24 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, l_11));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_24;
        }
      m_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, l_11));
      t = m_11;
      {
        ATerm p_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            t = term_r_24;
            return(t);
          }
          t = debug_1_0(q_2, t);
          return(t);
        }
        t = if_verbose4_1_0(p_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm r_2 (ATerm t)
          {
            ATerm s_2 (ATerm t)
            {
              t = term_s_24;
              return(t);
            }
            t = say_1_0(s_2, t);
            return(t);
          }
          t = if_verbose6_1_0(r_2, t);
          n_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_24, n_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm t_2 (ATerm t)
            {
              ATerm x_2 (ATerm t)
              {
                t = term_u_24;
                return(t);
              }
              t = say_1_0(x_2, t);
              return(t);
            }
            t = if_verbose6_1_0(t_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, l_11), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_t_24, (ATerm)ATmakeAppl(sym_Imported_1, l_11), (ATerm) ATempty);
            {
              ATerm y_2 (ATerm t)
              {
                ATerm e_3 (ATerm t)
                {
                  t = term_s_24;
                  return(t);
                }
                t = say_1_0(e_3, t);
                return(t);
              }
              t = if_verbose4_1_0(y_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_24 = t;
  int w_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_24);
    }
  else
    {
      t = v_24;
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm o_11 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      t = term_a_25;
      return(t);
    }
    t = debug_1_0(l_3, t);
    return(t);
  }
  t = if_verbose5_1_0(k_3, t);
  o_11 = t;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = o_11;
    {
      ATerm n_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          t = term_d_25;
          return(t);
        }
        t = debug_1_0(p_3, t);
        return(t);
      }
      t = if_verbose5_1_0(n_3, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = term_g_25;
          return(t);
        }
        t = debug_1_0(s_3, t);
        return(t);
      }
      t = if_verbose5_1_0(r_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm r_4 = NULL,s_4 = NULL;
              r_4 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, r_4));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_25 = ATgetFirst((ATermList) t);
                  if(match_cons(j_25, sym__2))
                    {
                      ATerm l_25 = ATgetArgument(j_25, 0);
                      s_4 = ATgetArgument(j_25, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_25 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = s_4;
            }
          }
        {
          ATerm a_4 (ATerm t)
          {
            ATerm b_4 (ATerm t)
            {
              t = term_g_25;
              return(t);
            }
            t = debug_1_0(b_4, t);
            return(t);
          }
          t = if_verbose5_1_0(a_4, t);
        }
      }
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
        ATerm p_11 = NULL;
        p_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), p_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_25), p_11), term_m_25);
        {
          ATerm j_4 (ATerm t)
          {
            t = term_t_24;
            t = table_getlist_0_0(t);
            {
              ATerm p_4 (ATerm t)
              {
                t = term_o_25;
                return(t);
              }
              t = debug_1_0(p_4, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(j_4, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL;
  r_11 = t;
  t = q_83(t);
  t = xtc_find_warning_0_0(t);
  s_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_11, r_11);
  t = call_0_0(t);
  t = r_11;
  return(t);
}
ATerm assert_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      t_11 = ATgetArgument(t, 0);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_80(t);
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_11, t_11, u_11);
  t = table_push_0_0(t);
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_11 = ATgetFirst((ATermList) t);
        x_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(x_11), (ATerm) ATinsert(CheckATermList(w_11), t_11)));
    t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  t = k_65(t);
  {
    ATerm q_4 (ATerm t)
    {
      t = term_r_25;
      return(t);
    }
    t = debug_1_0(q_4, t);
    t = y_11;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_12 (ATerm c_12, ATerm t)
  {
    t = c_12;
    {
      ATerm s_25 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm t_25 = ATgetArgument(t, 0);
              ATerm u_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_25;
        }
      {
        ATerm t_4 (ATerm t)
        {
          t = term_v_25;
          return(t);
        }
        t = obsolete_1_0(t_4, t);
        t = (ATerm) ATmakeAppl(sym__2, c_12, term_g_13);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm n_12 (ATerm e_12, ATerm f_12, ATerm g_12, ATerm t)
  {
    t = SSL_open_file(e_12, f_12);
    return(t);
  }
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
  j_12 = t;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_12(j_12, t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            t = n_12(k_12, l_12, j_12, t);
          }
      }
    }
  else
    {
      t = m_12(j_12, t);
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
  ATerm p_12 = NULL;
  t = term_d_13;
  t = new_0_0(t);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_12, term_y_25);
  t = conc_strings_0_0(t);
  {
    ATerm u_4 (ATerm t)
    {
      ATerm a_5 = NULL;
      a_5 = t;
      t = SSL_access(a_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(u_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = new_file_0_0(t);
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_12, term_g_13);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, r_12, term_d_13);
  {
    ATerm v_4 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    t = assert_1_0(v_4, t);
    t = r_12;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL;
  e_13 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm f_5 = NULL,k_5 = NULL;
      t = e_13;
      t = xtc_new_file_0_0(t);
      f_5 = t;
      t = m_0(t);
      k_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_5, (ATerm) ATinsert(ATinsert(ATempty, f_5), term_a_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(f_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, f_5);
    }
  else
    {
      ATerm x_5 = NULL,y_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          f_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_13;
      t = xtc_new_file_0_0(t);
      x_5 = t;
      t = m_0(t);
      y_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_5), term_a_26), f_13), term_b_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(x_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_13);
  i_13 = t;
  t = j_13;
  t = b_62(t);
  k_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, k_13), i_13);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_26);
        }
      else
        {
          t = e_26;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(d_26);
      t = xtc_transform_file_2_0(s_83, t_83, t);
    }
  else
    {
      t = c_26;
      t = xtc_transform_term_2_0(s_83, t_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  b_14 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_6 = NULL;
        t = b_14;
        t = k_0(t);
        c_6 = t;
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(c_14, c_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
        }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm k_26 = t;
          int l_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_6 = NULL;
              t = b_14;
              t = k_0(t);
              j_6 = t;
              {
                ATerm m_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(o_26);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm p_26 = t;
                          int q_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(q_26);
                            }
                          else
                            {
                              t = p_26;
                              {
                                ATerm l_6 = NULL;
                                l_6 = t;
                                if((c_14 != t))
                                  {
                                    _fail(t);
                                  }
                                t = l_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_26;
                  }
                t = SSL_copy(c_14, j_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
              }
              ;
              LocalPopChoice(l_26);
            }
          else
            {
              t = k_26;
              t = b_14;
              t = k_0(t);
              if((c_14 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_14);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  if(match_cons(t, sym__2))
    {
      i_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_26 = ATgetArgument(t, 0);
            ATerm u_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_14, j_14);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_26 = ATgetFirst((ATermList) t);
            n_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_6;
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATempty;
      }
    k_14 = t;
    t = SSL_table_put(i_14, j_14, k_14);
    t = (ATerm) ATmakeAppl(sym__2, i_14, j_14);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  r_14 = t;
  t = y_79(t);
  s_14 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_26);
      }
    else
      {
        t = w_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_14 = ATgetFirst((ATermList) t);
        t_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_14, (ATerm)ATmakeAppl(sym_Scopes_0), t_14);
    t = u_14;
    {
      ATerm w_4 (ATerm t)
      {
        ATerm v_14 = NULL;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_14, v_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(w_4, t);
      t = r_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_80(t);
      t = u_80(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      t = u_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  t = x_79(t);
  z_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_14, term_a_27);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_27 = ATgetArgument(t, 0);
            ATerm e_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = (ATerm) ATempty;
      }
    a_15 = t;
    t = SSL_table_put(z_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(a_15), (ATerm) ATempty));
    t = y_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm f_15 = NULL;
  ATerm x_4 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  t = begin_scope_1_0(x_4, t);
  {
    ATerm y_4 (ATerm t)
    {
      ATerm g_15 = NULL;
      g_15 = t;
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_15 = ATgetFirst((ATermList) t);
            {
              ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_15;
        {
          ATerm z_4 (ATerm t)
          {
            ATerm b_5 (ATerm t)
            {
              ATerm h_15 = NULL;
              h_15 = t;
              t = SSL_remove(h_15);
              return(t);
            }
            t = try_1_0(b_5, t);
            return(t);
          }
          t = map_1_0(z_4, t);
          t = g_15;
          {
            ATerm c_5 (ATerm t)
            {
              t = term_z_25;
              return(t);
            }
            t = end_scope_1_0(c_5, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(c_83, y_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_15 = NULL;
        t = term_b_26;
        t = get_config_0_0(t);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_15);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = term_k_27;
      }
    t = d_83(t);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_26;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            t = term_b_10;
          }
        return(t);
      }
      t = copy_to_1_0(e_5, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(d_5, t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      t = term_n_27;
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), term_q_27), term_p_27), term_o_27);
      return(t);
    }
    t = xtc_transform_2_0(h_5, i_5, t);
    {
      ATerm j_5 (ATerm t)
      {
        t = term_s_27;
        return(t);
      }
      ATerm l_5 (ATerm t)
      {
        t = term_d_13;
        t = build_impl_args_0_0(t);
        return(t);
      }
      t = xtc_transform_2_0(j_5, l_5, t);
    }
    return(t);
  }
  t = xtc_io_1_0(g_5, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm k_15 = NULL;
    k_15 = t;
    if(match_string(t, "-k"))
      {
        t = k_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = k_15;
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    ATerm l_15 = NULL,m_15 = NULL;
    l_15 = t;
    t = SSL_string_to_int(l_15);
    m_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), m_15);
    t = l_15;
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  t = ArgOption_3_0(q_5, r_5, s_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm o_15 = NULL;
        o_15 = t;
        if(match_string(t, "-S"))
          {
            t = o_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = o_15;
          }
        return(t);
      }
      ATerm w_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_27;
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        t = term_y_27;
        return(t);
      }
      t = Option_3_0(t_5, w_5, z_5, t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      {
        ATerm z_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm b_6 (ATerm t)
            {
              ATerm p_15 = NULL,q_15 = NULL;
              p_15 = t;
              t = SSL_string_to_int(p_15);
              q_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, p_15);
              return(t);
            }
            ATerm f_6 (ATerm t)
            {
              t = term_b_28;
              return(t);
            }
            t = ArgOption_3_0(a_6, b_6, f_6, t);
            ;
            LocalPopChoice(a_28);
          }
        else
          {
            t = z_27;
            {
              ATerm h_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm i_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_28;
                return(t);
              }
              ATerm m_6 (ATerm t)
              {
                t = term_d_28;
                return(t);
              }
              t = Option_3_0(h_6, i_6, m_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm s_15 = NULL;
    s_15 = t;
    if(match_string(t, "-o"))
      {
        t = s_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_15;
      }
    return(t);
  }
  ATerm p_6 (ATerm t)
  {
    ATerm v_15 = NULL;
    v_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_15);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_g_28;
    return(t);
  }
  t = ArgOption_3_0(o_6, p_6, r_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm s_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_28;
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = term_k_28;
          return(t);
        }
        t = Option_3_0(s_6, t_6, u_6, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    if(match_string(t, "-i"))
      {
        t = y_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = y_15;
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), z_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, z_15);
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = term_l_28;
    return(t);
  }
  t = ArgOption_3_0(v_6, w_6, z_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      c_16 = ATgetArgument(t, 0);
      d_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_16;
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        t = (ATerm) ATempty;
      }
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, e_16);
    t = conc_0_0(t);
    f_16 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_16, f_16);
    t = (ATerm) ATmakeAppl(sym__3, term_s_28, c_16, f_16);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
  i_16 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = i_16;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm q_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_16 = ATgetFirst((ATermList) t);
          k_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_16 = ATgetFirst((ATermList) t);
          m_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_16;
      t = h_0(t);
      t = l_16;
      t = i_0(t);
      q_16 = t;
      t = (ATerm) ATinsert(CheckATermList(m_16), q_16);
    }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm b_7 (ATerm t)
  {
    ATerm r_16 = NULL;
    r_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_12, (ATerm) ATinsert(ATempty, r_16));
    t = extend_config_0_0(t);
    t = r_16;
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = term_t_28;
    return(t);
  }
  t = ArgOption_3_0(a_7, b_7, c_7, t);
  return(t);
}
ATerm asfix2abox_options_0_0 (ATerm t)
{
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = u_28;
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0_0(t);
            ;
            LocalPopChoice(x_28);
          }
        else
          {
            t = w_28;
            {
              ATerm d_7 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm e_7 (ATerm t)
              {
                ATerm s_16 = NULL;
                s_16 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue)), (ATerm) ATmakeAppl(sym_None_0));
                t = s_16;
                return(t);
              }
              ATerm f_7 (ATerm t)
              {
                t = term_y_28;
                return(t);
              }
              t = Option_3_0(d_7, e_7, f_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  t_16 = t;
  t = term_d_13;
  t = whoami_0_0(t);
  u_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), u_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = t_16;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_13;
  t = whoami_0_0(t);
  v_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), v_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_28;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm t)
{
  ATerm a_29 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_76(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = a_29;
      {
        ATerm y_16 = NULL,z_16 = NULL,c_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_16 = ATgetFirst((ATermList) t);
            z_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_16;
        t = foldr_2_0(a_76, b_76, t);
        c_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_16, c_17);
        t = b_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL;
  d_17 = t;
  t = SSL_explode_term(d_17);
  if(match_cons(t, sym__2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_17;
  t = foldr_2_0(y_73, z_73, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = times_0_0(t);
  {
    ATerm g_7 (ATerm t)
    {
      t = term_w_27;
      return(t);
    }
    ATerm h_7 (ATerm t)
    {
      ATerm g_17 = NULL,h_17 = NULL;
      if(match_cons(t, sym__2))
        {
          g_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(g_17, h_17);
            ;
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = SSL_addr(g_17, h_17);
          }
      }
      return(t);
    }
    t = crush_2_0(g_7, h_7, t);
    f_17 = t;
    t = SSL_TicksToSeconds(f_17);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_17 = NULL,v_17 = NULL,w_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym__2))
    {
      v_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_17;
        if((v_17 != t))
          {
            _fail(t);
          }
        t = t_17;
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = t_17;
        {
          ATerm h_29 = t;
          int i_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_17, w_17);
              ;
              LocalPopChoice(i_29);
            }
          else
            {
              t = h_29;
              t = SSL_gtr(v_17, w_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_17, w_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm j_7 (ATerm t)
  {
    ATerm z_17 = NULL,a_18 = NULL;
    z_17 = t;
    t = term_m_10;
    t = get_config_0_0(t);
    a_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_18, term_a_13);
    t = geq_0_0(t);
    t = z_17;
    t = y_80(t);
    return(t);
  }
  t = try_1_0(j_7, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    ATerm c_18 = NULL,d_18 = NULL;
    t = run_time_0_0(t);
    c_18 = t;
    t = term_d_13;
    t = whoami_0_0(t);
    d_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_18), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_18));
    t = (ATerm) ATmakeAppl(sym__2, term_q_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_29), c_18), term_o_13), d_18));
    return(t);
  }
  t = if_verbose1_1_0(l_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_29);
    }
  else
    {
      t = k_29;
      {
        ATerm m_7 (ATerm t)
        {
          ATerm n_29 = t;
          int o_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_29);
            }
          else
            {
              t = n_29;
              {
                ATerm p_29 = t;
                int q_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_29);
                  }
                else
                  {
                    t = p_29;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(m_7, t);
      }
    }
  t = k_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_18 = NULL,h_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_18 = ATgetFirst((ATermList) t);
      h_18 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_18 = NULL,m_18 = NULL;
        t = h_18;
        t = g_0(t);
        l_18 = t;
        t = g_18;
        t = f_0(t);
        m_18 = t;
        t = h_18;
        {
          ATerm n_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_18), m_18);
            return(t);
          }
          t = reverse_acc_2_0(f_0, n_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_13;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, o_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_18);
  n_18 = t;
  t = o_18;
  t = i_62(t);
  p_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_18), n_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = r_29;
      {
        ATerm p_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(p_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_t_29;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm r_7 (ATerm t)
    {
      ATerm u_18 = NULL;
      u_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, u_18), term_u_29);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(r_7, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_62 (ATerm), ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  y_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_18);
  v_18 = t;
  t = w_18;
  t = j_62(t);
  x_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, x_18), v_18);
  return(t);
}
ATerm fetch_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm c_19 (ATerm t)
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_69, _id, t);
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        t = Cons_2_0(_id, c_19, t);
      }
    return(t);
  }
  t = c_19(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  t = fetch_1_0(f_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  g_19 = t;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_29 = ATgetFirst((ATermList) t);
                ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_19;
          }
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATinsert(ATempty, g_19);
      }
    h_19 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), h_19);
    t = g_19;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_28;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm n_19 = NULL,o_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_19 = ATgetFirst((ATermList) t);
            o_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_19;
        {
          ATerm t_7 (ATerm t)
          {
            t = o_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(t_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  s_19 = t;
  t = SSL_explode_term(s_19);
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_30) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_19;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm u_19 (ATerm t)
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_19, t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_70(t);
      }
    return(t);
  }
  t = u_19(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      w_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_19;
  {
    ATerm u_7 (ATerm t)
    {
      t = v_19;
      return(t);
    }
    t = at_end_1_0(u_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm x_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  d_20 = t;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_20);
  x_19 = t;
  t = z_19;
  t = t_55(t);
  b_20 = t;
  t = a_20;
  t = u_55(t);
  c_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_20, c_20), x_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  ATerm y_7 (ATerm t)
  {
    ATerm i_20 = NULL;
    i_20 = t;
    t = SSL_explode_string(i_20);
    return(t);
  }
  ATerm z_7 (ATerm t)
  {
    ATerm j_20 = NULL;
    j_20 = t;
    t = SSL_explode_string(j_20);
    return(t);
  }
  t = _2_0(y_7, z_7, t);
  t = conc_0_0(t);
  h_20 = t;
  t = SSL_implode_string(h_20);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  t = d_65(t);
  l_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_20), l_20));
  t = k_20;
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    ATerm i_30 = t;
    int j_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(j_30);
      }
    else
      {
        t = i_30;
        t = Cons_2_0(k_69, m_20, t);
      }
    return(t);
  }
  t = m_20(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL;
      s_20 = t;
      t = SSL_is_string(s_20);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(a_8, t);
            ;
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL;
              w_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_20 = ATgetArgument(t, 0);
                  t = x_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_20 = ATgetArgument(t, 0);
                      t = x_20;
                      {
                        ATerm o_30 = t;
                        int p_30 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_30);
                          }
                        else
                          {
                            t = o_30;
                            {
                              ATerm e_8 (ATerm t)
                              {
                                t = term_q_30;
                                return(t);
                              }
                              t = debug_1_0(e_8, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm h_21 = NULL,i_21 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_20 = ATgetArgument(t, 0);
                          a_21 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_20;
                      t = eval_config_0_0(t);
                      h_21 = t;
                      t = a_21;
                      t = eval_config_0_0(t);
                      i_21 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_21, i_21);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_21);
  {
    ATerm f_8 (ATerm t)
    {
      ATerm m_21 = NULL;
      t = eval_config_0_0(t);
      m_21 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), l_21, m_21);
      t = m_21;
      return(t);
    }
    t = try_1_0(f_8, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_80(t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm i_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_w_30;
        return(t);
      }
      ATerm l_8 (ATerm t)
      {
        t = term_x_30;
        return(t);
      }
      t = Option_3_0(g_8, i_8, l_8, t);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = t_30;
      {
        ATerm r_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_y_30;
          return(t);
        }
        ATerm t_8 (ATerm t)
        {
          t = term_z_30;
          return(t);
        }
        t = Option_3_0(r_8, s_8, t_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__3))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
      r_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_21, q_21);
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
        t = SSL_table_get(p_21, q_21);
        ;
        LocalPopChoice(b_31);
      }
    else
      {
        t = a_31;
        t = (ATerm) ATempty;
      }
    s_21 = t;
    t = SSL_table_put(p_21, q_21, (ATerm) ATinsert(CheckATermList(s_21), r_21));
    t = (ATerm) ATmakeAppl(sym__3, p_21, q_21, r_21);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm x_21 = NULL;
  t = term_d_13;
  t = k_87(t);
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_f_31, x_21);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  z_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = z_21;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_22 = ATgetFirst((ATermList) t);
          b_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_22;
      t = a_0(t);
      t = term_d_13;
      t = b_0(t);
      e_22 = t;
      t = (ATerm) ATinsert(CheckATermList(b_22), e_22);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm u_8 (ATerm t)
  {
    ATerm g_22 = NULL;
    g_22 = t;
    if(match_string(t, "--help"))
      {
        t = g_22;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = g_22;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = g_22;
          }
      }
    return(t);
  }
  ATerm c_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_g_31;
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    t = term_h_31;
    return(t);
  }
  t = Option_3_0(u_8, c_9, d_9, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  m_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_22 = ATgetFirst((ATermList) t);
      j_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_22);
  h_22 = t;
  t = i_22;
  t = c_57(t);
  k_22 = t;
  t = j_22;
  t = d_57(t);
  l_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(l_22), k_22), h_22);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm t_22 = NULL;
  t_22 = t;
  {
    ATerm n_9 (ATerm t)
    {
      t = term_i_31;
      t = i_87(t);
      return(t);
    }
    t = try_1_0(n_9, t);
    t = t_22;
    {
      ATerm o_9 (ATerm t)
      {
        ATerm u_22 = NULL;
        u_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_22);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_22);
        return(t);
      }
      ATerm p_9 (ATerm t)
      {
        ATerm j_31 = t;
        int k_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_31 = t;
            int m_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_31);
              }
            else
              {
                t = l_31;
                t = i_87(t);
                t = Cons_2_0(_id, p_9, t);
              }
            ;
            LocalPopChoice(k_31);
          }
        else
          {
            t = j_31;
            {
              ATerm w_22 = NULL,x_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_22 = ATgetFirst((ATermList) t);
                  x_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_22), (ATerm) ATmakeAppl(sym_Undefined_1, w_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_9, p_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = d_23;
  {
    ATerm q_9 (ATerm t)
    {
      ATerm n_31 = t;
      int o_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_87(t);
          ;
          LocalPopChoice(o_31);
        }
      else
        {
          t = n_31;
          {
            ATerm p_31 = t;
            int q_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(q_31);
              }
            else
              {
                t = p_31;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_9, t);
    {
      ATerm r_9 (ATerm t)
      {
        ATerm r_31 = t;
        int s_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_23 = NULL;
            k_23 = t;
            {
              ATerm t_31 = t;
              int u_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_23;
                  {
                    ATerm v_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_29;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = v_31;
                        {
                          ATerm s_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(s_9, t);
                        }
                      }
                    t = k_23;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(u_31);
                }
              else
                {
                  t = t_31;
                  t = term_v_30;
                  t = get_config_0_0(t);
                  t = k_23;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(s_31);
          }
        else
          {
            t = r_31;
            {
              ATerm t_9 (ATerm t)
              {
                ATerm u_9 (ATerm t)
                {
                  e_23 = t;
                  return(t);
                }
                t = Undefined_1_0(u_9, t);
                return(t);
              }
              t = option_defined_1_0(t_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_q_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_23)), term_x_31));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(r_9, t);
      f_23 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = f_23;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm b_16 = NULL;
  t = parse_options_1_0(m_85, t);
  b_16 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_16);
  t = b_16;
  t = o_85(t);
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_85, t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
        {
          ATerm a_32 = t;
          int b_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_32);
            }
          else
            {
              t = a_32;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(q_85, default_usage_0_0, _id, r_85, t);
  return(t);
}
ATerm io_asfix2abox_0_0 (ATerm t)
{
  t = option_wrap_2_0(asfix2abox_options_0_0, asfix2abox_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_asfix2abox_0_0(t);
  return(t);
}
