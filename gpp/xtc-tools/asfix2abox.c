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
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_e_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_p_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_a_34;
ATerm term_n_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_r_32;
ATerm term_p_32;
ATerm term_l_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_z_30;
ATerm term_y_30;
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
ATerm term_h_29;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_n_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_s_25;
ATerm term_p_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_b_25;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_a_22;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
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
ATerm term_r_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
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
ATerm term_z_16;
ATerm term_y_16;
ATerm term_s_16;
ATerm term_m_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
void init_constant_terms (void)
{
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_13, term_z_11, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_13, term_v_10, term_x_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_a_14, term_b_14);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_g_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_l_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_y_14, term_z_14);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_f_15, term_l_15);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_15, term_t_15, term_v_15);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_s_16, term_y_16);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_17, term_f_17, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_j_17, term_k_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_p_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_17, term_u_17, term_v_17);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_e_18, term_f_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_j_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_w_18, term_x_18);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_f_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_m_19, term_n_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_19, term_t_19, term_u_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_y_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_20, term_c_20, term_f_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_20, term_j_20, term_k_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_t_20, term_u_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_i_21);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_l_25);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_d_24);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym__2, term_a_27, term_n_26);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_30);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_t_12);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_e_30);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_a_34, term_t_12);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym__2, term_e_34, term_t_12);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym__2, term_p_32, term_t_12);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_t_12);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_h_37);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
ATerm q_6 (ATerm u_24, ATerm v_24, ATerm);
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
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm k_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm s_6 (ATerm l_43, ATerm m_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm t_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm u_6 (ATerm k_72 (ATerm), ATerm x_182, ATerm c_28, ATerm);
ATerm p_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm);
ATerm v_6 (ATerm q_24, ATerm r_24, ATerm);
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
ATerm y_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm);
ATerm z_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm);
ATerm z_1 (ATerm);
ATerm a_7 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm b_7 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm o_12 (ATerm e_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_7 (ATerm a_28, ATerm);
ATerm d_7 (ATerm w_48, ATerm x_48, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_15 (ATerm g_13, ATerm);
ATerm j_15 (ATerm p_13, ATerm q_13, ATerm t_13, ATerm);
ATerm m_15 (ATerm n_14, ATerm o_14, ATerm p_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm t_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm h_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm r_20 (ATerm i_19, ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm e_7 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm x_21 (ATerm j_21, ATerm);
ATerm y_21 (ATerm l_21, ATerm n_21, ATerm q_21, ATerm);
ATerm p_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_7 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm g_7 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm h_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm h_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm l_31 (ATerm b_31, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_7 (ATerm q_47, ATerm p_47, ATerm);
ATerm o_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm m_7 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm l_8 (ATerm);
ATerm n_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm n_7 (ATerm b_47, ATerm c_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm y_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_10;
      t = get_config_0_0(t);
      LocalPopChoice(a_10);
      t = (ATerm) ATinsert(ATempty, term_c_10);
    }
  else
    {
      t = y_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm q_6 (ATerm u_24, ATerm v_24, ATerm t)
{
  t = SSL_rename(u_24, v_24);
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = d_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_f_10;
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_1, term_f_10);
        t = g_7(e_1, p_0, t);
        t = SSL_remove(e_1);
        t = term_f_10;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm g_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_1 = NULL;
              t = d_1;
              t = n_0(t);
              h_1 = t;
              {
                ATerm j_10 = t;
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
                        if((e_1 != t))
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
                    t = j_10;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_1, h_1);
                t = q_6(e_1, h_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
              }
              ;
              LocalPopChoice(i_10);
            }
          else
            {
              t = g_10;
              t = d_1;
              t = n_0(t);
              if((e_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_1);
            }
        }
      }
  }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_k_10;
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
  t = term_l_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL;
  if(((l_1 != NULL) && (l_1 != t)))
    _fail(t);
  else
    l_1 = t;
  {
    ATerm b_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_1));
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 = NULL,o_1 = NULL,q_0 = NULL;
            o_1 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm o_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_1);
            n_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_1));
            q_0 = t;
            t = SSLsetAnnotations(q_0, n_1);
            LocalPopChoice(n_10);
            t = xtc_transform_file_2_0(f_0, o_0, t);
          }
        else
          {
            t = m_10;
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
    ATerm p_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_1, term_v_10);
        t = geq_0_0(t);
        t = r_1;
        t = b_88(t);
        ;
        LocalPopChoice(r_10);
      }
    else
      {
        t = p_10;
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
  t = term_x_10;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,z_2 = NULL,t_0 = NULL;
  x_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_10), term_y_10), x_1);
  h_2 = t;
  t = SSL_concat_strings(h_2);
  g_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_11);
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, (ATerm) ATinsert(ATempty, term_a_11));
  t = f_7(g_2, e_2, t);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
  z_2 = t;
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      ATerm h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_2);
  i_2 = t;
  t = SSL_modification_time(w_1);
  j_2 = t;
  t = SSL_modification_time(x_1);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_2, k_2);
  t_0 = t;
  t = SSLsetAnnotations(t_0, i_2);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, w_1, x_1);
  d_2 = t;
  t = SSL_explode_term(d_2);
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
          {
            c_2 = ATgetFirst((ATermList) j_11);
            {
              ATerm k_11 = (ATerm) ATgetNext((ATermList) j_11);
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
  ATerm u_3 (ATerm t)
  {
    ATerm m_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        ;
        LocalPopChoice(n_11);
      }
    else
      {
        t = m_11;
        {
          ATerm m_3 = NULL,p_3 = NULL,r_3 = NULL,a_2 = NULL,l_2 = NULL,v_0 = NULL;
          m_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_3 = ATgetFirst((ATermList) t);
              r_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_3);
          a_2 = t;
          t = r_3;
          t = u_3(t);
          l_2 = t;
          t = (ATerm) ATinsert(CheckATermList(l_2), p_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, a_2);
        }
      }
    return(t);
  }
  t = u_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL;
      if(((r_2 != NULL) && (r_2 != t)))
        _fail(t);
      else
        r_2 = t;
      t = term_s_11;
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
        ATerm a_1 (ATerm t)
        {
          if(((q_2 != NULL) && (q_2 != t)))
            _fail(t);
          else
            q_2 = t;
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
        t = not_null(r_2);
      }
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = p_11;
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
            if(((v_2 != NULL) && (v_2 != t)))
              _fail(t);
            else
              v_2 = t;
            t = term_w_11;
            if(((w_2 != NULL) && (w_2 != t)))
              _fail(t);
            else
              w_2 = t;
            t = SSL_explode_string(not_null(w_2));
            if(((u_2 != NULL) && (u_2 != t)))
              _fail(t);
            else
              u_2 = t;
            t = SSL_explode_string(not_null(v_2));
            {
              ATerm c_1 (ATerm t)
              {
                if(((u_2 != NULL) && (u_2 != t)))
                  _fail(t);
                else
                  u_2 = t;
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
              t = not_null(v_2);
            }
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL;
              b_4 = t;
              t = term_x_11;
              e_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_y_11);
              f_4 = t;
              t = SSL_printnl(e_4, f_4);
              t = term_z_11;
              c_4 = t;
              t = SSL_exit(c_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, b_4), term_y_11);
            }
          }
        {
          ATerm a_12 = t;
          int b_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(b_12);
            }
          else
            {
              t = a_12;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm g_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  g_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_4), term_f_12);
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = debug_1_0(k_1, t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(g_1, t);
  return(t);
}
ATerm s_6 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm i_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_43, m_43);
      ;
      LocalPopChoice(l_12);
    }
  else
    {
      t = i_12;
      t = SSL_subtr(l_43, m_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL;
  t = term_u_10;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = term_z_11;
      }
    j_4 = t;
    t = term_z_11;
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_4, term_z_11);
    t = s_6(j_4, l_4, t);
    k_4 = t;
    t = SSL_int_to_string(k_4);
    i_4 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, i_4), term_u_10);
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL;
  t = term_t_12;
  t = pass_verbose_0_0(t);
  m_4 = t;
  t = term_t_12;
  t = create_pp_table_args_0_0(t);
  n_4 = t;
  t = term_t_12;
  t = pass_conservative_0_0(t);
  o_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_4), n_4), m_4);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_12;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm w_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_11);
      w_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATempty, term_a_11));
      t = f_7(t_4, w_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm x_4 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_4);
  return(t);
}
ATerm u_6 (ATerm k_72 (ATerm), ATerm x_182, ATerm c_28, ATerm t)
{
  ATerm y_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_182, term_v_12);
  t = open_stream_0_0(t);
  y_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_4, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm b_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      if(match_cons(w_12, sym_Stream_1))
        {
          b_5 = ATgetArgument(w_12, 0);
        }
      else
        _fail(t);
      f_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(b_5, f_5, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm z_4 = NULL,a_5 = NULL;
  z_4 = t;
  t = xtc_new_file_0_0(t);
  a_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_5, z_4);
  t = u_6(p_1, a_5, z_4, t);
  t = SSL_close_file(a_5);
  t = (ATerm) ATmakeAppl(sym_FILE_1, a_5);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm u_90 (ATerm), ATerm v_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(u_90, v_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm v_6 (ATerm q_24, ATerm r_24, ATerm t)
{
  t = SSL_execvp(q_24, r_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL;
  e_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      f_6 = ATgetArgument(t, 0);
      {
        ATerm c_3 = NULL,d_3 = NULL;
        t = SSL_int_to_string(f_6);
        c_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_12), c_3), term_y_12);
        d_3 = t;
        t = SSL_concat_strings(d_3);
      }
    }
  else
    {
      ATerm q_4 = NULL,s_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          f_6 = ATgetArgument(t, 0);
          g_6 = ATgetArgument(t, 1);
          i_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(g_6);
      q_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_6), term_c_13), q_4), term_b_13), f_6);
      s_4 = t;
      t = SSL_concat_strings(s_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm w_6 = NULL;
  ATerm q_1 (ATerm t)
  {
    t = p_76(t);
    if(((w_6 != NULL) && (w_6 != t)))
      _fail(t);
    else
      w_6 = t;
    return(t);
  }
  t = fetch_1_0(q_1, t);
  t = not_null(w_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_7 = NULL;
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm i_13 = ATgetArgument(t, 0);
              if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                r_7 = ATgetArgument(t, 1);
              {
                ATerm j_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), term_f_21), term_p_20), term_l_20), term_g_20), term_a_20), term_v_19), term_r_19), term_h_19), term_b_19), term_p_18), term_l_18), term_h_18), term_a_18), term_w_17), term_q_17), term_l_17), term_h_17), term_z_16), term_w_15), term_o_15), term_b_15), term_t_14), term_m_14), term_h_14), term_c_14), term_y_13), term_r_13);
        t = fetch_elem_1_0(s_1, t);
        ;
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(r_7));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm w_7 = NULL,m_8 = NULL;
  w_7 = t;
  {
    ATerm m_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_21 = ATgetArgument(t, 0);
            m_8 = ATgetArgument(t, 1);
            {
              ATerm r_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_21);
        {
          ATerm s_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,j_5 = NULL,m_5 = NULL;
              t = m_8;
              {
                ATerm z_21 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_21;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                h_5 = t;
                t = term_x_11;
                j_5 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, h_5), term_a_22);
                m_5 = t;
                t = SSL_printnl(j_5, m_5);
                t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, h_5), term_a_22));
              }
              ;
              LocalPopChoice(w_21);
            }
          else
            {
              t = s_21;
              t = w_7;
            }
        }
      }
    else
      {
        t = m_21;
        t = w_7;
      }
    t = w_7;
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
  ATerm u_8 = NULL,v_8 = NULL;
  v_8 = t;
  t = fork_0_0(t);
  u_8 = t;
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = v_8;
        t = z_70(t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        t = SSL_waitpid(u_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm g_22 = ATgetArgument(t, 0);
            if(((ATgetType(g_22) != AT_INT) || (ATgetInt((ATermInt) g_22) != 0)))
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
        t = v_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm y_8 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm z_8 = NULL,a_9 = NULL;
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), z_8);
    t = n_7(not_null(y_8), z_8, t);
    a_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_8, a_9);
    return(t);
  }
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = SSL_table_keys(not_null(y_8));
  t = map_1_0(t_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  {
    ATerm m_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, term_j_20);
        t = geq_0_0(t);
        t = d_9;
        t = e_88(t);
        ;
        LocalPopChoice(n_22);
      }
    else
      {
        t = m_22;
        t = d_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        n_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_9, term_j_17);
        t = geq_0_0(t);
        t = k_9;
        t = d_88(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        t = k_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm s_9 = NULL;
  s_9 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_9, term_e_14);
        t = geq_0_0(t);
        t = s_9;
        t = f_88(t);
        ;
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        t = s_9;
      }
  }
  return(t);
}
ATerm y_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm v_1 (ATerm t)
    {
      ATerm z_9 = NULL;
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_34), z_9);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(v_1, t);
    t = not_null(w_34);
  }
  return(t);
}
ATerm z_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm q_10 = NULL,s_10 = NULL,t_10 = NULL;
    q_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(s_34);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_10 = ATgetFirst((ATermList) t);
            t_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_22 = t;
          int t_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_10;
              {
                ATerm y_1 (ATerm t)
                {
                  t = not_null(s_34);
                  return(t);
                }
                t = y_6(h_80, y_1, not_null(s_10), not_null(t_10), t);
                t = w_10(t);
              }
              ;
              LocalPopChoice(t_22);
            }
          else
            {
              t = s_22;
              {
                ATerm d_6 = NULL,k_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(q_10);
                d_6 = t;
                t = t_10;
                t = w_10(t);
                k_6 = t;
                t = (ATerm) ATinsert(CheckATermList(k_6), s_10);
                z_0 = t;
                t = SSLsetAnnotations(z_0, d_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(t_34);
  t = w_10(t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      l_11 = ATgetArgument(t, 0);
      if((l_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,e_11 = NULL;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_22 = ATgetArgument(t, 0);
            ATerm x_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = n_7(h_46, i_46, t);
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        t = (ATerm) ATempty;
      }
    e_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_11, j_46);
    t = z_6(z_1, e_11, j_46, t);
    c_11 = t;
    t = SSL_table_put(h_46, i_46, c_11);
    t = b_11;
  }
  return(t);
}
ATerm b_7 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm o_11 = NULL,q_11 = NULL;
    if(match_cons(t, sym__2))
      {
        o_11 = ATgetArgument(t, 0);
        q_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_46), o_11, q_11);
    t = h_88(t);
    return(t);
  }
  t = not_null(q_46);
  t = map_1_0(b_2, t);
  return(t);
}
ATerm o_12 (ATerm e_12, ATerm t)
{
  t = SSL_fclose(e_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL;
  k_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_12 = ATgetArgument(t, 0);
      {
        ATerm y_22 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_12);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = y_22;
            t = o_12(k_12, t);
          }
      }
    }
  else
    {
      t = o_12(k_12, t);
    }
  return(t);
}
ATerm c_7 (ATerm a_28, ATerm t)
{
  t = SSL_read_term_from_stream(a_28);
  return(t);
}
ATerm d_7 (ATerm w_48, ATerm x_48, ATerm t)
{
  ATerm p_12 = NULL;
  t = SSL_fopen(w_48, x_48);
  p_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  t = SSL_stdin_stream();
  q_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_12);
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
ATerm i_15 (ATerm g_13, ATerm t)
{
  ATerm k_13 = NULL;
  t = SSL_explode_term(g_13);
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            k_13 = ATgetFirst((ATermList) d_23);
            {
              ATerm e_23 = (ATerm) ATgetNext((ATermList) d_23);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_13;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_13;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_13;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_13;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_15 (ATerm p_13, ATerm q_13, ATerm t_13, ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,f_14 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(t_13);
  w_13 = t;
  t = p_13;
  if(match_cons(t, sym_Path_1))
    {
      f_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_14, q_13);
  b_1 = t;
  t = SSLsetAnnotations(b_1, w_13);
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(u_13, v_13, t);
  return(t);
}
ATerm m_15 (ATerm n_14, ATerm o_14, ATerm p_14, ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,a_15 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(p_14);
  x_14 = t;
  t = SSL_is_string(n_14);
  a_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_15, o_14);
  i_1 = t;
  t = SSLsetAnnotations(i_1, x_14);
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(v_14, w_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm e_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      ATerm g_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  e_15 = t;
  if(match_cons(t, sym__2))
    {
      g_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_15(e_15, t);
            ;
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm j_23 = t;
              int k_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_15(g_15, h_15, e_15, t);
                  ;
                  LocalPopChoice(k_23);
                }
              else
                {
                  t = j_23;
                  t = m_15(g_15, h_15, e_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_15(e_15, t);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL,r_15 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_15 = NULL;
      s_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_15, term_o_23);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_23);
    }
  else
    {
      t = m_23;
      t = debug_1_0(f_2, t);
      _fail(t);
    }
  q_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(r_15, t);
  n_15 = t;
  t = q_15;
  t = fclose_0_0(t);
  t = n_15;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_p_23;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL,x_15 = NULL;
      u_15 = t;
      t = (ATerm) ATinsert(ATempty, term_t_23);
      x_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_15, (ATerm) ATinsert(ATempty, term_t_23));
      t = f_7(u_15, x_15, t);
      LocalPopChoice(s_23);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = t;
            if((PushChoice() == 0))
              {
                ATerm y_15 = NULL,z_15 = NULL;
                y_15 = t;
                t = (ATerm) ATinsert(ATempty, term_a_11);
                z_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, y_15, (ATerm) ATinsert(ATempty, term_a_11));
                t = f_7(y_15, z_15, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_23;
              }
            t = debug_1_0(m_2, t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = debug_1_0(n_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = debug_1_0(p_2, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = debug_1_0(y_2, t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_y_23;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  n_16 = t;
  t = term_x_11;
  o_16 = t;
  t = (ATerm) ATinsert(ATempty, term_z_23);
  p_16 = t;
  t = SSL_printnl(o_16, p_16);
  t = n_16;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__3))
    {
      q_16 = ATgetArgument(t, 0);
      r_16 = ATgetArgument(t, 1);
      u_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(q_16, r_16, u_16, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  t = term_x_11;
  w_16 = t;
  t = (ATerm) ATinsert(ATempty, term_a_24);
  x_16 = t;
  t = SSL_printnl(w_16, x_16);
  t = v_16;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
  b_17 = t;
  t = term_x_11;
  c_17 = t;
  t = (ATerm) ATinsert(ATempty, term_z_23);
  d_17 = t;
  t = SSL_printnl(c_17, d_17);
  t = b_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
  a_16 = t;
  t = if_verbose5_1_0(o_2, t);
  {
    ATerm b_24 = t;
    if((PushChoice() == 0))
      {
        ATerm k_16 = NULL,l_16 = NULL;
        t = term_c_24;
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, a_16);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATmakeAppl(sym_Imported_1, a_16));
        t = n_7(k_16, l_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_24;
      }
    c_16 = t;
    t = term_c_24;
    h_16 = t;
    t = term_d_24;
    i_16 = t;
    t = (ATerm) ATinsert(ATempty, a_16);
    j_16 = t;
    t = SSL_table_put(h_16, i_16, j_16);
    t = c_16;
    t = if_verbose4_1_0(t_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_3, t);
    b_16 = t;
    t = term_c_24;
    g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_24, b_16);
    t = b_7(b_3, g_16, b_16, t);
    t = if_verbose6_1_0(e_3, t);
    t = term_c_24;
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, a_16);
    e_16 = t;
    t = (ATerm) ATempty;
    f_16 = t;
    t = SSL_table_put(d_16, e_16, f_16);
    t = (ATerm) ATmakeAppl(sym__3, term_c_24, (ATerm)ATmakeAppl(sym_Imported_1, a_16), (ATerm) ATempty);
    t = if_verbose4_1_0(h_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,g_18 = NULL;
  c_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_18 = ATgetFirst((ATermList) t);
          g_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_8 = NULL,g_8 = NULL,h_8 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(c_18);
            d_8 = t;
            t = d_18;
            t = y_83(t);
            g_8 = t;
            t = g_18;
            t = filter_1_0(y_83, t);
            h_8 = t;
            t = (ATerm) ATinsert(CheckATermList(h_8), g_8);
            x_2 = t;
            t = SSLsetAnnotations(x_2, d_8);
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = g_18;
            t = filter_1_0(y_83, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm r_18 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = r_18(t);
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
      }
    return(t);
  }
  t = r_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = k_24;
      {
        ATerm f_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = NULL;
            t = term_j_25;
            s_18 = t;
            t = SSL_getenv(s_18);
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = f_25;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = debug_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_k_25;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL;
  t = term_c_24;
  z_18 = t;
  t = term_l_25;
  a_19 = t;
  t = term_m_25;
  t = n_7(z_18, a_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm n_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_25;
      }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(q_3, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_p_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t = if_verbose5_1_0(i_3, t);
  t_18 = t;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_18 = NULL,v_18 = NULL;
        t = term_c_24;
        u_18 = t;
        t = term_d_24;
        v_18 = t;
        t = term_s_25;
        t = n_7(u_18, v_18, t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        {
          ATerm y_18 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          y_18 = t;
          t = repeat_1_0(n_3, t);
          t = y_18;
        }
      }
    t = t_18;
    t = if_verbose5_1_0(o_3, t);
  }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = debug_1_0(t_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm r_20 (ATerm i_19, ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,o_19 = NULL;
  t = term_c_24;
  l_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, i_19);
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATmakeAppl(sym_Tool_1, i_19));
  t = n_7(l_19, o_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_25 = ATgetFirst((ATermList) t);
      if(match_cons(y_25, sym__2))
        {
          ATerm a_26 = ATgetArgument(y_25, 0);
          k_19 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_19;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = debug_1_0(y_3, t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_x_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_c_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(d_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_19 = NULL,q_19 = NULL,z_19 = NULL;
      t = if_verbose5_1_0(s_3, t);
      t = xtc_load_0_0(t);
      if(((z_19 != NULL) && (z_19 != t)))
        _fail(t);
      else
        z_19 = t;
      if(match_cons(t, sym__2))
        {
          p_19 = ATgetArgument(t, 0);
          q_19 = ATgetArgument(t, 1);
          {
            ATerm g_26 = t;
            int h_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_20 = NULL,e_20 = NULL,i_20 = NULL;
                t = term_c_24;
                if(((e_20 != NULL) && (e_20 != t)))
                  _fail(t);
                else
                  e_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_19));
                if(((i_20 != NULL) && (i_20 != t)))
                  _fail(t);
                else
                  i_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATmakeAppl(sym_Tool_1, not_null(p_19)));
                t = n_7(not_null(e_20), not_null(i_20), t);
                {
                  ATerm v_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_19 = ATgetArgument(t, 0);
                        if(((d_20 != NULL) && (d_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          d_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(v_3, t);
                  t = not_null(d_20);
                }
                ;
                LocalPopChoice(h_26);
              }
            else
              {
                t = g_26;
                t = r_20(not_null(z_19), t);
              }
          }
        }
      else
        {
          t = r_20(not_null(z_19), t);
        }
      t = if_verbose5_1_0(w_3, t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm q_20 = NULL,b_9 = NULL,c_9 = NULL;
        q_20 = t;
        t = term_x_11;
        b_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_26), q_20), term_i_26);
        c_9 = t;
        t = SSL_printnl(b_9, c_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_26), q_20), term_i_26);
        t = if_verbose5_1_0(z_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL;
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  t = l_90(t);
  t = xtc_find_0_0(t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(w_20));
  {
    ATerm h_4 (ATerm t)
    {
      ATerm x_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), not_null(w_20));
      t = v_6(not_null(v_20), not_null(w_20), t);
      t = term_k_26;
      x_20 = t;
      t = SSL_exit(x_20);
      return(t);
    }
    t = fork_and_wait_1_0(h_4, t);
    t = not_null(w_20);
  }
  return(t);
}
ATerm e_7 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  t = w_86(t);
  y_20 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_20, t_44, r_44);
  t = o_7(y_20, t_44, r_44, t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL;
        t = term_n_26;
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_20, term_n_26);
        t = n_7(y_20, e_21, t);
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_20 = ATgetFirst((ATermList) t);
        a_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_26;
    c_21 = t;
    t = (ATerm) ATinsert(CheckATermList(a_21), (ATerm) ATinsert(CheckATermList(z_20), t_44));
    d_21 = t;
    t = SSL_table_put(y_20, c_21, d_21);
    t = b_21;
  }
  return(t);
}
ATerm x_21 (ATerm j_21, ATerm t)
{
  t = j_21;
  {
    ATerm o_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_26 = ATgetArgument(t, 0);
            ATerm q_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_26;
      }
    t = term_r_26;
    t = debug_1_0(p_4, t);
    t = (ATerm) ATmakeAppl(sym__2, j_21, term_v_12);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm y_21 (ATerm l_21, ATerm n_21, ATerm q_21, ATerm t)
{
  t = SSL_open_file(l_21, n_21);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_s_26;
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
        ATerm t_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_21(t_21, t);
            ;
            LocalPopChoice(u_26);
          }
        else
          {
            t = t_26;
            t = y_21(u_21, v_21, t_21, t);
          }
      }
    }
  else
    {
      t = x_21(t_21, t);
    }
  return(t);
}
ATerm f_7 (ATerm o_48, ATerm p_48, ATerm t)
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
  ATerm c_22 = NULL,e_22 = NULL,f_22 = NULL;
  t = term_t_12;
  t = new_0_0(t);
  c_22 = t;
  t = term_v_26;
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_22, term_v_26);
  t = m_7(c_22, e_22, t);
  f_22 = t;
  {
    ATerm w_26 = t;
    int z_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_11);
        h_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_22, (ATerm) ATinsert(ATempty, term_a_11));
        t = f_7(f_22, h_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_26);
      }
    else
      {
        t = w_26;
        t = f_22;
      }
  }
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  t = new_file_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, term_v_12);
  t = open_file_0_0(t);
  t = term_t_12;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_22, term_t_12);
  t = e_7(r_4, k_22, l_22, t);
  t = k_22;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  z_22 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm j_9 = NULL,l_9 = NULL;
      t = z_22;
      t = xtc_new_file_0_0(t);
      j_9 = t;
      t = m_0(t);
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, (ATerm) ATinsert(ATinsert(ATempty, j_9), term_b_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(j_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_9);
    }
  else
    {
      ATerm v_9 = NULL,x_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_23;
      t = xtc_new_file_0_0(t);
      v_9 = t;
      t = m_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_9), term_b_27), a_23), term_c_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(v_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_9);
    }
  return(t);
}
ATerm g_7 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_10 = NULL;
        t = g_24;
        t = k_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, h_24, h_10);
        t = g_7(h_24, h_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, h_24);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm f_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_11 = NULL;
              t = g_24;
              t = k_0(t);
              d_11 = t;
              {
                ATerm i_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_11 = NULL;
                    f_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = f_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = f_11;
                          }
                        else
                          {
                            t = f_11;
                            if((h_24 != t))
                              {
                                _fail(t);
                              }
                            t = f_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, h_24, d_11);
                t = g_7(h_24, d_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, h_24);
              }
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = f_27;
              t = g_24;
              t = k_0(t);
              if((h_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, h_24);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  m_24 = t;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = n_7(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_27 = ATgetFirst((ATermList) t);
            l_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_27);
        t = SSL_table_put(p_45, q_45, l_24);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, l_24);
      }
    else
      {
        t = k_27;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = m_24;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL,t_24 = NULL,y_24 = NULL;
  if(((t_24 != NULL) && (t_24 != t)))
    _fail(t);
  else
    t_24 = t;
  t = t_86(t);
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  {
    ATerm t_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_24 = NULL;
        t = term_n_26;
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), term_n_26);
        t = n_7(not_null(s_24), z_24, t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((p_24 != NULL) && (p_24 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          p_24 = ATgetFirst((ATermList) t);
        if(((o_24 != NULL) && (o_24 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          o_24 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_26;
    if(((y_24 != NULL) && (y_24 != t)))
      _fail(t);
    else
      y_24 = t;
    t = SSL_table_put(not_null(s_24), not_null(y_24), not_null(o_24));
    t = not_null(p_24);
    {
      ATerm u_4 (ATerm t)
      {
        ATerm a_25 = NULL;
        a_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_24), a_25);
        t = h_7(not_null(s_24), a_25, t);
        return(t);
      }
      t = map_1_0(u_4, t);
      t = not_null(t_24);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm b_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = b_28;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,g_25 = NULL,h_25 = NULL;
  d_25 = t;
  t = s_86(t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_26);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_25 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_28 = ATgetArgument(t, 0);
            ATerm k_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_26;
        o_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_25, term_n_26);
        t = n_7(c_25, o_25, t);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATempty;
      }
    e_25 = t;
    t = term_n_26;
    g_25 = t;
    t = (ATerm) ATinsert(CheckATermList(e_25), (ATerm) ATempty);
    h_25 = t;
    t = SSL_table_put(c_25, g_25, h_25);
    t = d_25;
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  {
    ATerm p_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_26);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = p_28;
        t = b_26;
      }
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm t_25 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm u_25 = NULL;
    u_25 = t;
    {
      ATerm z_28 = t;
      int d_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_25 = NULL,w_25 = NULL;
          t = term_a_27;
          v_25 = t;
          t = term_n_26;
          w_25 = t;
          t = term_h_29;
          t = n_7(v_25, w_25, t);
          ;
          LocalPopChoice(d_29);
        }
      else
        {
          t = z_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((t_25 != NULL) && (t_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            t_25 = ATgetFirst((ATermList) t);
          {
            ATerm i_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(t_25);
      t = map_1_0(d_5, t);
      t = u_25;
      t = end_scope_1_0(e_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(v_4, t);
  t = restore_always_2_0(x_89, c_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm j_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_29);
    }
  else
    {
      t = j_29;
      t = term_f_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_26 = NULL;
        t = term_c_27;
        t = get_config_0_0(t);
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_26);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = term_u_12;
      }
    t = y_89(t);
    t = copy_to_1_0(i_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(g_5, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm p_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,y_26 = NULL;
      y_26 = t;
      if(match_cons(t, sym_FILE_1))
        {
          x_26 = ATgetArgument(t, 0);
          {
            ATerm t_11 = NULL,f_3 = NULL;
            t = SSLgetAnnotations(y_26);
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, x_26);
            f_3 = t;
            t = SSLsetAnnotations(f_3, t_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_26;
        }
      LocalPopChoice(q_29);
      t = xtc_transform_file_2_0(n_5, o_5, t);
    }
  else
    {
      t = p_29;
      t = xtc_transform_term_2_0(q_5, r_5, t);
    }
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL,j_27 = NULL;
        j_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            g_27 = ATgetArgument(t, 0);
            {
              ATerm g_12 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(j_27);
              g_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_27);
              g_3 = t;
              t = SSLsetAnnotations(g_3, g_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = j_27;
          }
        LocalPopChoice(t_29);
        t = xtc_transform_file_2_0(t_5, u_5, t);
      }
    else
      {
        t = s_29;
        t = xtc_transform_term_2_0(w_5, y_5, t);
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_29), term_x_29), term_w_29), term_v_29);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_29), term_x_29), term_w_29), term_v_29);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_t_12;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_z_29;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_t_12;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(l_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  n_27 = t;
  t = term_t_12;
  t = whoami_0_0(t);
  o_27 = t;
  t = term_x_11;
  q_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_30), o_27), term_a_30);
  r_27 = t;
  t = SSL_printnl(q_27, r_27);
  t = term_z_11;
  p_27 = t;
  t = SSL_exit(p_27);
  t = n_27;
  return(t);
}
ATerm q_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm s_27 = NULL;
  t = term_c_30;
  s_27 = t;
  t = SSL_table_put(s_27, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_c_30, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_27 = NULL,d_28 = NULL,e_28 = NULL;
      t = term_t_12;
      t = d_0(t);
      z_27 = t;
      t = term_d_30;
      d_28 = t;
      t = term_e_30;
      e_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_30, term_e_30, z_27);
      t = o_7(d_28, e_28, z_27, t);
      _fail(t);
    }
  else
    {
      ATerm j_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_27 = ATgetFirst((ATermList) t);
          y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_27;
      t = a_0(t);
      t = term_t_12;
      t = c_0(t);
      j_28 = t;
      t = (ATerm) ATinsert(CheckATermList(y_27), j_28);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm l_28 = NULL;
  l_28 = t;
  if(match_string(t, "-k"))
    {
      t = l_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_28;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  m_28 = t;
  t = SSL_string_to_int(m_28);
  n_28 = t;
  t = term_f_30;
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, n_28);
  t = q_7(o_28, n_28, t);
  t = m_28;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
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
ATerm h_6 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  t = term_u_10;
  r_28 = t;
  t = term_h_30;
  s_28 = t;
  t = term_i_30;
  t = q_7(r_28, s_28, t);
  t = term_j_30;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  t = SSL_string_to_int(t_28);
  u_28 = t;
  t = term_u_10;
  v_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, u_28);
  t = q_7(v_28, u_28, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_28);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm o_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  t = term_m_30;
  w_28 = t;
  t = term_t_12;
  x_28 = t;
  t = term_n_30;
  t = q_7(w_28, x_28, t);
  t = term_o_30;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, h_6, j_6, t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      {
        ATerm v_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_6, m_6, n_6, t);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = v_30;
            t = Option_3_0(o_6, p_6, r_6, t);
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  if(match_string(t, "-o"))
    {
      t = a_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_29;
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  b_29 = t;
  t = term_b_27;
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, b_29);
  t = q_7(c_29, b_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_29);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_y_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_6, k_7, l_7, t);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm e_29 = NULL;
  e_29 = t;
  if(match_string(t, "-i"))
    {
      t = e_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_29;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  f_29 = t;
  t = term_c_27;
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_27, f_29);
  t = q_7(g_29, f_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_29);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_z_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_7, s_7, t_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm w_30 (ATerm t)
  {
    ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
    u_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_30 = ATgetFirst((ATermList) t);
        t_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm x_12 = NULL,a_13 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(u_30);
          x_12 = t;
          t = t_30;
          t = w_30(t);
          a_13 = t;
          t = (ATerm) ATinsert(CheckATermList(a_13), s_30);
          j_3 = t;
          t = SSLsetAnnotations(j_3, x_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_30;
        t = t_76(t);
      }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,r_29 = NULL;
  k_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_29;
    }
  else
    {
      ATerm u_7 (ATerm t)
      {
        t = not_null(r_29);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((l_29 != NULL) && (l_29 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            l_29 = ATgetFirst((ATermList) t);
          if(((r_29 != NULL) && (r_29 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(l_29);
      t = at_end_1_0(u_7, t);
    }
  return(t);
}
ATerm l_31 (ATerm b_31, ATerm t)
{
  ATerm c_31 = NULL;
  t = SSL_explode_term(b_31);
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  if(((i_31 != NULL) && (i_31 != t)))
    _fail(t);
  else
    i_31 = t;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
      {
        ATerm d_31 = t;
        int e_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_7 (ATerm t)
            {
              t = not_null(h_31);
              return(t);
            }
            t = not_null(g_31);
            t = at_end_1_0(v_7, t);
            ;
            LocalPopChoice(e_31);
          }
        else
          {
            t = d_31;
            t = l_31(not_null(i_31), t);
          }
      }
    }
  else
    {
      t = l_31(not_null(i_31), t);
    }
  return(t);
}
ATerm i_7 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  t = q_47;
  {
    ATerm f_31 = t;
    int j_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_31);
      }
    else
      {
        t = f_31;
        t = (ATerm) ATempty;
      }
    o_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, o_31);
    t = conc_0_0(t);
    n_31 = t;
    t = term_c_30;
    p_31 = t;
    t = SSL_table_put(p_31, q_47, n_31);
    t = (ATerm) ATmakeAppl(sym__3, term_c_30, q_47, n_31);
  }
  return(t);
}
ATerm o_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm k_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_31 = ATgetArgument(t, 0);
            ATerm u_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = n_7(k_45, l_45, t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = k_31;
        t = (ATerm) ATempty;
      }
    s_31 = t;
    t = (ATerm) ATinsert(CheckATermList(s_31), j_45);
    t_31 = t;
    t = SSL_table_put(k_45, l_45, t_31);
    t = r_31;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,k_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_32 = NULL,q_32 = NULL,t_32 = NULL;
      t = term_t_12;
      t = j_0(t);
      n_32 = t;
      t = term_d_30;
      q_32 = t;
      t = term_e_30;
      t_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_30, term_e_30, n_32);
      t = o_7(q_32, t_32, n_32, t);
      _fail(t);
    }
  else
    {
      ATerm z_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_32 = ATgetFirst((ATermList) t);
          f_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_32 = ATgetFirst((ATermList) t);
          k_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_32;
      t = h_0(t);
      t = g_32;
      t = i_0(t);
      z_32 = t;
      t = (ATerm) ATinsert(CheckATermList(k_32), z_32);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,f_33 = NULL;
  a_33 = t;
  t = term_f_12;
  b_33 = t;
  t = (ATerm) ATinsert(ATempty, a_33);
  f_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, (ATerm) ATinsert(ATempty, a_33));
  t = i_7(b_33, f_33, t);
  t = a_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_12;
  t = whoami_0_0(t);
  j_33 = t;
  t = term_x_11;
  l_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_31), j_33);
  m_33 = t;
  t = SSL_printnl(l_33, m_33);
  t = term_z_11;
  k_33 = t;
  t = SSL_exit(k_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_31;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_33;
      t = v_82(t);
    }
  else
    {
      ATerm t_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_33 = ATgetFirst((ATermList) t);
          q_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_33;
      t = foldr_2_0(v_82, w_82, t);
      t_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_33, t_33);
      t = w_82(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  if(match_cons(t, sym__2))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(l_13, m_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_34 = NULL,f_13 = NULL,h_13 = NULL;
  t = times_0_0(t);
  h_13 = t;
  t = SSL_explode_term(h_13);
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13;
  t = foldr_2_0(a_8, b_8, t);
  b_34 = t;
  t = SSL_TicksToSeconds(b_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_34;
        if((n_34 != t))
          {
            _fail(t);
          }
        t = m_34;
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
        {
          ATerm d_32 = t;
          int h_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_34, o_34);
              ;
              LocalPopChoice(h_32);
            }
          else
            {
              t = d_32;
              t = SSL_gtr(n_34, o_34);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_34, term_z_11);
        t = geq_0_0(t);
        t = u_34;
        t = a_88(t);
        ;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = u_34;
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,f_35 = NULL,g_35 = NULL;
  t = run_time_0_0(t);
  c_35 = t;
  t = term_t_12;
  t = whoami_0_0(t);
  d_35 = t;
  t = term_x_11;
  f_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_32), c_35), term_b_13), d_35);
  g_35 = t;
  t = SSL_printnl(f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_32), c_35), term_b_13), d_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_30;
  h_35 = t;
  t = SSL_exit(h_35);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  q_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_35 = ATgetArgument(t, 0);
          {
            ATerm k_14 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(q_35);
            k_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_35);
            l_3 = t;
            t = SSLsetAnnotations(l_3, k_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm m_32 = t;
  int o_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_32);
    }
  else
    {
      t = m_32;
      t = fetch_1_0(e_8, t);
    }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_35 = ATgetFirst((ATermList) t);
      u_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_35 = NULL,z_35 = NULL;
        ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_35)), not_null(z_35));
          return(t);
        }
        t = not_null(u_35);
        t = g_0(t);
        if(((y_35 != NULL) && (y_35 != t)))
          _fail(t);
        else
          y_35 = t;
        t = not_null(t_35);
        t = e_0(t);
        if(((z_35 != NULL) && (z_35 != t)))
          _fail(t);
        else
          z_35 = t;
        t = not_null(u_35);
        t = reverse_acc_2_0(e_0, f_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_12;
      t = g_0(t);
    }
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,x_3 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_36);
  x_3 = t;
  t = SSLsetAnnotations(x_3, f_36);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_36), term_r_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_36 = NULL,e_36 = NULL;
  ATerm s_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = s_32;
      t = fetch_1_0(i_8, t);
    }
  t = term_v_32;
  t = echo_0_0(t);
  t = term_d_30;
  b_36 = t;
  t = term_e_30;
  e_36 = t;
  t = term_w_32;
  t = n_7(b_36, e_36, t);
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(k_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm g_37 (ATerm t)
  {
    ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
    d_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_37 = ATgetFirst((ATermList) t);
        f_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL,k_15 = NULL,a_4 = NULL;
          t = SSLgetAnnotations(d_37);
          c_15 = t;
          t = e_37;
          t = n_76(t);
          k_15 = t;
          t = (ATerm) ATinsert(CheckATermList(f_37), k_15);
          a_4 = t;
          t = SSLsetAnnotations(a_4, c_15);
          ;
          LocalPopChoice(y_32);
        }
      else
        {
          t = x_32;
          {
            ATerm t_16 = NULL,a_17 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(d_37);
            t_16 = t;
            t = f_37;
            t = g_37(t);
            a_17 = t;
            t = (ATerm) ATinsert(CheckATermList(a_17), e_37);
            k_5 = t;
            t = SSLsetAnnotations(k_5, t_16);
          }
        }
    }
    return(t);
  }
  t = g_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_33 = ATgetFirst((ATermList) t);
                ATerm g_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_37;
          }
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = (ATerm) ATinsert(ATempty, k_37);
      }
    l_37 = t;
    t = term_f_10;
    m_37 = t;
    t = SSL_printnl(m_37, l_37);
    t = k_37;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm m_7 (ATerm b_42, ATerm c_42, ATerm t)
{
  t = SSL_strcat(b_42, c_42);
  return(t);
}
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  q_37 = t;
  t = i_72(t);
  r_37 = t;
  t = term_x_11;
  s_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_37), r_37);
  t_37 = t;
  t = SSL_printnl(s_37, t_37);
  t = q_37;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm i_38 (ATerm t)
  {
    ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
    f_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_38;
      }
    else
      {
        ATerm o_17 = NULL,s_17 = NULL,t_17 = NULL,p_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_38 = ATgetFirst((ATermList) t);
            h_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_38);
        o_17 = t;
        t = g_38;
        t = d_76(t);
        s_17 = t;
        t = h_38;
        t = i_38(t);
        t_17 = t;
        t = (ATerm) ATinsert(CheckATermList(t_17), s_17);
        p_5 = t;
        t = SSLsetAnnotations(p_5, o_17);
      }
    return(t);
  }
  t = i_38(t);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_33);
    }
  else
    {
      t = h_33;
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_38 = NULL;
      q_38 = t;
      t = SSL_is_string(q_38);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(l_8, t);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
              w_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_38 = ATgetArgument(t, 0);
                  t = x_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_38 = ATgetArgument(t, 0);
                      t = x_38;
                      {
                        ATerm w_33 = t;
                        int x_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_33);
                          }
                        else
                          {
                            t = w_33;
                            t = debug_1_0(n_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_39 = NULL,d_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_38 = ATgetArgument(t, 0);
                          y_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_38;
                      t = eval_config_0_0(t);
                      c_39 = t;
                      t = y_38;
                      t = eval_config_0_0(t);
                      d_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_39, d_39);
                      t = m_7(c_39, d_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_7 (ATerm b_47, ATerm c_47, ATerm t)
{
  t = SSL_table_get(b_47, c_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL;
  h_39 = t;
  t = term_c_30;
  i_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_30, h_39);
  t = n_7(i_39, h_39, t);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_39 = NULL,k_39 = NULL;
        t = eval_config_0_0(t);
        j_39 = t;
        t = term_c_30;
        k_39 = t;
        t = SSL_table_put(k_39, h_39, j_39);
        t = j_39;
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
      }
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  t = term_a_34;
  n_39 = t;
  t = term_t_12;
  o_39 = t;
  t = term_c_34;
  t = q_7(n_39, o_39, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_d_34;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = term_a_34;
  r_39 = t;
  t = term_t_12;
  s_39 = t;
  t = term_c_34;
  t = q_7(r_39, s_39, t);
  t = term_e_34;
  p_39 = t;
  t = term_t_12;
  q_39 = t;
  t = term_f_34;
  t = q_7(p_39, q_39, t);
  t = term_g_34;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, p_8, q_8, t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = Option_3_0(r_8, s_8, t_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,s_5 = NULL;
  y_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  t_39 = t;
  t = u_39;
  t = v_63(t);
  w_39 = t;
  t = v_39;
  t = w_63(t);
  x_39 = t;
  t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
  s_5 = t;
  t = SSLsetAnnotations(s_5, t_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,v_5 = NULL;
  if(((d_40 != NULL) && (d_40 != t)))
    _fail(t);
  else
    d_40 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_34;
        t = d_94(t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
      }
    t = not_null(d_40);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((f_40 != NULL) && (f_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          f_40 = ATgetFirst((ATermList) t);
        if(((g_40 != NULL) && (g_40 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          g_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(d_40));
    if(((e_40 != NULL) && (e_40 != t)))
      _fail(t);
    else
      e_40 = t;
    t = term_x_31;
    if(((j_40 != NULL) && (j_40 != t)))
      _fail(t);
    else
      j_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_31, not_null(f_40));
    t = q_7(not_null(j_40), not_null(f_40), t);
    t = not_null(g_40);
    {
      ATerm u_40 (ATerm t)
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_34 = t;
            int y_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_40 = NULL;
                m_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_40;
                ;
                LocalPopChoice(y_34);
              }
            else
              {
                t = v_34;
                t = d_94(t);
                t = Cons_2_0(_id, u_40, t);
              }
            ;
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            {
              ATerm p_40 = NULL,q_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_40 = ATgetFirst((ATermList) t);
                  q_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_40), (ATerm) ATmakeAppl(sym_Undefined_1, p_40));
            }
          }
        return(t);
      }
      t = u_40(t);
      if(((i_40 != NULL) && (i_40 != t)))
        _fail(t);
      else
        i_40 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(i_40)), (ATerm) ATmakeAppl(sym_Program_1, not_null(f_40)));
      if(((v_5 != NULL) && (v_5 != t)))
        _fail(t);
      else
        v_5 = t;
      t = SSLsetAnnotations(not_null(v_5), not_null(e_40));
    }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  if(match_string(t, "--help"))
    {
      t = g_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_41;
        }
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  t = term_p_32;
  h_41 = t;
  t = term_t_12;
  i_41 = t;
  t = term_a_35;
  t = q_7(h_41, i_41, t);
  t = term_b_35;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm g_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = term_d_30;
  if(((d_41 != NULL) && (d_41 != t)))
    _fail(t);
  else
    d_41 = t;
  t = term_e_30;
  if(((e_41 != NULL) && (e_41 != t)))
    _fail(t);
  else
    e_41 = t;
  t = (ATerm) ATempty;
  if(((f_41 != NULL) && (f_41 != t)))
    _fail(t);
  else
    f_41 = t;
  t = SSL_table_put(not_null(d_41), not_null(e_41), not_null(f_41));
  t = not_null(b_41);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm i_35 = t;
      int j_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
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
                t = Option_3_0(x_8, e_9, f_9, t);
                ;
                LocalPopChoice(l_35);
              }
            else
              {
                t = k_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_8, t);
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_41 = NULL;
          p_41 = t;
          {
            ATerm o_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_19 = NULL;
                t = p_41;
                {
                  ATerm s_35 = t;
                  int v_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_35);
                    }
                  else
                    {
                      t = s_35;
                      t = fetch_1_0(g_9, t);
                    }
                  t = p_41;
                  t = default_system_usage_0_0(t);
                  t = term_h_30;
                  c_19 = t;
                  t = SSL_exit(c_19);
                }
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = o_35;
                {
                  ATerm g_19 = NULL;
                  t = term_a_34;
                  t = get_config_0_0(t);
                  t = p_41;
                  t = default_system_about_0_0(t);
                  t = term_h_30;
                  g_19 = t;
                  t = SSL_exit(g_19);
                }
              }
          }
          ;
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          {
            ATerm w_35 = t;
            int x_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
                ATerm i_9 (ATerm t)
                {
                  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,x_5 = NULL;
                  v_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_41);
                  t_41 = t;
                  t = u_41;
                  if(((z_40 != NULL) && (z_40 != t)))
                    _fail(t);
                  else
                    z_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_41);
                  x_5 = t;
                  t = SSLsetAnnotations(x_5, t_41);
                  return(t);
                }
                t = fetch_1_0(i_9, t);
                t = term_x_11;
                if(((r_41 != NULL) && (r_41 != t)))
                  _fail(t);
                else
                  r_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_a_36);
                if(((s_41 != NULL) && (s_41 != t)))
                  _fail(t);
                else
                  s_41 = t;
                t = SSL_printnl(not_null(r_41), not_null(s_41));
                t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_40)), term_a_36));
                t = default_system_usage_0_0(t);
                t = term_z_11;
                if(((q_41 != NULL) && (q_41 != t)))
                  _fail(t);
                else
                  q_41 = t;
                t = SSL_exit(not_null(q_41));
                ;
                LocalPopChoice(x_35);
              }
            else
              {
                t = w_35;
              }
          }
        }
      if(((a_41 != NULL) && (a_41 != t)))
        _fail(t);
      else
        a_41 = t;
      t = term_d_30;
      if(((c_41 != NULL) && (c_41 != t)))
        _fail(t);
      else
        c_41 = t;
      t = SSL_table_destroy(not_null(c_41));
      t = not_null(a_41);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  t = parse_options_1_0(h_92, t);
  a_42 = t;
  t = term_c_36;
  f_42 = t;
  t = SSL_table_create(f_42);
  t = term_c_36;
  d_42 = t;
  t = term_d_36;
  e_42 = t;
  t = SSL_table_put(d_42, e_42, a_42);
  t = a_42;
  t = j_92(t);
  {
    ATerm i_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_92, t);
        ;
        LocalPopChoice(k_36);
      }
    else
      {
        t = i_36;
        {
          ATerm l_36 = t;
          int m_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(m_36);
            }
          else
            {
              t = l_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
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
            t = input_option_0_0(t);
            ;
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm r_36 = t;
              int s_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(o_9, p_9, q_9, t);
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
                              t = verbose_option_0_0(t);
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
                                    t = keep_option_0_0(t);
                                    ;
                                    LocalPopChoice(y_36);
                                  }
                                else
                                  {
                                    t = x_36;
                                    t = Option_3_0(r_9, t_9, u_9, t);
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
ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  t = term_z_36;
  h_42 = t;
  t = term_t_12;
  i_42 = t;
  t = term_a_37;
  t = q_7(h_42, i_42, t);
  t = term_b_37;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_c_37;
  return(t);
}
ATerm r_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
  j_42 = t;
  t = term_b_10;
  k_42 = t;
  t = term_h_37;
  l_42 = t;
  t = term_i_37;
  t = q_7(k_42, l_42, t);
  t = j_42;
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
