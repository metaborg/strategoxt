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
ATerm term_o_42;
ATerm term_f_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_v_41;
ATerm term_q_41;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_d_41;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_s_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_w_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_g_37;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_t_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_a_35;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_g_34;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_g_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_v_31;
ATerm term_q_31;
ATerm term_v_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_z_29;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_r_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_h_27;
ATerm term_z_26;
ATerm term_o_26;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_u_23;
ATerm term_f_23;
ATerm term_a_23;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_o_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_r_20;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_w_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_i_13;
ATerm term_h_12;
ATerm term_j_11;
ATerm term_k_10;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_r_5;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_7, term_i_6, term_l_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_7, term_c_6, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_7, term_r_7, term_s_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_7, term_v_7, term_w_7);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_7, term_z_7, term_a_8);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_8, term_f_8, term_g_8);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_10, term_j_11, term_h_12);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_y_14, term_z_14);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_w_15, term_g_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_17, term_b_18, term_e_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_r_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_o_21, term_b_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_23, term_f_23, term_u_23);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_24, term_l_24, term_m_24);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_24, term_r_24, term_s_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_24, term_v_24, term_w_24);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_24, term_z_24, term_e_25);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_26, term_z_26, term_h_27);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_27, term_w_27, term_x_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_28, term_e_28, term_r_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_28, term_u_28, term_o_29);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_29, term_r_29, term_s_29);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_30, term_i_30, term_j_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_30, term_v_30, term_q_31);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_32, term_f_32, term_g_32);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_32, term_j_32, term_k_32);
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_32, term_n_32, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_32, term_r_32, term_s_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_n_33);
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym__2, term_g_33, term_x_34);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(sym__2, term_d_36, term_t_35);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_t_37);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_37);
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_a_7);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(sym__2, term_j_38, term_a_7);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_y_38);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_g_40, term_h_40);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym__2, term_k_41, term_a_7);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, term_n_41, term_a_7);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(sym__2, term_z_39, term_a_7);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym__3, term_g_40, term_h_40, (ATerm) ATempty);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
ATerm rename_file_0_0 (ATerm);
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm c_0 (ATerm);
ATerm xtc_transform_1_0 (ATerm k_90 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm xtc_parse_pp_table_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm modification_time_0_0 (ATerm);
ATerm add_extension_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm lookup_or_parse_0_0 (ATerm);
ATerm fatal_error_0_0 (ATerm);
ATerm u_0 (ATerm);
ATerm must_be_pp_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm has_extension_1_0 (ATerm z_84 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm j_72 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm c_1 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm c_88 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm);
ATerm k_1 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm v_71 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm j_15 (ATerm a_15, ATerm b_15, ATerm);
ATerm k_15 (ATerm e_15, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm);
ATerm assert_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm obsolete_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm t_17 (ATerm j_17, ATerm);
ATerm u_17 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm);
ATerm p_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm t_68 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm);
ATerm y_2 (ATerm);
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm asfix2abox_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm need_help_1_0 (ATerm d_92 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm Program_1_0 (ATerm a_69 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm y_92 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm m_29 (ATerm v_28, ATerm w_28, ATerm);
ATerm v_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm b_94 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm d_32 (ATerm y_31, ATerm);
ATerm parse_options_1_0 (ATerm a_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm io_asfix2abox_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm n_5 = t;
  int o_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_5;
      t = get_config_0_0(t);
      LocalPopChoice(o_5);
      t = (ATerm) ATinsert(ATempty, term_q_5);
    }
  else
    {
      t = n_5;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm rename_file_0_0 (ATerm t)
{
  ATerm d_8 = NULL,e_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_8 != NULL) && (d_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_8 = ATgetArgument(t, 0);
      if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_rename(not_null(d_8), not_null(e_8));
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_8 (ATerm i_8, ATerm j_8, ATerm t)
  {
    ATerm k_8 = NULL,l_8 = NULL;
    t = not_null(i_8);
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    t = not_null(j_8);
    if(((l_8 != NULL) && (l_8 != t)))
      _fail(t);
    else
      l_8 = t;
    t = n_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_8), term_r_5);
    t = copy_file_0_0(t);
    t = not_null(k_8);
    t = remove_file_0_0(t);
    t = term_r_5;
    return(t);
  }
  ATerm x_8 (ATerm m_8, ATerm n_8, ATerm t)
  {
    ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
    t = not_null(m_8);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    t = not_null(n_8);
    if(((p_8 != NULL) && (p_8 != t)))
      _fail(t);
    else
      p_8 = t;
    t = n_0(t);
    if(((q_8 != NULL) && (q_8 != t)))
      _fail(t);
    else
      q_8 = t;
    {
      ATerm s_5 = t;
      if((PushChoice() == 0))
        {
          ATerm t_5 = t;
          int u_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(u_5);
            }
          else
            {
              t = t_5;
              {
                ATerm r_8 = NULL;
                if(((r_8 != NULL) && (r_8 != t)))
                  _fail(t);
                else
                  r_8 = t;
                if(((o_8 != NULL) && (o_8 != t)))
                  _fail(t);
                else
                  o_8 = t;
                t = not_null(r_8);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_5;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), not_null(q_8));
      t = rename_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_8));
    }
    return(t);
  }
  ATerm s_8 = NULL,t_8 = NULL;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_8(not_null(t_8), not_null(s_8), t);
        ;
        LocalPopChoice(w_5);
      }
    else
      {
        t = v_5;
        {
          ATerm x_5 = t;
          int y_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_8(not_null(t_8), not_null(s_8), t);
              ;
              LocalPopChoice(y_5);
            }
          else
            {
              t = x_5;
              {
                ATerm u_8 = NULL,v_8 = NULL;
                t = not_null(t_8);
                if(((u_8 != NULL) && (u_8 != t)))
                  _fail(t);
                else
                  u_8 = t;
                t = not_null(s_8);
                if(((v_8 != NULL) && (v_8 != t)))
                  _fail(t);
                else
                  v_8 = t;
                t = n_0(t);
                if(((u_8 != NULL) && (u_8 != t)))
                  _fail(t);
                else
                  u_8 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(u_8));
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm xtc_transform_1_0 (ATerm k_90 (ATerm), ATerm t)
{
  t = xtc_transform_2_0(k_90, c_0, t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  t = term_z_5;
  return(t);
}
ATerm xtc_parse_pp_table_0_0 (ATerm t)
{
  t = xtc_transform_1_0(e_0, t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  t = debug_1_0(q_0, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_a_6;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm y_8 = NULL,z_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_8));
      t = xtc_parse_pp_table_0_0(t);
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        if(((z_8 != NULL) && (z_8 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          z_8 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(z_8);
    t = if_verbose2_1_0(p_0, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm r_0 (ATerm t)
  {
    ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
    if(((a_9 != NULL) && (a_9 != t)))
      _fail(t);
    else
      a_9 = t;
    if(((b_9 != NULL) && (b_9 != t)))
      _fail(t);
    else
      b_9 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((c_9 != NULL) && (c_9 != t)))
      _fail(t);
    else
      c_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_9), term_c_6);
    t = geq_0_0(t);
    t = not_null(a_9);
    t = z_87(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm modification_time_0_0 (ATerm t)
{
  ATerm d_9 = NULL;
  if(((d_9 != NULL) && (d_9 != t)))
    _fail(t);
  else
    d_9 = t;
  t = SSL_modification_time(not_null(d_9));
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_9 = ATgetArgument(t, 0);
      if(((f_9 != NULL) && (f_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((g_9 != NULL) && (g_9 != t)))
    _fail(t);
  else
    g_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_9)), term_d_6), not_null(e_9));
  t = concat_strings_0_0(t);
  if(((h_9 != NULL) && (h_9 != t)))
    _fail(t);
  else
    h_9 = t;
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = debug_1_0(t_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_e_6;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(((i_9 != NULL) && (i_9 != t)))
    _fail(t);
  else
    i_9 = t;
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  t = not_null(i_9);
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  if(((m_9 != NULL) && (m_9 != t)))
    _fail(t);
  else
    m_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_9), term_f_6);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(j_9));
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = not_null(o_9);
  t = Fst_0_0(t);
  t = if_verbose2_1_0(s_0, t);
  return(t);
}
ATerm lookup_or_parse_0_0 (ATerm t)
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = lookup_pp_af_0_0(t);
      ;
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      t = parse_to_temp_file_0_0(t);
    }
  return(t);
}
ATerm fatal_error_0_0 (ATerm t)
{
  ATerm p_9 = NULL;
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = error_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  t = not_null(p_9);
  return(t);
}
ATerm u_0 (ATerm t)
{
  t = term_j_6;
  return(t);
}
ATerm must_be_pp_0_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(u_0, t);
      ;
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
        if(((q_9 != NULL) && (q_9 != t)))
          _fail(t);
        else
          q_9 = t;
        if(((r_9 != NULL) && (r_9 != t)))
          _fail(t);
        else
          r_9 = t;
        t = not_null(q_9);
        if(((s_9 != NULL) && (s_9 != t)))
          _fail(t);
        else
          s_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_9)), term_m_6);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm t_9 (ATerm t)
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = Cons_2_0(_id, t_9, t);
      }
    return(t);
  }
  t = t_9(t);
  return(t);
}
ATerm has_extension_1_0 (ATerm z_84 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = z_84(t);
  t = explode_string_0_0(t);
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  t = not_null(u_9);
  if(((w_9 != NULL) && (w_9 != t)))
    _fail(t);
  else
    w_9 = t;
  t = explode_string_0_0(t);
  {
    ATerm v_0 (ATerm t)
    {
      if(((v_9 != NULL) && (v_9 != t)))
        _fail(t);
      else
        v_9 = t;
      return(t);
    }
    t = at_suffix_1_0(v_0, t);
    t = not_null(w_9);
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_p_6;
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = has_extension_1_0(w_0, t);
      ;
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      t = must_be_pp_0_0(t);
      t = lookup_or_parse_0_0(t);
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_6;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm x_9 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  if(((x_9 != NULL) && (x_9 != t)))
    _fail(t);
  else
    x_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_9)), term_u_6);
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = debug_1_0(z_0, t);
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(x_0, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(y_0, t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_9 = ATgetArgument(t, 0);
      if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(y_9), not_null(z_9));
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = SSL_subtr(not_null(y_9), not_null(z_9));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(((a_10 != NULL) && (a_10 != t)))
    _fail(t);
  else
    a_10 = t;
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = term_b_6;
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
        t = term_i_6;
      }
    if(((c_10 != NULL) && (c_10 != t)))
      _fail(t);
    else
      c_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), term_i_6);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_10)), term_b_6);
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = term_a_7;
  t = pass_verbose_0_0(t);
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = not_null(e_10);
  if(((g_10 != NULL) && (g_10 != t)))
    _fail(t);
  else
    g_10 = t;
  t = term_a_7;
  t = create_pp_table_args_0_0(t);
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  t = not_null(g_10);
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = term_a_7;
  t = pass_conservative_0_0(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_10)), not_null(h_10)), not_null(f_10));
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm n_10 = NULL,o_10 = NULL;
      t = not_null(l_10);
      if(((n_10 != NULL) && (n_10 != t)))
        _fail(t);
      else
        n_10 = t;
      t = term_b_7;
      t = ReadFromFile_0_0(t);
      if(((o_10 != NULL) && (o_10 != t)))
        _fail(t);
      else
        o_10 = t;
    }
  else
    {
      ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((m_10 != NULL) && (m_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(m_10);
      if(((p_10 != NULL) && (p_10 != t)))
        _fail(t);
      else
        p_10 = t;
      t = not_null(l_10);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      t = not_null(p_10);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((r_10 != NULL) && (r_10 != t)))
        _fail(t);
      else
        r_10 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if(match_cons(c_7, sym_Stream_1))
        {
          if(((s_10 != NULL) && (s_10 != ATgetArgument(c_7, 0))))
            _fail(ATgetArgument(c_7, 0));
          else
            s_10 = ATgetArgument(c_7, 0);
        }
      else
        _fail(t);
      if(((t_10 != NULL) && (t_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(s_10), not_null(t_10));
  if(((u_10 != NULL) && (u_10 != t)))
    _fail(t);
  else
    u_10 = t;
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_10));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm w_10 = NULL,x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_10 = ATgetArgument(t, 0);
      if(((x_10 != NULL) && (x_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(w_10);
  if(((y_10 != NULL) && (y_10 != t)))
    _fail(t);
  else
    y_10 = t;
  if(((z_10 != NULL) && (z_10 != t)))
    _fail(t);
  else
    z_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_10), term_d_7);
  t = open_stream_0_0(t);
  if(((a_11 != NULL) && (a_11 != t)))
    _fail(t);
  else
    a_11 = t;
  if(((b_11 != NULL) && (b_11 != t)))
    _fail(t);
  else
    b_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_11), not_null(x_10));
  t = j_72(t);
  t = fclose_0_0(t);
  t = not_null(x_10);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = xtc_new_file_0_0(t);
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(e_11), not_null(c_11));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(e_11);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_11));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(s_90, t_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm f_11 = NULL;
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = SSL_close_file(not_null(f_11));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_11 != NULL) && (g_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_11 = ATgetArgument(t, 0);
      if(((h_11 != NULL) && (h_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(g_11), not_null(h_11));
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
  ATerm i_11 = NULL;
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  t = SSL_int_to_string(not_null(i_11));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  if(((k_11 != NULL) && (k_11 != t)))
    _fail(t);
  else
    k_11 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      l_11 = ATgetArgument(t, 0);
      {
        ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
        t = not_null(l_11);
        if(((o_11 != NULL) && (o_11 != t)))
          _fail(t);
        else
          o_11 = t;
        t = not_null(k_11);
        if(((p_11 != NULL) && (p_11 != t)))
          _fail(t);
        else
          p_11 = t;
        if(((q_11 != NULL) && (q_11 != t)))
          _fail(t);
        else
          q_11 = t;
        t = not_null(o_11);
        t = int_to_string_0_0(t);
        if(((r_11 != NULL) && (r_11 != t)))
          _fail(t);
        else
          r_11 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(r_11)), term_e_7);
        t = concat_strings_0_0(t);
        if(((s_11 != NULL) && (s_11 != t)))
          _fail(t);
        else
          s_11 = t;
      }
    }
  else
    {
      ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((l_11 != NULL) && (l_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            l_11 = ATgetArgument(t, 0);
          if(((m_11 != NULL) && (m_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_11 = ATgetArgument(t, 1);
          if(((n_11 != NULL) && (n_11 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            n_11 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(l_11);
      if(((t_11 != NULL) && (t_11 != t)))
        _fail(t);
      else
        t_11 = t;
      t = not_null(m_11);
      if(((u_11 != NULL) && (u_11 != t)))
        _fail(t);
      else
        u_11 = t;
      t = not_null(n_11);
      if(((v_11 != NULL) && (v_11 != t)))
        _fail(t);
      else
        v_11 = t;
      t = not_null(k_11);
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      if(((x_11 != NULL) && (x_11 != t)))
        _fail(t);
      else
        x_11 = t;
      t = not_null(u_11);
      t = int_to_string_0_0(t);
      if(((y_11 != NULL) && (y_11 != t)))
        _fail(t);
      else
        y_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(v_11)), term_h_7), not_null(y_11)), term_g_7), not_null(t_11));
      t = concat_strings_0_0(t);
      if(((z_11 != NULL) && (z_11 != t)))
        _fail(t);
      else
        z_11 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm a_12 = NULL;
  ATerm a_1 (ATerm t)
  {
    t = p_76(t);
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    return(t);
  }
  t = fetch_1_0(a_1, t);
  t = not_null(a_12);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_32), term_p_32), term_l_32), term_h_32), term_v_31), term_l_30), term_z_29), term_p_29), term_s_28), term_c_28), term_u_27), term_f_25), term_x_24), term_t_24), term_n_24), term_f_24), term_c_22), term_x_20), term_z_18), term_h_17), term_d_15), term_i_13), term_h_8), term_b_8), term_x_7), term_t_7), term_p_7), term_m_7);
        {
          ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm u_32 = ATgetArgument(t, 0);
                if(((b_12 != NULL) && (b_12 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  b_12 = ATgetArgument(t, 1);
                {
                  ATerm v_32 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(b_1, t);
        }
        ;
        LocalPopChoice(j_7);
      }
    else
      {
        t = i_7;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(b_12));
      }
  }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_12 = ATgetArgument(t, 1);
      {
        ATerm x_32 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(d_12);
  {
    ATerm y_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_32;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((e_12 != NULL) && (e_12 != t)))
      _fail(t);
    else
      e_12 = t;
    if(((f_12 != NULL) && (f_12 != t)))
      _fail(t);
    else
      f_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_12)), term_a_33));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm c_12 = NULL;
  if(((c_12 != NULL) && (c_12 != t)))
    _fail(t);
  else
    c_12 = t;
  t = try_1_0(c_1, t);
  t = not_null(c_12);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm g_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = SSL_waitpid(not_null(g_12));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm w_70 (ATerm), ATerm x_70 (ATerm), ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(((i_12 != NULL) && (i_12 != t)))
    _fail(t);
  else
    i_12 = t;
  t = fork_0_0(t);
  if(((j_12 != NULL) && (j_12 != t)))
    _fail(t);
  else
    j_12 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL;
        if(((k_12 != NULL) && (k_12 != t)))
          _fail(t);
        else
          k_12 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(i_12);
        t = w_70(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_12), not_null(i_12));
        t = x_70(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm l_12 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm m_12 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_12 = ATgetArgument(t, 0);
        if(((l_12 != NULL) && (l_12 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          l_12 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(m_12);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm d_33 = ATgetArgument(t, 0);
        if(((ATgetType(d_33) != AT_INT) || (ATgetInt((ATermInt) d_33) != 0)))
          _fail(t);
        {
          ATerm e_33 = ATgetArgument(t, 1);
        }
        {
          ATerm f_33 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(l_12);
    return(t);
  }
  t = fork_2_0(y_70, d_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_12 != NULL) && (n_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_12 = ATgetArgument(t, 0);
      if(((o_12 != NULL) && (o_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_12), not_null(o_12));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm p_12 = NULL;
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  t = SSL_table_keys(not_null(p_12));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_12 = NULL;
  if(((q_12 != NULL) && (q_12 != t)))
    _fail(t);
  else
    q_12 = t;
  t = table_keys_0_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      if(((s_12 != NULL) && (s_12 != t)))
        _fail(t);
      else
        s_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_12), not_null(r_12));
      t = table_get_0_0(t);
      if(((t_12 != NULL) && (t_12 != t)))
        _fail(t);
      else
        t_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_12), not_null(t_12));
      return(t);
    }
    t = map_1_0(f_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm c_88 (ATerm), ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
    if(((u_12 != NULL) && (u_12 != t)))
      _fail(t);
    else
      u_12 = t;
    if(((v_12 != NULL) && (v_12 != t)))
      _fail(t);
    else
      v_12 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((w_12 != NULL) && (w_12 != t)))
      _fail(t);
    else
      w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_12), term_f_32);
    t = geq_0_0(t);
    t = not_null(u_12);
    t = c_88(t);
    return(t);
  }
  t = try_1_0(g_1, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
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
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, not_null(z_12));
  t = printnl_0_0(t);
  t = not_null(x_12);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, (ATerm) ATmakeAppl(sym_Tool_1, not_null(a_13)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_33 = ATgetFirst((ATermList) t);
      if(match_cons(h_33, sym__2))
        {
          if(((c_13 != NULL) && (c_13 != ATgetArgument(h_33, 0))))
            _fail(ATgetArgument(h_33, 0));
          else
            c_13 = ATgetArgument(h_33, 0);
          if(((d_13 != NULL) && (d_13 != ATgetArgument(h_33, 1))))
            _fail(ATgetArgument(h_33, 1));
          else
            d_13 = ATgetArgument(h_33, 1);
        }
      else
        _fail(t);
      {
        ATerm i_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(d_13);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
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
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, (ATerm) ATmakeAppl(sym_Tool_1, not_null(e_13)));
  t = table_get_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            f_13 = ATgetArgument(t, 0);
          if(((h_13 != NULL) && (h_13 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            h_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = not_null(h_13);
  }
  return(t);
}
ATerm filter_1_0 (ATerm w_83 (ATerm), ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1_0(w_83, t);
              return(t);
            }
            t = Cons_2_0(w_83, i_1, t);
            ;
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
              if(((j_13 != NULL) && (j_13 != t)))
                _fail(t);
              else
                j_13 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((k_13 != NULL) && (k_13 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    k_13 = ATgetFirst((ATermList) t);
                  if(((l_13 != NULL) && (l_13 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    l_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(l_13);
              if(((m_13 != NULL) && (m_13 != t)))
                _fail(t);
              else
                m_13 = t;
              t = filter_1_0(w_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm q_85 (ATerm), ATerm t)
{
  ATerm n_13 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = q_85(t);
      t = n_13(t);
      return(t);
    }
    t = try_1_0(j_1, t);
    return(t);
  }
  t = n_13(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_o_33;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm p_33 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_33;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm o_13 = NULL;
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  t = repeat_1_0(k_1, t);
  t = not_null(o_13);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  if(((r_13 != NULL) && (r_13 != t)))
    _fail(t);
  else
    r_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATempty, not_null(r_13)));
  t = printnl_0_0(t);
  t = not_null(p_13);
  return(t);
}
ATerm say_1_0 (ATerm v_71 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = v_71(t);
  t = debug_0_0(t);
  t = not_null(s_13);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL;
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    if(((u_13 != NULL) && (u_13 != t)))
      _fail(t);
    else
      u_13 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((v_13 != NULL) && (v_13 != t)))
      _fail(t);
    else
      v_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), term_o_21);
    t = geq_0_0(t);
    t = not_null(t_13);
    t = b_88(t);
    return(t);
  }
  t = try_1_0(l_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
    if(((w_13 != NULL) && (w_13 != t)))
      _fail(t);
    else
      w_13 = t;
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((y_13 != NULL) && (y_13 != t)))
      _fail(t);
    else
      y_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_13), term_v_7);
    t = geq_0_0(t);
    t = not_null(w_13);
    t = d_88(t);
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
  ATerm z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_13 = ATgetArgument(t, 0);
      if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_14 != NULL) && (a_14 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_14 = ATgetFirst((ATermList) t);
      if(((b_14 != NULL) && (b_14 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  t = l_80(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
      if(((d_14 != NULL) && (d_14 != t)))
        _fail(t);
      else
        d_14 = t;
      if(((e_14 != NULL) && (e_14 != t)))
        _fail(t);
      else
        e_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(d_14));
      t = k_80(t);
      if(((f_14 != NULL) && (f_14 != t)))
        _fail(t);
      else
        f_14 = t;
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = not_null(b_14);
  }
  return(t);
}
ATerm union_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_14 != NULL) && (g_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_14 = ATgetArgument(t, 0);
      if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_14 != NULL) && (i_14 != t)))
    _fail(t);
  else
    i_14 = t;
  t = not_null(g_14);
  {
    ATerm k_14 (ATerm t)
    {
      ATerm q_33 = t;
      int r_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(h_14);
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
                ATerm o_1 (ATerm t)
                {
                  t = not_null(h_14);
                  return(t);
                }
                t = HdMember_p__2_0(h_80, o_1, t);
                t = k_14(t);
                ;
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                t = Cons_2_0(_id, k_14, t);
              }
          }
        }
      return(t);
    }
    t = k_14(t);
    if(((j_14 != NULL) && (j_14 != t)))
      _fail(t);
    else
      j_14 = t;
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
  ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((l_14 != NULL) && (l_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_14 = ATgetArgument(t, 0);
      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_14 = ATgetArgument(t, 1);
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((o_14 != NULL) && (o_14 != t)))
    _fail(t);
  else
    o_14 = t;
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(m_14));
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(v_33);
      }
    else
      {
        t = u_33;
        t = (ATerm) ATempty;
      }
    if(((r_14 != NULL) && (r_14 != t)))
      _fail(t);
    else
      r_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(n_14));
    t = union_0_0(t);
    if(((s_14 != NULL) && (s_14 != t)))
      _fail(t);
    else
      s_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_14), not_null(m_14), not_null(s_14));
    t = set_0_0(t);
    t = not_null(o_14);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_14 != NULL) && (u_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_14 = ATgetArgument(t, 0);
      if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_14);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm v_14 = NULL,w_14 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_14 = ATgetArgument(t, 0);
          if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            w_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(u_14), not_null(v_14), not_null(w_14));
      t = f_88(t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm j_15 (ATerm a_15, ATerm b_15, ATerm t)
{
  ATerm c_15 = NULL;
  t = not_null(a_15);
  if(((c_15 != NULL) && (c_15 != t)))
    _fail(t);
  else
    c_15 = t;
  t = SSL_fclose(not_null(c_15));
  return(t);
}
ATerm k_15 (ATerm e_15, ATerm t)
{
  ATerm g_15 = NULL;
  t = not_null(e_15);
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  t = SSL_fclose(not_null(g_15));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_15 = NULL,i_15 = NULL;
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_15 = ATgetArgument(t, 0);
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_15(not_null(h_15), not_null(i_15), t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            t = k_15(not_null(i_15), t);
          }
      }
    }
  else
    {
      t = k_15(not_null(i_15), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((l_15 != NULL) && (l_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(l_15));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_15 != NULL) && (m_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_15 = ATgetArgument(t, 0);
      if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(m_15), not_null(n_15));
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_15));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  t = SSL_stdin_stream();
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_15));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  t = SSL_stdout_stream();
  if(((s_15 != NULL) && (s_15 != t)))
    _fail(t);
  else
    s_15 = t;
  if(((t_15 != NULL) && (t_15 != t)))
    _fail(t);
  else
    t_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(t_15));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  t = SSL_stderr_stream();
  if(((u_15 != NULL) && (u_15 != t)))
    _fail(t);
  else
    u_15 = t;
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(v_15));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm x_15 = NULL;
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(x_15);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(x_15);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(x_15);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = not_null(y_15);
  if(((a_16 != NULL) && (a_16 != t)))
    _fail(t);
  else
    a_16 = t;
  t = SSL_explode_term(not_null(a_16));
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            if(((c_16 != NULL) && (c_16 != ATgetFirst((ATermList) z_33))))
              _fail(ATgetFirst((ATermList) z_33));
            else
              c_16 = ATgetFirst((ATermList) z_33);
            if(((b_16 != NULL) && (b_16 != (ATerm) ATgetNext((ATermList) z_33))))
              _fail((ATerm) ATgetNext((ATermList) z_33));
            else
              b_16 = (ATerm) ATgetNext((ATermList) z_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(c_16);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm d_16 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((d_16 != NULL) && (d_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(d_16);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      ATerm b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm e_34 = t;
          int f_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(q_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(f_34);
            }
          else
            {
              t = e_34;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_g_34;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
      if(((e_16 != NULL) && (e_16 != t)))
        _fail(t);
      else
        e_16 = t;
      if(((f_16 != NULL) && (f_16 != t)))
        _fail(t);
      else
        f_16 = t;
      t = not_null(e_16);
      if(((g_16 != NULL) && (g_16 != t)))
        _fail(t);
      else
        g_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_16), term_j_34);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(i_34);
    }
  else
    {
      t = h_34;
      t = debug_1_0(r_1, t);
      _fail(t);
    }
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = read_from_stream_0_0(t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  t = not_null(h_16);
  t = fclose_0_0(t);
  t = not_null(i_16);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  if(((j_16 != NULL) && (j_16 != t)))
    _fail(t);
  else
    j_16 = t;
  if(((k_16 != NULL) && (k_16 != t)))
    _fail(t);
  else
    k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_16), (ATerm) ATinsert(ATempty, term_k_34));
  t = access_0_0(t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_m_34;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm n_34 = t;
  int o_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(o_34);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = n_34;
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_34 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = r_34;
              }
            t = debug_1_0(s_1, t);
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            t = debug_1_0(t_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = debug_1_0(v_1, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_s_34;
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = debug_1_0(x_1, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = term_t_34;
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = say_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = say_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_v_34;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = say_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(((l_16 != NULL) && (l_16 != t)))
    _fail(t);
  else
    l_16 = t;
  t = if_verbose5_1_0(u_1, t);
  {
    ATerm w_34 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_33, (ATerm) ATmakeAppl(sym_Imported_1, not_null(l_16)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_34;
      }
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_g_33, term_x_34, (ATerm) ATinsert(ATempty, not_null(l_16)));
    t = table_put_0_0(t);
    t = not_null(m_16);
    t = if_verbose4_1_0(w_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(y_1, t);
    if(((n_16 != NULL) && (n_16 != t)))
      _fail(t);
    else
      n_16 = t;
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_33, not_null(o_16));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(a_2, t);
    t = (ATerm) ATmakeAppl(sym__3, term_g_33, (ATerm)ATmakeAppl(sym_Imported_1, not_null(l_16)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(c_2, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm p_16 = NULL;
  if(((p_16 != NULL) && (p_16 != t)))
    _fail(t);
  else
    p_16 = t;
  t = SSL_getenv(not_null(p_16));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_35;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = debug_1_0(f_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_16 = NULL;
  t = if_verbose5_1_0(e_2, t);
  if(((q_16 != NULL) && (q_16 != t)))
    _fail(t);
  else
    q_16 = t;
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_35;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(q_16);
    t = if_verbose5_1_0(g_2, t);
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = debug_1_0(l_2, t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_j_35;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_g_33;
  t = table_getlist_0_0(t);
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(k_2, t);
      }
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      {
        ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
        if(((r_16 != NULL) && (r_16 != t)))
          _fail(t);
        else
          r_16 = t;
        if(((s_16 != NULL) && (s_16 != t)))
          _fail(t);
        else
          s_16 = t;
        t = not_null(r_16);
        if(((t_16 != NULL) && (t_16 != t)))
          _fail(t);
        else
          t_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_35), not_null(t_16)), term_p_35);
        t = error_0_0(t);
        t = if_verbose5_1_0(m_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm j_90 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(((u_16 != NULL) && (u_16 != t)))
    _fail(t);
  else
    u_16 = t;
  t = j_90(t);
  t = xtc_find_warning_0_0(t);
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = not_null(u_16);
  if(((w_16 != NULL) && (w_16 != t)))
    _fail(t);
  else
    w_16 = t;
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), not_null(y_16));
  t = call_0_0(t);
  t = not_null(w_16);
  return(t);
}
ATerm assert_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_16 != NULL) && (z_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_16 = ATgetArgument(t, 0);
      if(((a_17 != NULL) && (a_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  t = u_86(t);
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(c_17), not_null(z_16), not_null(a_17));
  t = table_push_0_0(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), term_t_35);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_17 != NULL) && (d_17 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_17 = ATgetFirst((ATermList) t);
        if(((e_17 != NULL) && (e_17 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_17 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(c_17), term_t_35, (ATerm) ATinsert(CheckATermList(not_null(e_17)), (ATerm) ATinsert(CheckATermList(not_null(d_17)), not_null(z_16))));
    t = table_put_0_0(t);
    t = not_null(b_17);
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm obsolete_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm f_17 = NULL;
  if(((f_17 != NULL) && (f_17 != t)))
    _fail(t);
  else
    f_17 = t;
  t = y_71(t);
  t = debug_1_0(o_2, t);
  t = not_null(f_17);
  return(t);
}
ATerm t_17 (ATerm j_17, ATerm t)
{
  ATerm k_17 = NULL;
  t = not_null(j_17);
  if(((k_17 != NULL) && (k_17 != t)))
    _fail(t);
  else
    k_17 = t;
  t = not_null(j_17);
  {
    ATerm v_35 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm w_35 = ATgetArgument(t, 0);
            ATerm x_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_35;
      }
    t = obsolete_1_0(p_2, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_17), term_d_7);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm u_17 (ATerm l_17, ATerm m_17, ATerm n_17, ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  t = not_null(l_17);
  if(((o_17 != NULL) && (o_17 != t)))
    _fail(t);
  else
    o_17 = t;
  t = not_null(m_17);
  if(((p_17 != NULL) && (p_17 != t)))
    _fail(t);
  else
    p_17 = t;
  t = SSL_open_file(not_null(o_17), not_null(p_17));
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_y_35;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL;
  if(((q_17 != NULL) && (q_17 != t)))
    _fail(t);
  else
    q_17 = t;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
      {
        ATerm z_35 = t;
        int a_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_17(not_null(q_17), t);
            ;
            LocalPopChoice(a_36);
          }
        else
          {
            t = z_35;
            t = u_17(not_null(r_17), not_null(s_17), not_null(q_17), t);
          }
      }
    }
  else
    {
      t = t_17(not_null(q_17), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_17 != NULL) && (v_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_17 = ATgetArgument(t, 0);
      if(((w_17 != NULL) && (w_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(v_17), not_null(w_17));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL;
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  if(((y_17 != NULL) && (y_17 != t)))
    _fail(t);
  else
    y_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), (ATerm) ATinsert(ATempty, term_b_36));
  t = access_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL;
  if(((z_17 != NULL) && (z_17 != t)))
    _fail(t);
  else
    z_17 = t;
  t = term_a_7;
  t = new_0_0(t);
  if(((a_18 != NULL) && (a_18 != t)))
    _fail(t);
  else
    a_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_18), term_c_36);
  t = conc_strings_0_0(t);
  t = try_1_0(q_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  t = new_file_0_0(t);
  if(((c_18 != NULL) && (c_18 != t)))
    _fail(t);
  else
    c_18 = t;
  if(((d_18 != NULL) && (d_18 != t)))
    _fail(t);
  else
    d_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_d_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_a_7);
  t = assert_1_0(r_2, t);
  t = not_null(d_18);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL;
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
      t = not_null(f_18);
      if(((h_18 != NULL) && (h_18 != t)))
        _fail(t);
      else
        h_18 = t;
      t = xtc_new_file_0_0(t);
      if(((i_18 != NULL) && (i_18 != t)))
        _fail(t);
      else
        i_18 = t;
      if(((j_18 != NULL) && (j_18 != t)))
        _fail(t);
      else
        j_18 = t;
      t = m_0(t);
      if(((k_18 != NULL) && (k_18 != t)))
        _fail(t);
      else
        k_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_18)), term_e_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(i_18);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_18));
    }
  else
    {
      ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((g_18 != NULL) && (g_18 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            g_18 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(g_18);
      if(((l_18 != NULL) && (l_18 != t)))
        _fail(t);
      else
        l_18 = t;
      t = not_null(f_18);
      if(((m_18 != NULL) && (m_18 != t)))
        _fail(t);
      else
        m_18 = t;
      t = not_null(l_18);
      t = xtc_new_file_0_0(t);
      if(((n_18 != NULL) && (n_18 != t)))
        _fail(t);
      else
        n_18 = t;
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = m_0(t);
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(p_18), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_18)), term_e_36), not_null(l_18)), term_f_36));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(n_18);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_18));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm t_68 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
  if(((t_18 != NULL) && (t_18 != t)))
    _fail(t);
  else
    t_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((u_18 != NULL) && (u_18 != t)))
    _fail(t);
  else
    u_18 = t;
  t = SSLgetAnnotations(not_null(t_18));
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = not_null(r_18);
  t = t_68(t);
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  if(((w_18 != NULL) && (w_18 != t)))
    _fail(t);
  else
    w_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(s_18)), not_null(q_18));
  if(((v_18 != NULL) && (v_18 != t)))
    _fail(t);
  else
    v_18 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_36 = t;
      int j_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(j_36);
        }
      else
        {
          t = i_36;
          t = stdin_0_0(t);
        }
      LocalPopChoice(h_36);
      t = xtc_transform_file_2_0(l_90, m_90, t);
    }
  else
    {
      t = g_36;
      t = xtc_transform_term_2_0(l_90, m_90, t);
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_18 != NULL) && (x_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_18 = ATgetArgument(t, 0);
      if(((y_18 != NULL) && (y_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(x_18), not_null(y_18));
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
  ATerm r_19 (ATerm c_19, ATerm d_19, ATerm t)
  {
    ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
    t = not_null(c_19);
    if(((e_19 != NULL) && (e_19 != t)))
      _fail(t);
    else
      e_19 = t;
    t = not_null(d_19);
    if(((f_19 != NULL) && (f_19 != t)))
      _fail(t);
    else
      f_19 = t;
    t = k_0(t);
    if(((g_19 != NULL) && (g_19 != t)))
      _fail(t);
    else
      g_19 = t;
    {
      ATerm k_36 = t;
      int l_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(l_36);
        }
      else
        {
          t = k_36;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), not_null(g_19));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_19));
    }
    return(t);
  }
  ATerm s_19 (ATerm h_19, ATerm i_19, ATerm t)
  {
    ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
    t = not_null(h_19);
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    t = not_null(i_19);
    if(((k_19 != NULL) && (k_19 != t)))
      _fail(t);
    else
      k_19 = t;
    t = k_0(t);
    if(((l_19 != NULL) && (l_19 != t)))
      _fail(t);
    else
      l_19 = t;
    {
      ATerm m_36 = t;
      if((PushChoice() == 0))
        {
          ATerm n_36 = t;
          int o_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
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
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(q_36);
                  }
                else
                  {
                    t = p_36;
                    {
                      ATerm m_19 = NULL;
                      if(((m_19 != NULL) && (m_19 != t)))
                        _fail(t);
                      else
                        m_19 = t;
                      if(((j_19 != NULL) && (j_19 != t)))
                        _fail(t);
                      else
                        j_19 = t;
                      t = not_null(m_19);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = m_36;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(l_19));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_19));
    }
    return(t);
  }
  ATerm n_19 = NULL,o_19 = NULL;
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_19(not_null(o_19), not_null(n_19), t);
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
              t = s_19(not_null(o_19), not_null(n_19), t);
              ;
              LocalPopChoice(u_36);
            }
          else
            {
              t = t_36;
              {
                ATerm p_19 = NULL,q_19 = NULL;
                t = not_null(o_19);
                if(((p_19 != NULL) && (p_19 != t)))
                  _fail(t);
                else
                  p_19 = t;
                t = not_null(n_19);
                if(((q_19 != NULL) && (q_19 != t)))
                  _fail(t);
                else
                  q_19 = t;
                t = k_0(t);
                if(((p_19 != NULL) && (p_19 != t)))
                  _fail(t);
                else
                  p_19 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_19));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm t_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_36 = ATgetFirst((ATermList) t);
      if(((t_19 != NULL) && (t_19 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        t_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(t_19);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_19 = ATgetArgument(t, 0);
      if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_19 != NULL) && (w_19 != t)))
    _fail(t);
  else
    w_19 = t;
  if(((x_19 != NULL) && (x_19 != t)))
    _fail(t);
  else
    x_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(u_19), not_null(v_19));
  {
    ATerm w_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(x_36);
      }
    else
      {
        t = w_36;
        t = (ATerm) ATempty;
      }
    if(((y_19 != NULL) && (y_19 != t)))
      _fail(t);
    else
      y_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(u_19), not_null(v_19), not_null(y_19));
    t = table_put_0_0(t);
    t = not_null(w_19);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_86 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  if(((z_19 != NULL) && (z_19 != t)))
    _fail(t);
  else
    z_19 = t;
  t = r_86(t);
  if(((a_20 != NULL) && (a_20 != t)))
    _fail(t);
  else
    a_20 = t;
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), term_t_35);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_20 != NULL) && (c_20 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_20 = ATgetFirst((ATermList) t);
        if(((b_20 != NULL) && (b_20 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(a_20), term_t_35, not_null(b_20));
    t = table_put_0_0(t);
    t = not_null(c_20);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
        if(((d_20 != NULL) && (d_20 != t)))
          _fail(t);
        else
          d_20 = t;
        if(((e_20 != NULL) && (e_20 != t)))
          _fail(t);
        else
          e_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(d_20));
        t = table_pop_0_0(t);
        if(((f_20 != NULL) && (f_20 != t)))
          _fail(t);
        else
          f_20 = t;
        return(t);
      }
      t = map_1_0(s_2, t);
      t = not_null(z_19);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm g_20 = NULL;
  if(((g_20 != NULL) && (g_20 != t)))
    _fail(t);
  else
    g_20 = t;
  t = SSL_remove(not_null(g_20));
  return(t);
}
ATerm restore_always_2_0 (ATerm m_87 (ATerm), ATerm n_87 (ATerm), ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_87(t);
      t = n_87(t);
      ;
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      t = n_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(((h_20 != NULL) && (h_20 != t)))
    _fail(t);
  else
    h_20 = t;
  t = q_86(t);
  if(((i_20 != NULL) && (i_20 != t)))
    _fail(t);
  else
    i_20 = t;
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), term_t_35);
  {
    ATerm c_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = c_37;
        t = (ATerm) ATempty;
      }
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(i_20), term_t_35, (ATerm) ATinsert(CheckATermList(not_null(k_20)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(h_20);
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  t = begin_scope_1_0(t_2, t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm n_20 = NULL;
      if(((n_20 != NULL) && (n_20 != t)))
        _fail(t);
      else
        n_20 = t;
      {
        ATerm e_37 = t;
        int f_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_37;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(f_37);
          }
        else
          {
            t = e_37;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_20 != NULL) && (m_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_20 = ATgetFirst((ATermList) t);
            if(((l_20 != NULL) && (l_20 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              l_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(m_20);
        t = map_1_0(v_2, t);
        t = not_null(n_20);
        t = end_scope_1_0(w_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(v_89, u_2, t);
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_36;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      t = term_r_5;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm w_89 (ATerm), ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm j_37 = t;
    int k_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
        if(((o_20 != NULL) && (o_20 != t)))
          _fail(t);
        else
          o_20 = t;
        if(((p_20 != NULL) && (p_20 != t)))
          _fail(t);
        else
          p_20 = t;
        t = term_f_36;
        t = get_config_0_0(t);
        if(((q_20 != NULL) && (q_20 != t)))
          _fail(t);
        else
          q_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_20));
        ;
        LocalPopChoice(k_37);
      }
    else
      {
        t = j_37;
        t = term_b_7;
      }
    t = w_89(t);
    t = copy_to_1_0(y_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(x_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = xtc_transform_2_0(a_3, b_3, t);
  t = xtc_transform_2_0(c_3, d_3, t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_l_37;
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_37), term_o_37), term_n_37), term_m_37);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_a_7;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(z_2, t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm s_20 = NULL;
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(s_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(s_20);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(((t_20 != NULL) && (t_20 != t)))
    _fail(t);
  else
    t_20 = t;
  if(((u_20 != NULL) && (u_20 != t)))
    _fail(t);
  else
    u_20 = t;
  t = string_to_int_0_0(t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_37, not_null(v_20));
  t = set_config_0_0(t);
  t = not_null(t_20);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm w_20 = NULL;
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  t = SSL_string_to_int(not_null(w_20));
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm y_20 = NULL;
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(y_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(y_20);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm z_20 = NULL;
  if(((z_20 != NULL) && (z_20 != t)))
    _fail(t);
  else
    z_20 = t;
  t = term_u_37;
  t = set_config_0_0(t);
  t = term_v_37;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_w_37;
  return(t);
}
ATerm k_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  if(((a_21 != NULL) && (a_21 != t)))
    _fail(t);
  else
    a_21 = t;
  if(((b_21 != NULL) && (b_21 != t)))
    _fail(t);
  else
    b_21 = t;
  t = string_to_int_0_0(t);
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(c_21));
  t = set_config_0_0(t);
  t = not_null(a_21);
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  if(((e_21 != NULL) && (e_21 != t)))
    _fail(t);
  else
    e_21 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_21));
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm f_21 = NULL;
  if(((f_21 != NULL) && (f_21 != t)))
    _fail(t);
  else
    f_21 = t;
  t = term_z_37;
  t = set_config_0_0(t);
  t = term_a_38;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, i_3, j_3, t);
      ;
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
      {
        ATerm e_38 = t;
        int f_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_3, l_3, m_3, t);
            ;
            LocalPopChoice(f_38);
          }
        else
          {
            t = e_38;
            t = Option_3_0(n_3, o_3, p_3, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm h_21 = NULL;
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(h_21);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(h_21);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  if(((j_21 != NULL) && (j_21 != t)))
    _fail(t);
  else
    j_21 = t;
  if(((k_21 != NULL) && (k_21 != t)))
    _fail(t);
  else
    k_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_36, not_null(k_21));
  t = set_config_0_0(t);
  t = not_null(i_21);
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_21));
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_i_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm n_21 = NULL;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = term_k_38;
  t = set_config_0_0(t);
  t = term_l_38;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_m_38;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
      t = Option_3_0(t_3, u_3, v_3, t);
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm p_21 = NULL;
  if(((p_21 != NULL) && (p_21 != t)))
    _fail(t);
  else
    p_21 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(p_21);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(p_21);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  if(((q_21 != NULL) && (q_21 != t)))
    _fail(t);
  else
    q_21 = t;
  if(((r_21 != NULL) && (r_21 != t)))
    _fail(t);
  else
    r_21 = t;
  if(((s_21 != NULL) && (s_21 != t)))
    _fail(t);
  else
    s_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_36, not_null(s_21));
  t = set_config_0_0(t);
  t = not_null(q_21);
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  if(((u_21 != NULL) && (u_21 != t)))
    _fail(t);
  else
    u_21 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_21));
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = term_p_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm q_38 = t;
  int r_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(r_38);
    }
  else
    {
      t = q_38;
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_21 != NULL) && (v_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_21 = ATgetArgument(t, 0);
      if(((w_21 != NULL) && (w_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_21 != NULL) && (x_21 != t)))
    _fail(t);
  else
    x_21 = t;
  if(((y_21 != NULL) && (y_21 != t)))
    _fail(t);
  else
    y_21 = t;
  t = not_null(v_21);
  {
    ATerm u_38 = t;
    int v_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(v_38);
      }
    else
      {
        t = u_38;
        t = (ATerm) ATempty;
      }
    if(((z_21 != NULL) && (z_21 != t)))
      _fail(t);
    else
      z_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), not_null(z_21));
    t = conc_0_0(t);
    if(((a_22 != NULL) && (a_22 != t)))
      _fail(t);
    else
      a_22 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_w_38, not_null(v_21), not_null(a_22));
    t = table_put_0_0(t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(d_22);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_22 != NULL) && (e_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_22 = ATgetFirst((ATermList) t);
          if(((f_22 != NULL) && (f_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(f_22);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_22 != NULL) && (g_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_22 = ATgetFirst((ATermList) t);
          if(((h_22 != NULL) && (h_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(e_22);
      if(((i_22 != NULL) && (i_22 != t)))
        _fail(t);
      else
        i_22 = t;
      t = not_null(g_22);
      if(((j_22 != NULL) && (j_22 != t)))
        _fail(t);
      else
        j_22 = t;
      t = not_null(h_22);
      if(((k_22 != NULL) && (k_22 != t)))
        _fail(t);
      else
        k_22 = t;
      t = not_null(d_22);
      if(((l_22 != NULL) && (l_22 != t)))
        _fail(t);
      else
        l_22 = t;
      t = not_null(i_22);
      t = h_0(t);
      t = not_null(l_22);
      if(((m_22 != NULL) && (m_22 != t)))
        _fail(t);
      else
        m_22 = t;
      t = not_null(j_22);
      t = i_0(t);
      if(((n_22 != NULL) && (n_22 != t)))
        _fail(t);
      else
        n_22 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(k_22)), not_null(n_22));
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  if(((o_22 != NULL) && (o_22 != t)))
    _fail(t);
  else
    o_22 = t;
  if(((p_22 != NULL) && (p_22 != t)))
    _fail(t);
  else
    p_22 = t;
  if(((q_22 != NULL) && (q_22 != t)))
    _fail(t);
  else
    q_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(q_22)));
  t = extend_config_0_0(t);
  t = not_null(o_22);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_3, a_4, b_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm r_22 = NULL;
  if(((r_22 != NULL) && (r_22 != t)))
    _fail(t);
  else
    r_22 = t;
  t = term_z_38;
  t = set_config_0_0(t);
  t = not_null(r_22);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_39;
  return(t);
}
ATerm asfix2abox_options_0_0 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0_0(t);
            ;
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            t = Option_3_0(c_4, d_4, e_4, t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  if(((t_22 != NULL) && (t_22 != t)))
    _fail(t);
  else
    t_22 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  if(((u_22 != NULL) && (u_22 != t)))
    _fail(t);
  else
    u_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_39), not_null(u_22)), term_f_39));
  t = printnl_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  t = not_null(s_22);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL;
  t = report_run_time_0_0(t);
  if(((v_22 != NULL) && (v_22 != t)))
    _fail(t);
  else
    v_22 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  if(((w_22 != NULL) && (w_22 != t)))
    _fail(t);
  else
    w_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, term_h_39), not_null(w_22)));
  t = printnl_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm x_22 = NULL;
  if(((x_22 != NULL) && (x_22 != t)))
    _fail(t);
  else
    x_22 = t;
  t = SSL_TicksToSeconds(not_null(x_22));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_22 != NULL) && (y_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_22 = ATgetArgument(t, 0);
      if(((z_22 != NULL) && (z_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(y_22), not_null(z_22));
        ;
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        t = SSL_addr(not_null(y_22), not_null(z_22));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm t)
{
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = t_82(t);
      ;
      LocalPopChoice(m_39);
    }
  else
    {
      t = l_39;
      {
        ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
        if(((b_23 != NULL) && (b_23 != t)))
          _fail(t);
        else
          b_23 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((c_23 != NULL) && (c_23 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              c_23 = ATgetFirst((ATermList) t);
            if(((d_23 != NULL) && (d_23 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              d_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(c_23);
        if(((e_23 != NULL) && (e_23 != t)))
          _fail(t);
        else
          e_23 = t;
        t = not_null(d_23);
        if(((g_23 != NULL) && (g_23 != t)))
          _fail(t);
        else
          g_23 = t;
        t = not_null(b_23);
        if(((h_23 != NULL) && (h_23 != t)))
          _fail(t);
        else
          h_23 = t;
        if(((i_23 != NULL) && (i_23 != t)))
          _fail(t);
        else
          i_23 = t;
        t = not_null(g_23);
        t = foldr_2_0(t_82, u_82, t);
        if(((j_23 != NULL) && (j_23 != t)))
          _fail(t);
        else
          j_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(j_23));
        t = u_82(t);
        if(((k_23 != NULL) && (k_23 != t)))
          _fail(t);
        else
          k_23 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t)
{
  ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  t = not_null(l_23);
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  t = SSL_explode_term(not_null(n_23));
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((o_23 != NULL) && (o_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_23);
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  t = not_null(o_23);
  t = foldr_2_0(r_80, s_80, t);
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(f_4, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_23 = ATgetArgument(t, 0);
      if(((s_23 != NULL) && (s_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(r_23), not_null(s_23));
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = SSL_gtr(not_null(r_23), not_null(s_23));
      }
    t = not_null(t_23);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
      if(((w_23 != NULL) && (w_23 != t)))
        _fail(t);
      else
        w_23 = t;
      if(match_cons(t, sym__2))
        {
          if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_23 = ATgetArgument(t, 0);
          if(((y_23 != NULL) && (y_23 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_23);
      if(((v_23 != NULL) && (v_23 != t)))
        _fail(t);
      else
        v_23 = t;
      t = not_null(y_23);
      if(((v_23 != NULL) && (v_23 != t)))
        _fail(t);
      else
        v_23 = t;
      t = not_null(w_23);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
    if(((z_23 != NULL) && (z_23 != t)))
      _fail(t);
    else
      z_23 = t;
    if(((a_24 != NULL) && (a_24 != t)))
      _fail(t);
    else
      a_24 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), term_i_6);
    t = geq_0_0(t);
    t = not_null(z_23);
    t = y_87(t);
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,h_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  t = run_time_0_0(t);
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  t = not_null(c_24);
  if(((e_24 != NULL) && (e_24 != t)))
    _fail(t);
  else
    e_24 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_39), not_null(d_24)), term_g_7), not_null(h_24)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_t_37;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm v_39 = t;
        int w_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(w_39);
          }
        else
          {
            t = v_39;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_92 (ATerm), ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      t = option_defined_1_0(i_4, t);
    }
  t = d_92(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_24 = NULL;
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = SSL_table_create(not_null(i_24));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm j_24 = NULL,k_24 = NULL;
  if(((j_24 != NULL) && (j_24 != t)))
    _fail(t);
  else
    j_24 = t;
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  t = term_a_40;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_a_40, term_b_40, not_null(j_24));
  t = table_put_0_0(t);
  t = not_null(k_24);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = SSL_table_destroy(not_null(o_24));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  if(((p_24 != NULL) && (p_24 != t)))
    _fail(t);
  else
    p_24 = t;
  t = SSL_exit(not_null(p_24));
  return(t);
}
ATerm long_description_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  if(((c_25 != NULL) && (c_25 != t)))
    _fail(t);
  else
    c_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_25 = ATgetFirst((ATermList) t);
      b_25 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
        t = not_null(a_25);
        if(((d_25 != NULL) && (d_25 != t)))
          _fail(t);
        else
          d_25 = t;
        t = not_null(b_25);
        if(((g_25 != NULL) && (g_25 != t)))
          _fail(t);
        else
          g_25 = t;
        t = not_null(c_25);
        if(((h_25 != NULL) && (h_25 != t)))
          _fail(t);
        else
          h_25 = t;
        t = not_null(g_25);
        if(((i_25 != NULL) && (i_25 != t)))
          _fail(t);
        else
          i_25 = t;
        if(((j_25 != NULL) && (j_25 != t)))
          _fail(t);
        else
          j_25 = t;
        t = g_0(t);
        if(((k_25 != NULL) && (k_25 != t)))
          _fail(t);
        else
          k_25 = t;
        t = not_null(j_25);
        if(((l_25 != NULL) && (l_25 != t)))
          _fail(t);
        else
          l_25 = t;
        t = not_null(d_25);
        t = f_0(t);
        if(((m_25 != NULL) && (m_25 != t)))
          _fail(t);
        else
          m_25 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(k_25)), not_null(m_25));
        if(((n_25 != NULL) && (n_25 != t)))
          _fail(t);
        else
          n_25 = t;
        t = not_null(i_25);
        {
          ATerm j_4 (ATerm t)
          {
            t = not_null(n_25);
            return(t);
          }
          t = reverse_acc_2_0(f_0, j_4, t);
          if(((o_25 != NULL) && (o_25 != t)))
            _fail(t);
          else
            o_25 = t;
        }
      }
    }
  else
    {
      ATerm p_25 = NULL,q_25 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(c_25);
      if(((p_25 != NULL) && (p_25 != t)))
        _fail(t);
      else
        p_25 = t;
      t = term_a_7;
      t = g_0(t);
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, k_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm a_69 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = SSLgetAnnotations(not_null(u_25));
  if(((r_25 != NULL) && (r_25 != t)))
    _fail(t);
  else
    r_25 = t;
  t = not_null(s_25);
  t = a_69(t);
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  if(((x_25 != NULL) && (x_25 != t)))
    _fail(t);
  else
    x_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_25)), not_null(r_25));
  if(((w_25 != NULL) && (w_25 != t)))
    _fail(t);
  else
    w_25 = t;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL;
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_26)), term_c_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_39;
      t = get_config_0_0(t);
      if(((y_25 != NULL) && (y_25 != t)))
        _fail(t);
      else
        y_25 = t;
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm l_4 (ATerm t)
        {
          ATerm m_4 (ATerm t)
          {
            if(((y_25 != NULL) && (y_25 != t)))
              _fail(t);
            else
              y_25 = t;
            return(t);
          }
          t = Program_1_0(m_4, t);
          return(t);
        }
        t = option_defined_1_0(l_4, t);
      }
    }
  {
    ATerm n_4 (ATerm t)
    {
      ATerm o_4 (ATerm t)
      {
        t = not_null(y_25);
        return(t);
      }
      t = short_description_1_0(o_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    t = term_f_40;
    t = echo_0_0(t);
    t = term_i_40;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(p_4, t);
    {
      ATerm q_4 (ATerm t)
      {
        ATerm b_26 = NULL,c_26 = NULL;
        if(((b_26 != NULL) && (b_26 != t)))
          _fail(t);
        else
          b_26 = t;
        {
          ATerm r_4 (ATerm t)
          {
            t = not_null(y_25);
            return(t);
          }
          t = long_description_1_0(r_4, t);
          if(((c_26 != NULL) && (c_26 != t)))
            _fail(t);
          else
            c_26 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(c_26)), term_j_40);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(q_4, t);
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
  ATerm k_40 = t;
  int l_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(l_40);
    }
  else
    {
      t = k_40;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_26 = ATgetArgument(t, 0);
      if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = SSL_printnl(not_null(d_26), not_null(e_26));
  t = not_null(f_26);
  return(t);
}
ATerm Undefined_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  if(((j_26 != NULL) && (j_26 != t)))
    _fail(t);
  else
    j_26 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((h_26 != NULL) && (h_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = SSLgetAnnotations(not_null(j_26));
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = not_null(h_26);
  t = b_69(t);
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_26)), not_null(g_26));
  if(((l_26 != NULL) && (l_26 != t)))
    _fail(t);
  else
    l_26 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm n_26 (ATerm t)
  {
    ATerm m_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_76, _id, t);
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = m_40;
        t = Cons_2_0(_id, n_26, t);
      }
    return(t);
  }
  t = n_26(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  t = fetch_1_0(y_92, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(p_26);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_26 != NULL) && (q_26 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_26 = ATgetFirst((ATermList) t);
          if(((r_26 != NULL) && (r_26 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_26);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,x_26 = NULL;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  if(((t_26 != NULL) && (t_26 != t)))
    _fail(t);
  else
    t_26 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        {
          ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
          if(((u_26 != NULL) && (u_26 != t)))
            _fail(t);
          else
            u_26 = t;
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
          t = not_null(u_26);
          if(((w_26 != NULL) && (w_26 != t)))
            _fail(t);
          else
            w_26 = t;
          t = (ATerm) ATinsert(ATempty, not_null(w_26));
        }
      }
    if(((x_26 != NULL) && (x_26 != t)))
      _fail(t);
    else
      x_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_5, not_null(x_26));
    t = printnl_0_0(t);
    t = not_null(s_26);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_39;
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
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm y_26 = NULL;
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  t = SSL_implode_string(not_null(y_26));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
        if(((a_27 != NULL) && (a_27 != t)))
          _fail(t);
        else
          a_27 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_27 != NULL) && (b_27 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_27 = ATgetFirst((ATermList) t);
            if(((c_27 != NULL) && (c_27 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(b_27);
        if(((d_27 != NULL) && (d_27 != t)))
          _fail(t);
        else
          d_27 = t;
        t = not_null(c_27);
        if(((e_27 != NULL) && (e_27 != t)))
          _fail(t);
        else
          e_27 = t;
        t = not_null(a_27);
        if(((f_27 != NULL) && (f_27 != t)))
          _fail(t);
        else
          f_27 = t;
        t = not_null(d_27);
        {
          ATerm s_4 (ATerm t)
          {
            t = not_null(e_27);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_4, t);
          if(((g_27 != NULL) && (g_27 != t)))
            _fail(t);
          else
            g_27 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = not_null(i_27);
  if(((k_27 != NULL) && (k_27 != t)))
    _fail(t);
  else
    k_27 = t;
  t = SSL_explode_term(not_null(k_27));
  if(match_cons(t, sym__2))
    {
      ATerm u_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(j_27);
  if(((m_27 != NULL) && (m_27 != t)))
    _fail(t);
  else
    m_27 = t;
  t = not_null(l_27);
  t = concat_0_0(t);
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm o_27 (ATerm t)
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, o_27, t);
        ;
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = Nil_0_0(t);
        t = t_76(t);
      }
    return(t);
  }
  t = o_27(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_27 = ATgetArgument(t, 0);
      if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((r_27 != NULL) && (r_27 != t)))
    _fail(t);
  else
    r_27 = t;
  t = not_null(p_27);
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(q_27);
      return(t);
    }
    t = at_end_1_0(t_4, t);
    if(((s_27 != NULL) && (s_27 != t)))
      _fail(t);
    else
      s_27 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm t_27 = NULL;
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = SSL_explode_string(not_null(t_27));
  return(t);
}
ATerm _2_0 (ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL;
  if(((g_28 != NULL) && (g_28 != t)))
    _fail(t);
  else
    g_28 = t;
  if(match_cons(t, sym__2))
    {
      if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_27 = ATgetArgument(t, 0);
      if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((h_28 != NULL) && (h_28 != t)))
    _fail(t);
  else
    h_28 = t;
  t = SSLgetAnnotations(not_null(g_28));
  if(((y_27 != NULL) && (y_27 != t)))
    _fail(t);
  else
    y_27 = t;
  t = not_null(z_27);
  t = f_59(t);
  if(((b_28 != NULL) && (b_28 != t)))
    _fail(t);
  else
    b_28 = t;
  t = not_null(a_28);
  t = g_59(t);
  if(((f_28 != NULL) && (f_28 != t)))
    _fail(t);
  else
    f_28 = t;
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(b_28), not_null(f_28)), not_null(y_27));
  if(((i_28 != NULL) && (i_28 != t)))
    _fail(t);
  else
    i_28 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL;
  if(((k_28 != NULL) && (k_28 != t)))
    _fail(t);
  else
    k_28 = t;
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  t = h_72(t);
  if(((m_28 != NULL) && (m_28 != t)))
    _fail(t);
  else
    m_28 = t;
  t = not_null(l_28);
  if(((n_28 != NULL) && (n_28 != t)))
    _fail(t);
  else
    n_28 = t;
  if(((o_28 != NULL) && (o_28 != t)))
    _fail(t);
  else
    o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_28)), not_null(m_28)));
  t = printnl_0_0(t);
  t = not_null(k_28);
  return(t);
}
ATerm map_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm p_28 (ATerm t)
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = Cons_2_0(c_76, p_28, t);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm q_28 = NULL;
  if(((q_28 != NULL) && (q_28 != t)))
    _fail(t);
  else
    q_28 = t;
  t = SSL_is_string(not_null(q_28));
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm m_29 (ATerm v_28, ATerm w_28, ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
  t = not_null(v_28);
  if(((x_28 != NULL) && (x_28 != t)))
    _fail(t);
  else
    x_28 = t;
  t = not_null(w_28);
  if(((y_28 != NULL) && (y_28 != t)))
    _fail(t);
  else
    y_28 = t;
  t = not_null(x_28);
  {
    ATerm b_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_41);
      }
    else
      {
        t = b_41;
        t = debug_1_0(v_4, t);
        _fail(t);
      }
    if(((z_28 != NULL) && (z_28 != t)))
      _fail(t);
    else
      z_28 = t;
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_d_41;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      {
        ATerm g_41 = t;
        int h_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_4, t);
            ;
            LocalPopChoice(h_41);
          }
        else
          {
            t = g_41;
            {
              ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
              if(((a_29 != NULL) && (a_29 != t)))
                _fail(t);
              else
                a_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_29 = ATgetArgument(t, 0);
                  {
                    ATerm d_29 = NULL;
                    t = not_null(b_29);
                    if(((d_29 != NULL) && (d_29 != t)))
                      _fail(t);
                    else
                      d_29 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_29 = ATgetArgument(t, 0);
                      t = m_29(not_null(b_29), not_null(a_29), t);
                    }
                  else
                    {
                      ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((b_29 != NULL) && (b_29 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            b_29 = ATgetArgument(t, 0);
                          if(((c_29 != NULL) && (c_29 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            c_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(b_29);
                      if(((e_29 != NULL) && (e_29 != t)))
                        _fail(t);
                      else
                        e_29 = t;
                      t = not_null(c_29);
                      if(((f_29 != NULL) && (f_29 != t)))
                        _fail(t);
                      else
                        f_29 = t;
                      t = not_null(a_29);
                      if(((g_29 != NULL) && (g_29 != t)))
                        _fail(t);
                      else
                        g_29 = t;
                      if(((h_29 != NULL) && (h_29 != t)))
                        _fail(t);
                      else
                        h_29 = t;
                      t = not_null(e_29);
                      t = eval_config_0_0(t);
                      if(((i_29 != NULL) && (i_29 != t)))
                        _fail(t);
                      else
                        i_29 = t;
                      t = not_null(h_29);
                      if(((j_29 != NULL) && (j_29 != t)))
                        _fail(t);
                      else
                        j_29 = t;
                      t = not_null(f_29);
                      t = eval_config_0_0(t);
                      if(((k_29 != NULL) && (k_29 != t)))
                        _fail(t);
                      else
                        k_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), not_null(k_29));
                      t = conc_strings_0_0(t);
                      if(((l_29 != NULL) && (l_29 != t)))
                        _fail(t);
                      else
                        l_29 = t;
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
  ATerm n_29 = NULL;
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_38, not_null(n_29));
  t = table_get_0_0(t);
  {
    ATerm w_4 (ATerm t)
    {
      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
      t = eval_config_0_0(t);
      if(((t_29 != NULL) && (t_29 != t)))
        _fail(t);
      else
        t_29 = t;
      if(((u_29 != NULL) && (u_29 != t)))
        _fail(t);
      else
        u_29 = t;
      if(((v_29 != NULL) && (v_29 != t)))
        _fail(t);
      else
        v_29 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_38, not_null(n_29), not_null(v_29));
      t = table_put_0_0(t);
      t = not_null(t_29);
      return(t);
    }
    t = try_1_0(w_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_86(t);
      ;
      LocalPopChoice(j_41);
    }
  else
    {
      t = i_41;
    }
  return(t);
}
ATerm x_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_l_41;
  t = set_config_0_0(t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = term_m_41;
  return(t);
}
ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm w_29 = NULL;
  if(((w_29 != NULL) && (w_29 != t)))
    _fail(t);
  else
    w_29 = t;
  t = term_l_41;
  t = set_config_0_0(t);
  t = term_o_41;
  t = set_config_0_0(t);
  t = term_p_41;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_q_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(s_41);
    }
  else
    {
      t = r_41;
      t = Option_3_0(a_5, b_5, c_5, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_29 != NULL) && (x_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_29 = ATgetArgument(t, 0);
      if(((y_29 != NULL) && (y_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(x_29), not_null(y_29));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((a_30 != NULL) && (a_30 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_30 = ATgetArgument(t, 0);
      if(((b_30 != NULL) && (b_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_30 = ATgetArgument(t, 1);
      if(((c_30 != NULL) && (c_30 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        c_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  if(((e_30 != NULL) && (e_30 != t)))
    _fail(t);
  else
    e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_30), not_null(b_30));
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = (ATerm) ATempty;
      }
    if(((f_30 != NULL) && (f_30 != t)))
      _fail(t);
    else
      f_30 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(a_30), not_null(b_30), (ATerm) ATinsert(CheckATermList(not_null(f_30)), not_null(c_30)));
    t = table_put_0_0(t);
    t = not_null(d_30);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,k_30 = NULL;
  if(((g_30 != NULL) && (g_30 != t)))
    _fail(t);
  else
    g_30 = t;
  t = term_a_7;
  t = d_94(t);
  if(((k_30 != NULL) && (k_30 != t)))
    _fail(t);
  else
    k_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_40, term_h_40, not_null(k_30));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  if(((n_30 != NULL) && (n_30 != t)))
    _fail(t);
  else
    n_30 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(n_30);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_30 != NULL) && (o_30 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_30 = ATgetFirst((ATermList) t);
          if(((p_30 != NULL) && (p_30 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_30);
      if(((q_30 != NULL) && (q_30 != t)))
        _fail(t);
      else
        q_30 = t;
      t = not_null(p_30);
      if(((r_30 != NULL) && (r_30 != t)))
        _fail(t);
      else
        r_30 = t;
      t = not_null(n_30);
      if(((s_30 != NULL) && (s_30 != t)))
        _fail(t);
      else
        s_30 = t;
      t = not_null(q_30);
      t = a_0(t);
      t = not_null(s_30);
      if(((t_30 != NULL) && (t_30 != t)))
        _fail(t);
      else
        t_30 = t;
      t = term_a_7;
      t = b_0(t);
      if(((u_30 != NULL) && (u_30 != t)))
        _fail(t);
      else
        u_30 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_30)), not_null(u_30));
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm w_30 = NULL;
  if(((w_30 != NULL) && (w_30 != t)))
    _fail(t);
  else
    w_30 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(w_30);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(w_30);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(w_30);
        }
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_v_41;
  t = set_config_0_0(t);
  t = term_w_41;
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_x_41;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_30 != NULL) && (x_30 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_30 = ATgetFirst((ATermList) t);
      if(((y_30 != NULL) && (y_30 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        y_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(y_30)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_30)));
  return(t);
}
ATerm Cons_2_0 (ATerm u_63 (ATerm), ATerm v_63 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
  if(((e_31 != NULL) && (e_31 != t)))
    _fail(t);
  else
    e_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_31 != NULL) && (a_31 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_31 = ATgetFirst((ATermList) t);
      if(((b_31 != NULL) && (b_31 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((f_31 != NULL) && (f_31 != t)))
    _fail(t);
  else
    f_31 = t;
  t = SSLgetAnnotations(not_null(e_31));
  if(((z_30 != NULL) && (z_30 != t)))
    _fail(t);
  else
    z_30 = t;
  t = not_null(a_31);
  t = u_63(t);
  if(((c_31 != NULL) && (c_31 != t)))
    _fail(t);
  else
    c_31 = t;
  t = not_null(b_31);
  t = v_63(t);
  if(((d_31 != NULL) && (d_31 != t)))
    _fail(t);
  else
    d_31 = t;
  if(((h_31 != NULL) && (h_31 != t)))
    _fail(t);
  else
    h_31 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_31)), not_null(c_31)), not_null(z_30));
  if(((g_31 != NULL) && (g_31 != t)))
    _fail(t);
  else
    g_31 = t;
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
  ATerm i_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_31 != NULL) && (i_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_31 = ATgetArgument(t, 0);
      if(((j_31 != NULL) && (j_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_38, not_null(i_31), not_null(j_31));
  t = table_put_0_0(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  if(((l_31 != NULL) && (l_31 != t)))
    _fail(t);
  else
    l_31 = t;
  if(((m_31 != NULL) && (m_31 != t)))
    _fail(t);
  else
    m_31 = t;
  if(((n_31 != NULL) && (n_31 != t)))
    _fail(t);
  else
    n_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, not_null(n_31));
  t = set_config_0_0(t);
  t = not_null(l_31);
  if(((o_31 != NULL) && (o_31 != t)))
    _fail(t);
  else
    o_31 = t;
  if(((p_31 != NULL) && (p_31 != t)))
    _fail(t);
  else
    p_31 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_31));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_94 (ATerm), ATerm t)
{
  ATerm k_31 = NULL;
  if(((k_31 != NULL) && (k_31 != t)))
    _fail(t);
  else
    k_31 = t;
  {
    ATerm g_5 (ATerm t)
    {
      t = term_y_41;
      t = b_94(t);
      return(t);
    }
    t = try_1_0(g_5, t);
    t = not_null(k_31);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = t;
            int c_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(c_42);
              }
            else
              {
                t = b_42;
                t = b_94(t);
                t = Cons_2_0(_id, i_5, t);
              }
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(h_5, i_5, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL;
  if(((r_31 != NULL) && (r_31 != t)))
    _fail(t);
  else
    r_31 = t;
  if(match_cons(t, sym__3))
    {
      if(((s_31 != NULL) && (s_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_31 = ATgetArgument(t, 0);
      if(((t_31 != NULL) && (t_31 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_31 = ATgetArgument(t, 1);
      if(((u_31 != NULL) && (u_31 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        u_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(s_31), not_null(t_31), not_null(u_31));
  t = not_null(r_31);
  return(t);
}
ATerm d_32 (ATerm y_31, ATerm t)
{
  ATerm z_31 = NULL;
  t = not_null(y_31);
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  t = not_null(y_31);
  {
    ATerm d_42 = t;
    int e_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_39;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(e_42);
      }
    else
      {
        t = d_42;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(z_31);
    t = system_usage_0_0(t);
    t = term_t_37;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,c_32 = NULL;
  if(((w_31 != NULL) && (w_31 != t)))
    _fail(t);
  else
    w_31 = t;
  t = term_f_42;
  t = table_put_0_0(t);
  t = not_null(w_31);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm g_42 = t;
      int h_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_94(t);
          ;
          LocalPopChoice(h_42);
        }
      else
        {
          t = g_42;
          {
            ATerm i_42 = t;
            int j_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(j_42);
              }
            else
              {
                t = i_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_5, t);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm k_42 = t;
        int l_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL;
            if(((a_32 != NULL) && (a_32 != t)))
              _fail(t);
            else
              a_32 = t;
            {
              ATerm m_42 = t;
              int n_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_32(not_null(a_32), t);
                  ;
                  LocalPopChoice(n_42);
                }
              else
                {
                  t = m_42;
                  {
                    ATerm b_32 = NULL;
                    t = not_null(a_32);
                    if(((b_32 != NULL) && (b_32 != t)))
                      _fail(t);
                    else
                      b_32 = t;
                    t = term_k_41;
                    t = get_config_0_0(t);
                    t = not_null(b_32);
                    t = system_about_0_0(t);
                    t = term_t_37;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(l_42);
          }
        else
          {
            t = k_42;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  if(((x_31 != NULL) && (x_31 != t)))
                    _fail(t);
                  else
                    x_31 = t;
                  return(t);
                }
                t = Undefined_1_0(m_5, t);
                return(t);
              }
              t = option_defined_1_0(l_5, t);
              t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_31)), term_o_42));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_i_6;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(k_5, t);
      if(((c_32 != NULL) && (c_32 != t)))
        _fail(t);
      else
        c_32 = t;
      t = term_g_40;
      t = table_destroy_0_0(t);
      t = not_null(c_32);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm t)
{
  t = parse_options_1_0(f_92, t);
  t = store_options_0_0(t);
  t = h_92(t);
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_92, t);
        ;
        LocalPopChoice(q_42);
      }
    else
      {
        t = p_42;
        {
          ATerm r_42 = t;
          int s_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(s_42);
            }
          else
            {
              t = r_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  t = option_wrap_4_0(j_92, default_usage_0_0, _id, k_92, t);
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
