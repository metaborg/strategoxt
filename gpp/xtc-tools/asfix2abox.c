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
ATerm term_q_37;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_b_31;
ATerm term_y_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
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
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_u_29;
ATerm term_n_28;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_u_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_f_26;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_l_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_x_23;
ATerm term_c_22;
ATerm term_s_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
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
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_q_15;
ATerm term_n_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_o_12;
ATerm term_i_12;
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
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_z_11, term_s_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_v_10, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_g_14, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_l_14, term_m_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_t_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_e_15, term_f_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_q_15, term_a_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_o_16, term_p_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_b_17, term_d_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_x_17, term_y_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_d_18);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_18, term_i_18, term_l_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_18, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_18, term_t_18, term_v_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_e_19, term_g_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_19, term_w_19, term_x_19);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_e_20, term_f_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_p_20, term_q_20);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_20, term_v_20, term_w_20);
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
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_h_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_21, term_p_21, term_q_21);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_n_25);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_r_24);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_u_26);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym__2, term_s_30, term_y_12);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_j_30, term_k_30);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym__2, term_x_34, term_y_12);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym__2, term_a_35, term_y_12);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_y_12);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym__2, term_i_37, term_y_12);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_b_10, term_n_37);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
ATerm q_6 (ATerm j_12, ATerm k_12, ATerm);
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
ATerm f_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm s_6 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm t_6 (ATerm j_15, ATerm k_15, ATerm);
ATerm u_6 (ATerm b_60 (ATerm), ATerm g_160, ATerm r_15, ATerm);
ATerm q_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm);
ATerm v_6 (ATerm f_12, ATerm g_12, ATerm);
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
ATerm y_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm z_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm a_2 (ATerm);
ATerm a_7 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm b_7 (ATerm e_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm q_12 (ATerm a_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_7 (ATerm p_15, ATerm);
ATerm d_7 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_15 (ATerm h_13, ATerm);
ATerm u_15 (ATerm v_13, ATerm w_13, ATerm x_13, ATerm);
ATerm v_15 (ATerm n_14, ATerm o_14, ATerm v_14, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm g_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm q_3 (ATerm);
ATerm s_3 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm t_20 (ATerm q_19, ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm d_4 (ATerm);
ATerm h_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm i_78 (ATerm), ATerm);
ATerm e_7 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm r_22 (ATerm z_21, ATerm);
ATerm s_22 (ATerm d_22, ATerm e_22, ATerm f_22, ATerm);
ATerm p_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_7 (ATerm f_36, ATerm g_36, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm g_7 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm h_7 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm u_77 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm xtc_io_1_0 (ATerm v_77 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm x_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm p_7 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_31 (ATerm n_31, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_7 (ATerm h_35, ATerm g_35, ATerm);
ATerm o_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_7 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_75 (ATerm), ATerm);
ATerm c_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_8 (ATerm);
ATerm need_help_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm g_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm m_7 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm);
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm n_7 (ATerm s_34, ATerm t_34, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm a_82 (ATerm), ATerm);
ATerm a_9 (ATerm);
ATerm d_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm parse_options_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm);
ATerm k_9 (ATerm);
ATerm n_9 (ATerm);
ATerm p_9 (ATerm);
ATerm q_9 (ATerm);
ATerm s_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm w_9 = t;
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
      t = w_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm q_6 (ATerm j_12, ATerm k_12, ATerm t)
{
  t = SSL_rename(j_12, k_12);
  return(t);
}
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm t)
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
        ATerm e_0 = NULL;
        t = d_1;
        t = s_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_f_10;
        e_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_1, term_f_10);
        t = g_7(e_1, e_0, t);
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
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 = NULL;
              t = d_1;
              t = s_0(t);
              j_1 = t;
              {
                ATerm j_10 = t;
                if((PushChoice() == 0))
                  {
                    ATerm o_1 = NULL;
                    o_1 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = o_1;
                      }
                    else
                      {
                        t = o_1;
                        if((e_1 != t))
                          {
                            _fail(t);
                          }
                        t = o_1;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_10;
                  }
                t = (ATerm) ATmakeAppl(sym__2, e_1, j_1);
                t = q_6(e_1, j_1, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_1);
              }
              ;
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = d_1;
              t = s_0(t);
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
ATerm b_0 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_k_10;
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
  t = term_l_10;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL;
  k_1 = t;
  {
    ATerm a_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_1 = NULL,n_1 = NULL,f_0 = NULL;
            n_1 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm o_10 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_1);
            m_1 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            f_0 = t;
            t = SSLsetAnnotations(f_0, m_1);
            LocalPopChoice(n_10);
            t = xtc_transform_file_2_0(b_0, c_0, t);
          }
        else
          {
            t = m_10;
            t = xtc_transform_term_2_0(o_0, q_0, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(a_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        if(((l_1 != NULL) && (l_1 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          l_1 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = l_1;
    t = if_verbose2_1_0(u_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm p_1 = NULL;
  p_1 = t;
  {
    ATerm r_10 = t;
    int t_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_1, term_v_10);
        t = geq_0_0(t);
        t = p_1;
        t = y_75(t);
        ;
        LocalPopChoice(t_10);
      }
    else
      {
        t = r_10;
        t = p_1;
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
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,t_0 = NULL;
  w_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_10), term_y_10), w_1);
  g_2 = t;
  t = SSL_concat_strings(g_2);
  e_2 = t;
  t = (ATerm) ATinsert(ATempty, term_a_11);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_2, (ATerm) ATinsert(ATempty, term_a_11));
  t = f_7(e_2, d_2, t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, w_1);
  k_2 = t;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      ATerm h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_2);
  h_2 = t;
  t = SSL_modification_time(v_1);
  i_2 = t;
  t = SSL_modification_time(w_1);
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_2, j_2);
  t_0 = t;
  t = SSLsetAnnotations(t_0, h_2);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, v_1, w_1);
  c_2 = t;
  t = SSL_explode_term(c_2);
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
          {
            x_1 = ATgetFirst((ATermList) j_11);
            {
              ATerm l_11 = (ATerm) ATgetNext((ATermList) j_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_1;
  t = if_verbose2_1_0(x_0, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm o_64 (ATerm), ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_64(t);
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        {
          ATerm l_3 = NULL,m_3 = NULL,p_3 = NULL,b_2 = NULL,m_2 = NULL,v_0 = NULL;
          l_3 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_3 = ATgetFirst((ATermList) t);
              p_3 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_3);
          b_2 = t;
          t = p_3;
          t = r_3(t);
          m_2 = t;
          t = (ATerm) ATinsert(CheckATermList(m_2), m_3);
          v_0 = t;
          t = SSLsetAnnotations(v_0, b_2);
        }
      }
    return(t);
  }
  t = r_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
      s_2 = t;
      t = term_s_11;
      t_2 = t;
      t = SSL_explode_string(t_2);
      r_2 = t;
      t = SSL_explode_string(s_2);
      {
        ATerm a_1 (ATerm t)
        {
          if((r_2 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(a_1, t);
        t = s_2;
      }
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
            w_2 = t;
            t = term_w_11;
            x_2 = t;
            t = SSL_explode_string(x_2);
            v_2 = t;
            t = SSL_explode_string(w_2);
            {
              ATerm c_1 (ATerm t)
              {
                if((v_2 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(c_1, t);
              t = w_2;
            }
            ;
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            {
              ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL;
              a_4 = t;
              t = term_x_11;
              c_4 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_y_11);
              e_4 = t;
              t = SSL_printnl(c_4, e_4);
              t = term_z_11;
              b_4 = t;
              t = SSL_exit(b_4);
              t = (ATerm) ATinsert(ATinsert(ATempty, a_4), term_y_11);
            }
          }
        {
          ATerm b_12 = t;
          int c_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_12);
    }
  else
    {
      t = e_12;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm f_4 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  f_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_4), term_i_12);
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = debug_1_0(i_1, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(f_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(h_1, t);
  return(t);
}
ATerm s_6 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm p_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = p_12;
      t = SSL_subtr(c_31, d_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm g_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL;
  t = term_u_10;
  {
    ATerm u_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = u_12;
        t = term_z_11;
      }
    i_4 = t;
    t = term_z_11;
    k_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_4, term_z_11);
    t = s_6(i_4, k_4, t);
    j_4 = t;
    t = SSL_int_to_string(j_4);
    g_4 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, g_4), term_u_10);
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,n_4 = NULL;
  t = term_y_12;
  t = pass_verbose_0_0(t);
  l_4 = t;
  t = term_y_12;
  t = create_pp_table_args_0_0(t);
  m_4 = t;
  t = term_y_12;
  t = pass_conservative_0_0(t);
  n_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_4), m_4), l_4);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm r_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_13;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm u_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          r_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_a_11);
      u_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_4, (ATerm) ATinsert(ATempty, term_a_11));
      t = f_7(r_4, u_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_6 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm w_4 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  w_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_4);
  return(t);
}
ATerm u_6 (ATerm b_60 (ATerm), ATerm g_160, ATerm r_15, ATerm t)
{
  ATerm x_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_160, term_b_13);
  t = open_stream_0_0(t);
  x_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_4, r_15);
  t = b_60(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_13 = ATgetArgument(t, 0);
      if(match_cons(c_13, sym_Stream_1))
        {
          a_5 = ATgetArgument(c_13, 0);
        }
      else
        _fail(t);
      b_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(a_5, b_5, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL;
  y_4 = t;
  t = xtc_new_file_0_0(t);
  z_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_4, y_4);
  t = u_6(q_1, z_4, y_4, t);
  t = SSL_close_file(z_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, z_4);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(r_78, s_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm v_6 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  c_6 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      e_6 = ATgetArgument(t, 0);
      {
        ATerm d_3 = NULL,n_3 = NULL;
        t = SSL_int_to_string(e_6);
        d_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_13), d_3), term_e_13);
        n_3 = t;
        t = SSL_concat_strings(n_3);
      }
    }
  else
    {
      ATerm s_4 = NULL,v_4 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          e_6 = ATgetArgument(t, 0);
          f_6 = ATgetArgument(t, 1);
          g_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(f_6);
      s_4 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_6), term_j_13), s_4), term_i_13), e_6);
      v_4 = t;
      t = SSL_concat_strings(v_4);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm o_6 = NULL;
  ATerm r_1 (ATerm t)
  {
    t = g_64(t);
    if(((o_6 != NULL) && (o_6 != t)))
      _fail(t);
    else
      o_6 = t;
    return(t);
  }
  t = fetch_1_0(r_1, t);
  t = not_null(o_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm w_6 = NULL;
  w_6 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm o_13 = ATgetArgument(t, 0);
              if((w_6 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm q_13 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_21), term_k_21), term_e_21), term_a_21), term_r_20), term_n_20), term_g_20), term_y_19), term_r_19), term_l_19), term_c_19), term_x_18), term_r_18), term_m_18), term_e_18), term_z_17), term_v_17), term_r_17), term_e_17), term_v_16), term_k_16), term_h_15), term_b_15), term_u_14), term_p_14), term_i_14), term_d_14), term_a_14);
        t = fetch_elem_1_0(s_1, t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, w_6);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm v_7 = NULL,k_8 = NULL;
  v_7 = t;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_21 = ATgetArgument(t, 0);
            k_8 = ATgetArgument(t, 1);
            {
              ATerm x_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_21);
        {
          ATerm y_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_5 = NULL,m_5 = NULL,o_5 = NULL;
              t = k_8;
              {
                ATerm b_22 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_22;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                h_5 = t;
                t = term_x_11;
                m_5 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, h_5), term_c_22);
                o_5 = t;
                t = SSL_printnl(m_5, o_5);
                t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, h_5), term_c_22));
              }
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = y_21;
              t = v_7;
            }
        }
      }
    else
      {
        t = u_21;
        t = v_7;
      }
    t = v_7;
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
  ATerm t_8 = NULL,u_8 = NULL;
  u_8 = t;
  t = fork_0_0(t);
  t_8 = t;
  {
    ATerm g_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = u_8;
        t = q_58(t);
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = g_22;
        t = SSL_waitpid(t_8);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm n_22 = ATgetArgument(t, 0);
            if(((ATgetType(n_22) != AT_INT) || (ATgetInt((ATermInt) n_22) != 0)))
              _fail(t);
            {
              ATerm p_22 = ATgetArgument(t, 1);
            }
            {
              ATerm t_22 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_8;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  ATerm u_1 (ATerm t)
  {
    ATerm y_8 = NULL,z_8 = NULL;
    y_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), y_8);
    t = n_7(not_null(w_8), y_8, t);
    z_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_8, z_8);
    return(t);
  }
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = SSL_table_keys(w_8);
  t = map_1_0(u_1, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm b_76 (ATerm), ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  {
    ATerm w_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_9, term_v_20);
        t = geq_0_0(t);
        t = c_9;
        t = b_76(t);
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = w_22;
        t = c_9;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm j_9 = NULL;
  j_9 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_9, term_t_17);
        t = geq_0_0(t);
        t = j_9;
        t = a_76(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        t = j_9;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  r_9 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_9 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        t_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_9, term_l_14);
        t = geq_0_0(t);
        t = r_9;
        t = c_76(t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = r_9;
      }
  }
  return(t);
}
ATerm y_6 (ATerm b_68 (ATerm), ATerm c_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = c_68(t);
  {
    ATerm y_1 (ATerm t)
    {
      ATerm y_9 = NULL;
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, y_9);
      t = b_68(t);
      return(t);
    }
    t = fetch_1_0(y_1, t);
    t = l_22;
  }
  return(t);
}
ATerm z_6 (ATerm y_67 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL,s_10 = NULL;
    p_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_10 = ATgetFirst((ATermList) t);
            s_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_10;
              {
                ATerm z_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = y_6(y_67, z_1, q_10, s_10, t);
                t = w_10(t);
              }
              ;
              LocalPopChoice(h_23);
            }
          else
            {
              t = e_23;
              {
                ATerm h_6 = NULL,l_6 = NULL,z_0 = NULL;
                t = SSLgetAnnotations(p_10);
                h_6 = t;
                t = s_10;
                t = w_10(t);
                l_6 = t;
                t = (ATerm) ATinsert(CheckATermList(l_6), q_10);
                z_0 = t;
                t = SSLsetAnnotations(z_0, h_6);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = w_10(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      k_11 = ATgetArgument(t, 0);
      if((k_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
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
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = n_7(y_33, z_33, t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
        t = (ATerm) ATempty;
      }
    d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_11, a_34);
    t = z_6(a_2, d_11, a_34, t);
    c_11 = t;
    t = SSL_table_put(y_33, z_33, c_11);
    t = b_11;
  }
  return(t);
}
ATerm b_7 (ATerm e_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    ATerm m_11 = NULL,p_11 = NULL;
    if(match_cons(t, sym__2))
      {
        m_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, m_11, p_11);
    t = e_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(f_2, t);
  return(t);
}
ATerm q_12 (ATerm a_12, ATerm t)
{
  t = SSL_fclose(a_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_12 = NULL,n_12 = NULL;
  n_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_12 = ATgetArgument(t, 0);
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_12);
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = q_12(n_12, t);
          }
      }
    }
  else
    {
      t = q_12(n_12, t);
    }
  return(t);
}
ATerm c_7 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm d_7 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm s_12 = NULL;
  t = SSL_fopen(n_36, o_36);
  s_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_12 = NULL;
  t = SSL_stdin_stream();
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_12);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_12 = NULL;
  t = SSL_stdout_stream();
  w_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_12);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_12 = NULL;
  t = SSL_stderr_stream();
  z_12 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_12);
  return(t);
}
ATerm t_15 (ATerm h_13, ATerm t)
{
  ATerm m_13 = NULL;
  t = SSL_explode_term(h_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            m_13 = ATgetFirst((ATermList) p_23);
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
ATerm u_15 (ATerm v_13, ATerm w_13, ATerm x_13, ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL,e_14 = NULL,k_14 = NULL,b_1 = NULL;
  t = SSLgetAnnotations(x_13);
  e_14 = t;
  t = v_13;
  if(match_cons(t, sym_Path_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_14, w_13);
  b_1 = t;
  t = SSLsetAnnotations(b_1, e_14);
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(y_13, z_13, t);
  return(t);
}
ATerm v_15 (ATerm n_14, ATerm o_14, ATerm v_14, ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,d_15 = NULL,g_15 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(v_14);
  d_15 = t;
  t = SSL_is_string(n_14);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_15, o_14);
  g_1 = t;
  t = SSLsetAnnotations(g_1, d_15);
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(w_14, x_14, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm i_15 = NULL,l_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      ATerm s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  i_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_15(i_15, t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm v_23 = t;
              int w_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_15(l_15, o_15, i_15, t);
                  ;
                  LocalPopChoice(w_23);
                }
              else
                {
                  t = v_23;
                  t = v_15(l_15, o_15, i_15, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_15(i_15, t);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_x_23;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL;
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_15 = NULL;
      z_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_15, term_c_24);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      t = debug_1_0(l_2, t);
      _fail(t);
    }
  x_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(y_15, t);
  w_15 = t;
  t = x_15;
  t = fclose_0_0(t);
  t = w_15;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_e_24;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_16 = NULL,c_16 = NULL;
      b_16 = t;
      t = (ATerm) ATinsert(ATempty, term_h_24);
      c_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_16, (ATerm) ATinsert(ATempty, term_h_24));
      t = f_7(b_16, c_16, t);
      LocalPopChoice(g_24);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_24 = t;
            if((PushChoice() == 0))
              {
                ATerm d_16 = NULL,e_16 = NULL;
                d_16 = t;
                t = (ATerm) ATinsert(ATempty, term_a_11);
                e_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_16, (ATerm) ATinsert(ATempty, term_a_11));
                t = f_7(d_16, e_16, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_24;
              }
            t = debug_1_0(n_2, t);
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = debug_1_0(o_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = debug_1_0(q_2, t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_l_24;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  t = term_x_11;
  y_16 = t;
  t = (ATerm) ATinsert(ATempty, term_n_24);
  z_16 = t;
  t = SSL_printnl(y_16, z_16);
  t = x_16;
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm a_17 = NULL,g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__3))
    {
      a_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      h_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(a_17, g_17, h_17, t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  t = term_x_11;
  j_17 = t;
  t = (ATerm) ATinsert(ATempty, term_o_24);
  k_17 = t;
  t = SSL_printnl(j_17, k_17);
  t = i_17;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL;
  l_17 = t;
  t = term_x_11;
  n_17 = t;
  t = (ATerm) ATinsert(ATempty, term_n_24);
  o_17 = t;
  t = SSL_printnl(n_17, o_17);
  t = l_17;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,m_16 = NULL,n_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  f_16 = t;
  t = if_verbose5_1_0(p_2, t);
  {
    ATerm p_24 = t;
    if((PushChoice() == 0))
      {
        ATerm t_16 = NULL,u_16 = NULL;
        t = term_q_24;
        t_16 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, f_16);
        u_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATmakeAppl(sym_Imported_1, f_16));
        t = n_7(t_16, u_16, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_24;
      }
    h_16 = t;
    t = term_q_24;
    q_16 = t;
    t = term_r_24;
    r_16 = t;
    t = (ATerm) ATinsert(ATempty, f_16);
    s_16 = t;
    t = SSL_table_put(q_16, r_16, s_16);
    t = h_16;
    t = if_verbose4_1_0(u_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(a_3, t);
    g_16 = t;
    t = term_q_24;
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_24, g_16);
    t = b_7(b_3, n_16, g_16, t);
    t = if_verbose6_1_0(c_3, t);
    t = term_q_24;
    i_16 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, f_16);
    j_16 = t;
    t = (ATerm) ATempty;
    m_16 = t;
    t = SSL_table_put(i_16, j_16, m_16);
    t = (ATerm) ATmakeAppl(sym__3, term_q_24, (ATerm)ATmakeAppl(sym_Imported_1, f_16), (ATerm) ATempty);
    t = if_verbose4_1_0(g_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_71 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,k_18 = NULL;
  f_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_18;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_18 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_8 = NULL,h_8 = NULL,i_8 = NULL,y_2 = NULL;
            t = SSLgetAnnotations(f_18);
            e_8 = t;
            t = g_18;
            t = q_71(t);
            h_8 = t;
            t = k_18;
            t = filter_1_0(q_71, t);
            i_8 = t;
            t = (ATerm) ATinsert(CheckATermList(i_8), h_8);
            y_2 = t;
            t = SSLsetAnnotations(y_2, e_8);
            ;
            LocalPopChoice(v_24);
          }
        else
          {
            t = s_24;
            t = k_18;
            t = filter_1_0(q_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm p_73 (ATerm), ATerm t)
{
  ATerm u_18 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        t = u_18(t);
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
      }
    return(t);
  }
  t = u_18(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_18 = NULL;
            t = term_d_25;
            w_18 = t;
            t = SSL_getenv(w_18);
            ;
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
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
  t = term_l_25;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  t = term_q_24;
  j_19 = t;
  t = term_n_25;
  k_19 = t;
  t = term_o_25;
  t = n_7(j_19, k_19, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm q_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_25;
      }
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(s_3, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm y_18 = NULL;
  t = if_verbose5_1_0(h_3, t);
  y_18 = t;
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,h_19 = NULL;
        t = term_q_24;
        f_19 = t;
        t = term_r_24;
        h_19 = t;
        t = term_u_25;
        t = n_7(f_19, h_19, t);
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm i_19 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_19 = t;
          t = repeat_1_0(o_3, t);
          t = i_19;
        }
      }
    t = y_18;
    t = if_verbose5_1_0(q_3, t);
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = debug_1_0(u_3, t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm t_20 (ATerm q_19, ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,z_19 = NULL;
  t = term_q_24;
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_19);
  z_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATmakeAppl(sym_Tool_1, q_19));
  t = n_7(u_19, z_19, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_26 = ATgetFirst((ATermList) t);
      if(match_cons(b_26, sym__2))
        {
          ATerm d_26 = ATgetArgument(b_26, 0);
          t_19 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_19;
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = debug_1_0(z_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_q_24;
  t = table_getlist_0_0(t);
  t = debug_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
      t = if_verbose5_1_0(t_3, t);
      t = xtc_load_0_0(t);
      c_20 = t;
      if(match_cons(t, sym__2))
        {
          a_20 = ATgetArgument(t, 0);
          b_20 = ATgetArgument(t, 1);
          {
            ATerm j_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
                t = term_q_24;
                i_20 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_20);
                j_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_q_24, (ATerm) ATmakeAppl(sym_Tool_1, a_20));
                t = n_7(i_20, j_20, t);
                {
                  ATerm w_3 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_20 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(w_3, t);
                  t = not_null(h_20);
                }
                ;
                LocalPopChoice(m_26);
              }
            else
              {
                t = j_26;
                t = t_20(c_20, t);
              }
          }
        }
      else
        {
          t = t_20(c_20, t);
        }
      t = if_verbose5_1_0(x_3, t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = g_26;
      {
        ATerm s_20 = NULL,b_9 = NULL,f_9 = NULL;
        s_20 = t;
        t = term_x_11;
        b_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), s_20), term_n_26);
        f_9 = t;
        t = SSL_printnl(b_9, f_9);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_26), s_20), term_n_26);
        t = if_verbose5_1_0(d_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  y_20 = t;
  t = i_78(t);
  t = xtc_find_0_0(t);
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm z_20 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, x_20, y_20);
      t = v_6(x_20, y_20, t);
      t = term_q_26;
      z_20 = t;
      t = SSL_exit(z_20);
      return(t);
    }
    t = fork_and_wait_1_0(o_4, t);
    t = y_20;
  }
  return(t);
}
ATerm e_7 (ATerm t_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,r_21 = NULL;
  m_21 = t;
  t = t_74(t);
  i_21 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_21, k_32, i_32);
  t = o_7(i_21, k_32, i_32, t);
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_21 = NULL;
        t = term_u_26;
        t_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_21, term_u_26);
        t = n_7(i_21, t_21, t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_21 = ATgetFirst((ATermList) t);
        l_21 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_26;
    n_21 = t;
    t = (ATerm) ATinsert(CheckATermList(l_21), (ATerm) ATinsert(CheckATermList(j_21), k_32));
    r_21 = t;
    t = SSL_table_put(i_21, n_21, r_21);
    t = m_21;
  }
  return(t);
}
ATerm r_22 (ATerm z_21, ATerm t)
{
  t = z_21;
  {
    ATerm v_26 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_26 = ATgetArgument(t, 0);
            ATerm y_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_26;
      }
    t = term_z_26;
    t = debug_1_0(p_4, t);
    t = (ATerm) ATmakeAppl(sym__2, z_21, term_b_13);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_22 (ATerm d_22, ATerm e_22, ATerm f_22, ATerm t)
{
  t = SSL_open_file(d_22, e_22);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_a_27;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_22 = NULL,o_22 = NULL,q_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_22(k_22, t);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = s_22(o_22, q_22, k_22, t);
          }
      }
    }
  else
    {
      t = r_22(k_22, t);
    }
  return(t);
}
ATerm f_7 (ATerm f_36, ATerm g_36, ATerm t)
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
  ATerm u_22 = NULL,v_22 = NULL,x_22 = NULL;
  t = term_y_12;
  t = new_0_0(t);
  u_22 = t;
  t = term_d_27;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_22, term_d_27);
  t = m_7(u_22, v_22, t);
  x_22 = t;
  {
    ATerm e_27 = t;
    int f_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_a_11);
        z_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_22, (ATerm) ATinsert(ATempty, term_a_11));
        t = f_7(x_22, z_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(f_27);
      }
    else
      {
        t = e_27;
        t = x_22;
      }
  }
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  t = new_file_0_0(t);
  f_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_23, term_b_13);
  t = open_file_0_0(t);
  t = term_y_12;
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_23, term_y_12);
  t = e_7(q_4, f_23, g_23, t);
  t = f_23;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL;
  y_23 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_9 = NULL,o_9 = NULL;
      t = y_23;
      t = xtc_new_file_0_0(t);
      l_9 = t;
      t = r_0(t);
      o_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_9, (ATerm) ATinsert(ATinsert(ATempty, l_9), term_h_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(l_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_9);
    }
  else
    {
      ATerm x_9 = NULL,z_9 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          z_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_23;
      t = xtc_new_file_0_0(t);
      x_9 = t;
      t = r_0(t);
      z_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_9), term_h_27), z_23), term_i_27));
      t = conc_0_0(t);
      t = xtc_command_1_0(p_0, t);
      t = SSL_close_file(x_9);
      t = (ATerm) ATmakeAppl(sym_FILE_1, x_9);
    }
  return(t);
}
ATerm g_7 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_24 = NULL,u_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym_FILE_1))
    {
      u_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_27 = t;
    int k_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_10 = NULL;
        t = t_24;
        t = n_0(t);
        i_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = i_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = i_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, u_24, i_10);
        t = g_7(u_24, i_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
        ;
        LocalPopChoice(k_27);
      }
    else
      {
        t = j_27;
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_11 = NULL;
              t = t_24;
              t = n_0(t);
              e_11 = t;
              {
                ATerm n_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm g_11 = NULL;
                    g_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = g_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = g_11;
                          }
                        else
                          {
                            t = g_11;
                            if((u_24 != t))
                              {
                                _fail(t);
                              }
                            t = g_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, u_24, e_11);
                t = g_7(u_24, e_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
              }
              ;
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
              t = t_24;
              t = n_0(t);
              if((u_24 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, u_24);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  f_25 = t;
  {
    ATerm o_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = n_7(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_27 = ATgetFirst((ATermList) t);
            e_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_27);
        t = SSL_table_put(g_33, h_33, e_25);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, e_25);
      }
    else
      {
        t = o_27;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = f_25;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  j_25 = t;
  t = q_74(t);
  i_25 = t;
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_25 = NULL;
        t = term_u_26;
        m_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, term_u_26);
        t = n_7(i_25, m_25, t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_25 = ATgetFirst((ATermList) t);
        g_25 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_26;
    k_25 = t;
    t = SSL_table_put(i_25, k_25, g_25);
    t = h_25;
    {
      ATerm t_4 (ATerm t)
      {
        ATerm p_25 = NULL;
        p_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_25, p_25);
        t = h_7(i_25, p_25, t);
        return(t);
      }
      t = map_1_0(t_4, t);
      t = j_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_75 (ATerm), ATerm m_75 (ATerm), ATerm t)
{
  ATerm v_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_75(t);
      t = m_75(t);
      ;
      LocalPopChoice(w_27);
    }
  else
    {
      t = v_27;
      t = m_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_74 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,z_25 = NULL,a_26 = NULL;
  w_25 = t;
  t = p_74(t);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_25, term_u_26);
  {
    ATerm x_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_26 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_26;
        e_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_25, term_u_26);
        t = n_7(v_25, e_26, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = x_27;
        t = (ATerm) ATempty;
      }
    x_25 = t;
    t = term_u_26;
    z_25 = t;
    t = (ATerm) ATinsert(CheckATermList(x_25), (ATerm) ATempty);
    a_26 = t;
    t = SSL_table_put(v_25, z_25, a_26);
    t = w_25;
  }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm t_26 = NULL;
  t_26 = t;
  {
    ATerm d_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(t_26);
        ;
        LocalPopChoice(h_28);
      }
    else
      {
        t = d_28;
        t = t_26;
      }
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_g_27;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm u_77 (ATerm), ATerm t)
{
  ATerm i_26 = NULL;
  ATerm d_5 (ATerm t)
  {
    ATerm k_26 = NULL;
    k_26 = t;
    {
      ATerm i_28 = t;
      int j_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_26 = NULL,o_26 = NULL;
          t = term_g_27;
          l_26 = t;
          t = term_u_26;
          o_26 = t;
          t = term_n_28;
          t = n_7(l_26, o_26, t);
          ;
          LocalPopChoice(j_28);
        }
      else
        {
          t = i_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_26 != NULL) && (i_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_26 = ATgetFirst((ATermList) t);
          {
            ATerm o_28 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = i_26;
      t = map_1_0(e_5, t);
      t = k_26;
      t = end_scope_1_0(f_5, t);
    }
    return(t);
  }
  t = begin_scope_1_0(c_5, t);
  t = restore_always_2_0(u_77, d_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm p_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_28);
    }
  else
    {
      t = p_28;
      t = term_f_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm v_77 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm w_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_26 = NULL;
        t = term_i_27;
        t = get_config_0_0(t);
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_26);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = w_28;
        t = term_a_13;
      }
    t = v_77(t);
    t = copy_to_1_0(i_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(g_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_27 = NULL,q_27 = NULL;
      q_27 = t;
      if(match_cons(t, sym_FILE_1))
        {
          p_27 = ATgetArgument(t, 0);
          {
            ATerm t_11 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(q_27);
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, p_27);
            e_3 = t;
            t = SSLsetAnnotations(e_3, t_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_27;
        }
      LocalPopChoice(c_29);
      t = xtc_transform_file_2_0(l_5, p_5, t);
    }
  else
    {
      t = b_29;
      t = xtc_transform_term_2_0(r_5, s_5, t);
    }
  {
    ATerm f_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_27 = NULL,z_27 = NULL;
        z_27 = t;
        if(match_cons(t, sym_FILE_1))
          {
            y_27 = ATgetArgument(t, 0);
            {
              ATerm r_12 = NULL,f_3 = NULL;
              t = SSLgetAnnotations(z_27);
              r_12 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_27);
              f_3 = t;
              t = SSLsetAnnotations(f_3, r_12);
            }
          }
        else
          {
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
            t = z_27;
          }
        LocalPopChoice(o_29);
        t = xtc_transform_file_2_0(u_5, v_5, t);
      }
    else
      {
        t = f_29;
        t = xtc_transform_term_2_0(x_5, y_5, t);
      }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), term_d_30), term_z_29), term_w_29);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), term_d_30), term_z_29), term_w_29);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_y_12;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_f_30;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_y_12;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(k_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,k_28 = NULL,l_28 = NULL;
  e_28 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  f_28 = t;
  t = term_x_11;
  k_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_30), f_28), term_g_30);
  l_28 = t;
  t = SSL_printnl(k_28, l_28);
  t = term_z_11;
  g_28 = t;
  t = SSL_exit(g_28);
  t = e_28;
  return(t);
}
ATerm q_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm m_28 = NULL;
  t = term_i_30;
  m_28 = t;
  t = SSL_table_put(m_28, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_i_30, b_35, c_35);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
      t = term_y_12;
      t = h_0(t);
      s_28 = t;
      t = term_j_30;
      t_28 = t;
      t = term_k_30;
      u_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_30, term_k_30, s_28);
      t = o_7(t_28, u_28, s_28, t);
      _fail(t);
    }
  else
    {
      ATerm x_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          r_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = d_0(t);
      t = term_y_12;
      t = g_0(t);
      x_28 = t;
      t = (ATerm) ATinsert(CheckATermList(r_28), x_28);
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  if(match_string(t, "-k"))
    {
      t = z_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_28;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm a_29 = NULL,d_29 = NULL,e_29 = NULL;
  a_29 = t;
  t = SSL_string_to_int(a_29);
  d_29 = t;
  t = term_l_30;
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_30, d_29);
  t = q_7(e_29, d_29, t);
  t = a_29;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, b_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm g_29 = NULL;
  g_29 = t;
  if(match_string(t, "-S"))
    {
      t = g_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_29;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  t = term_u_10;
  h_29 = t;
  t = term_n_30;
  i_29 = t;
  t = term_o_30;
  t = q_7(h_29, i_29, t);
  t = term_p_30;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  t = SSL_string_to_int(j_29);
  k_29 = t;
  t = term_u_10;
  l_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_10, k_29);
  t = q_7(l_29, k_29, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_29);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  t = term_s_30;
  m_29 = t;
  t = term_y_12;
  n_29 = t;
  t = term_t_30;
  t = q_7(m_29, n_29, t);
  t = term_y_30;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, i_6, j_6, t);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, m_6, n_6, t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = Option_3_0(p_6, r_6, x_6, t);
          }
      }
    }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  if(match_string(t, "-o"))
    {
      t = p_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_29;
    }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL;
  q_29 = t;
  t = term_h_27;
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, q_29);
  t = q_7(r_29, q_29, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_29);
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_7, l_7, p_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-i"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  x_29 = t;
  t = term_i_27;
  y_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_27, x_29);
  t = q_7(y_29, x_29, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_29);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_7, s_7, t_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm a_31 (ATerm t)
  {
    ATerm u_30 = NULL,v_30 = NULL,z_30 = NULL;
    z_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_30 = ATgetFirst((ATermList) t);
        v_30 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_13 = NULL,g_13 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(z_30);
          d_13 = t;
          t = v_30;
          t = a_31(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(g_13), u_30);
          i_3 = t;
          t = SSLsetAnnotations(i_3, d_13);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_30;
        t = k_64(t);
      }
    return(t);
  }
  t = a_31(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_30;
    }
  else
    {
      ATerm u_7 (ATerm t)
      {
        t = not_null(c_30);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((b_30 != NULL) && (b_30 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            b_30 = ATgetFirst((ATermList) t);
          if(((c_30 != NULL) && (c_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_30;
      t = at_end_1_0(u_7, t);
    }
  return(t);
}
ATerm w_31 (ATerm n_31, ATerm t)
{
  ATerm o_31 = NULL;
  t = SSL_explode_term(n_31);
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_31;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm q_31 = NULL,s_31 = NULL,t_31 = NULL;
  t_31 = t;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 (ATerm t)
            {
              t = s_31;
              return(t);
            }
            t = q_31;
            t = at_end_1_0(w_7, t);
            ;
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
            t = w_31(t_31, t);
          }
      }
    }
  else
    {
      t = w_31(t_31, t);
    }
  return(t);
}
ATerm i_7 (ATerm h_35, ATerm g_35, ATerm t)
{
  ATerm x_31 = NULL,z_31 = NULL,a_32 = NULL;
  t = h_35;
  {
    ATerm p_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_31);
      }
    else
      {
        t = p_31;
        t = (ATerm) ATempty;
      }
    z_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_35, z_31);
    t = conc_0_0(t);
    x_31 = t;
    t = term_i_30;
    a_32 = t;
    t = SSL_table_put(a_32, h_35, x_31);
    t = (ATerm) ATmakeAppl(sym__3, term_i_30, h_35, x_31);
  }
  return(t);
}
ATerm o_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_31 = ATgetArgument(t, 0);
            ATerm b_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = n_7(b_33, c_33, t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        t = (ATerm) ATempty;
      }
    q_32 = t;
    t = (ATerm) ATinsert(CheckATermList(q_32), a_33);
    r_32 = t;
    t = SSL_table_put(b_33, c_33, r_32);
    t = p_32;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
      t = term_y_12;
      t = m_0(t);
      o_33 = t;
      t = term_j_30;
      p_33 = t;
      t = term_k_30;
      q_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_30, term_k_30, o_33);
      t = o_7(p_33, q_33, o_33, t);
      _fail(t);
    }
  else
    {
      ATerm d_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_33 = ATgetFirst((ATermList) t);
          l_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_33 = ATgetFirst((ATermList) t);
          n_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_33;
      t = k_0(t);
      t = m_33;
      t = l_0(t);
      d_34 = t;
      t = (ATerm) ATinsert(CheckATermList(n_33), d_34);
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
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  t = term_i_12;
  f_34 = t;
  t = (ATerm) ATinsert(ATempty, e_34);
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATinsert(ATempty, e_34));
  t = i_7(f_34, g_34, t);
  t = e_34;
  return(t);
}
ATerm z_7 (ATerm t)
{
  t = term_c_32;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_7, y_7, z_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_12;
  t = whoami_0_0(t);
  n_34 = t;
  t = term_x_11;
  p_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_32), n_34);
  q_34 = t;
  t = SSL_printnl(p_34, q_34);
  t = term_z_11;
  o_34 = t;
  t = SSL_exit(o_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_7 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_34;
      t = m_70(t);
    }
  else
    {
      ATerm i_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_34 = ATgetFirst((ATermList) t);
          w_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_34;
      t = foldr_2_0(m_70, n_70, t);
      i_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_34, i_35);
      t = n_70(t);
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
  t = term_n_30;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(t_13, u_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_35 = NULL,n_13 = NULL,p_13 = NULL;
  t = times_0_0(t);
  p_13 = t;
  t = SSL_explode_term(p_13);
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13;
  t = foldr_2_0(a_8, b_8, t);
  v_35 = t;
  t = SSL_TicksToSeconds(v_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
  u_36 = t;
  if(match_cons(t, sym__2))
    {
      v_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_36;
        if((v_36 != t))
          {
            _fail(t);
          }
        t = u_36;
        ;
        LocalPopChoice(l_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_36, w_36);
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = SSL_gtr(v_36, w_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_36, w_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_75 (ATerm), ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  {
    ATerm o_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        t = term_u_10;
        t = get_config_0_0(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_37, term_z_11);
        t = geq_0_0(t);
        t = k_37;
        t = x_75(t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = o_32;
        t = k_37;
      }
  }
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,b_38 = NULL,f_38 = NULL;
  t = run_time_0_0(t);
  s_37 = t;
  t = term_y_12;
  t = whoami_0_0(t);
  t_37 = t;
  t = term_x_11;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_32), s_37), term_i_13), t_37);
  f_38 = t;
  t = SSL_printnl(b_38, f_38);
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_32), s_37), term_i_13), t_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_30;
  g_38 = t;
  t = SSL_exit(g_38);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  p_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_38 = ATgetArgument(t, 0);
          {
            ATerm s_14 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(p_38);
            s_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_38);
            k_3 = t;
            t = SSLsetAnnotations(k_3, s_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_32);
    }
  else
    {
      t = u_32;
      t = fetch_1_0(d_8, t);
    }
  t = c_80(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_38 = ATgetFirst((ATermList) t);
      v_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_38 = NULL,a_39 = NULL;
        ATerm f_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_38)), not_null(a_39));
          return(t);
        }
        t = v_38;
        t = j_0(t);
        if(((z_38 != NULL) && (z_38 != t)))
          _fail(t);
        else
          z_38 = t;
        t = u_38;
        t = i_0(t);
        if(((a_39 != NULL) && (a_39 != t)))
          _fail(t);
        else
          a_39 = t;
        t = v_38;
        t = reverse_acc_2_0(i_0, f_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_12;
      t = j_0(t);
    }
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,v_3 = NULL;
  l_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_39);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_39);
  v_3 = t;
  t = SSLsetAnnotations(v_3, j_39);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_39), term_x_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_39 = NULL,i_39 = NULL;
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = fetch_1_0(g_8, t);
    }
  t = term_d_33;
  t = echo_0_0(t);
  t = term_j_30;
  c_39 = t;
  t = term_k_30;
  i_39 = t;
  t = term_e_33;
  t = n_7(c_39, i_39, t);
  t = reverse_acc_2_0(_id, j_8, t);
  t = map_1_0(l_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm e_64 (ATerm), ATerm t)
{
  ATerm l_40 (ATerm t)
  {
    ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL;
    i_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_40 = ATgetFirst((ATermList) t);
        k_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_15 = NULL,s_15 = NULL,y_3 = NULL;
          t = SSLgetAnnotations(i_40);
          m_15 = t;
          t = j_40;
          t = e_64(t);
          s_15 = t;
          t = (ATerm) ATinsert(CheckATermList(k_40), s_15);
          y_3 = t;
          t = SSLsetAnnotations(y_3, m_15);
          ;
          LocalPopChoice(i_33);
        }
      else
        {
          t = f_33;
          {
            ATerm c_17 = NULL,f_17 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(i_40);
            c_17 = t;
            t = k_40;
            t = l_40(t);
            f_17 = t;
            t = (ATerm) ATinsert(CheckATermList(f_17), j_40);
            j_5 = t;
            t = SSLsetAnnotations(j_5, c_17);
          }
        }
    }
    return(t);
  }
  t = l_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL;
  p_40 = t;
  {
    ATerm j_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_33 = ATgetFirst((ATermList) t);
                ATerm t_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_40;
          }
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATinsert(ATempty, p_40);
      }
    q_40 = t;
    t = term_f_10;
    r_40 = t;
    t = SSL_printnl(r_40, q_40);
    t = p_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm m_7 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm z_59 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  v_40 = t;
  t = z_59(t);
  w_40 = t;
  t = term_x_11;
  x_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_40), w_40);
  y_40 = t;
  t = SSL_printnl(x_40, y_40);
  t = v_40;
  return(t);
}
ATerm map_1_0 (ATerm u_63 (ATerm), ATerm t)
{
  ATerm n_41 (ATerm t)
  {
    ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
    k_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_41;
      }
    else
      {
        ATerm c_18 = NULL,j_18 = NULL,n_18 = NULL,n_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_41 = ATgetFirst((ATermList) t);
            m_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_41);
        c_18 = t;
        t = l_41;
        t = u_63(t);
        j_18 = t;
        t = m_41;
        t = n_41(t);
        n_18 = t;
        t = (ATerm) ATinsert(CheckATermList(n_18), j_18);
        n_5 = t;
        t = SSLsetAnnotations(n_5, c_18);
      }
    return(t);
  }
  t = n_41(t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  t = term_w_33;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_33 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_41 = NULL;
      v_41 = t;
      t = SSL_is_string(v_41);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = x_33;
      {
        ATerm c_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(m_8, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = c_34;
            {
              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
              b_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_42 = ATgetArgument(t, 0);
                  t = c_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_42 = ATgetArgument(t, 0);
                      t = c_42;
                      {
                        ATerm k_34 = t;
                        int l_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_34);
                          }
                        else
                          {
                            t = k_34;
                            t = debug_1_0(n_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_42 = NULL,i_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_42 = ATgetArgument(t, 0);
                          d_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_42;
                      t = eval_config_0_0(t);
                      h_42 = t;
                      t = d_42;
                      t = eval_config_0_0(t);
                      i_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_42, i_42);
                      t = m_7(h_42, i_42, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm n_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  m_42 = t;
  t = term_i_30;
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, m_42);
  t = n_7(n_42, m_42, t);
  {
    ATerm m_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_42 = NULL,p_42 = NULL;
        t = eval_config_0_0(t);
        o_42 = t;
        t = term_i_30;
        p_42 = t;
        t = SSL_table_put(p_42, m_42, o_42);
        t = o_42;
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = m_34;
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
  ATerm s_42 = NULL,t_42 = NULL;
  t = term_x_34;
  s_42 = t;
  t = term_y_12;
  t_42 = t;
  t = term_y_34;
  t = q_7(s_42, t_42, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_z_34;
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
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
  t = term_x_34;
  w_42 = t;
  t = term_y_12;
  x_42 = t;
  t = term_y_34;
  t = q_7(w_42, x_42, t);
  t = term_a_35;
  u_42 = t;
  t = term_y_12;
  v_42 = t;
  t = term_d_35;
  t = q_7(u_42, v_42, t);
  t = term_e_35;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_8, p_8, q_8, t);
      ;
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      t = Option_3_0(r_8, s_8, v_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL,q_5 = NULL;
  d_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_42 = ATgetFirst((ATermList) t);
      a_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_43);
  y_42 = t;
  t = z_42;
  t = m_51(t);
  b_43 = t;
  t = a_43;
  t = n_51(t);
  c_43 = t;
  t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
  q_5 = t;
  t = SSLsetAnnotations(q_5, y_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_82 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,n_43 = NULL,o_43 = NULL,t_5 = NULL;
  i_43 = t;
  {
    ATerm l_35 = t;
    int m_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_35;
        t = a_82(t);
        ;
        LocalPopChoice(m_35);
      }
    else
      {
        t = l_35;
      }
    t = i_43;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_43 = ATgetFirst((ATermList) t);
        l_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_43);
    j_43 = t;
    t = term_e_32;
    o_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_e_32, k_43);
    t = q_7(o_43, k_43, t);
    t = l_43;
    {
      ATerm y_43 (ATerm t)
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_43 = NULL;
                r_43 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_43;
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                t = a_82(t);
                t = Cons_2_0(_id, y_43, t);
              }
            ;
            LocalPopChoice(p_35);
          }
        else
          {
            t = o_35;
            {
              ATerm u_43 = NULL,v_43 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_43 = ATgetFirst((ATermList) t);
                  v_43 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_43), (ATerm) ATmakeAppl(sym_Undefined_1, u_43));
            }
          }
        return(t);
      }
      t = y_43(t);
      if(((n_43 != NULL) && (n_43 != t)))
        _fail(t);
      else
        n_43 = t;
      t = (ATerm) ATinsert(CheckATermList(n_43), (ATerm) ATmakeAppl(sym_Program_1, k_43));
      if(((t_5 != NULL) && (t_5 != t)))
        _fail(t);
      else
        t_5 = t;
      t = SSLsetAnnotations(t_5, j_43);
    }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm k_44 = NULL;
  k_44 = t;
  if(match_string(t, "--help"))
    {
      t = k_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_44;
        }
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  t = term_w_32;
  l_44 = t;
  t = term_y_12;
  m_44 = t;
  t = term_s_35;
  t = q_7(l_44, m_44, t);
  t = term_t_35;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL;
  f_44 = t;
  t = term_j_30;
  h_44 = t;
  t = term_k_30;
  i_44 = t;
  t = (ATerm) ATempty;
  j_44 = t;
  t = SSL_table_put(h_44, i_44, j_44);
  t = f_44;
  {
    ATerm x_8 (ATerm t)
    {
      ATerm w_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_81(t);
          ;
          LocalPopChoice(x_35);
        }
      else
        {
          t = w_35;
          {
            ATerm y_35 = t;
            int z_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_9, d_9, g_9, t);
                ;
                LocalPopChoice(z_35);
              }
            else
              {
                t = y_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_8, t);
    {
      ATerm a_36 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_44 = NULL;
          t_44 = t;
          {
            ATerm c_36 = t;
            int d_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_19 = NULL;
                t = t_44;
                {
                  ATerm e_36 = t;
                  int h_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_36);
                    }
                  else
                    {
                      t = e_36;
                      t = fetch_1_0(h_9, t);
                    }
                  t = t_44;
                  t = default_system_usage_0_0(t);
                  t = term_n_30;
                  m_19 = t;
                  t = SSL_exit(m_19);
                }
                ;
                LocalPopChoice(d_36);
              }
            else
              {
                t = c_36;
                {
                  ATerm s_19 = NULL;
                  t = term_x_34;
                  t = get_config_0_0(t);
                  t = t_44;
                  t = default_system_about_0_0(t);
                  t = term_n_30;
                  s_19 = t;
                  t = SSL_exit(s_19);
                }
              }
          }
          ;
          LocalPopChoice(b_36);
        }
      else
        {
          t = a_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
                ATerm i_9 (ATerm t)
                {
                  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,w_5 = NULL;
                  z_44 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_44);
                  x_44 = t;
                  t = y_44;
                  if(((d_44 != NULL) && (d_44 != t)))
                    _fail(t);
                  else
                    d_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_44);
                  w_5 = t;
                  t = SSLsetAnnotations(w_5, x_44);
                  return(t);
                }
                t = fetch_1_0(i_9, t);
                t = term_x_11;
                if(((v_44 != NULL) && (v_44 != t)))
                  _fail(t);
                else
                  v_44 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_44)), term_k_36);
                if(((w_44 != NULL) && (w_44 != t)))
                  _fail(t);
                else
                  w_44 = t;
                t = SSL_printnl(v_44, w_44);
                t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_44)), term_k_36));
                t = default_system_usage_0_0(t);
                t = term_z_11;
                if(((u_44 != NULL) && (u_44 != t)))
                  _fail(t);
                else
                  u_44 = t;
                t = SSL_exit(u_44);
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
              }
          }
        }
      if(((e_44 != NULL) && (e_44 != t)))
        _fail(t);
      else
        e_44 = t;
      t = term_j_30;
      if(((g_44 != NULL) && (g_44 != t)))
        _fail(t);
      else
        g_44 = t;
      t = SSL_table_destroy(g_44);
      t = e_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL;
  t = parse_options_1_0(e_80, t);
  e_45 = t;
  t = term_l_36;
  h_45 = t;
  t = SSL_table_create(h_45);
  t = term_l_36;
  f_45 = t;
  t = term_m_36;
  g_45 = t;
  t = SSL_table_put(f_45, g_45, e_45);
  t = e_45;
  t = g_80(t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_80, t);
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
              t = h_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_36);
            }
          else
            {
              t = r_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm t_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = t_36;
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
            {
              ATerm a_37 = t;
              int b_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(b_37);
                }
              else
                {
                  t = a_37;
                  {
                    ATerm c_37 = t;
                    int d_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_9, p_9, q_9, t);
                        ;
                        LocalPopChoice(d_37);
                      }
                    else
                      {
                        t = c_37;
                        {
                          ATerm e_37 = t;
                          int f_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(f_37);
                            }
                          else
                            {
                              t = e_37;
                              {
                                ATerm g_37 = t;
                                int h_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    ;
                                    LocalPopChoice(h_37);
                                  }
                                else
                                  {
                                    t = g_37;
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
ATerm n_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_9 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  t = term_i_37;
  j_45 = t;
  t = term_y_12;
  k_45 = t;
  t = term_j_37;
  t = q_7(j_45, k_45, t);
  t = term_l_37;
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm s_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  t = term_b_10;
  m_45 = t;
  t = term_n_37;
  n_45 = t;
  t = term_p_37;
  t = q_7(m_45, n_45, t);
  t = l_45;
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(k_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
