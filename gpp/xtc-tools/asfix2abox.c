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
ATerm term_k_41;
ATerm term_z_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_d_40;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_c_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_c_30;
ATerm term_x_29;
ATerm term_c_29;
ATerm term_t_28;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_f_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_t_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_w_23;
ATerm term_f_23;
ATerm term_q_22;
ATerm term_z_21;
ATerm term_y_21;
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
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_o_20;
ATerm term_g_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_q_19;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_x_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_n_12;
ATerm term_m_11;
ATerm term_s_10;
ATerm term_t_9;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
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
ATerm term_r_6;
ATerm term_m_6;
ATerm term_l_6;
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
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
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
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_7, term_c_6, term_q_7);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_7, term_t_9, term_s_10);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_12, term_y_13, term_z_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_g_14, term_x_14);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_16, term_j_16, term_c_17);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_18, term_b_18, term_c_18);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_z_19, term_g_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_21, term_g_21, term_h_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_21, term_m_21, term_n_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_21, term_r_21, term_s_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_z_21, term_q_22);
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_23, term_o_24, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_24, term_w_24, term_x_24);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_25, term_n_25, term_o_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_26, term_i_26, term_j_26);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_26, term_m_26, term_t_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_27, term_d_27, term_f_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_27, term_t_28, term_c_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_30, term_l_30, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_30, term_p_30, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_30, term_t_30, term_u_30);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_30, term_x_30, term_y_30);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_31, term_b_31, term_c_31);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_31, term_f_31, term_g_31);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_31, term_j_31, term_k_31);
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_31, term_n_31, term_o_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_j_32);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym__2, term_c_32, term_q_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym__2, term_z_34, term_p_34);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_b_6, term_r_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym__2, term_y_36, term_a_7);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(sym__2, term_h_37, term_a_7);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_p_5, term_y_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(sym__2, term_b_39, term_c_39);
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_a_7);
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym__2, term_l_40, term_a_7);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_r_38, term_a_7);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__3, term_b_39, term_c_39, (ATerm) ATempty);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
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
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
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
ATerm asfix2abox_0_0 (ATerm);
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
ATerm asfix2abox_options_0_0 (ATerm);
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
  ATerm o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_7 != NULL) && (o_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_7 = ATgetArgument(t, 0);
      if(((p_7 != NULL) && (p_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_rename(not_null(o_7), not_null(p_7));
  return(t);
}
ATerm rename_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_8 (ATerm t_7, ATerm u_7, ATerm t)
  {
    ATerm v_7 = NULL,w_7 = NULL;
    t = not_null(t_7);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = not_null(u_7);
    if(((w_7 != NULL) && (w_7 != t)))
      _fail(t);
    else
      w_7 = t;
    t = n_0(t);
    if(!(match_cons(t, sym_stdout_0)))
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_7), term_r_5);
    t = copy_file_0_0(t);
    t = not_null(v_7);
    t = remove_file_0_0(t);
    t = term_r_5;
    return(t);
  }
  ATerm i_8 (ATerm x_7, ATerm y_7, ATerm t)
  {
    ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
    t = not_null(x_7);
    if(((z_7 != NULL) && (z_7 != t)))
      _fail(t);
    else
      z_7 = t;
    t = not_null(y_7);
    if(((a_8 != NULL) && (a_8 != t)))
      _fail(t);
    else
      a_8 = t;
    t = n_0(t);
    if(((b_8 != NULL) && (b_8 != t)))
      _fail(t);
    else
      b_8 = t;
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
                ATerm c_8 = NULL;
                if(((c_8 != NULL) && (c_8 != t)))
                  _fail(t);
                else
                  c_8 = t;
                if(((z_7 != NULL) && (z_7 != t)))
                  _fail(t);
                else
                  z_7 = t;
                t = not_null(c_8);
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = s_5;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), not_null(b_8));
      t = rename_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_8));
    }
    return(t);
  }
  ATerm d_8 = NULL,e_8 = NULL;
  if(((d_8 != NULL) && (d_8 != t)))
    _fail(t);
  else
    d_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_8 != NULL) && (e_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_5 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_8(not_null(e_8), not_null(d_8), t);
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
              t = i_8(not_null(e_8), not_null(d_8), t);
              ;
              LocalPopChoice(y_5);
            }
          else
            {
              t = x_5;
              {
                ATerm f_8 = NULL,g_8 = NULL;
                t = not_null(e_8);
                if(((f_8 != NULL) && (f_8 != t)))
                  _fail(t);
                else
                  f_8 = t;
                t = not_null(d_8);
                if(((g_8 != NULL) && (g_8 != t)))
                  _fail(t);
                else
                  g_8 = t;
                t = n_0(t);
                if(((f_8 != NULL) && (f_8 != t)))
                  _fail(t);
                else
                  f_8 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_8));
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
    t = term_z_5;
    return(t);
  }
  t = xtc_transform_1_0(f_0, t);
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm j_8 = NULL,k_8 = NULL;
  if(((j_8 != NULL) && (j_8 != t)))
    _fail(t);
  else
    j_8 = t;
  {
    ATerm o_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_8));
      t = xtc_parse_pp_table_0_0(t);
      t = rename_to_1_0(new_file_0_0, t);
      return(t);
    }
    t = xtc_temp_files_1_0(o_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        if(((k_8 != NULL) && (k_8 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          k_8 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = not_null(k_8);
    {
      ATerm p_0 (ATerm t)
      {
        ATerm q_0 (ATerm t)
        {
          t = term_a_6;
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
    ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
    if(((l_8 != NULL) && (l_8 != t)))
      _fail(t);
    else
      l_8 = t;
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), term_c_6);
    t = geq_0_0(t);
    t = not_null(l_8);
    t = h_81(t);
    return(t);
  }
  t = try_1_0(r_0, t);
  return(t);
}
ATerm modification_time_0_0 (ATerm t)
{
  ATerm o_8 = NULL;
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  t = SSL_modification_time(not_null(o_8));
  return(t);
}
ATerm add_extension_0_0 (ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_8 = ATgetArgument(t, 0);
      if(((q_8 != NULL) && (q_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_8)), term_d_6), not_null(p_8));
  t = concat_strings_0_0(t);
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  t = not_null(r_8);
  if(((t_8 != NULL) && (t_8 != t)))
    _fail(t);
  else
    t_8 = t;
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  if(((v_8 != NULL) && (v_8 != t)))
    _fail(t);
  else
    v_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), term_e_6);
  t = add_extension_0_0(t);
  t = file_exists_0_0(t);
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_8), not_null(s_8));
  if(((x_8 != NULL) && (x_8 != t)))
    _fail(t);
  else
    x_8 = t;
  t = _2_0(modification_time_0_0, modification_time_0_0, t);
  t = geq_0_0(t);
  t = not_null(x_8);
  t = Fst_0_0(t);
  {
    ATerm s_0 (ATerm t)
    {
      ATerm t_0 (ATerm t)
      {
        t = term_f_6;
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
  ATerm y_8 = NULL;
  if(((y_8 != NULL) && (y_8 != t)))
    _fail(t);
  else
    y_8 = t;
  t = error_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  t = not_null(y_8);
  return(t);
}
ATerm must_be_pp_0_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        t = term_l_6;
        return(t);
      }
      t = has_extension_1_0(u_0, t);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
        if(((z_8 != NULL) && (z_8 != t)))
          _fail(t);
        else
          z_8 = t;
        if(((a_9 != NULL) && (a_9 != t)))
          _fail(t);
        else
          a_9 = t;
        t = not_null(z_8);
        if(((b_9 != NULL) && (b_9 != t)))
          _fail(t);
        else
          b_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_9)), term_m_6);
        t = fatal_error_0_0(t);
      }
    }
  return(t);
}
ATerm at_suffix_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm n_6 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = n_6;
        t = Cons_2_0(_id, c_9, t);
      }
    return(t);
  }
  t = c_9(t);
  return(t);
}
ATerm has_extension_1_0 (ATerm o_78 (ATerm), ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  if(((d_9 != NULL) && (d_9 != t)))
    _fail(t);
  else
    d_9 = t;
  t = o_78(t);
  t = explode_string_0_0(t);
  if(((e_9 != NULL) && (e_9 != t)))
    _fail(t);
  else
    e_9 = t;
  t = not_null(d_9);
  if(((f_9 != NULL) && (f_9 != t)))
    _fail(t);
  else
    f_9 = t;
  t = explode_string_0_0(t);
  {
    ATerm v_0 (ATerm t)
    {
      if(((e_9 != NULL) && (e_9 != t)))
        _fail(t);
      else
        e_9 = t;
      return(t);
    }
    t = at_suffix_1_0(v_0, t);
    t = not_null(f_9);
  }
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm p_6 = t;
  int q_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        t = term_r_6;
        return(t);
      }
      t = has_extension_1_0(w_0, t);
      ;
      LocalPopChoice(q_6);
    }
  else
    {
      t = p_6;
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
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm g_9 = NULL;
      t = ensure_pp_table_parsed_0_0(t);
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_9)), term_u_6);
      return(t);
    }
    t = map_1_0(x_0, t);
    t = concat_0_0(t);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = term_v_6;
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
ATerm subt_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((h_9 != NULL) && (h_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_9 = ATgetArgument(t, 0);
      if(((i_9 != NULL) && (i_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(h_9), not_null(i_9));
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = w_6;
        t = SSL_subtr(not_null(h_9), not_null(i_9));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL;
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
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
    if(((l_9 != NULL) && (l_9 != t)))
      _fail(t);
    else
      l_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), term_i_6);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_9)), term_b_6);
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL;
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  t = term_a_7;
  t = pass_verbose_0_0(t);
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = not_null(n_9);
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = term_a_7;
  t = create_pp_table_args_0_0(t);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  t = not_null(p_9);
  if(((r_9 != NULL) && (r_9 != t)))
    _fail(t);
  else
    r_9 = t;
  t = term_a_7;
  t = pass_conservative_0_0(t);
  if(((s_9 != NULL) && (s_9 != t)))
    _fail(t);
  else
    s_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_9)), not_null(q_9)), not_null(o_9));
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_9 = NULL,x_9 = NULL;
      t = not_null(u_9);
      if(((w_9 != NULL) && (w_9 != t)))
        _fail(t);
      else
        w_9 = t;
      t = term_b_7;
      t = ReadFromFile_0_0(t);
      if(((x_9 != NULL) && (x_9 != t)))
        _fail(t);
      else
        x_9 = t;
    }
  else
    {
      ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((v_9 != NULL) && (v_9 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(v_9);
      if(((y_9 != NULL) && (y_9 != t)))
        _fail(t);
      else
        y_9 = t;
      t = not_null(u_9);
      if(((z_9 != NULL) && (z_9 != t)))
        _fail(t);
      else
        z_9 = t;
      t = not_null(y_9);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((a_10 != NULL) && (a_10 != t)))
        _fail(t);
      else
        a_10 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if(match_cons(c_7, sym_Stream_1))
        {
          if(((b_10 != NULL) && (b_10 != ATgetArgument(c_7, 0))))
            _fail(ATgetArgument(c_7, 0));
          else
            b_10 = ATgetArgument(c_7, 0);
        }
      else
        _fail(t);
      if(((c_10 != NULL) && (c_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(b_10), not_null(c_10));
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_10));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_65 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_10 = ATgetArgument(t, 0);
      if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_10);
  if(((h_10 != NULL) && (h_10 != t)))
    _fail(t);
  else
    h_10 = t;
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), term_d_7);
  t = open_stream_0_0(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_10), not_null(g_10));
  t = y_65(t);
  t = fclose_0_0(t);
  t = not_null(g_10);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = xtc_new_file_0_0(t);
  if(((n_10 != NULL) && (n_10 != t)))
    _fail(t);
  else
    n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_10), not_null(l_10));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(n_10);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_10));
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
  ATerm o_10 = NULL;
  if(((o_10 != NULL) && (o_10 != t)))
    _fail(t);
  else
    o_10 = t;
  t = SSL_close_file(not_null(o_10));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_10 != NULL) && (p_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_10 = ATgetArgument(t, 0);
      if(((q_10 != NULL) && (q_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(p_10), not_null(q_10));
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
  ATerm r_10 = NULL;
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = SSL_int_to_string(not_null(r_10));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(((t_10 != NULL) && (t_10 != t)))
    _fail(t);
  else
    t_10 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      u_10 = ATgetArgument(t, 0);
      {
        ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
        t = not_null(u_10);
        if(((x_10 != NULL) && (x_10 != t)))
          _fail(t);
        else
          x_10 = t;
        t = not_null(t_10);
        if(((y_10 != NULL) && (y_10 != t)))
          _fail(t);
        else
          y_10 = t;
        t = not_null(x_10);
        t = int_to_string_0_0(t);
        if(((z_10 != NULL) && (z_10 != t)))
          _fail(t);
        else
          z_10 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(z_10)), term_e_7);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((u_10 != NULL) && (u_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            u_10 = ATgetArgument(t, 0);
          if(((v_10 != NULL) && (v_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_10 = ATgetArgument(t, 1);
          if(((w_10 != NULL) && (w_10 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            w_10 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(u_10);
      if(((a_11 != NULL) && (a_11 != t)))
        _fail(t);
      else
        a_11 = t;
      t = not_null(v_10);
      if(((b_11 != NULL) && (b_11 != t)))
        _fail(t);
      else
        b_11 = t;
      t = not_null(w_10);
      if(((c_11 != NULL) && (c_11 != t)))
        _fail(t);
      else
        c_11 = t;
      t = not_null(t_10);
      if(((d_11 != NULL) && (d_11 != t)))
        _fail(t);
      else
        d_11 = t;
      t = not_null(b_11);
      t = int_to_string_0_0(t);
      if(((e_11 != NULL) && (e_11 != t)))
        _fail(t);
      else
        e_11 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_11)), term_h_7), not_null(e_11)), term_g_7), not_null(a_11));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_70 (ATerm), ATerm t)
{
  ATerm f_11 = NULL;
  ATerm a_1 (ATerm t)
  {
    t = e_70(t);
    if(((f_11 != NULL) && (f_11 != t)))
      _fail(t);
    else
      f_11 = t;
    return(t);
  }
  t = fetch_1_0(a_1, t);
  t = not_null(f_11);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_11 = NULL;
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  {
    ATerm i_7 = t;
    int j_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_31), term_l_31), term_h_31), term_d_31), term_z_30), term_v_30), term_r_30), term_n_30), term_x_29), term_o_27), term_b_27), term_k_26), term_z_25), term_y_24), term_q_24), term_f_23), term_t_21), term_p_21), term_k_21), term_e_21), term_o_20), term_q_19), term_f_17), term_h_16), term_a_14), term_m_11), term_r_7), term_m_7);
        {
          ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm q_31 = ATgetArgument(t, 0);
                if(((g_11 != NULL) && (g_11 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_11 = ATgetArgument(t, 1);
                {
                  ATerm r_31 = ATgetArgument(t, 2);
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
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(g_11));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm h_11 = NULL;
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm s_31 = ATgetArgument(t, 0);
          if(((i_11 != NULL) && (i_11 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_11 = ATgetArgument(t, 1);
          {
            ATerm t_31 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(i_11);
      {
        ATerm u_31 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_31;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((j_11 != NULL) && (j_11 != t)))
          _fail(t);
        else
          j_11 = t;
        if(((k_11 != NULL) && (k_11 != t)))
          _fail(t);
        else
          k_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_11)), term_w_31));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(c_1, t);
    t = not_null(h_11);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  t = SSL_waitpid(not_null(l_11));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm l_64 (ATerm), ATerm m_64 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = fork_0_0(t);
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_11 = NULL;
        if(((p_11 != NULL) && (p_11 != t)))
          _fail(t);
        else
          p_11 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(n_11);
        t = l_64(t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_11), not_null(n_11));
        t = m_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm q_11 = NULL;
  ATerm d_1 (ATerm t)
  {
    ATerm r_11 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_11 = ATgetArgument(t, 0);
        if(((q_11 != NULL) && (q_11 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          q_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(r_11);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm z_31 = ATgetArgument(t, 0);
        if(((ATgetType(z_31) != AT_INT) || (ATgetInt((ATermInt) z_31) != 0)))
          _fail(t);
        {
          ATerm a_32 = ATgetArgument(t, 1);
        }
        {
          ATerm b_32 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(q_11);
    return(t);
  }
  t = fork_2_0(n_64, d_1, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_11 = ATgetArgument(t, 0);
      if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_1 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(e_1, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm u_11 = NULL;
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  t = SSL_table_keys(not_null(u_11));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = table_keys_0_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
      if(((w_11 != NULL) && (w_11 != t)))
        _fail(t);
      else
        w_11 = t;
      if(((x_11 != NULL) && (x_11 != t)))
        _fail(t);
      else
        x_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), not_null(w_11));
      t = table_get_0_0(t);
      if(((y_11 != NULL) && (y_11 != t)))
        _fail(t);
      else
        y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_11), not_null(y_11));
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
    ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
    if(((z_11 != NULL) && (z_11 != t)))
      _fail(t);
    else
      z_11 = t;
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_12), term_b_31);
    t = geq_0_0(t);
    t = not_null(z_11);
    t = k_81(t);
    return(t);
  }
  t = try_1_0(g_1, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
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
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, not_null(e_12));
  t = printnl_0_0(t);
  t = not_null(c_12);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  if(((f_12 != NULL) && (f_12 != t)))
    _fail(t);
  else
    f_12 = t;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_32, (ATerm) ATmakeAppl(sym_Tool_1, not_null(f_12)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_32 = ATgetFirst((ATermList) t);
      if(match_cons(d_32, sym__2))
        {
          if(((h_12 != NULL) && (h_12 != ATgetArgument(d_32, 0))))
            _fail(ATgetArgument(d_32, 0));
          else
            h_12 = ATgetArgument(d_32, 0);
          if(((i_12 != NULL) && (i_12 != ATgetArgument(d_32, 1))))
            _fail(ATgetArgument(d_32, 1));
          else
            i_12 = ATgetArgument(d_32, 1);
        }
      else
        _fail(t);
      {
        ATerm e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(i_12);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_12 = ATgetArgument(t, 0);
      if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_32, (ATerm) ATmakeAppl(sym_Tool_1, not_null(j_12)));
  t = table_get_0_0(t);
  {
    ATerm h_1 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((k_12 != NULL) && (k_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            k_12 = ATgetArgument(t, 0);
          if(((m_12 != NULL) && (m_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            m_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(h_1, t);
    t = not_null(m_12);
  }
  return(t);
}
ATerm filter_1_0 (ATerm l_77 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = filter_1_0(l_77, t);
              return(t);
            }
            t = Cons_2_0(l_77, i_1, t);
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            {
              ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
              if(((o_12 != NULL) && (o_12 != t)))
                _fail(t);
              else
                o_12 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((p_12 != NULL) && (p_12 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    p_12 = ATgetFirst((ATermList) t);
                  if(((q_12 != NULL) && (q_12 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    q_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(q_12);
              if(((r_12 != NULL) && (r_12 != t)))
                _fail(t);
              else
                r_12 = t;
              t = filter_1_0(l_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm f_79 (ATerm), ATerm t)
{
  ATerm s_12 (ATerm t)
  {
    ATerm j_1 (ATerm t)
    {
      t = f_79(t);
      t = s_12(t);
      return(t);
    }
    t = try_1_0(j_1, t);
    return(t);
  }
  t = s_12(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  {
    ATerm k_1 (ATerm t)
    {
      t = term_k_32;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm l_32 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_32;
          }
      }
      return(t);
    }
    t = repeat_1_0(k_1, t);
    t = not_null(t_12);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
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
  if(((w_12 != NULL) && (w_12 != t)))
    _fail(t);
  else
    w_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATempty, not_null(w_12)));
  t = printnl_0_0(t);
  t = not_null(u_12);
  return(t);
}
ATerm say_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm x_12 = NULL;
  if(((x_12 != NULL) && (x_12 != t)))
    _fail(t);
  else
    x_12 = t;
  t = o_65(t);
  t = debug_0_0(t);
  t = not_null(x_12);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm j_81 (ATerm), ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
    if(((y_12 != NULL) && (y_12 != t)))
      _fail(t);
    else
      y_12 = t;
    if(((z_12 != NULL) && (z_12 != t)))
      _fail(t);
    else
      z_12 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((a_13 != NULL) && (a_13 != t)))
      _fail(t);
    else
      a_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), term_r_21);
    t = geq_0_0(t);
    t = not_null(y_12);
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
    ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
    if(((b_13 != NULL) && (b_13 != t)))
      _fail(t);
    else
      b_13 = t;
    if(((c_13 != NULL) && (c_13 != t)))
      _fail(t);
    else
      c_13 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_13), term_y_13);
    t = geq_0_0(t);
    t = not_null(b_13);
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
  ATerm e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_13 = ATgetArgument(t, 0);
      if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((f_13 != NULL) && (f_13 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        f_13 = ATgetFirst((ATermList) t);
      if(((g_13 != NULL) && (g_13 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        g_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = a_74(t);
  {
    ATerm n_1 (ATerm t)
    {
      ATerm i_13 = NULL;
      if(((i_13 != NULL) && (i_13 != t)))
        _fail(t);
      else
        i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(i_13));
      t = z_73(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
    t = not_null(g_13);
  }
  return(t);
}
ATerm union_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_13 != NULL) && (k_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_13 = ATgetArgument(t, 0);
      if(((j_13 != NULL) && (j_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(k_13);
  {
    ATerm l_13 (ATerm t)
    {
      ATerm m_32 = t;
      int n_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(j_13);
          ;
          LocalPopChoice(n_32);
        }
      else
        {
          t = m_32;
          {
            ATerm o_32 = t;
            int p_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_1 (ATerm t)
                {
                  t = not_null(j_13);
                  return(t);
                }
                t = HdMember_p__2_0(v_73, o_1, t);
                t = l_13(t);
                ;
                LocalPopChoice(p_32);
              }
            else
              {
                t = o_32;
                t = Cons_2_0(_id, l_13, t);
              }
          }
        }
      return(t);
    }
    t = l_13(t);
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
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_13 = ATgetArgument(t, 0);
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_13 = ATgetArgument(t, 1);
      if(((o_13 != NULL) && (o_13 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
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
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), not_null(n_13));
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATempty;
      }
    if(((s_13 != NULL) && (s_13 != t)))
      _fail(t);
    else
      s_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(s_13), not_null(o_13));
    t = union_0_0(t);
    if(((t_13 != NULL) && (t_13 != t)))
      _fail(t);
    else
      t_13 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(m_13), not_null(n_13), not_null(t_13));
    t = set_0_0(t);
    t = not_null(p_13);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_13 != NULL) && (v_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_13 = ATgetArgument(t, 0);
      if(((u_13 != NULL) && (u_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(u_13);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm w_13 = NULL,x_13 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((w_13 != NULL) && (w_13 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            w_13 = ATgetArgument(t, 0);
          if(((x_13 != NULL) && (x_13 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(v_13), not_null(w_13), not_null(x_13));
      t = u_81(t);
      return(t);
    }
    t = map_1_0(p_1, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_14 (ATerm b_14, ATerm c_14, ATerm t)
  {
    ATerm d_14 = NULL;
    t = not_null(b_14);
    if(((d_14 != NULL) && (d_14 != t)))
      _fail(t);
    else
      d_14 = t;
    t = SSL_fclose(not_null(d_14));
    return(t);
  }
  ATerm l_14 (ATerm f_14, ATerm t)
  {
    ATerm h_14 = NULL;
    t = not_null(f_14);
    if(((h_14 != NULL) && (h_14 != t)))
      _fail(t);
    else
      h_14 = t;
    t = SSL_fclose(not_null(h_14));
    return(t);
  }
  ATerm i_14 = NULL,j_14 = NULL;
  if(((j_14 != NULL) && (j_14 != t)))
    _fail(t);
  else
    j_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_14 = ATgetArgument(t, 0);
      {
        ATerm s_32 = t;
        int t_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_14(not_null(i_14), not_null(j_14), t);
            ;
            LocalPopChoice(t_32);
          }
        else
          {
            t = s_32;
            t = l_14(not_null(j_14), t);
          }
      }
    }
  else
    {
      t = l_14(not_null(j_14), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm m_14 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(m_14));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_14 != NULL) && (n_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_14 = ATgetArgument(t, 0);
      if(((o_14 != NULL) && (o_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(n_14), not_null(o_14));
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(q_14));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL;
  t = SSL_stdin_stream();
  if(((r_14 != NULL) && (r_14 != t)))
    _fail(t);
  else
    r_14 = t;
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_14));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL;
  t = SSL_stdout_stream();
  if(((t_14 != NULL) && (t_14 != t)))
    _fail(t);
  else
    t_14 = t;
  if(((u_14 != NULL) && (u_14 != t)))
    _fail(t);
  else
    u_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_14));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  t = SSL_stderr_stream();
  if(((v_14 != NULL) && (v_14 != t)))
    _fail(t);
  else
    v_14 = t;
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_14));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm y_14 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(y_14);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(y_14);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(y_14);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL;
  if(((z_14 != NULL) && (z_14 != t)))
    _fail(t);
  else
    z_14 = t;
  if(((a_15 != NULL) && (a_15 != t)))
    _fail(t);
  else
    a_15 = t;
  t = not_null(z_14);
  if(((b_15 != NULL) && (b_15 != t)))
    _fail(t);
  else
    b_15 = t;
  t = SSL_explode_term(not_null(b_15));
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_32 = ATgetArgument(t, 1);
        if(((ATgetType(v_32) == AT_LIST) && !(ATisEmpty(v_32))))
          {
            if(((d_15 != NULL) && (d_15 != ATgetFirst((ATermList) v_32))))
              _fail(ATgetFirst((ATermList) v_32));
            else
              d_15 = ATgetFirst((ATermList) v_32);
            if(((c_15 != NULL) && (c_15 != (ATerm) ATgetNext((ATermList) v_32))))
              _fail((ATerm) ATgetNext((ATermList) v_32));
            else
              c_15 = (ATerm) ATgetNext((ATermList) v_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(d_15);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_32 = ATgetArgument(t, 0);
      ATerm x_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_1 (ATerm t)
              {
                ATerm e_15 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((e_15 != NULL) && (e_15 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_15 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(e_15);
                return(t);
              }
              t = _2_0(q_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
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
  ATerm i_15 = NULL,j_15 = NULL;
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
      if(((f_15 != NULL) && (f_15 != t)))
        _fail(t);
      else
        f_15 = t;
      if(((g_15 != NULL) && (g_15 != t)))
        _fail(t);
      else
        g_15 = t;
      t = not_null(f_15);
      if(((h_15 != NULL) && (h_15 != t)))
        _fail(t);
      else
        h_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), term_e_33);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm r_1 (ATerm t)
        {
          t = term_f_33;
          return(t);
        }
        t = debug_1_0(r_1, t);
        _fail(t);
      }
    }
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  t = read_from_stream_0_0(t);
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = not_null(i_15);
  t = fclose_0_0(t);
  t = not_null(j_15);
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_15), (ATerm) ATinsert(ATempty, term_g_33));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm h_33 = t;
  int i_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(i_33);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = h_33;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_33 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = l_33;
              }
            {
              ATerm s_1 (ATerm t)
              {
                t = term_m_33;
                return(t);
              }
              t = debug_1_0(s_1, t);
            }
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
            {
              ATerm t_1 (ATerm t)
              {
                t = term_n_33;
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
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(((m_15 != NULL) && (m_15 != t)))
    _fail(t);
  else
    m_15 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = term_o_33;
        return(t);
      }
      t = debug_1_0(v_1, t);
      return(t);
    }
    t = if_verbose5_1_0(u_1, t);
    {
      ATerm p_33 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_32, (ATerm) ATmakeAppl(sym_Imported_1, not_null(m_15)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = p_33;
        }
      if(((n_15 != NULL) && (n_15 != t)))
        _fail(t);
      else
        n_15 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_32, term_q_33, (ATerm) ATinsert(ATempty, not_null(m_15)));
      t = table_put_0_0(t);
      t = not_null(n_15);
      {
        ATerm w_1 (ATerm t)
        {
          ATerm x_1 (ATerm t)
          {
            t = term_r_33;
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
              t = term_s_33;
              return(t);
            }
            t = say_1_0(z_1, t);
            return(t);
          }
          t = if_verbose6_1_0(y_1, t);
          if(((o_15 != NULL) && (o_15 != t)))
            _fail(t);
          else
            o_15 = t;
          if(((p_15 != NULL) && (p_15 != t)))
            _fail(t);
          else
            p_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_32, not_null(p_15));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm a_2 (ATerm t)
            {
              ATerm b_2 (ATerm t)
              {
                t = term_t_33;
                return(t);
              }
              t = say_1_0(b_2, t);
              return(t);
            }
            t = if_verbose6_1_0(a_2, t);
            t = (ATerm) ATmakeAppl(sym__3, term_c_32, (ATerm)ATmakeAppl(sym_Imported_1, not_null(m_15)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm c_2 (ATerm t)
              {
                ATerm d_2 (ATerm t)
                {
                  t = term_s_33;
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
  ATerm q_15 = NULL;
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = SSL_getenv(not_null(q_15));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      {
        ATerm x_33 = t;
        int y_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_33;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(y_33);
          }
        else
          {
            t = x_33;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm r_15 = NULL;
  ATerm e_2 (ATerm t)
  {
    ATerm f_2 (ATerm t)
    {
      t = term_a_34;
      return(t);
    }
    t = debug_1_0(f_2, t);
    return(t);
  }
  t = if_verbose5_1_0(e_2, t);
  if(((r_15 != NULL) && (r_15 != t)))
    _fail(t);
  else
    r_15 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_34;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(r_15);
    {
      ATerm g_2 (ATerm t)
      {
        ATerm h_2 (ATerm t)
        {
          t = term_e_34;
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
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        ATerm j_2 (ATerm t)
        {
          t = term_h_34;
          return(t);
        }
        t = debug_1_0(j_2, t);
        return(t);
      }
      t = if_verbose5_1_0(i_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm i_34 = t;
        int j_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              t = term_h_34;
              return(t);
            }
            t = debug_1_0(l_2, t);
            return(t);
          }
          t = if_verbose5_1_0(k_2, t);
        }
      }
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      {
        ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
        if(((s_15 != NULL) && (s_15 != t)))
          _fail(t);
        else
          s_15 = t;
        if(((t_15 != NULL) && (t_15 != t)))
          _fail(t);
        else
          t_15 = t;
        t = not_null(s_15);
        if(((u_15 != NULL) && (u_15 != t)))
          _fail(t);
        else
          u_15 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_34), not_null(u_15)), term_k_34);
        t = error_0_0(t);
        {
          ATerm m_2 (ATerm t)
          {
            t = term_c_32;
            t = table_getlist_0_0(t);
            {
              ATerm n_2 (ATerm t)
              {
                t = term_m_34;
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
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
  if(((v_15 != NULL) && (v_15 != t)))
    _fail(t);
  else
    v_15 = t;
  t = y_83(t);
  t = xtc_find_warning_0_0(t);
  if(((w_15 != NULL) && (w_15 != t)))
    _fail(t);
  else
    w_15 = t;
  t = not_null(v_15);
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  if(((z_15 != NULL) && (z_15 != t)))
    _fail(t);
  else
    z_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), not_null(z_15));
  t = call_0_0(t);
  t = not_null(x_15);
  return(t);
}
ATerm assert_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_16 != NULL) && (a_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_16 = ATgetArgument(t, 0);
      if(((b_16 != NULL) && (b_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = j_80(t);
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(d_16), not_null(a_16), not_null(b_16));
  t = table_push_0_0(t);
  {
    ATerm n_34 = t;
    int o_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), term_p_34);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(o_34);
      }
    else
      {
        t = n_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_16 != NULL) && (e_16 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_16 = ATgetFirst((ATermList) t);
        if(((f_16 != NULL) && (f_16 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          f_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_16), term_p_34, (ATerm) ATinsert(CheckATermList(not_null(f_16)), (ATerm) ATinsert(CheckATermList(not_null(e_16)), not_null(a_16))));
    t = table_put_0_0(t);
    t = not_null(c_16);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm r_65 (ATerm), ATerm t)
{
  ATerm g_16 = NULL;
  if(((g_16 != NULL) && (g_16 != t)))
    _fail(t);
  else
    g_16 = t;
  t = r_65(t);
  {
    ATerm o_2 (ATerm t)
    {
      t = term_q_34;
      return(t);
    }
    t = debug_1_0(o_2, t);
    t = not_null(g_16);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm u_16 (ATerm k_16, ATerm t)
  {
    ATerm l_16 = NULL;
    t = not_null(k_16);
    if(((l_16 != NULL) && (l_16 != t)))
      _fail(t);
    else
      l_16 = t;
    t = not_null(k_16);
    {
      ATerm r_34 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm s_34 = ATgetArgument(t, 0);
              ATerm t_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_34;
        }
      {
        ATerm p_2 (ATerm t)
        {
          t = term_u_34;
          return(t);
        }
        t = obsolete_1_0(p_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), term_d_7);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm v_16 (ATerm m_16, ATerm n_16, ATerm o_16, ATerm t)
  {
    ATerm p_16 = NULL,q_16 = NULL;
    t = not_null(m_16);
    if(((p_16 != NULL) && (p_16 != t)))
      _fail(t);
    else
      p_16 = t;
    t = not_null(n_16);
    if(((q_16 != NULL) && (q_16 != t)))
      _fail(t);
    else
      q_16 = t;
    t = SSL_open_file(not_null(p_16), not_null(q_16));
    return(t);
  }
  ATerm r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  if(match_cons(t, sym__2))
    {
      s_16 = ATgetArgument(t, 0);
      t_16 = ATgetArgument(t, 1);
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_16(not_null(r_16), t);
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            t = v_16(not_null(s_16), not_null(t_16), not_null(r_16), t);
          }
      }
    }
  else
    {
      t = u_16(not_null(r_16), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_16 != NULL) && (w_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_16 = ATgetArgument(t, 0);
      if(((x_16 != NULL) && (x_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(w_16), not_null(x_16));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  if(((z_16 != NULL) && (z_16 != t)))
    _fail(t);
  else
    z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_16), (ATerm) ATinsert(ATempty, term_x_34));
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
  ATerm a_17 = NULL,b_17 = NULL;
  if(((a_17 != NULL) && (a_17 != t)))
    _fail(t);
  else
    a_17 = t;
  t = term_a_7;
  t = new_0_0(t);
  if(((b_17 != NULL) && (b_17 != t)))
    _fail(t);
  else
    b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), term_y_34);
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
  ATerm d_17 = NULL,e_17 = NULL;
  t = new_file_0_0(t);
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), term_d_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), term_a_7);
  {
    ATerm r_2 (ATerm t)
    {
      t = term_z_34;
      return(t);
    }
    t = assert_1_0(r_2, t);
    t = not_null(e_17);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(((g_17 != NULL) && (g_17 != t)))
    _fail(t);
  else
    g_17 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
      t = not_null(g_17);
      if(((i_17 != NULL) && (i_17 != t)))
        _fail(t);
      else
        i_17 = t;
      t = xtc_new_file_0_0(t);
      if(((j_17 != NULL) && (j_17 != t)))
        _fail(t);
      else
        j_17 = t;
      if(((k_17 != NULL) && (k_17 != t)))
        _fail(t);
      else
        k_17 = t;
      t = m_0(t);
      if(((l_17 != NULL) && (l_17 != t)))
        _fail(t);
      else
        l_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(l_17), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_17)), term_a_35));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(j_17);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_17));
    }
  else
    {
      ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(h_17);
      if(((m_17 != NULL) && (m_17 != t)))
        _fail(t);
      else
        m_17 = t;
      t = not_null(g_17);
      if(((n_17 != NULL) && (n_17 != t)))
        _fail(t);
      else
        n_17 = t;
      t = not_null(m_17);
      t = xtc_new_file_0_0(t);
      if(((o_17 != NULL) && (o_17 != t)))
        _fail(t);
      else
        o_17 = t;
      if(((p_17 != NULL) && (p_17 != t)))
        _fail(t);
      else
        p_17 = t;
      t = m_0(t);
      if(((q_17 != NULL) && (q_17 != t)))
        _fail(t);
      else
        q_17 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_17)), term_a_35), not_null(m_17)), term_b_35));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(o_17);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_17));
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
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL;
  if(((u_17 != NULL) && (u_17 != t)))
    _fail(t);
  else
    u_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((s_17 != NULL) && (s_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((v_17 != NULL) && (v_17 != t)))
    _fail(t);
  else
    v_17 = t;
  t = SSLgetAnnotations(not_null(u_17));
  if(((r_17 != NULL) && (r_17 != t)))
    _fail(t);
  else
    r_17 = t;
  t = not_null(s_17);
  t = i_62(t);
  if(((t_17 != NULL) && (t_17 != t)))
    _fail(t);
  else
    t_17 = t;
  if(((x_17 != NULL) && (x_17 != t)))
    _fail(t);
  else
    x_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(t_17)), not_null(r_17));
  if(((w_17 != NULL) && (w_17 != t)))
    _fail(t);
  else
    w_17 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  ATerm c_35 = t;
  int d_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          t = stdin_0_0(t);
        }
      LocalPopChoice(d_35);
      t = xtc_transform_file_2_0(a_84, b_84, t);
    }
  else
    {
      t = c_35;
      t = xtc_transform_term_2_0(a_84, b_84, t);
    }
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((y_17 != NULL) && (y_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_17 = ATgetArgument(t, 0);
      if(((z_17 != NULL) && (z_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(y_17), not_null(z_17));
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
  ATerm s_18 (ATerm d_18, ATerm e_18, ATerm t)
  {
    ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL;
    t = not_null(d_18);
    if(((f_18 != NULL) && (f_18 != t)))
      _fail(t);
    else
      f_18 = t;
    t = not_null(e_18);
    if(((g_18 != NULL) && (g_18 != t)))
      _fail(t);
    else
      g_18 = t;
    t = k_0(t);
    if(((h_18 != NULL) && (h_18 != t)))
      _fail(t);
    else
      h_18 = t;
    {
      ATerm g_35 = t;
      int h_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(h_35);
        }
      else
        {
          t = g_35;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_18), not_null(h_18));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_18));
    }
    return(t);
  }
  ATerm t_18 (ATerm i_18, ATerm j_18, ATerm t)
  {
    ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
    t = not_null(i_18);
    if(((k_18 != NULL) && (k_18 != t)))
      _fail(t);
    else
      k_18 = t;
    t = not_null(j_18);
    if(((l_18 != NULL) && (l_18 != t)))
      _fail(t);
    else
      l_18 = t;
    t = k_0(t);
    if(((m_18 != NULL) && (m_18 != t)))
      _fail(t);
    else
      m_18 = t;
    {
      ATerm i_35 = t;
      if((PushChoice() == 0))
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm l_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = l_35;
                    {
                      ATerm n_18 = NULL;
                      if(((n_18 != NULL) && (n_18 != t)))
                        _fail(t);
                      else
                        n_18 = t;
                      if(((k_18 != NULL) && (k_18 != t)))
                        _fail(t);
                      else
                        k_18 = t;
                      t = not_null(n_18);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_35;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), not_null(m_18));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_18));
    }
    return(t);
  }
  ATerm o_18 = NULL,p_18 = NULL;
  if(((o_18 != NULL) && (o_18 != t)))
    _fail(t);
  else
    o_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((p_18 != NULL) && (p_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_18(not_null(p_18), not_null(o_18), t);
        ;
        LocalPopChoice(o_35);
      }
    else
      {
        t = n_35;
        {
          ATerm p_35 = t;
          int q_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_18(not_null(p_18), not_null(o_18), t);
              ;
              LocalPopChoice(q_35);
            }
          else
            {
              t = p_35;
              {
                ATerm q_18 = NULL,r_18 = NULL;
                t = not_null(p_18);
                if(((q_18 != NULL) && (q_18 != t)))
                  _fail(t);
                else
                  q_18 = t;
                t = not_null(o_18);
                if(((r_18 != NULL) && (r_18 != t)))
                  _fail(t);
                else
                  r_18 = t;
                t = k_0(t);
                if(((q_18 != NULL) && (q_18 != t)))
                  _fail(t);
                else
                  q_18 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_18));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_35 = ATgetFirst((ATermList) t);
      if(((u_18 != NULL) && (u_18 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        u_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(u_18);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_18 != NULL) && (v_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_18 = ATgetArgument(t, 0);
      if(((w_18 != NULL) && (w_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_18), not_null(w_18));
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = (ATerm) ATempty;
      }
    if(((z_18 != NULL) && (z_18 != t)))
      _fail(t);
    else
      z_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_18), not_null(w_18), not_null(z_18));
    t = table_put_0_0(t);
    t = not_null(x_18);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = g_80(t);
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), term_p_34);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_19 != NULL) && (d_19 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_19 = ATgetFirst((ATermList) t);
        if(((c_19 != NULL) && (c_19 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(b_19), term_p_34, not_null(c_19));
    t = table_put_0_0(t);
    t = not_null(d_19);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm e_19 = NULL;
        if(((e_19 != NULL) && (e_19 != t)))
          _fail(t);
        else
          e_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), not_null(e_19));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(s_2, t);
      t = not_null(a_19);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  if(((f_19 != NULL) && (f_19 != t)))
    _fail(t);
  else
    f_19 = t;
  t = SSL_remove(not_null(f_19));
  return(t);
}
ATerm restore_always_2_0 (ATerm b_81 (ATerm), ATerm c_81 (ATerm), ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_81(t);
      t = c_81(t);
      ;
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = c_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  if(((g_19 != NULL) && (g_19 != t)))
    _fail(t);
  else
    g_19 = t;
  t = f_80(t);
  if(((h_19 != NULL) && (h_19 != t)))
    _fail(t);
  else
    h_19 = t;
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), term_p_34);
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = (ATerm) ATempty;
      }
    if(((j_19 != NULL) && (j_19 != t)))
      _fail(t);
    else
      j_19 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(h_19), term_p_34, (ATerm) ATinsert(CheckATermList(not_null(j_19)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(g_19);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_83 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  ATerm t_2 (ATerm t)
  {
    t = term_z_34;
    return(t);
  }
  t = begin_scope_1_0(t_2, t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm m_19 = NULL;
      if(((m_19 != NULL) && (m_19 != t)))
        _fail(t);
      else
        m_19 = t;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_c_36;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((l_19 != NULL) && (l_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              l_19 = ATgetFirst((ATermList) t);
            if(((k_19 != NULL) && (k_19 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              k_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(l_19);
        {
          ATerm v_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(v_2, t);
          t = not_null(m_19);
          {
            ATerm w_2 (ATerm t)
            {
              t = term_z_34;
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
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL;
        if(((n_19 != NULL) && (n_19 != t)))
          _fail(t);
        else
          n_19 = t;
        if(((o_19 != NULL) && (o_19 != t)))
          _fail(t);
        else
          o_19 = t;
        t = term_b_35;
        t = get_config_0_0(t);
        if(((p_19 != NULL) && (p_19 != t)))
          _fail(t);
        else
          p_19 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_19));
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = term_b_7;
      }
    t = l_83(t);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_a_35;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            t = term_r_5;
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
ATerm asfix2abox_0_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      t = term_h_36;
      return(t);
    }
    ATerm b_3 (ATerm t)
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_36), term_k_36), term_j_36), term_i_36);
      return(t);
    }
    t = xtc_transform_2_0(a_3, b_3, t);
    {
      ATerm c_3 (ATerm t)
      {
        t = term_m_36;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_a_7;
        t = build_impl_args_0_0(t);
        return(t);
      }
      t = xtc_transform_2_0(c_3, d_3, t);
    }
    return(t);
  }
  t = xtc_io_1_0(z_2, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    ATerm r_19 = NULL;
    if(((r_19 != NULL) && (r_19 != t)))
      _fail(t);
    else
      r_19 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(r_19);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(r_19);
      }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
    if(((s_19 != NULL) && (s_19 != t)))
      _fail(t);
    else
      s_19 = t;
    if(((t_19 != NULL) && (t_19 != t)))
      _fail(t);
    else
      t_19 = t;
    t = string_to_int_0_0(t);
    if(((u_19 != NULL) && (u_19 != t)))
      _fail(t);
    else
      u_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_n_36, not_null(u_19));
    t = set_config_0_0(t);
    t = not_null(s_19);
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_o_36;
    return(t);
  }
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = SSL_string_to_int(not_null(v_19));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_3 (ATerm t)
      {
        ATerm x_19 = NULL;
        if(((x_19 != NULL) && (x_19 != t)))
          _fail(t);
        else
          x_19 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(x_19);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(x_19);
          }
        return(t);
      }
      ATerm i_3 (ATerm t)
      {
        ATerm y_19 = NULL;
        if(((y_19 != NULL) && (y_19 != t)))
          _fail(t);
        else
          y_19 = t;
        t = term_s_36;
        t = set_config_0_0(t);
        t = term_t_36;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_u_36;
        return(t);
      }
      t = Option_3_0(h_3, i_3, j_3, t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      {
        ATerm v_36 = t;
        int w_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
              if(((a_20 != NULL) && (a_20 != t)))
                _fail(t);
              else
                a_20 = t;
              if(((b_20 != NULL) && (b_20 != t)))
                _fail(t);
              else
                b_20 = t;
              t = string_to_int_0_0(t);
              if(((c_20 != NULL) && (c_20 != t)))
                _fail(t);
              else
                c_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_b_6, not_null(c_20));
              t = set_config_0_0(t);
              t = not_null(a_20);
              if(((d_20 != NULL) && (d_20 != t)))
                _fail(t);
              else
                d_20 = t;
              if(((e_20 != NULL) && (e_20 != t)))
                _fail(t);
              else
                e_20 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_20));
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_x_36;
              return(t);
            }
            t = ArgOption_3_0(k_3, l_3, m_3, t);
            ;
            LocalPopChoice(w_36);
          }
        else
          {
            t = v_36;
            {
              ATerm n_3 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                ATerm f_20 = NULL;
                if(((f_20 != NULL) && (f_20 != t)))
                  _fail(t);
                else
                  f_20 = t;
                t = term_z_36;
                t = set_config_0_0(t);
                t = term_a_37;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_b_37;
                return(t);
              }
              t = Option_3_0(n_3, o_3, p_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(d_37);
    }
  else
    {
      t = c_37;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm h_20 = NULL;
    if(((h_20 != NULL) && (h_20 != t)))
      _fail(t);
    else
      h_20 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(h_20);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(h_20);
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
    if(((i_20 != NULL) && (i_20 != t)))
      _fail(t);
    else
      i_20 = t;
    if(((j_20 != NULL) && (j_20 != t)))
      _fail(t);
    else
      j_20 = t;
    if(((k_20 != NULL) && (k_20 != t)))
      _fail(t);
    else
      k_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_35, not_null(k_20));
    t = set_config_0_0(t);
    t = not_null(i_20);
    if(((l_20 != NULL) && (l_20 != t)))
      _fail(t);
    else
      l_20 = t;
    if(((m_20 != NULL) && (m_20 != t)))
      _fail(t);
    else
      m_20 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_20));
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_e_37;
    return(t);
  }
  t = ArgOption_3_0(q_3, r_3, s_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm t_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          ATerm n_20 = NULL;
          if(((n_20 != NULL) && (n_20 != t)))
            _fail(t);
          else
            n_20 = t;
          t = term_i_37;
          t = set_config_0_0(t);
          t = term_j_37;
          return(t);
        }
        ATerm v_3 (ATerm t)
        {
          t = term_k_37;
          return(t);
        }
        t = Option_3_0(t_3, u_3, v_3, t);
      }
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm w_3 (ATerm t)
  {
    ATerm p_20 = NULL;
    if(((p_20 != NULL) && (p_20 != t)))
      _fail(t);
    else
      p_20 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(p_20);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(p_20);
      }
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
    if(((q_20 != NULL) && (q_20 != t)))
      _fail(t);
    else
      q_20 = t;
    if(((r_20 != NULL) && (r_20 != t)))
      _fail(t);
    else
      r_20 = t;
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_35, not_null(s_20));
    t = set_config_0_0(t);
    t = not_null(q_20);
    if(((t_20 != NULL) && (t_20 != t)))
      _fail(t);
    else
      t_20 = t;
    if(((u_20 != NULL) && (u_20 != t)))
      _fail(t);
    else
      u_20 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_20));
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_l_37;
    return(t);
  }
  t = ArgOption_3_0(w_3, x_3, y_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm m_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(n_37);
    }
  else
    {
      t = m_37;
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm extend_config_0_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,b_21 = NULL,c_21 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_20 = ATgetArgument(t, 0);
      if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((x_20 != NULL) && (x_20 != t)))
    _fail(t);
  else
    x_20 = t;
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  t = not_null(v_20);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = (ATerm) ATempty;
      }
    if(((b_21 != NULL) && (b_21 != t)))
      _fail(t);
    else
      b_21 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), not_null(b_21));
    t = conc_0_0(t);
    if(((c_21 != NULL) && (c_21 != t)))
      _fail(t);
    else
      c_21 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_s_37, not_null(v_20), not_null(c_21));
    t = table_put_0_0(t);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,o_21 = NULL,u_21 = NULL,v_21 = NULL;
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(i_21);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm w_21 = NULL,x_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((j_21 != NULL) && (j_21 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            j_21 = ATgetFirst((ATermList) t);
          if(((o_21 != NULL) && (o_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            o_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_21);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_21 != NULL) && (u_21 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_21 = ATgetFirst((ATermList) t);
          if(((v_21 != NULL) && (v_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_21);
      if(((w_21 != NULL) && (w_21 != t)))
        _fail(t);
      else
        w_21 = t;
      t = not_null(u_21);
      if(((x_21 != NULL) && (x_21 != t)))
        _fail(t);
      else
        x_21 = t;
      t = not_null(v_21);
      if(((a_22 != NULL) && (a_22 != t)))
        _fail(t);
      else
        a_22 = t;
      t = not_null(i_21);
      if(((b_22 != NULL) && (b_22 != t)))
        _fail(t);
      else
        b_22 = t;
      t = not_null(w_21);
      t = h_0(t);
      t = not_null(b_22);
      if(((c_22 != NULL) && (c_22 != t)))
        _fail(t);
      else
        c_22 = t;
      t = not_null(x_21);
      t = i_0(t);
      if(((d_22 != NULL) && (d_22 != t)))
        _fail(t);
      else
        d_22 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_22)), not_null(d_22));
    }
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
      _fail(t);
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
    if(((e_22 != NULL) && (e_22 != t)))
      _fail(t);
    else
      e_22 = t;
    if(((f_22 != NULL) && (f_22 != t)))
      _fail(t);
    else
      f_22 = t;
    if(((g_22 != NULL) && (g_22 != t)))
      _fail(t);
    else
      g_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_6, (ATerm) ATinsert(ATempty, not_null(g_22)));
    t = extend_config_0_0(t);
    t = not_null(e_22);
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_t_37;
    return(t);
  }
  t = ArgOption_3_0(z_3, a_4, b_4, t);
  return(t);
}
ATerm asfix2abox_options_0_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = io_options_0_0(t);
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm c_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm d_4 (ATerm t)
              {
                ATerm h_22 = NULL;
                if(((h_22 != NULL) && (h_22 != t)))
                  _fail(t);
                else
                  h_22 = t;
                t = term_z_37;
                t = set_config_0_0(t);
                t = not_null(h_22);
                return(t);
              }
              ATerm e_4 (ATerm t)
              {
                t = term_a_38;
                return(t);
              }
              t = Option_3_0(c_4, d_4, e_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_38), not_null(k_22)), term_b_38));
  t = printnl_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  t = not_null(i_22);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  t = report_run_time_0_0(t);
  if(((l_22 != NULL) && (l_22 != t)))
    _fail(t);
  else
    l_22 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, term_d_38), not_null(m_22)));
  t = printnl_0_0(t);
  t = term_i_6;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm n_22 = NULL;
  if(((n_22 != NULL) && (n_22 != t)))
    _fail(t);
  else
    n_22 = t;
  t = SSL_TicksToSeconds(not_null(n_22));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_22 != NULL) && (o_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_22 = ATgetArgument(t, 0);
      if(((p_22 != NULL) && (p_22 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(o_22), not_null(p_22));
        ;
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = SSL_addr(not_null(o_22), not_null(p_22));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm i_76 (ATerm), ATerm j_76 (ATerm), ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = i_76(t);
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
        if(((r_22 != NULL) && (r_22 != t)))
          _fail(t);
        else
          r_22 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((s_22 != NULL) && (s_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              s_22 = ATgetFirst((ATermList) t);
            if(((t_22 != NULL) && (t_22 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              t_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(s_22);
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = not_null(t_22);
        if(((v_22 != NULL) && (v_22 != t)))
          _fail(t);
        else
          v_22 = t;
        t = not_null(r_22);
        if(((w_22 != NULL) && (w_22 != t)))
          _fail(t);
        else
          w_22 = t;
        t = not_null(v_22);
        t = foldr_2_0(i_76, j_76, t);
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_22), not_null(x_22));
        t = j_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm g_74 (ATerm), ATerm h_74 (ATerm), ATerm t)
{
  ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  if(((y_22 != NULL) && (y_22 != t)))
    _fail(t);
  else
    y_22 = t;
  if(((z_22 != NULL) && (z_22 != t)))
    _fail(t);
  else
    z_22 = t;
  t = not_null(y_22);
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  t = SSL_explode_term(not_null(a_23));
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      if(((b_23 != NULL) && (b_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(b_23);
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
    ATerm f_4 (ATerm t)
    {
      t = term_r_36;
      return(t);
    }
    t = crush_2_0(f_4, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_23 != NULL) && (c_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_23 = ATgetArgument(t, 0);
      if(((d_23 != NULL) && (d_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  {
    ATerm k_38 = t;
    int l_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(c_23), not_null(d_23));
        ;
        LocalPopChoice(l_38);
      }
    else
      {
        t = k_38;
        t = SSL_gtr(not_null(c_23), not_null(d_23));
      }
    t = not_null(e_23);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
      if(((h_23 != NULL) && (h_23 != t)))
        _fail(t);
      else
        h_23 = t;
      if(match_cons(t, sym__2))
        {
          if(((i_23 != NULL) && (i_23 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_23 = ATgetArgument(t, 0);
          if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(i_23);
      if(((g_23 != NULL) && (g_23 != t)))
        _fail(t);
      else
        g_23 = t;
      t = not_null(j_23);
      if(((g_23 != NULL) && (g_23 != t)))
        _fail(t);
      else
        g_23 = t;
      t = not_null(h_23);
      ;
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
    if(((k_23 != NULL) && (k_23 != t)))
      _fail(t);
    else
      k_23 = t;
    if(((l_23 != NULL) && (l_23 != t)))
      _fail(t);
    else
      l_23 = t;
    t = term_b_6;
    t = get_config_0_0(t);
    if(((m_23 != NULL) && (m_23 != t)))
      _fail(t);
    else
      m_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_23), term_i_6);
    t = geq_0_0(t);
    t = not_null(k_23);
    t = g_81(t);
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
    if(((n_23 != NULL) && (n_23 != t)))
      _fail(t);
    else
      n_23 = t;
    t = run_time_0_0(t);
    if(((o_23 != NULL) && (o_23 != t)))
      _fail(t);
    else
      o_23 = t;
    t = not_null(n_23);
    if(((p_23 != NULL) && (p_23 != t)))
      _fail(t);
    else
      p_23 = t;
    t = term_a_7;
    t = whoami_0_0(t);
    if(((q_23 != NULL) && (q_23 != t)))
      _fail(t);
    else
      q_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_38), not_null(o_23)), term_g_7), not_null(q_23)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_r_36;
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
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm s_38 = t;
          int t_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(t_38);
            }
          else
            {
              t = s_38;
              {
                ATerm u_38 = t;
                int v_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(v_38);
                  }
                else
                  {
                    t = u_38;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(i_4, t);
      }
    }
  t = s_85(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm r_23 = NULL;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  t = SSL_table_create(not_null(r_23));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = term_w_38;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_38, term_x_38, not_null(s_23));
  t = table_put_0_0(t);
  t = not_null(t_23);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_23 = NULL;
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = SSL_table_destroy(not_null(u_23));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm v_23 = NULL;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = SSL_exit(not_null(v_23));
  return(t);
}
ATerm long_description_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_23 = ATgetFirst((ATermList) t);
      y_23 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
        t = not_null(x_23);
        if(((a_24 != NULL) && (a_24 != t)))
          _fail(t);
        else
          a_24 = t;
        t = not_null(y_23);
        if(((b_24 != NULL) && (b_24 != t)))
          _fail(t);
        else
          b_24 = t;
        if(((c_24 != NULL) && (c_24 != t)))
          _fail(t);
        else
          c_24 = t;
        if(((d_24 != NULL) && (d_24 != t)))
          _fail(t);
        else
          d_24 = t;
        t = g_0(t);
        if(((e_24 != NULL) && (e_24 != t)))
          _fail(t);
        else
          e_24 = t;
        t = not_null(d_24);
        if(((f_24 != NULL) && (f_24 != t)))
          _fail(t);
        else
          f_24 = t;
        t = not_null(a_24);
        t = e_0(t);
        if(((g_24 != NULL) && (g_24 != t)))
          _fail(t);
        else
          g_24 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(e_24)), not_null(g_24));
        if(((h_24 != NULL) && (h_24 != t)))
          _fail(t);
        else
          h_24 = t;
        t = not_null(c_24);
        {
          ATerm j_4 (ATerm t)
          {
            t = not_null(h_24);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_4, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, k_4, t);
  return(t);
}
ATerm short_description_1_0 (ATerm n_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm p_62 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,s_24 = NULL;
  if(((l_24 != NULL) && (l_24 != t)))
    _fail(t);
  else
    l_24 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((j_24 != NULL) && (j_24 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((m_24 != NULL) && (m_24 != t)))
    _fail(t);
  else
    m_24 = t;
  t = SSLgetAnnotations(not_null(l_24));
  if(((i_24 != NULL) && (i_24 != t)))
    _fail(t);
  else
    i_24 = t;
  t = not_null(j_24);
  t = p_62(t);
  if(((k_24 != NULL) && (k_24 != t)))
    _fail(t);
  else
    k_24 = t;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_24)), not_null(i_24));
  if(((n_24 != NULL) && (n_24 != t)))
    _fail(t);
  else
    n_24 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_24 = NULL;
  ATerm y_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_38;
      t = get_config_0_0(t);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      ;
      LocalPopChoice(z_38);
    }
  else
    {
      t = y_38;
      {
        ATerm l_4 (ATerm t)
        {
          ATerm m_4 (ATerm t)
          {
            if(((t_24 != NULL) && (t_24 != t)))
              _fail(t);
            else
              t_24 = t;
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
        t = not_null(t_24);
        return(t);
      }
      t = short_description_1_0(o_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(n_4, t);
    t = term_a_39;
    t = echo_0_0(t);
    t = term_d_39;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm u_24 = NULL,v_24 = NULL;
        if(((u_24 != NULL) && (u_24 != t)))
          _fail(t);
        else
          u_24 = t;
        if(((v_24 != NULL) && (v_24 != t)))
          _fail(t);
        else
          v_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_24)), term_e_39);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_4, t);
      {
        ATerm q_4 (ATerm t)
        {
          ATerm z_24 = NULL,a_25 = NULL;
          if(((z_24 != NULL) && (z_24 != t)))
            _fail(t);
          else
            z_24 = t;
          {
            ATerm r_4 (ATerm t)
            {
              t = not_null(t_24);
              return(t);
            }
            t = long_description_1_0(r_4, t);
            if(((a_25 != NULL) && (a_25 != t)))
              _fail(t);
            else
              a_25 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(a_25)), term_f_39);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(q_4, t);
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
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((b_25 != NULL) && (b_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_25 = ATgetArgument(t, 0);
      if(((c_25 != NULL) && (c_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        c_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((d_25 != NULL) && (d_25 != t)))
    _fail(t);
  else
    d_25 = t;
  t = SSL_printnl(not_null(b_25), not_null(c_25));
  t = not_null(d_25);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_62 (ATerm), ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = SSLgetAnnotations(not_null(h_25));
  if(((e_25 != NULL) && (e_25 != t)))
    _fail(t);
  else
    e_25 = t;
  t = not_null(f_25);
  t = q_62(t);
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  if(((k_25 != NULL) && (k_25 != t)))
    _fail(t);
  else
    k_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_25)), not_null(e_25));
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm c_70 (ATerm), ATerm t)
{
  ATerm l_25 (ATerm t)
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(c_70, _id, t);
        ;
        LocalPopChoice(j_39);
      }
    else
      {
        t = i_39;
        t = Cons_2_0(_id, l_25, t);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm n_86 (ATerm), ATerm t)
{
  t = fetch_1_0(n_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  if(((p_25 != NULL) && (p_25 != t)))
    _fail(t);
  else
    p_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(p_25);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_25 != NULL) && (q_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_25 = ATgetFirst((ATermList) t);
          if(((r_25 != NULL) && (r_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(p_25);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,x_25 = NULL;
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  if(((t_25 != NULL) && (t_25 != t)))
    _fail(t);
  else
    t_25 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        {
          ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
          if(((u_25 != NULL) && (u_25 != t)))
            _fail(t);
          else
            u_25 = t;
          if(((v_25 != NULL) && (v_25 != t)))
            _fail(t);
          else
            v_25 = t;
          t = not_null(u_25);
          if(((w_25 != NULL) && (w_25 != t)))
            _fail(t);
          else
            w_25 = t;
          t = (ATerm) ATinsert(ATempty, not_null(w_25));
        }
      }
    if(((x_25 != NULL) && (x_25 != t)))
      _fail(t);
    else
      x_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_5, not_null(x_25));
    t = printnl_0_0(t);
    t = not_null(s_25);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_38;
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
  ATerm m_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = m_39;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm y_25 = NULL;
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  t = SSL_implode_string(not_null(y_25));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      {
        ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
        if(((a_26 != NULL) && (a_26 != t)))
          _fail(t);
        else
          a_26 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_26 != NULL) && (b_26 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_26 = ATgetFirst((ATermList) t);
            if(((c_26 != NULL) && (c_26 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              c_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(b_26);
        if(((d_26 != NULL) && (d_26 != t)))
          _fail(t);
        else
          d_26 = t;
        t = not_null(c_26);
        if(((e_26 != NULL) && (e_26 != t)))
          _fail(t);
        else
          e_26 = t;
        t = not_null(d_26);
        {
          ATerm s_4 (ATerm t)
          {
            t = not_null(e_26);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(s_4, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,n_26 = NULL,o_26 = NULL;
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  t = not_null(g_26);
  if(((n_26 != NULL) && (n_26 != t)))
    _fail(t);
  else
    n_26 = t;
  t = SSL_explode_term(not_null(n_26));
  if(match_cons(t, sym__2))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(o_26);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_70 (ATerm), ATerm t)
{
  ATerm p_26 (ATerm t)
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_26, t);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = Nil_0_0(t);
        t = i_70(t);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_26 != NULL) && (r_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_26 = ATgetArgument(t, 0);
      if(((q_26 != NULL) && (q_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(r_26);
  {
    ATerm t_4 (ATerm t)
    {
      t = not_null(q_26);
      return(t);
    }
    t = at_end_1_0(t_4, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  if(((s_26 != NULL) && (s_26 != t)))
    _fail(t);
  else
    s_26 = t;
  t = SSL_explode_string(not_null(s_26));
  return(t);
}
ATerm _2_0 (ATerm a_56 (ATerm), ATerm b_56 (ATerm), ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,e_27 = NULL,g_27 = NULL;
  if(((z_26 != NULL) && (z_26 != t)))
    _fail(t);
  else
    z_26 = t;
  if(match_cons(t, sym__2))
    {
      if(((v_26 != NULL) && (v_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_26 = ATgetArgument(t, 0);
      if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        w_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((a_27 != NULL) && (a_27 != t)))
    _fail(t);
  else
    a_27 = t;
  t = SSLgetAnnotations(not_null(z_26));
  if(((u_26 != NULL) && (u_26 != t)))
    _fail(t);
  else
    u_26 = t;
  t = not_null(v_26);
  t = a_56(t);
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  t = not_null(w_26);
  t = b_56(t);
  if(((y_26 != NULL) && (y_26 != t)))
    _fail(t);
  else
    y_26 = t;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_26), not_null(y_26)), not_null(u_26));
  if(((e_27 != NULL) && (e_27 != t)))
    _fail(t);
  else
    e_27 = t;
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
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  if(((h_27 != NULL) && (h_27 != t)))
    _fail(t);
  else
    h_27 = t;
  if(((i_27 != NULL) && (i_27 != t)))
    _fail(t);
  else
    i_27 = t;
  t = k_65(t);
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = not_null(i_27);
  if(((k_27 != NULL) && (k_27 != t)))
    _fail(t);
  else
    k_27 = t;
  if(((l_27 != NULL) && (l_27 != t)))
    _fail(t);
  else
    l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), not_null(j_27)));
  t = printnl_0_0(t);
  t = not_null(h_27);
  return(t);
}
ATerm map_1_0 (ATerm r_69 (ATerm), ATerm t)
{
  ATerm m_27 (ATerm t)
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(w_39);
      }
    else
      {
        t = v_39;
        t = Cons_2_0(r_69, m_27, t);
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  if(((n_27 != NULL) && (n_27 != t)))
    _fail(t);
  else
    n_27 = t;
  t = SSL_is_string(not_null(n_27));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_4 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(u_4, t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm d_28 (ATerm q_27, ATerm r_27, ATerm t)
              {
                ATerm s_27 = NULL;
                t = not_null(q_27);
                if(((s_27 != NULL) && (s_27 != t)))
                  _fail(t);
                else
                  s_27 = t;
                {
                  ATerm b_40 = t;
                  int c_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_40);
                    }
                  else
                    {
                      t = b_40;
                      {
                        ATerm v_4 (ATerm t)
                        {
                          t = term_d_40;
                          return(t);
                        }
                        t = debug_1_0(v_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
              if(((t_27 != NULL) && (t_27 != t)))
                _fail(t);
              else
                t_27 = t;
              if(match_cons(t, sym_Path_1))
                {
                  u_27 = ATgetArgument(t, 0);
                  {
                    ATerm w_27 = NULL;
                    t = not_null(u_27);
                    if(((w_27 != NULL) && (w_27 != t)))
                      _fail(t);
                    else
                      w_27 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      u_27 = ATgetArgument(t, 0);
                      t = d_28(not_null(u_27), not_null(t_27), t);
                    }
                  else
                    {
                      ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((u_27 != NULL) && (u_27 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            u_27 = ATgetArgument(t, 0);
                          if(((v_27 != NULL) && (v_27 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            v_27 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(u_27);
                      if(((x_27 != NULL) && (x_27 != t)))
                        _fail(t);
                      else
                        x_27 = t;
                      t = not_null(v_27);
                      if(((y_27 != NULL) && (y_27 != t)))
                        _fail(t);
                      else
                        y_27 = t;
                      t = not_null(t_27);
                      if(((z_27 != NULL) && (z_27 != t)))
                        _fail(t);
                      else
                        z_27 = t;
                      t = not_null(x_27);
                      t = eval_config_0_0(t);
                      if(((a_28 != NULL) && (a_28 != t)))
                        _fail(t);
                      else
                        a_28 = t;
                      t = not_null(z_27);
                      if(((b_28 != NULL) && (b_28 != t)))
                        _fail(t);
                      else
                        b_28 = t;
                      t = not_null(y_27);
                      t = eval_config_0_0(t);
                      if(((c_28 != NULL) && (c_28 != t)))
                        _fail(t);
                      else
                        c_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), not_null(c_28));
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
  ATerm e_28 = NULL;
  if(((e_28 != NULL) && (e_28 != t)))
    _fail(t);
  else
    e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_37, not_null(e_28));
  t = table_get_0_0(t);
  {
    ATerm w_4 (ATerm t)
    {
      ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
      t = eval_config_0_0(t);
      if(((f_28 != NULL) && (f_28 != t)))
        _fail(t);
      else
        f_28 = t;
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      if(((h_28 != NULL) && (h_28 != t)))
        _fail(t);
      else
        h_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_37, not_null(e_28), not_null(h_28));
      t = table_put_0_0(t);
      t = not_null(f_28);
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
ATerm try_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_80(t);
      ;
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm y_4 (ATerm t)
      {
        t = term_j_40;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm z_4 (ATerm t)
      {
        t = term_k_40;
        return(t);
      }
      t = Option_3_0(x_4, y_4, z_4, t);
      ;
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
      {
        ATerm a_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm b_5 (ATerm t)
        {
          ATerm i_28 = NULL;
          if(((i_28 != NULL) && (i_28 != t)))
            _fail(t);
          else
            i_28 = t;
          t = term_j_40;
          t = set_config_0_0(t);
          t = term_m_40;
          t = set_config_0_0(t);
          t = term_n_40;
          return(t);
        }
        ATerm c_5 (ATerm t)
        {
          t = term_o_40;
          return(t);
        }
        t = Option_3_0(a_5, b_5, c_5, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_28 = ATgetArgument(t, 0);
      if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(j_28), not_null(k_28));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((l_28 != NULL) && (l_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_28 = ATgetArgument(t, 0);
      if(((m_28 != NULL) && (m_28 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_28 = ATgetArgument(t, 1);
      if(((n_28 != NULL) && (n_28 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        n_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((o_28 != NULL) && (o_28 != t)))
    _fail(t);
  else
    o_28 = t;
  if(((p_28 != NULL) && (p_28 != t)))
    _fail(t);
  else
    p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_28), not_null(m_28));
  {
    ATerm p_40 = t;
    int q_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(q_40);
      }
    else
      {
        t = p_40;
        t = (ATerm) ATempty;
      }
    if(((q_28 != NULL) && (q_28 != t)))
      _fail(t);
    else
      q_28 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_28), not_null(m_28), (ATerm) ATinsert(CheckATermList(not_null(q_28)), not_null(n_28)));
    t = table_put_0_0(t);
    t = not_null(o_28);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm s_87 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL;
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  t = term_a_7;
  t = s_87(t);
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_39, term_c_39, not_null(s_28));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(u_28);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((v_28 != NULL) && (v_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            v_28 = ATgetFirst((ATermList) t);
          if(((w_28 != NULL) && (w_28 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
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
      t = not_null(u_28);
      if(((z_28 != NULL) && (z_28 != t)))
        _fail(t);
      else
        z_28 = t;
      t = not_null(x_28);
      t = a_0(t);
      t = not_null(z_28);
      if(((a_29 != NULL) && (a_29 != t)))
        _fail(t);
      else
        a_29 = t;
      t = term_a_7;
      t = c_0(t);
      if(((b_29 != NULL) && (b_29 != t)))
        _fail(t);
      else
        b_29 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(y_28)), not_null(b_29));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    ATerm d_29 = NULL;
    if(((d_29 != NULL) && (d_29 != t)))
      _fail(t);
    else
      d_29 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(d_29);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(d_29);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(d_29);
          }
      }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_r_40;
    t = set_config_0_0(t);
    t = term_s_40;
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_t_40;
    return(t);
  }
  t = Option_3_0(d_5, e_5, f_5, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((e_29 != NULL) && (e_29 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        e_29 = ATgetFirst((ATermList) t);
      if(((f_29 != NULL) && (f_29 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        f_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(f_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_29)));
  return(t);
}
ATerm Cons_2_0 (ATerm j_57 (ATerm), ATerm k_57 (ATerm), ATerm t)
{
  ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  if(((l_29 != NULL) && (l_29 != t)))
    _fail(t);
  else
    l_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((h_29 != NULL) && (h_29 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        h_29 = ATgetFirst((ATermList) t);
      if(((i_29 != NULL) && (i_29 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        i_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((m_29 != NULL) && (m_29 != t)))
    _fail(t);
  else
    m_29 = t;
  t = SSLgetAnnotations(not_null(l_29));
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = not_null(h_29);
  t = j_57(t);
  if(((j_29 != NULL) && (j_29 != t)))
    _fail(t);
  else
    j_29 = t;
  t = not_null(i_29);
  t = k_57(t);
  if(((k_29 != NULL) && (k_29 != t)))
    _fail(t);
  else
    k_29 = t;
  if(((o_29 != NULL) && (o_29 != t)))
    _fail(t);
  else
    o_29 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_29)), not_null(j_29)), not_null(g_29));
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
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
  ATerm p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_29 != NULL) && (p_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_29 = ATgetArgument(t, 0);
      if(((q_29 != NULL) && (q_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_37, not_null(p_29), not_null(q_29));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm r_29 = NULL;
  if(((r_29 != NULL) && (r_29 != t)))
    _fail(t);
  else
    r_29 = t;
  {
    ATerm g_5 (ATerm t)
    {
      t = term_u_40;
      t = q_87(t);
      return(t);
    }
    t = try_1_0(g_5, t);
    t = not_null(r_29);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
        if(((s_29 != NULL) && (s_29 != t)))
          _fail(t);
        else
          s_29 = t;
        if(((t_29 != NULL) && (t_29 != t)))
          _fail(t);
        else
          t_29 = t;
        if(((u_29 != NULL) && (u_29 != t)))
          _fail(t);
        else
          u_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_38, not_null(u_29));
        t = set_config_0_0(t);
        t = not_null(s_29);
        if(((v_29 != NULL) && (v_29 != t)))
          _fail(t);
        else
          v_29 = t;
        if(((w_29 != NULL) && (w_29 != t)))
          _fail(t);
        else
          w_29 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_29));
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        ATerm v_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_40 = t;
            int y_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(y_40);
              }
            else
              {
                t = x_40;
                t = q_87(t);
                t = Cons_2_0(_id, i_5, t);
              }
            ;
            LocalPopChoice(w_40);
          }
        else
          {
            t = v_40;
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
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(((y_29 != NULL) && (y_29 != t)))
    _fail(t);
  else
    y_29 = t;
  if(match_cons(t, sym__3))
    {
      if(((z_29 != NULL) && (z_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_29 = ATgetArgument(t, 0);
      if(((a_30 != NULL) && (a_30 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_30 = ATgetArgument(t, 1);
      if(((b_30 != NULL) && (b_30 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(z_29), not_null(a_30), not_null(b_30));
  t = not_null(y_29);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,j_30 = NULL;
  if(((d_30 != NULL) && (d_30 != t)))
    _fail(t);
  else
    d_30 = t;
  t = term_z_40;
  t = table_put_0_0(t);
  t = not_null(d_30);
  {
    ATerm j_5 (ATerm t)
    {
      ATerm a_41 = t;
      int b_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_87(t);
          ;
          LocalPopChoice(b_41);
        }
      else
        {
          t = a_41;
          {
            ATerm c_41 = t;
            int d_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(d_41);
              }
            else
              {
                t = c_41;
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
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_30 (ATerm f_30, ATerm t)
            {
              ATerm g_30 = NULL;
              t = not_null(f_30);
              if(((g_30 != NULL) && (g_30 != t)))
                _fail(t);
              else
                g_30 = t;
              t = not_null(f_30);
              {
                ATerm g_41 = t;
                int h_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_38;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(h_41);
                  }
                else
                  {
                    t = g_41;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(g_30);
                t = system_usage_0_0(t);
                t = term_r_36;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm h_30 = NULL;
            if(((h_30 != NULL) && (h_30 != t)))
              _fail(t);
            else
              h_30 = t;
            {
              ATerm i_41 = t;
              int j_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_30(not_null(h_30), t);
                  ;
                  LocalPopChoice(j_41);
                }
              else
                {
                  t = i_41;
                  {
                    ATerm i_30 = NULL;
                    t = not_null(h_30);
                    if(((i_30 != NULL) && (i_30 != t)))
                      _fail(t);
                    else
                      i_30 = t;
                    t = term_i_40;
                    t = get_config_0_0(t);
                    t = not_null(i_30);
                    t = system_about_0_0(t);
                    t = term_r_36;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm m_5 (ATerm t)
                {
                  if(((e_30 != NULL) && (e_30 != t)))
                    _fail(t);
                  else
                    e_30 = t;
                  return(t);
                }
                t = Undefined_1_0(m_5, t);
                return(t);
              }
              t = option_defined_1_0(l_5, t);
              t = (ATerm) ATmakeAppl(sym__2, term_v_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_30)), term_k_41));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_i_6;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(k_5, t);
      if(((j_30 != NULL) && (j_30 != t)))
        _fail(t);
      else
        j_30 = t;
      t = term_b_39;
      t = table_destroy_0_0(t);
      t = not_null(j_30);
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
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_85, t);
        ;
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        {
          ATerm n_41 = t;
          int o_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_41);
            }
          else
            {
              t = n_41;
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
