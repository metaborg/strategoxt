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
Symbol sym_ErrorNumber_1;
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
  sym_ErrorNumber_1 = ATmakeSymbol("ErrorNumber", 1, ATfalse);
  ATprotectSymbol(sym_ErrorNumber_1);
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
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_s_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_j_37;
ATerm term_a_37;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_m_36;
ATerm term_b_36;
ATerm term_r_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_l_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_g_34;
ATerm term_s_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_t_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_v_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_b_29;
ATerm term_v_27;
ATerm term_n_27;
ATerm term_h_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_y_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_x_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_p_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_v_23;
ATerm term_l_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_t_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_m_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_m_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_z_14;
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
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_t_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_t_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_u_9;
ATerm term_m_9;
void init_constant_terms (void)
{
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_10, term_u_9, term_g_11);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_11, term_n_11, term_t_11);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_z_11, term_a_12);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_12, term_j_12, term_p_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_12, term_s_12, term_w_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_d_13, term_e_13);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_13, term_h_13, term_j_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_13, term_t_13, term_z_13);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_14, term_e_14, term_f_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_14, term_k_14, term_l_14);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_14, term_o_14, term_p_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_14, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_14, term_a_15, term_c_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_15, term_o_15, term_p_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_16, term_m_16, term_o_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_16, term_c_17, term_d_17);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_17, term_i_17, term_k_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_17, term_p_17, term_q_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_17, term_t_17, term_u_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_18, term_h_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_r_18, term_t_18);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_y_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_d_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--old", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-pp-table", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using temporary file for parsed print-table: ", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("** INFO: Using existing parsed pretty print-table: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("af", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("pp.af", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("pp", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: pretty-print table must have extension .pp.af or .pp :", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--new", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_p_24);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Pptable-diff", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym__2, term_m_9, term_y_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym__2, term_d_30, term_c_25);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch            Bring old table up-to-date", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_c_25);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("This program writes to standard error a list of\n", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print rules that are contained in\n", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("pretty-print table \"old\" but not in \"new\"\n", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("and, vice versa.\n\n", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--patch\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is updated by adding pretty-print\n", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("rules that are in \"new\" but not in\n", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\".\n\n", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("If the \"--prune\" switch is specified, the table\n", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\"old\" is returned from which obsolete entries\n", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("have been removed\n", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym__2, term_e_31, term_k_31);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym__2, term_q_36, term_c_25);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_c_25);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(sym__2, term_g_34, term_c_25);
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
}
ATerm b_7 (ATerm g_31, ATerm h_31, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm c_7 (ATerm k_15, ATerm l_15, ATerm);
ATerm d_7 (ATerm i_60 (ATerm), ATerm o_167, ATerm s_15, ATerm);
ATerm f_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm);
ATerm e_7 (ATerm g_12, ATerm h_12, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm n_64 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm x_58 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm h_7 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_22, ATerm m_22, ATerm);
ATerm i_7 (ATerm f_68 (ATerm), ATerm j_22, ATerm i_22, ATerm);
ATerm d_1 (ATerm);
ATerm j_7 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm);
ATerm k_7 (ATerm l_76 (ATerm), ATerm m_34, ATerm l_34, ATerm);
ATerm t_8 (ATerm l_8, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_7 (ATerm q_15, ATerm);
ATerm m_7 (ATerm r_36, ATerm s_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_11 (ATerm o_9, ATerm);
ATerm e_11 (ATerm w_9, ATerm z_9, ATerm a_10, ATerm);
ATerm f_11 (ATerm l_10, ATerm m_10, ATerm n_10, ATerm);
ATerm n_7 (ATerm);
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
ATerm filter_1_0 (ATerm x_71 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm w_73 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm k_18 (ATerm r_16, ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm p_78 (ATerm), ATerm);
ATerm d_19 (ATerm v_18, ATerm);
ATerm conc_0_0 (ATerm);
ATerm o_7 (ATerm a_75 (ATerm), ATerm o_32, ATerm m_32, ATerm);
ATerm j_20 (ATerm s_19, ATerm);
ATerm k_20 (ATerm v_19, ATerm w_19, ATerm x_19, ATerm);
ATerm a_3 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_64 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm pass__old_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm EXDEV_0_0 (ATerm);
ATerm get_errno_0_0 (ATerm);
ATerm p_7 (ATerm l_12, ATerm k_12, ATerm);
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm parse_to_temp_file_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm q_7 (ATerm j_36, ATerm k_36, ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm lookup_pp_af_0_0 (ATerm);
ATerm at_suffix_1_0 (ATerm v_64 (ATerm), ATerm);
ATerm ensure_pp_table_parsed_0_0 (ATerm);
ATerm pass__new_0_0 (ATerm);
ATerm pass__prune_0_0 (ATerm);
ATerm pass__patch_0_0 (ATerm);
ATerm build_impl_args_0_0 (ATerm);
ATerm s_7 (ATerm m_12, ATerm n_12, ATerm);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm);
ATerm t_7 (ATerm k_33, ATerm l_33, ATerm);
ATerm end_scope_1_0 (ATerm x_74 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm b_78 (ATerm), ATerm);
ATerm c_4 (ATerm);
ATerm xtc_io_1_0 (ATerm c_78 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm j_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm pptable_diff_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm i_5 (ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm s_6 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm pptable_diff_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm u_7 (ATerm a_31, ATerm b_31, ATerm);
ATerm foldr_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_7 (ATerm);
ATerm v_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_76 (ATerm), ATerm);
ATerm w_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm a_8 (ATerm);
ATerm need_help_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm h_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_64 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm x_7 (ATerm v_29, ATerm w_29, ATerm);
ATerm debug_1_0 (ATerm g_60 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_64 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm m_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm b_8 (ATerm f_35, ATerm g_35, ATerm);
ATerm y_7 (ATerm w_34, ATerm x_34, ATerm);
ATerm z_7 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm h_82 (ATerm), ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm parse_options_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm b_7 (ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(g_31, h_31);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = SSL_subtr(g_31, h_31);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,c_0 = NULL,e_0 = NULL;
  t = term_m_9;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        t = term_u_9;
      }
    b_0 = t;
    t = term_u_9;
    e_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_u_9);
    t = b_7(b_0, e_0, t);
    c_0 = t;
    t = SSL_int_to_string(c_0);
    a_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, a_0), term_m_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_e_10;
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
      t = (ATerm) ATinsert(ATempty, term_f_10);
      y_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_0, (ATerm) ATinsert(ATempty, term_f_10));
      t = q_7(w_0, y_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm c_7 (ATerm k_15, ATerm l_15, ATerm t)
{
  ATerm z_0 = NULL;
  t = SSL_write_term_to_stream_baf(k_15, l_15);
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_0);
  return(t);
}
ATerm d_7 (ATerm i_60 (ATerm), ATerm o_167, ATerm s_15, ATerm t)
{
  ATerm c_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_167, term_g_10);
  t = n_7(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, s_15);
  t = i_60(t);
  t = fclose_0_0(t);
  t = s_15;
  return(t);
}
ATerm f_0 (ATerm t)
{
  ATerm i_1 = NULL,j_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          i_1 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      j_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(i_1, j_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm e_1 = NULL,h_1 = NULL;
  e_1 = t;
  t = xtc_new_file_0_0(t);
  h_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_1, e_1);
  t = d_7(f_0, h_1, e_1, t);
  t = SSL_close_file(h_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(y_78, z_78, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm e_7 (ATerm g_12, ATerm h_12, ATerm t)
{
  t = SSL_execvp(g_12, h_12);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL;
  s_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      t_2 = ATgetArgument(t, 0);
      {
        ATerm q_0 = NULL,a_1 = NULL;
        t = SSL_int_to_string(t_2);
        q_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), q_0), term_i_10);
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
          x_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(v_2);
      p_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_2), term_t_10), p_1), term_p_10), t_2);
      u_1 = t;
      t = SSL_concat_strings(u_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_64 (ATerm), ATerm t)
{
  ATerm d_3 = NULL;
  ATerm i_0 (ATerm t)
  {
    t = n_64(t);
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
  ATerm g_3 = NULL;
  g_3 = t;
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm w_10 = ATgetArgument(t, 0);
              if((g_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm x_10 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_18), term_m_18), term_f_18), term_b_18), term_v_17), term_r_17), term_l_17), term_e_17), term_v_16), term_p_16), term_e_16), term_a_16), term_t_15), term_j_15), term_d_15), term_y_14), term_u_14), term_q_14), term_m_14), term_i_14), term_a_14), term_n_13), term_f_13), term_x_12), term_q_12), term_d_12), term_x_11), term_h_11);
        t = fetch_elem_1_0(o_0, t);
        ;
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, g_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm k_3 = NULL,u_3 = NULL;
  k_3 = t;
  {
    ATerm x_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm h_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_19);
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
              t = u_3;
              {
                ATerm o_19 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = o_19;
                  }
                t = signal_from_number_0_0(t);
                t = signal_to_descr_0_0(t);
                a_2 = t;
                t = term_p_19;
                c_2 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_q_19);
                d_2 = t;
                t = SSL_printnl(c_2, d_2);
                t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_q_19));
              }
              ;
              LocalPopChoice(n_19);
            }
          else
            {
              t = m_19;
              t = k_3;
            }
        }
      }
    else
      {
        t = x_18;
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
ATerm fork_and_wait_1_0 (ATerm x_58 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,i_4 = NULL;
  i_4 = t;
  t = fork_0_0(t);
  g_4 = t;
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = i_4;
        t = x_58(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = SSL_waitpid(g_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            if(((ATgetType(u_19) != AT_INT) || (ATgetInt((ATermInt) u_19) != 0)))
              _fail(t);
            {
              ATerm y_19 = ATgetArgument(t, 1);
            }
            {
              ATerm z_19 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_4;
      }
  }
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm u_0 (ATerm t)
  {
    ATerm m_4 = NULL,n_4 = NULL;
    m_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), m_4);
    t = y_7(not_null(l_4), m_4, t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_4, n_4);
    return(t);
  }
  if(((l_4 != NULL) && (l_4 != t)))
    _fail(t);
  else
    l_4 = t;
  t = SSL_table_keys(l_4);
  t = map_1_0(u_0, t);
  return(t);
}
ATerm if_verbose5_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm r_4 = NULL;
  r_4 = t;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_4 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        u_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, term_y_17);
        t = geq_0_0(t);
        t = r_4;
        t = i_76(t);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = r_4;
      }
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm y_4 = NULL;
  y_4 = t;
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        c_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_5, term_s_14);
        t = geq_0_0(t);
        t = y_4;
        t = h_76(t);
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = y_4;
      }
  }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm h_5 = NULL;
  h_5 = t;
  {
    ATerm f_20 = t;
    int h_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_5 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        j_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_5, term_j_12);
        t = geq_0_0(t);
        t = h_5;
        t = j_76(t);
        ;
        LocalPopChoice(h_20);
      }
    else
      {
        t = f_20;
        t = h_5;
      }
  }
  return(t);
}
ATerm h_7 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm n_22, ATerm m_22, ATerm t)
{
  t = j_68(t);
  {
    ATerm x_0 (ATerm t)
    {
      ATerm p_5 = NULL;
      p_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_22, p_5);
      t = i_68(t);
      return(t);
    }
    t = fetch_1_0(x_0, t);
    t = m_22;
  }
  return(t);
}
ATerm i_7 (ATerm f_68 (ATerm), ATerm j_22, ATerm i_22, ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm d_6 = NULL,e_6 = NULL,g_6 = NULL;
    d_6 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_22;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_6 = ATgetFirst((ATermList) t);
            g_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_6;
              {
                ATerm b_1 (ATerm t)
                {
                  t = i_22;
                  return(t);
                }
                t = h_7(f_68, b_1, e_6, g_6, t);
                t = j_6(t);
              }
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = n_20;
              {
                ATerm u_2 = NULL,b_3 = NULL,q_1 = NULL;
                t = SSLgetAnnotations(d_6);
                u_2 = t;
                t = g_6;
                t = j_6(t);
                b_3 = t;
                t = (ATerm) ATinsert(CheckATermList(b_3), e_6);
                q_1 = t;
                t = SSLsetAnnotations(q_1, u_2);
              }
            }
        }
      }
    return(t);
  }
  t = j_22;
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
ATerm j_7 (ATerm c_34, ATerm d_34, ATerm e_34, ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,t_6 = NULL;
  q_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            ATerm s_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_34, d_34);
        t = y_7(c_34, d_34, t);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = (ATerm) ATempty;
      }
    t_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_6, e_34);
    t = i_7(d_1, t_6, e_34, t);
    r_6 = t;
    t = SSL_table_put(c_34, d_34, r_6);
    t = q_6;
  }
  return(t);
}
ATerm k_7 (ATerm l_76 (ATerm), ATerm m_34, ATerm l_34, ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_7 = NULL,r_7 = NULL;
    if(match_cons(t, sym__2))
      {
        g_7 = ATgetArgument(t, 0);
        r_7 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, m_34, g_7, r_7);
    t = l_76(t);
    return(t);
  }
  t = l_34;
  t = map_1_0(f_1, t);
  return(t);
}
ATerm t_8 (ATerm l_8, ATerm t)
{
  t = SSL_fclose(l_8);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_8 = ATgetArgument(t, 0);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_8);
            ;
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = t_8(p_8, t);
          }
      }
    }
  else
    {
      t = t_8(p_8, t);
    }
  return(t);
}
ATerm l_7 (ATerm q_15, ATerm t)
{
  t = SSL_read_term_from_stream(q_15);
  return(t);
}
ATerm m_7 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm u_8 = NULL;
  t = SSL_fopen(r_36, s_36);
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
  ATerm z_8 = NULL;
  t = SSL_stdout_stream();
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_8);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_9 = NULL;
  t = SSL_stderr_stream();
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_9);
  return(t);
}
ATerm d_11 (ATerm o_9, ATerm t)
{
  ATerm q_9 = NULL;
  t = SSL_explode_term(o_9);
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_20 = ATgetArgument(t, 1);
        if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
          {
            q_9 = ATgetFirst((ATermList) w_20);
            {
              ATerm x_20 = (ATerm) ATgetNext((ATermList) w_20);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_9;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_9;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_9;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_9;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_11 (ATerm w_9, ATerm z_9, ATerm a_10, ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,j_10 = NULL,s_1 = NULL;
  t = SSLgetAnnotations(a_10);
  d_10 = t;
  t = w_9;
  if(match_cons(t, sym_Path_1))
    {
      j_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_10, z_9);
  s_1 = t;
  t = SSLsetAnnotations(s_1, d_10);
  if(match_cons(t, sym__2))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(b_10, c_10, t);
  return(t);
}
ATerm f_11 (ATerm l_10, ATerm m_10, ATerm n_10, ATerm t)
{
  ATerm o_10 = NULL,r_10 = NULL,s_10 = NULL,y_10 = NULL,t_1 = NULL;
  t = SSLgetAnnotations(n_10);
  s_10 = t;
  t = SSL_is_string(l_10);
  y_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_10, m_10);
  t_1 = t;
  t = SSLsetAnnotations(t_1, s_10);
  if(match_cons(t, sym__2))
    {
      o_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(o_10, r_10, t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym__2))
    {
      b_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
      {
        ATerm y_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_11(a_11, t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = y_20;
            {
              ATerm c_21 = t;
              int d_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_11(b_11, c_11, a_11, t);
                  ;
                  LocalPopChoice(d_21);
                }
              else
                {
                  t = c_21;
                  t = f_11(b_11, c_11, a_11, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_11(a_11, t);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_e_21;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_11 = NULL,k_11 = NULL,l_11 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL;
      m_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_11, term_h_21);
      t = n_7(t);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      t = debug_1_0(g_1, t);
      _fail(t);
    }
  k_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(l_11, t);
  i_11 = t;
  t = k_11;
  t = fclose_0_0(t);
  t = i_11;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_i_21;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_j_21;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL,p_11 = NULL;
      o_11 = t;
      t = (ATerm) ATinsert(ATempty, term_m_21);
      p_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_11, (ATerm) ATinsert(ATempty, term_m_21));
      t = q_7(o_11, p_11, t);
      LocalPopChoice(l_21);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = k_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_21 = t;
            if((PushChoice() == 0))
              {
                ATerm s_11 = NULL,u_11 = NULL;
                s_11 = t;
                t = (ATerm) ATinsert(ATempty, term_f_10);
                u_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_11, (ATerm) ATinsert(ATempty, term_f_10));
                t = q_7(s_11, u_11, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_21;
              }
            t = debug_1_0(k_1, t);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
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
  t = term_u_21;
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = debug_1_0(r_1, t);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_v_21;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm b_13 = NULL,k_13 = NULL,l_13 = NULL;
  b_13 = t;
  t = term_p_19;
  k_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_21);
  l_13 = t;
  t = SSL_printnl(k_13, l_13);
  t = b_13;
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm m_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__3))
    {
      m_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
      q_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_7(m_13, p_13, q_13, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,v_13 = NULL;
  r_13 = t;
  t = term_p_19;
  s_13 = t;
  t = (ATerm) ATinsert(ATempty, term_a_22);
  v_13 = t;
  t = SSL_printnl(s_13, v_13);
  t = r_13;
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
  w_13 = t;
  t = term_p_19;
  x_13 = t;
  t = (ATerm) ATinsert(ATempty, term_z_21);
  y_13 = t;
  t = SSL_printnl(x_13, y_13);
  t = w_13;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL,b_12 = NULL,c_12 = NULL,e_12 = NULL,o_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL;
  v_11 = t;
  t = if_verbose5_1_0(m_1, t);
  {
    ATerm b_22 = t;
    if((PushChoice() == 0))
      {
        ATerm z_12 = NULL,a_13 = NULL;
        t = term_c_22;
        z_12 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, v_11);
        a_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Imported_1, v_11));
        t = y_7(z_12, a_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_22;
      }
    b_12 = t;
    t = term_c_22;
    u_12 = t;
    t = term_d_22;
    v_12 = t;
    t = (ATerm) ATinsert(ATempty, v_11);
    y_12 = t;
    t = SSL_table_put(u_12, v_12, y_12);
    t = b_12;
    t = if_verbose4_1_0(o_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(v_1, t);
    w_11 = t;
    t = term_c_22;
    t_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_c_22, w_11);
    t = k_7(w_1, t_12, w_11, t);
    t = if_verbose6_1_0(x_1, t);
    t = term_c_22;
    c_12 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, v_11);
    e_12 = t;
    t = (ATerm) ATempty;
    o_12 = t;
    t = SSL_table_put(c_12, e_12, o_12);
    t = (ATerm) ATmakeAppl(sym__3, term_c_22, (ATerm)ATmakeAppl(sym_Imported_1, v_11), (ATerm) ATempty);
    t = if_verbose4_1_0(y_1, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm x_71 (ATerm), ATerm t)
{
  ATerm e_15 = NULL,h_15 = NULL,m_15 = NULL;
  e_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_15;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_15 = ATgetFirst((ATermList) t);
          m_15 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm f_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 = NULL,k_4 = NULL,o_4 = NULL,j_2 = NULL;
            t = SSLgetAnnotations(e_15);
            e_4 = t;
            t = h_15;
            t = x_71(t);
            k_4 = t;
            t = m_15;
            t = filter_1_0(x_71, t);
            o_4 = t;
            t = (ATerm) ATinsert(CheckATermList(o_4), k_4);
            j_2 = t;
            t = SSLsetAnnotations(j_2, e_4);
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = f_22;
            t = m_15;
            t = filter_1_0(x_71, t);
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_73 (ATerm), ATerm t)
{
  ATerm x_15 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_73(t);
        t = x_15(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
    return(t);
  }
  t = x_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = q_22;
      {
        ATerm u_22 = t;
        int v_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_15 = NULL;
            t = term_w_22;
            z_15 = t;
            t = SSL_getenv(z_15);
            ;
            LocalPopChoice(v_22);
          }
        else
          {
            t = u_22;
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
  t = term_x_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL;
  t = term_c_22;
  k_16 = t;
  t = term_y_22;
  l_16 = t;
  t = term_z_22;
  t = y_7(k_16, l_16, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm a_23 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_23;
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
  t = term_b_23;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  t = if_verbose5_1_0(z_1, t);
  g_16 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_16 = NULL,i_16 = NULL;
        t = term_c_22;
        h_16 = t;
        t = term_d_22;
        i_16 = t;
        t = term_e_23;
        t = y_7(h_16, i_16, t);
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        {
          ATerm j_16 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          j_16 = t;
          t = repeat_1_0(e_2, t);
          t = j_16;
        }
      }
    t = g_16;
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
  t = term_f_23;
  return(t);
}
ATerm k_18 (ATerm r_16, ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  t = term_c_22;
  y_16 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, r_16);
  z_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Tool_1, r_16));
  t = y_7(y_16, z_16, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_23 = ATgetFirst((ATermList) t);
      if(match_cons(g_23, sym__2))
        {
          ATerm k_23 = ATgetArgument(g_23, 0);
          x_16 = ATgetArgument(g_23, 1);
        }
      else
        _fail(t);
      {
        ATerm h_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_16;
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = debug_1_0(n_2, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_f_23;
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_c_22;
  t = table_getlist_0_0(t);
  t = debug_1_0(r_2, t);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_17 = NULL,b_17 = NULL,h_17 = NULL;
      t = if_verbose5_1_0(h_2, t);
      t = xtc_load_0_0(t);
      h_17 = t;
      if(match_cons(t, sym__2))
        {
          a_17 = ATgetArgument(t, 0);
          b_17 = ATgetArgument(t, 1);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_17 = NULL,x_17 = NULL,z_17 = NULL;
                t = term_c_22;
                x_17 = t;
                t = (ATerm) ATmakeAppl(sym_Tool_1, a_17);
                z_17 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_c_22, (ATerm) ATmakeAppl(sym_Tool_1, a_17));
                t = y_7(x_17, z_17, t);
                {
                  ATerm k_2 (ATerm t)
                  {
                    if(match_cons(t, sym__2))
                      {
                        if((b_17 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        if(((m_17 != NULL) && (m_17 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          m_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = fetch_1_0(k_2, t);
                  t = not_null(m_17);
                }
                ;
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = k_18(h_17, t);
              }
          }
        }
      else
        {
          t = k_18(h_17, t);
        }
      t = if_verbose5_1_0(m_2, t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = m_23;
      {
        ATerm i_18 = NULL,b_5 = NULL,d_5 = NULL;
        i_18 = t;
        t = term_p_19;
        b_5 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), i_18), term_v_23);
        d_5 = t;
        t = SSL_printnl(b_5, d_5);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_23), i_18), term_v_23);
        t = if_verbose5_1_0(p_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_command_1_0 (ATerm p_78 (ATerm), ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  p_18 = t;
  t = p_78(t);
  t = xtc_find_0_0(t);
  o_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
  {
    ATerm w_2 (ATerm t)
    {
      ATerm q_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_18, p_18);
      t = e_7(o_18, p_18, t);
      t = term_b_24;
      q_18 = t;
      t = SSL_exit(q_18);
      return(t);
    }
    t = fork_and_wait_1_0(w_2, t);
    t = p_18;
  }
  return(t);
}
ATerm d_19 (ATerm v_18, ATerm t)
{
  ATerm w_18 = NULL;
  t = SSL_explode_term(v_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_18;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym__2))
    {
      y_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      {
        ATerm l_24 = t;
        int m_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = z_18;
              return(t);
            }
            t = y_18;
            t = at_end_1_0(z_2, t);
            ;
            LocalPopChoice(m_24);
          }
        else
          {
            t = l_24;
            t = d_19(a_19, t);
          }
      }
    }
  else
    {
      t = d_19(a_19, t);
    }
  return(t);
}
ATerm o_7 (ATerm a_75 (ATerm), ATerm o_32, ATerm m_32, ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  t = a_75(t);
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_19, o_32, m_32);
  t = z_7(e_19, o_32, m_32, t);
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL;
        t = term_p_24;
        l_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_19, term_p_24);
        t = y_7(e_19, l_19, t);
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_19 = ATgetFirst((ATermList) t);
        g_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_24;
    j_19 = t;
    t = (ATerm) ATinsert(CheckATermList(g_19), (ATerm) ATinsert(CheckATermList(f_19), o_32));
    k_19 = t;
    t = SSL_table_put(e_19, j_19, k_19);
    t = i_19;
  }
  return(t);
}
ATerm j_20 (ATerm s_19, ATerm t)
{
  t = s_19;
  {
    ATerm q_24 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_24 = ATgetArgument(t, 0);
            ATerm s_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_24;
      }
    t = term_t_24;
    t = debug_1_0(a_3, t);
    t = (ATerm) ATmakeAppl(sym__2, s_19, term_g_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_20 (ATerm v_19, ATerm w_19, ATerm x_19, ATerm t)
{
  t = SSL_open_file(v_19, w_19);
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_20 = NULL,g_20 = NULL,i_20 = NULL;
  e_20 = t;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      i_20 = ATgetArgument(t, 1);
      {
        ATerm v_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_20(e_20, t);
            ;
            LocalPopChoice(w_24);
          }
        else
          {
            t = v_24;
            t = k_20(g_20, i_20, e_20, t);
          }
      }
    }
  else
    {
      t = j_20(e_20, t);
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  t = new_file_0_0(t);
  l_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_20, term_g_10);
  t = open_file_0_0(t);
  t = term_c_25;
  m_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_20, term_c_25);
  t = o_7(c_3, l_20, m_20, t);
  t = l_20;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm t_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  z_20 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_5 = NULL,m_5 = NULL;
      t = z_20;
      t = xtc_new_file_0_0(t);
      l_5 = t;
      t = v_0(t);
      m_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_5, (ATerm) ATinsert(ATinsert(ATempty, l_5), term_d_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(l_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_5);
    }
  else
    {
      ATerm s_5 = NULL,x_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_21;
      t = xtc_new_file_0_0(t);
      s_5 = t;
      t = v_0(t);
      x_5 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_5), term_d_25), a_21), term_e_25));
      t = conc_0_0(t);
      t = xtc_command_1_0(t_0, t);
      t = SSL_close_file(s_5);
      t = (ATerm) ATmakeAppl(sym_FILE_1, s_5);
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_64 (ATerm), ATerm t)
{
  ATerm s_21 (ATerm t)
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
          t = s_21(t);
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
        t = r_64(t);
      }
    return(t);
  }
  t = s_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
  w_21 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_21;
    }
  else
    {
      ATerm e_3 (ATerm t)
      {
        t = not_null(y_21);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_21 = ATgetFirst((ATermList) t);
          if(((y_21 != NULL) && (y_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_21;
      t = at_end_1_0(e_3, t);
    }
  return(t);
}
ATerm pass__old_0_0 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_25;
      t = get_config_0_0(t);
      LocalPopChoice(g_25);
      {
        ATerm e_22 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        e_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, e_22), term_h_25);
      }
    }
  else
    {
      t = f_25;
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
  ATerm g_22 = NULL,h_22 = NULL,k_22 = NULL;
  t = term_c_25;
  t = new_0_0(t);
  g_22 = t;
  t = term_n_25;
  h_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_22, term_n_25);
  t = x_7(g_22, h_22, t);
  k_22 = t;
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_22 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_10);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, (ATerm) ATinsert(ATempty, term_f_10));
        t = q_7(k_22, r_22, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = k_22;
      }
  }
  return(t);
}
ATerm EXDEV_0_0 (ATerm t)
{
  t = SSL_EXDEV();
  return(t);
}
ATerm get_errno_0_0 (ATerm t)
{
  t = SSL_get_errno();
  return(t);
}
ATerm p_7 (ATerm l_12, ATerm k_12, ATerm t)
{
  ATerm s_25 = t;
  int t_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_rename(l_12, k_12);
      ;
      LocalPopChoice(t_25);
    }
  else
    {
      t = s_25;
      t = get_errno_0_0(t);
      t = term_c_25;
      t = EXDEV_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, l_12, k_12);
      t = s_7(l_12, k_12, t);
      t = SSL_remove(l_12);
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL;
  i_23 = t;
  if(match_cons(t, sym_FILE_1))
    {
      j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_8 = NULL;
        t = i_23;
        t = s_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = term_y_25;
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_23, term_y_25);
        t = s_7(j_23, d_8, t);
        t = SSL_remove(j_23);
        t = term_y_25;
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = v_25;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_8 = NULL;
              t = i_23;
              t = s_0(t);
              v_8 = t;
              {
                ATerm b_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_8 = NULL;
                    x_8 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_8;
                      }
                    else
                      {
                        t = x_8;
                        if((j_23 != t))
                          {
                            _fail(t);
                          }
                        t = x_8;
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = b_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, j_23, v_8);
                t = p_7(j_23, v_8, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_8);
              }
              ;
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              t = i_23;
              t = s_0(t);
              if((j_23 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, j_23);
            }
        }
      }
  }
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm n_3 (ATerm t)
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
  t = term_d_26;
  return(t);
}
ATerm parse_to_temp_file_0_0 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  n_23 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
      {
        ATerm e_26 = t;
        int f_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_23 = NULL,q_23 = NULL,o_2 = NULL;
            q_23 = t;
            if(match_cons(t, sym_FILE_1))
              {
                ATerm g_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_23);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, n_23);
            o_2 = t;
            t = SSLsetAnnotations(o_2, p_23);
            LocalPopChoice(f_26);
            t = xtc_transform_file_2_0(h_3, i_3, t);
          }
        else
          {
            t = e_26;
            t = xtc_transform_term_2_0(j_3, n_3, t);
          }
        t = rename_to_1_0(new_file_0_0, t);
      }
      return(t);
    }
    t = xtc_temp_files_1_0(f_3, t);
    if(match_cons(t, sym_FILE_1))
      {
        o_23 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = o_23;
    t = if_verbose2_1_0(o_3, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm u_23 = NULL;
  u_23 = t;
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_23 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        w_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_23, term_n_11);
        t = geq_0_0(t);
        t = u_23;
        t = f_76(t);
        ;
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = u_23;
      }
  }
  return(t);
}
ATerm q_7 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_access(j_36, k_36);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = debug_1_0(r_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_j_26;
  return(t);
}
ATerm lookup_pp_af_0_0 (ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,d_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,q_2 = NULL;
  z_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_26), term_k_26), z_23);
  g_24 = t;
  t = SSL_concat_strings(g_24);
  f_24 = t;
  t = (ATerm) ATinsert(ATempty, term_f_10);
  d_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_24, (ATerm) ATinsert(ATempty, term_f_10));
  t = q_7(f_24, d_24, t);
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
  k_24 = t;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      ATerm n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_24);
  h_24 = t;
  t = SSL_modification_time(y_23);
  i_24 = t;
  t = SSL_modification_time(z_23);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_24, j_24);
  q_2 = t;
  t = SSLsetAnnotations(q_2, h_24);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, y_23, z_23);
  c_24 = t;
  t = SSL_explode_term(c_24);
  if(match_cons(t, sym__2))
    {
      ATerm o_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_26 = ATgetArgument(t, 1);
        if(((ATgetType(p_26) == AT_LIST) && !(ATisEmpty(p_26))))
          {
            a_24 = ATgetFirst((ATermList) p_26);
            {
              ATerm q_26 = (ATerm) ATgetNext((ATermList) p_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_24;
  t = if_verbose2_1_0(q_3, t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_64 (ATerm), ATerm t)
{
  ATerm b_25 (ATerm t)
  {
    ATerm r_26 = t;
    int s_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_64(t);
        ;
        LocalPopChoice(s_26);
      }
    else
      {
        t = r_26;
        {
          ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,f_9 = NULL,i_9 = NULL,y_2 = NULL;
          y_24 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_24 = ATgetFirst((ATermList) t);
              a_25 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_24);
          f_9 = t;
          t = a_25;
          t = b_25(t);
          i_9 = t;
          t = (ATerm) ATinsert(CheckATermList(i_9), z_24);
          y_2 = t;
          t = SSLsetAnnotations(y_2, f_9);
        }
      }
    return(t);
  }
  t = b_25(t);
  return(t);
}
ATerm ensure_pp_table_parsed_0_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL,t_9 = NULL;
      p_9 = t;
      t = term_v_26;
      t_9 = t;
      t = SSL_explode_string(t_9);
      n_9 = t;
      t = SSL_explode_string(p_9);
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
        t = p_9;
      }
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm x_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL,x_9 = NULL,y_9 = NULL;
            x_9 = t;
            t = term_a_27;
            y_9 = t;
            t = SSL_explode_string(y_9);
            v_9 = t;
            t = SSL_explode_string(x_9);
            {
              ATerm v_3 (ATerm t)
              {
                if((v_9 != t))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = at_suffix_1_0(v_3, t);
              t = x_9;
            }
            ;
            LocalPopChoice(z_26);
          }
        else
          {
            t = x_26;
            {
              ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
              i_25 = t;
              t = term_p_19;
              k_25 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_25), term_b_27);
              l_25 = t;
              t = SSL_printnl(k_25, l_25);
              t = term_u_9;
              j_25 = t;
              t = SSL_exit(j_25);
              t = (ATerm) ATinsert(ATinsert(ATempty, i_25), term_b_27);
            }
          }
        {
          ATerm c_27 = t;
          int d_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = lookup_pp_af_0_0(t);
              ;
              LocalPopChoice(d_27);
            }
          else
            {
              t = c_27;
              t = parse_to_temp_file_0_0(t);
            }
        }
      }
    }
  return(t);
}
ATerm pass__new_0_0 (ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_27;
      t = get_config_0_0(t);
      LocalPopChoice(f_27);
      {
        ATerm m_25 = NULL;
        t = ensure_pp_table_parsed_0_0(t);
        m_25 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, m_25), term_h_27);
      }
    }
  else
    {
      t = e_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__prune_0_0 (ATerm t)
{
  ATerm j_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_27;
      t = get_config_0_0(t);
      LocalPopChoice(m_27);
      t = (ATerm) ATinsert(ATempty, term_n_27);
    }
  else
    {
      t = j_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm pass__patch_0_0 (ATerm t)
{
  ATerm q_27 = t;
  int r_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_27;
      t = get_config_0_0(t);
      LocalPopChoice(r_27);
      t = (ATerm) ATinsert(ATempty, term_v_27);
    }
  else
    {
      t = q_27;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm build_impl_args_0_0 (ATerm t)
{
  ATerm o_25 = NULL,r_25 = NULL,u_25 = NULL,w_25 = NULL;
  t = term_c_25;
  t = pass__patch_0_0(t);
  o_25 = t;
  t = term_c_25;
  t = pass__prune_0_0(t);
  r_25 = t;
  t = term_c_25;
  t = pass__new_0_0(t);
  u_25 = t;
  t = term_c_25;
  t = pass__old_0_0(t);
  w_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_25), u_25), r_25), o_25);
  t = concat_0_0(t);
  return(t);
}
ATerm s_7 (ATerm m_12, ATerm n_12, ATerm t)
{
  t = SSL_copy(m_12, n_12);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,y_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_FILE_1))
    {
      y_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_27 = t;
    int y_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_10 = NULL;
        t = w_26;
        t = r_0(t);
        q_10 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = q_10;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = q_10;
          }
        t = (ATerm) ATmakeAppl(sym__2, y_26, q_10);
        t = s_7(y_26, q_10, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_26);
        ;
        LocalPopChoice(y_27);
      }
    else
      {
        t = w_27;
        {
          ATerm z_27 = t;
          int d_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_11 = NULL;
              t = w_26;
              t = r_0(t);
              q_11 = t;
              {
                ATerm e_28 = t;
                if((PushChoice() == 0))
                  {
                    ATerm r_11 = NULL;
                    r_11 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = r_11;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = r_11;
                          }
                        else
                          {
                            t = r_11;
                            if((y_26 != t))
                              {
                                _fail(t);
                              }
                            t = r_11;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_28;
                  }
                t = (ATerm) ATmakeAppl(sym__2, y_26, q_11);
                t = s_7(y_26, q_11, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, y_26);
              }
              ;
              LocalPopChoice(d_28);
            }
          else
            {
              t = z_27;
              t = w_26;
              t = r_0(t);
              if((y_26 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, y_26);
            }
        }
      }
  }
  return(t);
}
ATerm t_7 (ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm g_27 = NULL,i_27 = NULL;
  i_27 = t;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
        t = y_7(k_33, l_33, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_28 = ATgetFirst((ATermList) t);
            g_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_28);
        t = SSL_table_put(k_33, l_33, g_27);
        t = (ATerm) ATmakeAppl(sym__3, k_33, l_33, g_27);
      }
    else
      {
        t = f_28;
        t = SSL_table_remove(k_33, l_33);
        t = (ATerm) ATmakeAppl(sym__2, k_33, l_33);
      }
    t = i_27;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_74 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,o_27 = NULL,p_27 = NULL,s_27 = NULL;
  p_27 = t;
  t = x_74(t);
  o_27 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_27 = NULL;
        t = term_p_24;
        t_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, term_p_24);
        t = y_7(o_27, t_27, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_27 = ATgetFirst((ATermList) t);
        k_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_24;
    s_27 = t;
    t = SSL_table_put(o_27, s_27, k_27);
    t = l_27;
    {
      ATerm w_3 (ATerm t)
      {
        ATerm u_27 = NULL;
        u_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_27, u_27);
        t = t_7(o_27, u_27, t);
        return(t);
      }
      t = map_1_0(w_3, t);
      t = p_27;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_75 (ATerm), ATerm t_75 (ATerm), ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_75(t);
      t = t_75(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = l_28;
      t = t_75(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,h_28 = NULL;
  a_28 = t;
  t = w_74(t);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_27, term_p_24);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm v_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_24;
        m_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_27, term_p_24);
        t = y_7(x_27, m_28, t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
    b_28 = t;
    t = term_p_24;
    c_28 = t;
    t = (ATerm) ATinsert(CheckATermList(b_28), (ATerm) ATempty);
    h_28 = t;
    t = SSL_table_put(x_27, c_28, h_28);
    t = a_28;
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm z_28 = NULL;
  z_28 = t;
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(z_28);
        ;
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        t = z_28;
      }
  }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_x_24;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm b_78 (ATerm), ATerm t)
{
  ATerm r_28 = NULL;
  ATerm y_3 (ATerm t)
  {
    ATerm s_28 = NULL;
    s_28 = t;
    {
      ATerm y_28 = t;
      int a_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_28 = NULL,u_28 = NULL;
          t = term_x_24;
          t_28 = t;
          t = term_p_24;
          u_28 = t;
          t = term_b_29;
          t = y_7(t_28, u_28, t);
          ;
          LocalPopChoice(a_29);
        }
      else
        {
          t = y_28;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((r_28 != NULL) && (r_28 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            r_28 = ATgetFirst((ATermList) t);
          {
            ATerm c_29 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = r_28;
      t = map_1_0(z_3, t);
      t = s_28;
      t = end_scope_1_0(a_4, t);
    }
    return(t);
  }
  t = begin_scope_1_0(x_3, t);
  t = restore_always_2_0(b_78, y_3, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm d_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_25;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = d_29;
      t = term_y_25;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm c_78 (ATerm), ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL;
        t = term_e_25;
        t = get_config_0_0(t);
        e_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_29);
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = term_e_10;
      }
    t = c_78(t);
    t = copy_to_1_0(c_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(b_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm f_30 = NULL;
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_29 = NULL,s_29 = NULL;
      s_29 = t;
      if(match_cons(t, sym_FILE_1))
        {
          r_29 = ATgetArgument(t, 0);
          {
            ATerm i_12 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(s_29);
            i_12 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, r_29);
            l_3 = t;
            t = SSLsetAnnotations(l_3, i_12);
          }
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_29;
        }
      LocalPopChoice(j_29);
      t = xtc_transform_file_2_0(f_4, h_4, t);
    }
  else
    {
      t = i_29;
      t = xtc_transform_term_2_0(j_4, p_4, t);
    }
  f_30 = t;
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_27;
        t = get_config_0_0(t);
        t = f_30;
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_13 = NULL;
              if(match_cons(t, sym_FILE_1))
                {
                  i_13 = ATgetArgument(t, 0);
                  {
                    ATerm u_13 = NULL,m_3 = NULL;
                    t = SSLgetAnnotations(f_30);
                    u_13 = t;
                    t = (ATerm) ATmakeAppl(sym_FILE_1, i_13);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, u_13);
                  }
                }
              else
                {
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                  t = f_30;
                }
              LocalPopChoice(n_29);
              t = xtc_transform_file_2_0(q_4, pass_verbose_0_0, t);
            }
          else
            {
              t = m_29;
              t = xtc_transform_term_2_0(s_4, pass_verbose_0_0, t);
            }
        }
        ;
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        t = f_30;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_c_25;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_o_29;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_c_25;
  t = build_impl_args_0_0(t);
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_p_29;
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
  t = term_c_25;
  t = whoami_0_0(t);
  l_30 = t;
  t = term_p_19;
  n_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_29), l_30), term_q_29);
  o_30 = t;
  t = SSL_printnl(n_30, o_30);
  t = term_u_9;
  m_30 = t;
  t = SSL_exit(m_30);
  t = k_30;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm r_30 = NULL;
  r_30 = t;
  if(match_string(t, "-k"))
    {
      t = r_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_30;
    }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
  s_30 = t;
  t = SSL_string_to_int(s_30);
  t_30 = t;
  t = term_u_29;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, t_30);
  t = b_8(u_30, t_30, t);
  t = s_30;
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_x_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_4, v_4, w_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm w_30 = NULL;
  w_30 = t;
  if(match_string(t, "-S"))
    {
      t = w_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_30;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL;
  t = term_m_9;
  x_30 = t;
  t = term_y_29;
  y_30 = t;
  t = term_z_29;
  t = b_8(x_30, y_30, t);
  t = term_a_30;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_b_30;
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm z_30 = NULL,c_31 = NULL,f_31 = NULL;
  z_30 = t;
  t = SSL_string_to_int(z_30);
  c_31 = t;
  t = term_m_9;
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_9, c_31);
  t = b_8(f_31, c_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_30);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL;
  t = term_d_30;
  i_31 = t;
  t = term_c_25;
  j_31 = t;
  t = term_e_30;
  t = b_8(i_31, j_31, t);
  t = term_g_30;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      ;
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_5, f_5, g_5, t);
            ;
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            t = Option_3_0(i_5, k_5, n_5, t);
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  if(match_string(t, "-o"))
    {
      t = l_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_31;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL;
  n_31 = t;
  t = term_d_25;
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_25, n_31);
  t = b_8(o_31, n_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_31);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_v_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_5, q_5, r_5, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm r_31 = NULL;
  r_31 = t;
  if(match_string(t, "-i"))
    {
      t = r_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_31;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm s_31 = NULL,u_31 = NULL;
  s_31 = t;
  t = term_e_25;
  u_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_25, s_31);
  t = b_8(u_31, s_31, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_31);
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_5, y_5, z_5, t);
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,t_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
      t = term_c_25;
      t = p_0(t);
      u_32 = t;
      t = term_e_31;
      v_32 = t;
      t = term_k_31;
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_k_31, u_32);
      t = z_7(v_32, w_32, u_32, t);
      _fail(t);
    }
  else
    {
      ATerm m_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_31 = ATgetFirst((ATermList) t);
          a_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_32 = ATgetFirst((ATermList) t);
          t_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_31;
      t = m_0(t);
      t = b_32;
      t = n_0(t);
      m_33 = t;
      t = (ATerm) ATinsert(CheckATermList(t_32), m_33);
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
  ATerm n_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = term_v_27;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_27, n_33);
  t = b_8(p_33, n_33, t);
  t = n_33;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_m_31;
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
  ATerm q_33 = NULL,t_33 = NULL;
  q_33 = t;
  t = term_n_27;
  t_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_27, q_33);
  t = b_8(t_33, q_33, t);
  t = q_33;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm l_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--old", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  u_33 = t;
  t = term_h_25;
  v_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_25, u_33);
  t = b_8(v_33, u_33, t);
  t = u_33;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_31;
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
  t = term_h_27;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_27, w_33);
  t = b_8(x_33, w_33, t);
  t = w_33;
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_t_31;
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
  ATerm y_33 = NULL,z_33 = NULL;
  t = term_v_31;
  y_33 = t;
  t = term_c_25;
  z_33 = t;
  t = term_w_31;
  t = b_8(y_33, z_33, t);
  t = term_x_31;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm pptable_diff_options_0_0 (ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_6, c_6, f_6, t);
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
            t = Option_3_0(h_6, i_6, k_6, t);
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
                  t = ArgOption_3_0(l_6, n_6, p_6, t);
                  ;
                  LocalPopChoice(h_32);
                }
              else
                {
                  t = g_32;
                  {
                    ATerm i_32 = t;
                    int j_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ArgOption_3_0(s_6, v_6, w_6, t);
                        ;
                        LocalPopChoice(j_32);
                      }
                    else
                      {
                        t = i_32;
                        {
                          ATerm k_32 = t;
                          int l_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = input_option_0_0(t);
                              ;
                              LocalPopChoice(l_32);
                            }
                          else
                            {
                              t = k_32;
                              {
                                ATerm n_32 = t;
                                int p_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = output_option_0_0(t);
                                    ;
                                    LocalPopChoice(p_32);
                                  }
                                else
                                  {
                                    t = n_32;
                                    {
                                      ATerm q_32 = t;
                                      int r_32 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Option_3_0(x_6, y_6, z_6, t);
                                          ;
                                          LocalPopChoice(r_32);
                                        }
                                      else
                                        {
                                          t = q_32;
                                          {
                                            ATerm s_32 = t;
                                            int x_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = verbose_option_0_0(t);
                                                ;
                                                LocalPopChoice(x_32);
                                              }
                                            else
                                              {
                                                t = s_32;
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
  ATerm b_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_25;
  t = whoami_0_0(t);
  b_34 = t;
  t = term_p_19;
  i_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_32), b_34);
  j_34 = t;
  t = SSL_printnl(i_34, j_34);
  t = term_u_9;
  h_34 = t;
  t = SSL_exit(h_34);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm u_7 (ATerm a_31, ATerm b_31, ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_31, b_31);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = SSL_addr(a_31, b_31);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_70 (ATerm), ATerm u_70 (ATerm), ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_34;
      t = t_70(t);
    }
  else
    {
      ATerm u_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_34 = ATgetFirst((ATermList) t);
          r_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_34;
      t = foldr_2_0(t_70, u_70, t);
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, u_34);
      t = u_70(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_y_29;
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL;
  if(match_cons(t, sym__2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7(g_14, h_14, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_34 = NULL,b_14 = NULL,c_14 = NULL;
  t = times_0_0(t);
  c_14 = t;
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_33 = ATgetArgument(t, 0);
      b_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_14;
  t = foldr_2_0(a_7, v_7, t);
  z_34 = t;
  t = SSL_TicksToSeconds(z_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_35 = NULL,c_36 = NULL,f_36 = NULL;
  v_35 = t;
  if(match_cons(t, sym__2))
    {
      c_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_36;
        if((c_36 != t))
          {
            _fail(t);
          }
        t = v_35;
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = d_33;
        t = (ATerm) ATmakeAppl(sym__2, c_36, f_36);
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(c_36, f_36);
              ;
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              t = SSL_gtr(c_36, f_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_36, f_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_76 (ATerm), ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm o_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL;
        t = term_m_9;
        t = get_config_0_0(t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_36, term_u_9);
        t = geq_0_0(t);
        t = p_36;
        t = e_76(t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = o_33;
        t = p_36;
      }
  }
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm z_36 = NULL,n_37 = NULL,r_37 = NULL,w_37 = NULL;
  t = run_time_0_0(t);
  z_36 = t;
  t = term_c_25;
  t = whoami_0_0(t);
  n_37 = t;
  t = term_p_19;
  r_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_33), z_36), term_p_10), n_37);
  w_37 = t;
  t = SSL_printnl(r_37, w_37);
  t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_33), z_36), term_p_10), n_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_29;
  x_37 = t;
  t = SSL_exit(x_37);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL;
  l_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = l_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          k_38 = ATgetArgument(t, 0);
          {
            ATerm b_15 = NULL,s_3 = NULL;
            t = SSLgetAnnotations(l_38);
            b_15 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, k_38);
            s_3 = t;
            t = SSLsetAnnotations(s_3, b_15);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = l_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_34;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_34);
    }
  else
    {
      t = a_34;
      t = fetch_1_0(a_8, t);
    }
  t = j_80(t);
  return(t);
}
ATerm long_description_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_35), term_c_35), term_b_35), term_a_35), term_y_34), term_v_34), term_t_34), term_s_34), term_o_34), term_n_34), term_k_34);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_38 = ATgetFirst((ATermList) t);
      p_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_38 = NULL,u_38 = NULL;
        ATerm c_8 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_38)), not_null(u_38));
          return(t);
        }
        t = p_38;
        t = k_0(t);
        if(((t_38 != NULL) && (t_38 != t)))
          _fail(t);
        else
          t_38 = t;
        t = o_38;
        t = j_0(t);
        if(((u_38 != NULL) && (u_38 != t)))
          _fail(t);
        else
          u_38 = t;
        t = p_38;
        t = reverse_acc_2_0(j_0, c_8, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_25;
      t = k_0(t);
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_8 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_39), term_e_35);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_32;
      t = get_config_0_0(t);
      z_38 = t;
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm e_8 (ATerm t)
        {
          ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL,t_5 = NULL;
          e_39 = t;
          if(match_cons(t, sym_Program_1))
            {
              d_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_39);
          c_39 = t;
          t = d_39;
          if(((z_38 != NULL) && (z_38 != t)))
            _fail(t);
          else
            z_38 = t;
          t = (ATerm) ATmakeAppl(sym_Program_1, d_39);
          t_5 = t;
          t = SSLsetAnnotations(t_5, c_39);
          return(t);
        }
        t = fetch_1_0(e_8, t);
      }
    }
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_35), not_null(z_38)), term_l_35);
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
    t = term_e_31;
    a_39 = t;
    t = term_k_31;
    b_39 = t;
    t = term_o_35;
    t = y_7(a_39, b_39, t);
    t = reverse_acc_2_0(_id, f_8, t);
    t = map_1_0(h_8, t);
    {
      ATerm p_35 = t;
      int q_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_39 = NULL;
          ATerm i_8 (ATerm t)
          {
            t = not_null(z_38);
            return(t);
          }
          t = long_description_1_0(i_8, t);
          o_39 = t;
          t = (ATerm) ATinsert(CheckATermList(o_39), term_r_35);
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
ATerm fetch_1_0 (ATerm l_64 (ATerm), ATerm t)
{
  ATerm p_40 (ATerm t)
  {
    ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
    m_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_40 = ATgetFirst((ATermList) t);
        o_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_35 = t;
      int t_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_15 = NULL,y_15 = NULL,v_5 = NULL;
          t = SSLgetAnnotations(m_40);
          r_15 = t;
          t = n_40;
          t = l_64(t);
          y_15 = t;
          t = (ATerm) ATinsert(CheckATermList(o_40), y_15);
          v_5 = t;
          t = SSLsetAnnotations(v_5, r_15);
          ;
          LocalPopChoice(t_35);
        }
      else
        {
          t = s_35;
          {
            ATerm n_16 = NULL,q_16 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(m_40);
            n_16 = t;
            t = o_40;
            t = p_40(t);
            q_16 = t;
            t = (ATerm) ATinsert(CheckATermList(q_16), n_40);
            w_5 = t;
            t = SSLsetAnnotations(w_5, n_16);
          }
        }
    }
    return(t);
  }
  t = p_40(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  {
    ATerm u_35 = t;
    int w_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_35 = ATgetFirst((ATermList) t);
                ATerm y_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_40;
          }
        ;
        LocalPopChoice(w_35);
      }
    else
      {
        t = u_35;
        t = (ATerm) ATinsert(ATempty, t_40);
      }
    u_40 = t;
    t = term_y_25;
    v_40 = t;
    t = SSL_printnl(v_40, u_40);
    t = t_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm x_7 (ATerm v_29, ATerm w_29, ATerm t)
{
  t = SSL_strcat(v_29, w_29);
  return(t);
}
ATerm debug_1_0 (ATerm g_60 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  z_40 = t;
  t = g_60(t);
  a_41 = t;
  t = term_p_19;
  b_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_40), a_41);
  c_41 = t;
  t = SSL_printnl(b_41, c_41);
  t = z_40;
  return(t);
}
ATerm map_1_0 (ATerm b_64 (ATerm), ATerm t)
{
  ATerm r_41 (ATerm t)
  {
    ATerm o_41 = NULL,p_41 = NULL,q_41 = NULL;
    o_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_41;
      }
    else
      {
        ATerm f_17 = NULL,j_17 = NULL,n_17 = NULL,a_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_41 = ATgetFirst((ATermList) t);
            q_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_41);
        f_17 = t;
        t = p_41;
        t = b_64(t);
        j_17 = t;
        t = q_41;
        t = r_41(t);
        n_17 = t;
        t = (ATerm) ATinsert(CheckATermList(n_17), j_17);
        a_6 = t;
        t = SSLsetAnnotations(a_6, f_17);
      }
    return(t);
  }
  t = r_41(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(a_36);
    }
  else
    {
      t = z_35;
    }
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_41 = NULL;
      z_41 = t;
      t = SSL_is_string(z_41);
      ;
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_8, t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            {
              ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
              f_42 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_42 = ATgetArgument(t, 0);
                  t = g_42;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_42 = ATgetArgument(t, 0);
                      t = g_42;
                      {
                        ATerm i_36 = t;
                        int l_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_36);
                          }
                        else
                          {
                            t = i_36;
                            t = debug_1_0(m_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_42 = NULL,m_42 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_42 = ATgetArgument(t, 0);
                          h_42 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_42;
                      t = eval_config_0_0(t);
                      l_42 = t;
                      t = h_42;
                      t = eval_config_0_0(t);
                      m_42 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_42, m_42);
                      t = x_7(l_42, m_42, t);
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
  ATerm q_42 = NULL,r_42 = NULL;
  q_42 = t;
  t = term_m_36;
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, q_42);
  t = y_7(r_42, q_42, t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_42 = NULL,t_42 = NULL;
        t = eval_config_0_0(t);
        s_42 = t;
        t = term_m_36;
        t_42 = t;
        t = SSL_table_put(t_42, q_42, s_42);
        t = s_42;
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
      }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL;
  t = term_q_36;
  w_42 = t;
  t = term_c_25;
  x_42 = t;
  t = term_t_36;
  t = b_8(w_42, x_42, t);
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm s_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  t = term_q_36;
  a_43 = t;
  t = term_c_25;
  b_43 = t;
  t = term_t_36;
  t = b_8(a_43, b_43, t);
  t = term_v_36;
  y_42 = t;
  t = term_c_25;
  z_42 = t;
  t = term_w_36;
  t = b_8(y_42, z_42, t);
  t = term_y_36;
  return(t);
}
ATerm a_9 (ATerm t)
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
      t = Option_3_0(n_8, q_8, r_8, t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = Option_3_0(s_8, y_8, a_9, t);
    }
  return(t);
}
ATerm b_8 (ATerm f_35, ATerm g_35, ATerm t)
{
  ATerm c_43 = NULL;
  t = term_m_36;
  c_43 = t;
  t = SSL_table_put(c_43, f_35, g_35);
  t = (ATerm) ATmakeAppl(sym__3, term_m_36, f_35, g_35);
  return(t);
}
ATerm y_7 (ATerm w_34, ATerm x_34, ATerm t)
{
  t = SSL_table_get(w_34, x_34);
  return(t);
}
ATerm z_7 (ATerm f_33, ATerm g_33, ATerm e_33, ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL;
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_37 = ATgetArgument(t, 0);
            ATerm g_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_33, g_33);
        t = y_7(f_33, g_33, t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = (ATerm) ATempty;
      }
    f_43 = t;
    t = (ATerm) ATinsert(CheckATermList(f_43), e_33);
    g_43 = t;
    t = SSL_table_put(f_33, g_33, g_43);
    t = e_43;
  }
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
      t = term_c_25;
      t = h_0(t);
      o_43 = t;
      t = term_e_31;
      p_43 = t;
      t = term_k_31;
      q_43 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_31, term_k_31, o_43);
      t = z_7(p_43, q_43, o_43, t);
      _fail(t);
    }
  else
    {
      ATerm t_43 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_43 = ATgetFirst((ATermList) t);
          n_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_43;
      t = d_0(t);
      t = term_c_25;
      t = g_0(t);
      t_43 = t;
      t = (ATerm) ATinsert(CheckATermList(n_43), t_43);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_51 (ATerm), ATerm r_51 (ATerm), ATerm t)
{
  ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,m_6 = NULL;
  z_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_43 = ATgetFirst((ATermList) t);
      w_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_43);
  u_43 = t;
  t = v_43;
  t = q_51(t);
  x_43 = t;
  t = w_43;
  t = r_51(t);
  y_43 = t;
  t = (ATerm) ATinsert(CheckATermList(y_43), x_43);
  m_6 = t;
  t = SSLsetAnnotations(m_6, u_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_82 (ATerm), ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,j_44 = NULL,k_44 = NULL,g_8 = NULL;
  e_44 = t;
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_37;
        t = h_82(t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
      }
    t = e_44;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_44 = ATgetFirst((ATermList) t);
        h_44 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_44);
    f_44 = t;
    t = term_z_32;
    k_44 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_32, g_44);
    t = b_8(k_44, g_44, t);
    t = h_44;
    {
      ATerm u_44 (ATerm t)
      {
        ATerm k_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_37 = t;
            int o_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_44 = NULL;
                n_44 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_44;
                ;
                LocalPopChoice(o_37);
              }
            else
              {
                t = m_37;
                t = h_82(t);
                t = Cons_2_0(_id, u_44, t);
              }
            ;
            LocalPopChoice(l_37);
          }
        else
          {
            t = k_37;
            {
              ATerm q_44 = NULL,r_44 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_44 = ATgetFirst((ATermList) t);
                  r_44 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_44), (ATerm) ATmakeAppl(sym_Undefined_1, q_44));
            }
          }
        return(t);
      }
      t = u_44(t);
      j_44 = t;
      t = (ATerm) ATinsert(CheckATermList(j_44), (ATerm) ATmakeAppl(sym_Program_1, g_44));
      g_8 = t;
      t = SSLsetAnnotations(g_8, f_44);
    }
  }
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm g_45 = NULL;
  g_45 = t;
  if(match_string(t, "--help"))
    {
      t = g_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_45;
        }
    }
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  t = term_g_34;
  h_45 = t;
  t = term_c_25;
  i_45 = t;
  t = term_p_37;
  t = b_8(h_45, i_45, t);
  t = term_q_37;
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_s_37;
  return(t);
}
ATerm h_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  b_45 = t;
  t = term_e_31;
  d_45 = t;
  t = term_k_31;
  e_45 = t;
  t = (ATerm) ATempty;
  f_45 = t;
  t = SSL_table_put(d_45, e_45, f_45);
  t = b_45;
  {
    ATerm b_9 (ATerm t)
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_82(t);
          ;
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          {
            ATerm v_37 = t;
            int y_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(d_9, e_9, g_9, t);
                ;
                LocalPopChoice(y_37);
              }
            else
              {
                t = v_37;
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
          ATerm p_45 = NULL;
          p_45 = t;
          {
            ATerm b_38 = t;
            int c_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_18 = NULL;
                t = p_45;
                {
                  ATerm d_38 = t;
                  int e_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_g_34;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(e_38);
                    }
                  else
                    {
                      t = d_38;
                      t = fetch_1_0(h_9, t);
                    }
                  t = p_45;
                  t = default_system_usage_0_0(t);
                  t = term_y_29;
                  j_18 = t;
                  t = SSL_exit(j_18);
                }
                ;
                LocalPopChoice(c_38);
              }
            else
              {
                t = b_38;
                {
                  ATerm s_18 = NULL;
                  t = term_q_36;
                  t = get_config_0_0(t);
                  t = p_45;
                  t = default_system_about_0_0(t);
                  t = term_y_29;
                  s_18 = t;
                  t = SSL_exit(s_18);
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
                ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL;
                ATerm j_9 (ATerm t)
                {
                  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,k_8 = NULL;
                  v_45 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      u_45 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_45);
                  t_45 = t;
                  t = u_45;
                  if(((z_44 != NULL) && (z_44 != t)))
                    _fail(t);
                  else
                    z_44 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, u_45);
                  k_8 = t;
                  t = SSLsetAnnotations(k_8, t_45);
                  return(t);
                }
                t = fetch_1_0(j_9, t);
                t = term_p_19;
                r_45 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), term_h_38);
                s_45 = t;
                t = SSL_printnl(r_45, s_45);
                t = (ATerm) ATmakeAppl(sym__2, term_p_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_44)), term_h_38));
                t = default_system_usage_0_0(t);
                t = term_u_9;
                q_45 = t;
                t = SSL_exit(q_45);
                ;
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
              }
          }
        }
      a_45 = t;
      t = term_e_31;
      c_45 = t;
      t = SSL_table_destroy(c_45);
      t = a_45;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL;
  t = parse_options_1_0(l_80, t);
  a_46 = t;
  t = term_i_38;
  d_46 = t;
  t = SSL_table_create(d_46);
  t = term_i_38;
  b_46 = t;
  t = term_j_38;
  c_46 = t;
  t = SSL_table_put(b_46, c_46, a_46);
  t = a_46;
  t = n_80(t);
  {
    ATerm m_38 = t;
    int n_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_80, t);
        ;
        LocalPopChoice(n_38);
      }
    else
      {
        t = m_38;
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_80(t);
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
