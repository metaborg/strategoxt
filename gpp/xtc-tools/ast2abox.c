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
ATerm term_z_39;
ATerm term_o_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_s_38;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_g_37;
ATerm term_d_37;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_v_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_b_35;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_s_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_a_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
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
ATerm term_j_29;
ATerm term_e_29;
ATerm term_j_28;
ATerm term_a_28;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_k_25;
ATerm term_e_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_d_23;
ATerm term_m_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_z_19;
ATerm term_v_19;
ATerm term_n_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_n_16;
ATerm term_k_16;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_f_14;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_v_11;
ATerm term_u_10;
ATerm term_a_10;
ATerm term_b_9;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_h_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_y_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_h_5;
void init_constant_terms (void)
{
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_6, term_y_5, term_w_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_6, term_s_5, term_z_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_7, term_c_7, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_7, term_g_7, term_h_7);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_7, term_m_7, term_b_9);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_10, term_v_11, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_m_13, term_o_13);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_q_15, term_r_15);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_i_17, term_j_17);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_18, term_e_19, term_n_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_j_20, term_k_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_21, term_f_21, term_g_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_21, term_q_21, term_r_21);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_21, term_v_21, term_y_21);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_22, term_d_23, term_m_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_24, term_q_24, term_r_24);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_24, term_y_24, term_e_25);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_25, term_o_25, term_i_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_26, term_l_26, term_m_26);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_26, term_t_26, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_27, term_f_27, term_a_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_29, term_j_29, term_s_29);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_29, term_v_29, term_w_29);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_29, term_z_29, term_a_30);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_30, term_d_30, term_e_30);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_30, term_h_30, term_i_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_30, term_l_30, term_m_30);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_h_31);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_a_31, term_o_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_n_33);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Ast-2-abox", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym__2, term_r_5, term_l_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_35);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym__2, term_s_35, term_w_33);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_b_36, term_w_33);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__2, term_q_37, term_r_37);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym__2, term_x_38, term_w_33);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym__2, term_a_39, term_w_33);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_w_33);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__3, term_q_37, term_r_37, (ATerm) ATempty);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm rename_file_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm xtc_transform_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm xtc_parse_pp_table_0_0 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm modification_time_0_0 (ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm lookup_or_parse_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm must_be_pp_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm m_70 (ATerm), ATerm);
ATerm has_extension_1_0 (ATerm o_78 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm l_64 (ATerm), ATerm m_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm f_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm j_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm);
ATerm union_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm r_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm i_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm ast2abox_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
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
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm n_87 (ATerm), ATerm);
ATerm Program_1_0 (ATerm p_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm n_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm s_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_87 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm p_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm io_ast2abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm i_7 = NULL,j_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_7 = ATgetArgument(t, 0);
      if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_rename(not_null(i_7), not_null(j_7));
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_8 (ATerm n_7, ATerm o_7, ATerm t)
  {
    ATerm p_7 = NULL,q_7 = NULL;
    t = not_null(n_7);
    if(((p_7 != NULL) && (p_7 != t)))
      _fail(t);
    else
      p_7 = t;
    t = not_null(o_7);
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    t = n_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_7), term_h_5);
    t = copy_file_0_0(t);
    t = not_null(p_7);
    t = remove_file_0_0(t);
    t = term_h_5;
    return(t);
  }
  ATerm c_8 (ATerm r_7, ATerm s_7, ATerm t)
  {
    ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL;
    t = not_null(r_7);
    if(((t_7 != NULL) && (t_7 != t)))
      _fail(t);
    else
      t_7 = t;
    t = not_null(s_7);
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = n_0(t);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    {
      ATerm i_5 = t;
      if((PushChoice() == 0))
        {
          ATerm j_5 = t;
          int k_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(k_5);
            }
          else
            {
              t = j_5;
              {
                ATerm w_7 = NULL;
                if(((w_7 != NULL) && (w_7 != t)))
                  _fail(t);
                else
                  w_7 = t;
                if(((t_7 != NULL) && (t_7 != t)))
                  _fail(t);
                else
                  t_7 = t;
                t = not_null(w_7);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_5;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_7), not_null(v_7));
      t = rename_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_7));
    }
    return(t);
  }
  ATerm x_7 = NULL,y_7 = NULL;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_5 = t;
    int m_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_8(not_null(y_7), not_null(x_7), t);
        ;
        LocalPopChoice(m_5);
      }
    else
      {
        t = l_5;
        {
          ATerm n_5 = t;
          int o_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_8(not_null(y_7), not_null(x_7), t);
              ;
              LocalPopChoice(o_5);
            }
          else
            {
              t = n_5;
              {
                ATerm z_7 = NULL,a_8 = NULL;
                t = not_null(y_7);
                if(((z_7 != NULL) && (z_7 != t)))
                  _fail(t);
                else
                  z_7 = t;
                t = not_null(x_7);
                if(((a_8 != NULL) && (a_8 != t)))
                  _fail(t);
                else
                  a_8 = t;
                t = n_0(t);
                if(((z_7 != NULL) && (z_7 != t)))
                  _fail(t);
                else
                  z_7 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_7));
              }
            }
        }
      }
  }
  return(t);
}
ATerm xtc_transform_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2_0(z_83, b_0, t);
  return(t);
}
ATerm xtc_parse_pp_table_0_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    t = term_p_5;
    return(t);
  }
  t = xtc_transform_1_0(f_0, t);
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(d_8));
      t = xtc_parse_pp_table_0_0(t);
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_8 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(e_8);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_q_5;
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
ATerm if_verbose2_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
    if(((f_8 != NULL) && (f_8 != t)))
      _fail(t);
    else
      f_8 = t;
    if(((g_8 != NULL) && (g_8 != t)))
      _fail(t);
    else
      g_8 = t;
    t = term_r_5;
    t = get_config_0_0(t);
    if(((h_8 != NULL) && (h_8 != t)))
      _fail(t);
    else
      h_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_8), term_s_5);
    t = geq_0_0(t);
    t = not_null(f_8);
    t = h_81(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm modification_time_0_0 (ATerm t)
{
  ATerm i_8 = NULL;
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  t = SSL_modification_time(not_null(i_8));
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_8 != NULL) && (j_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_8 = ATgetArgument(t, 0);
      if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_8)), term_t_5), not_null(j_8));
  t = concat_strings_0_0(t);
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  t = not_null(l_8);
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_8), term_u_5);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  if(((q_8 != NULL) && (q_8 != t)))
    _fail(t);
  else
    q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(m_8));
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = not_null(r_8);
  t = Fst_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = term_v_5;
        return(t);
      }
      t = debug_1_0(t_0, t);
      return(t);
    }
    t = if_verbose2_1_0(s_0, t);
  }
  return(t);
}
ATerm lookup_or_parse_0_0 (ATerm t)
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0_0(t);
      ;
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
      t = parse_to_temp_file_0_0(t);
    }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm s_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  t = error_0_0(t);
  t = term_y_5;
  t = exit_0_0(t);
  t = not_null(s_8);
  return(t);
}
ATerm must_be_pp_0_0 (ATerm t)
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        t = term_b_6;
        return(t);
      }
      t = has_extension_1_0(u_0, t);
      ;
      LocalPopChoice(a_6);
    }
  else
    {
      t = z_5;
      {
        ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
        if(((t_8 != NULL) && (t_8 != t)))
          _fail(t);
        else
          t_8 = t;
        if(((u_8 != NULL) && (u_8 != t)))
          _fail(t);
        else
          u_8 = t;
        t = not_null(t_8);
        if(((v_8 != NULL) && (v_8 != t)))
          _fail(t);
        else
          v_8 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_8)), term_c_6);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm w_8 (ATerm t)
  {
    ATerm d_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = d_6;
        t = Cons_2_0(_id, w_8, t);
      }
    return(t);
  }
  t = w_8(t);
  return(t);
}
ATerm has_extension_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = o_78(t);
  t = explode_string_0_0(t);
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = not_null(x_8);
  if(((z_8 != NULL) && (z_8 != t)))
    _fail(t);
  else
    z_8 = t;
  t = explode_string_0_0(t);
  {
    ATerm v_0 (ATerm t)
    {
      if(((y_8 != NULL) && (y_8 != t)))
        _fail(t);
      else
        y_8 = t;
      return(t);
    }
    t = at_suffix_1_0(v_0, t);
    t = not_null(z_8);
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm f_6 = t;
  int g_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_h_6;
        return(t);
      }
      t = has_extension_1_0(w_0, t);
      ;
      LocalPopChoice(g_6);
    }
  else
    {
      t = f_6;
      t = must_be_pp_0_0(t);
      t = lookup_or_parse_0_0(t);
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm i_6 = t;
  int j_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_6;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_6);
    }
  else
    {
      t = i_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm a_9 = NULL;
      t = ensure_pp_table_parsed_0_0(t);
      if(((a_9 != NULL) && (a_9 != t)))
        _fail(t);
      else
        a_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_9)), term_k_6);
      return(t);
    }
    t = map_1_0(x_0, t);
    t = concat_0_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = term_l_6;
          return(t);
        }
        t = debug_1_0(z_0, t);
        return(t);
      }
      t = if_verbose5_1_0(y_0, t);
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
  ATerm c_9 = NULL,d_9 = NULL;
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm e_9 = NULL,f_9 = NULL;
      t = not_null(c_9);
      if(((e_9 != NULL) && (e_9 != t)))
        _fail(t);
      else
        e_9 = t;
      t = term_m_6;
      t = ReadFromFile_0_0(t);
      if(((f_9 != NULL) && (f_9 != t)))
        _fail(t);
      else
        f_9 = t;
    }
  else
    {
      ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((d_9 != NULL) && (d_9 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(d_9);
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
      t = not_null(c_9);
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
      t = not_null(g_9);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(match_cons(n_6, sym_Stream_1))
        {
          if(((j_9 != NULL) && (j_9 != ATgetArgument(n_6, 0))))
            _fail(ATgetArgument(n_6, 0));
          else
            j_9 = ATgetArgument(n_6, 0);
        }
      else
        _fail(t);
      if(((k_9 != NULL) && (k_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(j_9), not_null(k_9));
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_9));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_65 (ATerm), ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_9 = ATgetArgument(t, 0);
      if(((o_9 != NULL) && (o_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(n_9);
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), term_o_6);
  t = open_stream_0_0(t);
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  if(((s_9 != NULL) && (s_9 != t)))
    _fail(t);
  else
    s_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(o_9));
  t = y_65(t);
  t = fclose_0_0(t);
  t = not_null(o_9);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL;
  if(((t_9 != NULL) && (t_9 != t)))
    _fail(t);
  else
    t_9 = t;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = xtc_new_file_0_0(t);
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(t_9));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(v_9);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_9));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm h_84 (ATerm), ATerm i_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(h_84, i_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm w_9 = NULL;
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = SSL_close_file(not_null(w_9));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_9 = ATgetArgument(t, 0);
      if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(x_9), not_null(y_9));
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  t = map_1_0(explode_string_0_0, t);
  t = concat_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm int_to_string_0_0 (ATerm t)
{
  ATerm z_9 = NULL;
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = SSL_int_to_string(not_null(z_9));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      c_10 = ATgetArgument(t, 0);
      {
        ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
        t = not_null(c_10);
        if(((f_10 != NULL) && (f_10 != t)))
          _fail(t);
        else
          f_10 = t;
        t = not_null(b_10);
        if(((g_10 != NULL) && (g_10 != t)))
          _fail(t);
        else
          g_10 = t;
        t = not_null(f_10);
        t = int_to_string_0_0(t);
        if(((h_10 != NULL) && (h_10 != t)))
          _fail(t);
        else
          h_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_6), not_null(h_10)), term_p_6);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((c_10 != NULL) && (c_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_10 = ATgetArgument(t, 0);
          if(((d_10 != NULL) && (d_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_10 = ATgetArgument(t, 1);
          if(((e_10 != NULL) && (e_10 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            e_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(c_10);
      if(((i_10 != NULL) && (i_10 != t)))
        _fail(t);
      else
        i_10 = t;
      t = not_null(d_10);
      if(((j_10 != NULL) && (j_10 != t)))
        _fail(t);
      else
        j_10 = t;
      t = not_null(e_10);
      if(((k_10 != NULL) && (k_10 != t)))
        _fail(t);
      else
        k_10 = t;
      t = not_null(b_10);
      if(((l_10 != NULL) && (l_10 != t)))
        _fail(t);
      else
        l_10 = t;
      t = not_null(j_10);
      t = int_to_string_0_0(t);
      if(((m_10 != NULL) && (m_10 != t)))
        _fail(t);
      else
        m_10 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(k_10)), term_s_6), not_null(m_10)), term_r_6), not_null(i_10));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm n_10 = NULL;
  ATerm a_1 (ATerm t)
  {
    t = e_70(t);
    if(((n_10 != NULL) && (n_10 != t)))
      _fail(t);
    else
      n_10 = t;
    return(t);
  }
  t = fetch_1_0(a_1, t);
  t = not_null(n_10);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  {
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), term_j_30), term_f_30), term_b_30), term_x_29), term_t_29), term_j_28), term_c_27), term_q_26), term_j_26), term_k_25), term_w_24), term_o_24), term_z_21), term_s_21), term_n_21), term_h_21), term_z_20), term_v_19), term_k_17), term_k_16), term_f_14), term_h_13), term_a_10), term_k_7), term_e_7), term_a_7), term_x_6);
        {
          ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm o_30 = ATgetArgument(t, 0);
                if(((o_10 != NULL) && (o_10 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_10 = ATgetArgument(t, 1);
                {
                  ATerm p_30 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(b_1, t);
        }
        ;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(o_10));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm p_10 = NULL;
  if(((p_10 != NULL) && (p_10 != t)))
    _fail(t);
  else
    p_10 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm q_30 = ATgetArgument(t, 0);
          if(((q_10 != NULL) && (q_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_10 = ATgetArgument(t, 1);
          {
            ATerm r_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(q_10);
      {
        ATerm s_30 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_30;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((r_10 != NULL) && (r_10 != t)))
          _fail(t);
        else
          r_10 = t;
        if(((s_10 != NULL) && (s_10 != t)))
          _fail(t);
        else
          s_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_10)), term_u_30));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(c_1, t);
    t = not_null(p_10);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm t_10 = NULL;
  if(((t_10 != NULL) && (t_10 != t)))
    _fail(t);
  else
    t_10 = t;
  t = SSL_waitpid(not_null(t_10));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm l_64 (ATerm), ATerm m_64 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = fork_0_0(t);
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_10 = NULL;
        if(((x_10 != NULL) && (x_10 != t)))
          _fail(t);
        else
          x_10 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(v_10);
        t = l_64(t);
        ;
        LocalPopChoice(w_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_10), not_null(v_10));
        t = m_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm y_10 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm z_10 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((z_10 != NULL) && (z_10 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_10 = ATgetArgument(t, 0);
        if(((y_10 != NULL) && (y_10 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(z_10);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm x_30 = ATgetArgument(t, 0);
        if(((ATgetType(x_30) != AT_INT) || (ATgetInt((ATermInt) x_30) != 0)))
          _fail(t);
        {
          ATerm y_30 = ATgetArgument(t, 1);
        }
        {
          ATerm z_30 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(y_10);
    return(t);
  }
  t = fork_2_0(n_64, d_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_11 != NULL) && (a_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_11 = ATgetArgument(t, 0);
      if(((b_11 != NULL) && (b_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(b_11));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm c_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  t = SSL_table_keys(not_null(c_11));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm d_11 = NULL;
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = table_keys_0_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
      if(((e_11 != NULL) && (e_11 != t)))
        _fail(t);
      else
        e_11 = t;
      if(((f_11 != NULL) && (f_11 != t)))
        _fail(t);
      else
        f_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), not_null(e_11));
      t = table_get_0_0(t);
      if(((g_11 != NULL) && (g_11 != t)))
        _fail(t);
      else
        g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), not_null(g_11));
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
    if(((h_11 != NULL) && (h_11 != t)))
      _fail(t);
    else
      h_11 = t;
    if(((i_11 != NULL) && (i_11 != t)))
      _fail(t);
    else
      i_11 = t;
    t = term_r_5;
    t = get_config_0_0(t);
    if(((j_11 != NULL) && (j_11 != t)))
      _fail(t);
    else
      j_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_11), term_z_29);
    t = geq_0_0(t);
    t = not_null(h_11);
    t = k_81(t);
    return(t);
  }
  t = try_1_0(g_1, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, not_null(m_11));
  t = printnl_0_0(t);
  t = not_null(k_11);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(n_11)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_31 = ATgetFirst((ATermList) t);
      if(match_cons(b_31, sym__2))
        {
          if(((p_11 != NULL) && (p_11 != ATgetArgument(b_31, 0))))
            _fail(ATgetArgument(b_31, 0));
          else
            p_11 = ATgetArgument(b_31, 0);
          if(((q_11 != NULL) && (q_11 != ATgetArgument(b_31, 1))))
            _fail(ATgetArgument(b_31, 1));
          else
            q_11 = ATgetArgument(b_31, 1);
        }
      else
        _fail(t);
      {
        ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(q_11);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_11 = ATgetArgument(t, 0);
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, (ATerm) ATmakeAppl(sym_Tool_1, not_null(r_11)));
  t = table_get_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_11 = ATgetArgument(t, 0);
          if(((u_11 != NULL) && (u_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = not_null(u_11);
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm d_31 = t;
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(e_31);
    }
  else
    {
      t = d_31;
      {
        ATerm f_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1_0(l_77, t);
              return(t);
            }
            t = Cons_2_0(l_77, i_1, t);
            ;
            LocalPopChoice(g_31);
          }
        else
          {
            t = f_31;
            {
              ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
              if(((w_11 != NULL) && (w_11 != t)))
                _fail(t);
              else
                w_11 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((x_11 != NULL) && (x_11 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    x_11 = ATgetFirst((ATermList) t);
                  if(((y_11 != NULL) && (y_11 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    y_11 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(y_11);
              if(((z_11 != NULL) && (z_11 != t)))
                _fail(t);
              else
                z_11 = t;
              t = filter_1_0(l_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm a_12 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = f_79(t);
      t = a_12(t);
      return(t);
    }
    t = try_1_0(j_1, t);
    return(t);
  }
  t = a_12(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  {
    ATerm k_1 (ATerm t)
    {
      t = term_i_31;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm j_31 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_31;
          }
      }
      return(t);
    }
    t = repeat_1_0(k_1, t);
    t = not_null(b_12);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATempty, not_null(e_12)));
  t = printnl_0_0(t);
  t = not_null(c_12);
  return(t);
}
ATerm say_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm f_12 = NULL;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  t = o_65(t);
  t = debug_0_0(t);
  t = not_null(f_12);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
    if(((g_12 != NULL) && (g_12 != t)))
      _fail(t);
    else
      g_12 = t;
    if(((h_12 != NULL) && (h_12 != t)))
      _fail(t);
    else
      h_12 = t;
    t = term_r_5;
    t = get_config_0_0(t);
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), term_f_21);
    t = geq_0_0(t);
    t = not_null(g_12);
    t = j_81(t);
    return(t);
  }
  t = try_1_0(l_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    t = term_r_5;
    t = get_config_0_0(t);
    if(((l_12 != NULL) && (l_12 != t)))
      _fail(t);
    else
      l_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), term_g_7);
    t = geq_0_0(t);
    t = not_null(j_12);
    t = l_81(t);
    return(t);
  }
  t = try_1_0(m_1, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_12 = ATgetArgument(t, 0);
      if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((n_12 != NULL) && (n_12 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        n_12 = ATgetFirst((ATermList) t);
      if(((o_12 != NULL) && (o_12 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        o_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  t = a_74(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm q_12 = NULL;
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), not_null(q_12));
      t = z_73(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = not_null(o_12);
  }
  return(t);
}
ATerm union_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_12 != NULL) && (s_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_12 = ATgetArgument(t, 0);
      if(((r_12 != NULL) && (r_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(s_12);
  {
    ATerm t_12 (ATerm t)
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(r_12);
          ;
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          {
            ATerm m_31 = t;
            int n_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(r_12);
                  return(t);
                }
                t = HdMember_p__2_0(v_73, o_1, t);
                t = t_12(t);
                ;
                LocalPopChoice(n_31);
              }
            else
              {
                t = m_31;
                t = Cons_2_0(_id, t_12, t);
              }
          }
        }
      return(t);
    }
    t = t_12(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  t = union_1_0(eq_0_0, t);
  return(t);
}
ATerm get_0_0 (ATerm t)
{
  t = table_get_0_0(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((u_12 != NULL) && (u_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_12 = ATgetArgument(t, 0);
      if(((v_12 != NULL) && (v_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_12 = ATgetArgument(t, 1);
      if(((w_12 != NULL) && (w_12 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  if(((z_12 != NULL) && (z_12 != t)))
    _fail(t);
  else
    z_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_12), not_null(v_12));
  {
    ATerm o_31 = t;
    int p_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(p_31);
      }
    else
      {
        t = o_31;
        t = (ATerm) ATempty;
      }
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(w_12));
    t = union_0_0(t);
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_12), not_null(v_12), not_null(b_13));
    t = set_0_0(t);
    t = not_null(x_12);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_13 != NULL) && (d_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_13 = ATgetArgument(t, 0);
      if(((c_13 != NULL) && (c_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(c_13);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm e_13 = NULL,f_13 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_13 = ATgetArgument(t, 0);
          if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(d_13), not_null(e_13), not_null(f_13));
      t = u_81(t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_13 (ATerm j_13, ATerm k_13, ATerm t)
  {
    ATerm l_13 = NULL;
    t = not_null(j_13);
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = SSL_fclose(not_null(l_13));
    return(t);
  }
  ATerm t_13 (ATerm n_13, ATerm t)
  {
    ATerm p_13 = NULL;
    t = not_null(n_13);
    if(((p_13 != NULL) && (p_13 != t)))
      _fail(t);
    else
      p_13 = t;
    t = SSL_fclose(not_null(p_13));
    return(t);
  }
  ATerm q_13 = NULL,r_13 = NULL;
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_13 = ATgetArgument(t, 0);
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_13(not_null(q_13), not_null(r_13), t);
            ;
            LocalPopChoice(r_31);
          }
        else
          {
            t = q_31;
            t = t_13(not_null(r_13), t);
          }
      }
    }
  else
    {
      t = t_13(not_null(r_13), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm u_13 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((u_13 != NULL) && (u_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(u_13));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_13 != NULL) && (v_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_13 = ATgetArgument(t, 0);
      if(((w_13 != NULL) && (w_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(v_13), not_null(w_13));
  if(((x_13 != NULL) && (x_13 != t)))
    _fail(t);
  else
    x_13 = t;
  if(((y_13 != NULL) && (y_13 != t)))
    _fail(t);
  else
    y_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_13));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL;
  t = SSL_stdin_stream();
  if(((z_13 != NULL) && (z_13 != t)))
    _fail(t);
  else
    z_13 = t;
  if(((a_14 != NULL) && (a_14 != t)))
    _fail(t);
  else
    a_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_14));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL;
  t = SSL_stdout_stream();
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_14));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  t = SSL_stderr_stream();
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_14));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm g_14 = NULL;
  if(((g_14 != NULL) && (g_14 != t)))
    _fail(t);
  else
    g_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(g_14);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(g_14);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(g_14);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  if(((h_14 != NULL) && (h_14 != t)))
    _fail(t);
  else
    h_14 = t;
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  t = not_null(h_14);
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  t = SSL_explode_term(not_null(j_14));
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
          {
            if(((l_14 != NULL) && (l_14 != ATgetFirst((ATermList) t_31))))
              _fail(ATgetFirst((ATermList) t_31));
            else
              l_14 = ATgetFirst((ATermList) t_31);
            if(((k_14 != NULL) && (k_14 != (ATerm) ATgetNext((ATermList) t_31))))
              _fail((ATerm) ATgetNext((ATermList) t_31));
            else
              k_14 = (ATerm) ATgetNext((ATermList) t_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(l_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      ATerm v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(x_31);
      }
    else
      {
        t = w_31;
        {
          ATerm y_31 = t;
          int z_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 (ATerm t)
              {
                ATerm m_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(m_14);
                return(t);
              }
              t = _2_0(q_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL;
  ATerm a_32 = t;
  int b_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      if(((o_14 != NULL) && (o_14 != t)))
        _fail(t);
      else
        o_14 = t;
      t = not_null(n_14);
      if(((p_14 != NULL) && (p_14 != t)))
        _fail(t);
      else
        p_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_c_32);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_32);
    }
  else
    {
      t = a_32;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_d_32;
          return(t);
        }
        t = debug_1_0(r_1, t);
        _fail(t);
      }
    }
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = read_from_stream_0_0(t);
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  t = not_null(q_14);
  t = fclose_0_0(t);
  t = not_null(r_14);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(t_14), (ATerm) ATinsert(ATempty, term_e_32));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(g_32);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_32;
              }
            {
              ATerm s_1 (ATerm t)
              {
                t = term_k_32;
                return(t);
              }
              t = debug_1_0(s_1, t);
            }
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm t_1 (ATerm t)
              {
                t = term_l_32;
                return(t);
              }
              t = debug_1_0(t_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = term_m_32;
        return(t);
      }
      t = debug_1_0(v_1, t);
      return(t);
    }
    t = if_verbose5_1_0(u_1, t);
    {
      ATerm n_32 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, (ATerm) ATmakeAppl(sym_Imported_1, not_null(u_14)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_32;
        }
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_31, term_o_32, (ATerm) ATinsert(ATempty, not_null(u_14)));
      t = table_put_0_0(t);
      t = not_null(v_14);
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_p_32;
            return(t);
          }
          t = debug_1_0(x_1, t);
          return(t);
        }
        t = if_verbose4_1_0(w_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              t = term_q_32;
              return(t);
            }
            t = say_1_0(z_1, t);
            return(t);
          }
          t = if_verbose6_1_0(y_1, t);
          if(((w_14 != NULL) && (w_14 != t)))
            _fail(t);
          else
            w_14 = t;
          if(((x_14 != NULL) && (x_14 != t)))
            _fail(t);
          else
            x_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_a_31, not_null(x_14));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_r_32;
                return(t);
              }
              t = say_1_0(b_2, t);
              return(t);
            }
            t = if_verbose6_1_0(a_2, t);
            t = (ATerm) ATmakeAppl(sym__3, term_a_31, (ATerm)ATmakeAppl(sym_Imported_1, not_null(u_14)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm c_2 (ATerm t)
              {
                ATerm d_2 (ATerm t)
                {
                  t = term_q_32;
                  return(t);
                }
                t = say_1_0(d_2, t);
                return(t);
              }
              t = if_verbose4_1_0(c_2, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  t = SSL_getenv(not_null(y_14));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm v_32 = t;
        int w_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_32;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(w_32);
          }
        else
          {
            t = v_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm z_14 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_y_32;
      return(t);
    }
    t = debug_1_0(f_2, t);
    return(t);
  }
  t = if_verbose5_1_0(e_2, t);
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_33;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(z_14);
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_c_33;
          return(t);
        }
        t = debug_1_0(h_2, t);
        return(t);
      }
      t = if_verbose5_1_0(g_2, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_f_33;
          return(t);
        }
        t = debug_1_0(j_2, t);
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              t = term_f_33;
              return(t);
            }
            t = debug_1_0(l_2, t);
            return(t);
          }
          t = if_verbose5_1_0(k_2, t);
        }
      }
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
        if(((a_15 != NULL) && (a_15 != t)))
          _fail(t);
        else
          a_15 = t;
        if(((b_15 != NULL) && (b_15 != t)))
          _fail(t);
        else
          b_15 = t;
        t = not_null(a_15);
        if(((c_15 != NULL) && (c_15 != t)))
          _fail(t);
        else
          c_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_33), not_null(c_15)), term_i_33);
        t = error_0_0(t);
        {
          ATerm m_2 (ATerm t)
          {
            t = term_a_31;
            t = table_getlist_0_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_k_33;
                return(t);
              }
              t = debug_1_0(n_2, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(m_2, t);
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
ATerm xtc_command_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  t = y_83(t);
  t = xtc_find_warning_0_0(t);
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  t = not_null(d_15);
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), not_null(h_15));
  t = call_0_0(t);
  t = not_null(f_15);
  return(t);
}
ATerm assert_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_15 != NULL) && (i_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_15 = ATgetArgument(t, 0);
      if(((j_15 != NULL) && (j_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  t = j_80(t);
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(l_15), not_null(i_15), not_null(j_15));
  t = table_push_0_0(t);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), term_n_33);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((m_15 != NULL) && (m_15 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          m_15 = ATgetFirst((ATermList) t);
        if(((n_15 != NULL) && (n_15 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          n_15 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_15), term_n_33, (ATerm) ATinsert(CheckATermList(not_null(n_15)), (ATerm) ATinsert(CheckATermList(not_null(m_15)), not_null(i_15))));
    t = table_put_0_0(t);
    t = not_null(k_15);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm o_15 = NULL;
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  t = r_65(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = term_o_33;
      return(t);
    }
    t = debug_1_0(o_2, t);
    t = not_null(o_15);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_16 (ATerm s_15, ATerm t)
  {
    ATerm t_15 = NULL;
    t = not_null(s_15);
    if(((t_15 != NULL) && (t_15 != t)))
      _fail(t);
    else
      t_15 = t;
    t = not_null(s_15);
    {
      ATerm p_33 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm q_33 = ATgetArgument(t, 0);
              ATerm r_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_33;
        }
      {
        ATerm p_2 (ATerm t)
        {
          t = term_s_33;
          return(t);
        }
        t = obsolete_1_0(p_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), term_o_6);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm d_16 (ATerm u_15, ATerm v_15, ATerm w_15, ATerm t)
  {
    ATerm x_15 = NULL,y_15 = NULL;
    t = not_null(u_15);
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    t = not_null(v_15);
    if(((y_15 != NULL) && (y_15 != t)))
      _fail(t);
    else
      y_15 = t;
    t = SSL_open_file(not_null(x_15), not_null(y_15));
    return(t);
  }
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
      {
        ATerm t_33 = t;
        int u_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_16(not_null(z_15), t);
            ;
            LocalPopChoice(u_33);
          }
        else
          {
            t = t_33;
            t = d_16(not_null(a_16), not_null(b_16), not_null(z_15), t);
          }
      }
    }
  else
    {
      t = c_16(not_null(z_15), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_16 != NULL) && (e_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_16 = ATgetArgument(t, 0);
      if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(e_16), not_null(f_16));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL;
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_16), (ATerm) ATinsert(ATempty, term_v_33));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL;
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = term_w_33;
  t = new_0_0(t);
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), term_x_33);
  t = conc_strings_0_0(t);
  {
    ATerm q_2 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(q_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL;
  t = new_file_0_0(t);
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  if(((m_16 != NULL) && (m_16 != t)))
    _fail(t);
  else
    m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_o_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_w_33);
  {
    ATerm r_2 (ATerm t)
    {
      t = term_y_33;
      return(t);
    }
    t = assert_1_0(r_2, t);
    t = not_null(m_16);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL;
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
      t = not_null(o_16);
      if(((q_16 != NULL) && (q_16 != t)))
        _fail(t);
      else
        q_16 = t;
      t = xtc_new_file_0_0(t);
      if(((r_16 != NULL) && (r_16 != t)))
        _fail(t);
      else
        r_16 = t;
      if(((s_16 != NULL) && (s_16 != t)))
        _fail(t);
      else
        s_16 = t;
      t = m_0(t);
      if(((t_16 != NULL) && (t_16 != t)))
        _fail(t);
      else
        t_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_16)), term_z_33));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(r_16);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_16));
    }
  else
    {
      ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((p_16 != NULL) && (p_16 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(p_16);
      if(((u_16 != NULL) && (u_16 != t)))
        _fail(t);
      else
        u_16 = t;
      t = not_null(o_16);
      if(((v_16 != NULL) && (v_16 != t)))
        _fail(t);
      else
        v_16 = t;
      t = not_null(u_16);
      t = xtc_new_file_0_0(t);
      if(((w_16 != NULL) && (w_16 != t)))
        _fail(t);
      else
        w_16 = t;
      if(((x_16 != NULL) && (x_16 != t)))
        _fail(t);
      else
        x_16 = t;
      t = m_0(t);
      if(((y_16 != NULL) && (y_16 != t)))
        _fail(t);
      else
        y_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(w_16)), term_z_33), not_null(u_16)), term_a_34));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(w_16);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_16));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm i_62 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  t = SSLgetAnnotations(not_null(c_17));
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  t = not_null(a_17);
  t = i_62(t);
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  if(((f_17 != NULL) && (f_17 != t)))
    _fail(t);
  else
    f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(b_17)), not_null(z_16));
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm b_34 = t;
  int c_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_34 = t;
      int e_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(e_34);
        }
      else
        {
          t = d_34;
          t = stdin_0_0(t);
        }
      LocalPopChoice(c_34);
      t = xtc_transform_file_2_0(a_84, b_84, t);
    }
  else
    {
      t = b_34;
      t = xtc_transform_term_2_0(a_84, b_84, t);
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_17 = ATgetArgument(t, 0);
      if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(g_17), not_null(h_17));
  return(t);
}
ATerm stderr_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stderr_0)))
    _fail(t);
  return(t);
}
ATerm stdout_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdout_0)))
    _fail(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_18 (ATerm l_17, ATerm m_17, ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
    t = not_null(l_17);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = not_null(m_17);
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = k_0(t);
    if(((p_17 != NULL) && (p_17 != t)))
      _fail(t);
    else
      p_17 = t;
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(p_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_17));
    }
    return(t);
  }
  ATerm b_18 (ATerm q_17, ATerm r_17, ATerm t)
  {
    ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
    t = not_null(q_17);
    if(((s_17 != NULL) && (s_17 != t)))
      _fail(t);
    else
      s_17 = t;
    t = not_null(r_17);
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    t = k_0(t);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    {
      ATerm h_34 = t;
      if((PushChoice() == 0))
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm k_34 = t;
                int l_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(l_34);
                  }
                else
                  {
                    t = k_34;
                    {
                      ATerm v_17 = NULL;
                      if(((v_17 != NULL) && (v_17 != t)))
                        _fail(t);
                      else
                        v_17 = t;
                      if(((s_17 != NULL) && (s_17 != t)))
                        _fail(t);
                      else
                        s_17 = t;
                      t = not_null(v_17);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = h_34;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(u_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_17));
    }
    return(t);
  }
  ATerm w_17 = NULL,x_17 = NULL;
  if(((w_17 != NULL) && (w_17 != t)))
    _fail(t);
  else
    w_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_18(not_null(x_17), not_null(w_17), t);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_18(not_null(x_17), not_null(w_17), t);
              ;
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
              {
                ATerm y_17 = NULL,z_17 = NULL;
                t = not_null(x_17);
                if(((y_17 != NULL) && (y_17 != t)))
                  _fail(t);
                else
                  y_17 = t;
                t = not_null(w_17);
                if(((z_17 != NULL) && (z_17 != t)))
                  _fail(t);
                else
                  z_17 = t;
                t = k_0(t);
                if(((y_17 != NULL) && (y_17 != t)))
                  _fail(t);
                else
                  y_17 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_17));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_34 = ATgetFirst((ATermList) t);
      if(((c_18 != NULL) && (c_18 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(c_18);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_18 != NULL) && (d_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_18 = ATgetArgument(t, 0);
      if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  if(((g_18 != NULL) && (g_18 != t)))
    _fail(t);
  else
    g_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(e_18));
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = (ATerm) ATempty;
      }
    if(((h_18 != NULL) && (h_18 != t)))
      _fail(t);
    else
      h_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(e_18), not_null(h_18));
    t = table_put_0_0(t);
    t = not_null(f_18);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = g_80(t);
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), term_n_33);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_34);
      }
    else
      {
        t = t_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_18 != NULL) && (l_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_18 = ATgetFirst((ATermList) t);
        if(((k_18 != NULL) && (k_18 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          k_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), term_n_33, not_null(k_18));
    t = table_put_0_0(t);
    t = not_null(l_18);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm m_18 = NULL;
        if(((m_18 != NULL) && (m_18 != t)))
          _fail(t);
        else
          m_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(m_18));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_2, t);
      t = not_null(i_18);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm n_18 = NULL;
  if(((n_18 != NULL) && (n_18 != t)))
    _fail(t);
  else
    n_18 = t;
  t = SSL_remove(not_null(n_18));
  return(t);
}
ATerm restore_always_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_81(t);
      t = c_81(t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = c_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  t = f_80(t);
  if(((p_18 != NULL) && (p_18 != t)))
    _fail(t);
  else
    p_18 = t;
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), term_n_33);
  {
    ATerm x_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(y_34);
      }
    else
      {
        t = x_34;
        t = (ATerm) ATempty;
      }
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(p_18), term_n_33, (ATerm) ATinsert(CheckATermList(not_null(r_18)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(o_18);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = term_y_33;
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm u_18 = NULL;
      if(((u_18 != NULL) && (u_18 != t)))
        _fail(t);
      else
        u_18 = t;
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_b_35;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_18 != NULL) && (t_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_18 = ATgetFirst((ATermList) t);
            if(((s_18 != NULL) && (s_18 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              s_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(t_18);
        {
          ATerm v_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(v_2, t);
          t = not_null(u_18);
          {
            ATerm w_2 (ATerm t)
            {
              t = term_y_33;
              return(t);
            }
            t = end_scope_1_0(w_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(k_83, u_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm c_35 = t;
    int d_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
        if(((v_18 != NULL) && (v_18 != t)))
          _fail(t);
        else
          v_18 = t;
        if(((w_18 != NULL) && (w_18 != t)))
          _fail(t);
        else
          w_18 = t;
        t = term_a_34;
        t = get_config_0_0(t);
        if(((x_18 != NULL) && (x_18 != t)))
          _fail(t);
        else
          x_18 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_18));
        ;
        LocalPopChoice(d_35);
      }
    else
      {
        t = c_35;
        t = term_m_6;
      }
    t = l_83(t);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm e_35 = t;
        int f_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_33;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(f_35);
          }
        else
          {
            t = e_35;
            t = term_h_5;
          }
        return(t);
      }
      t = copy_to_1_0(y_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(x_2, t);
  return(t);
}
ATerm ast2abox_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      t = term_g_35;
      return(t);
    }
    t = xtc_transform_2_0(a_3, build_impl_args_0_0, t);
    return(t);
  }
  t = xtc_io_1_0(z_2, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm z_18 = NULL;
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(z_18);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(z_18);
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
    if(((a_19 != NULL) && (a_19 != t)))
      _fail(t);
    else
      a_19 = t;
    if(((b_19 != NULL) && (b_19 != t)))
      _fail(t);
    else
      b_19 = t;
    t = string_to_int_0_0(t);
    if(((c_19 != NULL) && (c_19 != t)))
      _fail(t);
    else
      c_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_35, not_null(c_19));
    t = set_config_0_0(t);
    t = not_null(a_19);
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_i_35;
    return(t);
  }
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm d_19 = NULL;
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  t = SSL_string_to_int(not_null(d_19));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm f_19 = NULL;
        if(((f_19 != NULL) && (f_19 != t)))
          _fail(t);
        else
          f_19 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(f_19);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(f_19);
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        ATerm g_19 = NULL;
        if(((g_19 != NULL) && (g_19 != t)))
          _fail(t);
        else
          g_19 = t;
        t = term_m_35;
        t = set_config_0_0(t);
        t = term_n_35;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_o_35;
        return(t);
      }
      t = Option_3_0(e_3, f_3, g_3, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
              if(((h_19 != NULL) && (h_19 != t)))
                _fail(t);
              else
                h_19 = t;
              if(((i_19 != NULL) && (i_19 != t)))
                _fail(t);
              else
                i_19 = t;
              t = string_to_int_0_0(t);
              if(((j_19 != NULL) && (j_19 != t)))
                _fail(t);
              else
                j_19 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_5, not_null(j_19));
              t = set_config_0_0(t);
              t = not_null(h_19);
              if(((k_19 != NULL) && (k_19 != t)))
                _fail(t);
              else
                k_19 = t;
              if(((l_19 != NULL) && (l_19 != t)))
                _fail(t);
              else
                l_19 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_19));
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              t = term_r_35;
              return(t);
            }
            t = ArgOption_3_0(h_3, i_3, j_3, t);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm k_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm l_3 (ATerm t)
              {
                ATerm m_19 = NULL;
                if(((m_19 != NULL) && (m_19 != t)))
                  _fail(t);
                else
                  m_19 = t;
                t = term_t_35;
                t = set_config_0_0(t);
                t = term_u_35;
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_v_35;
                return(t);
              }
              t = Option_3_0(k_3, l_3, m_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm n_3 (ATerm t)
  {
    ATerm o_19 = NULL;
    if(((o_19 != NULL) && (o_19 != t)))
      _fail(t);
    else
      o_19 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(o_19);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(o_19);
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
    if(((p_19 != NULL) && (p_19 != t)))
      _fail(t);
    else
      p_19 = t;
    if(((q_19 != NULL) && (q_19 != t)))
      _fail(t);
    else
      q_19 = t;
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_33, not_null(r_19));
    t = set_config_0_0(t);
    t = not_null(p_19);
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    if(((t_19 != NULL) && (t_19 != t)))
      _fail(t);
    else
      t_19 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_19));
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_y_35;
    return(t);
  }
  t = ArgOption_3_0(n_3, o_3, p_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
      {
        ATerm q_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm r_3 (ATerm t)
        {
          ATerm u_19 = NULL;
          if(((u_19 != NULL) && (u_19 != t)))
            _fail(t);
          else
            u_19 = t;
          t = term_c_36;
          t = set_config_0_0(t);
          t = term_d_36;
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_e_36;
          return(t);
        }
        t = Option_3_0(q_3, r_3, s_3, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm t_3 (ATerm t)
  {
    ATerm w_19 = NULL;
    if(((w_19 != NULL) && (w_19 != t)))
      _fail(t);
    else
      w_19 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(w_19);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(w_19);
      }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    ATerm x_19 = NULL,y_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
    if(((x_19 != NULL) && (x_19 != t)))
      _fail(t);
    else
      x_19 = t;
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_34, not_null(a_20));
    t = set_config_0_0(t);
    t = not_null(x_19);
    if(((b_20 != NULL) && (b_20 != t)))
      _fail(t);
    else
      b_20 = t;
    if(((c_20 != NULL) && (c_20 != t)))
      _fail(t);
    else
      c_20 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(c_20));
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_f_36;
    return(t);
  }
  t = ArgOption_3_0(t_3, u_3, v_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_20 = ATgetArgument(t, 0);
      if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_20 != NULL) && (f_20 != t)))
    _fail(t);
  else
    f_20 = t;
  if(((g_20 != NULL) && (g_20 != t)))
    _fail(t);
  else
    g_20 = t;
  t = not_null(d_20);
  {
    ATerm k_36 = t;
    int l_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(l_36);
      }
    else
      {
        t = k_36;
        t = (ATerm) ATempty;
      }
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_20), not_null(h_20));
    t = conc_0_0(t);
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_m_36, not_null(d_20), not_null(i_20));
    t = table_put_0_0(t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(l_20);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((m_20 != NULL) && (m_20 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            m_20 = ATgetFirst((ATermList) t);
          if(((n_20 != NULL) && (n_20 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            n_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_20);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_20 != NULL) && (o_20 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_20 = ATgetFirst((ATermList) t);
          if(((p_20 != NULL) && (p_20 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(m_20);
      if(((q_20 != NULL) && (q_20 != t)))
        _fail(t);
      else
        q_20 = t;
      t = not_null(o_20);
      if(((r_20 != NULL) && (r_20 != t)))
        _fail(t);
      else
        r_20 = t;
      t = not_null(p_20);
      if(((s_20 != NULL) && (s_20 != t)))
        _fail(t);
      else
        s_20 = t;
      t = not_null(l_20);
      if(((t_20 != NULL) && (t_20 != t)))
        _fail(t);
      else
        t_20 = t;
      t = not_null(q_20);
      t = h_0(t);
      t = not_null(t_20);
      if(((u_20 != NULL) && (u_20 != t)))
        _fail(t);
      else
        u_20 = t;
      t = not_null(r_20);
      t = i_0(t);
      if(((v_20 != NULL) && (v_20 != t)))
        _fail(t);
      else
        v_20 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(s_20)), not_null(v_20));
    }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
    if(((w_20 != NULL) && (w_20 != t)))
      _fail(t);
    else
      w_20 = t;
    if(((x_20 != NULL) && (x_20 != t)))
      _fail(t);
    else
      x_20 = t;
    if(((y_20 != NULL) && (y_20 != t)))
      _fail(t);
    else
      y_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_6, (ATerm) ATinsert(ATempty, not_null(y_20)));
    t = extend_config_0_0(t);
    t = not_null(w_20);
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_n_36;
    return(t);
  }
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm ast2abox_options_0_0 (ATerm t)
{
  ATerm o_36 = t;
  int p_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(p_36);
    }
  else
    {
      t = o_36;
      t = io_options_0_0(t);
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = term_w_33;
  t = whoami_0_0(t);
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_36), not_null(d_21)), term_q_36));
  t = printnl_0_0(t);
  t = term_y_5;
  t = exit_0_0(t);
  t = not_null(b_21);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_21 = NULL,i_21 = NULL;
  t = report_run_time_0_0(t);
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  t = term_w_33;
  t = whoami_0_0(t);
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATempty, term_s_36), not_null(i_21)));
  t = printnl_0_0(t);
  t = term_y_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_t_36;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm j_21 = NULL;
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  t = SSL_TicksToSeconds(not_null(j_21));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm o_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_21 = ATgetArgument(t, 0);
      if(((u_21 != NULL) && (u_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(o_21), not_null(u_21));
        ;
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
        t = SSL_addr(not_null(o_21), not_null(u_21));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = i_76(t);
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
        if(((w_21 != NULL) && (w_21 != t)))
          _fail(t);
        else
          w_21 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((x_21 != NULL) && (x_21 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              x_21 = ATgetFirst((ATermList) t);
            if(((a_22 != NULL) && (a_22 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(x_21);
        if(((b_22 != NULL) && (b_22 != t)))
          _fail(t);
        else
          b_22 = t;
        t = not_null(a_22);
        if(((c_22 != NULL) && (c_22 != t)))
          _fail(t);
        else
          c_22 = t;
        t = not_null(w_21);
        if(((d_22 != NULL) && (d_22 != t)))
          _fail(t);
        else
          d_22 = t;
        t = not_null(c_22);
        t = foldr_2_0(i_76, j_76, t);
        if(((e_22 != NULL) && (e_22 != t)))
          _fail(t);
        else
          e_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), not_null(e_22));
        t = j_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = not_null(f_22);
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  t = SSL_explode_term(not_null(h_22));
  if(match_cons(t, sym__2))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_22);
  t = foldr_2_0(g_74, h_74, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  {
    ATerm z_3 (ATerm t)
    {
      t = term_l_35;
      return(t);
    }
    t = crush_2_0(z_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_22 != NULL) && (j_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_22 = ATgetArgument(t, 0);
      if(((k_22 != NULL) && (k_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  {
    ATerm z_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(j_22), not_null(k_22));
        ;
        LocalPopChoice(a_37);
      }
    else
      {
        t = z_36;
        t = SSL_gtr(not_null(j_22), not_null(k_22));
      }
    t = not_null(l_22);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
      if(((o_22 != NULL) && (o_22 != t)))
        _fail(t);
      else
        o_22 = t;
      if(match_cons(t, sym__2))
        {
          if(((p_22 != NULL) && (p_22 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_22 = ATgetArgument(t, 0);
          if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            q_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(p_22);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      t = not_null(q_22);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      t = not_null(o_22);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
    if(((r_22 != NULL) && (r_22 != t)))
      _fail(t);
    else
      r_22 = t;
    if(((s_22 != NULL) && (s_22 != t)))
      _fail(t);
    else
      s_22 = t;
    t = term_r_5;
    t = get_config_0_0(t);
    if(((t_22 != NULL) && (t_22 != t)))
      _fail(t);
    else
      t_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_22), term_y_5);
    t = geq_0_0(t);
    t = not_null(r_22);
    t = g_81(t);
    return(t);
  }
  t = try_1_0(a_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
    if(((u_22 != NULL) && (u_22 != t)))
      _fail(t);
    else
      u_22 = t;
    t = run_time_0_0(t);
    if(((v_22 != NULL) && (v_22 != t)))
      _fail(t);
    else
      v_22 = t;
    t = not_null(u_22);
    if(((w_22 != NULL) && (w_22 != t)))
      _fail(t);
    else
      w_22 = t;
    t = term_w_33;
    t = whoami_0_0(t);
    if(((x_22 != NULL) && (x_22 != t)))
      _fail(t);
    else
      x_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_37), not_null(v_22)), term_r_6), not_null(x_22)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(b_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_l_35;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                ATerm j_37 = t;
                int k_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(k_37);
                  }
                else
                  {
                    t = j_37;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(c_4, t);
      }
    }
  t = s_85(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_22 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  t = SSL_table_create(not_null(y_22));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  t = term_l_37;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_37, term_m_37, not_null(z_22));
  t = table_put_0_0(t);
  t = not_null(a_23);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_23 = NULL;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = SSL_table_destroy(not_null(b_23));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm c_23 = NULL;
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  t = SSL_exit(not_null(c_23));
  return(t);
}
ATerm long_description_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_23 = ATgetFirst((ATermList) t);
      f_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL;
        t = not_null(e_23);
        if(((h_23 != NULL) && (h_23 != t)))
          _fail(t);
        else
          h_23 = t;
        t = not_null(f_23);
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        if(((j_23 != NULL) && (j_23 != t)))
          _fail(t);
        else
          j_23 = t;
        if(((k_23 != NULL) && (k_23 != t)))
          _fail(t);
        else
          k_23 = t;
        t = g_0(t);
        if(((l_23 != NULL) && (l_23 != t)))
          _fail(t);
        else
          l_23 = t;
        t = not_null(k_23);
        if(((m_23 != NULL) && (m_23 != t)))
          _fail(t);
        else
          m_23 = t;
        t = not_null(h_23);
        t = e_0(t);
        if(((n_23 != NULL) && (n_23 != t)))
          _fail(t);
        else
          n_23 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(l_23)), not_null(n_23));
        if(((o_23 != NULL) && (o_23 != t)))
          _fail(t);
        else
          o_23 = t;
        t = not_null(j_23);
        {
          ATerm d_4 (ATerm t)
          {
            t = not_null(o_23);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_33;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, e_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm p_62 (ATerm), ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((q_23 != NULL) && (q_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = SSLgetAnnotations(not_null(s_23));
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = not_null(q_23);
  t = p_62(t);
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(r_23)), not_null(p_23));
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_23 = NULL;
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_36;
      t = get_config_0_0(t);
      if(((w_23 != NULL) && (w_23 != t)))
        _fail(t);
      else
        w_23 = t;
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm f_4 (ATerm t)
        {
          ATerm g_4 (ATerm t)
          {
            if(((w_23 != NULL) && (w_23 != t)))
              _fail(t);
            else
              w_23 = t;
            return(t);
          }
          t = Program_1_0(g_4, t);
          return(t);
        }
        t = option_defined_1_0(f_4, t);
      }
    }
  {
    ATerm h_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        t = not_null(w_23);
        return(t);
      }
      t = short_description_1_0(i_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(h_4, t);
    t = term_p_37;
    t = echo_0_0(t);
    t = term_s_37;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm x_23 = NULL,y_23 = NULL;
        if(((x_23 != NULL) && (x_23 != t)))
          _fail(t);
        else
          x_23 = t;
        if(((y_23 != NULL) && (y_23 != t)))
          _fail(t);
        else
          y_23 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_23)), term_t_37);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(j_4, t);
      {
        ATerm k_4 (ATerm t)
        {
          ATerm z_23 = NULL,a_24 = NULL;
          if(((z_23 != NULL) && (z_23 != t)))
            _fail(t);
          else
            z_23 = t;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(w_23);
              return(t);
            }
            t = long_description_1_0(l_4, t);
            if(((a_24 != NULL) && (a_24 != t)))
              _fail(t);
            else
              a_24 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(a_24)), term_u_37);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(k_4, t);
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_24 != NULL) && (b_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_24 = ATgetArgument(t, 0);
      if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = SSL_printnl(not_null(b_24), not_null(c_24));
  t = not_null(d_24);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_62 (ATerm), ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL;
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = SSLgetAnnotations(not_null(h_24));
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = not_null(f_24);
  t = q_62(t);
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_24)), not_null(e_24));
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm l_24 (ATerm t)
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_70, _id, t);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = Cons_2_0(_id, l_24, t);
      }
    return(t);
  }
  t = l_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  t = fetch_1_0(n_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm n_24 = NULL,s_24 = NULL,t_24 = NULL;
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(n_24);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_24 != NULL) && (s_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_24 = ATgetFirst((ATermList) t);
          if(((t_24 != NULL) && (t_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(n_24);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,c_25 = NULL;
  if(((u_24 != NULL) && (u_24 != t)))
    _fail(t);
  else
    u_24 = t;
  if(((v_24 != NULL) && (v_24 != t)))
    _fail(t);
  else
    v_24 = t;
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        {
          ATerm z_24 = NULL,a_25 = NULL,b_25 = NULL;
          if(((z_24 != NULL) && (z_24 != t)))
            _fail(t);
          else
            z_24 = t;
          if(((a_25 != NULL) && (a_25 != t)))
            _fail(t);
          else
            a_25 = t;
          t = not_null(z_24);
          if(((b_25 != NULL) && (b_25 != t)))
            _fail(t);
          else
            b_25 = t;
          t = (ATerm) ATinsert(ATempty, not_null(b_25));
        }
      }
    if(((c_25 != NULL) && (c_25 != t)))
      _fail(t);
    else
      c_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_5, not_null(c_25));
    t = printnl_0_0(t);
    t = not_null(u_24);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_t_36;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm override_system_about_0_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm d_25 = NULL;
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = SSL_implode_string(not_null(d_25));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
        if(((f_25 != NULL) && (f_25 != t)))
          _fail(t);
        else
          f_25 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((g_25 != NULL) && (g_25 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              g_25 = ATgetFirst((ATermList) t);
            if(((h_25 != NULL) && (h_25 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              h_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(g_25);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        t = not_null(h_25);
        if(((j_25 != NULL) && (j_25 != t)))
          _fail(t);
        else
          j_25 = t;
        t = not_null(i_25);
        {
          ATerm m_4 (ATerm t)
          {
            t = not_null(j_25);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm l_25 = NULL,m_25 = NULL,p_25 = NULL,q_25 = NULL;
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  if(((m_25 != NULL) && (m_25 != t)))
    _fail(t);
  else
    m_25 = t;
  t = not_null(l_25);
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  t = SSL_explode_term(not_null(p_25));
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((q_25 != NULL) && (q_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_25);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  ATerm r_25 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_25, t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        t = Nil_0_0(t);
        t = i_70(t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((t_25 != NULL) && (t_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_25 = ATgetArgument(t, 0);
      if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_25);
  {
    ATerm n_4 (ATerm t)
    {
      t = not_null(s_25);
      return(t);
    }
    t = at_end_1_0(n_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm u_25 = NULL;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = SSL_explode_string(not_null(u_25));
  return(t);
}
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_25 = ATgetArgument(t, 0);
      if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = SSLgetAnnotations(not_null(a_26));
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = not_null(w_25);
  t = a_56(t);
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  t = not_null(x_25);
  t = b_56(t);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_25), not_null(z_25)), not_null(v_25));
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm k_65 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,n_26 = NULL;
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = k_65(t);
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = not_null(f_26);
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_26)), not_null(g_26)));
  t = printnl_0_0(t);
  t = not_null(e_26);
  return(t);
}
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm o_26 (ATerm t)
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        t = Cons_2_0(r_69, o_26, t);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = SSL_is_string(not_null(p_26));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm o_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(o_4, t);
            ;
            LocalPopChoice(p_38);
          }
        else
          {
            t = o_38;
            {
              ATerm k_27 (ATerm s_26, ATerm u_26, ATerm t)
              {
                ATerm v_26 = NULL;
                t = not_null(s_26);
                if(((v_26 != NULL) && (v_26 != t)))
                  _fail(t);
                else
                  v_26 = t;
                {
                  ATerm q_38 = t;
                  int r_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(r_38);
                    }
                  else
                    {
                      t = q_38;
                      {
                        ATerm p_4 (ATerm t)
                        {
                          t = term_s_38;
                          return(t);
                        }
                        t = debug_1_0(p_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
              if(((w_26 != NULL) && (w_26 != t)))
                _fail(t);
              else
                w_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_26 = ATgetArgument(t, 0);
                  {
                    ATerm z_26 = NULL;
                    t = not_null(x_26);
                    if(((z_26 != NULL) && (z_26 != t)))
                      _fail(t);
                    else
                      z_26 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_26 = ATgetArgument(t, 0);
                      t = k_27(not_null(x_26), not_null(w_26), t);
                    }
                  else
                    {
                      ATerm a_27 = NULL,e_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((x_26 != NULL) && (x_26 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            x_26 = ATgetArgument(t, 0);
                          if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            y_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(x_26);
                      if(((a_27 != NULL) && (a_27 != t)))
                        _fail(t);
                      else
                        a_27 = t;
                      t = not_null(y_26);
                      if(((e_27 != NULL) && (e_27 != t)))
                        _fail(t);
                      else
                        e_27 = t;
                      t = not_null(w_26);
                      if(((g_27 != NULL) && (g_27 != t)))
                        _fail(t);
                      else
                        g_27 = t;
                      t = not_null(a_27);
                      t = eval_config_0_0(t);
                      if(((h_27 != NULL) && (h_27 != t)))
                        _fail(t);
                      else
                        h_27 = t;
                      t = not_null(g_27);
                      if(((i_27 != NULL) && (i_27 != t)))
                        _fail(t);
                      else
                        i_27 = t;
                      t = not_null(e_27);
                      t = eval_config_0_0(t);
                      if(((j_27 != NULL) && (j_27 != t)))
                        _fail(t);
                      else
                        j_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(j_27));
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
  ATerm l_27 = NULL;
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, not_null(l_27));
  t = table_get_0_0(t);
  {
    ATerm q_4 (ATerm t)
    {
      ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
      t = eval_config_0_0(t);
      if(((m_27 != NULL) && (m_27 != t)))
        _fail(t);
      else
        m_27 = t;
      if(((n_27 != NULL) && (n_27 != t)))
        _fail(t);
      else
        n_27 = t;
      if(((o_27 != NULL) && (o_27 != t)))
        _fail(t);
      else
        o_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_36, not_null(l_27), not_null(o_27));
      t = table_put_0_0(t);
      t = not_null(m_27);
      return(t);
    }
    t = try_1_0(q_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm s_4 (ATerm t)
      {
        t = term_y_38;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm t_4 (ATerm t)
      {
        t = term_z_38;
        return(t);
      }
      t = Option_3_0(r_4, s_4, t_4, t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm u_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          ATerm p_27 = NULL;
          if(((p_27 != NULL) && (p_27 != t)))
            _fail(t);
          else
            p_27 = t;
          t = term_y_38;
          t = set_config_0_0(t);
          t = term_b_39;
          t = set_config_0_0(t);
          t = term_c_39;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_d_39;
          return(t);
        }
        t = Option_3_0(u_4, v_4, w_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_27 = ATgetArgument(t, 0);
      if(((r_27 != NULL) && (r_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(q_27), not_null(r_27));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((s_27 != NULL) && (s_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_27 = ATgetArgument(t, 0);
      if(((t_27 != NULL) && (t_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_27 = ATgetArgument(t, 1);
      if(((u_27 != NULL) && (u_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  if(((w_27 != NULL) && (w_27 != t)))
    _fail(t);
  else
    w_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), not_null(t_27));
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        t = (ATerm) ATempty;
      }
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(s_27), not_null(t_27), (ATerm) ATinsert(CheckATermList(not_null(x_27)), not_null(u_27)));
    t = table_put_0_0(t);
    t = not_null(v_27);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = term_w_33;
  t = s_87(t);
  if(((z_27 != NULL) && (z_27 != t)))
    _fail(t);
  else
    z_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_37, term_r_37, not_null(z_27));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(b_28);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_28 != NULL) && (c_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_28 = ATgetFirst((ATermList) t);
          if(((d_28 != NULL) && (d_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(c_28);
      if(((e_28 != NULL) && (e_28 != t)))
        _fail(t);
      else
        e_28 = t;
      t = not_null(d_28);
      if(((f_28 != NULL) && (f_28 != t)))
        _fail(t);
      else
        f_28 = t;
      t = not_null(b_28);
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = not_null(e_28);
      t = a_0(t);
      t = not_null(g_28);
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = term_w_33;
      t = c_0(t);
      if(((i_28 != NULL) && (i_28 != t)))
        _fail(t);
      else
        i_28 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(f_28)), not_null(i_28));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm k_28 = NULL;
    if(((k_28 != NULL) && (k_28 != t)))
      _fail(t);
    else
      k_28 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(k_28);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(k_28);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(k_28);
          }
      }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_g_39;
    t = set_config_0_0(t);
    t = term_h_39;
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = term_i_39;
    return(t);
  }
  t = Option_3_0(x_4, y_4, z_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((l_28 != NULL) && (l_28 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        l_28 = ATgetFirst((ATermList) t);
      if(((m_28 != NULL) && (m_28 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(m_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_28)));
  return(t);
}
ATerm Cons_2_0 (ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL;
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((o_28 != NULL) && (o_28 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        o_28 = ATgetFirst((ATermList) t);
      if(((p_28 != NULL) && (p_28 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        p_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  t = SSLgetAnnotations(not_null(s_28));
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  t = not_null(o_28);
  t = j_57(t);
  if(((q_28 != NULL) && (q_28 != t)))
    _fail(t);
  else
    q_28 = t;
  t = not_null(p_28);
  t = k_57(t);
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  if(((v_28 != NULL) && (v_28 != t)))
    _fail(t);
  else
    v_28 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_28)), not_null(q_28)), not_null(n_28));
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  return(t);
}
ATerm Nil_0_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm set_config_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_28 != NULL) && (w_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_28 = ATgetArgument(t, 0);
      if(((x_28 != NULL) && (x_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_36, not_null(w_28), not_null(x_28));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm y_28 = NULL;
  if(((y_28 != NULL) && (y_28 != t)))
    _fail(t);
  else
    y_28 = t;
  {
    ATerm a_5 (ATerm t)
    {
      t = term_j_39;
      t = q_87(t);
      return(t);
    }
    t = try_1_0(a_5, t);
    t = not_null(y_28);
    {
      ATerm b_5 (ATerm t)
      {
        ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL;
        if(((z_28 != NULL) && (z_28 != t)))
          _fail(t);
        else
          z_28 = t;
        if(((a_29 != NULL) && (a_29 != t)))
          _fail(t);
        else
          a_29 = t;
        if(((b_29 != NULL) && (b_29 != t)))
          _fail(t);
        else
          b_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_36, not_null(b_29));
        t = set_config_0_0(t);
        t = not_null(z_28);
        if(((c_29 != NULL) && (c_29 != t)))
          _fail(t);
        else
          c_29 = t;
        if(((d_29 != NULL) && (d_29 != t)))
          _fail(t);
        else
          d_29 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_29));
        return(t);
      }
      ATerm c_5 (ATerm t)
      {
        ATerm k_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_39 = t;
            int n_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(n_39);
              }
            else
              {
                t = m_39;
                t = q_87(t);
                t = Cons_2_0(_id, c_5, t);
              }
            ;
            LocalPopChoice(l_39);
          }
        else
          {
            t = k_39;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(b_5, c_5, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  if(match_cons(t, sym__3))
    {
      if(((g_29 != NULL) && (g_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_29 = ATgetArgument(t, 0);
      if(((h_29 != NULL) && (h_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_29 = ATgetArgument(t, 1);
      if(((i_29 != NULL) && (i_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        i_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(g_29), not_null(h_29), not_null(i_29));
  t = not_null(f_29);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,q_29 = NULL;
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  t = term_o_39;
  t = table_put_0_0(t);
  t = not_null(k_29);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm p_39 = t;
      int q_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_87(t);
          ;
          LocalPopChoice(q_39);
        }
      else
        {
          t = p_39;
          {
            ATerm r_39 = t;
            int s_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(s_39);
              }
            else
              {
                t = r_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_5, t);
    {
      ATerm e_5 (ATerm t)
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 (ATerm m_29, ATerm t)
            {
              ATerm n_29 = NULL;
              t = not_null(m_29);
              if(((n_29 != NULL) && (n_29 != t)))
                _fail(t);
              else
                n_29 = t;
              t = not_null(m_29);
              {
                ATerm v_39 = t;
                int w_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_g_37;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(w_39);
                  }
                else
                  {
                    t = v_39;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(n_29);
                t = system_usage_0_0(t);
                t = term_l_35;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm o_29 = NULL;
            if(((o_29 != NULL) && (o_29 != t)))
              _fail(t);
            else
              o_29 = t;
            {
              ATerm x_39 = t;
              int y_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_29(not_null(o_29), t);
                  ;
                  LocalPopChoice(y_39);
                }
              else
                {
                  t = x_39;
                  {
                    ATerm p_29 = NULL;
                    t = not_null(o_29);
                    if(((p_29 != NULL) && (p_29 != t)))
                      _fail(t);
                    else
                      p_29 = t;
                    t = term_x_38;
                    t = get_config_0_0(t);
                    t = not_null(p_29);
                    t = system_about_0_0(t);
                    t = term_l_35;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            {
              ATerm f_5 (ATerm t)
              {
                ATerm g_5 (ATerm t)
                {
                  if(((l_29 != NULL) && (l_29 != t)))
                    _fail(t);
                  else
                    l_29 = t;
                  return(t);
                }
                t = Undefined_1_0(g_5, t);
                return(t);
              }
              t = option_defined_1_0(f_5, t);
              t = (ATerm) ATmakeAppl(sym__2, term_t_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_29)), term_z_39));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_y_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(e_5, t);
      if(((q_29 != NULL) && (q_29 != t)))
        _fail(t);
      else
        q_29 = t;
      t = term_q_37;
      t = table_destroy_0_0(t);
      t = not_null(q_29);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm), ATerm t)
{
  t = parse_options_1_0(u_85, t);
  t = store_options_0_0(t);
  t = w_85(t);
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_85, t);
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        {
          ATerm c_40 = t;
          int d_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_40);
            }
          else
            {
              t = c_40;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(y_85, default_usage_0_0, _id, z_85, t);
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
