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
ATerm term_y_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_f_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_l_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_o_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
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
ATerm term_h_31;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_o_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_x_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_i_27;
ATerm term_a_27;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_f_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_l_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_r_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
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
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
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
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_h_17;
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
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_n_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_w_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_t_10;
void init_constant_terms (void)
{
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--conservative", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-c", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("INFO: pretty print table argumets: ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_w_14, term_h_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_e_12, term_k_16);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_x_16, term_y_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_17, term_b_17, term_c_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_17, term_z_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_k_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_n_18, term_o_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_w_18, term_x_18);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_19, term_d_19, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_19, term_h_19, term_i_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_19, term_p_19, term_q_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_19, term_v_19, term_w_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_z_19, term_b_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_20, term_i_20, term_j_20);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_20, term_u_20, term_v_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_20, term_a_21, term_e_21);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_i_21, term_j_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_21, term_q_21, term_z_21);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_22, term_i_22, term_j_22);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_22, term_o_22, term_p_22);
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_22, term_s_22, term_t_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_m_27);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(sym__2, term_k_26, term_l_26);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_c_29);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--list", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Asfix-2-abox", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym__2, term_z_11, term_h_33);
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__2, term_z_33, term_n_15);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_e_33);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_n_15);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_n_15);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym__2, term_v_35, term_n_15);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym__2, term_s_38, term_n_15);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, term_t_10, term_w_38);
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-c          Conservative pretty-printing (only format where needed).", 0, ATtrue));
}
ATerm pass_conservative_0_0 (ATerm);
ATerm q_6 (ATerm u_24, ATerm v_24, ATerm);
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
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm get_config_p_0_0 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm create_pp_table_args_0_0 (ATerm);
ATerm s_6 (ATerm l_43, ATerm m_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm t_6 (ATerm u_27, ATerm v_27, ATerm);
ATerm u_6 (ATerm k_72 (ATerm), ATerm x_182, ATerm c_28, ATerm);
ATerm a_2 (ATerm);
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
ATerm n_2 (ATerm);
ATerm a_7 (ATerm h_46, ATerm i_46, ATerm j_46, ATerm);
ATerm b_7 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm);
ATerm a_10 (ATerm u_9, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_7 (ATerm a_28, ATerm);
ATerm d_7 (ATerm w_48, ATerm x_48, ATerm);
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm p_3 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm c_4 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm k_14 (ATerm s_13, ATerm);
ATerm i_4 (ATerm);
ATerm k_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm e_7 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm);
ATerm p_15 (ATerm z_14, ATerm);
ATerm q_15 (ATerm c_15, ATerm e_15, ATerm g_15, ATerm);
ATerm w_4 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm f_7 (ATerm o_48, ATerm p_48, ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm g_7 (ATerm w_24, ATerm x_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm h_7 (ATerm p_45, ATerm q_45, ATerm);
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm asfix2abox_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm q_7 (ATerm k_47, ATerm l_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm r_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm k_7 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm q_23 (ATerm z_22, ATerm);
ATerm conc_0_0 (ATerm);
ATerm i_7 (ATerm q_47, ATerm p_47, ATerm);
ATerm o_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm pp_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_7 (ATerm f_43, ATerm g_43, ATerm);
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_7 (ATerm);
ATerm z_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_8 (ATerm);
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm t_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm m_7 (ATerm b_42, ATerm c_42, ATerm);
ATerm debug_1_0 (ATerm i_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm n_7 (ATerm b_47, ATerm c_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm);
ATerm i_9 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm z_9 (ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_conservative_0_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_10;
      t = get_config_0_0(t);
      LocalPopChoice(s_10);
      t = (ATerm) ATinsert(ATempty, term_u_10);
    }
  else
    {
      t = r_10;
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
  ATerm i_1 = NULL,k_1 = NULL;
  i_1 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_0 = NULL;
        t = i_1;
        t = n_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_x_10;
        p_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_1, term_x_10);
        t = g_7(k_1, p_0, t);
        t = SSL_remove(k_1);
        t = term_x_10;
        ;
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_0 = NULL;
              t = i_1;
              t = n_0(t);
              y_0 = t;
              {
                ATerm d_11 = t;
                if((PushChoice() == 0))
                  {
                    ATerm i_11 = t;
                    int m_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(m_11);
                      }
                    else
                      {
                        t = i_11;
                        {
                          ATerm c_1 = NULL;
                          c_1 = t;
                          if((k_1 != t))
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
                    t = d_11;
                  }
                t = (ATerm) ATmakeAppl(sym__2, k_1, y_0);
                t = q_6(k_1, y_0, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
              }
              ;
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              t = i_1;
              t = n_0(t);
              if((k_1 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, k_1);
            }
        }
      }
  }
  return(t);
}
ATerm z_0 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_n_11;
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
  t = term_p_11;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm o_1 = NULL,r_1 = NULL;
  o_1 = t;
  {
    ATerm x_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, o_1);
      {
        ATerm q_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            LocalPopChoice(s_11);
            t = xtc_transform_file_2_0(z_0, a_1, t);
          }
        else
          {
            t = q_11;
            t = xtc_transform_term_2_0(b_1, d_1, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(x_0, t);
    if(match_cons(t, sym_FILE_1))
      {
        r_1 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = r_1;
    t = if_verbose2_1_0(e_1, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 = NULL,g_2 = NULL;
      u_1 = t;
      t = term_z_11;
      t = get_config_0_0(t);
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_2, term_e_12);
      t = geq_0_0(t);
      t = u_1;
      t = b_88(t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  t = SSL_modification_time(e_3);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  t = SSL_modification_time(f_3);
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_f_12;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,k_2 = NULL,l_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL;
  h_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_13), term_a_13), h_2);
  l_2 = t;
  t = SSL_concat_strings(l_2);
  k_2 = t;
  t = (ATerm) ATinsert(ATempty, term_c_13);
  z_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, (ATerm) ATinsert(ATempty, term_c_13));
  t = f_7(k_2, z_2, t);
  i_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_2, h_2);
  t = _2_0(g_1, h_1, t);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, i_2, h_2);
  a_3 = t;
  t = SSL_explode_term(a_3);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_13 = ATgetArgument(t, 1);
        if(((ATgetType(m_13) == AT_LIST) && !(ATisEmpty(m_13))))
          {
            c_3 = ATgetFirst((ATermList) m_13);
            {
              ATerm p_13 = (ATerm) ATgetNext((ATermList) m_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_3;
  t = if_verbose2_1_0(l_1, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_76 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm q_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_76(t);
        ;
        LocalPopChoice(r_13);
      }
    else
      {
        t = q_13;
        t = Cons_2_0(_id, g_3, t);
      }
    return(t);
  }
  t = g_3(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int a_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_1 = NULL,p_1 = NULL,q_1 = NULL;
      j_1 = t;
      t = term_b_14;
      q_1 = t;
      t = SSL_explode_string(q_1);
      p_1 = t;
      t = SSL_explode_string(j_1);
      {
        ATerm n_1 (ATerm t)
        {
          if((p_1 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(n_1, t);
        t = j_1;
      }
      ;
      LocalPopChoice(a_14);
    }
  else
    {
      t = t_13;
      {
        ATerm f_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL;
            t_1 = t;
            t = term_h_14;
            w_1 = t;
            t = SSL_explode_string(w_1);
            v_1 = t;
            t = SSL_explode_string(t_1);
            {
              ATerm s_1 (ATerm t)
              {
                if((v_1 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(s_1, t);
              t = t_1;
            }
            ;
            LocalPopChoice(g_14);
          }
        else
          {
            t = f_14;
            {
              ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL,q_3 = NULL;
              k_3 = t;
              t = term_i_14;
              l_3 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_3), term_l_14);
              m_3 = t;
              t = SSL_printnl(l_3, m_3);
              t = term_w_14;
              q_3 = t;
              t = SSL_exit(q_3);
              t = (ATerm) ATinsert(ATinsert(ATempty, k_3), term_l_14);
            }
          }
        {
          ATerm x_14 = t;
          int y_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(y_14);
            }
          else
            {
              t = x_14;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm get_config_p_0_0 (ATerm t)
{
  ATerm a_15 = t;
  int b_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(b_15);
    }
  else
    {
      t = a_15;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm s_3 = NULL;
  t = ensure_pp_table_parsed_0_0(t);
  s_3 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_3), term_d_15);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = debug_1_0(z_1, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = term_f_15;
  return(t);
}
ATerm create_pp_table_args_0_0 (ATerm t)
{
  t = get_config_p_0_0(t);
  t = map_1_0(x_1, t);
  t = concat_0_0(t);
  t = if_verbose5_1_0(y_1, t);
  return(t);
}
ATerm s_6 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(l_43, m_43);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = SSL_subtr(l_43, m_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL;
  t = term_z_11;
  {
    ATerm j_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = j_15;
        t = term_w_14;
      }
    u_3 = t;
    t = term_w_14;
    x_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_3, term_w_14);
    t = s_6(u_3, x_3, t);
    z_3 = t;
    t = SSL_int_to_string(z_3);
    w_3 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, w_3), term_z_11);
  }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,e_4 = NULL;
  t = term_n_15;
  t = pass_verbose_0_0(t);
  b_4 = t;
  t = term_n_15;
  t = create_pp_table_args_0_0(t);
  d_4 = t;
  t = term_n_15;
  t = pass_conservative_0_0(t);
  e_4 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_4), d_4), b_4);
  t = concat_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm j_4 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_15;
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
      t = (ATerm) ATinsert(ATempty, term_c_13);
      l_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_4, (ATerm) ATinsert(ATempty, term_c_13));
      t = f_7(j_4, l_4, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm t_6 (ATerm u_27, ATerm v_27, ATerm t)
{
  ATerm m_4 = NULL;
  t = SSL_write_term_to_stream_baf(u_27, v_27);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_4);
  return(t);
}
ATerm u_6 (ATerm k_72 (ATerm), ATerm x_182, ATerm c_28, ATerm t)
{
  ATerm n_4 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_182, term_w_15);
  t = open_stream_0_0(t);
  n_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, c_28);
  t = k_72(t);
  t = fclose_0_0(t);
  t = c_28;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm q_4 = NULL,s_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_15 = ATgetArgument(t, 0);
      if(match_cons(z_15, sym_Stream_1))
        {
          q_4 = ATgetArgument(z_15, 0);
        }
      else
        _fail(t);
      s_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_6(q_4, s_4, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  o_4 = t;
  t = xtc_new_file_0_0(t);
  p_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_4, o_4);
  t = u_6(a_2, p_4, o_4, t);
  t = SSL_close_file(p_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, p_4);
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
  ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
  v_5 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      w_5 = ATgetArgument(t, 0);
      {
        ATerm c_2 = NULL,d_2 = NULL;
        t = SSL_int_to_string(w_5);
        c_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_16), c_2), term_a_16);
        d_2 = t;
        t = SSL_concat_strings(d_2);
      }
    }
  else
    {
      ATerm s_2 = NULL,t_2 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          w_5 = ATgetArgument(t, 0);
          x_5 = ATgetArgument(t, 1);
          y_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(x_5);
      s_2 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_5), term_d_16), s_2), term_c_16), w_5);
      t_2 = t;
      t = SSL_concat_strings(t_2);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm p_76 (ATerm), ATerm t)
{
  ATerm f_6 = NULL;
  ATerm b_2 (ATerm t)
  {
    t = p_76(t);
    if(((f_6 != NULL) && (f_6 != t)))
      _fail(t);
    else
      f_6 = t;
    return(t);
  }
  t = fetch_1_0(b_2, t);
  t = not_null(f_6);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_22), term_q_22), term_k_22), term_d_22), term_l_21), term_f_21), term_w_20), term_l_20), term_c_20), term_x_19), term_r_19), term_k_19), term_f_19), term_b_19), term_p_18), term_l_18), term_f_18), term_b_18), term_x_17), term_t_17), term_p_17), term_l_17), term_e_17), term_z_16), term_t_16), term_p_16), term_l_16), term_i_16);
        {
          ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_22 = ATgetArgument(t, 0);
                if((g_6 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm x_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_2, t);
        }
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_6);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_6 = NULL;
  o_6 = t;
  {
    ATerm y_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_7 = NULL,d_3 = NULL,n_3 = NULL,o_3 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_23 = ATgetArgument(t, 0);
            t_7 = ATgetArgument(t, 1);
            {
              ATerm d_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = t_7;
        {
          ATerm e_23 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_23;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          d_3 = t;
          t = term_i_14;
          n_3 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, d_3), term_f_23);
          o_3 = t;
          t = SSL_printnl(n_3, o_3);
          t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_f_23));
        }
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = y_22;
      }
    t = o_6;
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
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  t = fork_0_0(t);
  y_7 = t;
  {
    ATerm h_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = x_7;
        t = z_70(t);
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = h_23;
        t = SSL_waitpid(y_7);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_23 = ATgetArgument(t, 0);
            if(((ATgetType(k_23) != AT_INT) || (ATgetInt((ATermInt) k_23) != 0)))
              _fail(t);
            {
              ATerm l_23 = ATgetArgument(t, 1);
            }
            {
              ATerm n_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = x_7;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm a_8 = NULL;
  a_8 = t;
  t = SSL_table_keys(a_8);
  {
    ATerm f_2 (ATerm t)
    {
      ATerm b_8 = NULL,c_8 = NULL;
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_8, b_8);
      t = n_7(a_8, b_8, t);
      c_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_8, c_8);
      return(t);
    }
    t = map_1_0(f_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_8 = NULL,g_8 = NULL;
      d_8 = t;
      t = term_z_11;
      t = get_config_0_0(t);
      g_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_8, term_q_21);
      t = geq_0_0(t);
      t = d_8;
      t = e_88(t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,k_8 = NULL;
      i_8 = t;
      t = term_z_11;
      t = get_config_0_0(t);
      k_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_8, term_d_18);
      t = geq_0_0(t);
      t = i_8;
      t = d_88(t);
      ;
      LocalPopChoice(v_23);
    }
  else
    {
      t = u_23;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_8 = NULL,n_8 = NULL;
      l_8 = t;
      t = term_z_11;
      t = get_config_0_0(t);
      n_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_8, term_r_16);
      t = geq_0_0(t);
      t = l_8;
      t = f_88(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
    }
  return(t);
}
ATerm y_6 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm x_34, ATerm w_34, ATerm t)
{
  t = l_80(t);
  {
    ATerm j_2 (ATerm t)
    {
      ATerm o_8 = NULL;
      o_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_34, o_8);
      t = k_80(t);
      return(t);
    }
    t = fetch_1_0(j_2, t);
    t = w_34;
  }
  return(t);
}
ATerm z_6 (ATerm h_80 (ATerm), ATerm t_34, ATerm s_34, ATerm t)
{
  t = t_34;
  {
    ATerm w_8 (ATerm t)
    {
      ATerm b_24 = t;
      int c_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_34;
          ;
          LocalPopChoice(c_24);
        }
      else
        {
          t = b_24;
          {
            ATerm d_24 = t;
            int e_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
                q_8 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    r_8 = ATgetFirst((ATermList) t);
                    s_8 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_8;
                {
                  ATerm m_2 (ATerm t)
                  {
                    t = s_34;
                    return(t);
                  }
                  t = y_6(h_80, m_2, r_8, s_8, t);
                  t = w_8(t);
                }
                ;
                LocalPopChoice(e_24);
              }
            else
              {
                t = d_24;
                t = Cons_2_0(_id, w_8, t);
              }
          }
        }
      return(t);
    }
    t = w_8(t);
  }
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm k_9 = NULL;
  if(match_cons(t, sym__2))
    {
      k_9 = ATgetArgument(t, 0);
      if((k_9 != ATgetArgument(t, 1)))
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
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_24 = ATgetArgument(t, 0);
            ATerm i_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_46, i_46);
        t = n_7(h_46, i_46, t);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = (ATerm) ATempty;
      }
    a_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_9, j_46);
    t = z_6(n_2, a_9, j_46, t);
    b_9 = t;
    t = SSL_table_put(h_46, i_46, b_9);
    t = z_8;
  }
  return(t);
}
ATerm b_7 (ATerm h_88 (ATerm), ATerm r_46, ATerm q_46, ATerm t)
{
  t = q_46;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym__2))
        {
          l_9 = ATgetArgument(t, 0);
          m_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, r_46, l_9, m_9);
      t = h_88(t);
      return(t);
    }
    t = map_1_0(o_2, t);
  }
  return(t);
}
ATerm a_10 (ATerm u_9, ATerm t)
{
  t = SSL_fclose(u_9);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  y_9 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_9 = ATgetArgument(t, 0);
      {
        ATerm j_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_9);
            ;
            LocalPopChoice(t_24);
          }
        else
          {
            t = j_24;
            t = a_10(y_9, t);
          }
      }
    }
  else
    {
      t = a_10(y_9, t);
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
  ATerm b_10 = NULL;
  t = SSL_fopen(w_48, x_48);
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_10);
  return(t);
}
ATerm _2_0 (ATerm g_59 (ATerm), ATerm h_59 (ATerm), ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,i_10 = NULL,b_0 = NULL,f_0 = NULL;
  i_10 = t;
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_10);
  c_10 = t;
  t = d_10;
  t = g_59(t);
  f_10 = t;
  t = e_10;
  t = h_59(t);
  g_10 = t;
  f_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_10, g_10);
  b_0 = t;
  t = SSLsetAnnotations(b_0, c_10);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  t = SSL_stdin_stream();
  m_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_10);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_10 = NULL;
  t = SSL_stdout_stream();
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_10);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_10 = NULL;
  t = SSL_stderr_stream();
  o_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_10);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm e_11 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      e_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_11;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm h_11 = NULL;
  h_11 = t;
  t = SSL_is_string(h_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_24 = ATgetArgument(t, 0);
      ATerm z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_11 = NULL,r_4 = NULL;
        a_11 = t;
        t = SSL_explode_term(a_11);
        if(match_cons(t, sym__2))
          {
            ATerm i_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_25 = ATgetArgument(t, 1);
              if(((ATgetType(l_25) == AT_LIST) && !(ATisEmpty(l_25))))
                {
                  r_4 = ATgetFirst((ATermList) l_25);
                  {
                    ATerm m_25 = (ATerm) ATgetNext((ATermList) l_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = r_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = r_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = r_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = r_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(e_25);
      }
    else
      {
        t = b_25;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL,c_11 = NULL;
              t = _2_0(p_2, _id, t);
              if(match_cons(t, sym__2))
                {
                  b_11 = ATgetArgument(t, 0);
                  c_11 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_7(b_11, c_11, t);
              ;
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              {
                ATerm f_11 = NULL,g_11 = NULL;
                t = _2_0(q_2, _id, t);
                if(match_cons(t, sym__2))
                  {
                    f_11 = ATgetArgument(t, 0);
                    g_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_7(f_11, g_11, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL;
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, term_t_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      t = debug_1_0(r_2, t);
      _fail(t);
    }
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_7(l_11, t);
  k_11 = t;
  t = j_11;
  t = fclose_0_0(t);
  t = k_11;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_w_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = NULL,t_11 = NULL;
      r_11 = t;
      t = (ATerm) ATinsert(ATempty, term_a_26);
      t_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(ATempty, term_a_26));
      t = f_7(r_11, t_11, t);
      LocalPopChoice(z_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = y_25;
      {
        ATerm b_26 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_26 = t;
            if((PushChoice() == 0))
              {
                ATerm w_11 = NULL,x_11 = NULL;
                w_11 = t;
                t = (ATerm) ATinsert(ATempty, term_c_13);
                x_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_11, (ATerm) ATinsert(ATempty, term_c_13));
                t = f_7(w_11, x_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_26;
              }
            t = debug_1_0(u_2, t);
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = b_26;
            t = debug_1_0(v_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = debug_1_0(x_2, t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = debug_1_0(b_3, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL;
  o_12 = t;
  t = term_i_14;
  p_12 = t;
  t = (ATerm) ATinsert(ATempty, term_h_26);
  q_12 = t;
  t = SSL_printnl(p_12, q_12);
  t = o_12;
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  if(match_cons(t, sym__3))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
      t_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_7(r_12, s_12, t_12, t);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
  u_12 = t;
  t = term_i_14;
  v_12 = t;
  t = (ATerm) ATinsert(ATempty, term_i_26);
  w_12 = t;
  t = SSL_printnl(v_12, w_12);
  t = u_12;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL;
  x_12 = t;
  t = term_i_14;
  y_12 = t;
  t = (ATerm) ATinsert(ATempty, term_h_26);
  z_12 = t;
  t = SSL_printnl(y_12, z_12);
  t = x_12;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm y_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL;
  y_11 = t;
  t = if_verbose5_1_0(w_2, t);
  {
    ATerm j_26 = t;
    if((PushChoice() == 0))
      {
        ATerm m_12 = NULL,n_12 = NULL;
        t = term_k_26;
        m_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, y_11);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_26, (ATerm) ATmakeAppl(sym_Imported_1, y_11));
        t = n_7(m_12, n_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_26;
      }
    b_12 = t;
    t = term_k_26;
    d_12 = t;
    t = term_l_26;
    g_12 = t;
    t = (ATerm) ATinsert(ATempty, y_11);
    h_12 = t;
    t = SSL_table_put(d_12, g_12, h_12);
    t = b_12;
    t = if_verbose4_1_0(y_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(h_3, t);
    c_12 = t;
    t = term_k_26;
    i_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_26, c_12);
    t = b_7(i_3, i_12, c_12, t);
    t = if_verbose6_1_0(j_3, t);
    t = term_k_26;
    j_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, y_11);
    k_12 = t;
    t = (ATerm) ATempty;
    l_12 = t;
    t = SSL_table_put(j_12, k_12, l_12);
    t = (ATerm) ATmakeAppl(sym__3, term_k_26, (ATerm)ATmakeAppl(sym_Imported_1, y_11), (ATerm) ATempty);
    t = if_verbose4_1_0(p_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm y_83 (ATerm), ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      {
        ATerm o_26 = t;
        int p_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              t = filter_1_0(y_83, t);
              return(t);
            }
            t = Cons_2_0(y_83, r_3, t);
            ;
            LocalPopChoice(p_26);
          }
        else
          {
            t = o_26;
            {
              ATerm d_13 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm q_26 = ATgetFirst((ATermList) t);
                  d_13 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_13;
              t = filter_1_0(y_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm s_85 (ATerm), ATerm t)
{
  ATerm f_13 (ATerm t)
  {
    ATerm r_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_85(t);
        t = f_13(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = r_26;
      }
    return(t);
  }
  t = f_13(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm w_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_27;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = w_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = NULL;
            t = term_i_27;
            g_13 = t;
            t = SSL_getenv(g_13);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = debug_1_0(v_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  t = term_k_26;
  n_13 = t;
  t = term_m_27;
  o_13 = t;
  t = term_n_27;
  t = n_7(n_13, o_13, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm o_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_27;
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = debug_1_0(c_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = if_verbose5_1_0(t_3, t);
  h_13 = t;
  {
    ATerm y_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_13 = NULL,j_13 = NULL;
        t = term_k_26;
        i_13 = t;
        t = term_l_26;
        j_13 = t;
        t = term_e_28;
        t = n_7(i_13, j_13, t);
        ;
        LocalPopChoice(b_28);
      }
    else
      {
        t = y_27;
        {
          ATerm l_13 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          l_13 = t;
          t = repeat_1_0(y_3, t);
          t = l_13;
        }
      }
    t = h_13;
    t = if_verbose5_1_0(a_4, t);
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = debug_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm k_14 (ATerm s_13, ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  t = term_k_26;
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, s_13);
  w_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, (ATerm) ATmakeAppl(sym_Tool_1, s_13));
  t = n_7(v_13, w_13, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_28 = ATgetFirst((ATermList) t);
      if(match_cons(j_28, sym__2))
        {
          ATerm n_28 = ATgetArgument(j_28, 0);
          u_13 = ATgetArgument(j_28, 1);
        }
      else
        _fail(t);
      {
        ATerm m_28 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_13;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = debug_1_0(k_4, t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_k_26;
  t = table_getlist_0_0(t);
  t = debug_1_0(u_4, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_o_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(f_4, t);
      t = xtc_load_0_0(t);
      {
        ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
        z_13 = t;
        if(match_cons(t, sym__2))
          {
            x_13 = ATgetArgument(t, 0);
            y_13 = ATgetArgument(t, 1);
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
                  t = term_k_26;
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, x_13);
                  e_14 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_k_26, (ATerm) ATmakeAppl(sym_Tool_1, x_13));
                  t = n_7(d_14, e_14, t);
                  {
                    ATerm h_4 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((y_13 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((c_14 != NULL) && (c_14 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            c_14 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(h_4, t);
                    t = not_null(c_14);
                  }
                  ;
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  t = k_14(z_13, t);
                }
            }
          }
        else
          {
            t = k_14(z_13, t);
          }
        t = if_verbose5_1_0(i_4, t);
      }
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = q_28;
      {
        ATerm j_14 = NULL,x_4 = NULL,b_5 = NULL;
        j_14 = t;
        t = term_i_14;
        x_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_28), j_14), term_x_28);
        b_5 = t;
        t = SSL_printnl(x_4, b_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_28), j_14), term_x_28);
        t = if_verbose5_1_0(t_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL;
  m_14 = t;
  t = l_90(t);
  t = xtc_find_0_0(t);
  n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
  {
    ATerm v_4 (ATerm t)
    {
      ATerm o_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_14, m_14);
      t = v_6(n_14, m_14, t);
      t = term_z_28;
      o_14 = t;
      t = SSL_exit(o_14);
      return(t);
    }
    t = fork_and_wait_1_0(v_4, t);
    t = m_14;
  }
  return(t);
}
ATerm e_7 (ATerm w_86 (ATerm), ATerm t_44, ATerm r_44, ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  p_14 = t;
  t = w_86(t);
  q_14 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_14, t_44, r_44);
  t = o_7(q_14, t_44, r_44, t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL;
        t = term_c_29;
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_14, term_c_29);
        t = n_7(q_14, v_14, t);
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_14 = ATgetFirst((ATermList) t);
        s_14 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_29;
    t_14 = t;
    t = (ATerm) ATinsert(CheckATermList(s_14), (ATerm) ATinsert(CheckATermList(r_14), t_44));
    u_14 = t;
    t = SSL_table_put(q_14, t_14, u_14);
    t = p_14;
  }
  return(t);
}
ATerm p_15 (ATerm z_14, ATerm t)
{
  t = z_14;
  {
    ATerm d_29 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm k_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_29;
      }
    t = term_l_29;
    t = debug_1_0(w_4, t);
    t = (ATerm) ATmakeAppl(sym__2, z_14, term_w_15);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm q_15 (ATerm c_15, ATerm e_15, ATerm g_15, ATerm t)
{
  t = SSL_open_file(c_15, e_15);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL,o_15 = NULL;
  k_15 = t;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      o_15 = ATgetArgument(t, 1);
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_15(k_15, t);
            ;
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            t = q_15(l_15, o_15, k_15, t);
          }
      }
    }
  else
    {
      t = p_15(k_15, t);
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
  ATerm r_15 = NULL,s_15 = NULL;
  t = term_n_15;
  t = new_0_0(t);
  r_15 = t;
  t = term_p_29;
  s_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_15, term_p_29);
  t = m_7(r_15, s_15, t);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,v_15 = NULL;
        t_15 = t;
        t = (ATerm) ATinsert(ATempty, term_c_13);
        v_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_15, (ATerm) ATinsert(ATempty, term_c_13));
        t = f_7(t_15, v_15, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
      }
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  t = new_file_0_0(t);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, term_w_15);
  t = open_file_0_0(t);
  t = term_n_15;
  y_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_15, term_n_15);
  t = e_7(y_4, x_15, y_15, t);
  t = x_15;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  u_16 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm g_5 = NULL,m_5 = NULL;
      t = u_16;
      t = xtc_new_file_0_0(t);
      g_5 = t;
      t = m_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATinsert(ATempty, g_5), term_t_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(g_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, g_5);
    }
  else
    {
      ATerm z_5 = NULL,a_6 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          v_16 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_16;
      t = xtc_new_file_0_0(t);
      z_5 = t;
      t = m_0(t);
      a_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_5), term_t_29), v_16), term_u_29));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(z_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, z_5);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,o_0 = NULL,q_0 = NULL;
  k_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_17);
  d_17 = t;
  t = i_17;
  t = u_68(t);
  j_17 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, j_17);
  o_0 = t;
  t = SSLsetAnnotations(o_0, d_17);
  return(t);
}
ATerm g_7 (ATerm w_24, ATerm x_24, ATerm t)
{
  t = SSL_copy(w_24, x_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_29 = t;
    int w_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_6 = NULL;
        t = i_18;
        t = k_0(t);
        k_6 = t;
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_18, k_6);
          t = g_7(j_18, k_6, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, j_18);
        }
        ;
        LocalPopChoice(w_29);
      }
    else
      {
        t = v_29;
        {
          ATerm a_30 = t;
          int b_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = i_18;
              t = k_0(t);
              w_7 = t;
              {
                ATerm c_30 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_30 = t;
                    int g_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_30);
                      }
                    else
                      {
                        t = f_30;
                        {
                          ATerm i_30 = t;
                          int j_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(j_30);
                            }
                          else
                            {
                              t = i_30;
                              {
                                ATerm f_8 = NULL;
                                f_8 = t;
                                if((j_18 != t))
                                  {
                                    _fail(t);
                                  }
                                t = f_8;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_30;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_18, w_7);
                t = g_7(j_18, w_7, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_18);
              }
              ;
              LocalPopChoice(b_30);
            }
          else
            {
              t = a_30;
              t = i_18;
              t = k_0(t);
              if((j_18 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_18);
            }
        }
      }
  }
  return(t);
}
ATerm h_7 (ATerm p_45, ATerm q_45, ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL;
  r_18 = t;
  {
    ATerm k_30 = t;
    int l_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
        t = n_7(p_45, q_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_30 = ATgetFirst((ATermList) t);
            s_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_30);
        t = SSL_table_put(p_45, q_45, s_18);
        t = (ATerm) ATmakeAppl(sym__3, p_45, q_45, s_18);
      }
    else
      {
        t = k_30;
        t = SSL_table_remove(p_45, q_45);
        t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
      }
    t = r_18;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL,y_18 = NULL,z_18 = NULL;
  t_18 = t;
  t = t_86(t);
  u_18 = t;
  {
    ATerm p_30 = t;
    int q_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_19 = NULL;
        t = term_c_29;
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_18, term_c_29);
        t = n_7(u_18, a_19, t);
        ;
        LocalPopChoice(q_30);
      }
    else
      {
        t = p_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_18 = ATgetFirst((ATermList) t);
        v_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_c_29;
    z_18 = t;
    t = SSL_table_put(u_18, z_18, v_18);
    t = y_18;
    {
      ATerm z_4 (ATerm t)
      {
        ATerm j_19 = NULL;
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_18, j_19);
        t = h_7(u_18, j_19, t);
        return(t);
      }
      t = map_1_0(z_4, t);
      t = t_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  ATerm r_30 = t;
  int s_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_87(t);
      t = p_87(t);
      ;
      LocalPopChoice(s_30);
    }
  else
    {
      t = r_30;
      t = p_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm l_19 = NULL,n_19 = NULL,o_19 = NULL,s_19 = NULL,t_19 = NULL;
  l_19 = t;
  t = s_86(t);
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_19, term_c_29);
  {
    ATerm x_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_29;
        a_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_19, term_c_29);
        t = n_7(n_19, a_20, t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATempty;
      }
    o_19 = t;
    t = term_c_29;
    s_19 = t;
    t = (ATerm) ATinsert(CheckATermList(o_19), (ATerm) ATempty);
    t_19 = t;
    t = SSL_table_put(n_19, s_19, t_19);
    t = l_19;
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm b_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_20 = NULL;
      k_20 = t;
      t = SSL_remove(k_20);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = b_31;
    }
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_89 (ATerm), ATerm t)
{
  ATerm e_20 = NULL;
  t = begin_scope_1_0(a_5, t);
  {
    ATerm c_5 (ATerm t)
    {
      ATerm f_20 = NULL;
      f_20 = t;
      {
        ATerm e_31 = t;
        int g_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_20 = NULL,h_20 = NULL;
            t = term_s_29;
            g_20 = t;
            t = term_c_29;
            h_20 = t;
            t = term_h_31;
            t = n_7(g_20, h_20, t);
            ;
            LocalPopChoice(g_31);
          }
        else
          {
            t = e_31;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((e_20 != NULL) && (e_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              e_20 = ATgetFirst((ATermList) t);
            {
              ATerm l_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(e_20);
        t = map_1_0(d_5, t);
        t = f_20;
        t = end_scope_1_0(e_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(x_89, c_5, t);
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm m_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_31);
    }
  else
    {
      t = m_31;
      t = term_x_10;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    ATerm r_31 = t;
    int s_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        t = term_u_29;
        t = get_config_0_0(t);
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_20);
        ;
        LocalPopChoice(s_31);
      }
    else
      {
        t = r_31;
        t = term_u_15;
      }
    t = y_89(t);
    t = copy_to_1_0(h_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(f_5, t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm u_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(a_32);
        }
      else
        {
          t = x_31;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(w_31);
      t = xtc_transform_file_2_0(j_5, k_5, t);
    }
  else
    {
      t = u_31;
      t = xtc_transform_term_2_0(l_5, n_5, t);
    }
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_32 = t;
        int j_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(j_32);
          }
        else
          {
            t = g_32;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(c_32);
        t = xtc_transform_file_2_0(o_5, p_5, t);
      }
    else
      {
        t = b_32;
        t = xtc_transform_term_2_0(q_5, r_5, t);
      }
  }
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_32), term_n_32), term_m_32), term_l_32);
  return(t);
}
ATerm l_5 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_32), term_n_32), term_m_32), term_l_32);
  return(t);
}
ATerm o_5 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_n_15;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_p_32;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_n_15;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm asfix2abox_0_0 (ATerm t)
{
  t = xtc_io_1_0(i_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,s_20 = NULL;
  n_20 = t;
  t = term_n_15;
  t = whoami_0_0(t);
  o_20 = t;
  t = term_i_14;
  p_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), o_20), term_q_32);
  q_20 = t;
  t = SSL_printnl(p_20, q_20);
  t = term_w_14;
  s_20 = t;
  t = SSL_exit(s_20);
  t = n_20;
  return(t);
}
ATerm q_7 (ATerm k_47, ATerm l_47, ATerm t)
{
  ATerm t_20 = NULL;
  t = term_s_32;
  t_20 = t;
  t = SSL_table_put(t_20, k_47, l_47);
  t = (ATerm) ATmakeAppl(sym__3, term_s_32, k_47, l_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
      t = term_n_15;
      t = d_0(t);
      b_21 = t;
      t = term_t_32;
      c_21 = t;
      t = term_e_33;
      d_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_32, term_e_33, b_21);
      t = o_7(c_21, d_21, b_21, t);
      _fail(t);
    }
  else
    {
      ATerm h_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_20 = ATgetFirst((ATermList) t);
          y_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_20;
      t = a_0(t);
      t = term_n_15;
      t = c_0(t);
      h_21 = t;
      t = (ATerm) ATinsert(CheckATermList(y_20), h_21);
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  if(match_string(t, "-k"))
    {
      t = k_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_21;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL,p_21 = NULL;
  m_21 = t;
  t = SSL_string_to_int(m_21);
  o_21 = t;
  t = term_f_33;
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_33, o_21);
  t = q_7(p_21, o_21, t);
  t = m_21;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_5, t_5, u_5, t);
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  if(match_string(t, "-S"))
    {
      t = r_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  t = term_z_11;
  s_21 = t;
  t = term_h_33;
  t_21 = t;
  t = term_i_33;
  t = q_7(s_21, t_21, t);
  t = term_j_33;
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm e_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t = SSL_string_to_int(u_21);
  v_21 = t;
  t = term_z_11;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, v_21);
  t = q_7(w_21, v_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_21);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL;
  t = term_z_33;
  x_21 = t;
  t = term_n_15;
  y_21 = t;
  t = term_a_34;
  t = q_7(x_21, y_21, t);
  t = term_b_34;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_c_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, d_6, t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
      {
        ATerm f_34 = t;
        int g_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_6, h_6, i_6, t);
            ;
            LocalPopChoice(g_34);
          }
        else
          {
            t = f_34;
            t = Option_3_0(j_6, l_6, m_6, t);
          }
      }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  if(match_string(t, "-o"))
    {
      t = a_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_22;
    }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  b_22 = t;
  t = term_t_29;
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_29, b_22);
  t = q_7(c_22, b_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_22);
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_6, p_6, r_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  if(match_string(t, "-i"))
    {
      t = e_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_22;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  g_22 = t;
  t = term_u_29;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, g_22);
  t = q_7(h_22, g_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_22);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_i_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_6, x_6, k_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_76 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_22, t);
        ;
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_76(t);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm l_22 = NULL,m_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_22 = ATgetFirst((ATermList) t);
            m_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_22;
        {
          ATerm l_7 (ATerm t)
          {
            t = m_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(l_7, t);
        }
      }
    }
  return(t);
}
ATerm q_23 (ATerm z_22, ATerm t)
{
  ATerm c_23 = NULL;
  t = SSL_explode_term(z_22);
  if(match_cons(t, sym__2))
    {
      ATerm n_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_23 = NULL,i_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_7 (ATerm t)
            {
              t = i_23;
              return(t);
            }
            t = g_23;
            t = at_end_1_0(p_7, t);
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            t = q_23(m_23, t);
          }
      }
    }
  else
    {
      t = q_23(m_23, t);
    }
  return(t);
}
ATerm i_7 (ATerm q_47, ATerm p_47, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  t = q_47;
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        t = (ATerm) ATempty;
      }
    r_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_47, r_23);
    t = conc_0_0(t);
    s_23 = t;
    t = term_s_32;
    t_23 = t;
    t = SSL_table_put(t_23, q_47, s_23);
    t = (ATerm) ATmakeAppl(sym__3, term_s_32, q_47, s_23);
  }
  return(t);
}
ATerm o_7 (ATerm k_45, ATerm l_45, ATerm j_45, ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  w_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_34 = ATgetArgument(t, 0);
            ATerm z_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, l_45);
        t = n_7(k_45, l_45, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = (ATerm) ATempty;
      }
    x_23 = t;
    t = (ATerm) ATinsert(CheckATermList(x_23), j_45);
    y_23 = t;
    t = SSL_table_put(k_45, l_45, y_23);
    t = w_23;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_24 = NULL,p_24 = NULL,s_24 = NULL;
      t = term_n_15;
      t = j_0(t);
      o_24 = t;
      t = term_t_32;
      p_24 = t;
      t = term_e_33;
      s_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_32, term_e_33, o_24);
      t = o_7(p_24, s_24, o_24, t);
      _fail(t);
    }
  else
    {
      ATerm a_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_24 = ATgetFirst((ATermList) t);
          l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_24 = ATgetFirst((ATermList) t);
          n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_24;
      t = h_0(t);
      t = m_24;
      t = i_0(t);
      a_25 = t;
      t = (ATerm) ATinsert(CheckATermList(n_24), a_25);
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-p", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,f_25 = NULL;
  c_25 = t;
  t = term_d_15;
  d_25 = t;
  t = (ATerm) ATinsert(ATempty, c_25);
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_15, (ATerm) ATinsert(ATempty, c_25));
  t = i_7(d_25, f_25, t);
  t = c_25;
  return(t);
}
ATerm u_7 (ATerm t)
{
  t = term_a_35;
  return(t);
}
ATerm pp_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_7, s_7, u_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,j_25 = NULL,k_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_15;
  t = whoami_0_0(t);
  g_25 = t;
  t = term_i_14;
  h_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_35), g_25);
  j_25 = t;
  t = SSL_printnl(h_25, j_25);
  t = term_w_14;
  k_25 = t;
  t = SSL_exit(k_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_c_35;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_7 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_43, g_43);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = SSL_addr(f_43, g_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_82 (ATerm), ATerm w_82 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_82(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm p_25 = NULL,u_25 = NULL,x_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_25 = ATgetFirst((ATermList) t);
            u_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_25;
        t = foldr_2_0(v_82, w_82, t);
        x_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_25, x_25);
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
ATerm v_7 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm j_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      j_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(j_9, n_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_26 = NULL,c_9 = NULL,d_9 = NULL;
  t = times_0_0(t);
  c_9 = t;
  t = SSL_explode_term(c_9);
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_9;
  t = foldr_2_0(v_7, z_7, t);
  c_26 = t;
  t = SSL_TicksToSeconds(c_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_26;
        if((t_26 != t))
          {
            _fail(t);
          }
        t = s_26;
        ;
        LocalPopChoice(j_35);
      }
    else
      {
        t = i_35;
        t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        {
          ATerm k_35 = t;
          int l_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_26, u_26);
              ;
              LocalPopChoice(l_35);
            }
          else
            {
              t = k_35;
              t = SSL_gtr(t_26, u_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_26, u_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_26 = NULL,z_26 = NULL;
      x_26 = t;
      t = term_z_11;
      t = get_config_0_0(t);
      z_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_26, term_w_14);
      t = geq_0_0(t);
      t = x_26;
      t = a_88(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL;
  t = run_time_0_0(t);
  d_27 = t;
  t = term_n_15;
  t = whoami_0_0(t);
  e_27 = t;
  t = term_i_14;
  f_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_35), d_27), term_c_16), e_27);
  g_27 = t;
  t = SSL_printnl(f_27, g_27);
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_35), d_27), term_c_16), e_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(e_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_33;
  h_27 = t;
  t = SSL_exit(h_27);
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_35);
    }
  else
    {
      t = p_35;
      {
        ATerm r_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_35);
          }
        else
          {
            t = r_35;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_92 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = fetch_1_0(h_8, t);
    }
  t = f_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_27 = ATgetFirst((ATermList) t);
      k_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_27 = NULL,q_27 = NULL;
        t = k_27;
        t = g_0(t);
        p_27 = t;
        t = j_27;
        t = e_0(t);
        q_27 = t;
        t = k_27;
        {
          ATerm j_8 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_27), q_27);
            return(t);
          }
          t = reverse_acc_2_0(e_0, j_8, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_15;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm b_69 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,w_27 = NULL,r_0 = NULL,s_0 = NULL;
  w_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_27);
  r_27 = t;
  t = s_27;
  t = b_69(t);
  t_27 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_27);
  r_0 = t;
  t = SSLsetAnnotations(r_0, r_27);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm g_28 = NULL;
  g_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_28), term_w_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_27 = NULL,d_28 = NULL;
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_35;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      t = fetch_1_0(m_8, t);
    }
  t = term_z_35;
  t = echo_0_0(t);
  t = term_t_32;
  z_27 = t;
  t = term_e_33;
  d_28 = t;
  t = term_a_36;
  t = n_7(z_27, d_28, t);
  t = reverse_acc_2_0(_id, p_8, t);
  t = map_1_0(t_8, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_69 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,k_28 = NULL,l_28 = NULL,t_0 = NULL,u_0 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      i_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  h_28 = t;
  t = i_28;
  t = c_69(t);
  k_28 = t;
  u_0 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_28);
  t_0 = t;
  t = SSLsetAnnotations(t_0, h_28);
  return(t);
}
ATerm fetch_1_0 (ATerm n_76 (ATerm), ATerm t)
{
  ATerm p_28 (ATerm t)
  {
    ATerm b_36 = t;
    int c_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(n_76, _id, t);
        ;
        LocalPopChoice(c_36);
      }
    else
      {
        t = b_36;
        t = Cons_2_0(_id, p_28, t);
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_36 = ATgetFirst((ATermList) t);
                ATerm g_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_28;
          }
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = (ATerm) ATinsert(ATempty, s_28);
      }
    t_28 = t;
    t = term_x_10;
    u_28 = t;
    t = SSL_printnl(u_28, t_28);
    t = s_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_c_35;
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
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL;
  f_29 = t;
  t = i_72(t);
  g_29 = t;
  t = term_i_14;
  h_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_29), g_29);
  i_29 = t;
  t = SSL_printnl(h_29, i_29);
  t = f_29;
  return(t);
}
ATerm map_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm j_29 (ATerm t)
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
        t = Cons_2_0(d_76, j_29, t);
      }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
    }
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_29 = NULL;
      z_29 = t;
      t = SSL_is_string(z_29);
      ;
      LocalPopChoice(n_36);
    }
  else
    {
      t = m_36;
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_8, t);
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            {
              ATerm d_30 = NULL,e_30 = NULL,h_30 = NULL;
              d_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_30 = ATgetArgument(t, 0);
                  t = e_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_30 = ATgetArgument(t, 0);
                      t = e_30;
                      {
                        ATerm q_36 = t;
                        int r_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_36);
                          }
                        else
                          {
                            t = q_36;
                            t = debug_1_0(v_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm m_30 = NULL,n_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_30 = ATgetArgument(t, 0);
                          h_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_30;
                      t = eval_config_0_0(t);
                      m_30 = t;
                      t = h_30;
                      t = eval_config_0_0(t);
                      n_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, m_30, n_30);
                      t = m_7(m_30, n_30, t);
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
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  t = term_s_32;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_32, t_30);
  t = n_7(u_30, t_30, t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL,w_30 = NULL;
        t = eval_config_0_0(t);
        v_30 = t;
        t = term_s_32;
        w_30 = t;
        t = SSL_table_put(w_30, t_30, v_30);
        t = v_30;
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
      }
  }
  return(t);
}
ATerm x_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm c_31 = NULL,f_31 = NULL;
  t = term_u_36;
  c_31 = t;
  t = term_n_15;
  f_31 = t;
  t = term_v_36;
  t = q_7(c_31, f_31, t);
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_w_36;
  return(t);
}
ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,n_31 = NULL;
  t = term_u_36;
  i_31 = t;
  t = term_n_15;
  j_31 = t;
  t = term_v_36;
  t = q_7(i_31, j_31, t);
  t = term_x_36;
  k_31 = t;
  t = term_n_15;
  n_31 = t;
  t = term_y_36;
  t = q_7(k_31, n_31, t);
  t = term_z_36;
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_8, y_8, e_9, t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = Option_3_0(f_9, g_9, h_9, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm v_63 (ATerm), ATerm w_63 (ATerm), ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,t_31 = NULL,v_31 = NULL,y_31 = NULL,z_31 = NULL,v_0 = NULL,w_0 = NULL;
  z_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_31 = ATgetFirst((ATermList) t);
      t_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_31);
  o_31 = t;
  t = p_31;
  t = v_63(t);
  v_31 = t;
  t = t_31;
  t = w_63(t);
  y_31 = t;
  w_0 = t;
  t = (ATerm) ATinsert(CheckATermList(y_31), v_31);
  v_0 = t;
  t = SSLsetAnnotations(v_0, o_31);
  return(t);
}
ATerm i_9 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  e_32 = t;
  t = term_c_35;
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_35, e_32);
  t = q_7(f_32, e_32, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_37;
        t = d_94(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
      }
    t = d_32;
    {
      ATerm o_9 (ATerm t)
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_37 = t;
            int j_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(j_37);
              }
            else
              {
                t = i_37;
                t = d_94(t);
                t = Cons_2_0(_id, o_9, t);
              }
            ;
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
            {
              ATerm h_32 = NULL,i_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_32 = ATgetFirst((ATermList) t);
                  i_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_32), (ATerm) ATmakeAppl(sym_Undefined_1, h_32));
            }
          }
        return(t);
      }
      t = Cons_2_0(i_9, o_9, t);
    }
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  if(match_string(t, "--help"))
    {
      t = b_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_33;
        }
    }
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL;
  t = term_v_35;
  c_33 = t;
  t = term_n_15;
  d_33 = t;
  t = term_k_37;
  t = q_7(c_33, d_33, t);
  t = term_l_37;
  return(t);
}
ATerm s_9 (ATerm t)
{
  t = term_m_37;
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  u_32 = t;
  t = term_t_32;
  x_32 = t;
  t = term_e_33;
  y_32 = t;
  t = (ATerm) ATempty;
  z_32 = t;
  t = SSL_table_put(x_32, y_32, z_32);
  t = u_32;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm n_37 = t;
      int o_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_94(t);
          ;
          LocalPopChoice(o_37);
        }
      else
        {
          t = n_37;
          {
            ATerm p_37 = t;
            int q_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_9, r_9, s_9, t);
                ;
                LocalPopChoice(q_37);
              }
            else
              {
                t = p_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_9, t);
    {
      ATerm r_37 = t;
      int s_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_33 = NULL;
          k_33 = t;
          {
            ATerm t_37 = t;
            int u_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_12 = NULL;
                t = k_33;
                {
                  ATerm v_37 = t;
                  int w_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_v_35;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(w_37);
                    }
                  else
                    {
                      t = v_37;
                      t = fetch_1_0(t_9, t);
                    }
                  t = k_33;
                  t = default_system_usage_0_0(t);
                  t = term_h_33;
                  a_12 = t;
                  t = SSL_exit(a_12);
                }
                ;
                LocalPopChoice(u_37);
              }
            else
              {
                t = t_37;
                {
                  ATerm k_13 = NULL;
                  t = term_u_36;
                  t = get_config_0_0(t);
                  t = k_33;
                  t = default_system_about_0_0(t);
                  t = term_h_33;
                  k_13 = t;
                  t = SSL_exit(k_13);
                }
              }
          }
          ;
          LocalPopChoice(s_37);
        }
      else
        {
          t = r_37;
          {
            ATerm x_37 = t;
            int y_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL;
                ATerm v_9 (ATerm t)
                {
                  ATerm w_9 (ATerm t)
                  {
                    if(((v_32 != NULL) && (v_32 != t)))
                      _fail(t);
                    else
                      v_32 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_9, t);
                  return(t);
                }
                t = fetch_1_0(v_9, t);
                t = term_i_14;
                l_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_32)), term_z_37);
                m_33 = t;
                t = SSL_printnl(l_33, m_33);
                t = (ATerm) ATmakeAppl(sym__2, term_i_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_32)), term_z_37));
                t = default_system_usage_0_0(t);
                t = term_w_14;
                n_33 = t;
                t = SSL_exit(n_33);
                ;
                LocalPopChoice(y_37);
              }
            else
              {
                t = x_37;
              }
          }
        }
      w_32 = t;
      t = term_t_32;
      a_33 = t;
      t = SSL_table_destroy(a_33);
      t = w_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL;
  t = parse_options_1_0(h_92, t);
  q_33 = t;
  t = term_a_38;
  r_33 = t;
  t = SSL_table_create(r_33);
  t = term_a_38;
  s_33 = t;
  t = term_b_38;
  t_33 = t;
  t = SSL_table_put(s_33, t_33, q_33);
  t = q_33;
  t = j_92(t);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_92, t);
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
              t = k_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_38);
            }
          else
            {
              t = e_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm g_38 = t;
  int h_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_options_0_0(t);
      ;
      LocalPopChoice(h_38);
    }
  else
    {
      t = g_38;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(j_38);
          }
        else
          {
            t = i_38;
            {
              ATerm k_38 = t;
              int l_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(l_38);
                }
              else
                {
                  t = k_38;
                  {
                    ATerm m_38 = t;
                    int n_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(h_10, j_10, k_10, t);
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
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(p_38);
                            }
                          else
                            {
                              t = o_38;
                              {
                                ATerm q_38 = t;
                                int r_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = keep_option_0_0(t);
                                    ;
                                    LocalPopChoice(r_38);
                                  }
                                else
                                  {
                                    t = q_38;
                                    t = Option_3_0(l_10, p_10, q_10, t);
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
ATerm h_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  t = term_s_38;
  u_33 = t;
  t = term_n_15;
  v_33 = t;
  t = term_t_38;
  t = q_7(u_33, v_33, t);
  t = term_u_38;
  return(t);
}
ATerm k_10 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm l_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-c", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  t = term_t_10;
  x_33 = t;
  t = term_w_38;
  y_33 = t;
  t = term_x_38;
  t = q_7(x_33, y_33, t);
  t = w_33;
  return(t);
}
ATerm q_10 (ATerm t)
{
  t = term_y_38;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_9, default_usage_0_0, _id, asfix2abox_0_0, t);
  return(t);
}
