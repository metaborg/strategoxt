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
ATerm term_u_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_r_28;
ATerm term_q_28;
ATerm term_j_28;
ATerm term_g_28;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_f_26;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_z_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_n_17;
ATerm term_m_17;
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
ATerm term_w_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_t_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_l_9;
void init_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_12, term_r_12, term_s_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_u_9, term_x_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_13, term_e_13, term_f_13);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_13, term_i_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_q_13, term_t_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_13, term_w_13, term_x_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_14, term_m_14, term_n_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_14, term_t_14, term_u_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_n_15, term_p_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_d_16, term_e_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_p_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_y_16, term_z_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_17, term_c_17, term_d_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_q_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_x_17, term_y_17);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_i_18);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_18, term_q_18, term_r_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_18, term_x_18, term_y_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_s_19, term_t_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_c_20, term_d_20);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_20, term_g_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_o_20, term_p_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_x_20);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__3, term_s_27, term_s_29, term_c_25);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
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
ATerm ast2abox_0_0 (ATerm);
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
ATerm ast2abox_options_0_0 (ATerm);
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
ATerm io_ast2abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_9 = t;
    int k_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(z_1, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(z_1);
        t = term_l_9;
        ;
        LocalPopChoice(k_9);
      }
    else
      {
        t = j_9;
        {
          ATerm m_9 = t;
          int n_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_0 = NULL;
              t = y_1;
              t = n_0(t);
              s_0 = t;
              {
                ATerm o_9 = t;
                if((PushChoice() == 0))
                  {
                    ATerm p_9 = t;
                    int q_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = p_9;
                        {
                          ATerm t_0 = NULL;
                          t_0 = t;
                          if((z_1 != t))
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
                    t = o_9;
                  }
                t = SSL_rename(z_1, s_0);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_0);
              }
              ;
              LocalPopChoice(n_9);
            }
          else
            {
              t = m_9;
              t = y_1;
              t = n_0(t);
              if((z_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, z_1);
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
    t = term_r_9;
    return(t);
  }
  t = xtc_transform_1_0(e_0, t);
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm p_2 = NULL,q_2 = NULL;
  p_2 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, p_2);
      t = xtc_parse_pp_table_0_0(t);
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        q_2 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = q_2;
    {
      ATerm p_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_s_9;
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
    ATerm r_2 = NULL,u_2 = NULL;
    r_2 = t;
    t = term_t_9;
    t = get_config_0_0(t);
    u_2 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_2, term_u_9);
    t = geq_0_0(t);
    t = r_2;
    t = z_80(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_2), term_w_9), v_2);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,v_0 = NULL,z_0 = NULL;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_2, term_x_9);
  t = add_extension_0_0(t);
  v_0 = t;
  t = SSL_access(v_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
  y_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_2, x_2);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm z_2 = NULL;
      z_2 = t;
      t = SSL_modification_time(z_2);
      return(t);
    }
    ATerm w_0 (ATerm t)
    {
      ATerm a_3 = NULL;
      a_3 = t;
      t = SSL_modification_time(a_3);
      return(t);
    }
    t = _2_0(u_0, w_0, t);
    t = geq_0_0(t);
    t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_2, x_2));
    if(match_cons(t, sym__2))
      {
        ATerm z_9 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) z_9) != ATmakeSymbol("", 0, ATtrue)))
          _fail(t);
        {
          ATerm a_10 = ATgetArgument(t, 1);
          if(((ATgetType(a_10) == AT_LIST) && !(ATisEmpty(a_10))))
            {
              z_0 = ATgetFirst((ATermList) a_10);
              {
                ATerm b_10 = (ATerm) ATgetNext((ATermList) a_10);
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
          t = term_d_10;
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
  ATerm e_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0_0(t);
      ;
      LocalPopChoice(j_10);
    }
  else
    {
      t = e_10;
      t = parse_to_temp_file_0_0(t);
    }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), b_3);
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = b_3;
  return(t);
}
ATerm must_be_pp_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        t = term_z_10;
        return(t);
      }
      t = has_extension_1_0(a_1, t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm c_3 = NULL;
        c_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, c_3), term_a_11);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm g_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_70(t);
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = g_11;
        t = Cons_2_0(_id, e_3, t);
      }
    return(t);
  }
  t = e_3(t);
  return(t);
}
ATerm has_extension_1_0 (ATerm g_78 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,j_3 = NULL,l_3 = NULL;
  h_3 = t;
  t = g_78(t);
  l_3 = t;
  t = SSL_explode_string(l_3);
  j_3 = t;
  t = SSL_explode_string(h_3);
  {
    ATerm b_1 (ATerm t)
    {
      if((j_3 != t))
        {
          _fail(t);
        }
      return(t);
    }
    t = at_suffix_1_0(b_1, t);
    t = h_3;
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_1 (ATerm t)
      {
        t = term_t_11;
        return(t);
      }
      t = has_extension_1_0(c_1, t);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = must_be_pp_0_0(t);
      t = lookup_or_parse_0_0(t);
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
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
      ATerm m_3 = NULL;
      t = ensure_pp_table_parsed_0_0(t);
      m_3 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, m_3), term_e_12);
      return(t);
    }
    t = map_1_0(d_1, t);
    t = concat_0_0(t);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm f_1 (ATerm t)
        {
          t = term_g_12;
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
ATerm build_impl_args_0_0 (ATerm t)
{
  t = create_pp_table_args_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  p_3 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = p_3;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          q_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(q_3, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,w_3 = NULL;
  if(match_cons(t, sym__2))
    {
      t_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_3, term_i_12);
  t = open_stream_0_0(t);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_3, u_3);
  t = r_65(t);
  t = fclose_0_0(t);
  t = u_3;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_12 = ATgetArgument(t, 0);
        if(match_cons(j_12, sym_Stream_1))
          {
            x_3 = ATgetArgument(j_12, 0);
          }
        else
          _fail(t);
        y_3 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(x_3, y_3);
    z_3 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, z_3);
    return(t);
  }
  t = WriteToFile_1_0(g_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  a_4 = t;
  t = xtc_new_file_0_0(t);
  b_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_4, a_4);
  t = WriteToBinaryFile_0_0(t);
  t = SSL_close_file(b_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, b_4);
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
  ATerm d_4 = NULL;
  ATerm i_1 (ATerm t)
  {
    ATerm f_4 = NULL;
    f_4 = t;
    t = SSL_explode_string(f_4);
    return(t);
  }
  t = map_1_0(i_1, t);
  t = concat_0_0(t);
  d_4 = t;
  t = SSL_implode_string(d_4);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
  c_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      d_5 = ATgetArgument(t, 0);
      {
        ATerm h_1 = NULL;
        t = SSL_int_to_string(d_5);
        h_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_12), h_1), term_k_12);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm w_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          d_5 = ATgetArgument(t, 0);
          f_5 = ATgetArgument(t, 1);
          g_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_5);
      w_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_5), term_n_12), w_1), term_m_12), d_5);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm j_5 = NULL;
  ATerm j_1 (ATerm t)
  {
    t = w_69(t);
    j_5 = t;
    return(t);
  }
  t = fetch_1_0(j_1, t);
  t = not_null(j_5);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm k_5 = NULL;
  k_5 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_20), term_q_20), term_j_20), term_e_20), term_u_19), term_f_19), term_z_18), term_s_18), term_o_18), term_z_17), term_t_17), term_i_17), term_e_17), term_a_17), term_q_16), term_f_16), term_w_15), term_j_15), term_z_14), term_r_14), term_f_14), term_b_14), term_u_13), term_o_13), term_k_13), term_g_13), term_c_13), term_t_12);
        {
          ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm z_20 = ATgetArgument(t, 0);
                if((k_5 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm a_21 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(k_1, t);
        }
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, k_5);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm l_5 = NULL;
  l_5 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm o_5 = NULL,p_5 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm e_21 = ATgetArgument(t, 0);
          o_5 = ATgetArgument(t, 1);
          {
            ATerm f_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_5;
      {
        ATerm g_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_21;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        p_5 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_5), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
        t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, p_5), term_j_21));
      }
      return(t);
    }
    t = try_1_0(l_1, t);
    t = l_5;
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
  ATerm y_5 = NULL,a_6 = NULL;
  y_5 = t;
  t = fork_0_0(t);
  a_6 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = y_5;
        t = e_64(t);
        ;
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATmakeAppl(sym__2, a_6, y_5);
        t = f_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm e_6 = NULL;
  ATerm m_1 (ATerm t)
  {
    ATerm k_6 = NULL;
    if(match_cons(t, sym__2))
      {
        k_6 = ATgetArgument(t, 0);
        e_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_waitpid(k_6);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm n_21 = ATgetArgument(t, 0);
        if(((ATgetType(n_21) != AT_INT) || (ATgetInt((ATermInt) n_21) != 0)))
          _fail(t);
        {
          ATerm r_21 = ATgetArgument(t, 1);
        }
        {
          ATerm s_21 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = e_6;
    return(t);
  }
  t = fork_2_0(g_64, m_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm o_6 = NULL,w_6 = NULL;
  if(match_cons(t, sym__2))
    {
      o_6 = ATgetArgument(t, 0);
      w_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_1 (ATerm t)
    {
      t = SSL_execvp(o_6, w_6);
      return(t);
    }
    t = fork_and_wait_1_0(n_1, t);
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_6 = NULL;
  y_6 = t;
  t = SSL_table_keys(y_6);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm e_7 = NULL,g_7 = NULL;
      e_7 = t;
      t = SSL_table_get(y_6, e_7);
      g_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_7, g_7);
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
    ATerm k_7 = NULL,l_7 = NULL;
    k_7 = t;
    t = term_t_9;
    t = get_config_0_0(t);
    l_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_7, term_c_20);
    t = geq_0_0(t);
    t = k_7;
    t = c_81(t);
    return(t);
  }
  t = try_1_0(p_1, t);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, r_7));
  {
    ATerm q_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((s_7 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          t_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_1, t);
    t = not_null(t_7);
  }
  return(t);
}
ATerm filter_1_0 (ATerm d_77 (ATerm), ATerm t)
{
  ATerm u_21 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = u_21;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_1 (ATerm t)
            {
              t = filter_1_0(d_77, t);
              return(t);
            }
            t = Cons_2_0(d_77, r_1, t);
            ;
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            {
              ATerm x_7 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_22 = ATgetFirst((ATermList) t);
                  x_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_7;
              t = filter_1_0(d_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm x_78 (ATerm), ATerm t)
{
  ATerm z_7 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      t = x_78(t);
      t = z_7(t);
      return(t);
    }
    t = try_1_0(s_1, t);
    return(t);
  }
  t = z_7(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  {
    ATerm t_1 (ATerm t)
    {
      t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm g_22 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_22;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_1, t);
    t = a_8;
  }
  return(t);
}
ATerm say_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm c_8 = NULL,d_2 = NULL;
  c_8 = t;
  t = h_65(t);
  d_2 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, d_2));
  t = c_8;
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL;
    d_8 = t;
    t = term_t_9;
    t = get_config_0_0(t);
    e_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_8, term_n_15);
    t = geq_0_0(t);
    t = d_8;
    t = b_81(t);
    return(t);
  }
  t = try_1_0(u_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL;
    f_8 = t;
    t = term_t_9;
    t = get_config_0_0(t);
    g_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_8, term_i_13);
    t = geq_0_0(t);
    t = f_8;
    t = d_81(t);
    return(t);
  }
  t = try_1_0(v_1, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_8 = ATgetFirst((ATermList) t);
      m_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_73(t);
  {
    ATerm x_1 (ATerm t)
    {
      ATerm n_8 = NULL;
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_8, n_8);
      t = r_73(t);
      return(t);
    }
    t = fetch_1_0(x_1, t);
    t = m_8;
  }
  return(t);
}
ATerm union_1_0 (ATerm n_73 (ATerm), ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      p_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_8;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm h_22 = t;
      int k_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_8;
          ;
          LocalPopChoice(k_22);
        }
      else
        {
          t = h_22;
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_2 (ATerm t)
                {
                  t = o_8;
                  return(t);
                }
                t = HdMember_p__2_0(n_73, a_2, t);
                t = q_8(t);
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                t = Cons_2_0(_id, q_8, t);
              }
          }
        }
      return(t);
    }
    t = q_8(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm r_8 = NULL;
    if(match_cons(t, sym__2))
      {
        r_8 = ATgetArgument(t, 0);
        if((r_8 != ATgetArgument(t, 1)))
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
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
  if(match_cons(t, sym__3))
    {
      u_8 = ATgetArgument(t, 0);
      v_8 = ATgetArgument(t, 1);
      w_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_8, v_8);
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_22 = ATgetArgument(t, 0);
            ATerm v_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(u_8, v_8);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
        t = (ATerm) ATempty;
      }
    x_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_8, w_8);
    t = union_0_0(t);
    y_8 = t;
    t = SSL_table_put(u_8, v_8, y_8);
    t = (ATerm) ATmakeAppl(sym__3, u_8, v_8, w_8);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  if(match_cons(t, sym__2))
    {
      a_9 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_8;
  {
    ATerm c_2 (ATerm t)
    {
      ATerm f_9 = NULL,h_9 = NULL;
      if(match_cons(t, sym__2))
        {
          f_9 = ATgetArgument(t, 0);
          h_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, a_9, f_9, h_9);
      t = m_81(t);
      return(t);
    }
    t = map_1_0(c_2, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_10 (ATerm v_9, ATerm t)
  {
    t = SSL_fclose(v_9);
    return(t);
  }
  ATerm y_9 = NULL,c_10 = NULL;
  c_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_9 = ATgetArgument(t, 0);
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_9);
            ;
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            t = f_10(c_10, t);
          }
      }
    }
  else
    {
      t = f_10(c_10, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_10 = NULL;
  t = SSL_stdin_stream();
  g_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_10 = NULL;
  t = SSL_stdout_stream();
  h_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  t = SSL_stderr_stream();
  i_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_10);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  k_10 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_10;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_10;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_10;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      ATerm a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 = NULL,v_3 = NULL;
        r_3 = t;
        t = SSL_explode_term(r_3);
        if(match_cons(t, sym__2))
          {
            ATerm d_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_23) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_23 = ATgetArgument(t, 1);
              if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
                {
                  v_3 = ATgetFirst((ATermList) e_23);
                  {
                    ATerm f_23 = (ATerm) ATgetNext((ATermList) e_23);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_3;
        t = stdio_stream_0_0(t);
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
              ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
              ATerm e_2 (ATerm t)
              {
                ATerm q_10 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    q_10 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_10;
                return(t);
              }
              t = _2_0(e_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  n_10 = ATgetArgument(t, 0);
                  o_10 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(n_10, o_10);
              p_10 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, p_10);
              ;
              LocalPopChoice(h_23);
            }
          else
            {
              t = g_23;
              {
                ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
                ATerm f_2 (ATerm t)
                {
                  ATerm u_10 = NULL;
                  u_10 = t;
                  t = SSL_is_string(u_10);
                  return(t);
                }
                t = _2_0(f_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    r_10 = ATgetArgument(t, 0);
                    s_10 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(r_10, s_10);
                t_10 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, t_10);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL;
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_10, term_k_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_l_23;
          return(t);
        }
        t = debug_1_0(g_2, t);
        _fail(t);
      }
    }
  v_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(x_10);
  w_10 = t;
  t = v_10;
  t = fclose_0_0(t);
  t = w_10;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 = NULL;
      e_4 = t;
      t = SSL_access(e_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(n_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = m_23;
      {
        ATerm o_23 = t;
        int p_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = t;
            if((PushChoice() == 0))
              {
                ATerm h_4 = NULL;
                h_4 = t;
                t = SSL_access(h_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_23;
              }
            {
              ATerm h_2 (ATerm t)
              {
                t = term_r_23;
                return(t);
              }
              t = debug_1_0(h_2, t);
            }
            ;
            LocalPopChoice(p_23);
          }
        else
          {
            t = o_23;
            {
              ATerm i_2 (ATerm t)
              {
                t = term_s_23;
                return(t);
              }
              t = debug_1_0(i_2, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = term_t_23;
        return(t);
      }
      t = debug_1_0(k_2, t);
      return(t);
    }
    t = if_verbose5_1_0(j_2, t);
    {
      ATerm u_23 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, b_11));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_23;
        }
      c_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, b_11));
      t = c_11;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm m_2 (ATerm t)
          {
            t = term_v_23;
            return(t);
          }
          t = debug_1_0(m_2, t);
          return(t);
        }
        t = if_verbose4_1_0(l_2, t);
        t = read_repository_file_0_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm o_2 (ATerm t)
            {
              t = term_w_23;
              return(t);
            }
            t = say_1_0(o_2, t);
            return(t);
          }
          t = if_verbose6_1_0(n_2, t);
          d_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_23, d_11);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm s_2 (ATerm t)
            {
              ATerm t_2 (ATerm t)
              {
                t = term_y_23;
                return(t);
              }
              t = say_1_0(t_2, t);
              return(t);
            }
            t = if_verbose6_1_0(s_2, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, b_11), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_x_23, (ATerm)ATmakeAppl(sym_Imported_1, b_11), (ATerm) ATempty);
            {
              ATerm d_3 (ATerm t)
              {
                ATerm f_3 (ATerm t)
                {
                  t = term_w_23;
                  return(t);
                }
                t = say_1_0(f_3, t);
                return(t);
              }
              t = if_verbose4_1_0(d_3, t);
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
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm g_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      t = term_e_24;
      return(t);
    }
    t = debug_1_0(i_3, t);
    return(t);
  }
  t = if_verbose5_1_0(g_3, t);
  e_11 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = e_11;
    {
      ATerm k_3 (ATerm t)
      {
        ATerm n_3 (ATerm t)
        {
          t = term_h_24;
          return(t);
        }
        t = debug_1_0(n_3, t);
        return(t);
      }
      t = if_verbose5_1_0(k_3, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm s_3 (ATerm t)
        {
          t = term_k_24;
          return(t);
        }
        t = debug_1_0(s_3, t);
        return(t);
      }
      t = if_verbose5_1_0(o_3, t);
      t = xtc_load_0_0(t);
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            {
              ATerm k_4 = NULL,m_4 = NULL;
              k_4 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, k_4));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_24 = ATgetFirst((ATermList) t);
                  if(match_cons(n_24, sym__2))
                    {
                      ATerm p_24 = ATgetArgument(n_24, 0);
                      m_4 = ATgetArgument(n_24, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_24 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_4;
            }
          }
        {
          ATerm c_4 (ATerm t)
          {
            ATerm g_4 (ATerm t)
            {
              t = term_k_24;
              return(t);
            }
            t = debug_1_0(g_4, t);
            return(t);
          }
          t = if_verbose5_1_0(c_4, t);
        }
      }
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm f_11 = NULL;
        f_11 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), f_11), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_24), f_11), term_q_24);
        {
          ATerm i_4 (ATerm t)
          {
            t = term_x_23;
            t = table_getlist_0_0(t);
            {
              ATerm j_4 (ATerm t)
              {
                t = term_s_24;
                return(t);
              }
              t = debug_1_0(j_4, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(i_4, t);
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
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  t = q_83(t);
  t = xtc_find_warning_0_0(t);
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_11, h_11);
  t = call_0_0(t);
  t = h_11;
  return(t);
}
ATerm assert_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(match_cons(t, sym__2))
    {
      j_11 = ATgetArgument(t, 0);
      k_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_80(t);
  l_11 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_11, j_11, k_11);
  t = table_push_0_0(t);
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_11, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_11 = ATgetFirst((ATermList) t);
        n_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_11, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_11), (ATerm) ATinsert(CheckATermList(m_11), j_11)));
    t = (ATerm) ATmakeAppl(sym__2, j_11, k_11);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm o_11 = NULL;
  o_11 = t;
  t = k_65(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = term_v_24;
      return(t);
    }
    t = debug_1_0(l_4, t);
    t = o_11;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_12 (ATerm s_11, ATerm t)
  {
    t = s_11;
    {
      ATerm w_24 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_24 = ATgetArgument(t, 0);
              ATerm y_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_24;
        }
      {
        ATerm n_4 (ATerm t)
        {
          t = term_z_24;
          return(t);
        }
        t = obsolete_1_0(n_4, t);
        t = (ATerm) ATmakeAppl(sym__2, s_11, term_i_12);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm d_12 (ATerm u_11, ATerm v_11, ATerm w_11, ATerm t)
  {
    t = SSL_open_file(u_11, v_11);
    return(t);
  }
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_12(z_11, t);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = d_12(a_12, b_12, z_11, t);
          }
      }
    }
  else
    {
      t = c_12(z_11, t);
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
  ATerm f_12 = NULL;
  t = term_c_25;
  t = new_0_0(t);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_12, term_d_25);
  t = conc_strings_0_0(t);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm z_4 = NULL;
      z_4 = t;
      t = SSL_access(z_4, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(o_4, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm h_12 = NULL;
  t = new_file_0_0(t);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_12, term_i_12);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, h_12, term_c_25);
  {
    ATerm p_4 (ATerm t)
    {
      t = term_e_25;
      return(t);
    }
    t = assert_1_0(p_4, t);
    t = h_12;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm m_5 = NULL,n_5 = NULL;
      t = u_12;
      t = xtc_new_file_0_0(t);
      m_5 = t;
      t = m_0(t);
      n_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_5, (ATerm) ATinsert(ATinsert(ATempty, m_5), term_f_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(m_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_5);
    }
  else
    {
      ATerm t_5 = NULL,u_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_12;
      t = xtc_new_file_0_0(t);
      t_5 = t;
      t = m_0(t);
      u_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_5), term_f_25), v_12), term_g_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(t_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, t_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm b_62 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      z_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_13);
  y_12 = t;
  t = z_12;
  t = b_62(t);
  a_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, a_13), y_12);
  return(t);
}
ATerm xtc_transform_2_0 (ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_25 = t;
      int k_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(k_25);
        }
      else
        {
          t = j_25;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(i_25);
      t = xtc_transform_file_2_0(s_83, t_83, t);
    }
  else
    {
      t = h_25;
      t = xtc_transform_term_2_0(s_83, t_83, t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym_FILE_1))
    {
      s_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_5 = NULL;
        t = r_13;
        t = k_0(t);
        z_5 = t;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(s_13, z_5);
          t = (ATerm) ATmakeAppl(sym_FILE_1, s_13);
        }
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_6 = NULL;
              t = r_13;
              t = k_0(t);
              g_6 = t;
              {
                ATerm r_25 = t;
                if((PushChoice() == 0))
                  {
                    ATerm s_25 = t;
                    int t_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(t_25);
                      }
                    else
                      {
                        t = s_25;
                        {
                          ATerm u_25 = t;
                          int v_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(v_25);
                            }
                          else
                            {
                              t = u_25;
                              {
                                ATerm h_6 = NULL;
                                h_6 = t;
                                if((s_13 != t))
                                  {
                                    _fail(t);
                                  }
                                t = h_6;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_25;
                  }
                t = SSL_copy(s_13, g_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, s_13);
              }
              ;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              t = r_13;
              t = k_0(t);
              if((s_13 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, s_13);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            ATerm z_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(y_13, z_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_26 = ATgetFirst((ATermList) t);
            j_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_6;
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
    a_14 = t;
    t = SSL_table_put(y_13, z_13, a_14);
    t = (ATerm) ATmakeAppl(sym__2, y_13, z_13);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_79 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  h_14 = t;
  t = y_79(t);
  i_14 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_14 = ATgetFirst((ATermList) t);
        j_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_14, (ATerm)ATmakeAppl(sym_Scopes_0), j_14);
    t = k_14;
    {
      ATerm q_4 (ATerm t)
      {
        ATerm l_14 = NULL;
        l_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_14, l_14);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_4, t);
      t = h_14;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_80 (ATerm), ATerm u_80 (ATerm), ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_80(t);
      t = u_80(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      t = u_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
  o_14 = t;
  t = x_79(t);
  p_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_14, term_f_26);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            ATerm j_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_14, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = (ATerm) ATempty;
      }
    q_14 = t;
    t = SSL_table_put(p_14, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(q_14), (ATerm) ATempty));
    t = o_14;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm v_14 = NULL;
  ATerm r_4 (ATerm t)
  {
    t = term_e_25;
    return(t);
  }
  t = begin_scope_1_0(r_4, t);
  {
    ATerm s_4 (ATerm t)
    {
      ATerm w_14 = NULL;
      w_14 = t;
      {
        ATerm k_26 = t;
        int l_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(l_26);
          }
        else
          {
            t = k_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_14 = ATgetFirst((ATermList) t);
            {
              ATerm m_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_14;
        {
          ATerm t_4 (ATerm t)
          {
            ATerm u_4 (ATerm t)
            {
              ATerm x_14 = NULL;
              x_14 = t;
              t = SSL_remove(x_14);
              return(t);
            }
            t = try_1_0(u_4, t);
            return(t);
          }
          t = map_1_0(t_4, t);
          t = w_14;
          {
            ATerm v_4 (ATerm t)
            {
              t = term_e_25;
              return(t);
            }
            t = end_scope_1_0(v_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(c_83, s_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_14 = NULL;
        t = term_g_25;
        t = get_config_0_0(t);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_14);
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        t = term_p_26;
      }
    t = d_83(t);
    {
      ATerm x_4 (ATerm t)
      {
        ATerm q_26 = t;
        int r_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_f_25;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(r_26);
          }
        else
          {
            t = q_26;
            t = term_l_9;
          }
        return(t);
      }
      t = copy_to_1_0(x_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(w_4, t);
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      t = term_s_26;
      return(t);
    }
    t = xtc_transform_2_0(a_5, build_impl_args_0_0, t);
    return(t);
  }
  t = xtc_io_1_0(y_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm a_15 = NULL;
    a_15 = t;
    if(match_string(t, "-k"))
      {
        t = a_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = a_15;
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    ATerm b_15 = NULL,c_15 = NULL;
    b_15 = t;
    t = SSL_string_to_int(b_15);
    c_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), c_15);
    t = b_15;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_t_26;
    return(t);
  }
  t = ArgOption_3_0(b_5, e_5, h_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_5 (ATerm t)
      {
        ATerm e_15 = NULL;
        e_15 = t;
        if(match_string(t, "-S"))
          {
            t = e_15;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = e_15;
          }
        return(t);
      }
      ATerm q_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_x_26;
        return(t);
      }
      ATerm r_5 (ATerm t)
      {
        t = term_y_26;
        return(t);
      }
      t = Option_3_0(i_5, q_5, r_5, t);
      ;
      LocalPopChoice(v_26);
    }
  else
    {
      t = u_26;
      {
        ATerm z_26 = t;
        int a_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_5 (ATerm t)
            {
              ATerm f_15 = NULL,g_15 = NULL;
              f_15 = t;
              t = SSL_string_to_int(f_15);
              g_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), g_15);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, f_15);
              return(t);
            }
            ATerm w_5 (ATerm t)
            {
              t = term_b_27;
              return(t);
            }
            t = ArgOption_3_0(s_5, v_5, w_5, t);
            ;
            LocalPopChoice(a_27);
          }
        else
          {
            t = z_26;
            {
              ATerm x_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm b_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_c_27;
                return(t);
              }
              ATerm c_6 (ATerm t)
              {
                t = term_d_27;
                return(t);
              }
              t = Option_3_0(x_5, b_6, c_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm l_15 = NULL;
    l_15 = t;
    if(match_string(t, "-o"))
      {
        t = l_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = l_15;
      }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    ATerm m_15 = NULL;
    m_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_15);
    t = (ATerm) ATmakeAppl(sym_Output_1, m_15);
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_g_27;
    return(t);
  }
  t = ArgOption_3_0(d_6, f_6, i_6, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm l_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm m_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_27;
          return(t);
        }
        ATerm n_6 (ATerm t)
        {
          t = term_k_27;
          return(t);
        }
        t = Option_3_0(l_6, m_6, n_6, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    ATerm q_15 = NULL;
    q_15 = t;
    if(match_string(t, "-i"))
      {
        t = q_15;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = q_15;
      }
    return(t);
  }
  ATerm q_6 (ATerm t)
  {
    ATerm r_15 = NULL;
    r_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), r_15);
    t = (ATerm) ATmakeAppl(sym_Input_1, r_15);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = term_l_27;
    return(t);
  }
  t = ArgOption_3_0(p_6, q_6, r_6, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15;
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        t = (ATerm) ATempty;
      }
    u_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_15, u_15);
    t = conc_0_0(t);
    v_15 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), s_15, v_15);
    t = (ATerm) ATmakeAppl(sym__3, term_s_27, s_15, v_15);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  y_15 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_15;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm g_16 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_15 = ATgetFirst((ATermList) t);
          a_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_16;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_16 = ATgetFirst((ATermList) t);
          c_16 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_15;
      t = h_0(t);
      t = b_16;
      t = i_0(t);
      g_16 = t;
      t = (ATerm) ATinsert(CheckATermList(c_16), g_16);
    }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm s_6 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    ATerm h_16 = NULL;
    h_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_12, (ATerm) ATinsert(ATempty, h_16));
    t = extend_config_0_0(t);
    t = h_16;
    return(t);
  }
  ATerm u_6 (ATerm t)
  {
    t = term_t_27;
    return(t);
  }
  t = ArgOption_3_0(s_6, t_6, u_6, t);
  return(t);
}
ATerm ast2abox_options_0_0 (ATerm t)
{
  ATerm u_27 = t;
  int v_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(v_27);
    }
  else
    {
      t = u_27;
      t = io_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  i_16 = t;
  t = term_c_25;
  t = whoami_0_0(t);
  j_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), j_16), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = i_16;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_16 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_25;
  t = whoami_0_0(t);
  k_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), k_16));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_27;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm a_76 (ATerm), ATerm b_76 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_76(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm n_16 = NULL,o_16 = NULL,r_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_16 = ATgetFirst((ATermList) t);
            o_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_16;
        t = foldr_2_0(a_76, b_76, t);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_16, r_16);
        t = b_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm y_73 (ATerm), ATerm z_73 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm z_27 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_16;
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
  ATerm u_16 = NULL;
  t = times_0_0(t);
  {
    ATerm v_6 (ATerm t)
    {
      t = term_w_26;
      return(t);
    }
    ATerm x_6 (ATerm t)
    {
      ATerm v_16 = NULL,x_16 = NULL;
      if(match_cons(t, sym__2))
        {
          v_16 = ATgetArgument(t, 0);
          x_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(v_16, x_16);
            ;
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            t = SSL_addr(v_16, x_16);
          }
      }
      return(t);
    }
    t = crush_2_0(v_6, x_6, t);
    u_16 = t;
    t = SSL_TicksToSeconds(u_16);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
  j_17 = t;
  if(match_cons(t, sym__2))
    {
      k_17 = ATgetArgument(t, 0);
      l_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_17;
        if((k_17 != t))
          {
            _fail(t);
          }
        t = j_17;
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        t = j_17;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_17, l_17);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              t = SSL_gtr(k_17, l_17);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_17, l_17);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    ATerm o_17 = NULL,p_17 = NULL;
    o_17 = t;
    t = term_t_9;
    t = get_config_0_0(t);
    p_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_17, term_r_12);
    t = geq_0_0(t);
    t = o_17;
    t = y_80(t);
    return(t);
  }
  t = try_1_0(z_6, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm a_7 (ATerm t)
  {
    ATerm r_17 = NULL,s_17 = NULL;
    t = run_time_0_0(t);
    r_17 = t;
    t = term_c_25;
    t = whoami_0_0(t);
    s_17 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), r_17), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), s_17));
    t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_28), r_17), term_m_12), s_17));
    return(t);
  }
  t = if_verbose1_1_0(a_7, t);
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
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm b_7 (ATerm t)
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              {
                ATerm m_28 = t;
                int n_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(n_28);
                  }
                else
                  {
                    t = m_28;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(b_7, t);
      }
    }
  t = k_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_17 = ATgetFirst((ATermList) t);
      w_17 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_18 = NULL,b_18 = NULL;
        t = w_17;
        t = g_0(t);
        a_18 = t;
        t = v_17;
        t = f_0(t);
        b_18 = t;
        t = w_17;
        {
          ATerm c_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_18), b_18);
            return(t);
          }
          t = reverse_acc_2_0(f_0, c_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_25;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, d_7, t);
  return(t);
}
ATerm Program_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  f_18 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_18);
  c_18 = t;
  t = d_18;
  t = i_62(t);
  e_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_18), c_18);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_28);
    }
  else
    {
      t = o_28;
      {
        ATerm f_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(f_7, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_q_28;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm j_18 = NULL;
      j_18 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, j_18), term_r_28);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(h_7, t);
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  n_18 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_18);
  k_18 = t;
  t = l_18;
  t = j_62(t);
  m_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, m_18), k_18);
  return(t);
}
ATerm fetch_1_0 (ATerm u_69 (ATerm), ATerm t)
{
  ATerm t_18 (ATerm t)
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(u_69, _id, t);
        ;
        LocalPopChoice(t_28);
      }
    else
      {
        t = s_28;
        t = Cons_2_0(_id, t_18, t);
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm f_86 (ATerm), ATerm t)
{
  t = fetch_1_0(f_86, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  v_18 = t;
  {
    ATerm u_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_18;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_28 = ATgetFirst((ATermList) t);
                ATerm x_28 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_18;
          }
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = u_28;
        t = (ATerm) ATinsert(ATempty, v_18);
      }
    w_18 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), w_18);
    t = v_18;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_27;
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
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_28);
    }
  else
    {
      t = y_28;
      {
        ATerm c_19 = NULL,d_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_19 = ATgetFirst((ATermList) t);
            d_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_19;
        {
          ATerm i_7 (ATerm t)
          {
            t = d_19;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(i_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  h_19 = t;
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      ATerm a_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_19;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_70 (ATerm), ATerm t)
{
  ATerm j_19 (ATerm t)
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_19, t);
        ;
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_70(t);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_19;
  {
    ATerm j_7 (ATerm t)
    {
      t = k_19;
      return(t);
    }
    t = at_end_1_0(j_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_19);
  m_19 = t;
  t = n_19;
  t = t_55(t);
  p_19 = t;
  t = o_19;
  t = u_55(t);
  q_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_19, q_19), m_19);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  ATerm m_7 (ATerm t)
  {
    ATerm w_19 = NULL;
    w_19 = t;
    t = SSL_explode_string(w_19);
    return(t);
  }
  ATerm n_7 (ATerm t)
  {
    ATerm x_19 = NULL;
    x_19 = t;
    t = SSL_explode_string(x_19);
    return(t);
  }
  t = _2_0(m_7, n_7, t);
  t = conc_0_0(t);
  v_19 = t;
  t = SSL_implode_string(v_19);
  return(t);
}
ATerm debug_1_0 (ATerm d_65 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL;
  z_19 = t;
  t = d_65(t);
  a_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_19), a_20));
  t = z_19;
  return(t);
}
ATerm map_1_0 (ATerm k_69 (ATerm), ATerm t)
{
  ATerm b_20 (ATerm t)
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = Cons_2_0(k_69, b_20, t);
      }
    return(t);
  }
  t = b_20(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_20 = NULL;
      h_20 = t;
      t = SSL_is_string(h_20);
      ;
      LocalPopChoice(i_29);
    }
  else
    {
      t = h_29;
      {
        ATerm j_29 = t;
        int k_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_7, t);
            ;
            LocalPopChoice(k_29);
          }
        else
          {
            t = j_29;
            {
              ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
              l_20 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_20 = ATgetArgument(t, 0);
                  t = m_20;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_20 = ATgetArgument(t, 0);
                      t = m_20;
                      {
                        ATerm l_29 = t;
                        int m_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_29);
                          }
                        else
                          {
                            t = l_29;
                            {
                              ATerm p_7 (ATerm t)
                              {
                                t = term_n_29;
                                return(t);
                              }
                              t = debug_1_0(p_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_20 = NULL,s_20 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_20 = ATgetArgument(t, 0);
                          n_20 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_20;
                      t = eval_config_0_0(t);
                      r_20 = t;
                      t = n_20;
                      t = eval_config_0_0(t);
                      s_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_20, s_20);
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
  ATerm v_20 = NULL;
  v_20 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_20);
  {
    ATerm q_7 (ATerm t)
    {
      ATerm w_20 = NULL;
      t = eval_config_0_0(t);
      w_20 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_20, w_20);
      t = w_20;
      return(t);
    }
    t = try_1_0(q_7, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_80(t);
      ;
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_7 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm v_7 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_t_29;
        return(t);
      }
      ATerm w_7 (ATerm t)
      {
        t = term_u_29;
        return(t);
      }
      t = Option_3_0(u_7, v_7, w_7, t);
      ;
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
      {
        ATerm y_7 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_29;
          return(t);
        }
        ATerm h_8 (ATerm t)
        {
          t = term_w_29;
          return(t);
        }
        t = Option_3_0(y_7, b_8, h_8, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__3))
    {
      b_21 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
      d_21 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_21, c_21);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_29 = ATgetArgument(t, 0);
            ATerm a_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_21, c_21);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
    h_21 = t;
    t = SSL_table_put(b_21, c_21, (ATerm) ATinsert(CheckATermList(h_21), d_21));
    t = (ATerm) ATmakeAppl(sym__3, b_21, c_21, d_21);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm k_87 (ATerm), ATerm t)
{
  ATerm m_21 = NULL;
  t = term_c_25;
  t = k_87(t);
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_30, term_c_30, m_21);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
  o_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = o_21;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm t_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_21 = ATgetFirst((ATermList) t);
          q_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_21;
      t = a_0(t);
      t = term_c_25;
      t = b_0(t);
      t_21 = t;
      t = (ATerm) ATinsert(CheckATermList(q_21), t_21);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm v_21 = NULL;
    v_21 = t;
    if(match_string(t, "--help"))
      {
        t = v_21;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = v_21;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = v_21;
          }
      }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_d_30;
    return(t);
  }
  ATerm k_8 (ATerm t)
  {
    t = term_e_30;
    return(t);
  }
  t = Option_3_0(i_8, j_8, k_8, t);
  return(t);
}
ATerm Cons_2_0 (ATerm c_57 (ATerm), ATerm d_57 (ATerm), ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  b_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_21 = ATgetFirst((ATermList) t);
      y_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_22);
  w_21 = t;
  t = x_21;
  t = c_57(t);
  z_21 = t;
  t = y_21;
  t = d_57(t);
  a_22 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(a_22), z_21), w_21);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  {
    ATerm s_8 (ATerm t)
    {
      t = term_f_30;
      t = i_87(t);
      return(t);
    }
    t = try_1_0(s_8, t);
    t = i_22;
    {
      ATerm t_8 (ATerm t)
      {
        ATerm j_22 = NULL;
        j_22 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_22);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_22);
        return(t);
      }
      ATerm b_9 (ATerm t)
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
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
                t = i_87(t);
                t = Cons_2_0(_id, b_9, t);
              }
            ;
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm l_22 = NULL,m_22 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_22 = ATgetFirst((ATermList) t);
                  m_22 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_22), (ATerm) ATmakeAppl(sym_Undefined_1, l_22));
            }
          }
        return(t);
      }
      t = Cons_2_0(t_8, b_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  s_22 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = s_22;
  {
    ATerm c_9 (ATerm t)
    {
      ATerm k_30 = t;
      int l_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_87(t);
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
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_30);
              }
            else
              {
                t = m_30;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_9, t);
    {
      ATerm d_9 (ATerm t)
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_22 = NULL;
            z_22 = t;
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_22;
                  {
                    ATerm s_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_j_28;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = s_30;
                        {
                          ATerm e_9 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(e_9, t);
                        }
                      }
                    t = z_22;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  t = term_s_29;
                  t = get_config_0_0(t);
                  t = z_22;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm g_9 (ATerm t)
              {
                ATerm i_9 (ATerm t)
                {
                  t_22 = t;
                  return(t);
                }
                t = Undefined_1_0(i_9, t);
                return(t);
              }
              t = option_defined_1_0(g_9, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_22)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_i_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_22)), term_u_30));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(d_9, t);
      u_22 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = u_22;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm p_85 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  t = parse_options_1_0(m_85, t);
  o_15 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), o_15);
  t = o_15;
  t = o_85(t);
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_85, t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_30);
            }
          else
            {
              t = x_30;
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
ATerm io_ast2abox_0_0 (ATerm t)
{
  t = option_wrap_2_0(ast2abox_options_0_0, ast2abox_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_ast2abox_0_0(t);
  return(t);
}
