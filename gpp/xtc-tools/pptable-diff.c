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
ATerm term_l_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_p_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_g_37;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_l_36;
ATerm term_a_36;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_c_34;
ATerm term_n_33;
ATerm term_w_32;
ATerm term_t_32;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_f_31;
ATerm term_y_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_z_28;
ATerm term_o_27;
ATerm term_i_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_x_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_a_25;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_e_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_q_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_c_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_u_22;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
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
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_g_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_m_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_i_12;
ATerm term_e_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_m_11;
ATerm term_i_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_y_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_t_9;
ATerm term_l_9;
void init_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_10, term_t_9, term_f_11);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_11, term_m_11, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_11, term_y_11, term_z_11);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_12, term_i_12, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_u_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_13, term_c_13, term_d_13);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_13, term_g_13, term_i_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_y_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_14, term_d_14, term_e_14);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_14, term_j_14, term_k_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_v_14, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_a_15, term_b_15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_15, term_h_15, term_i_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_n_15, term_o_15);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_15, term_u_15, term_w_15);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_16, term_b_16, term_c_16);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_16, term_l_16, term_n_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_s_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_16, term_b_17, term_c_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_j_17);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_17, term_n_17, term_o_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_r_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_v_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_j_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_q_18, term_s_18);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_z_22);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_f_22);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_a_25, term_q_24);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_d_25);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_d_25);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If \"new\" is missing, standard input is used.\n\n", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_y_30, term_f_31);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym__2, term_r_36, term_d_25);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_d_25);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_c_34, term_d_25);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm a_7 (ATerm c_31, ATerm d_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_7 (ATerm j_15, ATerm k_15, ATerm);
ATerm c_7 (ATerm d_60 (ATerm), ATerm b_166, ATerm r_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm);
ATerm d_7 (ATerm f_12, ATerm g_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm d_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm c_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm g_7 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm m_22, ATerm l_22, ATerm);
ATerm h_7 (ATerm a_68 (ATerm), ATerm i_22, ATerm h_22, ATerm);
ATerm d_1 (ATerm);
ATerm i_7 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm);
ATerm j_7 (ATerm g_76 (ATerm), ATerm i_34, ATerm h_34, ATerm);
ATerm s_8 (ATerm k_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm k_7 (ATerm p_15, ATerm);
ATerm l_7 (ATerm n_36, ATerm o_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_11 (ATerm m_9, ATerm);
ATerm d_11 (ATerm v_9, ATerm y_9, ATerm z_9, ATerm);
ATerm e_11 (ATerm k_10, ATerm l_10, ATerm m_10, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm r_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm s_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm l_18 (ATerm t_16, ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm k_78 (ATerm), ATerm);
ATerm c_19 (ATerm u_18, ATerm);
ATerm conc_0_0 (ATerm);
ATerm m_7 (ATerm v_74 (ATerm), ATerm k_32, ATerm i_32, ATerm);
ATerm i_20 (ATerm r_19, ATerm);
ATerm j_20 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm);
ATerm a_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm pass__old_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm n_7 (ATerm j_12, ATerm k_12, ATerm);
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_76 (ATerm), ATerm);
ATerm o_7 (ATerm f_36, ATerm g_36, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm q_64 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm pass__new_0_0 (ATerm);
ATerm pass__prune_0_0 (ATerm);
ATerm pass__patch_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm q_7 (ATerm l_12, ATerm m_12, ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm r_7 (ATerm g_33, ATerm h_33, ATerm);
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm w_77 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm xtc_io_1_0 (ATerm x_77 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm pptable_diff_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm d_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm pptable_diff_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm s_7 (ATerm w_30, ATerm x_30, ATerm);
ATerm foldr_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm u_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_75 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm need_help_1_0 (ATerm e_80 (ATerm), ATerm);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm e_8 (ATerm);
ATerm g_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm g_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm v_7 (ATerm s_29, ATerm t_29, ATerm);
ATerm debug_1_0 (ATerm b_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_63 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm l_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm m_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm z_7 (ATerm b_35, ATerm c_35, ATerm);
ATerm w_7 (ATerm s_34, ATerm t_34, ATerm);
ATerm x_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_82 (ATerm), ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm parse_options_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_7 (ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(c_31, d_31);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = SSL_subtr(c_31, d_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_l_9;
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        t = term_t_9;
      }
    b_0 = t;
    t = term_t_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_t_9);
    t = a_7(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_l_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_d_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_e_10);
      y_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_e_10));
      t = o_7(w_0, y_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_7 (ATerm j_15, ATerm k_15, ATerm t)
{
  ATerm z_0 = NULL;
  t = SSL_write_term_to_stream_baf(j_15, k_15);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_0);
  return(t);
}
ATerm c_7 (ATerm d_60 (ATerm), ATerm b_166, ATerm r_15, ATerm t)
{
  ATerm c_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_166, term_f_10);
  t = open_stream_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, r_15);
  t = d_60(t);
  t = fclose_0_0(t);
  t = r_15;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if(match_cons(g_10, sym_Stream_1))
        {
          i_1 = ATgetArgument(g_10, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_7(i_1, j_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL;
  e_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, e_1);
  t = c_7(f_0, h_1, e_1, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(t_78, u_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_7 (ATerm f_12, ATerm g_12, ATerm t)
{
  t = SSL_execvp(f_12, g_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(t_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_10), q_0), term_h_10);
        a_1 = t;
        t = SSL_concat_strings(a_1);
      }
    }
  else
    {
      ATerm p_1 = NULL,u_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          t_2 = ATgetArgument(t, 0);
          v_2 = ATgetArgument(t, 1);
          w_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_2), term_s_10), p_1), term_n_10), t_2);
      u_1 = t;
      t = SSL_concat_strings(u_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_64 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  ATerm i_0 (ATerm t)
  {
    t = i_64(t);
    if(((d_3 != NULL) && (d_3 != t)))
      _fail(t);
    else
      d_3 = t;
    return(t);
  }
  t = fetch_1_0(i_0, t);
  t = not_null(d_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm f_3 = NULL;
  f_3 = t;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm v_10 = ATgetArgument(t, 0);
              if((f_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm w_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_18), term_k_18), term_e_18), term_a_18), term_t_17), term_p_17), term_k_17), term_d_17), term_u_16), term_o_16), term_d_16), term_z_15), term_s_15), term_l_15), term_c_15), term_x_14), term_t_14), term_p_14), term_l_14), term_h_14), term_z_13), term_m_13), term_e_13), term_v_12), term_p_12), term_c_12), term_w_11), term_g_11);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, f_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm w_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm f_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(a_19);
        {
          ATerm k_19 = t;
          int m_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
              t = u_3;
              {
                ATerm n_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_19;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                a_2 = t;
                t = term_o_19;
                c_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_p_19);
                d_2 = t;
                t = SSL_printnl(c_2, d_2);
                t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_p_19));
              }
              ;
              LocalPopChoice(m_19);
            }
          else
            {
              t = k_19;
              t = k_3;
            }
        }
      }
    else
      {
        t = w_18;
        t = k_3;
      }
    t = k_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_58 (ATerm), ATerm t)
{
  ATerm f_4 = NULL,h_4 = NULL;
  h_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = h_4;
        t = s_58(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            if(((ATgetType(t_19) != AT_INT) || (ATgetInt((ATermInt) t_19) != 0)))
              _fail(t);
            {
              ATerm x_19 = ATgetArgument(t, 1);
            }
            {
              ATerm y_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_4 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm l_4 = NULL,m_4 = NULL;
    l_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), l_4);
    t = w_7(not_null(k_4), l_4, t);
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
    return(t);
  }
  if(((k_4 != NULL) && (k_4 != t)))
    _fail(t);
  else
    k_4 = t;
  t = SSL_table_keys(k_4);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm d_76 (ATerm), ATerm t)
{
  ATerm q_4 = NULL;
  q_4 = t;
  {
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        t_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_4, term_v_17);
        t = geq_0_0(t);
        t = q_4;
        t = d_76(t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = z_19;
        t = q_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm c_76 (ATerm), ATerm t)
{
  ATerm x_4 = NULL;
  x_4 = t;
  {
    ATerm b_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_5 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        b_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_5, term_r_14);
        t = geq_0_0(t);
        t = x_4;
        t = c_76(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = b_20;
        t = x_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm g_5 = NULL;
  g_5 = t;
  {
    ATerm f_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        i_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_5, term_i_12);
        t = geq_0_0(t);
        t = g_5;
        t = e_76(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = f_20;
        t = g_5;
      }
  }
  return(t);
}
ATerm g_7 (ATerm d_68 (ATerm), ATerm e_68 (ATerm), ATerm m_22, ATerm l_22, ATerm t)
{
  t = e_68(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm o_5 = NULL;
      o_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_22, o_5);
      t = d_68(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = l_22;
  }
  return(t);
}
ATerm h_7 (ATerm a_68 (ATerm), ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm d_6 = NULL,f_6 = NULL,g_6 = NULL;
    d_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_6 = ATgetFirst((ATermList) t);
            g_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_6;
              {
                ATerm b_1 (ATerm t)
                {
                  t = h_22;
                  return(t);
                }
                t = g_7(a_68, b_1, f_6, g_6, t);
                t = j_6(t);
              }
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = l_20;
              {
                ATerm u_2 = NULL,b_3 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(d_6);
                u_2 = t;
                t = g_6;
                t = j_6(t);
                b_3 = t;
                t = (ATerm) ATinsert(CheckATermList(b_3), f_6);
                q_1 = t;
                t = SSLsetAnnotations(q_1, u_2);
              }
            }
        }
      }
    return(t);
  }
  t = i_22;
  t = j_6(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      if((f_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm y_33, ATerm z_33, ATerm a_34, ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,t_6 = NULL;
  p_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
        t = w_7(y_33, z_33, t);
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        t = (ATerm) ATempty;
      }
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_6, a_34);
    t = h_7(d_1, t_6, a_34, t);
    q_6 = t;
    t = SSL_table_put(y_33, z_33, q_6);
    t = p_6;
  }
  return(t);
}
ATerm j_7 (ATerm g_76 (ATerm), ATerm i_34, ATerm h_34, ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm p_7 = NULL,t_7 = NULL;
    if(match_cons(t, sym__2))
      {
        p_7 = ATgetArgument(t, 0);
        t_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, i_34, p_7, t_7);
    t = g_76(t);
    return(t);
  }
  t = h_34;
  t = map_1_0(f_1, t);
  return(t);
}
ATerm s_8 (ATerm k_8, ATerm t)
{
  t = SSL_fclose(k_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  o_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_8 = ATgetArgument(t, 0);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_8);
            ;
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            t = s_8(o_8, t);
          }
      }
    }
  else
    {
      t = s_8(o_8, t);
    }
  return(t);
}
ATerm k_7 (ATerm p_15, ATerm t)
{
  t = SSL_read_term_from_stream(p_15);
  return(t);
}
ATerm l_7 (ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm u_8 = NULL;
  t = SSL_fopen(n_36, o_36);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_8);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_8 = NULL;
  t = SSL_stdin_stream();
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_8);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_8 = NULL;
  t = SSL_stdout_stream();
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_9 = NULL;
  t = SSL_stderr_stream();
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_9);
  return(t);
}
ATerm c_11 (ATerm m_9, ATerm t)
{
  ATerm p_9 = NULL;
  t = SSL_explode_term(m_9);
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
          {
            p_9 = ATgetFirst((ATermList) v_20);
            {
              ATerm w_20 = (ATerm) ATgetNext((ATermList) v_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm d_11 (ATerm v_9, ATerm y_9, ATerm z_9, ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,i_10 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(z_9);
  c_10 = t;
  t = v_9;
  if(match_cons(t, sym_Path_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_10, y_9);
  s_1 = t;
  t = SSLsetAnnotations(s_1, c_10);
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(a_10, b_10, t);
  return(t);
}
ATerm e_11 (ATerm k_10, ATerm l_10, ATerm m_10, ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,x_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(m_10);
  r_10 = t;
  t = SSL_is_string(k_10);
  x_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_10, l_10);
  t_1 = t;
  t = SSLsetAnnotations(t_1, r_10);
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_7(p_10, q_10, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      ATerm y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  z_10 = t;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      b_11 = ATgetArgument(t, 1);
      {
        ATerm z_20 = t;
        int c_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_11(z_10, t);
            ;
            LocalPopChoice(c_21);
          }
        else
          {
            t = z_20;
            {
              ATerm d_21 = t;
              int e_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_11(a_11, b_11, z_10, t);
                  ;
                  LocalPopChoice(e_21);
                }
              else
                {
                  t = d_21;
                  t = e_11(a_11, b_11, z_10, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_11(z_10, t);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_f_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL;
      l_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_11, term_i_21);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      t = debug_1_0(g_1, t);
      _fail(t);
    }
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_7(k_11, t);
  h_11 = t;
  t = j_11;
  t = fclose_0_0(t);
  t = h_11;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_k_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_11 = NULL,o_11 = NULL;
      n_11 = t;
      t = (ATerm) ATinsert(ATempty, term_n_21);
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_11, (ATerm) ATinsert(ATempty, term_n_21));
      t = o_7(n_11, o_11, t);
      LocalPopChoice(m_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = l_21;
      {
        ATerm o_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = t;
            if((PushChoice() == 0))
              {
                ATerm r_11 = NULL,t_11 = NULL;
                r_11 = t;
                t = (ATerm) ATinsert(ATempty, term_e_10);
                t_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(ATempty, term_e_10));
                t = o_7(r_11, t_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_21;
              }
            t = debug_1_0(k_1, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = o_21;
            t = debug_1_0(l_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = debug_1_0(n_1, t);
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_w_21;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_13 = NULL,j_13 = NULL,k_13 = NULL;
  a_13 = t;
  t = term_o_19;
  j_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  k_13 = t;
  t = SSL_printnl(j_13, k_13);
  t = a_13;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__3))
    {
      l_13 = ATgetArgument(t, 0);
      n_13 = ATgetArgument(t, 1);
      o_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_7(l_13, n_13, o_13, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,t_13 = NULL;
  p_13 = t;
  t = term_o_19;
  q_13 = t;
  t = (ATerm) ATinsert(ATempty, term_b_22);
  t_13 = t;
  t = SSL_printnl(q_13, t_13);
  t = p_13;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
  u_13 = t;
  t = term_o_19;
  v_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  w_13 = t;
  t = SSL_printnl(v_13, w_13);
  t = u_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,n_12 = NULL,q_12 = NULL,t_12 = NULL,w_12 = NULL,x_12 = NULL;
  u_11 = t;
  t = if_verbose5_1_0(m_1, t);
  {
    ATerm c_22 = t;
    if((PushChoice() == 0))
      {
        ATerm y_12 = NULL,z_12 = NULL;
        t = term_d_22;
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, u_11);
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Imported_1, u_11));
        t = w_7(y_12, z_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_22;
      }
    a_12 = t;
    t = term_d_22;
    t_12 = t;
    t = term_f_22;
    w_12 = t;
    t = (ATerm) ATinsert(ATempty, u_11);
    x_12 = t;
    t = SSL_table_put(t_12, w_12, x_12);
    t = a_12;
    t = if_verbose4_1_0(o_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(v_1, t);
    v_11 = t;
    t = term_d_22;
    q_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_22, v_11);
    t = j_7(w_1, q_12, v_11, t);
    t = if_verbose6_1_0(x_1, t);
    t = term_d_22;
    b_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, u_11);
    d_12 = t;
    t = (ATerm) ATempty;
    n_12 = t;
    t = SSL_table_put(b_12, d_12, n_12);
    t = (ATerm) ATmakeAppl(sym__3, term_d_22, (ATerm)ATmakeAppl(sym_Imported_1, u_11), (ATerm) ATempty);
    t = if_verbose4_1_0(y_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm s_71 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,f_15 = NULL,g_15 = NULL;
  e_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_15 = ATgetFirst((ATermList) t);
          g_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 = NULL,n_4 = NULL,o_4 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(e_15);
            e_4 = t;
            t = f_15;
            t = s_71(t);
            n_4 = t;
            t = g_15;
            t = filter_1_0(s_71, t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), n_4);
            j_2 = t;
            t = SSLsetAnnotations(j_2, e_4);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = g_22;
            t = g_15;
            t = filter_1_0(s_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm v_15 (ATerm t)
  {
    ATerm p_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_73(t);
        t = v_15(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = p_22;
      }
    return(t);
  }
  t = v_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_15 = NULL;
            t = term_x_22;
            x_15 = t;
            t = SSL_getenv(x_15);
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(b_2, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  t = term_d_22;
  j_16 = t;
  t = term_z_22;
  k_16 = t;
  t = term_a_23;
  t = w_7(j_16, k_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm b_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_23;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm e_16 = NULL;
  t = if_verbose5_1_0(z_1, t);
  e_16 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_16 = NULL,h_16 = NULL;
        t = term_d_22;
        f_16 = t;
        t = term_f_22;
        h_16 = t;
        t = term_f_23;
        t = w_7(f_16, h_16, t);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          ATerm i_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          i_16 = t;
          t = repeat_1_0(e_2, t);
          t = i_16;
        }
      }
    t = e_16;
    t = if_verbose5_1_0(f_2, t);
  }
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = debug_1_0(i_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm l_18 (ATerm t_16, ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  t = term_d_22;
  x_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, t_16);
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, t_16));
  t = w_7(x_16, y_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          ATerm l_23 = ATgetArgument(j_23, 0);
          w_16 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_16;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_g_23;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_d_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_q_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_16 = NULL,a_17 = NULL,i_17 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      i_17 = t;
      if(match_cons(t, sym__2))
        {
          z_16 = ATgetArgument(t, 0);
          a_17 = ATgetArgument(t, 1);
          {
            ATerm u_23 = t;
            int v_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL;
                t = term_d_22;
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, z_16);
                y_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_d_22, (ATerm) ATmakeAppl(sym_Tool_1, z_16));
                t = w_7(x_17, y_17, t);
                {
                  ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((a_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((w_17 != NULL) && (w_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                  t = not_null(w_17);
                }
                ;
                LocalPopChoice(v_23);
              }
            else
              {
                t = u_23;
                t = l_18(i_17, t);
              }
          }
        }
      else
        {
          t = l_18(i_17, t);
        }
      t = if_verbose5_1_0(m_2, t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm i_18 = NULL,c_5 = NULL,e_5 = NULL;
        i_18 = t;
        t = term_o_19;
        c_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), i_18), term_x_23);
        e_5 = t;
        t = SSL_printnl(c_5, e_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_23), i_18), term_x_23);
        t = if_verbose5_1_0(p_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm k_78 (ATerm), ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL;
  o_18 = t;
  t = k_78(t);
  t = xtc_find_0_0(t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_18, o_18);
  {
    ATerm y_2 (ATerm t)
    {
      ATerm p_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_18, o_18);
      t = d_7(n_18, o_18, t);
      t = term_e_24;
      p_18 = t;
      t = SSL_exit(p_18);
      return(t);
    }
    t = fork_and_wait_1_0(y_2, t);
    t = o_18;
  }
  return(t);
}
ATerm c_19 (ATerm u_18, ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      {
        ATerm j_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = y_18;
              return(t);
            }
            t = x_18;
            t = at_end_1_0(z_2, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = j_24;
            t = c_19(z_18, t);
          }
      }
    }
  else
    {
      t = c_19(z_18, t);
    }
  return(t);
}
ATerm m_7 (ATerm v_74 (ATerm), ATerm k_32, ATerm i_32, ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = v_74(t);
  d_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_19, k_32, i_32);
  t = x_7(d_19, k_32, i_32, t);
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        t = term_q_24;
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_19, term_q_24);
        t = w_7(d_19, l_19, t);
        ;
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_19 = ATgetFirst((ATermList) t);
        g_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_24;
    i_19 = t;
    t = (ATerm) ATinsert(CheckATermList(g_19), (ATerm) ATinsert(CheckATermList(e_19), k_32));
    j_19 = t;
    t = SSL_table_put(d_19, i_19, j_19);
    t = h_19;
  }
  return(t);
}
ATerm i_20 (ATerm r_19, ATerm t)
{
  t = r_19;
  {
    ATerm r_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            ATerm t_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_24;
      }
    t = term_u_24;
    t = debug_1_0(a_3, t);
    t = (ATerm) ATmakeAppl(sym__2, r_19, term_f_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm j_20 (ATerm u_19, ATerm v_19, ATerm w_19, ATerm t)
{
  t = SSL_open_file(u_19, v_19);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_v_24;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm c_20 = NULL,e_20 = NULL,g_20 = NULL;
  c_20 = t;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
      {
        ATerm w_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_20(c_20, t);
            ;
            LocalPopChoice(y_24);
          }
        else
          {
            t = w_24;
            t = j_20(e_20, g_20, c_20, t);
          }
      }
    }
  else
    {
      t = i_20(c_20, t);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_20 = NULL,m_20 = NULL;
  t = new_file_0_0(t);
  k_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, term_f_10);
  t = open_file_0_0(t);
  t = term_d_25;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_20, term_d_25);
  t = m_7(c_3, k_20, m_20, t);
  t = k_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_5 = NULL,m_5 = NULL;
      t = a_21;
      t = xtc_new_file_0_0(t);
      l_5 = t;
      t = v_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATinsert(ATempty, l_5), term_e_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(l_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_5);
    }
  else
    {
      ATerm v_5 = NULL,w_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_21;
      t = xtc_new_file_0_0(t);
      v_5 = t;
      t = v_0(t);
      w_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_5), term_e_25), b_21), term_f_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(v_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, v_5);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_64 (ATerm), ATerm t)
{
  ATerm t_21 (ATerm t)
  {
    ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL;
    r_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_21 = ATgetFirst((ATermList) t);
        q_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_6 = NULL,u_6 = NULL,l_2 = NULL;
          t = SSLgetAnnotations(r_21);
          o_6 = t;
          t = q_21;
          t = t_21(t);
          u_6 = t;
          t = (ATerm) ATinsert(CheckATermList(u_6), p_21);
          l_2 = t;
          t = SSLsetAnnotations(l_2, o_6);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_21;
        t = m_64(t);
      }
    return(t);
  }
  t = t_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_21;
    }
  else
    {
      ATerm e_3 (ATerm t)
      {
        t = not_null(z_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_21 = ATgetFirst((ATermList) t);
          if(((z_21 != NULL) && (z_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_21;
      t = at_end_1_0(e_3, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_25;
      t = get_config_0_0(t);
      LocalPopChoice(h_25);
      {
        ATerm e_22 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        e_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_22), term_i_25);
      }
    }
  else
    {
      t = g_25;
      t = (ATerm) ATempty;
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
  ATerm j_22 = NULL,k_22 = NULL,o_22 = NULL;
  t = term_d_25;
  t = new_0_0(t);
  j_22 = t;
  t = term_j_25;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_22, term_j_25);
  t = v_7(j_22, k_22, t);
  o_22 = t;
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_e_10);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_22, (ATerm) ATinsert(ATempty, term_e_10));
        t = o_7(o_22, r_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        t = o_22;
      }
  }
  return(t);
}
ATerm n_7 (ATerm j_12, ATerm k_12, ATerm t)
{
  t = SSL_rename(j_12, k_12);
  return(t);
}
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      i_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = h_23;
        t = s_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_x_25;
        c_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_23, term_x_25);
        t = q_7(i_23, c_8, t);
        t = SSL_remove(i_23);
        t = term_x_25;
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = o_25;
        {
          ATerm y_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_8 = NULL;
              t = h_23;
              t = s_0(t);
              t_8 = t;
              {
                ATerm a_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm v_8 = NULL;
                    v_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = v_8;
                      }
                    else
                      {
                        t = v_8;
                        if((i_23 != t))
                          {
                            _fail(t);
                          }
                        t = v_8;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = a_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, i_23, t_8);
                t = n_7(i_23, t_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, t_8);
              }
              ;
              LocalPopChoice(z_25);
            }
          else
            {
              t = y_25;
              t = h_23;
              t = s_0(t);
              if((i_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, i_23);
            }
        }
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_b_26;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = debug_1_0(p_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm m_23 = NULL,n_23 = NULL;
  m_23 = t;
  {
    ATerm g_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 = NULL,p_23 = NULL,o_2 = NULL;
            p_23 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm f_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_23);
            o_23 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, m_23);
            o_2 = t;
            t = SSLsetAnnotations(o_2, o_23);
            LocalPopChoice(e_26);
            t = xtc_transform_file_2_0(h_3, i_3, t);
          }
        else
          {
            t = d_26;
            t = xtc_transform_term_2_0(j_3, m_3, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(g_3, t);
    if(match_cons(t, sym_FILE_1))
      {
        n_23 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = n_23;
    t = if_verbose2_1_0(o_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_76 (ATerm), ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_m_11);
        t = geq_0_0(t);
        t = t_23;
        t = a_76(t);
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        t = t_23;
      }
  }
  return(t);
}
ATerm o_7 (ATerm f_36, ATerm g_36, ATerm t)
{
  t = SSL_access(f_36, g_36);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,q_2 = NULL;
  a_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_26), term_j_26), a_24);
  h_24 = t;
  t = SSL_concat_strings(h_24);
  g_24 = t;
  t = (ATerm) ATinsert(ATempty, term_e_10);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_24, (ATerm) ATinsert(ATempty, term_e_10));
  t = o_7(g_24, d_24, t);
  z_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_23, a_24);
  m_24 = t;
  if(match_cons(t, sym__2))
    {
      ATerm l_26 = ATgetArgument(t, 0);
      ATerm m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_24);
  i_24 = t;
  t = SSL_modification_time(z_23);
  k_24 = t;
  t = SSL_modification_time(a_24);
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_24, l_24);
  q_2 = t;
  t = SSLsetAnnotations(q_2, i_24);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, z_23, a_24);
  c_24 = t;
  t = SSL_explode_term(c_24);
  if(match_cons(t, sym__2))
    {
      ATerm n_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(((ATgetType(o_26) == AT_LIST) && !(ATisEmpty(o_26))))
          {
            b_24 = ATgetFirst((ATermList) o_26);
            {
              ATerm p_26 = (ATerm) ATgetNext((ATermList) o_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_24;
  t = if_verbose2_1_0(q_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm q_64 (ATerm), ATerm t)
{
  ATerm c_25 (ATerm t)
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_64(t);
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm x_24 = NULL,z_24 = NULL,b_25 = NULL,e_9 = NULL,h_9 = NULL,x_2 = NULL;
          x_24 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_24 = ATgetFirst((ATermList) t);
              b_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_24);
          e_9 = t;
          t = b_25;
          t = c_25(t);
          h_9 = t;
          t = (ATerm) ATinsert(CheckATermList(h_9), z_24);
          x_2 = t;
          t = SSLsetAnnotations(x_2, e_9);
        }
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,o_9 = NULL,s_9 = NULL;
      o_9 = t;
      t = term_u_26;
      s_9 = t;
      t = SSL_explode_string(s_9);
      n_9 = t;
      t = SSL_explode_string(o_9);
      {
        ATerm t_3 (ATerm t)
        {
          if((n_9 != t))
            {
              _fail(t);
            }
          return(t);
        }
        t = at_suffix_1_0(t_3, t);
        t = o_9;
      }
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_9 = NULL,w_9 = NULL,x_9 = NULL;
            w_9 = t;
            t = term_x_26;
            x_9 = t;
            t = SSL_explode_string(x_9);
            u_9 = t;
            t = SSL_explode_string(w_9);
            {
              ATerm v_3 (ATerm t)
              {
                if((u_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(v_3, t);
              t = w_9;
            }
            ;
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm k_25 = NULL,n_25 = NULL,p_25 = NULL,q_25 = NULL;
              k_25 = t;
              t = term_o_19;
              p_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, k_25), term_y_26);
              q_25 = t;
              t = SSL_printnl(p_25, q_25);
              t = term_t_9;
              n_25 = t;
              t = SSL_exit(n_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, k_25), term_y_26);
            }
          }
        {
          ATerm z_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(a_27);
            }
          else
            {
              t = z_26;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_27;
      t = get_config_0_0(t);
      LocalPopChoice(e_27);
      {
        ATerm r_25 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        r_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, r_25), term_f_27);
      }
    }
  else
    {
      t = c_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_27;
      t = get_config_0_0(t);
      LocalPopChoice(h_27);
      t = (ATerm) ATinsert(ATempty, term_i_27);
    }
  else
    {
      t = g_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_27;
      t = get_config_0_0(t);
      LocalPopChoice(k_27);
      t = (ATerm) ATinsert(ATempty, term_o_27);
    }
  else
    {
      t = j_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  t = term_d_25;
  t = pass__patch_0_0(t);
  s_25 = t;
  t = term_d_25;
  t = pass__prune_0_0(t);
  u_25 = t;
  t = term_d_25;
  t = pass__new_0_0(t);
  v_25 = t;
  t = term_d_25;
  t = pass__old_0_0(t);
  w_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_25), v_25), u_25), s_25);
  t = concat_0_0(t);
  return(t);
}
ATerm q_7 (ATerm l_12, ATerm m_12, ATerm t)
{
  t = SSL_copy(l_12, m_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_27 = NULL,d_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym_FILE_1))
    {
      d_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL;
        t = b_27;
        t = r_0(t);
        o_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = o_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = o_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, d_27, o_10);
        t = q_7(d_27, o_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
        ;
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
          ATerm w_27 = t;
          int x_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_11 = NULL;
              t = b_27;
              t = r_0(t);
              p_11 = t;
              {
                ATerm y_27 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_11 = NULL;
                    q_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_11;
                          }
                        else
                          {
                            t = q_11;
                            if((d_27 != t))
                              {
                                _fail(t);
                              }
                            t = q_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_27;
                  }
                t = (ATerm) ATmakeAppl(sym__2, d_27, p_11);
                t = q_7(d_27, p_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
              }
              ;
              LocalPopChoice(x_27);
            }
          else
            {
              t = w_27;
              t = b_27;
              t = r_0(t);
              if((d_27 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, d_27);
            }
        }
      }
  }
  return(t);
}
ATerm r_7 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  m_27 = t;
  {
    ATerm z_27 = t;
    int b_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        t = w_7(g_33, h_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_28 = ATgetFirst((ATermList) t);
            l_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_28);
        t = SSL_table_put(g_33, h_33, l_27);
        t = (ATerm) ATmakeAppl(sym__3, g_33, h_33, l_27);
      }
    else
      {
        t = z_27;
        t = SSL_table_remove(g_33, h_33);
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
    t = m_27;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_74 (ATerm), ATerm t)
{
  ATerm n_27 = NULL,p_27 = NULL,q_27 = NULL,t_27 = NULL,u_27 = NULL;
  t_27 = t;
  t = s_74(t);
  q_27 = t;
  {
    ATerm g_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_27 = NULL;
        t = term_q_24;
        v_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_27, term_q_24);
        t = w_7(q_27, v_27, t);
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = g_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_27 = ATgetFirst((ATermList) t);
        n_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_q_24;
    u_27 = t;
    t = SSL_table_put(q_27, u_27, n_27);
    t = p_27;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm a_28 = NULL;
        a_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_27, a_28);
        t = r_7(q_27, a_28, t);
        return(t);
      }
      t = map_1_0(w_3, t);
      t = t_27;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm n_75 (ATerm), ATerm o_75 (ATerm), ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_75(t);
      t = o_75(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      t = o_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,h_28 = NULL,j_28 = NULL;
  d_28 = t;
  t = r_74(t);
  c_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_28, term_q_24);
  {
    ATerm m_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_28 = ATgetArgument(t, 0);
            ATerm q_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_24;
        n_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_28, term_q_24);
        t = w_7(c_28, n_28, t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = m_28;
        t = (ATerm) ATempty;
      }
    e_28 = t;
    t = term_q_24;
    h_28 = t;
    t = (ATerm) ATinsert(CheckATermList(e_28), (ATerm) ATempty);
    j_28 = t;
    t = SSL_table_put(c_28, h_28, j_28);
    t = d_28;
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm b_29 = NULL;
  b_29 = t;
  {
    ATerm r_28 = t;
    int v_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(b_29);
        ;
        LocalPopChoice(v_28);
      }
    else
      {
        t = r_28;
        t = b_29;
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm w_77 (ATerm), ATerm t)
{
  ATerm s_28 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm t_28 = NULL;
    t_28 = t;
    {
      ATerm w_28 = t;
      int y_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_28 = NULL,x_28 = NULL;
          t = term_a_25;
          u_28 = t;
          t = term_q_24;
          x_28 = t;
          t = term_z_28;
          t = w_7(u_28, x_28, t);
          ;
          LocalPopChoice(y_28);
        }
      else
        {
          t = w_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_28 != NULL) && (s_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_28 = ATgetFirst((ATermList) t);
          {
            ATerm a_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = s_28;
      t = map_1_0(z_3, t);
      t = t_28;
      t = end_scope_1_0(a_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  t = restore_always_2_0(w_77, y_3, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = term_x_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm x_77 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        t = term_f_25;
        t = get_config_0_0(t);
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_29);
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = term_d_10;
      }
    t = x_77(t);
    t = copy_to_1_0(c_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(b_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_29 = NULL,w_29 = NULL;
      w_29 = t;
      if(match_cons(t, sym_FILE_1))
        {
          v_29 = ATgetArgument(t, 0);
          {
            ATerm h_12 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(w_29);
            h_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, v_29);
            l_3 = t;
            t = SSLsetAnnotations(l_3, h_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_29;
        }
      LocalPopChoice(i_29);
      t = xtc_transform_file_2_0(g_4, i_4, t);
    }
  else
    {
      t = h_29;
      t = xtc_transform_term_2_0(j_4, p_4, t);
    }
  e_30 = t;
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_27;
        t = get_config_0_0(t);
        t = e_30;
        {
          ATerm l_29 = t;
          int m_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_13 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  h_13 = ATgetArgument(t, 0);
                  {
                    ATerm x_13 = NULL,n_3 = NULL;
                    t = SSLgetAnnotations(e_30);
                    x_13 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, h_13);
                    n_3 = t;
                    t = SSLsetAnnotations(n_3, x_13);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = e_30;
                }
              LocalPopChoice(m_29);
              t = xtc_transform_file_2_0(r_4, pass_verbose_0_0, t);
            }
          else
            {
              t = l_29;
              t = xtc_transform_term_2_0(s_4, pass_verbose_0_0, t);
            }
        }
        ;
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = e_30;
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_d_25;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_d_25;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm pptable_diff_0_0 (ATerm t)
{
  t = xtc_io_1_0(d_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  k_30 = t;
  t = term_d_25;
  t = whoami_0_0(t);
  l_30 = t;
  t = term_o_19;
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_29), l_30), term_p_29);
  o_30 = t;
  t = SSL_printnl(n_30, o_30);
  t = term_t_9;
  m_30 = t;
  t = SSL_exit(m_30);
  t = k_30;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  if(match_string(t, "-k"))
    {
      t = q_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_30;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  t = SSL_string_to_int(r_30);
  s_30 = t;
  t = term_r_29;
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_29, s_30);
  t = z_7(t_30, s_30, t);
  t = r_30;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_4, v_4, w_4, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "-S"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  t = term_l_9;
  a_31 = t;
  t = term_x_29;
  b_31 = t;
  t = term_y_29;
  t = z_7(a_31, b_31, t);
  t = term_z_29;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_a_30;
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm e_31 = NULL,g_31 = NULL,h_31 = NULL;
  e_31 = t;
  t = SSL_string_to_int(e_31);
  g_31 = t;
  t = term_l_9;
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_9, g_31);
  t = z_7(h_31, g_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_31);
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm i_31 = NULL,k_31 = NULL;
  t = term_c_30;
  i_31 = t;
  t = term_d_25;
  k_31 = t;
  t = term_d_30;
  t = z_7(i_31, k_31, t);
  t = term_f_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_4, z_4, a_5, t);
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_5, f_5, h_5, t);
            ;
            LocalPopChoice(p_30);
          }
        else
          {
            t = j_30;
            t = Option_3_0(j_5, k_5, n_5, t);
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-o"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm o_31 = NULL,q_31 = NULL;
  o_31 = t;
  t = term_e_25;
  q_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, o_31);
  t = z_7(q_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_31);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_u_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-i"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL;
  w_31 = t;
  t = term_f_25;
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_25, w_31);
  t = z_7(x_31, w_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_31);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_5, y_5, z_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_32 = NULL,r_32 = NULL,s_32 = NULL,u_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_32 = NULL,d_33 = NULL,i_33 = NULL;
      t = term_d_25;
      t = p_0(t);
      v_32 = t;
      t = term_y_30;
      d_33 = t;
      t = term_f_31;
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_f_31, v_32);
      t = x_7(d_33, i_33, v_32, t);
      _fail(t);
    }
  else
    {
      ATerm o_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_32 = ATgetFirst((ATermList) t);
          r_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_32 = ATgetFirst((ATermList) t);
          u_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = m_0(t);
      t = s_32;
      t = n_0(t);
      o_33 = t;
      t = (ATerm) ATinsert(CheckATermList(u_32), o_33);
    }
  return(t);
}
ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--patch", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL;
  p_33 = t;
  t = term_o_27;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_27, p_33);
  t = z_7(q_33, p_33, t);
  t = p_33;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--prune", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL;
  r_33 = t;
  t = term_i_27;
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_27, r_33);
  t = z_7(s_33, r_33, t);
  t = r_33;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_l_31;
  return(t);
}
ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  u_33 = t;
  t = term_i_25;
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_25, u_33);
  t = z_7(v_33, u_33, t);
  t = u_33;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_m_31;
  return(t);
}
ATerm s_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--new", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  w_33 = t;
  t = term_f_27;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_27, w_33);
  t = z_7(x_33, w_33, t);
  t = w_33;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  t = term_r_31;
  d_34 = t;
  t = term_d_25;
  e_34 = t;
  t = term_t_31;
  t = z_7(d_34, e_34, t);
  t = term_u_31;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, e_6, t);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(h_6, i_6, k_6, t);
            ;
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm c_32 = t;
              int d_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ArgOption_3_0(m_6, n_6, r_6, t);
                  ;
                  LocalPopChoice(d_32);
                }
              else
                {
                  t = c_32;
                  {
                    ATerm e_32 = t;
                    int f_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(s_6, v_6, w_6, t);
                        ;
                        LocalPopChoice(f_32);
                      }
                    else
                      {
                        t = e_32;
                        {
                          ATerm g_32 = t;
                          int h_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              ;
                              LocalPopChoice(h_32);
                            }
                          else
                            {
                              t = g_32;
                              {
                                ATerm j_32 = t;
                                int l_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    ;
                                    LocalPopChoice(l_32);
                                  }
                                else
                                  {
                                    t = j_32;
                                    {
                                      ATerm m_32 = t;
                                      int n_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(x_6, y_6, z_6, t);
                                          ;
                                          LocalPopChoice(n_32);
                                        }
                                      else
                                        {
                                          t = m_32;
                                          {
                                            ATerm o_32 = t;
                                            int q_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                ;
                                                LocalPopChoice(q_32);
                                              }
                                            else
                                              {
                                                t = o_32;
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
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,l_34 = NULL,m_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_25;
  t = whoami_0_0(t);
  f_34 = t;
  t = term_o_19;
  l_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_32), f_34);
  m_34 = t;
  t = SSL_printnl(l_34, m_34);
  t = term_t_9;
  g_34 = t;
  t = SSL_exit(g_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm s_7 (ATerm w_30, ATerm x_30, ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_30, x_30);
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      t = SSL_addr(w_30, x_30);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_34;
      t = o_70(t);
    }
  else
    {
      ATerm v_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_34 = ATgetFirst((ATermList) t);
          q_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_34;
      t = foldr_2_0(o_70, p_70, t);
      v_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_34, v_34);
      t = p_70(t);
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
  t = term_x_29;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      f_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7(f_14, g_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_35 = NULL,a_14 = NULL,c_14 = NULL;
  t = times_0_0(t);
  c_14 = t;
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm z_32 = ATgetArgument(t, 0);
      a_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14;
  t = foldr_2_0(e_7, u_7, t);
  a_35 = t;
  t = SSL_TicksToSeconds(a_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,m_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym__2))
    {
      j_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_36;
        if((j_36 != t))
          {
            _fail(t);
          }
        t = i_36;
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = (ATerm) ATmakeAppl(sym__2, j_36, m_36);
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_36, m_36);
              ;
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = SSL_gtr(j_36, m_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_36, m_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_75 (ATerm), ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_37 = NULL;
        t = term_l_9;
        t = get_config_0_0(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_37, term_t_9);
        t = geq_0_0(t);
        t = j_37;
        t = z_75(t);
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = j_37;
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm q_37 = NULL,s_37 = NULL,v_37 = NULL,w_37 = NULL;
  t = run_time_0_0(t);
  q_37 = t;
  t = term_d_25;
  t = whoami_0_0(t);
  s_37 = t;
  t = term_o_19;
  v_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), q_37), term_n_10), s_37);
  w_37 = t;
  t = SSL_printnl(v_37, w_37);
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_33), q_37), term_n_10), s_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_29;
  x_37 = t;
  t = SSL_exit(x_37);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_38 = ATgetArgument(t, 0);
          {
            ATerm z_14 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(k_38);
            z_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_38);
            s_3 = t;
            t = SSLsetAnnotations(s_3, z_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  ATerm t_33 = t;
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
      t = t_33;
      t = fetch_1_0(a_8, t);
    }
  t = e_80(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_35), term_e_35), term_d_35), term_z_34), term_y_34), term_x_34), term_w_34), term_u_34), term_r_34), term_n_34), term_k_34), term_j_34);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_38 = ATgetFirst((ATermList) t);
      o_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_38 = NULL,u_38 = NULL;
        ATerm b_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_38)), not_null(u_38));
          return(t);
        }
        t = o_38;
        t = k_0(t);
        if(((t_38 != NULL) && (t_38 != t)))
          _fail(t);
        else
          t_38 = t;
        t = n_38;
        t = j_0(t);
        if(((u_38 != NULL) && (u_38 != t)))
          _fail(t);
        else
          u_38 = t;
        t = o_38;
        t = reverse_acc_2_0(j_0, b_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_25;
      t = k_0(t);
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm m_39 = NULL;
  m_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_39), term_g_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_32;
      t = get_config_0_0(t);
      y_38 = t;
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm d_8 (ATerm t)
        {
          ATerm b_39 = NULL,c_39 = NULL,i_39 = NULL,s_5 = NULL;
          i_39 = t;
          if(match_cons(t, sym_Program_1))
            {
              c_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_39);
          b_39 = t;
          t = c_39;
          if(((y_38 != NULL) && (y_38 != t)))
            _fail(t);
          else
            y_38 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, c_39);
          s_5 = t;
          t = SSLsetAnnotations(s_5, b_39);
          return(t);
        }
        t = fetch_1_0(d_8, t);
      }
    }
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_35), not_null(y_38)), term_l_35);
        t = echo_0_0(t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
      }
    t = term_n_35;
    t = echo_0_0(t);
    t = term_y_30;
    z_38 = t;
    t = term_f_31;
    a_39 = t;
    t = term_o_35;
    t = w_7(z_38, a_39, t);
    t = reverse_acc_2_0(_id, e_8, t);
    t = map_1_0(g_8, t);
    {
      ATerm p_35 = t;
      int q_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_39 = NULL;
          ATerm h_8 (ATerm t)
          {
            t = not_null(y_38);
            return(t);
          }
          t = long_description_1_0(h_8, t);
          n_39 = t;
          t = (ATerm) ATinsert(CheckATermList(n_39), term_r_35);
          t = echo_0_0(t);
          ;
          LocalPopChoice(q_35);
        }
      else
        {
          t = p_35;
        }
    }
  }
  return(t);
}
ATerm fetch_1_0 (ATerm g_64 (ATerm), ATerm t)
{
  ATerm o_40 (ATerm t)
  {
    ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
    l_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_40 = ATgetFirst((ATermList) t);
        n_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_15 = NULL,y_15 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(l_40);
          q_15 = t;
          t = m_40;
          t = g_64(t);
          y_15 = t;
          t = (ATerm) ATinsert(CheckATermList(n_40), y_15);
          u_5 = t;
          t = SSLsetAnnotations(u_5, q_15);
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm m_16 = NULL,p_16 = NULL,x_5 = NULL;
            t = SSLgetAnnotations(l_40);
            m_16 = t;
            t = n_40;
            t = o_40(t);
            p_16 = t;
            t = (ATerm) ATinsert(CheckATermList(p_16), m_40);
            x_5 = t;
            t = SSLsetAnnotations(x_5, m_16);
          }
        }
    }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_35 = ATgetFirst((ATermList) t);
                ATerm x_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_40;
          }
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = (ATerm) ATinsert(ATempty, s_40);
      }
    t_40 = t;
    t = term_x_25;
    u_40 = t;
    t = SSL_printnl(u_40, t_40);
    t = s_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_w_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm v_7 (ATerm s_29, ATerm t_29, ATerm t)
{
  t = SSL_strcat(s_29, t_29);
  return(t);
}
ATerm debug_1_0 (ATerm b_60 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  y_40 = t;
  t = b_60(t);
  z_40 = t;
  t = term_o_19;
  a_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_40), z_40);
  b_41 = t;
  t = SSL_printnl(a_41, b_41);
  t = y_40;
  return(t);
}
ATerm map_1_0 (ATerm w_63 (ATerm), ATerm t)
{
  ATerm q_41 (ATerm t)
  {
    ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
    n_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_41;
      }
    else
      {
        ATerm e_17 = NULL,h_17 = NULL,l_17 = NULL,a_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_41 = ATgetFirst((ATermList) t);
            p_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_41);
        e_17 = t;
        t = o_41;
        t = w_63(t);
        h_17 = t;
        t = p_41;
        t = q_41(t);
        l_17 = t;
        t = (ATerm) ATinsert(CheckATermList(l_17), h_17);
        a_6 = t;
        t = SSLsetAnnotations(a_6, e_17);
      }
    return(t);
  }
  t = q_41(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
    }
  return(t);
}
ATerm l_8 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_41 = NULL;
      y_41 = t;
      t = SSL_is_string(y_41);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = b_36;
      {
        ATerm d_36 = t;
        int e_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_8, t);
            ;
            LocalPopChoice(e_36);
          }
        else
          {
            t = d_36;
            {
              ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
              e_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_42 = ATgetArgument(t, 0);
                  t = f_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_42 = ATgetArgument(t, 0);
                      t = f_42;
                      {
                        ATerm h_36 = t;
                        int k_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_36);
                          }
                        else
                          {
                            t = h_36;
                            t = debug_1_0(l_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_42 = NULL,l_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_42 = ATgetArgument(t, 0);
                          g_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_42;
                      t = eval_config_0_0(t);
                      k_42 = t;
                      t = g_42;
                      t = eval_config_0_0(t);
                      l_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_42, l_42);
                      t = v_7(k_42, l_42, t);
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
  ATerm p_42 = NULL,q_42 = NULL;
  p_42 = t;
  t = term_l_36;
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_36, p_42);
  t = w_7(q_42, p_42, t);
  {
    ATerm p_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_42 = NULL,s_42 = NULL;
        t = eval_config_0_0(t);
        r_42 = t;
        t = term_l_36;
        s_42 = t;
        t = SSL_table_put(s_42, p_42, r_42);
        t = r_42;
        ;
        LocalPopChoice(q_36);
      }
    else
      {
        t = p_36;
      }
  }
  return(t);
}
ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL;
  t = term_r_36;
  v_42 = t;
  t = term_d_25;
  w_42 = t;
  t = term_s_36;
  t = z_7(v_42, w_42, t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  t = term_t_36;
  return(t);
}
ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  t = term_r_36;
  z_42 = t;
  t = term_d_25;
  a_43 = t;
  t = term_s_36;
  t = z_7(z_42, a_43, t);
  t = term_u_36;
  x_42 = t;
  t = term_d_25;
  y_42 = t;
  t = term_v_36;
  t = z_7(x_42, y_42, t);
  t = term_w_36;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = term_x_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_36 = t;
  int z_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_8, p_8, q_8, t);
      ;
      LocalPopChoice(z_36);
    }
  else
    {
      t = y_36;
      t = Option_3_0(r_8, y_8, z_8, t);
    }
  return(t);
}
ATerm z_7 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm b_43 = NULL;
  t = term_l_36;
  b_43 = t;
  t = SSL_table_put(b_43, b_35, c_35);
  t = (ATerm) ATmakeAppl(sym__3, term_l_36, b_35, c_35);
  return(t);
}
ATerm w_7 (ATerm s_34, ATerm t_34, ATerm t)
{
  t = SSL_table_get(s_34, t_34);
  return(t);
}
ATerm x_7 (ATerm b_33, ATerm c_33, ATerm a_33, ATerm t)
{
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_37 = ATgetArgument(t, 0);
            ATerm d_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_33, c_33);
        t = w_7(b_33, c_33, t);
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        t = (ATerm) ATempty;
      }
    e_43 = t;
    t = (ATerm) ATinsert(CheckATermList(e_43), a_33);
    f_43 = t;
    t = SSL_table_put(b_33, c_33, f_43);
    t = d_43;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
      t = term_d_25;
      t = h_0(t);
      n_43 = t;
      t = term_y_30;
      o_43 = t;
      t = term_f_31;
      p_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_f_31, n_43);
      t = x_7(o_43, p_43, n_43, t);
      _fail(t);
    }
  else
    {
      ATerm s_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_43 = ATgetFirst((ATermList) t);
          m_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_43;
      t = d_0(t);
      t = term_d_25;
      t = g_0(t);
      s_43 = t;
      t = (ATerm) ATinsert(CheckATermList(m_43), s_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_51 (ATerm), ATerm n_51 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,l_6 = NULL;
  y_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_43 = ATgetFirst((ATermList) t);
      v_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_43);
  t_43 = t;
  t = u_43;
  t = m_51(t);
  w_43 = t;
  t = v_43;
  t = n_51(t);
  x_43 = t;
  t = (ATerm) ATinsert(CheckATermList(x_43), w_43);
  l_6 = t;
  t = SSLsetAnnotations(l_6, t_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_82 (ATerm), ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,i_44 = NULL,j_44 = NULL,f_8 = NULL;
  d_44 = t;
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_37;
        t = c_82(t);
        ;
        LocalPopChoice(f_37);
      }
    else
      {
        t = e_37;
      }
    t = d_44;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_44 = ATgetFirst((ATermList) t);
        g_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_44);
    e_44 = t;
    t = term_w_32;
    j_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_32, f_44);
    t = z_7(j_44, f_44, t);
    t = g_44;
    {
      ATerm t_44 (ATerm t)
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_37 = t;
            int l_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_44 = NULL;
                m_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_44;
                ;
                LocalPopChoice(l_37);
              }
            else
              {
                t = k_37;
                t = c_82(t);
                t = Cons_2_0(_id, t_44, t);
              }
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            {
              ATerm p_44 = NULL,q_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_44 = ATgetFirst((ATermList) t);
                  q_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_44), (ATerm) ATmakeAppl(sym_Undefined_1, p_44));
            }
          }
        return(t);
      }
      t = t_44(t);
      i_44 = t;
      t = (ATerm) ATinsert(CheckATermList(i_44), (ATerm) ATmakeAppl(sym_Program_1, f_44));
      f_8 = t;
      t = SSLsetAnnotations(f_8, e_44);
    }
  }
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm f_45 = NULL;
  f_45 = t;
  if(match_string(t, "--help"))
    {
      t = f_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_45;
        }
    }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  t = term_c_34;
  g_45 = t;
  t = term_d_25;
  h_45 = t;
  t = term_m_37;
  t = z_7(g_45, h_45, t);
  t = term_n_37;
  return(t);
}
ATerm f_9 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm g_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL;
  a_45 = t;
  t = term_y_30;
  c_45 = t;
  t = term_f_31;
  d_45 = t;
  t = (ATerm) ATempty;
  e_45 = t;
  t = SSL_table_put(c_45, d_45, e_45);
  t = a_45;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm r_37 = t;
      int t_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_82(t);
          ;
          LocalPopChoice(t_37);
        }
      else
        {
          t = r_37;
          {
            ATerm u_37 = t;
            int y_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_9, d_9, f_9, t);
                ;
                LocalPopChoice(y_37);
              }
            else
              {
                t = u_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_9, t);
    {
      ATerm z_37 = t;
      int a_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_45 = NULL;
          o_45 = t;
          {
            ATerm b_38 = t;
            int c_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_18 = NULL;
                t = o_45;
                {
                  ATerm d_38 = t;
                  int e_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_38);
                    }
                  else
                    {
                      t = d_38;
                      t = fetch_1_0(g_9, t);
                    }
                  t = o_45;
                  t = default_system_usage_0_0(t);
                  t = term_x_29;
                  h_18 = t;
                  t = SSL_exit(h_18);
                }
                ;
                LocalPopChoice(c_38);
              }
            else
              {
                t = b_38;
                {
                  ATerm r_18 = NULL;
                  t = term_r_36;
                  t = get_config_0_0(t);
                  t = o_45;
                  t = default_system_about_0_0(t);
                  t = term_x_29;
                  r_18 = t;
                  t = SSL_exit(r_18);
                }
              }
          }
          ;
          LocalPopChoice(a_38);
        }
      else
        {
          t = z_37;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
                ATerm i_9 (ATerm t)
                {
                  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,j_8 = NULL;
                  u_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_45);
                  s_45 = t;
                  t = t_45;
                  if(((y_44 != NULL) && (y_44 != t)))
                    _fail(t);
                  else
                    y_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_45);
                  j_8 = t;
                  t = SSLsetAnnotations(j_8, s_45);
                  return(t);
                }
                t = fetch_1_0(i_9, t);
                t = term_o_19;
                q_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_44)), term_h_38);
                r_45 = t;
                t = SSL_printnl(q_45, r_45);
                t = (ATerm) ATmakeAppl(sym__2, term_o_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_44)), term_h_38));
                t = default_system_usage_0_0(t);
                t = term_t_9;
                p_45 = t;
                t = SSL_exit(p_45);
                ;
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
              }
          }
        }
      z_44 = t;
      t = term_y_30;
      b_45 = t;
      t = SSL_table_destroy(b_45);
      t = z_44;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_80 (ATerm), ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  t = parse_options_1_0(g_80, t);
  z_45 = t;
  t = term_i_38;
  c_46 = t;
  t = SSL_table_create(c_46);
  t = term_i_38;
  a_46 = t;
  t = term_l_38;
  b_46 = t;
  t = SSL_table_put(a_46, b_46, z_45);
  t = z_45;
  t = i_80(t);
  {
    ATerm m_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_80, t);
        ;
        LocalPopChoice(p_38);
      }
    else
      {
        t = m_38;
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_80(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(pptable_diff_options_0_0, default_usage_0_0, _id, pptable_diff_0_0, t);
  return(t);
}
