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
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_r_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_t_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_u_32;
ATerm term_n_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_t_31;
ATerm term_r_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_u_29;
ATerm term_n_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_v_28;
ATerm term_g_28;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_a_26;
ATerm term_y_25;
ATerm term_t_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_h_23;
ATerm term_z_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_h_22;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_s_19;
ATerm term_z_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
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
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_w_14;
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
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_l_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_s_9;
void init_constant_terms (void)
{
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_10, term_z_9, term_s_10);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_10, term_y_10, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_11, term_c_11, term_d_11);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_11, term_h_11, term_k_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_11, term_y_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_12, term_n_12, term_o_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_12, term_v_12, term_w_12);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_v_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_13, term_z_13, term_a_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_h_14, term_i_14);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_14, term_n_14, term_o_14);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_14, term_r_14, term_s_14);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_14, term_w_14, term_z_14);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_15, term_h_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_h_16, term_i_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_m_16, term_n_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_16, term_q_16, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_16, term_u_16, term_v_16);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_16, term_a_17, term_b_17);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_17, term_g_17, term_h_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_17, term_m_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_17, term_q_17, term_s_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_17, term_y_17, term_z_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_18, term_c_18, term_d_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeInt(-1);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_v_24);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_q_23);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym__2, term_l_20, term_s_19);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_29);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_x_29, term_e_20);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_c_31, term_e_20);
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_j_31, term_e_20);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--annotations    print annotations on abstract syntax", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym__2, term_k_30, term_l_30);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym__2, term_i_33, term_e_20);
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_l_33, term_e_20);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym__2, term_u_32, term_e_20);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_i_35, term_e_20);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-ensugar", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("annos-to-term", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm a_6 (ATerm i_43, ATerm j_43, ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm b_6 (ATerm r_27, ATerm s_27, ATerm);
ATerm c_6 (ATerm d_72 (ATerm), ATerm w_182, ATerm z_27, ATerm);
ATerm j_1 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm);
ATerm d_6 (ATerm n_24, ATerm o_24, ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm);
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_6 (ATerm k_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm f_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm);
ATerm d_8 (ATerm l_7, ATerm);
ATerm e_8 (ATerm p_7, ATerm q_7, ATerm s_7, ATerm);
ATerm p_1 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm h_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm);
ATerm i_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm);
ATerm w_1 (ATerm);
ATerm j_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm);
ATerm k_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm);
ATerm n_6 (ATerm l_48, ATerm m_48, ATerm);
ATerm l_11 (ATerm f_11, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_6 (ATerm x_27, ATerm);
ATerm m_6 (ATerm t_48, ATerm u_48, ATerm);
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm y_16 (ATerm p_15, ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm o_6 (ATerm y_41, ATerm z_41, ATerm);
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm p_6 (ATerm t_24, ATerm u_24, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm q_6 (ATerm m_45, ATerm n_45, ATerm);
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm r_3 (ATerm);
ATerm t_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm x_6 (ATerm h_47, ATerm i_47, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm v_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm pp_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_6 (ATerm c_43, ATerm d_43, ATerm);
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_6 (ATerm y_46, ATerm z_46, ATerm);
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm);
ATerm k_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm w_7 (ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm k_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm o_9 (ATerm);
ATerm r_9 (ATerm);
ATerm pp_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm a_6 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm f_5 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(i_43, j_43);
      ;
      LocalPopChoice(m_8);
    }
  else
    {
      t = f_5;
      t = SSL_subtr(i_43, j_43);
    }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,n_0 = NULL,o_0 = NULL;
  t = term_s_9;
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        t = term_z_9;
      }
    b_0 = t;
    t = term_z_9;
    n_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_z_9);
    t = a_6(b_0, n_0, t);
    o_0 = t;
    t = SSL_int_to_string(o_0);
    f_0 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_s_9);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_0 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_a_10;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm v_0 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_0 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_b_10);
      v_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_0, (ATerm) ATinsert(ATempty, term_b_10));
      t = n_6(t_0, v_0, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm r_27, ATerm s_27, ATerm t)
{
  ATerm w_0 = NULL;
  t = SSL_write_term_to_stream_baf(r_27, s_27);
  w_0 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_0);
  return(t);
}
ATerm c_6 (ATerm d_72 (ATerm), ATerm w_182, ATerm z_27, ATerm t)
{
  ATerm a_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_182, term_e_10);
  t = open_stream_0_0(t);
  a_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_1, z_27);
  t = d_72(t);
  t = fclose_0_0(t);
  t = z_27;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_10 = ATgetArgument(t, 0);
      if(match_cons(g_10, sym_Stream_1))
        {
          d_1 = ATgetArgument(g_10, 0);
        }
      else
        _fail(t);
      e_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(d_1, e_1, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  b_1 = t;
  t = xtc_new_file_0_0(t);
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_1, b_1);
  t = c_6(j_1, c_1, b_1, t);
  t = SSL_close_file(c_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, c_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm n_90 (ATerm), ATerm o_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(n_90, o_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm d_6 (ATerm n_24, ATerm o_24, ATerm t)
{
  t = SSL_execvp(n_24, o_24);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,f_3 = NULL;
  a_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      b_3 = ATgetArgument(t, 0);
      {
        ATerm x_0 = NULL,y_0 = NULL;
        t = SSL_int_to_string(b_3);
        x_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_10), x_0), term_h_10);
        y_0 = t;
        t = SSL_concat_strings(y_0);
      }
    }
  else
    {
      ATerm r_1 = NULL,s_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          b_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
          f_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(c_3);
      r_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_3), term_l_10), r_1), term_j_10), b_3);
      s_1 = t;
      t = SSL_concat_strings(s_1);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm l_3 = NULL;
  ATerm k_1 (ATerm t)
  {
    t = i_76(t);
    if(((l_3 != NULL) && (l_3 != t)))
      _fail(t);
    else
      l_3 = t;
    return(t);
  }
  t = fetch_1_0(k_1, t);
  t = not_null(l_3);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  {
    ATerm m_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_18), term_a_18), term_t_17), term_o_17), term_k_17), term_c_17), term_x_16), term_s_16), term_o_16), term_k_16), term_d_16), term_x_15), term_o_15), term_j_15), term_a_15), term_t_14), term_p_14), term_l_14), term_b_14), term_x_13), term_k_13), term_q_12), term_k_12), term_a_12), term_t_11), term_e_11), term_a_11), term_t_10);
        {
          ATerm l_1 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm h_18 = ATgetArgument(t, 0);
                if((n_3 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm i_18 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(l_1, t);
        }
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = m_10;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, n_3);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  {
    ATerm k_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_4 = NULL,a_2 = NULL,b_2 = NULL,g_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_18 = ATgetArgument(t, 0);
            c_4 = ATgetArgument(t, 1);
            {
              ATerm q_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = c_4;
        {
          ATerm r_18 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_18;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          a_2 = t;
          t = term_s_18;
          b_2 = t;
          t = (ATerm) ATinsert(ATinsert(ATempty, a_2), term_t_18);
          g_2 = t;
          t = SSL_printnl(b_2, g_2);
          t = (ATerm) ATmakeAppl(sym__2, term_s_18, (ATerm) ATinsert(ATinsert(ATempty, a_2), term_t_18));
        }
        ;
        LocalPopChoice(o_18);
      }
    else
      {
        t = k_18;
      }
    t = s_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_70 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL;
  k_4 = t;
  t = fork_0_0(t);
  l_4 = t;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_4;
        t = s_70(t);
        ;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        t = SSL_waitpid(l_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_18 = ATgetArgument(t, 0);
            if(((ATgetType(w_18) != AT_INT) || (ATgetInt((ATermInt) w_18) != 0)))
              _fail(t);
            {
              ATerm x_18 = ATgetArgument(t, 1);
            }
            {
              ATerm y_18 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_4;
      }
  }
  return(t);
}
ATerm xtc_command_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm n_4 = NULL,o_4 = NULL;
  n_4 = t;
  t = e_90(t);
  t = xtc_find_0_0(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_4, n_4);
  {
    ATerm m_1 (ATerm t)
    {
      ATerm t_4 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, o_4, n_4);
      t = d_6(o_4, n_4, t);
      t = term_z_18;
      t_4 = t;
      t = SSL_exit(t_4);
      return(t);
    }
    t = fork_and_wait_1_0(m_1, t);
    t = n_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm m_76 (ATerm), ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    ATerm a_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_5, t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = a_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_76(t);
      }
    return(t);
  }
  t = g_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm x_4 = NULL,y_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_4 = ATgetFirst((ATermList) t);
            y_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_4;
        {
          ATerm n_1 (ATerm t)
          {
            t = y_4;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(n_1, t);
        }
      }
    }
  return(t);
}
ATerm w_6 (ATerm k_5, ATerm t)
{
  ATerm o_5 = NULL;
  t = SSL_explode_term(k_5);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      o_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_5;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_5 = NULL,e_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym__2))
    {
      p_5 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      {
        ATerm i_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = e_6;
              return(t);
            }
            t = p_5;
            t = at_end_1_0(o_1, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = i_19;
            t = w_6(g_6, t);
          }
      }
    }
  else
    {
      t = w_6(g_6, t);
    }
  return(t);
}
ATerm f_6 (ATerm p_86 (ATerm), ATerm q_44, ATerm o_44, ATerm t)
{
  ATerm y_6 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,f_7 = NULL,g_7 = NULL;
  y_6 = t;
  t = p_86(t);
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_7, q_44, o_44);
  t = v_6(b_7, q_44, o_44, t);
  {
    ATerm q_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL;
        t = term_s_19;
        h_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_7, term_s_19);
        t = u_6(b_7, h_7, t);
        ;
        LocalPopChoice(r_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_7 = ATgetFirst((ATermList) t);
        d_7 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_19;
    f_7 = t;
    t = (ATerm) ATinsert(CheckATermList(d_7), (ATerm) ATinsert(CheckATermList(c_7), q_44));
    g_7 = t;
    t = SSL_table_put(b_7, f_7, g_7);
    t = y_6;
  }
  return(t);
}
ATerm d_8 (ATerm l_7, ATerm t)
{
  t = l_7;
  {
    ATerm t_19 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_19 = ATgetArgument(t, 0);
            ATerm x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_19;
      }
    t = term_y_19;
    t = debug_1_0(p_1, t);
    t = (ATerm) ATmakeAppl(sym__2, l_7, term_e_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm e_8 (ATerm p_7, ATerm q_7, ATerm s_7, ATerm t)
{
  t = SSL_open_file(p_7, q_7);
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm y_7 = NULL,z_7 = NULL,c_8 = NULL;
  y_7 = t;
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_8(y_7, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = a_20;
            t = e_8(z_7, c_8, y_7, t);
          }
      }
    }
  else
    {
      t = d_8(y_7, t);
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
  ATerm h_8 = NULL,i_8 = NULL;
  t = term_e_20;
  t = new_0_0(t);
  h_8 = t;
  t = term_f_20;
  i_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_8, term_f_20);
  t = o_6(h_8, i_8, t);
  {
    ATerm g_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_8 = NULL,l_8 = NULL;
        j_8 = t;
        t = (ATerm) ATinsert(ATempty, term_b_10);
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATinsert(ATempty, term_b_10));
        t = n_6(j_8, l_8, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = g_20;
      }
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL;
  t = new_file_0_0(t);
  n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, term_e_10);
  t = open_file_0_0(t);
  t = term_e_20;
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_8, term_e_20);
  t = f_6(q_1, n_8, o_8, t);
  t = n_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm l_2 = NULL,m_2 = NULL;
      t = a_9;
      t = xtc_new_file_0_0(t);
      l_2 = t;
      t = m_0(t);
      m_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_2, (ATerm) ATinsert(ATinsert(ATempty, l_2), term_m_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(l_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, l_2);
    }
  else
    {
      ATerm r_2 = NULL,s_2 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          b_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_9;
      t = xtc_new_file_0_0(t);
      r_2 = t;
      t = m_0(t);
      s_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_2, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_2), term_m_20), b_9), term_n_20));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = SSL_close_file(r_2);
      t = (ATerm) ATmakeAppl(sym_FILE_1, r_2);
    }
  return(t);
}
ATerm FILE_1_0 (ATerm n_68 (ATerm), ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,p_0 = NULL,q_0 = NULL;
  h_9 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_9);
  e_9 = t;
  t = f_9;
  t = n_68(t);
  g_9 = t;
  q_0 = t;
  t = (ATerm) ATmakeAppl(sym_FILE_1, g_9);
  p_0 = t;
  t = SSLsetAnnotations(p_0, e_9);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm k_9 = NULL;
  k_9 = t;
  t = SSL_table_keys(k_9);
  {
    ATerm t_1 (ATerm t)
    {
      ATerm l_9 = NULL,m_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, l_9);
      t = u_6(k_9, l_9, t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, m_9);
      return(t);
    }
    t = map_1_0(t_1, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL;
      n_9 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, term_m_17);
      t = geq_0_0(t);
      t = n_9;
      t = x_87(t);
      ;
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm q_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_9 = NULL,t_9 = NULL;
      q_9 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      t_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_9, term_n_14);
      t = geq_0_0(t);
      t = q_9;
      t = w_87(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = q_20;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_9 = NULL,x_9 = NULL;
      u_9 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      x_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_9, term_h_11);
      t = geq_0_0(t);
      t = u_9;
      t = y_87(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
    }
  return(t);
}
ATerm h_6 (ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm u_34, ATerm t_34, ATerm t)
{
  t = e_80(t);
  {
    ATerm u_1 (ATerm t)
    {
      ATerm y_9 = NULL;
      y_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_34, y_9);
      t = d_80(t);
      return(t);
    }
    t = fetch_1_0(u_1, t);
    t = t_34;
  }
  return(t);
}
ATerm i_6 (ATerm a_80 (ATerm), ATerm q_34, ATerm p_34, ATerm t)
{
  t = q_34;
  {
    ATerm k_10 (ATerm t)
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          ;
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_10 = NULL,d_10 = NULL,f_10 = NULL;
                c_10 = t;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    d_10 = ATgetFirst((ATermList) t);
                    f_10 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_10;
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = p_34;
                    return(t);
                  }
                  t = h_6(a_80, v_1, d_10, f_10, t);
                  t = k_10(t);
                }
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = Cons_2_0(_id, k_10, t);
              }
          }
        }
      return(t);
    }
    t = k_10(t);
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm u_10 = NULL;
  if(match_cons(t, sym__2))
    {
      u_10 = ATgetArgument(t, 0);
      if((u_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm j_6 (ATerm e_46, ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  n_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_21 = ATgetArgument(t, 0);
            ATerm h_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_46, f_46);
        t = u_6(e_46, f_46, t);
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATempty;
      }
    o_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_10, g_46);
    t = i_6(w_1, o_10, g_46, t);
    p_10 = t;
    t = SSL_table_put(e_46, f_46, p_10);
    t = n_10;
  }
  return(t);
}
ATerm k_6 (ATerm a_88 (ATerm), ATerm o_46, ATerm n_46, ATerm t)
{
  t = n_46;
  {
    ATerm x_1 (ATerm t)
    {
      ATerm w_10 = NULL,x_10 = NULL;
      if(match_cons(t, sym__2))
        {
          w_10 = ATgetArgument(t, 0);
          x_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, o_46, w_10, x_10);
      t = a_88(t);
      return(t);
    }
    t = map_1_0(x_1, t);
  }
  return(t);
}
ATerm n_6 (ATerm l_48, ATerm m_48, ATerm t)
{
  t = SSL_access(l_48, m_48);
  return(t);
}
ATerm l_11 (ATerm f_11, ATerm t)
{
  t = SSL_fclose(f_11);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_11 = ATgetArgument(t, 0);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_11);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            t = l_11(j_11, t);
          }
      }
    }
  else
    {
      t = l_11(j_11, t);
    }
  return(t);
}
ATerm l_6 (ATerm x_27, ATerm t)
{
  t = SSL_read_term_from_stream(x_27);
  return(t);
}
ATerm m_6 (ATerm t_48, ATerm u_48, ATerm t)
{
  ATerm m_11 = NULL;
  t = SSL_fopen(t_48, u_48);
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_11);
  return(t);
}
ATerm _2_0 (ATerm z_58 (ATerm), ATerm a_59 (ATerm), ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,r_0 = NULL,s_0 = NULL;
  s_11 = t;
  if(match_cons(t, sym__2))
    {
      o_11 = ATgetArgument(t, 0);
      p_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  n_11 = t;
  t = o_11;
  t = z_58(t);
  q_11 = t;
  t = p_11;
  t = a_59(t);
  r_11 = t;
  s_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
  r_0 = t;
  t = SSLsetAnnotations(r_0, n_11);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_11 = NULL;
  t = SSL_stdin_stream();
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_11);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_11 = NULL;
  t = SSL_stdout_stream();
  w_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_11);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_11 = NULL;
  t = SSL_stderr_stream();
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_11);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm h_12 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_12;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  t = SSL_is_string(l_12);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      ATerm p_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_12 = NULL,o_3 = NULL;
        e_12 = t;
        t = SSL_explode_term(e_12);
        if(match_cons(t, sym__2))
          {
            ATerm u_21 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_21) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_21 = ATgetArgument(t, 1);
              if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
                {
                  o_3 = ATgetFirst((ATermList) x_21);
                  {
                    ATerm y_21 = (ATerm) ATgetNext((ATermList) x_21);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_3;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_3;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_3;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_3;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = q_21;
        {
          ATerm b_22 = t;
          int f_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_12 = NULL,g_12 = NULL;
              t = _2_0(y_1, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_12 = ATgetArgument(t, 0);
                  g_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_6(f_12, g_12, t);
              ;
              LocalPopChoice(f_22);
            }
          else
            {
              t = b_22;
              {
                ATerm i_12 = NULL,j_12 = NULL;
                t = _2_0(z_1, _id, t);
                if(match_cons(t, sym__2))
                  {
                    i_12 = ATgetArgument(t, 0);
                    j_12 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_6(i_12, j_12, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_12 = NULL,r_12 = NULL,s_12 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL;
      t_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_12, term_p_22);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  p_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(s_12, t);
  r_12 = t;
  t = p_12;
  t = fclose_0_0(t);
  t = r_12;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_q_22;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_r_22;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_12 = NULL,y_12 = NULL;
      x_12 = t;
      t = (ATerm) ATinsert(ATempty, term_z_22);
      y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_12, (ATerm) ATinsert(ATempty, term_z_22));
      t = n_6(x_12, y_12, t);
      LocalPopChoice(y_22);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = x_22;
      {
        ATerm a_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_23 = t;
            if((PushChoice() == 0))
              {
                ATerm z_12 = NULL,a_13 = NULL;
                z_12 = t;
                t = (ATerm) ATinsert(ATempty, term_b_10);
                a_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_12, (ATerm) ATinsert(ATempty, term_b_10));
                t = n_6(z_12, a_13, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = d_23;
              }
            t = debug_1_0(d_2, t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = a_23;
            t = debug_1_0(e_2, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = debug_1_0(h_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = debug_1_0(j_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_l_23;
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  o_13 = t;
  t = term_s_18;
  p_13 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  q_13 = t;
  t = SSL_printnl(p_13, q_13);
  t = o_13;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  if(match_cons(t, sym__3))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      u_13 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_6(s_13, t_13, u_13, t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm c_14 = NULL,d_14 = NULL,f_14 = NULL;
  c_14 = t;
  t = term_s_18;
  d_14 = t;
  t = (ATerm) ATinsert(ATempty, term_n_23);
  f_14 = t;
  t = SSL_printnl(d_14, f_14);
  t = c_14;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL;
  g_14 = t;
  t = term_s_18;
  j_14 = t;
  t = (ATerm) ATinsert(ATempty, term_m_23);
  k_14 = t;
  t = SSL_printnl(j_14, k_14);
  t = g_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,l_13 = NULL;
  b_13 = t;
  t = if_verbose5_1_0(f_2, t);
  {
    ATerm o_23 = t;
    if((PushChoice() == 0))
      {
        ATerm m_13 = NULL,n_13 = NULL;
        t = term_p_23;
        m_13 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, b_13);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Imported_1, b_13));
        t = u_6(m_13, n_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_23;
      }
    c_13 = t;
    t = term_p_23;
    e_13 = t;
    t = term_q_23;
    f_13 = t;
    t = (ATerm) ATinsert(ATempty, b_13);
    g_13 = t;
    t = SSL_table_put(e_13, f_13, g_13);
    t = c_13;
    t = if_verbose4_1_0(i_2, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(k_2, t);
    d_13 = t;
    t = term_p_23;
    h_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_23, d_13);
    t = k_6(n_2, h_13, d_13, t);
    t = if_verbose6_1_0(o_2, t);
    t = term_p_23;
    i_13 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, b_13);
    j_13 = t;
    t = (ATerm) ATempty;
    l_13 = t;
    t = SSL_table_put(i_13, j_13, l_13);
    t = (ATerm) ATmakeAppl(sym__3, term_p_23, (ATerm)ATmakeAppl(sym_Imported_1, b_13), (ATerm) ATempty);
    t = if_verbose4_1_0(p_2, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm r_83 (ATerm), ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_2 (ATerm t)
            {
              t = filter_1_0(r_83, t);
              return(t);
            }
            t = Cons_2_0(r_83, q_2, t);
            ;
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            {
              ATerm v_14 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_23 = ATgetFirst((ATermList) t);
                  v_14 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_14;
              t = filter_1_0(r_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm l_85 (ATerm), ATerm t)
{
  ATerm x_14 (ATerm t)
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_85(t);
        t = x_14(t);
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
      }
    return(t);
  }
  t = x_14(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_24;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm i_24 = t;
        int k_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_14 = NULL;
            t = term_q_24;
            y_14 = t;
            t = SSL_getenv(y_14);
            ;
            LocalPopChoice(k_24);
          }
        else
          {
            t = i_24;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = debug_1_0(u_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_r_24;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm g_15 = NULL,l_15 = NULL;
  t = term_p_23;
  g_15 = t;
  t = term_v_24;
  l_15 = t;
  t = term_w_24;
  t = u_6(g_15, l_15, t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm h_25 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_25;
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
  t = term_i_25;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = if_verbose5_1_0(t_2, t);
  b_15 = t;
  {
    ATerm j_25 = t;
    int l_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_15 = NULL,d_15 = NULL;
        t = term_p_23;
        c_15 = t;
        t = term_q_23;
        d_15 = t;
        t = term_n_25;
        t = u_6(c_15, d_15, t);
        ;
        LocalPopChoice(l_25);
      }
    else
      {
        t = j_25;
        {
          ATerm f_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          f_15 = t;
          t = repeat_1_0(v_2, t);
          t = f_15;
        }
      }
    t = b_15;
    t = if_verbose5_1_0(w_2, t);
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = debug_1_0(z_2, t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm y_16 (ATerm p_15, ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL,v_15 = NULL;
  t = term_p_23;
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, p_15);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Tool_1, p_15));
  t = u_6(u_15, v_15, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_25 = ATgetFirst((ATermList) t);
      if(match_cons(p_25, sym__2))
        {
          ATerm s_25 = ATgetArgument(p_25, 0);
          t_15 = ATgetArgument(p_25, 1);
        }
      else
        _fail(t);
      {
        ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_15;
  return(t);
}
ATerm e_3 (ATerm t)
{
  t = debug_1_0(g_3, t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_o_25;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_p_23;
  t = table_getlist_0_0(t);
  t = debug_1_0(i_3, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_t_25;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(y_2, t);
      t = xtc_load_0_0(t);
      {
        ATerm w_15 = NULL,b_16 = NULL,c_16 = NULL;
        c_16 = t;
        if(match_cons(t, sym__2))
          {
            w_15 = ATgetArgument(t, 0);
            b_16 = ATgetArgument(t, 1);
            {
              ATerm w_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_16 = NULL,g_16 = NULL,j_16 = NULL;
                  t = term_p_23;
                  g_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Tool_1, w_15);
                  j_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_p_23, (ATerm) ATmakeAppl(sym_Tool_1, w_15));
                  t = u_6(g_16, j_16, t);
                  {
                    ATerm d_3 (ATerm t)
                    {
                      if(match_cons(t, sym__2))
                        {
                          if((b_16 != ATgetArgument(t, 0)))
                            {
                              _fail(ATgetArgument(t, 0));
                            }
                          if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            f_16 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = fetch_1_0(d_3, t);
                    t = not_null(f_16);
                  }
                  ;
                  LocalPopChoice(x_25);
                }
              else
                {
                  t = w_25;
                  t = y_16(c_16, t);
                }
            }
          }
        else
          {
            t = y_16(c_16, t);
          }
        t = if_verbose5_1_0(e_3, t);
      }
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm w_16 = NULL,x_3 = NULL,d_4 = NULL;
        w_16 = t;
        t = term_s_18;
        x_3 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_26), w_16), term_y_25);
        d_4 = t;
        t = SSL_printnl(x_3, d_4);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_26), w_16), term_y_25);
        t = if_verbose5_1_0(h_3, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm o_6 (ATerm y_41, ATerm z_41, ATerm t)
{
  t = SSL_strcat(y_41, z_41);
  return(t);
}
ATerm debug_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,i_17 = NULL,j_17 = NULL;
  d_17 = t;
  t = b_72(t);
  e_17 = t;
  t = term_s_18;
  i_17 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_17), e_17);
  j_17 = t;
  t = SSL_printnl(i_17, j_17);
  t = d_17;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_17 = NULL;
      r_17 = t;
      t = SSL_is_string(r_17);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(j_3, t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
              v_17 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_17 = ATgetArgument(t, 0);
                  t = w_17;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_17 = ATgetArgument(t, 0);
                      t = w_17;
                      {
                        ATerm i_26 = t;
                        int j_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_26);
                          }
                        else
                          {
                            t = i_26;
                            t = debug_1_0(k_3, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_18 = NULL,f_18 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_17 = ATgetArgument(t, 0);
                          x_17 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_17;
                      t = eval_config_0_0(t);
                      e_18 = t;
                      t = x_17;
                      t = eval_config_0_0(t);
                      f_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_18, f_18);
                      t = o_6(e_18, f_18, t);
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
  ATerm j_18 = NULL,l_18 = NULL;
  j_18 = t;
  t = term_k_26;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_26, j_18);
  t = u_6(l_18, j_18, t);
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,n_18 = NULL;
        t = eval_config_0_0(t);
        m_18 = t;
        t = term_k_26;
        n_18 = t;
        t = SSL_table_put(n_18, j_18, m_18);
        t = m_18;
        ;
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
      }
  }
  return(t);
}
ATerm p_6 (ATerm t_24, ATerm u_24, ATerm t)
{
  t = SSL_copy(t_24, u_24);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL;
  b_19 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_5 = NULL;
        t = b_19;
        t = k_0(t);
        c_5 = t;
        {
          ATerm p_26 = t;
          int q_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(q_26);
            }
          else
            {
              t = p_26;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_19, c_5);
          t = p_6(c_19, c_5, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
        }
        ;
        LocalPopChoice(o_26);
      }
    else
      {
        t = n_26;
        {
          ATerm r_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_5 = NULL;
              t = b_19;
              t = k_0(t);
              n_5 = t;
              {
                ATerm t_26 = t;
                if((PushChoice() == 0))
                  {
                    ATerm u_26 = t;
                    int v_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(v_26);
                      }
                    else
                      {
                        t = u_26;
                        {
                          ATerm y_26 = t;
                          int z_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(z_26);
                            }
                          else
                            {
                              t = y_26;
                              {
                                ATerm q_5 = NULL;
                                q_5 = t;
                                if((c_19 != t))
                                  {
                                    _fail(t);
                                  }
                                t = q_5;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_26;
                  }
                t = (ATerm) ATmakeAppl(sym__2, c_19, n_5);
                t = p_6(c_19, n_5, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
              }
              ;
              LocalPopChoice(s_26);
            }
          else
            {
              t = r_26;
              t = b_19;
              t = k_0(t);
              if((c_19 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_19);
            }
        }
      }
  }
  return(t);
}
ATerm q_6 (ATerm m_45, ATerm n_45, ATerm t)
{
  ATerm h_19 = NULL,j_19 = NULL;
  h_19 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = u_6(m_45, n_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_27 = ATgetFirst((ATermList) t);
            j_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_27);
        t = SSL_table_put(m_45, n_45, j_19);
        t = (ATerm) ATmakeAppl(sym__3, m_45, n_45, j_19);
      }
    else
      {
        t = b_27;
        t = SSL_table_remove(m_45, n_45);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
      }
    t = h_19;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm m_86 (ATerm), ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL,o_19 = NULL,p_19 = NULL;
  k_19 = t;
  t = m_86(t);
  l_19 = t;
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_19 = NULL;
        t = term_s_19;
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, term_s_19);
        t = u_6(l_19, u_19, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_19 = ATgetFirst((ATermList) t);
        m_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_s_19;
    p_19 = t;
    t = SSL_table_put(l_19, p_19, m_19);
    t = o_19;
    {
      ATerm m_3 (ATerm t)
      {
        ATerm w_19 = NULL;
        w_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_19, w_19);
        t = q_6(l_19, w_19, t);
        return(t);
      }
      t = map_1_0(m_3, t);
      t = k_19;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_87(t);
      t = i_87(t);
      ;
      LocalPopChoice(p_27);
    }
  else
    {
      t = i_27;
      t = i_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm b_20 = NULL,d_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
  b_20 = t;
  t = l_86(t);
  d_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_20, term_s_19);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_27 = ATgetArgument(t, 0);
            ATerm y_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_19;
        r_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_20, term_s_19);
        t = u_6(d_20, r_20, t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
    h_20 = t;
    t = term_s_19;
    i_20 = t;
    t = (ATerm) ATinsert(CheckATermList(h_20), (ATerm) ATempty);
    j_20 = t;
    t = SSL_table_put(d_20, i_20, j_20);
    t = b_20;
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL;
      f_21 = t;
      t = SSL_remove(f_21);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
    }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_l_20;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm t_20 = NULL;
  t = begin_scope_1_0(p_3, t);
  {
    ATerm q_3 (ATerm t)
    {
      ATerm u_20 = NULL;
      u_20 = t;
      {
        ATerm e_28 = t;
        int f_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_20 = NULL,a_21 = NULL;
            t = term_l_20;
            z_20 = t;
            t = term_s_19;
            a_21 = t;
            t = term_g_28;
            t = u_6(z_20, a_21, t);
            ;
            LocalPopChoice(f_28);
          }
        else
          {
            t = e_28;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_20 != NULL) && (t_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_20 = ATgetFirst((ATermList) t);
            {
              ATerm i_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_20);
        t = map_1_0(r_3, t);
        t = u_20;
        t = end_scope_1_0(t_3, t);
      }
      return(t);
    }
    t = restore_always_2_0(q_89, q_3, t);
  }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = term_v_28;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm r_89 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm w_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_21 = NULL;
        t = term_n_20;
        t = get_config_0_0(t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_21);
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = w_28;
        t = term_a_10;
      }
    t = r_89(t);
    t = copy_to_1_0(v_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(u_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,s_21 = NULL,t_21 = NULL;
  l_21 = t;
  t = term_e_20;
  t = whoami_0_0(t);
  m_21 = t;
  t = term_s_18;
  n_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_29), m_21), term_c_29);
  s_21 = t;
  t = SSL_printnl(n_21, s_21);
  t = term_z_9;
  t_21 = t;
  t = SSL_exit(t_21);
  t = l_21;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_string(t, "-k"))
    {
      t = v_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_21;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
  w_21 = t;
  t = SSL_string_to_int(w_21);
  z_21 = t;
  t = term_e_29;
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_29, z_21);
  t = x_6(a_22, z_21, t);
  t = w_21;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_j_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_3, y_3, z_3, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm c_22 = NULL;
  c_22 = t;
  if(match_string(t, "-S"))
    {
      t = c_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  t = term_s_9;
  d_22 = t;
  t = term_k_29;
  e_22 = t;
  t = term_l_29;
  t = x_6(d_22, e_22, t);
  t = term_m_29;
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_n_29;
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_22 = NULL,i_22 = NULL,j_22 = NULL;
  g_22 = t;
  t = SSL_string_to_int(g_22);
  i_22 = t;
  t = term_s_9;
  j_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_9, i_22);
  t = x_6(j_22, i_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_22);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_u_29;
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  t = term_x_29;
  m_22 = t;
  t = term_e_20;
  n_22 = t;
  t = term_y_29;
  t = x_6(m_22, n_22, t);
  t = term_z_29;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, b_4, e_4, t);
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = d_30;
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_4, g_4, h_4, t);
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = Option_3_0(i_4, j_4, m_4, t);
          }
      }
    }
  return(t);
}
ATerm x_6 (ATerm h_47, ATerm i_47, ATerm t)
{
  ATerm o_22 = NULL;
  t = term_k_26;
  o_22 = t;
  t = SSL_table_put(o_22, h_47, i_47);
  t = (ATerm) ATmakeAppl(sym__3, term_k_26, h_47, i_47);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
      t = term_e_20;
      t = d_0(t);
      u_22 = t;
      t = term_k_30;
      v_22 = t;
      t = term_l_30;
      w_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_l_30, u_22);
      t = v_6(v_22, w_22, u_22, t);
      _fail(t);
    }
  else
    {
      ATerm b_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_22 = ATgetFirst((ATermList) t);
          t_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_22;
      t = a_0(t);
      t = term_e_20;
      t = c_0(t);
      b_23 = t;
      t = (ATerm) ATinsert(CheckATermList(t_22), b_23);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm e_23 = NULL;
  e_23 = t;
  if(match_string(t, "-o"))
    {
      t = e_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_23;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  t = term_m_20;
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_20, f_23);
  t = x_6(g_23, f_23, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_23);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_m_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm v_6 (ATerm h_45, ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  {
    ATerm n_30 = t;
    int y_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_30 = ATgetArgument(t, 0);
            ATerm a_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
        t = u_6(h_45, i_45, t);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATempty;
      }
    j_23 = t;
    t = (ATerm) ATinsert(CheckATermList(j_23), g_45);
    k_23 = t;
    t = SSL_table_put(h_45, i_45, k_23);
    t = i_23;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
      t = term_e_20;
      t = j_0(t);
      c_24 = t;
      t = term_k_30;
      d_24 = t;
      t = term_l_30;
      e_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_30, term_l_30, c_24);
      t = v_6(d_24, e_24, c_24, t);
      _fail(t);
    }
  else
    {
      ATerm j_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_23 = ATgetFirst((ATermList) t);
          z_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_24 = ATgetFirst((ATermList) t);
          b_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_23;
      t = h_0(t);
      t = a_24;
      t = i_0(t);
      j_24 = t;
      t = (ATerm) ATinsert(CheckATermList(b_24), j_24);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  if(match_string(t, "-i"))
    {
      t = l_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_24;
    }
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm m_24 = NULL,p_24 = NULL;
  m_24 = t;
  t = term_n_20;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, m_24);
  t = x_6(p_24, m_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_24);
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, u_4, v_4, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm s_24 = NULL;
  s_24 = t;
  if(match_string(t, "-a"))
    {
      t = s_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--abstract", 0, ATtrue)))
        _fail(t);
      t = s_24;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  t = term_c_31;
  y_24 = t;
  t = term_e_20;
  z_24 = t;
  t = term_d_31;
  t = x_6(y_24, z_24, t);
  t = x_24;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_i_31;
  return(t);
}
ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--annotations", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  t = term_j_31;
  b_25 = t;
  t = term_e_20;
  c_25 = t;
  t = term_r_31;
  t = x_6(b_25, c_25, t);
  t = a_25;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm pp_stratego_options_0_0 (ATerm t)
{
  ATerm u_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, z_4, a_5, t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = u_31;
      t = Option_3_0(b_5, d_5, e_5, t);
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_20;
  t = whoami_0_0(t);
  d_25 = t;
  t = term_s_18;
  e_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_32), d_25);
  f_25 = t;
  t = SSL_printnl(e_25, f_25);
  t = term_z_9;
  g_25 = t;
  t = SSL_exit(g_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_32;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_6 (ATerm c_43, ATerm d_43, ATerm t)
{
  ATerm c_32 = t;
  int d_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_43, d_43);
      ;
      LocalPopChoice(d_32);
    }
  else
    {
      t = c_32;
      t = SSL_addr(c_43, d_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_82 (ATerm), ATerm p_82 (ATerm), ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_82(t);
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
      {
        ATerm k_25 = NULL,m_25 = NULL,r_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_25 = ATgetFirst((ATermList) t);
            m_25 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_25;
        t = foldr_2_0(o_82, p_82, t);
        r_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_25, r_25);
        t = p_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      z_6 = ATgetArgument(t, 0);
      a_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_6(z_6, a_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_25 = NULL,w_5 = NULL,x_5 = NULL;
  t = times_0_0(t);
  w_5 = t;
  t = SSL_explode_term(w_5);
  if(match_cons(t, sym__2))
    {
      ATerm g_32 = ATgetArgument(t, 0);
      x_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5;
  t = foldr_2_0(h_5, i_5, t);
  z_25 = t;
  t = SSL_TicksToSeconds(z_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL;
  w_26 = t;
  if(match_cons(t, sym__2))
    {
      x_26 = ATgetArgument(t, 0);
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_27;
        if((x_26 != t))
          {
            _fail(t);
          }
        t = w_26;
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATmakeAppl(sym__2, x_26, a_27);
        {
          ATerm j_32 = t;
          int k_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_26, a_27);
              ;
              LocalPopChoice(k_32);
            }
          else
            {
              t = j_32;
              t = SSL_gtr(x_26, a_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_26, a_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_27 = NULL,f_27 = NULL;
      d_27 = t;
      t = term_s_9;
      t = get_config_0_0(t);
      f_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_27, term_z_9);
      t = geq_0_0(t);
      t = d_27;
      t = t_87(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL;
  t = run_time_0_0(t);
  j_27 = t;
  t = term_e_20;
  t = whoami_0_0(t);
  k_27 = t;
  t = term_s_18;
  l_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_32), j_27), term_j_10), k_27);
  m_27 = t;
  t = SSL_printnl(l_27, m_27);
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_32), j_27), term_j_10), k_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_29;
  n_27 = t;
  t = SSL_exit(n_27);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_91 (ATerm), ATerm t)
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
      t = fetch_1_0(l_5, t);
    }
  t = s_91(t);
  return(t);
}
ATerm map_1_0 (ATerm w_75 (ATerm), ATerm t)
{
  ATerm o_27 (ATerm t)
  {
    ATerm v_32 = t;
    int w_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_32);
      }
    else
      {
        t = v_32;
        t = Cons_2_0(w_75, o_27, t);
      }
    return(t);
  }
  t = o_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_27 = NULL,t_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_27 = ATgetFirst((ATermList) t);
      t_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_28 = NULL,d_28 = NULL;
        t = t_27;
        t = g_0(t);
        a_28 = t;
        t = q_27;
        t = e_0(t);
        d_28 = t;
        t = t_27;
        {
          ATerm m_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_28), d_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, m_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_20;
      t = g_0(t);
    }
  return(t);
}
ATerm u_6 (ATerm y_46, ATerm z_46, ATerm t)
{
  t = SSL_table_get(y_46, z_46);
  return(t);
}
ATerm Program_1_0 (ATerm u_68 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,u_0 = NULL,z_0 = NULL;
  l_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  h_28 = t;
  t = j_28;
  t = u_68(t);
  k_28 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_28);
  u_0 = t;
  t = SSLsetAnnotations(u_0, h_28);
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_28), term_x_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      t = fetch_1_0(r_5, t);
    }
  t = term_a_33;
  t = echo_0_0(t);
  t = term_k_30;
  o_28 = t;
  t = term_l_30;
  p_28 = t;
  t = term_b_33;
  t = u_6(o_28, p_28, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm v_68 (ATerm), ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,f_1 = NULL,g_1 = NULL;
  u_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_28);
  r_28 = t;
  t = s_28;
  t = v_68(t);
  t_28 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_28);
  f_1 = t;
  t = SSLsetAnnotations(f_1, r_28);
  return(t);
}
ATerm fetch_1_0 (ATerm g_76 (ATerm), ATerm t)
{
  ATerm x_28 (ATerm t)
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(g_76, _id, t);
        ;
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
        t = Cons_2_0(_id, x_28, t);
      }
    return(t);
  }
  t = x_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_33 = ATgetFirst((ATermList) t);
                ATerm h_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_28;
          }
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = (ATerm) ATinsert(ATempty, z_28);
      }
    a_29 = t;
    t = term_v_28;
    b_29 = t;
    t = SSL_printnl(b_29, a_29);
    t = z_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_32;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_29 = NULL,g_29 = NULL;
  t = term_i_33;
  f_29 = t;
  t = term_e_20;
  g_29 = t;
  t = term_j_33;
  t = x_6(f_29, g_29, t);
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,o_29 = NULL,p_29 = NULL;
  t = term_i_33;
  h_29 = t;
  t = term_e_20;
  i_29 = t;
  t = term_j_33;
  t = x_6(h_29, i_29, t);
  t = term_l_33;
  o_29 = t;
  t = term_e_20;
  p_29 = t;
  t = term_m_33;
  t = x_6(o_29, p_29, t);
  t = term_n_33;
  return(t);
}
ATerm t_6 (ATerm t)
{
  t = term_o_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_5, v_5, y_5, t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = Option_3_0(z_5, s_6, t_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_63 (ATerm), ATerm p_63 (ATerm), ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,v_29 = NULL,w_29 = NULL,h_1 = NULL,i_1 = NULL;
  w_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_29 = ATgetFirst((ATermList) t);
      s_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_29);
  q_29 = t;
  t = r_29;
  t = o_63(t);
  t_29 = t;
  t = s_29;
  t = p_63(t);
  v_29 = t;
  i_1 = t;
  t = (ATerm) ATinsert(CheckATermList(v_29), t_29);
  h_1 = t;
  t = SSLsetAnnotations(h_1, q_29);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL;
  b_30 = t;
  t = term_b_32;
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_32, b_30);
  t = x_6(e_30, b_30, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, b_30);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm a_30 = NULL;
  a_30 = t;
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_33;
        t = q_93(t);
        ;
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
      }
    t = a_30;
    {
      ATerm i_7 (ATerm t)
      {
        ATerm u_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
                t = q_93(t);
                t = Cons_2_0(_id, i_7, t);
              }
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = u_33;
            {
              ATerm g_30 = NULL,h_30 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_30 = ATgetFirst((ATermList) t);
                  h_30 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(h_30), (ATerm) ATmakeAppl(sym_Undefined_1, g_30));
            }
          }
        return(t);
      }
      t = Cons_2_0(e_7, i_7, t);
    }
  }
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_30 = NULL;
  v_30 = t;
  if(match_string(t, "--help"))
    {
      t = v_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_30;
        }
    }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL;
  t = term_u_32;
  w_30 = t;
  t = term_e_20;
  x_30 = t;
  t = term_y_33;
  t = x_6(w_30, x_30, t);
  t = term_z_33;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_a_34;
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  o_30 = t;
  t = term_k_30;
  r_30 = t;
  t = term_l_30;
  s_30 = t;
  t = (ATerm) ATempty;
  t_30 = t;
  t = SSL_table_put(r_30, s_30, t_30);
  t = o_30;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm b_34 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_93(t);
          ;
          LocalPopChoice(c_34);
        }
      else
        {
          t = b_34;
          {
            ATerm d_34 = t;
            int e_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, m_7, n_7, t);
                ;
                LocalPopChoice(e_34);
              }
            else
              {
                t = d_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_7, t);
    {
      ATerm f_34 = t;
      int g_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_31 = NULL;
          e_31 = t;
          {
            ATerm h_34 = t;
            int i_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_8 = NULL;
                t = e_31;
                {
                  ATerm j_34 = t;
                  int k_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_u_32;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(k_34);
                    }
                  else
                    {
                      t = j_34;
                      t = fetch_1_0(o_7, t);
                    }
                  t = e_31;
                  t = default_system_usage_0_0(t);
                  t = term_k_29;
                  b_8 = t;
                  t = SSL_exit(b_8);
                }
                ;
                LocalPopChoice(i_34);
              }
            else
              {
                t = h_34;
                {
                  ATerm q_8 = NULL;
                  t = term_i_33;
                  t = get_config_0_0(t);
                  t = e_31;
                  t = default_system_about_0_0(t);
                  t = term_k_29;
                  q_8 = t;
                  t = SSL_exit(q_8);
                }
              }
          }
          ;
          LocalPopChoice(g_34);
        }
      else
        {
          t = f_34;
          {
            ATerm l_34 = t;
            int m_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL;
                ATerm r_7 (ATerm t)
                {
                  ATerm t_7 (ATerm t)
                  {
                    if(((p_30 != NULL) && (p_30 != t)))
                      _fail(t);
                    else
                      p_30 = t;
                    return(t);
                  }
                  t = Undefined_1_0(t_7, t);
                  return(t);
                }
                t = fetch_1_0(r_7, t);
                t = term_s_18;
                f_31 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_n_34);
                g_31 = t;
                t = SSL_printnl(f_31, g_31);
                t = (ATerm) ATmakeAppl(sym__2, term_s_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_30)), term_n_34));
                t = default_system_usage_0_0(t);
                t = term_z_9;
                h_31 = t;
                t = SSL_exit(h_31);
                ;
                LocalPopChoice(m_34);
              }
            else
              {
                t = l_34;
              }
          }
        }
      q_30 = t;
      t = term_k_30;
      u_30 = t;
      t = SSL_table_destroy(u_30);
      t = q_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  t = parse_options_1_0(u_91, t);
  k_31 = t;
  t = term_o_34;
  l_31 = t;
  t = SSL_table_create(l_31);
  t = term_o_34;
  m_31 = t;
  t = term_r_34;
  n_31 = t;
  t = SSL_table_put(m_31, n_31, k_31);
  t = k_31;
  t = w_91(t);
  {
    ATerm s_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_91, t);
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = s_34;
        {
          ATerm w_34 = t;
          int x_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(x_34);
            }
          else
            {
              t = w_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = pp_stratego_options_0_0(t);
      ;
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      {
        ATerm a_35 = t;
        int b_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(b_35);
          }
        else
          {
            t = a_35;
            {
              ATerm c_35 = t;
              int d_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(d_35);
                }
              else
                {
                  t = c_35;
                  {
                    ATerm e_35 = t;
                    int f_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, x_7, a_8, t);
                        ;
                        LocalPopChoice(f_35);
                      }
                    else
                      {
                        t = e_35;
                        {
                          ATerm g_35 = t;
                          int h_35 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(h_35);
                            }
                          else
                            {
                              t = g_35;
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
  return(t);
}
ATerm v_7 (ATerm t)
{
  t = xtc_io_1_0(f_8, t);
  return(t);
}
ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  t = term_i_35;
  o_31 = t;
  t = term_e_20;
  p_31 = t;
  t = term_j_35;
  t = x_6(o_31, p_31, t);
  t = term_k_35;
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = term_l_35;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_31 = NULL;
      q_31 = t;
      t = term_c_31;
      t = get_config_0_0(t);
      t = q_31;
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm o_35 = t;
        int p_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(p_35);
            t = xtc_transform_file_2_0(g_8, k_8, t);
          }
        else
          {
            t = o_35;
            t = xtc_transform_term_2_0(p_8, r_8, t);
          }
      }
    }
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = FILE_1_0(_id, t);
            ;
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(t_35);
        t = xtc_transform_file_2_0(s_8, t_8, t);
      }
    else
      {
        t = s_35;
        t = xtc_transform_term_2_0(u_8, v_8, t);
      }
    {
      ATerm w_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_31 = NULL;
          s_31 = t;
          t = term_j_31;
          t = get_config_0_0(t);
          t = s_31;
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
                ATerm a_36 = t;
                int b_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(b_36);
                  }
                else
                  {
                    t = a_36;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(z_35);
                t = xtc_transform_file_2_0(w_8, x_8, t);
              }
            else
              {
                t = y_35;
                t = xtc_transform_term_2_0(y_8, z_8, t);
              }
          }
        }
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_36 = t;
            int f_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(f_36);
              }
            else
              {
                t = e_36;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(d_36);
            t = xtc_transform_file_2_0(c_9, d_9, t);
          }
        else
          {
            t = c_36;
            t = xtc_transform_term_2_0(i_9, j_9, t);
          }
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
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(h_36);
              t = xtc_transform_file_2_0(o_9, pass_verbose_0_0, t);
            }
          else
            {
              t = g_36;
              t = xtc_transform_term_2_0(r_9, pass_verbose_0_0, t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm t_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_8 (ATerm t)
{
  t = term_l_36;
  return(t);
}
ATerm v_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_m_36;
  return(t);
}
ATerm z_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  t = pass_verbose_0_0(t);
  v_31 = t;
  t = term_o_36;
  t = xtc_find_0_0(t);
  w_31 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(v_31), w_31), term_p_36);
  return(t);
}
ATerm i_9 (ATerm t)
{
  t = term_n_36;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = pass_verbose_0_0(t);
  y_31 = t;
  t = term_o_36;
  t = xtc_find_0_0(t);
  z_31 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(y_31), z_31), term_p_36);
  return(t);
}
ATerm o_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_q_36;
  return(t);
}
ATerm pp_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_7, default_usage_0_0, _id, v_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = pp_stratego_0_0(t);
  return(t);
}
