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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
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
ATerm term_t_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_i_34;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_b_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_d_32;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_a_31;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_d_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_g_28;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_p_24;
ATerm term_c_24;
ATerm term_w_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_q_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
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
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_c_16;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_p_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_e_9;
void init_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_b_11, term_z_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_w_9, term_g_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_12, term_q_12, term_r_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_12, term_y_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_k_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_r_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_p_14, term_b_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_l_15, term_m_15);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_m_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_w_16, term_x_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_n_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_c_18, term_d_18);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_18, term_l_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_18, term_b_19, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_h_19, term_i_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_q_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_v_19);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_p_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_b_23, term_c_23);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_k_25);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_t_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_b_29, term_x_25);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_p_29, term_q_29);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_n_32, term_x_25);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_x_25);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_x_25);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym__2, term_j_35, term_x_25);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
ATerm k_6 (ATerm u_24, ATerm v_24, ATerm);
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm f_0 (ATerm);
ATerm o_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm m_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm n_6 (ATerm k_72 (ATerm), ATerm y_179, ATerm c_28, ATerm);
ATerm n_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm o_6 (ATerm q_24, ATerm r_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm r_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm);
ATerm s_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm);
ATerm y_1 (ATerm);
ATerm t_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm u_6 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm h_12 (ATerm v_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_6 (ATerm a_28, ATerm);
ATerm w_6 (ATerm w_48, ATerm x_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_14 (ATerm e_13, ATerm);
ATerm u_14 (ATerm l_13, ATerm m_13, ATerm s_13, ATerm);
ATerm v_14 (ATerm d_14, ATerm e_14, ATerm f_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm p_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm a_20 (ATerm p_18, ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm x_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm h_21 (ATerm t_20, ATerm);
ATerm i_21 (ATerm v_20, ATerm w_20, ATerm y_20, ATerm);
ATerm i_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm y_6 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm z_6 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm a_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_29 (ATerm y_28, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_7 (ATerm q_47, ATerm p_47, ATerm);
ATerm h_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_7 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_7 (ATerm b_47, ATerm c_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm o_8 (ATerm);
ATerm u_8 (ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm k_6 (ATerm u_24, ATerm v_24, ATerm t)
{
  t = SSL_rename(u_24, v_24);
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,g_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int d_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = d_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_e_9;
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_1, term_e_9);
        t = z_6(g_1, p_0, t);
        t = SSL_remove(g_1);
        t = term_e_9;
        ;
        LocalPopChoice(d_9);
      }
    else
      {
        t = z_8;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_1 = NULL;
              t = d_1;
              t = n_0(t);
              f_1 = t;
              {
                ATerm i_9 = t;
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
                        t = l_1;
                        if((g_1 != t))
                          {
                            _fail(t);
                          }
                        t = l_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_9;
                  }
                t = (ATerm) ATmakeAppl(sym__2, g_1, f_1);
                t = k_6(g_1, f_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
              }
              ;
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              t = d_1;
              t = n_0(t);
              if((g_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_1);
            }
        }
      }
  }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = debug_1_0(w_0, t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_l_9;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL;
  if(((k_1 != NULL) && (k_1 != t)))
    _fail(t);
  else
    k_1 = t;
  {
    ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_1));
      {
        ATerm n_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 = NULL,p_1 = NULL,q_0 = NULL;
            p_1 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm s_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_1);
            o_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_1));
            q_0 = t;
            t = SSLsetAnnotations(q_0, o_1);
            LocalPopChoice(r_9);
            t = xtc_transform_file_2_0(f_0, o_0, t);
          }
        else
          {
            t = n_9;
            t = xtc_transform_term_2_0(r_0, s_0, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(b_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        if(((m_1 != NULL) && (m_1 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_1 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(m_1);
    t = if_verbose2_1_0(u_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm r_1 = NULL;
  r_1 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        x_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, term_w_9);
        t = geq_0_0(t);
        t = r_1;
        t = b_88(t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = r_1;
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  t = debug_1_0(y_0, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,t_0 = NULL;
  b_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), term_y_9), b_2);
  u_2 = t;
  t = SSL_concat_strings(u_2);
  f_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_10);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, (ATerm) ATinsert(ATempty, term_a_10));
  t = y_6(f_2, e_2, t);
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, b_2);
  a_3 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      ATerm d_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  v_2 = t;
  t = SSL_modification_time(z_1);
  x_2 = t;
  t = SSL_modification_time(b_2);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, z_2);
  t_0 = t;
  t = SSLsetAnnotations(t_0, v_2);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_1, b_2);
  d_2 = t;
  t = SSL_explode_term(d_2);
  if(match_cons(t, sym__2))
    {
      ATerm e_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_10 = ATgetArgument(t, 1);
        if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
          {
            c_2 = ATgetFirst((ATermList) g_10);
            {
              ATerm h_10 = (ATerm) ATgetNext((ATermList) g_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_2;
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          ATerm q_3 = NULL,s_3 = NULL,t_3 = NULL,w_1 = NULL,h_2 = NULL,v_0 = NULL;
          q_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_3 = ATgetFirst((ATermList) t);
              t_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_3);
          w_1 = t;
          t = t_3;
          t = v_3(t);
          h_2 = t;
          t = (ATerm) ATinsert(CheckATermList(h_2), s_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, w_1);
        }
      }
    return(t);
  }
  t = v_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm m_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
      if(((n_2 != NULL) && (n_2 != t)))
        _fail(t);
      else
        n_2 = t;
      t = term_p_10;
      if(((o_2 != NULL) && (o_2 != t)))
        _fail(t);
      else
        o_2 = t;
      t = SSL_explode_string(not_null(o_2));
      if(((m_2 != NULL) && (m_2 != t)))
        _fail(t);
      else
        m_2 = t;
      t = SSL_explode_string(not_null(n_2));
      {
        ATerm a_1 (ATerm t)
        {
          if(((m_2 != NULL) && (m_2 != t)))
            _fail(t);
          else
            m_2 = t;
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
        t = not_null(n_2);
      }
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = m_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
            if(((r_2 != NULL) && (r_2 != t)))
              _fail(t);
            else
              r_2 = t;
            t = term_v_10;
            if(((s_2 != NULL) && (s_2 != t)))
              _fail(t);
            else
              s_2 = t;
            t = SSL_explode_string(not_null(s_2));
            if(((q_2 != NULL) && (q_2 != t)))
              _fail(t);
            else
              q_2 = t;
            t = SSL_explode_string(not_null(r_2));
            {
              ATerm c_1 (ATerm t)
              {
                if(((q_2 != NULL) && (q_2 != t)))
                  _fail(t);
                else
                  q_2 = t;
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
              t = not_null(r_2);
            }
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL;
              b_4 = t;
              t = term_x_10;
              e_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_y_10);
              f_4 = t;
              t = SSL_printnl(e_4, f_4);
              t = term_b_11;
              d_4 = t;
              t = SSL_exit(d_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_y_10);
            }
          }
        {
          ATerm c_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm f_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = f_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm g_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  g_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_4), term_i_11);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(j_1, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(e_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(h_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm l_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_10);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATempty, term_a_10));
      t = y_6(j_4, l_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm m_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_4);
  return(t);
}
ATerm n_6 (ATerm k_72 (ATerm), ATerm y_179, ATerm c_28, ATerm t)
{
  ATerm o_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_179, term_m_11);
  t = open_stream_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          s_4 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      t_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(s_4, t_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL;
  q_4 = t;
  t = xtc_new_file_0_0(t);
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_4, q_4);
  t = n_6(n_1, r_4, q_4, t);
  t = SSL_close_file(r_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, r_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(u_90, v_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm o_6 (ATerm q_24, ATerm r_24, ATerm t)
{
  t = SSL_execvp(q_24, r_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_5 = NULL,v_5 = NULL,w_5 = NULL,y_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      v_5 = ATgetArgument(t, 0);
      {
        ATerm c_3 = NULL,i_3 = NULL;
        t = SSL_int_to_string(v_5);
        c_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), c_3), term_o_11);
        i_3 = t;
        t = SSL_concat_strings(i_3);
      }
    }
  else
    {
      ATerm n_4 = NULL,p_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          v_5 = ATgetArgument(t, 0);
          w_5 = ATgetArgument(t, 1);
          y_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(w_5);
      n_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_5), term_s_11), n_4), term_r_11), v_5);
      p_4 = t;
      t = SSL_concat_strings(p_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm c_6 = NULL;
  ATerm q_1 (ATerm t)
  {
    t = p_76(t);
    if(((c_6 != NULL) && (c_6 != t)))
      _fail(t);
    else
      c_6 = t;
    return(t);
  }
  t = fetch_1_0(q_1, t);
  t = not_null(c_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm d_6 = NULL;
  if(((d_6 != NULL) && (d_6 != t)))
    _fail(t);
  else
    d_6 = t;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_11 = ATgetArgument(t, 0);
              if(((d_6 != NULL) && (d_6 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_6 = ATgetArgument(t, 1);
              {
                ATerm x_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_19), term_s_19), term_n_19), term_j_19), term_d_19), term_t_18), term_o_18), term_e_18), term_v_17), term_r_17), term_k_17), term_g_17), term_c_17), term_y_16), term_s_16), term_n_16), term_c_16), term_c_15), term_m_14), term_c_14), term_x_13), term_o_13), term_h_13), term_b_13), term_w_12), term_s_12), term_o_12), term_d_12);
        t = fetch_elem_1_0(s_1, t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(d_6));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_7 = NULL,u_7 = NULL;
  k_7 = t;
  {
    ATerm x_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_20 = ATgetArgument(t, 0);
            u_7 = ATgetArgument(t, 1);
            {
              ATerm c_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_19);
        {
          ATerm d_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL,h_5 = NULL,l_5 = NULL;
              t = u_7;
              {
                ATerm j_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                a_5 = t;
                t = term_x_10;
                h_5 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, a_5), term_q_20);
                l_5 = t;
                t = SSL_printnl(h_5, l_5);
                t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, a_5), term_q_20));
              }
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = d_20;
              t = k_7;
            }
        }
      }
    else
      {
        t = x_19;
        t = k_7;
      }
    t = k_7;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL;
  n_8 = t;
  t = fork_0_0(t);
  m_8 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_8;
        t = z_70(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = SSL_waitpid(m_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_20 = ATgetArgument(t, 0);
            if(((ATgetType(u_20) != AT_INT) || (ATgetInt((ATermInt) u_20) != 0)))
              _fail(t);
            {
              ATerm x_20 = ATgetArgument(t, 1);
            }
            {
              ATerm z_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm r_8 = NULL,s_8 = NULL;
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), r_8);
    t = g_7(not_null(p_8), r_8, t);
    s_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_8, s_8);
    return(t);
  }
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = SSL_table_keys(not_null(p_8));
  t = map_1_0(t_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  {
    ATerm a_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_8, term_h_19);
        t = geq_0_0(t);
        t = v_8;
        t = e_88(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = a_21;
        t = v_8;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_9 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        f_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_9, term_l_15);
        t = geq_0_0(t);
        t = c_9;
        t = d_88(t);
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = c_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  {
    ATerm j_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_9 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, term_u_12);
        t = geq_0_0(t);
        t = k_9;
        t = f_88(t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = j_21;
        t = k_9;
      }
  }
  return(t);
}
ATerm r_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm o_9 = NULL;
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), o_9);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
    t = not_null(w_34);
  }
  return(t);
}
ATerm s_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm f_10 = NULL,i_10 = NULL,j_10 = NULL;
    f_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(s_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_10 = ATgetFirst((ATermList) t);
            j_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm o_21 = t;
          int p_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_10;
              {
                ATerm v_1 (ATerm t)
                {
                  t = not_null(s_34);
                  return(t);
                }
                t = r_6(h_80, v_1, not_null(i_10), not_null(j_10), t);
                t = n_10(t);
              }
              ;
              LocalPopChoice(p_21);
            }
          else
            {
              t = o_21;
              {
                ATerm b_6 = NULL,g_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(f_10);
                b_6 = t;
                t = j_10;
                t = n_10(t);
                g_6 = t;
                t = (ATerm) ATinsert(CheckATermList(g_6), i_10);
                z_0 = t;
                t = SSLsetAnnotations(z_0, b_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_34);
  t = n_10(t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      z_10 = ATgetArgument(t, 0);
      if((z_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm q_10 = NULL,t_10 = NULL,u_10 = NULL;
  q_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_21 = ATgetArgument(t, 0);
            ATerm u_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = g_7(h_46, i_46, t);
        ;
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        t = (ATerm) ATempty;
      }
    u_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_10, j_46);
    t = s_6(y_1, u_10, j_46, t);
    t_10 = t;
    t = SSL_table_put(h_46, i_46, t_10);
    t = q_10;
  }
  return(t);
}
ATerm u_6 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm e_11 = NULL,g_11 = NULL;
    if(match_cons(t, sym__2))
      {
        e_11 = ATgetArgument(t, 0);
        g_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_46), e_11, g_11);
    t = h_88(t);
    return(t);
  }
  t = not_null(q_46);
  t = map_1_0(a_2, t);
  return(t);
}
ATerm h_12 (ATerm v_11, ATerm t)
{
  t = SSL_fclose(v_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_12 = NULL,f_12 = NULL;
  f_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_12 = ATgetArgument(t, 0);
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_12);
            ;
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            t = h_12(f_12, t);
          }
      }
    }
  else
    {
      t = h_12(f_12, t);
    }
  return(t);
}
ATerm v_6 (ATerm a_28, ATerm t)
{
  t = SSL_read_term_from_stream(a_28);
  return(t);
}
ATerm w_6 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm k_12 = NULL;
  t = SSL_fopen(w_48, x_48);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  t = SSL_stdin_stream();
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  t = SSL_stdout_stream();
  m_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_12 = NULL;
  t = SSL_stderr_stream();
  n_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_12);
  return(t);
}
ATerm t_14 (ATerm e_13, ATerm t)
{
  ATerm f_13 = NULL;
  t = SSL_explode_term(e_13);
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(((ATgetType(a_22) == AT_LIST) && !(ATisEmpty(a_22))))
          {
            f_13 = ATgetFirst((ATermList) a_22);
            {
              ATerm b_22 = (ATerm) ATgetNext((ATermList) a_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_14 (ATerm l_13, ATerm m_13, ATerm s_13, ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,y_13 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(s_13);
  v_13 = t;
  t = l_13;
  if(match_cons(t, sym_Path_1))
    {
      y_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_13, m_13);
  b_1 = t;
  t = SSLsetAnnotations(b_1, v_13);
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(t_13, u_13, t);
  return(t);
}
ATerm v_14 (ATerm d_14, ATerm e_14, ATerm f_14, ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,o_14 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(f_14);
  i_14 = t;
  t = SSL_is_string(d_14);
  o_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_14, e_14);
  i_1 = t;
  t = SSLsetAnnotations(i_1, i_14);
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(g_14, h_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      ATerm d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_14 = t;
  if(match_cons(t, sym__2))
    {
      r_14 = ATgetArgument(t, 0);
      s_14 = ATgetArgument(t, 1);
      {
        ATerm e_22 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_14(q_14, t);
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = e_22;
            {
              ATerm g_22 = t;
              int h_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_14(r_14, s_14, q_14, t);
                  ;
                  LocalPopChoice(h_22);
                }
              else
                {
                  t = g_22;
                  t = v_14(r_14, s_14, q_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_14(q_14, t);
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_14 = NULL;
      z_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_14, term_n_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = debug_1_0(g_2, t);
      _fail(t);
    }
  x_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(y_14, t);
  w_14 = t;
  t = x_14;
  t = fclose_0_0(t);
  t = w_14;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_o_22;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_p_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_15 = NULL,g_15 = NULL;
      d_15 = t;
      t = (ATerm) ATinsert(ATempty, term_s_22);
      g_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_15, (ATerm) ATinsert(ATempty, term_s_22));
      t = y_6(d_15, g_15, t);
      LocalPopChoice(r_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = q_22;
      {
        ATerm t_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_22 = t;
            if((PushChoice() == 0))
              {
                ATerm h_15 = NULL,i_15 = NULL;
                h_15 = t;
                t = (ATerm) ATinsert(ATempty, term_a_10);
                i_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATinsert(ATempty, term_a_10));
                t = y_6(h_15, i_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_22;
              }
            t = debug_1_0(i_2, t);
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = t_22;
            t = debug_1_0(j_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(w_2, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
  x_15 = t;
  t = term_x_10;
  y_15 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  z_15 = t;
  t = SSL_printnl(y_15, z_15);
  t = x_15;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__3))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      d_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_6(a_16, b_16, d_16, t);
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
  e_16 = t;
  t = term_x_10;
  f_16 = t;
  t = (ATerm) ATinsert(ATempty, term_z_22);
  g_16 = t;
  t = SSL_printnl(f_16, g_16);
  t = e_16;
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm h_16 = NULL,k_16 = NULL,l_16 = NULL;
  h_16 = t;
  t = term_x_10;
  k_16 = t;
  t = (ATerm) ATinsert(ATempty, term_y_22);
  l_16 = t;
  t = SSL_printnl(k_16, l_16);
  t = h_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  j_15 = t;
  t = if_verbose5_1_0(k_2, t);
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        ATerm v_15 = NULL,w_15 = NULL;
        t = term_b_23;
        v_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, j_15);
        w_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Imported_1, j_15));
        t = g_7(v_15, w_15, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_23;
      }
    n_15 = t;
    t = term_b_23;
    s_15 = t;
    t = term_c_23;
    t_15 = t;
    t = (ATerm) ATinsert(ATempty, j_15);
    u_15 = t;
    t = SSL_table_put(s_15, t_15, u_15);
    t = n_15;
    t = if_verbose4_1_0(p_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_2, t);
    k_15 = t;
    t = term_b_23;
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_23, k_15);
    t = u_6(b_3, r_15, k_15, t);
    t = if_verbose6_1_0(d_3, t);
    t = term_b_23;
    o_15 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, j_15);
    p_15 = t;
    t = (ATerm) ATempty;
    q_15 = t;
    t = SSL_table_put(o_15, p_15, q_15);
    t = (ATerm) ATmakeAppl(sym__3, term_b_23, (ATerm)ATmakeAppl(sym_Imported_1, j_15), (ATerm) ATempty);
    t = if_verbose4_1_0(f_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL;
  m_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_17 = ATgetFirst((ATermList) t);
          p_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 = NULL,b_8 = NULL,c_8 = NULL,t_2 = NULL;
            t = SSLgetAnnotations(m_17);
            y_7 = t;
            t = o_17;
            t = y_83(t);
            b_8 = t;
            t = p_17;
            t = filter_1_0(y_83, t);
            c_8 = t;
            t = (ATerm) ATinsert(CheckATermList(c_8), b_8);
            t_2 = t;
            t = SSLsetAnnotations(t_2, y_7);
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            t = p_17;
            t = filter_1_0(y_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = x_17(t);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
      }
    return(t);
  }
  t = x_17(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm k_23 = t;
        int l_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL;
            t = term_m_23;
            y_17 = t;
            t = SSL_getenv(y_17);
            ;
            LocalPopChoice(l_23);
          }
        else
          {
            t = k_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = debug_1_0(j_3, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  t = term_b_23;
  i_18 = t;
  t = term_p_23;
  j_18 = t;
  t = term_q_23;
  t = g_7(i_18, j_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm r_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_23;
      }
  }
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = debug_1_0(n_3, t);
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_t_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm a_18 = NULL;
  t = if_verbose5_1_0(h_3, t);
  a_18 = t;
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,g_18 = NULL;
        t = term_b_23;
        b_18 = t;
        t = term_c_23;
        g_18 = t;
        t = term_w_23;
        t = g_7(b_18, g_18, t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        {
          ATerm h_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_18 = t;
          t = repeat_1_0(l_3, t);
          t = h_18;
        }
      }
    t = a_18;
    t = if_verbose5_1_0(m_3, t);
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm a_20 (ATerm p_18, ATerm t)
{
  ATerm u_18 = NULL,w_18 = NULL,x_18 = NULL;
  t = term_b_23;
  w_18 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_18);
  x_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Tool_1, p_18));
  t = g_7(w_18, x_18, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_24 = ATgetFirst((ATermList) t);
      if(match_cons(h_24, sym__2))
        {
          ATerm o_24 = ATgetArgument(h_24, 0);
          u_18 = ATgetArgument(h_24, 1);
        }
      else
        _fail(t);
      {
        ATerm i_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_18;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_c_24;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_b_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(c_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_p_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
      t = if_verbose5_1_0(o_3, t);
      t = xtc_load_0_0(t);
      if(((a_19 != NULL) && (a_19 != t)))
        _fail(t);
      else
        a_19 = t;
      if(match_cons(t, sym__2))
        {
          y_18 = ATgetArgument(t, 0);
          z_18 = ATgetArgument(t, 1);
          {
            ATerm y_24 = t;
            int a_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_19 = NULL,g_19 = NULL,p_19 = NULL;
                t = term_b_23;
                if(((g_19 != NULL) && (g_19 != t)))
                  _fail(t);
                else
                  g_19 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_18));
                if(((p_19 != NULL) && (p_19 != t)))
                  _fail(t);
                else
                  p_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_b_23, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_18)));
                t = g_7(not_null(g_19), not_null(p_19), t);
                {
                  ATerm u_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((z_18 != NULL) && (z_18 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_18 = ATgetArgument(t, 0);
                        if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(u_3, t);
                  t = not_null(f_19);
                }
                ;
                LocalPopChoice(a_25);
              }
            else
              {
                t = y_24;
                t = a_20(not_null(a_19), t);
              }
          }
        }
      else
        {
          t = a_20(not_null(a_19), t);
        }
      t = if_verbose5_1_0(x_3, t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm y_19 = NULL,q_8 = NULL,t_8 = NULL;
        y_19 = t;
        t = term_x_10;
        q_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_25), y_19), term_b_25);
        t_8 = t;
        t = SSL_printnl(q_8, t_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_25), y_19), term_b_25);
        t = if_verbose5_1_0(z_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(((f_20 != NULL) && (f_20 != t)))
    _fail(t);
  else
    f_20 = t;
  t = l_90(t);
  t = xtc_find_0_0(t);
  if(((e_20 != NULL) && (e_20 != t)))
    _fail(t);
  else
    e_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(f_20));
  {
    ATerm h_4 (ATerm t)
    {
      ATerm g_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(f_20));
      t = o_6(not_null(e_20), not_null(f_20), t);
      t = term_d_25;
      g_20 = t;
      t = SSL_exit(g_20);
      return(t);
    }
    t = fork_and_wait_1_0(h_4, t);
    t = not_null(f_20);
  }
  return(t);
}
ATerm x_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm h_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
  m_20 = t;
  t = w_86(t);
  h_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_20, t_44, r_44);
  t = h_7(h_20, t_44, r_44, t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL;
        t = term_k_25;
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_20, term_k_25);
        t = g_7(h_20, p_20, t);
        ;
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_20 = ATgetFirst((ATermList) t);
        l_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_25;
    n_20 = t;
    t = (ATerm) ATinsert(CheckATermList(l_20), (ATerm) ATinsert(CheckATermList(k_20), t_44));
    o_20 = t;
    t = SSL_table_put(h_20, n_20, o_20);
    t = m_20;
  }
  return(t);
}
ATerm h_21 (ATerm t_20, ATerm t)
{
  t = t_20;
  {
    ATerm l_25 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_25 = ATgetArgument(t, 0);
            ATerm o_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_25;
      }
    t = term_p_25;
    t = debug_1_0(i_4, t);
    t = (ATerm) ATmakeAppl(sym__2, t_20, term_m_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm i_21 (ATerm v_20, ATerm w_20, ATerm y_20, ATerm t)
{
  t = SSL_open_file(v_20, w_20);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm b_21 = NULL,d_21 = NULL,g_21 = NULL;
  b_21 = t;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
      {
        ATerm s_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_21(b_21, t);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = s_25;
            t = i_21(d_21, g_21, b_21, t);
          }
      }
    }
  else
    {
      t = h_21(b_21, t);
    }
  return(t);
}
ATerm y_6 (ATerm o_48, ATerm p_48, ATerm t)
{
  t = SSL_access(o_48, p_48);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,n_21 = NULL;
  t = term_x_25;
  t = new_0_0(t);
  k_21 = t;
  t = term_y_25;
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_21, term_y_25);
  t = f_7(k_21, l_21, t);
  n_21 = t;
  {
    ATerm z_25 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_21 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_10);
        q_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, (ATerm) ATinsert(ATempty, term_a_10));
        t = y_6(n_21, q_21, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = z_25;
        t = n_21;
      }
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  t = new_file_0_0(t);
  v_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, term_m_11);
  t = open_file_0_0(t);
  t = term_x_25;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_21, term_x_25);
  t = x_6(k_4, v_21, w_21, t);
  t = v_21;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  i_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_9 = NULL,b_9 = NULL;
      t = i_22;
      t = xtc_new_file_0_0(t);
      a_9 = t;
      t = m_0(t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_9, (ATerm) ATinsert(ATinsert(ATempty, a_9), term_g_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(a_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_9);
    }
  else
    {
      ATerm p_9 = NULL,q_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          j_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_22;
      t = xtc_new_file_0_0(t);
      p_9 = t;
      t = m_0(t);
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_9), term_g_26), j_22), term_j_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(p_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_9);
    }
  return(t);
}
ATerm z_6 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_23 = NULL,s_23 = NULL;
  o_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL;
        t = o_23;
        t = k_0(t);
        c_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = c_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = c_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, s_23, c_10);
        t = z_6(s_23, c_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm s_26 = t;
          int t_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL;
              t = o_23;
              t = k_0(t);
              w_10 = t;
              {
                ATerm x_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm a_11 = NULL;
                    a_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = a_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = a_11;
                          }
                        else
                          {
                            t = a_11;
                            if((s_23 != t))
                              {
                                _fail(t);
                              }
                            t = a_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, s_23, w_10);
                t = z_6(s_23, w_10, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
              }
              ;
              LocalPopChoice(t_26);
            }
          else
            {
              t = s_26;
              t = o_23;
              t = k_0(t);
              if((s_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_23);
            }
        }
      }
  }
  return(t);
}
ATerm a_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  y_23 = t;
  {
    ATerm y_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = g_7(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_27 = ATgetFirst((ATermList) t);
            x_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_26);
        t = SSL_table_put(p_45, q_45, x_23);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, x_23);
      }
    else
      {
        t = y_26;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = y_23;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,d_24 = NULL,e_24 = NULL;
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = t_86(t);
  if(((b_24 != NULL) && (b_24 != t)))
    _fail(t);
  else
    b_24 = t;
  {
    ATerm g_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_24 = NULL;
        t = term_k_25;
        f_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_k_25);
        t = g_7(not_null(b_24), f_24, t);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_24 != NULL) && (a_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_24 = ATgetFirst((ATermList) t);
        if(((z_23 != NULL) && (z_23 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          z_23 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_25;
    if(((e_24 != NULL) && (e_24 != t)))
      _fail(t);
    else
      e_24 = t;
    t = SSL_table_put(not_null(b_24), not_null(e_24), not_null(z_23));
    t = not_null(a_24);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm g_24 = NULL;
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), g_24);
        t = a_7(not_null(b_24), g_24, t);
        return(t);
      }
      t = map_1_0(u_4, t);
      t = not_null(d_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  k_24 = t;
  t = s_86(t);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_k_25);
  {
    ATerm o_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_27 = ATgetArgument(t, 0);
            ATerm z_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_25;
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_24, term_k_25);
        t = g_7(j_24, z_24, t);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = o_27;
        t = (ATerm) ATempty;
      }
    l_24 = t;
    t = term_k_25;
    m_24 = t;
    t = (ATerm) ATinsert(CheckATermList(l_24), (ATerm) ATempty);
    n_24 = t;
    t = SSL_table_put(j_24, m_24, n_24);
    t = k_24;
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm m_25 = NULL;
  m_25 = t;
  {
    ATerm b_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(m_25);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = b_28;
        t = m_25;
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm f_25 = NULL;
    f_25 = t;
    {
      ATerm e_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_25 = NULL,h_25 = NULL;
          t = term_f_26;
          g_25 = t;
          t = term_k_25;
          h_25 = t;
          t = term_g_28;
          t = g_7(g_25, h_25, t);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = e_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_25 != NULL) && (e_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_25 = ATgetFirst((ATermList) t);
          {
            ATerm h_28 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(e_25);
      t = map_1_0(x_4, t);
      t = f_25;
      t = end_scope_1_0(y_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(v_4, t);
  t = restore_always_2_0(x_89, w_4, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      t = term_e_9;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm k_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_25 = NULL;
        t = term_j_26;
        t = get_config_0_0(t);
        q_25 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, q_25);
        ;
        LocalPopChoice(l_28);
      }
    else
      {
        t = k_28;
        t = term_k_11;
      }
    t = y_89(t);
    t = copy_to_1_0(c_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,a_26 = NULL,b_26 = NULL;
  t_25 = t;
  t = term_x_25;
  t = whoami_0_0(t);
  u_25 = t;
  t = term_x_10;
  a_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_28), u_25), term_m_28);
  b_26 = t;
  t = SSL_printnl(a_26, b_26);
  t = term_b_11;
  v_25 = t;
  t = SSL_exit(v_25);
  t = t_25;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  if(match_string(t, "-k"))
    {
      t = d_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL,i_26 = NULL;
  e_26 = t;
  t = SSL_string_to_int(e_26);
  h_26 = t;
  t = term_o_28;
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, h_26);
  t = j_7(i_26, h_26, t);
  t = e_26;
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_q_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_5, g_5, i_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  if(match_string(t, "-S"))
    {
      t = k_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_26;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  t = term_v_9;
  l_26 = t;
  t = term_t_28;
  m_26 = t;
  t = term_v_28;
  t = j_7(l_26, m_26, t);
  t = term_w_28;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  t = SSL_string_to_int(p_26);
  q_26 = t;
  t = term_v_9;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, q_26);
  t = j_7(r_26, q_26, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_26);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm r_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL;
  t = term_b_29;
  u_26 = t;
  t = term_x_25;
  v_26 = t;
  t = term_d_29;
  t = j_7(u_26, v_26, t);
  t = term_g_29;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_5, m_5, n_5, t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_5, p_5, q_5, t);
            ;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = Option_3_0(r_5, t_5, u_5, t);
          }
      }
    }
  return(t);
}
ATerm j_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm w_26 = NULL;
  t = term_o_29;
  w_26 = t;
  t = SSL_table_put(w_26, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_o_29, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
      t = term_x_25;
      t = d_0(t);
      c_27 = t;
      t = term_p_29;
      d_27 = t;
      t = term_q_29;
      e_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, c_27);
      t = h_7(d_27, e_27, c_27, t);
      _fail(t);
    }
  else
    {
      ATerm h_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_27 = ATgetFirst((ATermList) t);
          b_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_27;
      t = a_0(t);
      t = term_x_25;
      t = c_0(t);
      h_27 = t;
      t = (ATerm) ATinsert(CheckATermList(b_27), h_27);
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm l_27 = NULL;
  l_27 = t;
  if(match_string(t, "-o"))
    {
      t = l_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_27;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
  t = term_g_26;
  n_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, m_27);
  t = j_7(n_27, m_27, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_27);
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, z_5, a_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm p_27 = NULL;
  p_27 = t;
  if(match_string(t, "-i"))
    {
      t = p_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_27;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  q_27 = t;
  t = term_j_26;
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, q_27);
  t = j_7(r_27, q_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_27);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, h_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm u_28 (ATerm t)
  {
    ATerm p_28 = NULL,r_28 = NULL,s_28 = NULL;
    s_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_28 = ATgetFirst((ATermList) t);
        r_28 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_11 = NULL,q_11 = NULL,e_3 = NULL;
          t = SSLgetAnnotations(s_28);
          l_11 = t;
          t = r_28;
          t = u_28(t);
          q_11 = t;
          t = (ATerm) ATinsert(CheckATermList(q_11), p_28);
          e_3 = t;
          t = SSLsetAnnotations(e_3, l_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_28;
        t = t_76(t);
      }
    return(t);
  }
  t = u_28(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_27 = NULL,w_27 = NULL,x_27 = NULL;
  t_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_27;
    }
  else
    {
      ATerm i_6 (ATerm t)
      {
        t = not_null(x_27);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_27 != NULL) && (w_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_27 = ATgetFirst((ATermList) t);
          if(((x_27 != NULL) && (x_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_27);
      t = at_end_1_0(i_6, t);
    }
  return(t);
}
ATerm k_29 (ATerm y_28, ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_explode_term(y_28);
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_29 = NULL,e_29 = NULL,f_29 = NULL;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              t = not_null(e_29);
              return(t);
            }
            t = not_null(c_29);
            t = at_end_1_0(j_6, t);
            ;
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            t = k_29(not_null(f_29), t);
          }
      }
    }
  else
    {
      t = k_29(not_null(f_29), t);
    }
  return(t);
}
ATerm b_7 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm l_29 = NULL,r_29 = NULL,z_29 = NULL;
  t = q_47;
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
    r_29 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, r_29);
    t = conc_0_0(t);
    l_29 = t;
    t = term_o_29;
    z_29 = t;
    t = SSL_table_put(z_29, q_47, l_29);
    t = (ATerm) ATmakeAppl(sym__3, term_o_29, q_47, l_29);
  }
  return(t);
}
ATerm h_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,e_30 = NULL;
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm a_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_30 = ATgetArgument(t, 0);
            ATerm g_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = g_7(k_45, l_45, t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = a_30;
        t = (ATerm) ATempty;
      }
    c_30 = t;
    t = (ATerm) ATinsert(CheckATermList(c_30), j_45);
    e_30 = t;
    t = SSL_table_put(k_45, l_45, e_30);
    t = b_30;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
      t = term_x_25;
      t = j_0(t);
      u_30 = t;
      t = term_p_29;
      v_30 = t;
      t = term_q_29;
      w_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_29, term_q_29, u_30);
      t = h_7(v_30, w_30, u_30, t);
      _fail(t);
    }
  else
    {
      ATerm b_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_30 = ATgetFirst((ATermList) t);
          r_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_30 = ATgetFirst((ATermList) t);
          t_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_30;
      t = h_0(t);
      t = s_30;
      t = i_0(t);
      b_31 = t;
      t = (ATerm) ATinsert(CheckATermList(t_30), b_31);
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  t = term_i_11;
  d_31 = t;
  t = (ATerm) ATinsert(ATempty, c_31);
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATinsert(ATempty, c_31));
  t = b_7(d_31, e_31, t);
  t = c_31;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_6, p_6, q_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_25;
  t = whoami_0_0(t);
  f_31 = t;
  t = term_x_10;
  h_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_30), f_31);
  i_31 = t;
  t = SSL_printnl(h_31, i_31);
  t = term_b_11;
  g_31 = t;
  t = SSL_exit(g_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_31;
      t = v_82(t);
    }
  else
    {
      ATerm y_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_31;
      t = foldr_2_0(v_82, w_82, t);
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_31, y_31);
      t = w_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      i_12 = ATgetArgument(t, 0);
      j_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(i_12, j_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_32 = NULL,b_12 = NULL,c_12 = NULL;
  t = times_0_0(t);
  c_12 = t;
  t = SSL_explode_term(c_12);
  if(match_cons(t, sym__2))
    {
      ATerm m_30 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_12;
  t = foldr_2_0(d_7, e_7, t);
  f_32 = t;
  t = SSL_TicksToSeconds(f_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_33;
        if((z_32 != t))
          {
            _fail(t);
          }
        t = y_32;
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
        {
          ATerm p_30 = t;
          int x_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_32, a_33);
              ;
              LocalPopChoice(x_30);
            }
          else
            {
              t = p_30;
              t = SSL_gtr(z_32, a_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_32, a_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_33 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        g_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_33, term_b_11);
        t = geq_0_0(t);
        t = e_33;
        t = a_88(t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        t = e_33;
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL;
  t = run_time_0_0(t);
  k_33 = t;
  t = term_x_25;
  t = whoami_0_0(t);
  l_33 = t;
  t = term_x_10;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), k_33), term_r_11), l_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_31), k_33), term_r_11), l_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_28;
  p_33 = t;
  t = SSL_exit(p_33);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  y_33 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_33;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_33 = ATgetArgument(t, 0);
          {
            ATerm z_12 = NULL,g_3 = NULL;
            t = SSLgetAnnotations(y_33);
            z_12 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_33);
            g_3 = t;
            t = SSLsetAnnotations(g_3, z_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_33;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm j_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_31);
    }
  else
    {
      t = j_31;
      t = fetch_1_0(l_7, t);
    }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_34 = ATgetFirst((ATermList) t);
      c_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_34 = NULL,h_34 = NULL;
        ATerm m_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_34)), not_null(h_34));
          return(t);
        }
        t = not_null(c_34);
        t = g_0(t);
        if(((g_34 != NULL) && (g_34 != t)))
          _fail(t);
        else
          g_34 = t;
        t = not_null(b_34);
        t = e_0(t);
        if(((h_34 != NULL) && (h_34 != t)))
          _fail(t);
        else
          h_34 = t;
        t = not_null(c_34);
        t = reverse_acc_2_0(e_0, m_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_25;
      t = g_0(t);
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,k_3 = NULL;
  n_34 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_34);
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_34);
  k_3 = t;
  t = SSLsetAnnotations(k_3, l_34);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_34), term_m_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL;
  ATerm n_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = n_31;
      t = fetch_1_0(n_7, t);
    }
  t = term_s_31;
  t = echo_0_0(t);
  t = term_p_29;
  j_34 = t;
  t = term_q_29;
  k_34 = t;
  t = term_t_31;
  t = g_7(j_34, k_34, t);
  t = reverse_acc_2_0(_id, o_7, t);
  t = map_1_0(p_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm s_35 (ATerm t)
  {
    ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
    p_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_35 = ATgetFirst((ATermList) t);
        r_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_31 = t;
      int v_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_13 = NULL,q_13 = NULL,p_3 = NULL;
          t = SSLgetAnnotations(p_35);
          n_13 = t;
          t = q_35;
          t = n_76(t);
          q_13 = t;
          t = (ATerm) ATinsert(CheckATermList(r_35), q_13);
          p_3 = t;
          t = SSLsetAnnotations(p_3, n_13);
          ;
          LocalPopChoice(v_31);
        }
      else
        {
          t = u_31;
          {
            ATerm a_15 = NULL,f_15 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(p_35);
            a_15 = t;
            t = r_35;
            t = s_35(t);
            f_15 = t;
            t = (ATerm) ATinsert(CheckATermList(f_15), q_35);
            w_3 = t;
            t = SSLsetAnnotations(w_3, a_15);
          }
        }
    }
    return(t);
  }
  t = s_35(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_35;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_31 = ATgetFirst((ATermList) t);
                ATerm a_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_35;
          }
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        t = (ATerm) ATinsert(ATempty, w_35);
      }
    x_35 = t;
    t = term_e_9;
    y_35 = t;
    t = SSL_printnl(y_35, x_35);
    t = w_35;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_7 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  e_36 = t;
  t = i_72(t);
  f_36 = t;
  t = term_x_10;
  g_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_36), f_36);
  h_36 = t;
  t = SSL_printnl(g_36, h_36);
  t = e_36;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm w_36 (ATerm t)
  {
    ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
    t_36 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_36;
      }
    else
      {
        ATerm o_16 = NULL,u_16 = NULL,v_16 = NULL,a_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_36 = ATgetFirst((ATermList) t);
            v_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_36);
        o_16 = t;
        t = u_36;
        t = d_76(t);
        u_16 = t;
        t = v_36;
        t = w_36(t);
        v_16 = t;
        t = (ATerm) ATinsert(CheckATermList(v_16), u_16);
        a_4 = t;
        t = SSLsetAnnotations(a_4, o_16);
      }
    return(t);
  }
  t = w_36(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_32);
    }
  else
    {
      t = b_32;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_37 = NULL;
      e_37 = t;
      t = SSL_is_string(e_37);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = e_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_7, t);
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
              k_37 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_37 = ATgetArgument(t, 0);
                  t = l_37;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_37 = ATgetArgument(t, 0);
                      t = l_37;
                      {
                        ATerm j_32 = t;
                        int k_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_32);
                          }
                        else
                          {
                            t = j_32;
                            t = debug_1_0(r_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_37 = NULL,r_37 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_37 = ATgetArgument(t, 0);
                          m_37 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_37;
                      t = eval_config_0_0(t);
                      q_37 = t;
                      t = m_37;
                      t = eval_config_0_0(t);
                      r_37 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
                      t = f_7(q_37, r_37, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_7 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_table_get(b_47, c_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  t = term_o_29;
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_29, v_37);
  t = g_7(w_37, v_37, t);
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL,y_37 = NULL;
        t = eval_config_0_0(t);
        x_37 = t;
        t = term_o_29;
        y_37 = t;
        t = SSL_table_put(y_37, v_37, x_37);
        t = x_37;
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
      }
  }
  return(t);
}
ATerm s_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  t = term_n_32;
  b_38 = t;
  t = term_x_25;
  c_38 = t;
  t = term_o_32;
  t = j_7(b_38, c_38, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
  t = term_n_32;
  f_38 = t;
  t = term_x_25;
  g_38 = t;
  t = term_o_32;
  t = j_7(f_38, g_38, t);
  t = term_q_32;
  d_38 = t;
  t = term_x_25;
  e_38 = t;
  t = term_r_32;
  t = j_7(d_38, e_38, t);
  t = term_s_32;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_t_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, t_7, v_7, t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = Option_3_0(w_7, x_7, z_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL,b_5 = NULL;
  m_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      j_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  h_38 = t;
  t = i_38;
  t = v_63(t);
  k_38 = t;
  t = j_38;
  t = w_63(t);
  l_38 = t;
  t = (ATerm) ATinsert(CheckATermList(l_38), k_38);
  b_5 = t;
  t = SSLsetAnnotations(b_5, h_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL,w_38 = NULL,x_38 = NULL,d_5 = NULL;
  if(((r_38 != NULL) && (r_38 != t)))
    _fail(t);
  else
    r_38 = t;
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = d_94(t);
        ;
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
      }
    t = not_null(r_38);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_38 != NULL) && (t_38 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_38 = ATgetFirst((ATermList) t);
        if(((u_38 != NULL) && (u_38 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          u_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(r_38));
    if(((s_38 != NULL) && (s_38 != t)))
      _fail(t);
    else
      s_38 = t;
    t = term_j_30;
    if(((x_38 != NULL) && (x_38 != t)))
      _fail(t);
    else
      x_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_30, not_null(t_38));
    t = j_7(not_null(x_38), not_null(t_38), t);
    t = not_null(u_38);
    {
      ATerm h_39 (ATerm t)
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_33 = t;
            int h_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_39 = NULL;
                a_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_39;
                ;
                LocalPopChoice(h_33);
              }
            else
              {
                t = f_33;
                t = d_94(t);
                t = Cons_2_0(_id, h_39, t);
              }
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            {
              ATerm d_39 = NULL,e_39 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_39 = ATgetFirst((ATermList) t);
                  e_39 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(e_39), (ATerm) ATmakeAppl(sym_Undefined_1, d_39));
            }
          }
        return(t);
      }
      t = h_39(t);
      if(((w_38 != NULL) && (w_38 != t)))
        _fail(t);
      else
        w_38 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(w_38)), (ATerm) ATmakeAppl(sym_Program_1, not_null(t_38)));
      if(((d_5 != NULL) && (d_5 != t)))
        _fail(t);
      else
        d_5 = t;
      t = SSLsetAnnotations(not_null(d_5), not_null(s_38));
    }
  }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  if(match_string(t, "--help"))
    {
      t = t_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_39;
        }
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_l_31;
  u_39 = t;
  t = term_x_25;
  v_39 = t;
  t = term_i_33;
  t = j_7(u_39, v_39, t);
  t = term_j_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  if(((o_39 != NULL) && (o_39 != t)))
    _fail(t);
  else
    o_39 = t;
  t = term_p_29;
  if(((q_39 != NULL) && (q_39 != t)))
    _fail(t);
  else
    q_39 = t;
  t = term_q_29;
  if(((r_39 != NULL) && (r_39 != t)))
    _fail(t);
  else
    r_39 = t;
  t = (ATerm) ATempty;
  if(((s_39 != NULL) && (s_39 != t)))
    _fail(t);
  else
    s_39 = t;
  t = SSL_table_put(not_null(q_39), not_null(r_39), not_null(s_39));
  t = not_null(o_39);
  {
    ATerm a_8 (ATerm t)
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
          ;
          LocalPopChoice(r_33);
        }
      else
        {
          t = q_33;
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_8, e_8, f_8, t);
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm u_33 = t;
      int v_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_40 = NULL;
          c_40 = t;
          {
            ATerm w_33 = t;
            int z_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_17 = NULL;
                t = c_40;
                {
                  ATerm a_34 = t;
                  int d_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(d_34);
                    }
                  else
                    {
                      t = a_34;
                      t = fetch_1_0(g_8, t);
                    }
                  t = c_40;
                  t = default_system_usage_0_0(t);
                  t = term_t_28;
                  z_17 = t;
                  t = SSL_exit(z_17);
                }
                ;
                LocalPopChoice(z_33);
              }
            else
              {
                t = w_33;
                {
                  ATerm f_18 = NULL;
                  t = term_n_32;
                  t = get_config_0_0(t);
                  t = c_40;
                  t = default_system_about_0_0(t);
                  t = term_t_28;
                  f_18 = t;
                  t = SSL_exit(f_18);
                }
              }
          }
          ;
          LocalPopChoice(v_33);
        }
      else
        {
          t = u_33;
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
                ATerm h_8 (ATerm t)
                {
                  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,f_5 = NULL;
                  i_40 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      h_40 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(i_40);
                  g_40 = t;
                  t = h_40;
                  if(((m_39 != NULL) && (m_39 != t)))
                    _fail(t);
                  else
                    m_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, h_40);
                  f_5 = t;
                  t = SSLsetAnnotations(f_5, g_40);
                  return(t);
                }
                t = fetch_1_0(h_8, t);
                t = term_x_10;
                if(((e_40 != NULL) && (e_40 != t)))
                  _fail(t);
                else
                  e_40 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_i_34);
                if(((f_40 != NULL) && (f_40 != t)))
                  _fail(t);
                else
                  f_40 = t;
                t = SSL_printnl(not_null(e_40), not_null(f_40));
                t = (ATerm) ATmakeAppl(sym__2, term_x_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_39)), term_i_34));
                t = default_system_usage_0_0(t);
                t = term_b_11;
                if(((d_40 != NULL) && (d_40 != t)))
                  _fail(t);
                else
                  d_40 = t;
                t = SSL_exit(not_null(d_40));
                ;
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
              }
          }
        }
      if(((n_39 != NULL) && (n_39 != t)))
        _fail(t);
      else
        n_39 = t;
      t = term_p_29;
      if(((p_39 != NULL) && (p_39 != t)))
        _fail(t);
      else
        p_39 = t;
      t = SSL_table_destroy(not_null(p_39));
      t = not_null(n_39);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  t = parse_options_1_0(h_92, t);
  n_40 = t;
  t = term_o_34;
  q_40 = t;
  t = SSL_table_create(q_40);
  t = term_o_34;
  o_40 = t;
  t = term_q_34;
  p_40 = t;
  t = SSL_table_put(o_40, p_40, n_40);
  t = n_40;
  t = j_92(t);
  {
    ATerm r_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_92, t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = r_34;
        {
          ATerm v_34 = t;
          int y_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_34);
            }
          else
            {
              t = v_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            {
              ATerm d_35 = t;
              int e_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
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
                        t = Option_3_0(k_8, l_8, o_8, t);
                        ;
                        LocalPopChoice(g_35);
                      }
                    else
                      {
                        t = f_35;
                        {
                          ATerm h_35 = t;
                          int i_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(i_35);
                            }
                          else
                            {
                              t = h_35;
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
ATerm j_8 (ATerm t)
{
  t = xtc_io_1_0(u_8, t);
  return(t);
}
ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL;
  t = term_j_35;
  v_40 = t;
  t = term_x_25;
  w_40 = t;
  t = term_k_35;
  t = j_7(v_40, w_40, t);
  t = term_l_35;
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = term_m_35;
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_41 = NULL,e_41 = NULL;
      e_41 = t;
      if(match_cons(t, sym_FILE_1))
        {
          d_41 = ATgetArgument(t, 0);
          {
            ATerm n_18 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(e_41);
            n_18 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, d_41);
            j_5 = t;
            t = SSLsetAnnotations(j_5, n_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_41;
        }
      LocalPopChoice(o_35);
      t = xtc_transform_file_2_0(w_8, create_pp_table_args_0_0, t);
    }
  else
    {
      t = n_35;
      t = xtc_transform_term_2_0(y_8, create_pp_table_args_0_0, t);
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_t_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_8, default_usage_0_0, _id, j_8, t);
  return(t);
}
