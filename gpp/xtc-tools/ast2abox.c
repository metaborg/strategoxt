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
ATerm term_z_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_n_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_n_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_r_31;
ATerm term_l_31;
ATerm term_i_31;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_w_29;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_j_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_s_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_y_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_h_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_x_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_w_22;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_g_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_r_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_f_9;
void init_constant_terms (void)
{
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
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
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(1);
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
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_c_11, term_a_12);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_12, term_w_9, term_i_12);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_12, term_w_12, term_x_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_12, term_a_13, term_b_13);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_h_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_13, term_k_13, term_l_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_p_13, term_q_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_z_13, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_h_14, term_i_14);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_14, term_q_14, term_r_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_g_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_d_16, term_l_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_z_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_e_17, term_f_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_a_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_j_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_q_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_d_19, term_e_19);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_19, term_l_19, term_m_19);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_19, term_p_19, term_t_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_20, term_b_20, term_c_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_l_20, term_m_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_d_24);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_q_23);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_n_25);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_u_28);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_a_26);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_m_29, term_n_29);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym__2, term_x_32, term_a_26);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_a_26);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_l_31, term_a_26);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym__2, term_t_35, term_a_26);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
ATerm k_6 (ATerm j_12, ATerm k_12, ATerm);
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm o_0 (ATerm);
ATerm q_0 (ATerm);
ATerm u_0 (ATerm);
ATerm w_0 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm o_64 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm e_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm m_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm n_6 (ATerm b_60 (ATerm), ATerm h_157, ATerm r_15, ATerm);
ATerm p_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm);
ATerm o_6 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm q_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm b_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm r_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm s_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm x_1 (ATerm);
ATerm t_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm u_6 (ATerm e_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm n_12 (ATerm x_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_6 (ATerm p_15, ATerm);
ATerm w_6 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_14 (ATerm f_13, ATerm);
ATerm a_15 (ATerm u_13, ATerm v_13, ATerm w_13, ATerm);
ATerm b_15 (ATerm g_14, ATerm j_14, ATerm l_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm q_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm d_20 (ATerm z_18, ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm c_4 (ATerm);
ATerm g_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm x_6 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm w_21 (ATerm h_21, ATerm);
ATerm x_21 (ATerm m_21, ATerm n_21, ATerm o_21, ATerm);
ATerm j_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm y_6 (ATerm f_36, ATerm g_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm z_6 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm a_7 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm xtc_io_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_29 (ATerm o_29, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_7 (ATerm h_35, ATerm g_35, ATerm);
ATerm h_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm p_6 (ATerm);
ATerm d_7 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_7 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm i_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm need_help_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_7 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_7 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_82 (ATerm), ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm parse_options_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm v_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm k_6 (ATerm j_12, ATerm k_12, ATerm t)
{
  t = SSL_rename(j_12, k_12);
  return(t);
}
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,f_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_8 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_0 = NULL;
        t = d_1;
        t = s_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_f_9;
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_1, term_f_9);
        t = z_6(f_1, e_0, t);
        t = SSL_remove(f_1);
        t = term_f_9;
        ;
        LocalPopChoice(c_9);
      }
    else
      {
        t = z_8;
        {
          ATerm g_9 = t;
          int h_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_1 = NULL;
              t = d_1;
              t = s_0(t);
              l_1 = t;
              {
                ATerm i_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm n_1 = NULL;
                    n_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = n_1;
                      }
                    else
                      {
                        t = n_1;
                        if((f_1 != t))
                          {
                            _fail(t);
                          }
                        t = n_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_9;
                  }
                t = (ATerm) ATmakeAppl(sym__2, f_1, l_1);
                t = k_6(f_1, l_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, l_1);
              }
              ;
              LocalPopChoice(h_9);
            }
          else
            {
              t = g_9;
              t = d_1;
              t = s_0(t);
              if((f_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_1);
            }
        }
      }
  }
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_k_9;
  return(t);
}
ATerm q_0 (ATerm t)
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
  t = term_m_9;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL;
  j_1 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
      {
        ATerm o_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,o_1 = NULL,f_0 = NULL;
            o_1 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm s_9 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_1);
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
            f_0 = t;
            t = SSLsetAnnotations(f_0, m_1);
            LocalPopChoice(r_9);
            t = xtc_transform_file_2_0(b_0, c_0, t);
          }
        else
          {
            t = o_9;
            t = xtc_transform_term_2_0(o_0, q_0, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(a_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        k_1 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = k_1;
    t = if_verbose2_1_0(u_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_1, term_w_9);
        t = geq_0_0(t);
        t = q_1;
        t = y_75(t);
        ;
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = q_1;
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
  ATerm y_1 = NULL,z_1 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,t_0 = NULL;
  z_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_9), term_y_9), z_1);
  f_2 = t;
  t = SSL_concat_strings(f_2);
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_10);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATinsert(ATempty, term_a_10));
  t = y_6(e_2, d_2, t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, z_1);
  z_2 = t;
  if(match_cons(t, sym__2))
    {
      ATerm b_10 = ATgetArgument(t, 0);
      ATerm c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_2);
  u_2 = t;
  t = SSL_modification_time(y_1);
  v_2 = t;
  t = SSL_modification_time(z_1);
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, x_2);
  t_0 = t;
  t = SSLsetAnnotations(t_0, u_2);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, y_1, z_1);
  c_2 = t;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      ATerm d_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_10 = ATgetArgument(t, 1);
        if(((ATgetType(h_10) == AT_LIST) && !(ATisEmpty(h_10))))
          {
            b_2 = ATgetFirst((ATermList) h_10);
            {
              ATerm j_10 = (ATerm) ATgetNext((ATermList) h_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_2;
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_64 (ATerm), ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_64(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          ATerm p_3 = NULL,q_3 = NULL,s_3 = NULL,a_2 = NULL,i_2 = NULL,v_0 = NULL;
          p_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_3 = ATgetFirst((ATermList) t);
              s_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_3);
          a_2 = t;
          t = s_3;
          t = t_3(t);
          i_2 = t;
          t = (ATerm) ATinsert(CheckATermList(i_2), q_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, a_2);
        }
      }
    return(t);
  }
  t = t_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL;
      o_2 = t;
      t = term_r_10;
      p_2 = t;
      t = SSL_explode_string(p_2);
      n_2 = t;
      t = SSL_explode_string(o_2);
      {
        ATerm a_1 (ATerm t)
        {
          if((n_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
        t = o_2;
      }
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
            s_2 = t;
            t = term_v_10;
            t_2 = t;
            t = SSL_explode_string(t_2);
            r_2 = t;
            t = SSL_explode_string(s_2);
            {
              ATerm c_1 (ATerm t)
              {
                if((r_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
              t = s_2;
            }
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
            {
              ATerm a_4 = NULL,b_4 = NULL,d_4 = NULL,e_4 = NULL;
              a_4 = t;
              t = term_w_10;
              d_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_y_10);
              e_4 = t;
              t = SSL_printnl(d_4, e_4);
              t = term_c_11;
              b_4 = t;
              t = SSL_exit(b_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_y_10);
            }
          }
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm g_11 = t;
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
      t = g_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm f_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  f_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_4), term_i_11);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(e_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(g_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm i_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_k_11;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm k_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_10);
      k_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_4, (ATerm) ATinsert(ATempty, term_a_10));
      t = y_6(i_4, k_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm m_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm l_4 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_4);
  return(t);
}
ATerm n_6 (ATerm b_60 (ATerm), ATerm h_157, ATerm r_15, ATerm t)
{
  ATerm m_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_157, term_m_11);
  t = open_stream_0_0(t);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_4, r_15);
  t = b_60(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(match_cons(n_11, sym_Stream_1))
        {
          r_4 = ATgetArgument(n_11, 0);
        }
      else
        _fail(t);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(r_4, s_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_4 = NULL,q_4 = NULL;
  o_4 = t;
  t = xtc_new_file_0_0(t);
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_4, o_4);
  t = n_6(p_1, q_4, o_4, t);
  t = SSL_close_file(q_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, q_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_78, s_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm o_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL,v_5 = NULL,w_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      s_5 = ATgetArgument(t, 0);
      {
        ATerm i_3 = NULL,j_3 = NULL;
        t = SSL_int_to_string(s_5);
        i_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_11), i_3), term_o_11);
        j_3 = t;
        t = SSL_concat_strings(j_3);
      }
    }
  else
    {
      ATerm p_4 = NULL,t_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          s_5 = ATgetArgument(t, 0);
          v_5 = ATgetArgument(t, 1);
          w_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_5);
      p_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_5), term_s_11), p_4), term_q_11), s_5);
      t_4 = t;
      t = SSL_concat_strings(t_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm a_6 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = g_64(t);
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    return(t);
  }
  t = fetch_1_0(r_1, t);
  t = not_null(a_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_11 = ATgetArgument(t, 0);
              if((c_6 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_11 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_20), term_e_20), term_y_19), term_u_19), term_n_19), term_i_19), term_y_18), term_s_18), term_l_18), term_d_18), term_x_17), term_t_17), term_o_17), term_g_17), term_b_17), term_x_16), term_m_16), term_y_15), term_s_14), term_k_14), term_d_14), term_s_13), term_n_13), term_i_13), term_c_13), term_y_12), term_u_12), term_d_12);
        t = fetch_elem_1_0(t_1, t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, c_6);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm q_6 = NULL,t_7 = NULL;
  q_6 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            t_7 = ATgetArgument(t, 1);
            {
              ATerm u_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_20);
        {
          ATerm v_20 = t;
          int w_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_5 = NULL,l_5 = NULL,o_5 = NULL;
              t = t_7;
              {
                ATerm x_20 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_20;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                g_5 = t;
                t = term_w_10;
                l_5 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, g_5), term_a_21);
                o_5 = t;
                t = SSL_printnl(l_5, o_5);
                t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATinsert(ATinsert(ATempty, g_5), term_a_21));
              }
              ;
              LocalPopChoice(w_20);
            }
          else
            {
              t = v_20;
              t = q_6;
            }
        }
      }
    else
      {
        t = r_20;
        t = q_6;
      }
    t = q_6;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm q_58 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,m_8 = NULL;
  m_8 = t;
  t = fork_0_0(t);
  i_8 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = m_8;
        t = q_58(t);
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = SSL_waitpid(i_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            if(((ATgetType(d_21) != AT_INT) || (ATgetInt((ATermInt) d_21) != 0)))
              _fail(t);
            {
              ATerm e_21 = ATgetArgument(t, 1);
            }
            {
              ATerm f_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = m_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm o_8 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm p_8 = NULL,r_8 = NULL;
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), p_8);
    t = g_7(not_null(o_8), p_8, t);
    r_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_8, r_8);
    return(t);
  }
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSL_table_keys(o_8);
  t = map_1_0(u_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm t_8 = NULL;
  t_8 = t;
  {
    ATerm g_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_8, term_p_19);
        t = geq_0_0(t);
        t = t_8;
        t = b_76(t);
        ;
        LocalPopChoice(i_21);
      }
    else
      {
        t = g_21;
        t = t_8;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm b_9 = NULL;
  b_9 = t;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_9 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        d_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_9, term_d_16);
        t = geq_0_0(t);
        t = b_9;
        t = a_76(t);
        ;
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = b_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  {
    ATerm l_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_9, term_a_13);
        t = geq_0_0(t);
        t = j_9;
        t = c_76(t);
        ;
        LocalPopChoice(p_21);
      }
    else
      {
        t = l_21;
        t = j_9;
      }
  }
  return(t);
}
ATerm r_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = c_68(t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm n_9 = NULL;
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, n_9);
      t = b_68(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = l_22;
  }
  return(t);
}
ATerm s_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm m_10 (ATerm t)
  {
    ATerm e_10 = NULL,f_10 = NULL,i_10 = NULL;
    e_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_10 = ATgetFirst((ATermList) t);
            i_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_21 = t;
          int r_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_10;
              {
                ATerm w_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = r_6(y_67, w_1, f_10, i_10, t);
                t = m_10(t);
              }
              ;
              LocalPopChoice(r_21);
            }
          else
            {
              t = q_21;
              {
                ATerm d_6 = NULL,g_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(e_10);
                d_6 = t;
                t = i_10;
                t = m_10(t);
                g_6 = t;
                t = (ATerm) ATinsert(CheckATermList(g_6), f_10);
                z_0 = t;
                t = SSLsetAnnotations(z_0, d_6);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = m_10(t);
  return(t);
}
ATerm x_1 (ATerm t)
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
ATerm t_6 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,t_10 = NULL;
  p_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm s_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_22 = ATgetArgument(t, 0);
            ATerm e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = g_7(y_33, z_33, t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = s_21;
        t = (ATerm) ATempty;
      }
    t_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_10, a_34);
    t = s_6(x_1, t_10, a_34, t);
    q_10 = t;
    t = SSL_table_put(y_33, z_33, q_10);
    t = p_10;
  }
  return(t);
}
ATerm u_6 (ATerm e_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm a_11 = NULL,f_11 = NULL;
    if(match_cons(t, sym__2))
      {
        a_11 = ATgetArgument(t, 0);
        f_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, a_11, f_11);
    t = e_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(g_2, t);
  return(t);
}
ATerm n_12 (ATerm x_11, ATerm t)
{
  t = SSL_fclose(x_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_12 = NULL,e_12 = NULL;
  e_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_12 = ATgetArgument(t, 0);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_12);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = n_12(e_12, t);
          }
      }
    }
  else
    {
      t = n_12(e_12, t);
    }
  return(t);
}
ATerm v_6 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm w_6 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm o_12 = NULL;
  t = SSL_fopen(n_36, o_36);
  o_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_stdin_stream();
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_12 = NULL;
  t = SSL_stdout_stream();
  r_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_12 = NULL;
  t = SSL_stderr_stream();
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
  return(t);
}
ATerm z_14 (ATerm f_13, ATerm t)
{
  ATerm m_13 = NULL;
  t = SSL_explode_term(f_13);
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
          {
            m_13 = ATgetFirst((ATermList) o_22);
            {
              ATerm p_22 = (ATerm) ATgetNext((ATermList) o_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_15 (ATerm u_13, ATerm v_13, ATerm w_13, ATerm t)
{
  ATerm x_13 = NULL,a_14 = NULL,b_14 = NULL,e_14 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(w_13);
  b_14 = t;
  t = u_13;
  if(match_cons(t, sym_Path_1))
    {
      e_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_14, v_13);
  b_1 = t;
  t = SSLsetAnnotations(b_1, b_14);
  if(match_cons(t, sym__2))
    {
      x_13 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(x_13, a_14, t);
  return(t);
}
ATerm b_15 (ATerm g_14, ATerm j_14, ATerm l_14, ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL,t_14 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(l_14);
  o_14 = t;
  t = SSL_is_string(g_14);
  t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_14, j_14);
  h_1 = t;
  t = SSLsetAnnotations(h_1, o_14);
  if(match_cons(t, sym__2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_6(m_14, n_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_22 = ATgetArgument(t, 0);
      ATerm r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_14 = t;
  if(match_cons(t, sym__2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_14(w_14, t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm u_22 = t;
              int v_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_15(x_14, y_14, w_14, t);
                  ;
                  LocalPopChoice(v_22);
                }
              else
                {
                  t = u_22;
                  t = b_15(x_14, y_14, w_14, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_14(w_14, t);
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL;
      f_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_15, term_z_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      t = debug_1_0(h_2, t);
      _fail(t);
    }
  d_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(e_15, t);
  c_15 = t;
  t = d_15;
  t = fclose_0_0(t);
  t = c_15;
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_a_23;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_b_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_15 = NULL,i_15 = NULL;
      h_15 = t;
      t = (ATerm) ATinsert(ATempty, term_e_23);
      i_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATinsert(ATempty, term_e_23));
      t = y_6(h_15, i_15, t);
      LocalPopChoice(d_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = c_23;
      {
        ATerm g_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_23 = t;
            if((PushChoice() == 0))
              {
                ATerm l_15 = NULL,m_15 = NULL;
                l_15 = t;
                t = (ATerm) ATinsert(ATempty, term_a_10);
                m_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, l_15, (ATerm) ATinsert(ATempty, term_a_10));
                t = y_6(l_15, m_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_23;
              }
            t = debug_1_0(j_2, t);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = g_23;
            t = debug_1_0(k_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = debug_1_0(m_2, t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_k_23;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  t = term_w_10;
  h_16 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  i_16 = t;
  t = SSL_printnl(h_16, i_16);
  t = g_16;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__3))
    {
      j_16 = ATgetArgument(t, 0);
      k_16 = ATgetArgument(t, 1);
      n_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_6(j_16, k_16, n_16, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  t = term_w_10;
  p_16 = t;
  t = (ATerm) ATinsert(ATempty, term_n_23);
  q_16 = t;
  t = SSL_printnl(p_16, q_16);
  t = o_16;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  r_16 = t;
  t = term_w_10;
  s_16 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  t_16 = t;
  t = SSL_printnl(s_16, t_16);
  t = r_16;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,a_16 = NULL,b_16 = NULL;
  n_15 = t;
  t = if_verbose5_1_0(l_2, t);
  {
    ATerm o_23 = t;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,f_16 = NULL;
        t = term_p_23;
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, n_15);
        f_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Imported_1, n_15));
        t = g_7(e_16, f_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_23;
      }
    s_15 = t;
    t = term_p_23;
    x_15 = t;
    t = term_q_23;
    a_16 = t;
    t = (ATerm) ATinsert(ATempty, n_15);
    b_16 = t;
    t = SSL_table_put(x_15, a_16, b_16);
    t = s_15;
    t = if_verbose4_1_0(q_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_3, t);
    o_15 = t;
    t = term_p_23;
    w_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_23, o_15);
    t = u_6(b_3, w_15, o_15, t);
    t = if_verbose6_1_0(c_3, t);
    t = term_p_23;
    t_15 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, n_15);
    u_15 = t;
    t = (ATerm) ATempty;
    v_15 = t;
    t = SSL_table_put(t_15, u_15, v_15);
    t = (ATerm) ATmakeAppl(sym__3, term_p_23, (ATerm)ATmakeAppl(sym_Imported_1, n_15), (ATerm) ATempty);
    t = if_verbose4_1_0(e_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,n_17 = NULL,q_17 = NULL;
  l_17 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_17;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_17 = ATgetFirst((ATermList) t);
          q_17 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 = NULL,c_8 = NULL,e_8 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(l_17);
            z_7 = t;
            t = n_17;
            t = q_71(t);
            c_8 = t;
            t = q_17;
            t = filter_1_0(q_71, t);
            e_8 = t;
            t = (ATerm) ATinsert(CheckATermList(e_8), c_8);
            w_2 = t;
            t = SSLsetAnnotations(w_2, z_7);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            t = q_17;
            t = filter_1_0(q_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm b_18 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        t = b_18(t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
      }
    return(t);
  }
  t = b_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_18 = NULL;
            t = term_a_24;
            c_18 = t;
            t = SSL_getenv(c_18);
            ;
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm m_18 = NULL,o_18 = NULL;
  t = term_p_23;
  m_18 = t;
  t = term_d_24;
  o_18 = t;
  t = term_f_24;
  t = g_7(m_18, o_18, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_24 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_24;
      }
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = debug_1_0(o_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_18 = NULL;
  t = if_verbose5_1_0(g_3, t);
  g_18 = t;
  {
    ATerm i_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_18 = NULL,i_18 = NULL;
        t = term_p_23;
        h_18 = t;
        t = term_q_23;
        i_18 = t;
        t = term_n_24;
        t = g_7(h_18, i_18, t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = i_24;
        {
          ATerm k_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          k_18 = t;
          t = repeat_1_0(l_3, t);
          t = k_18;
        }
      }
    t = g_18;
    t = if_verbose5_1_0(n_3, t);
  }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm d_20 (ATerm z_18, ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,f_19 = NULL;
  t = term_p_23;
  c_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, z_18);
  f_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Tool_1, z_18));
  t = g_7(c_19, f_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_24 = ATgetFirst((ATermList) t);
      if(match_cons(q_24, sym__2))
        {
          ATerm t_24 = ATgetArgument(q_24, 0);
          b_19 = ATgetArgument(q_24, 1);
        }
      else
        _fail(t);
      {
        ATerm r_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_19;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_p_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_y_24;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_19 = NULL,h_19 = NULL,j_19 = NULL;
      t = if_verbose5_1_0(r_3, t);
      t = xtc_load_0_0(t);
      j_19 = t;
      if(match_cons(t, sym__2))
        {
          g_19 = ATgetArgument(t, 0);
          h_19 = ATgetArgument(t, 1);
          {
            ATerm b_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
                t = term_p_23;
                r_19 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, g_19);
                s_19 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Tool_1, g_19));
                t = g_7(r_19, s_19, t);
                {
                  ATerm w_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((h_19 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          q_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_3, t);
                  t = not_null(q_19);
                }
                ;
                LocalPopChoice(d_25);
              }
            else
              {
                t = b_25;
                t = d_20(j_19, t);
              }
          }
        }
      else
        {
          t = d_20(j_19, t);
        }
      t = if_verbose5_1_0(x_3, t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm z_19 = NULL,s_8 = NULL,u_8 = NULL;
        z_19 = t;
        t = term_w_10;
        s_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), z_19), term_f_25);
        u_8 = t;
        t = SSL_printnl(s_8, u_8);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_25), z_19), term_f_25);
        t = if_verbose5_1_0(c_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  h_20 = t;
  t = i_78(t);
  t = xtc_find_0_0(t);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_20, h_20);
      t = o_6(g_20, h_20, t);
      t = term_h_25;
      i_20 = t;
      t = SSL_exit(i_20);
      return(t);
    }
    t = fork_and_wait_1_0(h_4, t);
    t = h_20;
  }
  return(t);
}
ATerm x_6 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,y_20 = NULL;
  o_20 = t;
  t = t_74(t);
  j_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_20, k_32, i_32);
  t = h_7(j_20, k_32, i_32, t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = term_n_25;
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_20, term_n_25);
        t = g_7(j_20, z_20, t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_20 = ATgetFirst((ATermList) t);
        n_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_25;
    p_20 = t;
    t = (ATerm) ATinsert(CheckATermList(n_20), (ATerm) ATinsert(CheckATermList(k_20), k_32));
    y_20 = t;
    t = SSL_table_put(j_20, p_20, y_20);
    t = o_20;
  }
  return(t);
}
ATerm w_21 (ATerm h_21, ATerm t)
{
  t = h_21;
  {
    ATerm o_25 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_25 = ATgetArgument(t, 0);
            ATerm r_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_25;
      }
    t = term_s_25;
    t = debug_1_0(j_4, t);
    t = (ATerm) ATmakeAppl(sym__2, h_21, term_m_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm x_21 (ATerm m_21, ATerm n_21, ATerm o_21, ATerm t)
{
  t = SSL_open_file(m_21, n_21);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
      {
        ATerm y_25 = t;
        int z_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_21(t_21, t);
            ;
            LocalPopChoice(z_25);
          }
        else
          {
            t = y_25;
            t = x_21(u_21, v_21, t_21, t);
          }
      }
    }
  else
    {
      t = w_21(t_21, t);
    }
  return(t);
}
ATerm y_6 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  t = term_a_26;
  t = new_0_0(t);
  z_21 = t;
  t = term_b_26;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, term_b_26);
  t = f_7(z_21, a_22, t);
  b_22 = t;
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_10);
        d_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_22, (ATerm) ATinsert(ATempty, term_a_10));
        t = y_6(b_22, d_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = b_22;
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  t = new_file_0_0(t);
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, term_m_11);
  t = open_file_0_0(t);
  t = term_a_26;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, term_a_26);
  t = x_6(n_4, j_22, k_22, t);
  t = j_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm f_23 = NULL,h_23 = NULL;
  f_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm a_9 = NULL,e_9 = NULL;
      t = f_23;
      t = xtc_new_file_0_0(t);
      a_9 = t;
      t = r_0(t);
      e_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_9, (ATerm) ATinsert(ATinsert(ATempty, a_9), term_g_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(a_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_9);
    }
  else
    {
      ATerm p_9 = NULL,q_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          h_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_23;
      t = xtc_new_file_0_0(t);
      p_9 = t;
      t = r_0(t);
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, p_9), term_g_26), h_23), term_j_26));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(p_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_9);
    }
  return(t);
}
ATerm z_6 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,e_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_10 = NULL;
        t = c_24;
        t = n_0(t);
        g_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = g_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = g_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, e_24, g_10);
        t = z_6(e_24, g_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = k_26;
        {
          ATerm q_26 = t;
          int r_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = NULL;
              t = c_24;
              t = n_0(t);
              x_10 = t;
              {
                ATerm s_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_11 = NULL;
                    b_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_11;
                          }
                        else
                          {
                            t = b_11;
                            if((e_24 != t))
                              {
                                _fail(t);
                              }
                            t = b_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_24, x_10);
                t = z_6(e_24, x_10, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
              }
              ;
              LocalPopChoice(r_26);
            }
          else
            {
              t = q_26;
              t = c_24;
              t = n_0(t);
              if((e_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_24);
            }
        }
      }
  }
  return(t);
}
ATerm a_7 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  k_24 = t;
  {
    ATerm w_26 = t;
    int x_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = g_7(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_26 = ATgetFirst((ATermList) t);
            j_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_26);
        t = SSL_table_put(g_33, h_33, j_24);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, j_24);
      }
    else
      {
        t = w_26;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = k_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm m_24 = NULL,p_24 = NULL,s_24 = NULL,u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = q_74(t);
  s_24 = t;
  {
    ATerm z_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_24 = NULL;
        t = term_n_25;
        w_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, term_n_25);
        t = g_7(s_24, w_24, t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = z_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_24 = ATgetFirst((ATermList) t);
        m_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_25;
    v_24 = t;
    t = SSL_table_put(s_24, v_24, m_24);
    t = p_24;
    {
      ATerm u_4 (ATerm t)
      {
        ATerm x_24 = NULL;
        x_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_24, x_24);
        t = a_7(s_24, x_24, t);
        return(t);
      }
      t = map_1_0(u_4, t);
      t = u_24;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      t = m_75(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
      t = m_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,e_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  e_25 = t;
  t = p_74(t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_25);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            ATerm q_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_25;
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_25);
        t = g_7(c_25, p_25, t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = (ATerm) ATempty;
      }
    i_25 = t;
    t = term_n_25;
    j_25 = t;
    t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATempty);
    k_25 = t;
    t = SSL_table_put(c_25, j_25, k_25);
    t = e_25;
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
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(e_26);
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = e_26;
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  ATerm w_4 (ATerm t)
  {
    ATerm u_25 = NULL;
    u_25 = t;
    {
      ATerm x_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,x_25 = NULL;
          t = term_f_26;
          v_25 = t;
          t = term_n_25;
          x_25 = t;
          t = term_a_28;
          t = g_7(v_25, x_25, t);
          ;
          LocalPopChoice(z_27);
        }
      else
        {
          t = x_27;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_25 != NULL) && (t_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_25 = ATgetFirst((ATermList) t);
          {
            ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = t_25;
      t = map_1_0(x_4, t);
      t = u_25;
      t = end_scope_1_0(y_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(v_4, t);
  t = restore_always_2_0(u_77, w_4, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm g_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_26;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = g_28;
      t = term_f_9;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm a_5 (ATerm t)
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_26 = NULL;
        t = term_j_26;
        t = get_config_0_0(t);
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_26);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        t = term_k_11;
      }
    t = v_77(t);
    t = copy_to_1_0(b_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL;
  i_26 = t;
  t = term_a_26;
  t = whoami_0_0(t);
  l_26 = t;
  t = term_w_10;
  n_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_28), l_26), term_n_28);
  p_26 = t;
  t = SSL_printnl(n_26, p_26);
  t = term_c_11;
  m_26 = t;
  t = SSL_exit(m_26);
  t = i_26;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  if(match_string(t, "-k"))
    {
      t = t_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_26;
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,a_27 = NULL;
  u_26 = t;
  t = SSL_string_to_int(u_26);
  v_26 = t;
  t = term_s_28;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_28, v_26);
  t = j_7(a_27, v_26, t);
  t = u_26;
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_t_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, f_5, h_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm c_27 = NULL;
  c_27 = t;
  if(match_string(t, "-S"))
    {
      t = c_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_27;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL;
  t = term_v_9;
  d_27 = t;
  t = term_u_28;
  e_27 = t;
  t = term_v_28;
  t = j_7(d_27, e_27, t);
  t = term_w_28;
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  t = SSL_string_to_int(h_27);
  i_27 = t;
  t = term_v_9;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_9, i_27);
  t = j_7(j_27, i_27, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_27);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  t = term_z_28;
  k_27 = t;
  t = term_a_26;
  l_27 = t;
  t = term_a_29;
  t = j_7(k_27, l_27, t);
  t = term_b_29;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_5, k_5, m_5, t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_5, p_5, q_5, t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            t = Option_3_0(t_5, u_5, x_5, t);
          }
      }
    }
  return(t);
}
ATerm j_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm m_27 = NULL;
  t = term_l_29;
  m_27 = t;
  t = SSL_table_put(m_27, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_l_29, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,u_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_27 = NULL,w_27 = NULL,y_27 = NULL;
      t = term_a_26;
      t = h_0(t);
      v_27 = t;
      t = term_m_29;
      w_27 = t;
      t = term_n_29;
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_29, term_n_29, v_27);
      t = h_7(w_27, y_27, v_27, t);
      _fail(t);
    }
  else
    {
      ATerm b_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_27 = ATgetFirst((ATermList) t);
          u_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_27;
      t = d_0(t);
      t = term_a_26;
      t = g_0(t);
      b_28 = t;
      t = (ATerm) ATinsert(CheckATermList(u_27), b_28);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm d_28 = NULL;
  d_28 = t;
  if(match_string(t, "-o"))
    {
      t = d_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_28;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  e_28 = t;
  t = term_g_26;
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_26, e_28);
  t = j_7(f_28, e_28, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_28);
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_5, z_5, b_6, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  if(match_string(t, "-i"))
    {
      t = h_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_28;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  j_28 = t;
  t = term_j_26;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_26, j_28);
  t = j_7(k_28, j_28, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_28);
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, h_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm i_29 (ATerm t)
  {
    ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
    h_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_29 = ATgetFirst((ATermList) t);
        g_29 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_11 = NULL,r_11 = NULL,d_3 = NULL;
          t = SSLgetAnnotations(h_29);
          l_11 = t;
          t = g_29;
          t = i_29(t);
          r_11 = t;
          t = (ATerm) ATinsert(CheckATermList(r_11), f_29);
          d_3 = t;
          t = SSLsetAnnotations(d_3, l_11);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_29;
        t = k_64(t);
      }
    return(t);
  }
  t = i_29(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_28;
    }
  else
    {
      ATerm i_6 (ATerm t)
      {
        t = not_null(q_28);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_28 = ATgetFirst((ATermList) t);
          if(((q_28 != NULL) && (q_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_28;
      t = at_end_1_0(i_6, t);
    }
  return(t);
}
ATerm z_29 (ATerm o_29, ATerm t)
{
  ATerm p_29 = NULL;
  t = SSL_explode_term(o_29);
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_29;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym__2))
    {
      r_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
      {
        ATerm y_29 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_6 (ATerm t)
            {
              t = u_29;
              return(t);
            }
            t = r_29;
            t = at_end_1_0(j_6, t);
            ;
            LocalPopChoice(c_30);
          }
        else
          {
            t = y_29;
            t = z_29(v_29, t);
          }
      }
    }
  else
    {
      t = z_29(v_29, t);
    }
  return(t);
}
ATerm b_7 (ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,d_30 = NULL;
  t = h_35;
  {
    ATerm e_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = e_30;
        t = (ATerm) ATempty;
      }
    b_30 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_35, b_30);
    t = conc_0_0(t);
    a_30 = t;
    t = term_l_29;
    d_30 = t;
    t = SSL_table_put(d_30, h_35, a_30);
    t = (ATerm) ATmakeAppl(sym__3, term_l_29, h_35, a_30);
  }
  return(t);
}
ATerm h_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,j_30 = NULL;
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm i_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_30 = ATgetArgument(t, 0);
            ATerm m_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = g_7(b_33, c_33, t);
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = i_30;
        t = (ATerm) ATempty;
      }
    h_30 = t;
    t = (ATerm) ATinsert(CheckATermList(h_30), a_33);
    j_30 = t;
    t = SSL_table_put(b_33, c_33, j_30);
    t = g_30;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_31 = NULL,e_31 = NULL,g_31 = NULL;
      t = term_a_26;
      t = m_0(t);
      d_31 = t;
      t = term_m_29;
      e_31 = t;
      t = term_n_29;
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_29, term_n_29, d_31);
      t = h_7(e_31, g_31, d_31, t);
      _fail(t);
    }
  else
    {
      ATerm m_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_30 = ATgetFirst((ATermList) t);
          z_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_31 = ATgetFirst((ATermList) t);
          c_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_30;
      t = k_0(t);
      t = b_31;
      t = l_0(t);
      m_31 = t;
      t = (ATerm) ATinsert(CheckATermList(c_31), m_31);
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
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  t = term_i_11;
  o_31 = t;
  t = (ATerm) ATinsert(ATempty, n_31);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, (ATerm) ATinsert(ATempty, n_31));
  t = b_7(o_31, p_31, t);
  t = n_31;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_6, p_6, d_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_26;
  t = whoami_0_0(t);
  q_31 = t;
  t = term_w_10;
  t_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_30), q_31);
  u_31 = t;
  t = SSL_printnl(t_31, u_31);
  t = term_c_11;
  s_31 = t;
  t = SSL_exit(s_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_30;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_7 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_31;
      t = m_70(t);
    }
  else
    {
      ATerm b_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_31 = ATgetFirst((ATermList) t);
          y_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_31;
      t = foldr_2_0(m_70, n_70, t);
      b_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_31, b_32);
      t = n_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_u_28;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm q_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__2))
    {
      q_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(q_12, t_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_32 = NULL,z_11 = NULL,c_12 = NULL;
  t = times_0_0(t);
  c_12 = t;
  t = SSL_explode_term(c_12);
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      z_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11;
  t = foldr_2_0(e_7, i_7, t);
  p_32 = t;
  t = SSL_TicksToSeconds(p_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  if(match_cons(t, sym__2))
    {
      e_34 = ATgetArgument(t, 0);
      f_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_34;
        if((e_34 != t))
          {
            _fail(t);
          }
        t = d_34;
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
        {
          ATerm v_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_34, f_34);
              ;
              LocalPopChoice(a_31);
            }
          else
            {
              t = v_30;
              t = SSL_gtr(e_34, f_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  {
    ATerm f_31 = t;
    int h_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_34 = NULL;
        t = term_v_9;
        t = get_config_0_0(t);
        r_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_34, term_c_11);
        t = geq_0_0(t);
        t = p_34;
        t = x_75(t);
        ;
        LocalPopChoice(h_31);
      }
    else
      {
        t = f_31;
        t = p_34;
      }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,y_34 = NULL,e_35 = NULL;
  t = run_time_0_0(t);
  v_34 = t;
  t = term_a_26;
  t = whoami_0_0(t);
  w_34 = t;
  t = term_w_10;
  y_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_31), v_34), term_q_11), w_34);
  e_35 = t;
  t = SSL_printnl(y_34, e_35);
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_31), v_34), term_q_11), w_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_28;
  p_35 = t;
  t = SSL_exit(p_35);
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_36;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_36 = ATgetArgument(t, 0);
          {
            ATerm g_13 = NULL,f_3 = NULL;
            t = SSLgetAnnotations(b_36);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_36);
            f_3 = t;
            t = SSLsetAnnotations(f_3, g_13);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_36;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_80 (ATerm), ATerm t)
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
  t = c_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,h_36 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_36 = ATgetFirst((ATermList) t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_36 = NULL,s_36 = NULL;
        ATerm m_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_36)), not_null(s_36));
          return(t);
        }
        t = h_36;
        t = j_0(t);
        if(((r_36 != NULL) && (r_36 != t)))
          _fail(t);
        else
          r_36 = t;
        t = e_36;
        t = i_0(t);
        if(((s_36 != NULL) && (s_36 != t)))
          _fail(t);
        else
          s_36 = t;
        t = h_36;
        t = reverse_acc_2_0(i_0, m_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_26;
      t = j_0(t);
    }
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,h_3 = NULL;
  y_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_36);
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_36);
  h_3 = t;
  t = SSLsetAnnotations(h_3, w_36);
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_37), term_r_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  ATerm v_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = v_31;
      t = fetch_1_0(n_7, t);
    }
  t = term_a_32;
  t = echo_0_0(t);
  t = term_m_29;
  u_36 = t;
  t = term_n_29;
  v_36 = t;
  t = term_c_32;
  t = g_7(u_36, v_36, t);
  t = reverse_acc_2_0(_id, o_7, t);
  t = map_1_0(p_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm p_38 (ATerm t)
  {
    ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
    m_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_38 = ATgetFirst((ATermList) t);
        o_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL,y_13 = NULL,m_3 = NULL;
          t = SSLgetAnnotations(m_38);
          r_13 = t;
          t = n_38;
          t = e_64(t);
          y_13 = t;
          t = (ATerm) ATinsert(CheckATermList(o_38), y_13);
          m_3 = t;
          t = SSLsetAnnotations(m_3, r_13);
          ;
          LocalPopChoice(e_32);
        }
      else
        {
          t = d_32;
          {
            ATerm q_15 = NULL,c_16 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(m_38);
            q_15 = t;
            t = o_38;
            t = p_38(t);
            c_16 = t;
            t = (ATerm) ATinsert(CheckATermList(c_16), n_38);
            v_3 = t;
            t = SSLsetAnnotations(v_3, q_15);
          }
        }
    }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_32 = ATgetFirst((ATermList) t);
                ATerm j_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_38;
          }
        ;
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
        t = (ATerm) ATinsert(ATempty, v_38);
      }
    w_38 = t;
    t = term_f_9;
    x_38 = t;
    t = SSL_printnl(x_38, w_38);
    t = v_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_30;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm f_7 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,i_39 = NULL,j_39 = NULL;
  b_39 = t;
  t = z_59(t);
  c_39 = t;
  t = term_w_10;
  i_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_39), c_39);
  j_39 = t;
  t = SSL_printnl(i_39, j_39);
  t = b_39;
  return(t);
}
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm t)
{
  ATerm z_39 (ATerm t)
  {
    ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
    w_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_39;
      }
    else
      {
        ATerm d_17 = NULL,h_17 = NULL,m_17 = NULL,z_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_39 = ATgetFirst((ATermList) t);
            y_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_39);
        d_17 = t;
        t = x_39;
        t = u_63(t);
        h_17 = t;
        t = y_39;
        t = z_39(t);
        m_17 = t;
        t = (ATerm) ATinsert(CheckATermList(m_17), h_17);
        z_3 = t;
        t = SSLsetAnnotations(z_3, d_17);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_40 = NULL;
      h_40 = t;
      t = SSL_is_string(h_40);
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = o_32;
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_7, t);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            {
              ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
              n_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_40 = ATgetArgument(t, 0);
                  t = o_40;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_40 = ATgetArgument(t, 0);
                      t = o_40;
                      {
                        ATerm t_32 = t;
                        int u_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_32);
                          }
                        else
                          {
                            t = t_32;
                            t = debug_1_0(r_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_40 = NULL,u_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_40 = ATgetArgument(t, 0);
                          p_40 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_40;
                      t = eval_config_0_0(t);
                      t_40 = t;
                      t = p_40;
                      t = eval_config_0_0(t);
                      u_40 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_40, u_40);
                      t = f_7(t_40, u_40, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL;
  y_40 = t;
  t = term_l_29;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, y_40);
  t = g_7(z_40, y_40, t);
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_41 = NULL,b_41 = NULL;
        t = eval_config_0_0(t);
        a_41 = t;
        t = term_l_29;
        b_41 = t;
        t = SSL_table_put(b_41, y_40, a_41);
        t = a_41;
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
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
ATerm u_7 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_x_32;
  e_41 = t;
  t = term_a_26;
  f_41 = t;
  t = term_y_32;
  t = j_7(e_41, f_41, t);
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = term_z_32;
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
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  t = term_x_32;
  i_41 = t;
  t = term_a_26;
  j_41 = t;
  t = term_y_32;
  t = j_7(i_41, j_41, t);
  t = term_d_33;
  g_41 = t;
  t = term_a_26;
  h_41 = t;
  t = term_e_33;
  t = j_7(g_41, h_41, t);
  t = term_f_33;
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = term_i_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_7, u_7, v_7, t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      t = Option_3_0(w_7, x_7, y_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,z_4 = NULL;
  p_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_41 = ATgetFirst((ATermList) t);
      m_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_41);
  k_41 = t;
  t = l_41;
  t = m_51(t);
  n_41 = t;
  t = m_41;
  t = n_51(t);
  o_41 = t;
  t = (ATerm) ATinsert(CheckATermList(o_41), n_41);
  z_4 = t;
  t = SSLsetAnnotations(z_4, k_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL,c_5 = NULL;
  u_41 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_33;
        t = a_82(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
      }
    t = u_41;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_41 = ATgetFirst((ATermList) t);
        x_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_41);
    v_41 = t;
    t = term_p_30;
    a_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_30, w_41);
    t = j_7(a_42, w_41, t);
    t = x_41;
    {
      ATerm k_42 (ATerm t)
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_33 = t;
            int r_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_42 = NULL;
                d_42 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_42;
                ;
                LocalPopChoice(r_33);
              }
            else
              {
                t = q_33;
                t = a_82(t);
                t = Cons_2_0(_id, k_42, t);
              }
            ;
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm g_42 = NULL,h_42 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_42 = ATgetFirst((ATermList) t);
                  h_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_42), (ATerm) ATmakeAppl(sym_Undefined_1, g_42));
            }
          }
        return(t);
      }
      t = k_42(t);
      z_41 = t;
      t = (ATerm) ATinsert(CheckATermList(z_41), (ATerm) ATmakeAppl(sym_Program_1, w_41));
      c_5 = t;
      t = SSLsetAnnotations(c_5, v_41);
    }
  }
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm w_42 = NULL;
  w_42 = t;
  if(match_string(t, "--help"))
    {
      t = w_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_42;
        }
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL;
  t = term_l_31;
  x_42 = t;
  t = term_a_26;
  y_42 = t;
  t = term_s_33;
  t = j_7(x_42, y_42, t);
  t = term_t_33;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_u_33;
  return(t);
}
ATerm g_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  r_42 = t;
  t = term_m_29;
  t_42 = t;
  t = term_n_29;
  u_42 = t;
  t = (ATerm) ATempty;
  v_42 = t;
  t = SSL_table_put(t_42, u_42, v_42);
  t = r_42;
  {
    ATerm a_8 (ATerm t)
    {
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_81(t);
          ;
          LocalPopChoice(w_33);
        }
      else
        {
          t = v_33;
          {
            ATerm x_33 = t;
            int b_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_8, d_8, f_8, t);
                ;
                LocalPopChoice(b_34);
              }
            else
              {
                t = x_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_8, t);
    {
      ATerm c_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_43 = NULL;
          f_43 = t;
          {
            ATerm j_34 = t;
            int k_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_18 = NULL;
                t = f_43;
                {
                  ATerm l_34 = t;
                  int m_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_31;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(m_34);
                    }
                  else
                    {
                      t = l_34;
                      t = fetch_1_0(g_8, t);
                    }
                  t = f_43;
                  t = default_system_usage_0_0(t);
                  t = term_u_28;
                  p_18 = t;
                  t = SSL_exit(p_18);
                }
                ;
                LocalPopChoice(k_34);
              }
            else
              {
                t = j_34;
                {
                  ATerm t_18 = NULL;
                  t = term_x_32;
                  t = get_config_0_0(t);
                  t = f_43;
                  t = default_system_about_0_0(t);
                  t = term_u_28;
                  t_18 = t;
                  t = SSL_exit(t_18);
                }
              }
          }
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = c_34;
          {
            ATerm n_34 = t;
            int o_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
                ATerm h_8 (ATerm t)
                {
                  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,e_5 = NULL;
                  l_43 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_43 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_43);
                  j_43 = t;
                  t = k_43;
                  if(((p_42 != NULL) && (p_42 != t)))
                    _fail(t);
                  else
                    p_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_43);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, j_43);
                  return(t);
                }
                t = fetch_1_0(h_8, t);
                t = term_w_10;
                h_43 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_42)), term_q_34);
                i_43 = t;
                t = SSL_printnl(h_43, i_43);
                t = (ATerm) ATmakeAppl(sym__2, term_w_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_42)), term_q_34));
                t = default_system_usage_0_0(t);
                t = term_c_11;
                g_43 = t;
                t = SSL_exit(g_43);
                ;
                LocalPopChoice(o_34);
              }
            else
              {
                t = n_34;
              }
          }
        }
      q_42 = t;
      t = term_m_29;
      s_42 = t;
      t = SSL_table_destroy(s_42);
      t = q_42;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  t = parse_options_1_0(e_80, t);
  q_43 = t;
  t = term_u_34;
  t_43 = t;
  t = SSL_table_create(t_43);
  t = term_u_34;
  r_43 = t;
  t = term_x_34;
  s_43 = t;
  t = SSL_table_put(r_43, s_43, q_43);
  t = q_43;
  t = g_80(t);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_80, t);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        {
          ATerm d_35 = t;
          int f_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_35);
            }
          else
            {
              t = d_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      {
        ATerm k_35 = t;
        int l_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(l_35);
          }
        else
          {
            t = k_35;
            {
              ATerm m_35 = t;
              int n_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(n_35);
                }
              else
                {
                  t = m_35;
                  {
                    ATerm o_35 = t;
                    int q_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(l_8, n_8, q_8, t);
                        ;
                        LocalPopChoice(q_35);
                      }
                    else
                      {
                        t = o_35;
                        {
                          ATerm r_35 = t;
                          int s_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(s_35);
                            }
                          else
                            {
                              t = r_35;
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
ATerm k_8 (ATerm t)
{
  t = xtc_io_1_0(v_8, t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL;
  t = term_t_35;
  x_43 = t;
  t = term_a_26;
  y_43 = t;
  t = term_u_35;
  t = j_7(x_43, y_43, t);
  t = term_v_35;
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_w_35;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_44 = NULL,g_44 = NULL;
      g_44 = t;
      if(match_cons(t, sym_FILE_1))
        {
          f_44 = ATgetArgument(t, 0);
          {
            ATerm x_18 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(g_44);
            x_18 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, f_44);
            i_5 = t;
            t = SSLsetAnnotations(i_5, x_18);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_44;
        }
      LocalPopChoice(y_35);
      t = xtc_transform_file_2_0(x_8, create_pp_table_args_0_0, t);
    }
  else
    {
      t = x_35;
      t = xtc_transform_term_2_0(y_8, create_pp_table_args_0_0, t);
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_z_35;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_8, default_usage_0_0, _id, k_8, t);
  return(t);
}
