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
ATerm term_j_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_q_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_u_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_v_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_q_31;
ATerm term_g_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_d_30;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_o_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_w_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_w_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_e_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_w_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_b_25;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_d_22;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_w_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
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
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_k_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_q_12;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_w_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_a_10;
void init_constant_terms (void)
{
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_14, term_h_13, term_x_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_b_11, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_15, term_w_15, term_x_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_15, term_a_16, term_b_16);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_16, term_e_16, term_f_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_q_16, term_r_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_j_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_w_17, term_x_17);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_17, term_a_18, term_c_18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_18, term_f_18, term_m_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_s_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_v_18, term_w_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_c_19, term_f_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_n_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_w_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_g_20, term_h_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_20, term_p_20, term_q_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_b_21, term_c_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_k_21, term_l_21);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_b_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_j_25, term_k_25);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_o_28, term_w_27);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_w_10, term_q_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_30);
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_k_28);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym__2, term_u_31, term_v_31);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_k_28);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_k_28);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_k_28);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym__2, term_b_37, term_k_28);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
}
ATerm k_6 (ATerm u_24, ATerm v_24, ATerm);
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm m_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm n_6 (ATerm k_72 (ATerm), ATerm y_179, ATerm c_28, ATerm);
ATerm x_1 (ATerm);
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
ATerm j_2 (ATerm);
ATerm t_6 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm u_6 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm q_9 (ATerm k_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_6 (ATerm a_28, ATerm);
ATerm w_6 (ATerm w_48, ATerm x_48, ATerm);
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm w_2 (ATerm);
ATerm y_2 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm y_13 (ATerm g_13, ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm x_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm b_15 (ATerm n_14, ATerm);
ATerm e_15 (ATerm p_14, ATerm q_14, ATerm s_14, ATerm);
ATerm p_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm y_6 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm z_6 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm a_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm t_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm j_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm d_23 (ATerm n_22, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_7 (ATerm q_47, ATerm p_47, ATerm);
ATerm h_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm f_7 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm g_7 (ATerm b_47, ATerm c_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm u_7 (ATerm);
ATerm x_7 (ATerm);
ATerm c_8 (ATerm);
ATerm f_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm p_9 (ATerm);
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
  ATerm i_1 = NULL,j_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_9 = t;
    int z_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = i_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_a_10;
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_1, term_a_10);
        t = z_6(j_1, p_0, t);
        t = SSL_remove(j_1);
        t = term_a_10;
        ;
        LocalPopChoice(z_9);
      }
    else
      {
        t = y_9;
        {
          ATerm c_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = i_1;
              t = n_0(t);
              y_0 = t;
              {
                ATerm g_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_10 = t;
                    int i_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_10);
                      }
                    else
                      {
                        t = h_10;
                        {
                          ATerm c_1 = NULL;
                          c_1 = t;
                          if((j_1 != t))
                            {
                              _fail(t);
                            }
                          t = c_1;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_10;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_1, y_0);
                t = k_6(j_1, y_0, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
              }
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = c_10;
              t = i_1;
              t = n_0(t);
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
ATerm z_0 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_j_10;
  return(t);
}
ATerm d_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  t = debug_1_0(f_1, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL;
  b_2 = t;
  {
    ATerm x_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            LocalPopChoice(m_10);
            t = xtc_transform_file_2_0(z_0, a_1, t);
          }
        else
          {
            t = l_10;
            t = xtc_transform_term_2_0(b_1, d_1, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(x_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        c_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = c_2;
    t = if_verbose2_1_0(e_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 = NULL,g_2 = NULL;
      d_2 = t;
      t = term_w_10;
      t = get_config_0_0(t);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, term_b_11);
      t = geq_0_0(t);
      t = d_2;
      t = b_88(t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = p_10;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = SSL_modification_time(d_3);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  t = SSL_modification_time(e_3);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL;
  u_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_11), term_d_11), u_2);
  z_2 = t;
  t = SSL_concat_strings(z_2);
  x_2 = t;
  t = (ATerm) ATinsert(ATempty, term_i_11);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, (ATerm) ATinsert(ATempty, term_i_11));
  t = y_6(x_2, a_3, t);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, u_2);
  t = _2_0(g_1, h_1, t);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, v_2, u_2);
  b_3 = t;
  t = SSL_explode_term(b_3);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            c_3 = ATgetFirst((ATermList) l_11);
            {
              ATerm p_11 = (ATerm) ATgetNext((ATermList) l_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_3;
  t = if_verbose2_1_0(m_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm q_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = q_11;
        t = Cons_2_0(_id, f_3, t);
      }
    return(t);
  }
  t = f_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm v_11 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 = NULL,l_1 = NULL,n_1 = NULL;
      k_1 = t;
      t = term_q_12;
      n_1 = t;
      t = SSL_explode_string(n_1);
      l_1 = t;
      t = SSL_explode_string(k_1);
      {
        ATerm p_1 (ATerm t)
        {
          if((l_1 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(p_1, t);
        t = k_1;
      }
      ;
      LocalPopChoice(p_12);
    }
  else
    {
      t = v_11;
      {
        ATerm s_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
            q_1 = t;
            t = term_c_13;
            s_1 = t;
            t = SSL_explode_string(s_1);
            r_1 = t;
            t = SSL_explode_string(q_1);
            {
              ATerm t_1 (ATerm t)
              {
                if((r_1 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(t_1, t);
              t = q_1;
            }
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = s_12;
            {
              ATerm n_3 = NULL,p_3 = NULL,r_3 = NULL,s_3 = NULL;
              n_3 = t;
              t = term_d_13;
              p_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, n_3), term_f_13);
              r_3 = t;
              t = SSL_printnl(p_3, r_3);
              t = term_h_13;
              s_3 = t;
              t = SSL_exit(s_3);
              t = (ATerm) ATinsert(ATinsert(ATempty, n_3), term_f_13);
            }
          }
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm u_3 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  u_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_3), term_v_13);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(u_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(v_1, t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm y_3 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_z_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          y_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_11);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_3, (ATerm) ATinsert(ATempty, term_i_11));
      t = y_6(y_3, c_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm m_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm d_4 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_4);
  return(t);
}
ATerm n_6 (ATerm k_72 (ATerm), ATerm y_179, ATerm c_28, ATerm t)
{
  ATerm e_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_179, term_k_14);
  t = open_stream_0_0(t);
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_4, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_14 = ATgetArgument(t, 0);
      if(match_cons(l_14, sym_Stream_1))
        {
          h_4 = ATgetArgument(l_14, 0);
        }
      else
        _fail(t);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(h_4, i_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL;
  f_4 = t;
  t = xtc_new_file_0_0(t);
  g_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_4, f_4);
  t = n_6(x_1, g_4, f_4, t);
  t = SSL_close_file(g_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_4);
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
  ATerm k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL;
  k_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      l_5 = ATgetArgument(t, 0);
      {
        ATerm y_1 = NULL,z_1 = NULL;
        t = SSL_int_to_string(l_5);
        y_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_14), y_1), term_m_14);
        z_1 = t;
        t = SSL_concat_strings(z_1);
      }
    }
  else
    {
      ATerm o_2 = NULL,p_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          l_5 = ATgetArgument(t, 0);
          n_5 = ATgetArgument(t, 1);
          o_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_5);
      o_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_5), term_t_14), o_2), term_r_14), l_5);
      p_2 = t;
      t = SSL_concat_strings(p_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm r_5 = NULL;
  ATerm a_2 (ATerm t)
  {
    t = p_76(t);
    if(((r_5 != NULL) && (r_5 != t)))
      _fail(t);
    else
      r_5 = t;
    return(t);
  }
  t = fetch_1_0(a_2, t);
  t = not_null(r_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  s_5 = t;
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), term_d_21), term_w_20), term_m_20), term_x_19), term_p_19), term_k_19), term_g_19), term_x_18), term_t_18), term_n_18), term_d_18), term_y_17), term_s_17), term_o_17), term_k_17), term_g_17), term_c_17), term_x_16), term_s_16), term_m_16), term_g_16), term_c_16), term_y_15), term_u_15), term_q_15), term_k_15), term_c_15);
        {
          ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm r_21 = ATgetArgument(t, 0);
                if((s_5 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm v_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_2, t);
        }
        ;
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, s_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm z_5 = NULL;
  z_5 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            e_7 = ATgetArgument(t, 1);
            {
              ATerm b_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_7;
        {
          ATerm c_22 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_22;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          i_3 = t;
          t = term_d_13;
          j_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, i_3), term_d_22);
          k_3 = t;
          t = SSL_printnl(j_3, k_3);
          t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, i_3), term_d_22));
        }
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
    t = z_5;
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
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  t = fork_0_0(t);
  o_7 = t;
  {
    ATerm e_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = n_7;
        t = z_70(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = e_22;
        t = SSL_waitpid(o_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm h_22 = ATgetArgument(t, 0);
            if(((ATgetType(h_22) != AT_INT) || (ATgetInt((ATermInt) h_22) != 0)))
              _fail(t);
            {
              ATerm i_22 = ATgetArgument(t, 1);
            }
            {
              ATerm j_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = n_7;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_7 = NULL;
  q_7 = t;
  t = SSL_table_keys(q_7);
  {
    ATerm f_2 (ATerm t)
    {
      ATerm r_7 = NULL,s_7 = NULL;
      r_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_7, r_7);
      t = g_7(q_7, r_7, t);
      s_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_7, s_7);
      return(t);
    }
    t = map_1_0(f_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_7 = NULL,v_7 = NULL;
      t_7 = t;
      t = term_w_10;
      t = get_config_0_0(t);
      v_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_7, term_g_20);
      t = geq_0_0(t);
      t = t_7;
      t = e_88(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm m_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL,z_7 = NULL;
      w_7 = t;
      t = term_w_10;
      t = get_config_0_0(t);
      z_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_7, term_e_17);
      t = geq_0_0(t);
      t = w_7;
      t = d_88(t);
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = m_22;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm p_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,d_8 = NULL;
      b_8 = t;
      t = term_w_10;
      t = get_config_0_0(t);
      d_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_8, term_s_15);
      t = geq_0_0(t);
      t = b_8;
      t = f_88(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = p_22;
    }
  return(t);
}
ATerm r_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm e_8 = NULL;
      e_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, e_8);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(h_2, t);
    t = w_34;
  }
  return(t);
}
ATerm s_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  t = t_34;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm s_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_34;
          ;
          LocalPopChoice(u_22);
        }
      else
        {
          t = s_22;
          {
            ATerm w_22 = t;
            int x_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
                g_8 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_8 = ATgetFirst((ATermList) t);
                    i_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_8;
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = s_34;
                    return(t);
                  }
                  t = r_6(h_80, i_2, h_8, i_8, t);
                  t = l_8(t);
                }
                ;
                LocalPopChoice(x_22);
              }
            else
              {
                t = w_22;
                t = Cons_2_0(_id, l_8, t);
              }
          }
        }
      return(t);
    }
    t = l_8(t);
  }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_8 = NULL;
  if(match_cons(t, sym__2))
    {
      y_8 = ATgetArgument(t, 0);
      if((y_8 != ATgetArgument(t, 1)))
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
  ATerm n_8 = NULL,p_8 = NULL,q_8 = NULL;
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            ATerm c_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = g_7(h_46, i_46, t);
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
        t = (ATerm) ATempty;
      }
    p_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_8, j_46);
    t = s_6(j_2, p_8, j_46, t);
    q_8 = t;
    t = SSL_table_put(h_46, i_46, q_8);
    t = n_8;
  }
  return(t);
}
ATerm u_6 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  t = q_46;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm z_8 = NULL,b_9 = NULL;
      if(match_cons(t, sym__2))
        {
          z_8 = ATgetArgument(t, 0);
          b_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, r_46, z_8, b_9);
      t = h_88(t);
      return(t);
    }
    t = map_1_0(k_2, t);
  }
  return(t);
}
ATerm q_9 (ATerm k_9, ATerm t)
{
  t = SSL_fclose(k_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_9 = ATgetArgument(t, 0);
      {
        ATerm f_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_9);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = f_23;
            t = q_9(o_9, t);
          }
      }
    }
  else
    {
      t = q_9(o_9, t);
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
  ATerm r_9 = NULL;
  t = SSL_fopen(w_48, x_48);
  r_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_9);
  return(t);
}
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,b_0 = NULL,f_0 = NULL;
  x_9 = t;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_9);
  s_9 = t;
  t = t_9;
  t = g_59(t);
  v_9 = t;
  t = u_9;
  t = h_59(t);
  w_9 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
  b_0 = t;
  t = SSLsetAnnotations(b_0, s_9);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_10 = NULL;
  t = SSL_stdin_stream();
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_10 = NULL;
  t = SSL_stdout_stream();
  d_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  t = SSL_stderr_stream();
  e_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_10);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm r_10 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      r_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_10;
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm v_10 = NULL;
  v_10 = t;
  t = SSL_is_string(v_10);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      ATerm n_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL,k_4 = NULL;
        n_10 = t;
        t = SSL_explode_term(n_10);
        if(match_cons(t, sym__2))
          {
            ATerm q_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_23 = ATgetArgument(t, 1);
              if(((ATgetType(r_23) == AT_LIST) && !(ATisEmpty(r_23))))
                {
                  k_4 = ATgetFirst((ATermList) r_23);
                  {
                    ATerm s_23 = (ATerm) ATgetNext((ATermList) r_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = k_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = k_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = k_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_10 = NULL,q_10 = NULL;
              t = _2_0(l_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  o_10 = ATgetArgument(t, 0);
                  q_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = w_6(o_10, q_10, t);
              ;
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              {
                ATerm s_10 = NULL,u_10 = NULL;
                t = _2_0(m_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    s_10 = ATgetArgument(t, 0);
                    u_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_6(s_10, u_10, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_v_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_11 = NULL;
      a_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_11, term_z_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      t = debug_1_0(n_2, t);
      _fail(t);
    }
  x_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(z_10, t);
  y_10 = t;
  t = x_10;
  t = fclose_0_0(t);
  t = y_10;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_a_24;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_11 = NULL,f_11 = NULL;
      e_11 = t;
      t = (ATerm) ATinsert(ATempty, term_k_24);
      f_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_11, (ATerm) ATinsert(ATempty, term_k_24));
      t = y_6(e_11, f_11, t);
      LocalPopChoice(j_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = i_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_25 = t;
            if((PushChoice() == 0))
              {
                ATerm h_11 = NULL,j_11 = NULL;
                h_11 = t;
                t = (ATerm) ATinsert(ATempty, term_i_11);
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_11, (ATerm) ATinsert(ATempty, term_i_11));
                t = y_6(h_11, j_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = a_25;
              }
            t = debug_1_0(q_2, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            t = debug_1_0(r_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = debug_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_b_25;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  t = term_d_13;
  d_12 = t;
  t = (ATerm) ATinsert(ATempty, term_e_25);
  e_12 = t;
  t = SSL_printnl(d_12, e_12);
  t = c_12;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__3))
    {
      f_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
      h_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_6(f_12, g_12, h_12, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  t = term_d_13;
  j_12 = t;
  t = (ATerm) ATinsert(ATempty, term_f_25);
  k_12 = t;
  t = SSL_printnl(j_12, k_12);
  t = i_12;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  t = term_d_13;
  m_12 = t;
  t = (ATerm) ATinsert(ATempty, term_e_25);
  n_12 = t;
  t = SSL_printnl(m_12, n_12);
  t = l_12;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  m_11 = t;
  t = if_verbose5_1_0(s_2, t);
  {
    ATerm g_25 = t;
    if((PushChoice() == 0))
      {
        ATerm a_12 = NULL,b_12 = NULL;
        t = term_j_25;
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, m_11);
        b_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATmakeAppl(sym_Imported_1, m_11));
        t = g_7(a_12, b_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_25;
      }
    n_11 = t;
    t = term_j_25;
    r_11 = t;
    t = term_k_25;
    s_11 = t;
    t = (ATerm) ATinsert(ATempty, m_11);
    t_11 = t;
    t = SSL_table_put(r_11, s_11, t_11);
    t = n_11;
    t = if_verbose4_1_0(w_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(g_3, t);
    o_11 = t;
    t = term_j_25;
    w_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_25, o_11);
    t = u_6(h_3, w_11, o_11, t);
    t = if_verbose6_1_0(l_3, t);
    t = term_j_25;
    x_11 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, m_11);
    y_11 = t;
    t = (ATerm) ATempty;
    z_11 = t;
    t = SSL_table_put(x_11, y_11, z_11);
    t = (ATerm) ATmakeAppl(sym__3, term_j_25, (ATerm)ATmakeAppl(sym_Imported_1, m_11), (ATerm) ATempty);
    t = if_verbose4_1_0(m_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm o_25 = t;
        int p_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              t = filter_1_0(y_83, t);
              return(t);
            }
            t = Cons_2_0(y_83, o_3, t);
            ;
            LocalPopChoice(p_25);
          }
        else
          {
            t = o_25;
            {
              ATerm r_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm r_25 = ATgetFirst((ATermList) t);
                  r_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_12;
              t = filter_1_0(y_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = t_12(t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_12 = NULL;
            t = term_z_25;
            u_12 = t;
            t = SSL_getenv(u_12);
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_a_26;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm z_12 = NULL,b_13 = NULL;
  t = term_j_25;
  z_12 = t;
  t = term_b_26;
  b_13 = t;
  t = term_c_26;
  t = g_7(z_12, b_13, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm d_26 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_26;
      }
  }
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = debug_1_0(x_3, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  t = if_verbose5_1_0(q_3, t);
  v_12 = t;
  {
    ATerm f_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,x_12 = NULL;
        t = term_j_25;
        w_12 = t;
        t = term_k_25;
        x_12 = t;
        t = term_k_26;
        t = g_7(w_12, x_12, t);
        ;
        LocalPopChoice(j_26);
      }
    else
      {
        t = f_26;
        {
          ATerm y_12 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_12 = t;
          t = repeat_1_0(v_3, t);
          t = y_12;
        }
      }
    t = v_12;
    t = if_verbose5_1_0(w_3, t);
  }
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = debug_1_0(a_4, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm y_13 (ATerm g_13, ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL;
  t = term_j_25;
  j_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, g_13);
  k_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATmakeAppl(sym_Tool_1, g_13));
  t = g_7(j_13, k_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_26 = ATgetFirst((ATermList) t);
      if(match_cons(n_26, sym__2))
        {
          ATerm q_26 = ATgetArgument(n_26, 0);
          i_13 = ATgetArgument(n_26, 1);
        }
      else
        _fail(t);
      {
        ATerm o_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_13;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = debug_1_0(l_4, t);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_m_26;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_j_25;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
        n_13 = t;
        if(match_cons(t, sym__2))
          {
            l_13 = ATgetArgument(t, 0);
            m_13 = ATgetArgument(t, 1);
            {
              ATerm b_27 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
                  t = term_j_25;
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, l_13);
                  s_13 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_25, (ATerm) ATmakeAppl(sym_Tool_1, l_13));
                  t = g_7(r_13, s_13, t);
                  {
                    ATerm b_4 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((m_13 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((q_13 != NULL) && (q_13 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            q_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(b_4, t);
                    t = not_null(q_13);
                  }
                  ;
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = b_27;
                  t = y_13(n_13, t);
                }
            }
          }
        else
          {
            t = y_13(n_13, t);
          }
        t = if_verbose5_1_0(j_4, t);
      }
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm x_13 = NULL,w_4 = NULL,x_4 = NULL;
        x_13 = t;
        t = term_d_13;
        w_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_27), x_13), term_j_27);
        x_4 = t;
        t = SSL_printnl(w_4, x_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_27), x_13), term_j_27);
        t = if_verbose5_1_0(m_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  a_14 = t;
  t = l_90(t);
  t = xtc_find_0_0(t);
  b_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_14, a_14);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm c_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_14, a_14);
      t = o_6(b_14, a_14, t);
      t = term_l_27;
      c_14 = t;
      t = SSL_exit(c_14);
      return(t);
    }
    t = fork_and_wait_1_0(o_4, t);
    t = a_14;
  }
  return(t);
}
ATerm x_6 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL;
  d_14 = t;
  t = w_86(t);
  e_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_14, t_44, r_44);
  t = h_7(e_14, t_44, r_44, t);
  {
    ATerm m_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL;
        t = term_w_27;
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_14, term_w_27);
        t = g_7(e_14, j_14, t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = m_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_14 = ATgetFirst((ATermList) t);
        g_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_27;
    h_14 = t;
    t = (ATerm) ATinsert(CheckATermList(g_14), (ATerm) ATinsert(CheckATermList(f_14), t_44));
    i_14 = t;
    t = SSL_table_put(e_14, h_14, i_14);
    t = d_14;
  }
  return(t);
}
ATerm b_15 (ATerm n_14, ATerm t)
{
  t = n_14;
  {
    ATerm y_27 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_27 = ATgetArgument(t, 0);
            ATerm b_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_27;
      }
    t = term_d_28;
    t = debug_1_0(p_4, t);
    t = (ATerm) ATmakeAppl(sym__2, n_14, term_k_14);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm e_15 (ATerm p_14, ATerm q_14, ATerm s_14, ATerm t)
{
  t = SSL_open_file(p_14, q_14);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      {
        ATerm g_28 = t;
        int j_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_15(y_14, t);
            ;
            LocalPopChoice(j_28);
          }
        else
          {
            t = g_28;
            t = e_15(z_14, a_15, y_14, t);
          }
      }
    }
  else
    {
      t = b_15(y_14, t);
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
  ATerm f_15 = NULL,g_15 = NULL;
  t = term_k_28;
  t = new_0_0(t);
  f_15 = t;
  t = term_l_28;
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, term_l_28);
  t = f_7(f_15, g_15, t);
  {
    ATerm m_28 = t;
    int n_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,j_15 = NULL;
        h_15 = t;
        t = (ATerm) ATinsert(ATempty, term_i_11);
        j_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_15, (ATerm) ATinsert(ATempty, term_i_11));
        t = y_6(h_15, j_15, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(n_28);
      }
    else
      {
        t = m_28;
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  t = new_file_0_0(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_k_14);
  t = open_file_0_0(t);
  t = term_k_28;
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, term_k_28);
  t = x_6(q_4, l_15, m_15, t);
  t = l_15;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_5 = NULL,i_5 = NULL;
      t = h_16;
      t = xtc_new_file_0_0(t);
      h_5 = t;
      t = m_0(t);
      i_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_5, (ATerm) ATinsert(ATinsert(ATempty, h_5), term_q_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(h_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, h_5);
    }
  else
    {
      ATerm v_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          i_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_16;
      t = xtc_new_file_0_0(t);
      v_5 = t;
      t = m_0(t);
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_5), term_q_28), i_16), term_r_28));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,t_16 = NULL,y_16 = NULL,o_0 = NULL,q_0 = NULL;
  y_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_16);
  o_16 = t;
  t = p_16;
  t = u_68(t);
  t_16 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, t_16);
  o_0 = t;
  t = SSLsetAnnotations(o_0, o_16);
  return(t);
}
ATerm z_6 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL;
        t = u_17;
        t = k_0(t);
        g_6 = t;
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_17, g_6);
          t = z_6(v_17, g_6, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
        }
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = s_28;
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_7 = NULL;
              t = u_17;
              t = k_0(t);
              y_7 = t;
              {
                ATerm d_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_29 = t;
                    int f_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_29);
                      }
                    else
                      {
                        t = e_29;
                        {
                          ATerm g_29 = t;
                          int i_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_29);
                            }
                          else
                            {
                              t = g_29;
                              {
                                ATerm a_8 = NULL;
                                a_8 = t;
                                if((v_17 != t))
                                  {
                                    _fail(t);
                                  }
                                t = a_8;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_29;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_17, y_7);
                t = z_6(v_17, y_7, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
              }
              ;
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              t = u_17;
              t = k_0(t);
              if((v_17 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_17);
            }
        }
      }
  }
  return(t);
}
ATerm a_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm b_18 = NULL,g_18 = NULL;
  b_18 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = g_7(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_29 = ATgetFirst((ATermList) t);
            g_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_29);
        t = SSL_table_put(p_45, q_45, g_18);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, g_18);
      }
    else
      {
        t = j_29;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = b_18;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  h_18 = t;
  t = t_86(t);
  i_18 = t;
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_18 = NULL;
        t = term_w_27;
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_18, term_w_27);
        t = g_7(i_18, o_18, t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_18 = ATgetFirst((ATermList) t);
        j_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_w_27;
    l_18 = t;
    t = SSL_table_put(i_18, l_18, j_18);
    t = k_18;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm p_18 = NULL;
        p_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_18, p_18);
        t = a_7(i_18, p_18, t);
        return(t);
      }
      t = map_1_0(r_4, t);
      t = h_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(q_29);
    }
  else
    {
      t = p_29;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,d_19 = NULL,e_19 = NULL;
  z_18 = t;
  t = s_86(t);
  a_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_19, term_w_27);
  {
    ATerm s_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_19 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_29 = ATgetArgument(t, 0);
            ATerm w_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_w_27;
        o_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, term_w_27);
        t = g_7(a_19, o_19, t);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = s_29;
        t = (ATerm) ATempty;
      }
    b_19 = t;
    t = term_w_27;
    d_19 = t;
    t = (ATerm) ATinsert(CheckATermList(b_19), (ATerm) ATempty);
    e_19 = t;
    t = SSL_table_put(a_19, d_19, e_19);
    t = z_18;
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_19 = NULL;
      y_19 = t;
      t = SSL_remove(y_19);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm q_19 = NULL;
  t = begin_scope_1_0(s_4, t);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm r_19 = NULL;
      r_19 = t;
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_19 = NULL,v_19 = NULL;
            t = term_o_28;
            u_19 = t;
            t = term_w_27;
            v_19 = t;
            t = term_d_30;
            t = g_7(u_19, v_19, t);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((q_19 != NULL) && (q_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              q_19 = ATgetFirst((ATermList) t);
            {
              ATerm e_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(q_19);
        t = map_1_0(u_4, t);
        t = r_19;
        t = end_scope_1_0(v_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(x_89, t_4, t);
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = term_a_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL;
        t = term_r_28;
        t = get_config_0_0(t);
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, a_20);
        ;
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = term_z_13;
      }
    t = y_89(t);
    t = copy_to_1_0(z_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  b_20 = t;
  t = term_k_28;
  t = whoami_0_0(t);
  c_20 = t;
  t = term_d_13;
  d_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_30), c_20), term_l_30);
  e_20 = t;
  t = SSL_printnl(d_20, e_20);
  t = term_h_13;
  f_20 = t;
  t = SSL_exit(f_20);
  t = b_20;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  if(match_string(t, "-k"))
    {
      t = i_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_20;
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  t = SSL_string_to_int(j_20);
  k_20 = t;
  t = term_n_30;
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_30, k_20);
  t = j_7(l_20, k_20, t);
  t = j_20;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_5, b_5, c_5, t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm o_20 = NULL;
  o_20 = t;
  if(match_string(t, "-S"))
    {
      t = o_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_20;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  t = term_w_10;
  r_20 = t;
  t = term_q_30;
  s_20 = t;
  t = term_s_30;
  t = j_7(r_20, s_20, t);
  t = term_t_30;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_x_30;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  t_20 = t;
  t = SSL_string_to_int(t_20);
  u_20 = t;
  t = term_w_10;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_10, u_20);
  t = j_7(v_20, u_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_20);
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm p_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm x_20 = NULL,z_20 = NULL;
  t = term_c_31;
  x_20 = t;
  t = term_k_28;
  z_20 = t;
  t = term_d_31;
  t = j_7(x_20, z_20, t);
  t = term_e_31;
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_5, e_5, f_5, t);
      ;
      LocalPopChoice(j_31);
    }
  else
    {
      t = i_31;
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_5, j_5, m_5, t);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            t = Option_3_0(p_5, q_5, t_5, t);
          }
      }
    }
  return(t);
}
ATerm j_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm a_21 = NULL;
  t = term_q_31;
  a_21 = t;
  t = SSL_table_put(a_21, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_q_31, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_21 = NULL,g_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
      t = term_k_28;
      t = d_0(t);
      h_21 = t;
      t = term_u_31;
      i_21 = t;
      t = term_v_31;
      j_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_31, term_v_31, h_21);
      t = h_7(i_21, j_21, h_21, t);
      _fail(t);
    }
  else
    {
      ATerm m_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_21 = ATgetFirst((ATermList) t);
          g_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_21;
      t = a_0(t);
      t = term_k_28;
      t = c_0(t);
      m_21 = t;
      t = (ATerm) ATinsert(CheckATermList(g_21), m_21);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm o_21 = NULL;
  o_21 = t;
  if(match_string(t, "-o"))
    {
      t = o_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_21;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  p_21 = t;
  t = term_q_28;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, p_21);
  t = j_7(q_21, p_21, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_21);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, x_5, y_5, t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  if(match_string(t, "-i"))
    {
      t = s_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_21;
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  t_21 = t;
  t = term_r_28;
  u_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_28, t_21);
  t = j_7(u_21, t_21, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_21);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, b_6, c_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm f_22 (ATerm t)
  {
    ATerm a_32 = t;
    int b_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_22, t);
        ;
        LocalPopChoice(b_32);
      }
    else
      {
        t = a_32;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_76(t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      {
        ATerm z_21 = NULL,a_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_21 = ATgetFirst((ATermList) t);
            a_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_21;
        {
          ATerm d_6 (ATerm t)
          {
            t = a_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_6, t);
        }
      }
    }
  return(t);
}
ATerm d_23 (ATerm n_22, ATerm t)
{
  ATerm q_22 = NULL;
  t = SSL_explode_term(n_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_22;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_22 = NULL,v_22 = NULL,z_22 = NULL;
  z_22 = t;
  if(match_cons(t, sym__2))
    {
      t_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 (ATerm t)
            {
              t = v_22;
              return(t);
            }
            t = t_22;
            t = at_end_1_0(e_6, t);
            ;
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            t = d_23(z_22, t);
          }
      }
    }
  else
    {
      t = d_23(z_22, t);
    }
  return(t);
}
ATerm b_7 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm e_23 = NULL,g_23 = NULL,h_23 = NULL;
  t = q_47;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = (ATerm) ATempty;
      }
    e_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, e_23);
    t = conc_0_0(t);
    g_23 = t;
    t = term_q_31;
    h_23 = t;
    t = SSL_table_put(h_23, q_47, g_23);
    t = (ATerm) ATmakeAppl(sym__3, term_q_31, q_47, g_23);
  }
  return(t);
}
ATerm h_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            ATerm a_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = g_7(k_45, l_45, t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = (ATerm) ATempty;
      }
    l_23 = t;
    t = (ATerm) ATinsert(CheckATermList(l_23), j_45);
    m_23 = t;
    t = SSL_table_put(k_45, l_45, m_23);
    t = k_23;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
      t = term_k_28;
      t = j_0(t);
      f_24 = t;
      t = term_u_31;
      g_24 = t;
      t = term_v_31;
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_31, term_v_31, f_24);
      t = h_7(g_24, h_24, f_24, t);
      _fail(t);
    }
  else
    {
      ATerm l_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_23 = ATgetFirst((ATermList) t);
          b_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_23;
      t = h_0(t);
      t = c_24;
      t = i_0(t);
      l_24 = t;
      t = (ATerm) ATinsert(CheckATermList(d_24), l_24);
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
  o_24 = t;
  t = term_v_13;
  p_24 = t;
  t = (ATerm) ATinsert(ATempty, o_24);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_13, (ATerm) ATinsert(ATempty, o_24));
  t = b_7(p_24, s_24, t);
  t = o_24;
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_6, h_6, i_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_24 = NULL,y_24 = NULL,z_24 = NULL,c_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_28;
  t = whoami_0_0(t);
  t_24 = t;
  t = term_d_13;
  y_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_33), t_24);
  z_24 = t;
  t = SSL_printnl(y_24, z_24);
  t = term_h_13;
  c_25 = t;
  t = SSL_exit(c_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_82(t);
      ;
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm h_25 = NULL,i_25 = NULL,n_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_25 = ATgetFirst((ATermList) t);
            i_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_25;
        t = foldr_2_0(v_82, w_82, t);
        n_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_25, n_25);
        t = w_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(d_9, e_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_25 = NULL,w_8 = NULL,x_8 = NULL;
  t = times_0_0(t);
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_8;
  t = foldr_2_0(j_6, l_6, t);
  q_25 = t;
  t = SSL_TicksToSeconds(q_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym__2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_26;
        if((h_26 != t))
          {
            _fail(t);
          }
        t = g_26;
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = p_33;
        t = (ATerm) ATmakeAppl(sym__2, h_26, i_26);
        {
          ATerm r_33 = t;
          int s_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_26, i_26);
              ;
              LocalPopChoice(s_33);
            }
          else
            {
              t = r_33;
              t = SSL_gtr(h_26, i_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_26, i_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_26 = NULL,p_26 = NULL;
      l_26 = t;
      t = term_w_10;
      t = get_config_0_0(t);
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_26, term_h_13);
      t = geq_0_0(t);
      t = l_26;
      t = a_88(t);
      ;
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL;
  t = run_time_0_0(t);
  r_26 = t;
  t = term_k_28;
  t = whoami_0_0(t);
  s_26 = t;
  t = term_d_13;
  t_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_33), r_26), term_r_14), s_26);
  u_26 = t;
  t = SSL_printnl(t_26, u_26);
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_33), r_26), term_r_14), s_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_30;
  v_26 = t;
  t = SSL_exit(v_26);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm w_33 = t;
  int x_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(x_33);
    }
  else
    {
      t = w_33;
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      t = fetch_1_0(q_6, t);
    }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_26 = ATgetFirst((ATermList) t);
      y_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_27 = NULL,e_27 = NULL;
        t = y_26;
        t = g_0(t);
        d_27 = t;
        t = x_26;
        t = e_0(t);
        e_27 = t;
        t = y_26;
        {
          ATerm d_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(d_27), e_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_28;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,r_0 = NULL,s_0 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_27);
  f_27 = t;
  t = g_27;
  t = b_69(t);
  h_27 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_27);
  r_0 = t;
  t = SSLsetAnnotations(r_0, f_27);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm q_27 = NULL;
  q_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_27), term_d_34);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_27 = NULL,p_27 = NULL;
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      t = fetch_1_0(i_7, t);
    }
  t = term_g_34;
  t = echo_0_0(t);
  t = term_u_31;
  n_27 = t;
  t = term_v_31;
  p_27 = t;
  t = term_h_34;
  t = g_7(n_27, p_27, t);
  t = reverse_acc_2_0(_id, k_7, t);
  t = map_1_0(l_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,x_27 = NULL,t_0 = NULL,u_0 = NULL;
  x_27 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_27);
  r_27 = t;
  t = s_27;
  t = c_69(t);
  t_27 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_27);
  t_0 = t;
  t = SSLsetAnnotations(t_0, r_27);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm e_28 (ATerm t)
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_76, _id, t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = Cons_2_0(_id, e_28, t);
      }
    return(t);
  }
  t = e_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,p_28 = NULL;
  h_28 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_34 = ATgetFirst((ATermList) t);
                ATerm n_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_28;
          }
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = (ATerm) ATinsert(ATempty, h_28);
      }
    i_28 = t;
    t = term_a_10;
    p_28 = t;
    t = SSL_printnl(p_28, i_28);
    t = h_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_33;
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,x_28 = NULL;
  t_28 = t;
  t = i_72(t);
  u_28 = t;
  t = term_d_13;
  v_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_28), u_28);
  x_28 = t;
  t = SSL_printnl(v_28, x_28);
  t = t_28;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm y_28 (ATerm t)
  {
    ATerm o_34 = t;
    int p_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_34);
      }
    else
      {
        t = o_34;
        t = Cons_2_0(d_76, y_28, t);
      }
    return(t);
  }
  t = y_28(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL;
      h_29 = t;
      t = SSL_is_string(h_29);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = v_34;
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_7, t);
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            {
              ATerm l_29 = NULL,r_29 = NULL,t_29 = NULL;
              l_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_29 = ATgetArgument(t, 0);
                  t = r_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_29 = ATgetArgument(t, 0);
                      t = r_29;
                      {
                        ATerm b_35 = t;
                        int c_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_35);
                          }
                        else
                          {
                            t = b_35;
                            t = debug_1_0(p_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_30 = NULL,c_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_29 = ATgetArgument(t, 0);
                          t_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_29;
                      t = eval_config_0_0(t);
                      b_30 = t;
                      t = t_29;
                      t = eval_config_0_0(t);
                      c_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_30, c_30);
                      t = f_7(b_30, c_30, t);
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
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  t = term_q_31;
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, h_30);
  t = g_7(i_30, h_30, t);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_30 = NULL,r_30 = NULL;
        t = eval_config_0_0(t);
        o_30 = t;
        t = term_q_31;
        r_30 = t;
        t = SSL_table_put(r_30, h_30, o_30);
        t = o_30;
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  t = term_f_35;
  u_30 = t;
  t = term_k_28;
  v_30 = t;
  t = term_g_35;
  t = j_7(u_30, v_30, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_h_35;
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm w_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  t = term_f_35;
  w_30 = t;
  t = term_k_28;
  z_30 = t;
  t = term_g_35;
  t = j_7(w_30, z_30, t);
  t = term_i_35;
  a_31 = t;
  t = term_k_28;
  b_31 = t;
  t = term_j_35;
  t = j_7(a_31, b_31, t);
  t = term_k_35;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_7, x_7, c_8, t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = Option_3_0(f_8, j_8, k_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,h_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,v_0 = NULL,w_0 = NULL;
  n_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_31 = ATgetFirst((ATermList) t);
      k_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_31);
  f_31 = t;
  t = h_31;
  t = v_63(t);
  l_31 = t;
  t = k_31;
  t = w_63(t);
  m_31 = t;
  w_0 = t;
  t = (ATerm) ATinsert(CheckATermList(m_31), l_31);
  v_0 = t;
  t = SSLsetAnnotations(v_0, f_31);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL;
  s_31 = t;
  t = term_j_33;
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_33, s_31);
  t = j_7(t_31, s_31, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, s_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_35;
        t = d_94(t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
      }
    t = r_31;
    {
      ATerm o_8 (ATerm t)
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_35 = t;
            int u_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_35);
              }
            else
              {
                t = t_35;
                t = d_94(t);
                t = Cons_2_0(_id, o_8, t);
              }
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            {
              ATerm x_31 = NULL,y_31 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_31 = ATgetFirst((ATermList) t);
                  y_31 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_31), (ATerm) ATmakeAppl(sym_Undefined_1, x_31));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_8, o_8, t);
    }
  }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  if(match_string(t, "--help"))
    {
      t = m_32;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_32;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_32;
        }
    }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = term_c_34;
  n_32 = t;
  t = term_k_28;
  o_32 = t;
  t = term_v_35;
  t = j_7(n_32, o_32, t);
  t = term_w_35;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_x_35;
  return(t);
}
ATerm v_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  f_32 = t;
  t = term_u_31;
  i_32 = t;
  t = term_v_31;
  j_32 = t;
  t = (ATerm) ATempty;
  k_32 = t;
  t = SSL_table_put(i_32, j_32, k_32);
  t = f_32;
  {
    ATerm r_8 (ATerm t)
    {
      ATerm y_35 = t;
      int z_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
          ;
          LocalPopChoice(z_35);
        }
      else
        {
          t = y_35;
          {
            ATerm a_36 = t;
            int b_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, t_8, u_8, t);
                ;
                LocalPopChoice(b_36);
              }
            else
              {
                t = a_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_8, t);
    {
      ATerm c_36 = t;
      int d_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_32 = NULL;
          v_32 = t;
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_12 = NULL;
                t = v_32;
                {
                  ATerm g_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = g_36;
                      t = fetch_1_0(v_8, t);
                    }
                  t = v_32;
                  t = default_system_usage_0_0(t);
                  t = term_q_30;
                  o_12 = t;
                  t = SSL_exit(o_12);
                }
                ;
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                {
                  ATerm e_13 = NULL;
                  t = term_f_35;
                  t = get_config_0_0(t);
                  t = v_32;
                  t = default_system_about_0_0(t);
                  t = term_q_30;
                  e_13 = t;
                  t = SSL_exit(e_13);
                }
              }
          }
          ;
          LocalPopChoice(d_36);
        }
      else
        {
          t = c_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL;
                ATerm a_9 (ATerm t)
                {
                  ATerm c_9 (ATerm t)
                  {
                    if(((g_32 != NULL) && (g_32 != t)))
                      _fail(t);
                    else
                      g_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(c_9, t);
                  return(t);
                }
                t = fetch_1_0(a_9, t);
                t = term_d_13;
                w_32 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_32)), term_k_36);
                x_32 = t;
                t = SSL_printnl(w_32, x_32);
                t = (ATerm) ATmakeAppl(sym__2, term_d_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_32)), term_k_36));
                t = default_system_usage_0_0(t);
                t = term_h_13;
                y_32 = t;
                t = SSL_exit(y_32);
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
              }
          }
        }
      h_32 = t;
      t = term_u_31;
      l_32 = t;
      t = SSL_table_destroy(l_32);
      t = h_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL;
  t = parse_options_1_0(h_92, t);
  b_33 = t;
  t = term_l_36;
  c_33 = t;
  t = SSL_table_create(c_33);
  t = term_l_36;
  d_33 = t;
  t = term_m_36;
  e_33 = t;
  t = SSL_table_put(d_33, e_33, b_33);
  t = b_33;
  t = j_92(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_92, t);
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        {
          ATerm p_36 = t;
          int q_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_36);
            }
          else
            {
              t = p_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm r_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
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
            t = input_option_0_0(t);
            ;
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
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(w_36);
                }
              else
                {
                  t = v_36;
                  {
                    ATerm x_36 = t;
                    int y_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_9, i_9, j_9, t);
                        ;
                        LocalPopChoice(y_36);
                      }
                    else
                      {
                        t = x_36;
                        {
                          ATerm z_36 = t;
                          int a_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(a_37);
                            }
                          else
                            {
                              t = z_36;
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
ATerm g_9 (ATerm t)
{
  t = xtc_io_1_0(l_9, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL;
  t = term_b_37;
  f_33 = t;
  t = term_k_28;
  g_33 = t;
  t = term_c_37;
  t = j_7(f_33, g_33, t);
  t = term_d_37;
  return(t);
}
ATerm j_9 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(g_37);
      t = xtc_transform_file_2_0(m_9, create_pp_table_args_0_0, t);
    }
  else
    {
      t = f_37;
      t = xtc_transform_term_2_0(p_9, create_pp_table_args_0_0, t);
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(f_9, default_usage_0_0, _id, g_9, t);
  return(t);
}
