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
ATerm term_k_37;
ATerm term_d_37;
ATerm term_s_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_k_34;
ATerm term_h_34;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_l_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_h_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_z_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_m_30;
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
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
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
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_o_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_s_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_v_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_k_25;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_z_22;
ATerm term_t_22;
ATerm term_i_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_m_20;
ATerm term_y_19;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_v_13;
ATerm term_z_12;
ATerm term_f_12;
ATerm term_k_11;
ATerm term_o_10;
ATerm term_a_10;
ATerm term_y_7;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_z_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_h_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
ATerm term_b_5;
ATerm term_y_4;
void init_constant_terms (void)
{
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_5));
  term_b_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym__2, term_h_5, term_o_5);
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__2, term_h_5, term_j_6);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_21, term_b_5, term_k_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_21, term_r_21, term_s_21);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_21, term_d_5, term_i_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_22, term_s_5, term_y_23);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_24, term_o_24, term_p_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_w_24, term_x_24);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_25, term_n_25, term_v_25);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_26, term_j_26, term_k_26);
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_26, term_w_26, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_27, term_e_27, term_f_27);
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_27, term_q_27, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_27, term_r_5, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_27, term_x_27, term_y_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_28, term_b_28, term_c_28);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_28, term_f_28, term_g_28);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_28, term_j_28, term_k_28);
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_28, term_n_28, term_o_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_28, term_r_28, term_s_28);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_28, term_v_28, term_w_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_28, term_z_28, term_a_29);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_29, term_d_29, term_e_29);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_29, term_h_29, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_29, term_l_29, term_m_29);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_29, term_p_29, term_q_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_29, term_f_5, term_t_29);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_29, term_w_29, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_29, term_a_30, term_b_30);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_30, term_e_30, term_f_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym__2, term_f_31, term_u_30);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_y_4, term_v_32);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym__2, term_c_33, term_d_31);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_d_31);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_v_34);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_c_36, term_d_31);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym__2, term_e_5, term_d_31);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym__2, term_k_34, term_d_31);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__3, term_u_34, term_v_34, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Box.tbl", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm l_65 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm k_64 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm);
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm o_65 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm);
ATerm xtc_sglr_1_0 (ATerm s_93 (ATerm), ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm);
ATerm crush_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm f_87 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm e_87 (ATerm), ATerm);
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm e_86 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm h_65 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm l_83 (ATerm), ATerm);
ATerm io_parse_box_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_6 = ATgetArgument(t, 0);
      if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_4 = t;
    int x_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(w_6), not_null(x_6));
        ;
        LocalPopChoice(x_4);
      }
    else
      {
        t = w_4;
        t = SSL_subtr(not_null(w_6), not_null(x_6));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(((y_6 != NULL) && (y_6 != t)))
    _fail(t);
  else
    y_6 = t;
  if(((z_6 != NULL) && (z_6 != t)))
    _fail(t);
  else
    z_6 = t;
  t = term_y_4;
  {
    ATerm z_4 = t;
    int a_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(a_5);
      }
    else
      {
        t = z_4;
        t = term_b_5;
      }
    if(((a_7 != NULL) && (a_7 != t)))
      _fail(t);
    else
      a_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_7), term_b_5);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((b_7 != NULL) && (b_7 != t)))
      _fail(t);
    else
      b_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_7)), term_y_4);
  }
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    t = term_c_5;
    return(t);
  }
  t = xtc_transform_2_0(b_0, pass_verbose_0_0, t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_81 (ATerm), ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL;
    if(((c_7 != NULL) && (c_7 != t)))
      _fail(t);
    else
      c_7 = t;
    if(((d_7 != NULL) && (d_7 != t)))
      _fail(t);
    else
      d_7 = t;
    t = term_y_4;
    t = get_config_0_0(t);
    if(((e_7 != NULL) && (e_7 != t)))
      _fail(t);
    else
      e_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_7), term_d_5);
    t = geq_0_0(t);
    t = not_null(c_7);
    t = f_81(t);
    return(t);
  }
  t = try_1_0(f_0, t);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  {
    ATerm n_0 (ATerm t)
    {
      t = (ATerm) ATinsert(ATempty, term_e_5);
      return(t);
    }
    t = if_verbose3_1_0(n_0, t);
  }
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm f_7 = NULL;
  if(((f_7 != NULL) && (f_7 != t)))
    _fail(t);
  else
    f_7 = t;
  t = SSL_table_keys(not_null(f_7));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm g_7 = NULL;
  if(((g_7 != NULL) && (g_7 != t)))
    _fail(t);
  else
    g_7 = t;
  t = table_keys_0_0(t);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
      if(((h_7 != NULL) && (h_7 != t)))
        _fail(t);
      else
        h_7 = t;
      if(((i_7 != NULL) && (i_7 != t)))
        _fail(t);
      else
        i_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(h_7));
      t = table_get_0_0(t);
      if(((j_7 != NULL) && (j_7 != t)))
        _fail(t);
      else
        j_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(j_7));
      return(t);
    }
    t = map_1_0(o_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
    if(((k_7 != NULL) && (k_7 != t)))
      _fail(t);
    else
      k_7 = t;
    if(((l_7 != NULL) && (l_7 != t)))
      _fail(t);
    else
      l_7 = t;
    t = term_y_4;
    t = get_config_0_0(t);
    if(((m_7 != NULL) && (m_7 != t)))
      _fail(t);
    else
      m_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_7), term_f_5);
    t = geq_0_0(t);
    t = not_null(k_7);
    t = h_81(t);
    return(t);
  }
  t = try_1_0(p_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(((n_7 != NULL) && (n_7 != t)))
    _fail(t);
  else
    n_7 = t;
  if(((o_7 != NULL) && (o_7 != t)))
    _fail(t);
  else
    o_7 = t;
  if(((p_7 != NULL) && (p_7 != t)))
    _fail(t);
  else
    p_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, not_null(p_7));
  t = printnl_0_0(t);
  t = not_null(n_7);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(((q_7 != NULL) && (q_7 != t)))
    _fail(t);
  else
    q_7 = t;
  if(((r_7 != NULL) && (r_7 != t)))
    _fail(t);
  else
    r_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(q_7)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_5 = ATgetFirst((ATermList) t);
      if(match_cons(i_5, sym__2))
        {
          if(((s_7 != NULL) && (s_7 != ATgetArgument(i_5, 0))))
            _fail(ATgetArgument(i_5, 0));
          else
            s_7 = ATgetArgument(i_5, 0);
          if(((t_7 != NULL) && (t_7 != ATgetArgument(i_5, 1))))
            _fail(ATgetArgument(i_5, 1));
          else
            t_7 = ATgetArgument(i_5, 1);
        }
      else
        _fail(t);
      {
        ATerm j_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(t_7);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_7 != NULL) && (u_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_7 = ATgetArgument(t, 0);
      if(((v_7 != NULL) && (v_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_7 != NULL) && (w_7 != t)))
    _fail(t);
  else
    w_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATmakeAppl(sym_Tool_1, not_null(u_7)));
  t = table_get_0_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((v_7 != NULL) && (v_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            v_7 = ATgetArgument(t, 0);
          if(((x_7 != NULL) && (x_7 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_7 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(q_0, t);
    t = not_null(x_7);
  }
  return(t);
}
ATerm filter_1_0 (ATerm i_77 (ATerm), ATerm t)
{
  ATerm k_5 = t;
  int l_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(l_5);
    }
  else
    {
      t = k_5;
      {
        ATerm m_5 = t;
        int n_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 (ATerm t)
            {
              t = filter_1_0(i_77, t);
              return(t);
            }
            t = Cons_2_0(i_77, r_0, t);
            ;
            LocalPopChoice(n_5);
          }
        else
          {
            t = m_5;
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
              if(((z_7 != NULL) && (z_7 != t)))
                _fail(t);
              else
                z_7 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((a_8 != NULL) && (a_8 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    a_8 = ATgetFirst((ATermList) t);
                  if(((b_8 != NULL) && (b_8 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    b_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(b_8);
              if(((c_8 != NULL) && (c_8 != t)))
                _fail(t);
              else
                c_8 = t;
              t = filter_1_0(i_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm d_8 (ATerm t)
  {
    ATerm s_0 (ATerm t)
    {
      t = c_79(t);
      t = d_8(t);
      return(t);
    }
    t = try_1_0(s_0, t);
    return(t);
  }
  t = d_8(t);
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm e_8 = NULL;
  if(((e_8 != NULL) && (e_8 != t)))
    _fail(t);
  else
    e_8 = t;
  {
    ATerm t_0 (ATerm t)
    {
      t = term_p_5;
      t = table_get_0_0(t);
      t = filter_1_0(xtc_read_0_0, t);
      {
        ATerm q_5 = t;
        if((PushChoice() == 0))
          {
            t = Nil_0_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_5;
          }
      }
      return(t);
    }
    t = repeat_1_0(t_0, t);
    t = not_null(e_8);
  }
  return(t);
}
ATerm debug_0_0 (ATerm t)
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
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATempty, not_null(h_8)));
  t = printnl_0_0(t);
  t = not_null(f_8);
  return(t);
}
ATerm say_1_0 (ATerm l_65 (ATerm), ATerm t)
{
  ATerm i_8 = NULL;
  if(((i_8 != NULL) && (i_8 != t)))
    _fail(t);
  else
    i_8 = t;
  t = l_65(t);
  t = debug_0_0(t);
  t = not_null(i_8);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL;
    if(((j_8 != NULL) && (j_8 != t)))
      _fail(t);
    else
      j_8 = t;
    if(((k_8 != NULL) && (k_8 != t)))
      _fail(t);
    else
      k_8 = t;
    t = term_y_4;
    t = get_config_0_0(t);
    if(((l_8 != NULL) && (l_8 != t)))
      _fail(t);
    else
      l_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), term_r_5);
    t = geq_0_0(t);
    t = not_null(j_8);
    t = g_81(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_81 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
    if(((m_8 != NULL) && (m_8 != t)))
      _fail(t);
    else
      m_8 = t;
    if(((n_8 != NULL) && (n_8 != t)))
      _fail(t);
    else
      n_8 = t;
    t = term_y_4;
    t = get_config_0_0(t);
    if(((o_8 != NULL) && (o_8 != t)))
      _fail(t);
    else
      o_8 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_s_5);
    t = geq_0_0(t);
    t = not_null(m_8);
    t = i_81(t);
    return(t);
  }
  t = try_1_0(v_0, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm p_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        p_8 = ATgetArgument(t, 0);
      if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((q_8 != NULL) && (q_8 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        q_8 = ATgetFirst((ATermList) t);
      if(((r_8 != NULL) && (r_8 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        r_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((s_8 != NULL) && (s_8 != t)))
    _fail(t);
  else
    s_8 = t;
  t = x_73(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm t_8 = NULL;
      if(((t_8 != NULL) && (t_8 != t)))
        _fail(t);
      else
        t_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(t_8));
      t = w_73(t);
      return(t);
    }
    t = fetch_1_0(w_0, t);
    t = not_null(r_8);
  }
  return(t);
}
ATerm union_1_0 (ATerm s_73 (ATerm), ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((v_8 != NULL) && (v_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_8 = ATgetArgument(t, 0);
      if(((u_8 != NULL) && (u_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(v_8);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm t_5 = t;
      int u_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(u_8);
          ;
          LocalPopChoice(u_5);
        }
      else
        {
          t = t_5;
          {
            ATerm v_5 = t;
            int w_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_0 (ATerm t)
                {
                  t = not_null(u_8);
                  return(t);
                }
                t = HdMember_p__2_0(s_73, x_0, t);
                t = w_8(t);
                ;
                LocalPopChoice(w_5);
              }
            else
              {
                t = v_5;
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
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_8 = ATgetArgument(t, 0);
      if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        y_8 = ATgetArgument(t, 1);
      if(((z_8 != NULL) && (z_8 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        z_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((a_9 != NULL) && (a_9 != t)))
    _fail(t);
  else
    a_9 = t;
  if(((b_9 != NULL) && (b_9 != t)))
    _fail(t);
  else
    b_9 = t;
  if(((c_9 != NULL) && (c_9 != t)))
    _fail(t);
  else
    c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), not_null(y_8));
  {
    ATerm x_5 = t;
    int y_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(y_5);
      }
    else
      {
        t = x_5;
        t = (ATerm) ATempty;
      }
    if(((d_9 != NULL) && (d_9 != t)))
      _fail(t);
    else
      d_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_9), not_null(z_8));
    t = union_0_0(t);
    if(((e_9 != NULL) && (e_9 != t)))
      _fail(t);
    else
      e_9 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_8), not_null(y_8), not_null(e_9));
    t = set_0_0(t);
    t = not_null(a_9);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm r_81 (ATerm), ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_9 != NULL) && (g_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_9 = ATgetArgument(t, 0);
      if(((f_9 != NULL) && (f_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_9);
  {
    ATerm y_0 (ATerm t)
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
      t = (ATerm) ATmakeAppl(sym__3, not_null(g_9), not_null(h_9), not_null(i_9));
      t = r_81(t);
      return(t);
    }
    t = map_1_0(y_0, t);
  }
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  if(((j_9 != NULL) && (j_9 != t)))
    _fail(t);
  else
    j_9 = t;
  if(((k_9 != NULL) && (k_9 != t)))
    _fail(t);
  else
    k_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(k_9), (ATerm) ATinsert(ATempty, term_z_5));
  t = access_0_0(t);
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(b_6);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = a_6;
      {
        ATerm c_6 = t;
        int d_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_6;
              }
            {
              ATerm z_0 (ATerm t)
              {
                t = term_f_6;
                return(t);
              }
              t = debug_1_0(z_0, t);
            }
            ;
            LocalPopChoice(d_6);
          }
        else
          {
            t = c_6;
            {
              ATerm a_1 (ATerm t)
              {
                t = term_g_6;
                return(t);
              }
              t = debug_1_0(a_1, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL;
  if(((l_9 != NULL) && (l_9 != t)))
    _fail(t);
  else
    l_9 = t;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm c_1 (ATerm t)
      {
        t = term_h_6;
        return(t);
      }
      t = debug_1_0(c_1, t);
      return(t);
    }
    t = if_verbose5_1_0(b_1, t);
    {
      ATerm i_6 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_5, (ATerm) ATmakeAppl(sym_Imported_1, not_null(l_9)));
          t = table_get_0_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_6;
        }
      if(((m_9 != NULL) && (m_9 != t)))
        _fail(t);
      else
        m_9 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_h_5, term_j_6, (ATerm) ATinsert(ATempty, not_null(l_9)));
      t = table_put_0_0(t);
      t = not_null(m_9);
      {
        ATerm d_1 (ATerm t)
        {
          ATerm e_1 (ATerm t)
          {
            t = term_k_6;
            return(t);
          }
          t = debug_1_0(e_1, t);
          return(t);
        }
        t = if_verbose4_1_0(d_1, t);
        t = read_repository_file_0_0(t);
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_l_6;
              return(t);
            }
            t = say_1_0(g_1, t);
            return(t);
          }
          t = if_verbose6_1_0(f_1, t);
          if(((n_9 != NULL) && (n_9 != t)))
            _fail(t);
          else
            n_9 = t;
          if(((o_9 != NULL) && (o_9 != t)))
            _fail(t);
          else
            o_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_5, not_null(o_9));
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm h_1 (ATerm t)
            {
              ATerm i_1 (ATerm t)
              {
                t = term_m_6;
                return(t);
              }
              t = say_1_0(i_1, t);
              return(t);
            }
            t = if_verbose6_1_0(h_1, t);
            t = (ATerm) ATmakeAppl(sym__3, term_h_5, (ATerm)ATmakeAppl(sym_Imported_1, not_null(l_9)), (ATerm) ATempty);
            t = table_put_0_0(t);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm k_1 (ATerm t)
                {
                  t = term_l_6;
                  return(t);
                }
                t = say_1_0(k_1, t);
                return(t);
              }
              t = if_verbose4_1_0(j_1, t);
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
  ATerm p_9 = NULL;
  if(((p_9 != NULL) && (p_9 != t)))
    _fail(t);
  else
    p_9 = t;
  t = SSL_getenv(not_null(p_9));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_6;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
        ATerm q_6 = t;
        int r_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_6;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(r_6);
          }
        else
          {
            t = q_6;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm q_9 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    t = debug_1_0(m_1, t);
    return(t);
  }
  t = if_verbose5_1_0(l_1, t);
  if(((q_9 != NULL) && (q_9 != t)))
    _fail(t);
  else
    q_9 = t;
  {
    ATerm u_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_7;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(v_6);
      }
    else
      {
        t = u_6;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(q_9);
    {
      ATerm n_1 (ATerm t)
      {
        ATerm o_1 (ATerm t)
        {
          t = term_a_10;
          return(t);
        }
        t = debug_1_0(o_1, t);
        return(t);
      }
      t = if_verbose5_1_0(n_1, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_o_10;
          return(t);
        }
        t = debug_1_0(q_1, t);
        return(t);
      }
      t = if_verbose5_1_0(p_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
            t = xtc_find_loc_0_0(t);
          }
        {
          ATerm r_1 (ATerm t)
          {
            ATerm s_1 (ATerm t)
            {
              t = term_o_10;
              return(t);
            }
            t = debug_1_0(s_1, t);
            return(t);
          }
          t = if_verbose5_1_0(r_1, t);
        }
      }
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      {
        ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL;
        if(((r_9 != NULL) && (r_9 != t)))
          _fail(t);
        else
          r_9 = t;
        if(((s_9 != NULL) && (s_9 != t)))
          _fail(t);
        else
          s_9 = t;
        t = not_null(r_9);
        if(((t_9 != NULL) && (t_9 != t)))
          _fail(t);
        else
          t_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), not_null(t_9)), term_k_11);
        t = error_0_0(t);
        {
          ATerm t_1 (ATerm t)
          {
            t = term_h_5;
            t = table_getlist_0_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_z_12;
                return(t);
              }
              t = debug_1_0(u_1, t);
            }
            return(t);
          }
          t = if_verbose5_1_0(t_1, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm u_9 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((u_9 != NULL) && (u_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(u_9));
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL;
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
      if(((v_9 != NULL) && (v_9 != t)))
        _fail(t);
      else
        v_9 = t;
      if(((w_9 != NULL) && (w_9 != t)))
        _fail(t);
      else
        w_9 = t;
      t = not_null(v_9);
      if(((x_9 != NULL) && (x_9 != t)))
        _fail(t);
      else
        x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), term_v_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_o_14;
          return(t);
        }
        t = debug_1_0(v_1, t);
        _fail(t);
      }
    }
  if(((y_9 != NULL) && (y_9 != t)))
    _fail(t);
  else
    y_9 = t;
  t = read_from_stream_0_0(t);
  if(((z_9 != NULL) && (z_9 != t)))
    _fail(t);
  else
    z_9 = t;
  t = not_null(y_9);
  t = fclose_0_0(t);
  t = not_null(z_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_10 = NULL,e_10 = NULL;
      t = not_null(b_10);
      if(((d_10 != NULL) && (d_10 != t)))
        _fail(t);
      else
        d_10 = t;
      t = term_r_14;
      t = ReadFromFile_0_0(t);
      if(((e_10 != NULL) && (e_10 != t)))
        _fail(t);
      else
        e_10 = t;
    }
  else
    {
      ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((c_10 != NULL) && (c_10 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
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
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((h_10 != NULL) && (h_10 != t)))
        _fail(t);
      else
        h_10 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_15 = ATgetArgument(t, 0);
      if(match_cons(q_15, sym_Stream_1))
        {
          if(((i_10 != NULL) && (i_10 != ATgetArgument(q_15, 0))))
            _fail(ATgetArgument(q_15, 0));
          else
            i_10 = ATgetArgument(q_15, 0);
        }
      else
        _fail(t);
      if(((j_10 != NULL) && (j_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(i_10), not_null(j_10));
  if(((k_10 != NULL) && (k_10 != t)))
    _fail(t);
  else
    k_10 = t;
  if(((l_10 != NULL) && (l_10 != t)))
    _fail(t);
  else
    l_10 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_10));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_10 (ATerm p_10, ATerm q_10, ATerm t)
  {
    ATerm r_10 = NULL;
    t = not_null(p_10);
    if(((r_10 != NULL) && (r_10 != t)))
      _fail(t);
    else
      r_10 = t;
    t = SSL_fclose(not_null(r_10));
    return(t);
  }
  ATerm z_10 (ATerm t_10, ATerm t)
  {
    ATerm v_10 = NULL;
    t = not_null(t_10);
    if(((v_10 != NULL) && (v_10 != t)))
      _fail(t);
    else
      v_10 = t;
    t = SSL_fclose(not_null(v_10));
    return(t);
  }
  ATerm w_10 = NULL,x_10 = NULL;
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_10 = ATgetArgument(t, 0);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_10(not_null(w_10), not_null(x_10), t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = z_10(not_null(x_10), t);
          }
      }
    }
  else
    {
      t = z_10(not_null(x_10), t);
    }
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL,d_11 = NULL;
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
  t = SSL_fopen(not_null(a_11), not_null(b_11));
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(d_11));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  t = SSL_stdin_stream();
  if(((e_11 != NULL) && (e_11 != t)))
    _fail(t);
  else
    e_11 = t;
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_11));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  t = SSL_stdout_stream();
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  if(((h_11 != NULL) && (h_11 != t)))
    _fail(t);
  else
    h_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_11));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  t = SSL_stderr_stream();
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  if(((j_11 != NULL) && (j_11 != t)))
    _fail(t);
  else
    j_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_11));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm l_11 = NULL;
  if(((l_11 != NULL) && (l_11 != t)))
    _fail(t);
  else
    l_11 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(l_11);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(l_11);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(l_11);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(((m_11 != NULL) && (m_11 != t)))
    _fail(t);
  else
    m_11 = t;
  if(((n_11 != NULL) && (n_11 != t)))
    _fail(t);
  else
    n_11 = t;
  t = not_null(m_11);
  if(((o_11 != NULL) && (o_11 != t)))
    _fail(t);
  else
    o_11 = t;
  t = SSL_explode_term(not_null(o_11));
  if(match_cons(t, sym__2))
    {
      ATerm g_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
          {
            if(((q_11 != NULL) && (q_11 != ATgetFirst((ATermList) m_17))))
              _fail(ATgetFirst((ATermList) m_17));
            else
              q_11 = ATgetFirst((ATermList) m_17);
            if(((p_11 != NULL) && (p_11 != (ATerm) ATgetNext((ATermList) m_17))))
              _fail((ATerm) ATgetNext((ATermList) m_17));
            else
              p_11 = (ATerm) ATgetNext((ATermList) m_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(q_11);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      ATerm d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = e_18;
        {
          ATerm f_19 = t;
          int u_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_1 (ATerm t)
              {
                ATerm r_11 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_11 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = not_null(r_11);
                return(t);
              }
              t = _2_0(w_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(u_19);
            }
          else
            {
              t = f_19;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm v_65 (ATerm), ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
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
  t = not_null(s_11);
  if(((u_11 != NULL) && (u_11 != t)))
    _fail(t);
  else
    u_11 = t;
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_11), term_y_19);
  t = open_stream_0_0(t);
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), not_null(t_11));
  t = v_65(t);
  t = fclose_0_0(t);
  t = not_null(t_11);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL;
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = xtc_new_file_0_0(t);
  if(((a_12 != NULL) && (a_12 != t)))
    _fail(t);
  else
    a_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(a_12), not_null(y_11));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(a_12);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_12));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(e_84, f_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm b_12 = NULL;
  if(((b_12 != NULL) && (b_12 != t)))
    _fail(t);
  else
    b_12 = t;
  t = SSL_close_file(not_null(b_12));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_12 != NULL) && (c_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_12 = ATgetArgument(t, 0);
      if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(c_12), not_null(d_12));
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
  ATerm e_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = SSL_int_to_string(not_null(e_12));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(((g_12 != NULL) && (g_12 != t)))
    _fail(t);
  else
    g_12 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      h_12 = ATgetArgument(t, 0);
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
        t = not_null(h_12);
        if(((k_12 != NULL) && (k_12 != t)))
          _fail(t);
        else
          k_12 = t;
        t = not_null(g_12);
        if(((l_12 != NULL) && (l_12 != t)))
          _fail(t);
        else
          l_12 = t;
        t = not_null(k_12);
        t = int_to_string_0_0(t);
        if(((m_12 != NULL) && (m_12 != t)))
          _fail(t);
        else
          m_12 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_20), not_null(m_12)), term_m_20);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          if(((h_12 != NULL) && (h_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            h_12 = ATgetArgument(t, 0);
          if(((i_12 != NULL) && (i_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_12 = ATgetArgument(t, 1);
          if(((j_12 != NULL) && (j_12 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            j_12 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = not_null(h_12);
      if(((n_12 != NULL) && (n_12 != t)))
        _fail(t);
      else
        n_12 = t;
      t = not_null(i_12);
      if(((o_12 != NULL) && (o_12 != t)))
        _fail(t);
      else
        o_12 = t;
      t = not_null(j_12);
      if(((p_12 != NULL) && (p_12 != t)))
        _fail(t);
      else
        p_12 = t;
      t = not_null(g_12);
      if(((q_12 != NULL) && (q_12 != t)))
        _fail(t);
      else
        q_12 = t;
      t = not_null(o_12);
      t = int_to_string_0_0(t);
      if(((r_12 != NULL) && (r_12 != t)))
        _fail(t);
      else
        r_12 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(p_12)), term_e_21), not_null(r_12)), term_z_20), not_null(n_12));
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm b_70 (ATerm), ATerm t)
{
  ATerm s_12 = NULL;
  ATerm x_1 (ATerm t)
  {
    t = b_70(t);
    if(((s_12 != NULL) && (s_12 != t)))
      _fail(t);
    else
      s_12 = t;
    return(t);
  }
  t = fetch_1_0(x_1, t);
  t = not_null(s_12);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm t_12 = NULL;
  if(((t_12 != NULL) && (t_12 != t)))
    _fail(t);
  else
    t_12 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_30), term_c_30), term_y_29), term_u_29), term_r_29), term_n_29), term_j_29), term_f_29), term_b_29), term_x_28), term_t_28), term_p_28), term_l_28), term_h_28), term_d_28), term_z_27), term_v_27), term_s_27), term_o_27), term_b_27), term_l_26), term_h_26), term_k_25), term_q_24), term_z_23), term_t_22), term_x_21), term_l_21);
        {
          ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_30 = ATgetArgument(t, 0);
                if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_12 = ATgetArgument(t, 1);
                {
                  ATerm i_30 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(y_1, t);
        }
        ;
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(t_12));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm u_12 = NULL;
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm j_30 = ATgetArgument(t, 0);
          if(((v_12 != NULL) && (v_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_12 = ATgetArgument(t, 1);
          {
            ATerm k_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = not_null(v_12);
      {
        ATerm l_30 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_30;
          }
        t = signal_from_number_0_0(t);
        t = signal_to_descr_0_0(t);
        if(((w_12 != NULL) && (w_12 != t)))
          _fail(t);
        else
          w_12 = t;
        if(((x_12 != NULL) && (x_12 != t)))
          _fail(t);
        else
          x_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_12)), term_m_30));
        t = printnl_0_0(t);
      }
      return(t);
    }
    t = try_1_0(z_1, t);
    t = not_null(u_12);
  }
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm y_12 = NULL;
  if(((y_12 != NULL) && (y_12 != t)))
    _fail(t);
  else
    y_12 = t;
  t = SSL_waitpid(not_null(y_12));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm i_64 (ATerm), ATerm j_64 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL;
  if(((a_13 != NULL) && (a_13 != t)))
    _fail(t);
  else
    a_13 = t;
  t = fork_0_0(t);
  if(((b_13 != NULL) && (b_13 != t)))
    _fail(t);
  else
    b_13 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL;
        if(((c_13 != NULL) && (c_13 != t)))
          _fail(t);
        else
          c_13 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(a_13);
        t = i_64(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_13), not_null(a_13));
        t = j_64(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm k_64 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  ATerm a_2 (ATerm t)
  {
    ATerm e_13 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((e_13 != NULL) && (e_13 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          e_13 = ATgetArgument(t, 0);
        if(((d_13 != NULL) && (d_13 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          d_13 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(e_13);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm p_30 = ATgetArgument(t, 0);
        if(((ATgetType(p_30) != AT_INT) || (ATgetInt((ATermInt) p_30) != 0)))
          _fail(t);
        {
          ATerm q_30 = ATgetArgument(t, 1);
        }
        {
          ATerm r_30 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(d_13);
    return(t);
  }
  t = fork_2_0(k_64, a_2, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((f_13 != NULL) && (f_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_13 = ATgetArgument(t, 0);
      if(((g_13 != NULL) && (g_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_2 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), not_null(g_13));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(b_2, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm v_83 (ATerm), ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
  if(((h_13 != NULL) && (h_13 != t)))
    _fail(t);
  else
    h_13 = t;
  t = v_83(t);
  t = xtc_find_warning_0_0(t);
  if(((i_13 != NULL) && (i_13 != t)))
    _fail(t);
  else
    i_13 = t;
  t = not_null(h_13);
  if(((j_13 != NULL) && (j_13 != t)))
    _fail(t);
  else
    j_13 = t;
  if(((k_13 != NULL) && (k_13 != t)))
    _fail(t);
  else
    k_13 = t;
  if(((l_13 != NULL) && (l_13 != t)))
    _fail(t);
  else
    l_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(i_13), not_null(l_13));
  t = call_0_0(t);
  t = not_null(j_13);
  return(t);
}
ATerm assert_1_0 (ATerm g_80 (ATerm), ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((m_13 != NULL) && (m_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_13 = ATgetArgument(t, 0);
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_13 != NULL) && (o_13 != t)))
    _fail(t);
  else
    o_13 = t;
  t = g_80(t);
  if(((p_13 != NULL) && (p_13 != t)))
    _fail(t);
  else
    p_13 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(p_13), not_null(m_13), not_null(n_13));
  t = table_push_0_0(t);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), term_u_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_13 != NULL) && (q_13 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_13 = ATgetFirst((ATermList) t);
        if(((r_13 != NULL) && (r_13 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_13 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(p_13), term_u_30, (ATerm) ATinsert(CheckATermList(not_null(r_13)), (ATerm) ATinsert(CheckATermList(not_null(q_13)), not_null(m_13))));
    t = table_put_0_0(t);
    t = not_null(o_13);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm o_65 (ATerm), ATerm t)
{
  ATerm s_13 = NULL;
  if(((s_13 != NULL) && (s_13 != t)))
    _fail(t);
  else
    s_13 = t;
  t = o_65(t);
  {
    ATerm c_2 (ATerm t)
    {
      t = term_v_30;
      return(t);
    }
    t = debug_1_0(c_2, t);
    t = not_null(s_13);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_14 (ATerm w_13, ATerm t)
  {
    ATerm x_13 = NULL;
    t = not_null(w_13);
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
    t = not_null(w_13);
    {
      ATerm w_30 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_30 = ATgetArgument(t, 0);
              ATerm y_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_30;
        }
      {
        ATerm d_2 (ATerm t)
        {
          t = term_z_30;
          return(t);
        }
        t = obsolete_1_0(d_2, t);
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_13), term_y_19);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm h_14 (ATerm y_13, ATerm z_13, ATerm a_14, ATerm t)
  {
    ATerm b_14 = NULL,c_14 = NULL;
    t = not_null(y_13);
    if(((b_14 != NULL) && (b_14 != t)))
      _fail(t);
    else
      b_14 = t;
    t = not_null(z_13);
    if(((c_14 != NULL) && (c_14 != t)))
      _fail(t);
    else
      c_14 = t;
    t = SSL_open_file(not_null(b_14), not_null(c_14));
    return(t);
  }
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  if(match_cons(t, sym__2))
    {
      e_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
      {
        ATerm a_31 = t;
        int b_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_14(not_null(d_14), t);
            ;
            LocalPopChoice(b_31);
          }
        else
          {
            t = a_31;
            t = h_14(not_null(e_14), not_null(f_14), not_null(d_14), t);
          }
      }
    }
  else
    {
      t = g_14(not_null(d_14), t);
    }
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_14 = ATgetArgument(t, 0);
      if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(i_14), not_null(j_14));
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm k_14 = NULL,l_14 = NULL;
  if(((k_14 != NULL) && (k_14 != t)))
    _fail(t);
  else
    k_14 = t;
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), (ATerm) ATinsert(ATempty, term_c_31));
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
  ATerm m_14 = NULL,n_14 = NULL;
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = term_d_31;
  t = new_0_0(t);
  if(((n_14 != NULL) && (n_14 != t)))
    _fail(t);
  else
    n_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), term_e_31);
  t = conc_strings_0_0(t);
  {
    ATerm e_2 (ATerm t)
    {
      t = file_exists_0_0(t);
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(e_2, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL;
  t = new_file_0_0(t);
  if(((p_14 != NULL) && (p_14 != t)))
    _fail(t);
  else
    p_14 = t;
  if(((q_14 != NULL) && (q_14 != t)))
    _fail(t);
  else
    q_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_y_19);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_14), term_d_31);
  {
    ATerm f_2 (ATerm t)
    {
      t = term_f_31;
      return(t);
    }
    t = assert_1_0(f_2, t);
    t = not_null(q_14);
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
      t = not_null(s_14);
      if(((u_14 != NULL) && (u_14 != t)))
        _fail(t);
      else
        u_14 = t;
      t = xtc_new_file_0_0(t);
      if(((v_14 != NULL) && (v_14 != t)))
        _fail(t);
      else
        v_14 = t;
      if(((w_14 != NULL) && (w_14 != t)))
        _fail(t);
      else
        w_14 = t;
      t = m_0(t);
      if(((x_14 != NULL) && (x_14 != t)))
        _fail(t);
      else
        x_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_14)), term_g_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(v_14);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_14));
    }
  else
    {
      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((t_14 != NULL) && (t_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(t_14);
      if(((y_14 != NULL) && (y_14 != t)))
        _fail(t);
      else
        y_14 = t;
      t = not_null(s_14);
      if(((z_14 != NULL) && (z_14 != t)))
        _fail(t);
      else
        z_14 = t;
      t = not_null(y_14);
      t = xtc_new_file_0_0(t);
      if(((a_15 != NULL) && (a_15 != t)))
        _fail(t);
      else
        a_15 = t;
      if(((b_15 != NULL) && (b_15 != t)))
        _fail(t);
      else
        b_15 = t;
      t = m_0(t);
      if(((c_15 != NULL) && (c_15 != t)))
        _fail(t);
      else
        c_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(a_15)), term_g_31), not_null(y_14)), term_h_31));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(a_15);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_15));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm f_62 (ATerm), ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL;
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((e_15 != NULL) && (e_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        e_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = SSLgetAnnotations(not_null(g_15));
  if(((d_15 != NULL) && (d_15 != t)))
    _fail(t);
  else
    d_15 = t;
  t = not_null(e_15);
  t = f_62(t);
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(f_15)), not_null(d_15));
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm x_83 (ATerm), ATerm y_83 (ATerm), ATerm t)
{
  ATerm i_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_31 = t;
      int l_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(l_31);
        }
      else
        {
          t = k_31;
          t = stdin_0_0(t);
        }
      LocalPopChoice(j_31);
      t = xtc_transform_file_2_0(x_83, y_83, t);
    }
  else
    {
      t = i_31;
      t = xtc_transform_term_2_0(x_83, y_83, t);
    }
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    t = term_m_31;
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL;
    if(((k_15 != NULL) && (k_15 != t)))
      _fail(t);
    else
      k_15 = t;
    t = term_d_31;
    t = s_93(t);
    t = xtc_find_0_0(t);
    if(((l_15 != NULL) && (l_15 != t)))
      _fail(t);
    else
      l_15 = t;
    t = not_null(k_15);
    if(((m_15 != NULL) && (m_15 != t)))
      _fail(t);
    else
      m_15 = t;
    t = term_d_31;
    t = pass_v_verbose_0_0(t);
    if(((n_15 != NULL) && (n_15 != t)))
      _fail(t);
    else
      n_15 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(n_15)), not_null(l_15)), term_o_31), term_n_31);
    return(t);
  }
  t = xtc_transform_2_0(g_2, h_2, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((o_15 != NULL) && (o_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_15 = ATgetArgument(t, 0);
      if(((p_15 != NULL) && (p_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(o_15), not_null(p_15));
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
  ATerm i_16 (ATerm t_15, ATerm u_15, ATerm t)
  {
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
    t = not_null(t_15);
    if(((v_15 != NULL) && (v_15 != t)))
      _fail(t);
    else
      v_15 = t;
    t = not_null(u_15);
    if(((w_15 != NULL) && (w_15 != t)))
      _fail(t);
    else
      w_15 = t;
    t = k_0(t);
    if(((x_15 != NULL) && (x_15 != t)))
      _fail(t);
    else
      x_15 = t;
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_15), not_null(x_15));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(v_15));
    }
    return(t);
  }
  ATerm j_16 (ATerm y_15, ATerm z_15, ATerm t)
  {
    ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
    t = not_null(y_15);
    if(((a_16 != NULL) && (a_16 != t)))
      _fail(t);
    else
      a_16 = t;
    t = not_null(z_15);
    if(((b_16 != NULL) && (b_16 != t)))
      _fail(t);
    else
      b_16 = t;
    t = k_0(t);
    if(((c_16 != NULL) && (c_16 != t)))
      _fail(t);
    else
      c_16 = t;
    {
      ATerm r_31 = t;
      if((PushChoice() == 0))
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm u_31 = t;
                int v_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(v_31);
                  }
                else
                  {
                    t = u_31;
                    {
                      ATerm d_16 = NULL;
                      if(((d_16 != NULL) && (d_16 != t)))
                        _fail(t);
                      else
                        d_16 = t;
                      if(((a_16 != NULL) && (a_16 != t)))
                        _fail(t);
                      else
                        a_16 = t;
                      t = not_null(d_16);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_31;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_16), not_null(c_16));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(a_16));
    }
    return(t);
  }
  ATerm e_16 = NULL,f_16 = NULL;
  if(((e_16 != NULL) && (e_16 != t)))
    _fail(t);
  else
    e_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_31 = t;
    int x_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_16(not_null(f_16), not_null(e_16), t);
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
              t = j_16(not_null(f_16), not_null(e_16), t);
              ;
              LocalPopChoice(z_31);
            }
          else
            {
              t = y_31;
              {
                ATerm g_16 = NULL,h_16 = NULL;
                t = not_null(f_16);
                if(((g_16 != NULL) && (g_16 != t)))
                  _fail(t);
                else
                  g_16 = t;
                t = not_null(e_16);
                if(((h_16 != NULL) && (h_16 != t)))
                  _fail(t);
                else
                  h_16 = t;
                t = k_0(t);
                if(((g_16 != NULL) && (g_16 != t)))
                  _fail(t);
                else
                  g_16 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(g_16));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm k_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_32 = ATgetFirst((ATermList) t);
      if(((k_16 != NULL) && (k_16 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        k_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(k_16);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_16 = ATgetArgument(t, 0);
      if(((m_16 != NULL) && (m_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(m_16));
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = (ATerm) ATempty;
      }
    if(((p_16 != NULL) && (p_16 != t)))
      _fail(t);
    else
      p_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(l_16), not_null(m_16), not_null(p_16));
    t = table_put_0_0(t);
    t = not_null(n_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(((q_16 != NULL) && (q_16 != t)))
    _fail(t);
  else
    q_16 = t;
  t = d_80(t);
  if(((r_16 != NULL) && (r_16 != t)))
    _fail(t);
  else
    r_16 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_u_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((t_16 != NULL) && (t_16 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          t_16 = ATgetFirst((ATermList) t);
        if(((s_16 != NULL) && (s_16 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          s_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_16), term_u_30, not_null(s_16));
    t = table_put_0_0(t);
    t = not_null(t_16);
    {
      ATerm i_2 (ATerm t)
      {
        ATerm u_16 = NULL;
        if(((u_16 != NULL) && (u_16 != t)))
          _fail(t);
        else
          u_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(u_16));
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_2, t);
      t = not_null(q_16);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm v_16 = NULL;
  if(((v_16 != NULL) && (v_16 != t)))
    _fail(t);
  else
    v_16 = t;
  t = SSL_remove(not_null(v_16));
  return(t);
}
ATerm restore_always_2_0 (ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_80(t);
      t = z_80(t);
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = z_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
  if(((w_16 != NULL) && (w_16 != t)))
    _fail(t);
  else
    w_16 = t;
  t = c_80(t);
  if(((x_16 != NULL) && (x_16 != t)))
    _fail(t);
  else
    x_16 = t;
  if(((y_16 != NULL) && (y_16 != t)))
    _fail(t);
  else
    y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_16), term_u_30);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATempty;
      }
    if(((z_16 != NULL) && (z_16 != t)))
      _fail(t);
    else
      z_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(x_16), term_u_30, (ATerm) ATinsert(CheckATermList(not_null(z_16)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(w_16);
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm h_83 (ATerm), ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = term_f_31;
    return(t);
  }
  t = begin_scope_1_0(j_2, t);
  {
    ATerm k_2 (ATerm t)
    {
      ATerm c_17 = NULL;
      if(((c_17 != NULL) && (c_17 != t)))
        _fail(t);
      else
        c_17 = t;
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_32;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((b_17 != NULL) && (b_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              b_17 = ATgetFirst((ATermList) t);
            if(((a_17 != NULL) && (a_17 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              a_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(b_17);
        {
          ATerm l_2 (ATerm t)
          {
            t = try_1_0(remove_file_0_0, t);
            return(t);
          }
          t = map_1_0(l_2, t);
          t = not_null(c_17);
          {
            ATerm m_2 (ATerm t)
            {
              t = term_f_31;
              return(t);
            }
            t = end_scope_1_0(m_2, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(h_83, k_2, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm i_83 (ATerm), ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
        if(((d_17 != NULL) && (d_17 != t)))
          _fail(t);
        else
          d_17 = t;
        if(((e_17 != NULL) && (e_17 != t)))
          _fail(t);
        else
          e_17 = t;
        t = term_h_31;
        t = get_config_0_0(t);
        if(((f_17 != NULL) && (f_17 != t)))
          _fail(t);
        else
          f_17 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(f_17));
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = term_r_14;
      }
    t = i_83(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm o_32 = t;
        int p_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_g_31;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(p_32);
          }
        else
          {
            t = o_32;
            t = term_q_32;
          }
        return(t);
      }
      t = copy_to_1_0(o_2, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(n_2, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm h_17 = NULL;
    if(((h_17 != NULL) && (h_17 != t)))
      _fail(t);
    else
      h_17 = t;
    if(match_string(t, "-k"))
      {
        t = not_null(h_17);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = not_null(h_17);
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
    if(((i_17 != NULL) && (i_17 != t)))
      _fail(t);
    else
      i_17 = t;
    if(((j_17 != NULL) && (j_17 != t)))
      _fail(t);
    else
      j_17 = t;
    t = string_to_int_0_0(t);
    if(((k_17 != NULL) && (k_17 != t)))
      _fail(t);
    else
      k_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_32, not_null(k_17));
    t = set_config_0_0(t);
    t = not_null(i_17);
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_s_32;
    return(t);
  }
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm l_17 = NULL;
  if(((l_17 != NULL) && (l_17 != t)))
    _fail(t);
  else
    l_17 = t;
  t = SSL_string_to_int(not_null(l_17));
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_32 = t;
  int u_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm n_17 = NULL;
        if(((n_17 != NULL) && (n_17 != t)))
          _fail(t);
        else
          n_17 = t;
        if(match_string(t, "-S"))
          {
            t = not_null(n_17);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = not_null(n_17);
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        ATerm o_17 = NULL;
        if(((o_17 != NULL) && (o_17 != t)))
          _fail(t);
        else
          o_17 = t;
        t = term_w_32;
        t = set_config_0_0(t);
        t = term_x_32;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_y_32;
        return(t);
      }
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(u_32);
    }
  else
    {
      t = t_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
              if(((p_17 != NULL) && (p_17 != t)))
                _fail(t);
              else
                p_17 = t;
              if(((q_17 != NULL) && (q_17 != t)))
                _fail(t);
              else
                q_17 = t;
              t = string_to_int_0_0(t);
              if(((r_17 != NULL) && (r_17 != t)))
                _fail(t);
              else
                r_17 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_y_4, not_null(r_17));
              t = set_config_0_0(t);
              t = not_null(p_17);
              if(((s_17 != NULL) && (s_17 != t)))
                _fail(t);
              else
                s_17 = t;
              if(((t_17 != NULL) && (t_17 != t)))
                _fail(t);
              else
                t_17 = t;
              t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(t_17));
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_b_33;
              return(t);
            }
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm y_2 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                ATerm u_17 = NULL;
                if(((u_17 != NULL) && (u_17 != t)))
                  _fail(t);
                else
                  u_17 = t;
                t = term_d_33;
                t = set_config_0_0(t);
                t = term_e_33;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_f_33;
                return(t);
              }
              t = Option_3_0(y_2, z_2, a_3, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm w_17 = NULL;
    if(((w_17 != NULL) && (w_17 != t)))
      _fail(t);
    else
      w_17 = t;
    if(match_string(t, "-o"))
      {
        t = not_null(w_17);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = not_null(w_17);
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
    if(((x_17 != NULL) && (x_17 != t)))
      _fail(t);
    else
      x_17 = t;
    if(((y_17 != NULL) && (y_17 != t)))
      _fail(t);
    else
      y_17 = t;
    if(((z_17 != NULL) && (z_17 != t)))
      _fail(t);
    else
      z_17 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_31, not_null(z_17));
    t = set_config_0_0(t);
    t = not_null(x_17);
    if(((a_18 != NULL) && (a_18 != t)))
      _fail(t);
    else
      a_18 = t;
    if(((b_18 != NULL) && (b_18 != t)))
      _fail(t);
    else
      b_18 = t;
    t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_18));
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_i_33;
    return(t);
  }
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm e_3 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_3 (ATerm t)
        {
          ATerm c_18 = NULL;
          if(((c_18 != NULL) && (c_18 != t)))
            _fail(t);
          else
            c_18 = t;
          t = term_m_33;
          t = set_config_0_0(t);
          t = term_n_33;
          return(t);
        }
        ATerm g_3 (ATerm t)
        {
          t = term_o_33;
          return(t);
        }
        t = Option_3_0(e_3, f_3, g_3, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL;
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(f_18);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((g_18 != NULL) && (g_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            g_18 = ATgetFirst((ATermList) t);
          if(((h_18 != NULL) && (h_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(h_18);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_18 != NULL) && (i_18 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_18 = ATgetFirst((ATermList) t);
          if(((j_18 != NULL) && (j_18 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(g_18);
      if(((k_18 != NULL) && (k_18 != t)))
        _fail(t);
      else
        k_18 = t;
      t = not_null(i_18);
      if(((l_18 != NULL) && (l_18 != t)))
        _fail(t);
      else
        l_18 = t;
      t = not_null(j_18);
      if(((m_18 != NULL) && (m_18 != t)))
        _fail(t);
      else
        m_18 = t;
      t = not_null(f_18);
      if(((n_18 != NULL) && (n_18 != t)))
        _fail(t);
      else
        n_18 = t;
      t = not_null(k_18);
      t = h_0(t);
      t = not_null(n_18);
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = not_null(l_18);
      t = i_0(t);
      if(((p_18 != NULL) && (p_18 != t)))
        _fail(t);
      else
        p_18 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(m_18)), not_null(p_18));
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm r_18 = NULL;
    if(((r_18 != NULL) && (r_18 != t)))
      _fail(t);
    else
      r_18 = t;
    if(match_string(t, "-i"))
      {
        t = not_null(r_18);
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = not_null(r_18);
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
    if(((s_18 != NULL) && (s_18 != t)))
      _fail(t);
    else
      s_18 = t;
    if(((t_18 != NULL) && (t_18 != t)))
      _fail(t);
    else
      t_18 = t;
    if(((u_18 != NULL) && (u_18 != t)))
      _fail(t);
    else
      u_18 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_h_31, not_null(u_18));
    t = set_config_0_0(t);
    t = not_null(s_18);
    if(((v_18 != NULL) && (v_18 != t)))
      _fail(t);
    else
      v_18 = t;
    if(((w_18 != NULL) && (w_18 != t)))
      _fail(t);
    else
      w_18 = t;
    t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_18));
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_p_33;
    return(t);
  }
  t = ArgOption_3_0(h_3, i_3, j_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = s_33;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(((x_18 != NULL) && (x_18 != t)))
    _fail(t);
  else
    x_18 = t;
  if(((y_18 != NULL) && (y_18 != t)))
    _fail(t);
  else
    y_18 = t;
  t = term_d_31;
  t = whoami_0_0(t);
  if(((z_18 != NULL) && (z_18 != t)))
    _fail(t);
  else
    z_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_33), not_null(z_18)), term_u_33));
  t = printnl_0_0(t);
  t = term_b_5;
  t = exit_0_0(t);
  t = not_null(x_18);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  t = report_run_time_0_0(t);
  if(((a_19 != NULL) && (a_19 != t)))
    _fail(t);
  else
    a_19 = t;
  t = term_d_31;
  t = whoami_0_0(t);
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, term_w_33), not_null(b_19)));
  t = printnl_0_0(t);
  t = term_b_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm c_19 = NULL;
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  t = SSL_TicksToSeconds(not_null(c_19));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_19 != NULL) && (d_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_19 = ATgetArgument(t, 0);
      if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(d_19), not_null(e_19));
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = SSL_addr(not_null(d_19), not_null(e_19));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm f_76 (ATerm), ATerm g_76 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = f_76(t);
      ;
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
        if(((g_19 != NULL) && (g_19 != t)))
          _fail(t);
        else
          g_19 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((h_19 != NULL) && (h_19 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              h_19 = ATgetFirst((ATermList) t);
            if(((i_19 != NULL) && (i_19 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              i_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
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
        t = not_null(g_19);
        if(((l_19 != NULL) && (l_19 != t)))
          _fail(t);
        else
          l_19 = t;
        t = not_null(k_19);
        t = foldr_2_0(f_76, g_76, t);
        if(((m_19 != NULL) && (m_19 != t)))
          _fail(t);
        else
          m_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(m_19));
        t = g_76(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm d_74 (ATerm), ATerm e_74 (ATerm), ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = not_null(n_19);
  if(((p_19 != NULL) && (p_19 != t)))
    _fail(t);
  else
    p_19 = t;
  t = SSL_explode_term(not_null(p_19));
  if(match_cons(t, sym__2))
    {
      ATerm c_34 = ATgetArgument(t, 0);
      if(((q_19 != NULL) && (q_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(q_19);
  t = foldr_2_0(d_74, e_74, t);
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
    ATerm k_3 (ATerm t)
    {
      t = term_v_32;
      return(t);
    }
    t = crush_2_0(k_3, add_0_0, t);
    t = ticks_to_seconds_0_0(t);
  }
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_19 = ATgetArgument(t, 0);
      if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  {
    ATerm d_34 = t;
    int e_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(r_19), not_null(s_19));
        ;
        LocalPopChoice(e_34);
      }
    else
      {
        t = d_34;
        t = SSL_gtr(not_null(r_19), not_null(s_19));
      }
    t = not_null(t_19);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_19 = NULL;
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_19 = NULL,x_19 = NULL,z_19 = NULL;
      if(((w_19 != NULL) && (w_19 != t)))
        _fail(t);
      else
        w_19 = t;
      if(match_cons(t, sym__2))
        {
          if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_19 = ATgetArgument(t, 0);
          if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_19);
      if(((v_19 != NULL) && (v_19 != t)))
        _fail(t);
      else
        v_19 = t;
      t = not_null(z_19);
      if(((v_19 != NULL) && (v_19 != t)))
        _fail(t);
      else
        v_19 = t;
      t = not_null(w_19);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL;
    if(((a_20 != NULL) && (a_20 != t)))
      _fail(t);
    else
      a_20 = t;
    if(((b_20 != NULL) && (b_20 != t)))
      _fail(t);
    else
      b_20 = t;
    t = term_y_4;
    t = get_config_0_0(t);
    if(((c_20 != NULL) && (c_20 != t)))
      _fail(t);
    else
      c_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_20), term_b_5);
    t = geq_0_0(t);
    t = not_null(a_20);
    t = d_81(t);
    return(t);
  }
  t = try_1_0(l_3, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm m_3 (ATerm t)
  {
    ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
    if(((d_20 != NULL) && (d_20 != t)))
      _fail(t);
    else
      d_20 = t;
    t = run_time_0_0(t);
    if(((e_20 != NULL) && (e_20 != t)))
      _fail(t);
    else
      e_20 = t;
    t = not_null(d_20);
    if(((f_20 != NULL) && (f_20 != t)))
      _fail(t);
    else
      f_20 = t;
    t = term_d_31;
    t = whoami_0_0(t);
    if(((g_20 != NULL) && (g_20 != t)))
      _fail(t);
    else
      g_20 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_34), not_null(e_20)), term_z_20), not_null(g_20)));
    t = printnl_0_0(t);
    return(t);
  }
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_v_32;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1_0 (ATerm j_85 (ATerm), ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0_0(t);
              ;
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              {
                ATerm n_34 = t;
                int o_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(o_34);
                  }
                else
                  {
                    t = n_34;
                    t = Version_0_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(n_3, t);
      }
    }
  t = j_85(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_20 = NULL;
  if(((h_20 != NULL) && (h_20 != t)))
    _fail(t);
  else
    h_20 = t;
  t = SSL_table_create(not_null(h_20));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(((i_20 != NULL) && (i_20 != t)))
    _fail(t);
  else
    i_20 = t;
  if(((j_20 != NULL) && (j_20 != t)))
    _fail(t);
  else
    j_20 = t;
  t = term_p_34;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_34, term_q_34, not_null(i_20));
  t = table_put_0_0(t);
  t = not_null(j_20);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_20 = NULL;
  if(((k_20 != NULL) && (k_20 != t)))
    _fail(t);
  else
    k_20 = t;
  t = SSL_table_destroy(not_null(k_20));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm l_20 = NULL;
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  t = SSL_exit(not_null(l_20));
  return(t);
}
ATerm long_description_1_0 (ATerm f_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(((p_20 != NULL) && (p_20 != t)))
    _fail(t);
  else
    p_20 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_20 = ATgetFirst((ATermList) t);
      o_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
        t = not_null(n_20);
        if(((q_20 != NULL) && (q_20 != t)))
          _fail(t);
        else
          q_20 = t;
        t = not_null(o_20);
        if(((r_20 != NULL) && (r_20 != t)))
          _fail(t);
        else
          r_20 = t;
        if(((s_20 != NULL) && (s_20 != t)))
          _fail(t);
        else
          s_20 = t;
        if(((t_20 != NULL) && (t_20 != t)))
          _fail(t);
        else
          t_20 = t;
        t = g_0(t);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        t = not_null(t_20);
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = not_null(q_20);
        t = e_0(t);
        if(((w_20 != NULL) && (w_20 != t)))
          _fail(t);
        else
          w_20 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(w_20));
        if(((x_20 != NULL) && (x_20 != t)))
          _fail(t);
        else
          x_20 = t;
        t = not_null(s_20);
        {
          ATerm o_3 (ATerm t)
          {
            t = not_null(x_20);
            return(t);
          }
          t = reverse_acc_2_0(e_0, o_3, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_31;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, p_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm e_87 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,h_21 = NULL,i_21 = NULL,n_21 = NULL;
  if(((d_21 != NULL) && (d_21 != t)))
    _fail(t);
  else
    d_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((b_21 != NULL) && (b_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((h_21 != NULL) && (h_21 != t)))
    _fail(t);
  else
    h_21 = t;
  t = SSLgetAnnotations(not_null(d_21));
  if(((a_21 != NULL) && (a_21 != t)))
    _fail(t);
  else
    a_21 = t;
  t = not_null(b_21);
  t = m_62(t);
  if(((c_21 != NULL) && (c_21 != t)))
    _fail(t);
  else
    c_21 = t;
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_21)), not_null(a_21));
  if(((i_21 != NULL) && (i_21 != t)))
    _fail(t);
  else
    i_21 = t;
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_21 = NULL;
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_33;
      t = get_config_0_0(t);
      if(((o_21 != NULL) && (o_21 != t)))
        _fail(t);
      else
        o_21 = t;
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm q_3 (ATerm t)
        {
          ATerm r_3 (ATerm t)
          {
            if(((o_21 != NULL) && (o_21 != t)))
              _fail(t);
            else
              o_21 = t;
            return(t);
          }
          t = Program_1_0(r_3, t);
          return(t);
        }
        t = option_defined_1_0(q_3, t);
      }
    }
  {
    ATerm s_3 (ATerm t)
    {
      ATerm t_3 (ATerm t)
      {
        t = not_null(o_21);
        return(t);
      }
      t = short_description_1_0(t_3, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(s_3, t);
    t = term_t_34;
    t = echo_0_0(t);
    t = term_w_34;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    {
      ATerm u_3 (ATerm t)
      {
        ATerm p_21 = NULL,q_21 = NULL;
        if(((p_21 != NULL) && (p_21 != t)))
          _fail(t);
        else
          p_21 = t;
        if(((q_21 != NULL) && (q_21 != t)))
          _fail(t);
        else
          q_21 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_21)), term_x_34);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(u_3, t);
      {
        ATerm v_3 (ATerm t)
        {
          ATerm t_21 = NULL,u_21 = NULL;
          if(((t_21 != NULL) && (t_21 != t)))
            _fail(t);
          else
            t_21 = t;
          {
            ATerm w_3 (ATerm t)
            {
              t = not_null(o_21);
              return(t);
            }
            t = long_description_1_0(w_3, t);
            if(((u_21 != NULL) && (u_21 != t)))
              _fail(t);
            else
              u_21 = t;
            t = (ATerm) ATinsert(CheckATermList(not_null(u_21)), term_y_34);
            t = echo_0_0(t);
          }
          return(t);
        }
        t = try_1_0(v_3, t);
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
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL,z_21 = NULL;
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
  if(((z_21 != NULL) && (z_21 != t)))
    _fail(t);
  else
    z_21 = t;
  t = SSL_printnl(not_null(v_21), not_null(w_21));
  t = not_null(z_21);
  return(t);
}
ATerm Undefined_1_0 (ATerm n_62 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((b_22 != NULL) && (b_22 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  t = SSLgetAnnotations(not_null(d_22));
  if(((a_22 != NULL) && (a_22 != t)))
    _fail(t);
  else
    a_22 = t;
  t = not_null(b_22);
  t = n_62(t);
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_22)), not_null(a_22));
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm z_69 (ATerm), ATerm t)
{
  ATerm h_22 (ATerm t)
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_69, _id, t);
        ;
        LocalPopChoice(c_35);
      }
    else
      {
        t = b_35;
        t = Cons_2_0(_id, h_22, t);
      }
    return(t);
  }
  t = h_22(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm e_86 (ATerm), ATerm t)
{
  t = fetch_1_0(e_86, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(j_22);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((k_22 != NULL) && (k_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            k_22 = ATgetFirst((ATermList) t);
          if(((l_22 != NULL) && (l_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(j_22);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,r_22 = NULL;
  if(((m_22 != NULL) && (m_22 != t)))
    _fail(t);
  else
    m_22 = t;
  if(((n_22 != NULL) && (n_22 != t)))
    _fail(t);
  else
    n_22 = t;
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
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
          t = not_null(o_22);
          if(((q_22 != NULL) && (q_22 != t)))
            _fail(t);
          else
            q_22 = t;
          t = (ATerm) ATinsert(ATempty, not_null(q_22));
        }
      }
    if(((r_22 != NULL) && (r_22 != t)))
      _fail(t);
    else
      r_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_32, not_null(r_22));
    t = printnl_0_0(t);
    t = not_null(m_22);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_33;
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
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm s_22 = NULL;
  if(((s_22 != NULL) && (s_22 != t)))
    _fail(t);
  else
    s_22 = t;
  t = SSL_implode_string(not_null(s_22));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_22 != NULL) && (v_22 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_22 = ATgetFirst((ATermList) t);
            if(((w_22 != NULL) && (w_22 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              w_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_22);
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        t = not_null(w_22);
        if(((y_22 != NULL) && (y_22 != t)))
          _fail(t);
        else
          y_22 = t;
        t = not_null(x_22);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(y_22);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(x_3, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  if(((a_23 != NULL) && (a_23 != t)))
    _fail(t);
  else
    a_23 = t;
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = not_null(a_23);
  if(((c_23 != NULL) && (c_23 != t)))
    _fail(t);
  else
    c_23 = t;
  t = SSL_explode_term(not_null(c_23));
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((d_23 != NULL) && (d_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(d_23);
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_70 (ATerm), ATerm t)
{
  ATerm e_23 (ATerm t)
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, e_23, t);
        ;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = Nil_0_0(t);
        t = f_70(t);
      }
    return(t);
  }
  t = e_23(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_23 != NULL) && (g_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_23 = ATgetArgument(t, 0);
      if(((f_23 != NULL) && (f_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(g_23);
  {
    ATerm y_3 (ATerm t)
    {
      t = not_null(f_23);
      return(t);
    }
    t = at_end_1_0(y_3, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm h_23 = NULL;
  if(((h_23 != NULL) && (h_23 != t)))
    _fail(t);
  else
    h_23 = t;
  t = SSL_explode_string(not_null(h_23));
  return(t);
}
ATerm _2_0 (ATerm x_55 (ATerm), ATerm y_55 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  if(match_cons(t, sym__2))
    {
      if(((j_23 != NULL) && (j_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_23 = ATgetArgument(t, 0);
      if(((k_23 != NULL) && (k_23 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = SSLgetAnnotations(not_null(n_23));
  if(((i_23 != NULL) && (i_23 != t)))
    _fail(t);
  else
    i_23 = t;
  t = not_null(j_23);
  t = x_55(t);
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = not_null(k_23);
  t = y_55(t);
  if(((m_23 != NULL) && (m_23 != t)))
    _fail(t);
  else
    m_23 = t;
  if(((q_23 != NULL) && (q_23 != t)))
    _fail(t);
  else
    q_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_23), not_null(m_23)), not_null(i_23));
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm h_65 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL;
  if(((r_23 != NULL) && (r_23 != t)))
    _fail(t);
  else
    r_23 = t;
  if(((s_23 != NULL) && (s_23 != t)))
    _fail(t);
  else
    s_23 = t;
  t = h_65(t);
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  t = not_null(s_23);
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  if(((v_23 != NULL) && (v_23 != t)))
    _fail(t);
  else
    v_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_23)), not_null(t_23)));
  t = printnl_0_0(t);
  t = not_null(r_23);
  return(t);
}
ATerm map_1_0 (ATerm o_69 (ATerm), ATerm t)
{
  ATerm w_23 (ATerm t)
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = Cons_2_0(o_69, w_23, t);
      }
    return(t);
  }
  t = w_23(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm x_23 = NULL;
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  t = SSL_is_string(not_null(x_23));
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
      ;
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(z_3, t);
            ;
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            {
              ATerm r_24 (ATerm a_24, ATerm b_24, ATerm t)
              {
                ATerm c_24 = NULL;
                t = not_null(a_24);
                if(((c_24 != NULL) && (c_24 != t)))
                  _fail(t);
                else
                  c_24 = t;
                {
                  ATerm u_35 = t;
                  int v_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(v_35);
                    }
                  else
                    {
                      t = u_35;
                      {
                        ATerm a_4 (ATerm t)
                        {
                          t = term_w_35;
                          return(t);
                        }
                        t = debug_1_0(a_4, t);
                        _fail(t);
                      }
                    }
                }
                return(t);
              }
              ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
              if(((d_24 != NULL) && (d_24 != t)))
                _fail(t);
              else
                d_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_24 = ATgetArgument(t, 0);
                  {
                    ATerm g_24 = NULL;
                    t = not_null(e_24);
                    if(((g_24 != NULL) && (g_24 != t)))
                      _fail(t);
                    else
                      g_24 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_24 = ATgetArgument(t, 0);
                      t = r_24(not_null(e_24), not_null(d_24), t);
                    }
                  else
                    {
                      ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((e_24 != NULL) && (e_24 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            e_24 = ATgetArgument(t, 0);
                          if(((f_24 != NULL) && (f_24 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            f_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(e_24);
                      if(((h_24 != NULL) && (h_24 != t)))
                        _fail(t);
                      else
                        h_24 = t;
                      t = not_null(f_24);
                      if(((i_24 != NULL) && (i_24 != t)))
                        _fail(t);
                      else
                        i_24 = t;
                      t = not_null(d_24);
                      if(((j_24 != NULL) && (j_24 != t)))
                        _fail(t);
                      else
                        j_24 = t;
                      t = not_null(h_24);
                      t = eval_config_0_0(t);
                      if(((k_24 != NULL) && (k_24 != t)))
                        _fail(t);
                      else
                        k_24 = t;
                      t = not_null(j_24);
                      if(((l_24 != NULL) && (l_24 != t)))
                        _fail(t);
                      else
                        l_24 = t;
                      t = not_null(i_24);
                      t = eval_config_0_0(t);
                      if(((m_24 != NULL) && (m_24 != t)))
                        _fail(t);
                      else
                        m_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_24), not_null(m_24));
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
  ATerm s_24 = NULL;
  if(((s_24 != NULL) && (s_24 != t)))
    _fail(t);
  else
    s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_35, not_null(s_24));
  t = table_get_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm t_24 = NULL,u_24 = NULL,y_24 = NULL;
      t = eval_config_0_0(t);
      if(((t_24 != NULL) && (t_24 != t)))
        _fail(t);
      else
        t_24 = t;
      if(((u_24 != NULL) && (u_24 != t)))
        _fail(t);
      else
        u_24 = t;
      if(((y_24 != NULL) && (y_24 != t)))
        _fail(t);
      else
        y_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_35, not_null(s_24), not_null(y_24));
      t = table_put_0_0(t);
      t = not_null(t_24);
      return(t);
    }
    t = try_1_0(b_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_80(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_d_36;
        t = set_config_0_0(t);
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_e_36;
        return(t);
      }
      t = Option_3_0(c_4, d_4, e_4, t);
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm f_4 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_4 (ATerm t)
        {
          ATerm z_24 = NULL;
          if(((z_24 != NULL) && (z_24 != t)))
            _fail(t);
          else
            z_24 = t;
          t = term_d_36;
          t = set_config_0_0(t);
          t = term_f_36;
          t = set_config_0_0(t);
          t = term_g_36;
          return(t);
        }
        ATerm h_4 (ATerm t)
        {
          t = term_h_36;
          return(t);
        }
        t = Option_3_0(f_4, g_4, h_4, t);
      }
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_25 = ATgetArgument(t, 0);
      if(((b_25 != NULL) && (b_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        b_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(a_25), not_null(b_25));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((c_25 != NULL) && (c_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_25 = ATgetArgument(t, 0);
      if(((d_25 != NULL) && (d_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_25 = ATgetArgument(t, 1);
      if(((e_25 != NULL) && (e_25 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        e_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((f_25 != NULL) && (f_25 != t)))
    _fail(t);
  else
    f_25 = t;
  if(((g_25 != NULL) && (g_25 != t)))
    _fail(t);
  else
    g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_25), not_null(d_25));
  {
    ATerm i_36 = t;
    int j_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(j_36);
      }
    else
      {
        t = i_36;
        t = (ATerm) ATempty;
      }
    if(((h_25 != NULL) && (h_25 != t)))
      _fail(t);
    else
      h_25 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(c_25), not_null(d_25), (ATerm) ATinsert(CheckATermList(not_null(h_25)), not_null(e_25)));
    t = table_put_0_0(t);
    t = not_null(f_25);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = term_d_31;
  t = j_87(t);
  if(((j_25 != NULL) && (j_25 != t)))
    _fail(t);
  else
    j_25 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_34, term_v_34, not_null(j_25));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm l_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(l_25);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_25 != NULL) && (o_25 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_25 = ATgetFirst((ATermList) t);
          if(((p_25 != NULL) && (p_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_25);
      if(((q_25 != NULL) && (q_25 != t)))
        _fail(t);
      else
        q_25 = t;
      t = not_null(p_25);
      if(((r_25 != NULL) && (r_25 != t)))
        _fail(t);
      else
        r_25 = t;
      t = not_null(l_25);
      if(((s_25 != NULL) && (s_25 != t)))
        _fail(t);
      else
        s_25 = t;
      t = not_null(q_25);
      t = a_0(t);
      t = not_null(s_25);
      if(((t_25 != NULL) && (t_25 != t)))
        _fail(t);
      else
        t_25 = t;
      t = term_d_31;
      t = c_0(t);
      if(((u_25 != NULL) && (u_25 != t)))
        _fail(t);
      else
        u_25 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(r_25)), not_null(u_25));
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm i_4 (ATerm t)
  {
    ATerm w_25 = NULL;
    if(((w_25 != NULL) && (w_25 != t)))
      _fail(t);
    else
      w_25 = t;
    if(match_string(t, "--help"))
      {
        t = not_null(w_25);
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = not_null(w_25);
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = not_null(w_25);
          }
      }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_k_36;
    t = set_config_0_0(t);
    t = term_l_36;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = term_m_36;
    return(t);
  }
  t = Option_3_0(i_4, j_4, k_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm x_25 = NULL,y_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((x_25 != NULL) && (x_25 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        x_25 = ATgetFirst((ATermList) t);
      if(((y_25 != NULL) && (y_25 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        y_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(y_25)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_25)));
  return(t);
}
ATerm Cons_2_0 (ATerm g_57 (ATerm), ATerm h_57 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,m_26 = NULL;
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((a_26 != NULL) && (a_26 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        a_26 = ATgetFirst((ATermList) t);
      if(((b_26 != NULL) && (b_26 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        b_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = SSLgetAnnotations(not_null(e_26));
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  t = not_null(a_26);
  t = g_57(t);
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  t = not_null(b_26);
  t = h_57(t);
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  if(((m_26 != NULL) && (m_26 != t)))
    _fail(t);
  else
    m_26 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(d_26)), not_null(c_26)), not_null(z_25));
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
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
  ATerm n_26 = NULL,o_26 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_26 != NULL) && (n_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_26 = ATgetArgument(t, 0);
      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_x_35, not_null(n_26), not_null(o_26));
  t = table_put_0_0(t);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_87 (ATerm), ATerm t)
{
  ATerm p_26 = NULL;
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  {
    ATerm l_4 (ATerm t)
    {
      t = term_n_36;
      t = h_87(t);
      return(t);
    }
    t = try_1_0(l_4, t);
    t = not_null(p_26);
    {
      ATerm m_4 (ATerm t)
      {
        ATerm q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
        if(((q_26 != NULL) && (q_26 != t)))
          _fail(t);
        else
          q_26 = t;
        if(((r_26 != NULL) && (r_26 != t)))
          _fail(t);
        else
          r_26 = t;
        if(((t_26 != NULL) && (t_26 != t)))
          _fail(t);
        else
          t_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_33, not_null(t_26));
        t = set_config_0_0(t);
        t = not_null(q_26);
        if(((u_26 != NULL) && (u_26 != t)))
          _fail(t);
        else
          u_26 = t;
        if(((v_26 != NULL) && (v_26 != t)))
          _fail(t);
        else
          v_26 = t;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_26));
        return(t);
      }
      ATerm n_4 (ATerm t)
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_36 = t;
            int r_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(r_36);
              }
            else
              {
                t = q_36;
                t = h_87(t);
                t = Cons_2_0(_id, n_4, t);
              }
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(m_4, n_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,d_27 = NULL;
  if(((x_26 != NULL) && (x_26 != t)))
    _fail(t);
  else
    x_26 = t;
  if(match_cons(t, sym__3))
    {
      if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        y_26 = ATgetArgument(t, 0);
      if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        z_26 = ATgetArgument(t, 1);
      if(((d_27 != NULL) && (d_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        d_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(y_26), not_null(z_26), not_null(d_27));
  t = not_null(x_26);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_87 (ATerm), ATerm t)
{
  ATerm g_27 = NULL,h_27 = NULL,m_27 = NULL;
  if(((g_27 != NULL) && (g_27 != t)))
    _fail(t);
  else
    g_27 = t;
  t = term_s_36;
  t = table_put_0_0(t);
  t = not_null(g_27);
  {
    ATerm o_4 (ATerm t)
    {
      ATerm t_36 = t;
      int u_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_87(t);
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
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(w_36);
              }
            else
              {
                t = v_36;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_4, t);
    {
      ATerm p_4 (ATerm t)
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_27 (ATerm i_27, ATerm t)
            {
              ATerm j_27 = NULL;
              t = not_null(i_27);
              if(((j_27 != NULL) && (j_27 != t)))
                _fail(t);
              else
                j_27 = t;
              t = not_null(i_27);
              {
                ATerm z_36 = t;
                int a_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_k_34;
                    t = get_config_0_0(t);
                    ;
                    LocalPopChoice(a_37);
                  }
                else
                  {
                    t = z_36;
                    t = option_defined_1_0(Help_0_0, t);
                  }
                t = not_null(j_27);
                t = system_usage_0_0(t);
                t = term_v_32;
                t = exit_0_0(t);
              }
              return(t);
            }
            ATerm k_27 = NULL;
            if(((k_27 != NULL) && (k_27 != t)))
              _fail(t);
            else
              k_27 = t;
            {
              ATerm b_37 = t;
              int c_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_27(not_null(k_27), t);
                  ;
                  LocalPopChoice(c_37);
                }
              else
                {
                  t = b_37;
                  {
                    ATerm l_27 = NULL;
                    t = not_null(k_27);
                    if(((l_27 != NULL) && (l_27 != t)))
                      _fail(t);
                    else
                      l_27 = t;
                    t = term_c_36;
                    t = get_config_0_0(t);
                    t = not_null(l_27);
                    t = system_about_0_0(t);
                    t = term_v_32;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm q_4 (ATerm t)
              {
                ATerm r_4 (ATerm t)
                {
                  if(((h_27 != NULL) && (h_27 != t)))
                    _fail(t);
                  else
                    h_27 = t;
                  return(t);
                }
                t = Undefined_1_0(r_4, t);
                return(t);
              }
              t = option_defined_1_0(q_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_g_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_27)), term_d_37));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_b_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(p_4, t);
      if(((m_27 != NULL) && (m_27 != t)))
        _fail(t);
      else
        m_27 = t;
      t = term_u_34;
      t = table_destroy_0_0(t);
      t = not_null(m_27);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm), ATerm o_85 (ATerm), ATerm t)
{
  t = parse_options_1_0(l_85, t);
  t = store_options_0_0(t);
  t = n_85(t);
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_85, t);
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
              t = o_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_37);
            }
          else
            {
              t = g_37;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm t)
{
  t = option_wrap_4_0(p_85, default_usage_0_0, _id, q_85, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_83(t);
        ;
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = xtc_io_1_0(n_83, t);
    return(t);
  }
  t = option_wrap_2_0(s_4, t_4, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm l_83 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, l_83, t);
  return(t);
}
ATerm io_parse_box_0_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm v_4 (ATerm t)
    {
      t = term_k_37;
      return(t);
    }
    t = xtc_sglr_1_0(v_4, t);
    t = xtc_implode_asfix_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(u_4, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_parse_box_0_0(t);
  return(t);
}
