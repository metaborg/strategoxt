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
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_z_38;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_y_36;
ATerm term_p_36;
ATerm term_n_36;
ATerm term_j_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_q_35;
ATerm term_y_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_a_34;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_b_31;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_l_28;
ATerm term_h_28;
ATerm term_b_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_n_27;
ATerm term_a_27;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_t_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_l_19;
ATerm term_e_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_r_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_n_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_t_15;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_w_14;
ATerm term_p_14;
ATerm term_j_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_z_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_f_11;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_z_7;
ATerm term_g_5;
void init_constant_terms (void)
{
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_11, term_o_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_11, term_s_11, term_t_11);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_11, term_d_12, term_e_12);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_12, term_i_12, term_j_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_12, term_n_12, term_o_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_y_12, term_z_12);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_13, term_f_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_13, term_s_13, term_x_13);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_14, term_j_14, term_p_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_14, term_a_15, term_c_15);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_15, term_t_15, term_y_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_e_16, term_f_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_u_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_16, term_y_16, term_z_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_17, term_i_17, term_k_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_p_17, term_q_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_17, term_u_17, term_v_17);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_e_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_18, term_r_18, term_y_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_19, term_l_19, term_p_19);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_19, term_t_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_e_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_20, term_k_20, term_q_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_20, term_u_20, term_v_20);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_21, term_h_21, term_i_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_31);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__3, term_m_31, term_f_36, term_g_23);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
}
ATerm read_from_0_0 (ATerm);
ATerm c_0 (ATerm f_72 (ATerm), ATerm o_1, ATerm u_1, ATerm);
ATerm i_2 (ATerm);
ATerm e_0 (ATerm x_1, ATerm);
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm k_76 (ATerm), ATerm);
ATerm n_0 (ATerm o_3, ATerm);
ATerm o_0 (ATerm t_3, ATerm);
ATerm fork_0_0 (ATerm);
ATerm p_0 (ATerm u_70 (ATerm), ATerm k_4, ATerm);
ATerm q_0 (ATerm g_90 (ATerm), ATerm s_4, ATerm);
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm k_6 (ATerm m_5, ATerm);
ATerm conc_0_0 (ATerm);
ATerm s_0 (ATerm r_86 (ATerm), ATerm l_6, ATerm o_6, ATerm);
ATerm m_7 (ATerm c_7, ATerm);
ATerm n_7 (ATerm e_7, ATerm f_7, ATerm g_7, ATerm);
ATerm q_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm r_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm v_0 (ATerm f_9, ATerm);
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm);
ATerm w_0 (ATerm q_9, ATerm);
ATerm x_0 (ATerm y_9, ATerm z_9, ATerm);
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm);
ATerm y_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm n_10, ATerm o_10, ATerm);
ATerm z_0 (ATerm c_80 (ATerm), ATerm s_10, ATerm u_10, ATerm);
ATerm w_2 (ATerm);
ATerm f_1 (ATerm y_10, ATerm z_10, ATerm a_11, ATerm);
ATerm g_1 (ATerm c_88 (ATerm), ATerm w_11, ATerm v_11, ATerm);
ATerm u_12 (ATerm m_12, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_1 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_13, ATerm w_12, ATerm x_12, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm b_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm j_1 (ATerm o_14, ATerm);
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm k_1 (ATerm f_18, ATerm j_18, ATerm);
ATerm l_1 (ATerm o_86 (ATerm), ATerm w_18, ATerm);
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm);
ATerm m_1 (ATerm n_86 (ATerm), ATerm s_19, ATerm);
ATerm y_4 (ATerm);
ATerm b_5 (ATerm);
ATerm d_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm);
ATerm f_5 (ATerm);
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm);
ATerm p_1 (ATerm z_20, ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_1 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm k_22, ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm i_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm r_1 (ATerm a_23, ATerm b_23, ATerm d_23, ATerm);
ATerm s_1 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm v_23, ATerm);
ATerm j_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm r_6 (ATerm);
ATerm b_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_7 (ATerm);
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm w_1 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t_26, ATerm);
ATerm x_7 (ATerm);
ATerm a_8 (ATerm);
ATerm c_8 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm f_2 (ATerm y_27, ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm g_2 (ATerm d_72 (ATerm), ATerm i_28, ATerm);
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm h_2 (ATerm i_30, ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm);
ATerm m_2 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm j_31, ATerm f_31, ATerm g_31, ATerm);
ATerm l_8 (ATerm);
ATerm n_2 (ATerm s_93 (ATerm), ATerm n_31, ATerm);
ATerm o_8 (ATerm);
ATerm p_8 (ATerm);
ATerm r_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_2 (ATerm r_93 (ATerm), ATerm e_32, ATerm);
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm);
ATerm z_8 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm o_9 (ATerm);
ATerm v_9 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm i_10 (ATerm);
ATerm l_10 (ATerm);
ATerm astratego2text_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_g_5;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm f_3 = NULL,i_3 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          e_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_1;
      f_3 = t;
      t = (ATerm) ATinsert(ATempty, term_z_7);
      i_3 = t;
      t = SSL_access(f_3, i_3);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm c_0 (ATerm f_72 (ATerm), ATerm o_1, ATerm u_1, ATerm t)
{
  ATerm v_1 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_1, term_q_10);
  t = open_stream_0_0(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_1, u_1);
  t = f_72(t);
  t = fclose_0_0(t);
  t = u_1;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm v_3 = NULL,c_4 = NULL,d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_10 = ATgetArgument(t, 0);
      if(match_cons(r_10, sym_Stream_1))
        {
          v_3 = ATgetArgument(r_10, 0);
        }
      else
        _fail(t);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(v_3, c_4);
  d_4 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_4);
  return(t);
}
ATerm e_0 (ATerm x_1, ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,q_3 = NULL,r_3 = NULL;
  t = xtc_new_file_0_0(t);
  y_1 = t;
  q_3 = t;
  t = x_1;
  r_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, x_1);
  t = c_0(i_2, q_3, r_3, t);
  t = y_1;
  z_1 = t;
  t = SSL_close_file(z_1);
  t = (ATerm) ATmakeAppl(sym_FILE_1, y_1);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm p_90 (ATerm), ATerm q_90 (ATerm), ATerm t)
{
  ATerm h_4 = NULL;
  h_4 = t;
  t = e_0(h_4, t);
  t = xtc_transform_file_2_0(p_90, q_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm e_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      g_3 = ATgetArgument(t, 0);
      {
        ATerm p_4 = NULL,q_4 = NULL,t_4 = NULL;
        t = g_3;
        q_4 = t;
        t = SSL_int_to_string(q_4);
        p_4 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_11), p_4), term_t_10);
        t_4 = t;
        t = SSL_concat_strings(t_4);
      }
    }
  else
    {
      ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          g_3 = ATgetArgument(t, 0);
          h_3 = ATgetArgument(t, 1);
          j_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_3;
      p_5 = t;
      t = SSL_int_to_string(p_5);
      o_5 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_3), term_j_11), o_5), term_i_11), g_3);
      q_5 = t;
      t = SSL_concat_strings(q_5);
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm k_76 (ATerm), ATerm t)
{
  ATerm n_3 = NULL;
  ATerm j_2 (ATerm t)
  {
    t = k_76(t);
    if(((n_3 != NULL) && (n_3 != t)))
      _fail(t);
    else
      n_3 = t;
    return(t);
  }
  t = fetch_1_0(j_2, t);
  t = not_null(n_3);
  return(t);
}
ATerm n_0 (ATerm o_3, ATerm t)
{
  ATerm k_11 = t;
  int l_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_21), term_x_20), term_s_20), term_i_20), term_b_20), term_q_19), term_a_19), term_h_18), term_x_17), term_s_17), term_l_17), term_g_17), term_b_17), term_v_16), term_r_16), term_j_16), term_z_15), term_k_15), term_w_14), term_b_14), term_p_13), term_k_13), term_c_13), term_p_12), term_k_12), term_f_12), term_u_11), term_q_11);
      {
        ATerm k_2 (ATerm t)
        {
          if(match_cons(t, sym_Signal_3))
            {
              ATerm k_21 = ATgetArgument(t, 0);
              if((o_3 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
              {
                ATerm l_21 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_elem_1_0(k_2, t);
      }
      ;
      LocalPopChoice(l_11);
    }
  else
    {
      t = k_11;
      t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, o_3);
    }
  return(t);
}
ATerm o_0 (ATerm t_3, ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_4 = NULL,z_5 = NULL,b_6 = NULL,d_6 = NULL,q_6 = NULL;
      if(match_cons(t, sym_WaitStatus_3))
        {
          ATerm o_21 = ATgetArgument(t, 0);
          e_4 = ATgetArgument(t, 1);
          {
            ATerm q_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_4;
      {
        ATerm r_21 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_21;
          }
        q_6 = t;
        t = n_0(q_6, t);
        t = signal_to_descr_0_0(t);
        z_5 = t;
        t = term_u_21;
        b_6 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, z_5), term_v_21);
        d_6 = t;
        t = SSL_printnl(b_6, d_6);
        t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, z_5), term_v_21));
      }
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
    }
  t = t_3;
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm p_0 (ATerm u_70 (ATerm), ATerm k_4, ATerm t)
{
  ATerm l_4 = NULL;
  t = fork_0_0(t);
  l_4 = t;
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = k_4;
        t = u_70(t);
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm r_4 = NULL,z_6 = NULL;
          t = l_4;
          r_4 = t;
          t = SSL_waitpid(r_4);
          z_6 = t;
          t = o_0(z_6, t);
          if(match_cons(t, sym_WaitStatus_3))
            {
              ATerm y_21 = ATgetArgument(t, 0);
              if(((ATgetType(y_21) != AT_INT) || (ATgetInt((ATermInt) y_21) != 0)))
                _fail(t);
              {
                ATerm z_21 = ATgetArgument(t, 1);
              }
              {
                ATerm a_22 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = k_4;
        }
      }
  }
  return(t);
}
ATerm q_0 (ATerm g_90 (ATerm), ATerm s_4, ATerm t)
{
  ATerm u_4 = NULL,a_7 = NULL;
  t = g_90(t);
  t = xtc_find_0_0(t);
  u_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_4, s_4);
  a_7 = t;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm o_7 = NULL,q_7 = NULL;
      t = u_4;
      o_7 = t;
      t = s_4;
      q_7 = t;
      t = SSL_execvp(o_7, q_7);
      return(t);
    }
    t = p_0(l_2, a_7, t);
    t = s_4;
  }
  return(t);
}
ATerm at_end_1_0 (ATerm o_76 (ATerm), ATerm t)
{
  ATerm h_5 (ATerm t)
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_7 = NULL,u_7 = NULL,w_7 = NULL;
        s_7 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_7 = ATgetFirst((ATermList) t);
            w_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_2(_id, h_5, s_7, u_7, w_7, t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_76(t);
      }
    return(t);
  }
  t = h_5(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = d_22;
      {
        ATerm z_4 = NULL,c_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_4 = ATgetFirst((ATermList) t);
            c_5 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_4;
        {
          ATerm o_2 (ATerm t)
          {
            t = c_5;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_2, t);
        }
      }
    }
  return(t);
}
ATerm k_6 (ATerm m_5, ATerm t)
{
  ATerm c_6 = NULL,e_6 = NULL;
  t = m_5;
  c_6 = t;
  t = SSL_explode_term(c_6);
  if(match_cons(t, sym__2))
    {
      ATerm g_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_6;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  h_6 = t;
  if(match_cons(t, sym__2))
    {
      f_6 = ATgetArgument(t, 0);
      g_6 = ATgetArgument(t, 1);
      {
        ATerm h_22 = t;
        int i_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = g_6;
              return(t);
            }
            t = f_6;
            t = at_end_1_0(p_2, t);
            ;
            LocalPopChoice(i_22);
          }
        else
          {
            t = h_22;
            t = k_6(h_6, t);
          }
      }
    }
  else
    {
      t = k_6(h_6, t);
    }
  return(t);
}
ATerm s_0 (ATerm r_86 (ATerm), ATerm l_6, ATerm o_6, ATerm t)
{
  ATerm p_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,q_8 = NULL,w_8 = NULL,x_8 = NULL;
  t = r_86(t);
  p_6 = t;
  q_8 = t;
  t = l_6;
  w_8 = t;
  t = o_6;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_6, l_6, o_6);
  t = r_1(q_8, w_8, x_8, t);
  {
    ATerm j_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,y_6 = NULL;
        t = p_6;
        x_6 = t;
        t = term_p_22;
        y_6 = t;
        t = SSL_table_get(x_6, y_6);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = j_22;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_6 = ATgetFirst((ATermList) t);
        t_6 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = p_6;
    u_6 = t;
    t = term_p_22;
    v_6 = t;
    t = (ATerm) ATinsert(CheckATermList(t_6), (ATerm) ATinsert(CheckATermList(s_6), l_6));
    w_6 = t;
    t = SSL_table_put(u_6, v_6, w_6);
    t = (ATerm) ATmakeAppl(sym__2, l_6, o_6);
  }
  return(t);
}
ATerm m_7 (ATerm c_7, ATerm t)
{
  ATerm y_8 = NULL;
  t = c_7;
  {
    ATerm r_22 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_22 = ATgetArgument(t, 0);
            ATerm u_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_22;
      }
    t = term_v_22;
    y_8 = t;
    t = g_2(q_2, y_8, t);
    t = (ATerm) ATmakeAppl(sym__2, c_7, term_q_10);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm n_7 (ATerm e_7, ATerm f_7, ATerm g_7, ATerm t)
{
  ATerm h_7 = NULL,i_7 = NULL;
  t = e_7;
  h_7 = t;
  t = f_7;
  i_7 = t;
  t = SSL_open_file(h_7, i_7);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_w_22;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
      {
        ATerm x_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_7(j_7, t);
            ;
            LocalPopChoice(z_22);
          }
        else
          {
            t = x_22;
            t = n_7(k_7, l_7, j_7, t);
          }
      }
    }
  else
    {
      t = m_7(j_7, t);
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
  ATerm p_7 = NULL,r_7 = NULL;
  t = term_g_23;
  t = new_0_0(t);
  p_7 = t;
  t = term_h_23;
  r_7 = t;
  t = SSL_strcat(p_7, r_7);
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL,r_9 = NULL,s_9 = NULL;
        y_7 = t;
        r_9 = t;
        t = (ATerm) ATinsert(ATempty, term_z_7);
        s_9 = t;
        t = SSL_access(r_9, s_9);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_8 = NULL,w_9 = NULL,c_10 = NULL;
  t = new_file_0_0(t);
  b_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_q_10);
  t = open_file_0_0(t);
  t = b_8;
  w_9 = t;
  t = term_g_23;
  c_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_8, term_g_23);
  t = s_0(r_2, w_9, c_10, t);
  t = b_8;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm w_10 = NULL,x_10 = NULL,e_11 = NULL,m_11 = NULL;
      t = s_8;
      t = xtc_new_file_0_0(t);
      w_10 = t;
      t = m_0(t);
      x_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_10, (ATerm) ATinsert(ATinsert(ATempty, w_10), term_o_23));
      t = conc_0_0(t);
      m_11 = t;
      t = q_0(l_0, m_11, t);
      t = w_10;
      e_11 = t;
      t = SSL_close_file(e_11);
      t = (ATerm) ATmakeAppl(sym_FILE_1, w_10);
    }
  else
    {
      ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,h_12 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          t_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_8;
      t = xtc_new_file_0_0(t);
      a_12 = t;
      t = m_0(t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_12), term_o_23), t_8), term_p_23));
      t = conc_0_0(t);
      h_12 = t;
      t = q_0(l_0, h_12, t);
      t = a_12;
      c_12 = t;
      t = SSL_close_file(c_12);
      t = (ATerm) ATmakeAppl(sym_FILE_1, a_12);
    }
  return(t);
}
ATerm v_0 (ATerm f_9, ATerm t)
{
  ATerm g_9 = NULL;
  g_9 = t;
  t = SSL_table_keys(g_9);
  {
    ATerm s_2 (ATerm t)
    {
      ATerm h_9 = NULL,i_9 = NULL,l_9 = NULL,m_9 = NULL;
      h_9 = t;
      t = f_9;
      l_9 = t;
      t = h_9;
      m_9 = t;
      t = SSL_table_get(l_9, m_9);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
      return(t);
    }
    t = map_1_0(s_2, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm z_87 (ATerm), ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL,o_13 = NULL;
      n_9 = t;
      t = term_s_23;
      o_13 = t;
      t = h_2(o_13, t);
      p_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_9, term_d_20);
      t = geq_0_0(t);
      t = n_9;
      t = z_87(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
    }
  return(t);
}
ATerm w_0 (ATerm q_9, ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL,x_9 = NULL;
  t = term_t_23;
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, q_9);
  x_9 = t;
  t = SSL_table_get(u_9, x_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_23 = ATgetFirst((ATermList) t);
      if(match_cons(u_23, sym__2))
        {
          ATerm a_24 = ATgetArgument(u_23, 0);
          t_9 = ATgetArgument(u_23, 1);
        }
      else
        _fail(t);
      {
        ATerm z_23 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_9;
  return(t);
}
ATerm x_0 (ATerm y_9, ATerm z_9, ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL,g_10 = NULL;
  t = term_t_23;
  b_10 = t;
  t = (ATerm) ATmakeAppl(sym_Tool_1, y_9);
  g_10 = t;
  t = SSL_table_get(b_10, g_10);
  {
    ATerm t_2 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if((z_9 != ATgetArgument(t, 0)))
            {
              _fail(ATgetArgument(t, 0));
            }
          if(((a_10 != NULL) && (a_10 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(t_2, t);
    t = not_null(a_10);
  }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm y_87 (ATerm), ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_10 = NULL,j_10 = NULL,q_13 = NULL;
      h_10 = t;
      t = term_s_23;
      q_13 = t;
      t = h_2(q_13, t);
      j_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_10, term_t_15);
      t = geq_0_0(t);
      t = h_10;
      t = y_87(t);
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm a_88 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL,m_10 = NULL,u_13 = NULL;
      k_10 = t;
      t = term_s_23;
      u_13 = t;
      t = h_2(u_13, t);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_10, term_i_12);
      t = geq_0_0(t);
      t = k_10;
      t = a_88(t);
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
    }
  return(t);
}
ATerm y_0 (ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm n_10, ATerm o_10, ATerm t)
{
  t = g_80(t);
  {
    ATerm u_2 (ATerm t)
    {
      ATerm p_10 = NULL;
      p_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_10, p_10);
      t = f_80(t);
      return(t);
    }
    t = fetch_1_0(u_2, t);
    t = o_10;
  }
  return(t);
}
ATerm z_0 (ATerm c_80 (ATerm), ATerm s_10, ATerm u_10, ATerm t)
{
  t = s_10;
  {
    ATerm v_10 (ATerm t)
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_10;
          ;
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          {
            ATerm l_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_13 = NULL,a_14 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    z_13 = ATgetFirst((ATermList) t);
                    a_14 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                {
                  ATerm v_2 (ATerm t)
                  {
                    t = u_10;
                    return(t);
                  }
                  t = y_0(c_80, v_2, z_13, a_14, t);
                  t = v_10(t);
                }
                ;
                LocalPopChoice(n_24);
              }
            else
              {
                t = l_24;
                {
                  ATerm q_14 = NULL,r_14 = NULL,u_14 = NULL;
                  q_14 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_14 = ATgetFirst((ATermList) t);
                      u_14 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = m_2(_id, v_10, q_14, r_14, u_14, t);
                }
              }
          }
        }
      return(t);
    }
    t = v_10(t);
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      if((x_15 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_1 (ATerm y_10, ATerm z_10, ATerm a_11, ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,g_11 = NULL,h_11 = NULL,n_15 = NULL,o_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
  {
    ATerm o_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_15 = NULL,f_15 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            ATerm w_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_10;
        e_15 = t;
        t = z_10;
        f_15 = t;
        t = SSL_table_get(e_15, f_15);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = o_24;
        t = (ATerm) ATempty;
      }
    b_11 = t;
    n_15 = t;
    t = a_11;
    o_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_11, a_11);
    t = z_0(w_2, n_15, o_15, t);
    c_11 = t;
    t = y_10;
    d_11 = t;
    t = z_10;
    g_11 = t;
    t = c_11;
    h_11 = t;
    t = SSL_table_put(d_11, g_11, h_11);
    t = (ATerm) ATmakeAppl(sym__3, y_10, z_10, a_11);
  }
  return(t);
}
ATerm g_1 (ATerm c_88 (ATerm), ATerm w_11, ATerm v_11, ATerm t)
{
  t = v_11;
  {
    ATerm y_2 (ATerm t)
    {
      ATerm x_11 = NULL,y_11 = NULL;
      if(match_cons(t, sym__2))
        {
          x_11 = ATgetArgument(t, 0);
          y_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, w_11, x_11, y_11);
      t = c_88(t);
      return(t);
    }
    t = map_1_0(y_2, t);
  }
  return(t);
}
ATerm u_12 (ATerm m_12, ATerm t)
{
  ATerm q_12 = NULL;
  t = m_12;
  q_12 = t;
  t = SSL_fclose(q_12);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  s_12 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_12 = ATgetArgument(t, 0);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 = NULL;
            t = r_12;
            i_16 = t;
            t = SSL_fclose(i_16);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = u_12(s_12, t);
          }
      }
    }
  else
    {
      t = u_12(s_12, t);
    }
  return(t);
}
ATerm h_1 (ATerm b_59 (ATerm), ATerm c_59 (ATerm), ATerm d_13, ATerm w_12, ATerm x_12, ATerm t)
{
  ATerm v_12 = NULL,a_13 = NULL,b_13 = NULL,r_0 = NULL,t_0 = NULL;
  t = SSLgetAnnotations(d_13);
  v_12 = t;
  t = w_12;
  t = b_59(t);
  a_13 = t;
  t = x_12;
  t = c_59(t);
  b_13 = t;
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
  r_0 = t;
  t = SSLsetAnnotations(r_0, v_12);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_13 = NULL;
  t = SSL_stdin_stream();
  g_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_13 = NULL;
  t = SSL_stdout_stream();
  h_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_13 = NULL;
  t = SSL_stderr_stream();
  i_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_13);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm w_17 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      w_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_17;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_is_string(n_18);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      ATerm e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_17 = NULL,c_17 = NULL,j_17 = NULL;
        a_17 = t;
        c_17 = t;
        t = SSL_explode_term(c_17);
        if(match_cons(t, sym__2))
          {
            ATerm h_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_25) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_25 = ATgetArgument(t, 1);
              if(((ATgetType(i_25) == AT_LIST) && !(ATisEmpty(i_25))))
                {
                  j_17 = ATgetFirst((ATermList) i_25);
                  {
                    ATerm j_25 = (ATerm) ATgetNext((ATermList) i_25);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = j_17;
        if(match_cons(t, sym_stderr_0))
          {
            t = j_17;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = j_17;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = j_17;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        {
          ATerm l_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_13 = NULL,v_13 = NULL,w_13 = NULL,m_17 = NULL,o_17 = NULL,r_17 = NULL;
              m_17 = t;
              if(match_cons(t, sym__2))
                {
                  o_17 = ATgetArgument(t, 0);
                  r_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_1(z_2, _id, m_17, o_17, r_17, t);
              if(match_cons(t, sym__2))
                {
                  t_13 = ATgetArgument(t, 0);
                  v_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(t_13, v_13);
              w_13 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, w_13);
              ;
              LocalPopChoice(n_25);
            }
          else
            {
              t = l_25;
              {
                ATerm y_13 = NULL,c_14 = NULL,d_14 = NULL,z_17 = NULL,a_18 = NULL,g_18 = NULL;
                z_17 = t;
                if(match_cons(t, sym__2))
                  {
                    a_18 = ATgetArgument(t, 0);
                    g_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_1(a_3, _id, z_17, a_18, g_18, t);
                if(match_cons(t, sym__2))
                  {
                    y_13 = ATgetArgument(t, 0);
                    c_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(y_13, c_14);
                d_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL;
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 = NULL;
      i_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_14, term_t_25);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm o_18 = NULL;
        o_18 = t;
        t = g_2(b_3, o_18, t);
        _fail(t);
      }
    }
  f_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_14);
  g_14 = t;
  t = f_14;
  t = fclose_0_0(t);
  t = g_14;
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_u_25;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_v_25;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 = NULL,l_14 = NULL;
      k_14 = t;
      t = (ATerm) ATinsert(ATempty, term_y_25);
      l_14 = t;
      t = SSL_access(k_14, l_14);
      LocalPopChoice(x_25);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = w_25;
      {
        ATerm z_25 = t;
        int d_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_18 = NULL;
            ATerm e_26 = t;
            if((PushChoice() == 0))
              {
                ATerm m_14 = NULL,n_14 = NULL;
                m_14 = t;
                t = (ATerm) ATinsert(ATempty, term_z_7);
                n_14 = t;
                t = SSL_access(m_14, n_14);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_26;
              }
            s_18 = t;
            t = g_2(c_3, s_18, t);
            ;
            LocalPopChoice(d_26);
          }
        else
          {
            t = z_25;
            {
              ATerm z_18 = NULL;
              z_18 = t;
              t = g_2(d_3, z_18, t);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm d_19 = NULL;
  d_19 = t;
  t = g_2(l_3, d_19, t);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_g_26;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm k_19 = NULL;
  k_19 = t;
  t = g_2(p_3, k_19, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_i_26;
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm j_15 = NULL,m_15 = NULL,p_15 = NULL;
  j_15 = t;
  t = term_u_21;
  m_15 = t;
  t = (ATerm) ATinsert(ATempty, term_u_26);
  p_15 = t;
  t = SSL_printnl(m_15, p_15);
  t = j_15;
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm v_19 = NULL,f_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__3))
    {
      v_19 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
      g_20 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_1(v_19, f_20, g_20, t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  q_15 = t;
  t = term_u_21;
  r_15 = t;
  t = (ATerm) ATinsert(ATempty, term_v_26);
  s_15 = t;
  t = SSL_printnl(r_15, s_15);
  t = q_15;
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
  u_15 = t;
  t = term_u_21;
  v_15 = t;
  t = (ATerm) ATinsert(ATempty, term_u_26);
  w_15 = t;
  t = SSL_printnl(v_15, w_15);
  t = u_15;
  return(t);
}
ATerm j_1 (ATerm o_14, ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL,v_14 = NULL,x_14 = NULL,z_14 = NULL,b_15 = NULL,d_15 = NULL,g_15 = NULL,m_19 = NULL,o_19 = NULL;
  t = if_verbose5_1_0(k_3, t);
  {
    ATerm x_26 = t;
    if((PushChoice() == 0))
      {
        ATerm h_15 = NULL,i_15 = NULL;
        t = term_t_23;
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
        i_15 = t;
        t = SSL_table_get(h_15, i_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_26;
      }
    s_14 = t;
    t = term_t_23;
    t_14 = t;
    t = term_a_27;
    v_14 = t;
    t = (ATerm) ATinsert(ATempty, o_14);
    x_14 = t;
    t = SSL_table_put(t_14, v_14, x_14);
    t = s_14;
    t = if_verbose4_1_0(m_3, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(s_3, t);
    z_14 = t;
    t = term_t_23;
    m_19 = t;
    t = z_14;
    o_19 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_23, z_14);
    t = g_1(u_3, m_19, o_19, t);
    t = if_verbose6_1_0(w_3, t);
    t = term_t_23;
    b_15 = t;
    t = (ATerm) ATmakeAppl(sym_Imported_1, o_14);
    d_15 = t;
    t = (ATerm) ATempty;
    g_15 = t;
    t = SSL_table_put(b_15, d_15, g_15);
    t = (ATerm) ATmakeAppl(sym__3, term_t_23, (ATerm)ATmakeAppl(sym_Imported_1, o_14), (ATerm) ATempty);
    t = if_verbose4_1_0(x_3, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm t_83 (ATerm), ATerm t)
{
  ATerm b_27 = t;
  int c_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(c_27);
    }
  else
    {
      t = b_27;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_20 = NULL,l_20 = NULL,r_20 = NULL;
            h_20 = t;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_20 = ATgetFirst((ATermList) t);
                r_20 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            {
              ATerm y_3 (ATerm t)
              {
                t = filter_1_0(t_83, t);
                return(t);
              }
              t = m_2(t_83, y_3, h_20, l_20, r_20, t);
            }
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm a_16 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_27 = ATgetFirst((ATermList) t);
                  a_16 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_16;
              t = filter_1_0(t_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm n_85 (ATerm), ATerm t)
{
  ATerm c_16 (ATerm t)
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_85(t);
        t = c_16(t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
      }
    return(t);
  }
  t = c_16(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm k_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_21 = NULL;
      t = term_n_27;
      e_21 = t;
      t = h_2(e_21, t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = k_27;
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_16 = NULL;
            t = term_s_27;
            d_16 = t;
            t = SSL_getenv(d_16);
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm f_21 = NULL;
  f_21 = t;
  t = g_2(a_4, f_21, t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  t = term_t_23;
  m_16 = t;
  t = term_v_27;
  n_16 = t;
  t = SSL_table_get(m_16, n_16);
  t = filter_1_0(f_4, t);
  {
    ATerm w_27 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_27;
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm s_21 = NULL;
  s_21 = t;
  t = j_1(s_21, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm t_21 = NULL;
  t_21 = t;
  t = g_2(i_4, t_21, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_16 = NULL;
  t = if_verbose5_1_0(z_3, t);
  g_16 = t;
  {
    ATerm c_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_16 = NULL,k_16 = NULL;
        t = term_t_23;
        h_16 = t;
        t = term_a_27;
        k_16 = t;
        t = SSL_table_get(h_16, k_16);
        ;
        LocalPopChoice(g_28);
      }
    else
      {
        t = c_28;
        {
          ATerm l_16 = NULL,p_21 = NULL;
          t = xtc_location_0_0(t);
          p_21 = t;
          t = j_1(p_21, t);
          l_16 = t;
          t = repeat_1_0(b_4, t);
          t = l_16;
        }
      }
    t = g_16;
    t = if_verbose5_1_0(g_4, t);
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  t = g_2(m_4, e_22, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = g_2(o_4, f_23, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_h_28;
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm z_24 = NULL,v_24 = NULL;
  t = term_t_23;
  v_24 = t;
  t = v_0(v_24, t);
  z_24 = t;
  t = g_2(w_4, z_24, t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = term_l_28;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm m_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(j_4, t);
      t = xtc_load_0_0(t);
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = NULL,y_22 = NULL;
            if(match_cons(t, sym__2))
              {
                t_22 = ATgetArgument(t, 0);
                y_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_0(t_22, y_22, t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm c_23 = NULL;
              c_23 = t;
              t = w_0(c_23, t);
            }
          }
        t = if_verbose5_1_0(n_4, t);
      }
      ;
      LocalPopChoice(r_28);
    }
  else
    {
      t = m_28;
      {
        ATerm w_16 = NULL,i_24 = NULL,m_24 = NULL;
        w_16 = t;
        t = term_u_21;
        i_24 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_28), w_16), term_v_28);
        m_24 = t;
        t = SSL_printnl(i_24, m_24);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_28), w_16), term_v_28);
        t = if_verbose5_1_0(v_4, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm y_17 = NULL,b_18 = NULL;
  y_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      b_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_28 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_25 = NULL,o_25 = NULL,p_25 = NULL;
        t = y_17;
        t = k_0(t);
        m_25 = t;
        {
          ATerm c_29 = t;
          int d_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_29);
            }
          else
            {
              t = c_29;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = b_18;
          o_25 = t;
          t = m_25;
          p_25 = t;
          t = SSL_copy(o_25, p_25);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
        }
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = z_28;
        {
          ATerm e_29 = t;
          int f_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_26 = NULL,o_26 = NULL,q_26 = NULL;
              t = y_17;
              t = k_0(t);
              n_26 = t;
              {
                ATerm g_29 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_29 = t;
                    int i_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(i_29);
                      }
                    else
                      {
                        t = h_29;
                        {
                          ATerm j_29 = t;
                          int l_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_29);
                            }
                          else
                            {
                              t = j_29;
                              {
                                ATerm w_26 = NULL;
                                w_26 = t;
                                if((b_18 != t))
                                  {
                                    _fail(t);
                                  }
                                t = w_26;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_29;
                  }
                t = b_18;
                o_26 = t;
                t = n_26;
                q_26 = t;
                t = SSL_copy(o_26, q_26);
                t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
              }
              ;
              LocalPopChoice(f_29);
            }
          else
            {
              t = e_29;
              t = y_17;
              t = k_0(t);
              if((b_18 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, b_18);
            }
        }
      }
  }
  return(t);
}
ATerm k_1 (ATerm f_18, ATerm j_18, ATerm t)
{
  ATerm k_18 = NULL;
  ATerm m_29 = t;
  int n_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_18 = NULL,m_18 = NULL;
      t = f_18;
      l_18 = t;
      t = j_18;
      m_18 = t;
      t = SSL_table_get(l_18, m_18);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm s_29 = ATgetFirst((ATermList) t);
          k_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      LocalPopChoice(n_29);
      {
        ATerm p_18 = NULL,q_18 = NULL,t_18 = NULL;
        t = f_18;
        p_18 = t;
        t = j_18;
        q_18 = t;
        t = k_18;
        t_18 = t;
        t = SSL_table_put(p_18, q_18, t_18);
        t = (ATerm) ATmakeAppl(sym__3, f_18, j_18, k_18);
      }
    }
  else
    {
      t = m_29;
      {
        ATerm u_18 = NULL,v_18 = NULL;
        t = f_18;
        u_18 = t;
        t = j_18;
        v_18 = t;
        t = SSL_table_remove(u_18, v_18);
        t = (ATerm) ATmakeAppl(sym__2, f_18, j_18);
      }
    }
  t = (ATerm) ATmakeAppl(sym__2, f_18, j_18);
  return(t);
}
ATerm l_1 (ATerm o_86 (ATerm), ATerm w_18, ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,c_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  t = o_86(t);
  x_18 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,j_19 = NULL;
        t = x_18;
        i_19 = t;
        t = term_p_22;
        j_19 = t;
        t = SSL_table_get(i_19, j_19);
        ;
        LocalPopChoice(u_29);
      }
    else
      {
        t = t_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_19 = ATgetFirst((ATermList) t);
        b_19 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = x_18;
    f_19 = t;
    t = term_p_22;
    g_19 = t;
    t = b_19;
    h_19 = t;
    t = SSL_table_put(f_19, g_19, h_19);
    t = c_19;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm n_19 = NULL,o_27 = NULL,p_27 = NULL;
        n_19 = t;
        t = x_18;
        o_27 = t;
        t = n_19;
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_18, n_19);
        t = k_1(o_27, p_27, t);
        return(t);
      }
      t = map_1_0(x_4, t);
      t = w_18;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm j_87 (ATerm), ATerm k_87 (ATerm), ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_87(t);
      t = k_87(t);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      t = k_87(t);
      _fail(t);
    }
  return(t);
}
ATerm m_1 (ATerm n_86 (ATerm), ATerm s_19, ATerm t)
{
  ATerm u_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  t = n_86(t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_19, term_p_22);
  {
    ATerm b_30 = t;
    int f_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL,a_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_30 = ATgetArgument(t, 0);
            ATerm h_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_19;
        x_27 = t;
        t = term_p_22;
        a_28 = t;
        t = SSL_table_get(x_27, a_28);
        ;
        LocalPopChoice(f_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATempty;
      }
    w_19 = t;
    t = u_19;
    x_19 = t;
    t = term_p_22;
    y_19 = t;
    t = (ATerm) ATinsert(CheckATermList(w_19), (ATerm) ATempty);
    z_19 = t;
    t = SSL_table_put(x_19, y_19, z_19);
    t = s_19;
  }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm k_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_20 = NULL,q_28 = NULL;
      w_20 = t;
      q_28 = t;
      t = SSL_remove(q_28);
      ;
      LocalPopChoice(u_30);
    }
  else
    {
      t = k_30;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_n_23;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  ATerm m_20 = NULL,k_28 = NULL;
  k_28 = t;
  t = m_1(y_4, k_28, t);
  {
    ATerm a_5 (ATerm t)
    {
      ATerm n_20 = NULL,s_28 = NULL;
      n_20 = t;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_20 = NULL,p_20 = NULL;
            t = term_n_23;
            o_20 = t;
            t = term_p_22;
            p_20 = t;
            t = SSL_table_get(o_20, p_20);
            ;
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((m_20 != NULL) && (m_20 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              m_20 = ATgetFirst((ATermList) t);
            {
              ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(m_20);
        t = map_1_0(b_5, t);
        t = n_20;
        s_28 = t;
        t = l_1(d_5, s_28, t);
      }
      return(t);
    }
    t = restore_always_2_0(s_89, a_5, t);
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_29 = NULL;
      t = term_o_23;
      a_29 = t;
      t = h_2(a_29, t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      t = term_b_31;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm t_89 (ATerm), ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL,y_28 = NULL;
        t = term_p_23;
        y_28 = t;
        t = h_2(y_28, t);
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, y_20);
        ;
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = term_g_5;
      }
    t = t_89(t);
    t = copy_to_1_0(f_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(e_5, t);
  return(t);
}
ATerm p_1 (ATerm z_20, ATerm t)
{
  ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  t = term_g_23;
  t = whoami_0_0(t);
  a_21 = t;
  t = term_u_21;
  b_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_31), a_21), term_k_31);
  c_21 = t;
  t = SSL_printnl(b_21, c_21);
  t = term_o_11;
  d_21 = t;
  t = SSL_exit(d_21);
  t = z_20;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  if(match_string(t, "-k"))
    {
      t = o_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_29;
    }
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,w_29 = NULL,c_30 = NULL,d_30 = NULL;
  p_29 = t;
  r_29 = t;
  t = SSL_string_to_int(r_29);
  q_29 = t;
  t = term_m_31;
  w_29 = t;
  t = term_o_31;
  c_30 = t;
  t = q_29;
  d_30 = t;
  t = SSL_table_put(w_29, c_30, d_30);
  t = p_29;
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_p_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = s_1(i_5, j_5, k_5, k_29, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  if(match_string(t, "-S"))
    {
      t = l_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_30;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  t = term_m_31;
  r_30 = t;
  t = term_s_23;
  s_30 = t;
  t = term_q_31;
  t_30 = t;
  t = SSL_table_put(r_30, s_30, t_30);
  t = term_r_31;
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,g_32 = NULL,h_32 = NULL;
  a_32 = t;
  c_32 = t;
  t = SSL_string_to_int(c_32);
  b_32 = t;
  t = term_m_31;
  d_32 = t;
  t = term_s_23;
  g_32 = t;
  t = b_32;
  h_32 = t;
  t = SSL_table_put(d_32, g_32, h_32);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_32);
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,d_33 = NULL;
  t = term_m_31;
  a_33 = t;
  t = term_u_31;
  b_33 = t;
  t = term_g_23;
  d_33 = t;
  t = SSL_table_put(a_33, b_33, d_33);
  t = term_v_31;
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_w_31;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30 = NULL;
      e_30 = t;
      t = q_1(l_5, n_5, r_5, e_30, t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_30 = NULL;
            v_30 = t;
            t = s_1(s_5, t_5, u_5, v_30, t);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = z_31;
            {
              ATerm n_32 = NULL;
              n_32 = t;
              t = q_1(v_5, w_5, x_5, n_32, t);
            }
          }
      }
    }
  return(t);
}
ATerm q_1 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm k_22, ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_22 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL;
      t = term_g_23;
      t = d_0(t);
      n_22 = t;
      t = term_p_32;
      o_33 = t;
      t = term_q_32;
      p_33 = t;
      t = n_22;
      s_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, n_22);
      t = r_1(o_33, p_33, s_33, t);
      _fail(t);
    }
  else
    {
      ATerm q_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_22 = ATgetFirst((ATermList) t);
          m_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_22;
      t = a_0(t);
      t = term_g_23;
      t = b_0(t);
      q_22 = t;
      t = (ATerm) ATinsert(CheckATermList(m_22), q_22);
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm e_34 = NULL;
  e_34 = t;
  if(match_string(t, "-o"))
    {
      t = e_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_34;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  f_34 = t;
  t = term_m_31;
  g_34 = t;
  t = term_o_23;
  h_34 = t;
  t = f_34;
  i_34 = t;
  t = SSL_table_put(g_34, h_34, i_34);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_34);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_r_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm u_33 = NULL;
  u_33 = t;
  t = s_1(y_5, a_6, i_6, u_33, t);
  return(t);
}
ATerm r_1 (ATerm a_23, ATerm b_23, ATerm d_23, ATerm t)
{
  ATerm e_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_23, b_23);
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_34 = NULL,m_34 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm u_32 = ATgetArgument(t, 0);
            ATerm v_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_23;
        l_34 = t;
        t = b_23;
        m_34 = t;
        t = SSL_table_get(l_34, m_34);
        ;
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = (ATerm) ATempty;
      }
    e_23 = t;
    t = a_23;
    i_23 = t;
    t = b_23;
    j_23 = t;
    t = (ATerm) ATinsert(CheckATermList(e_23), d_23);
    k_23 = t;
    t = SSL_table_put(i_23, j_23, k_23);
    t = (ATerm) ATmakeAppl(sym__3, a_23, b_23, d_23);
  }
  return(t);
}
ATerm s_1 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm v_23, ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,b_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_24 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
      t = term_g_23;
      t = j_0(t);
      c_24 = t;
      t = term_p_32;
      s_34 = t;
      t = term_q_32;
      t_34 = t;
      t = c_24;
      u_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_32, term_q_32, c_24);
      t = r_1(s_34, t_34, u_34, t);
      _fail(t);
    }
  else
    {
      ATerm h_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_23 = ATgetFirst((ATermList) t);
          x_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_23;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_23 = ATgetFirst((ATermList) t);
          b_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_23;
      t = h_0(t);
      t = y_23;
      t = i_0(t);
      h_24 = t;
      t = (ATerm) ATinsert(CheckATermList(b_24), h_24);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-i"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  a_35 = t;
  t = term_m_31;
  b_35 = t;
  t = term_p_23;
  c_35 = t;
  t = a_35;
  d_35 = t;
  t = SSL_table_put(b_35, c_35, d_35);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_35);
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  v_34 = t;
  t = s_1(j_6, m_6, n_6, v_34, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,s_24 = NULL,t_24 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_23;
  t = whoami_0_0(t);
  p_24 = t;
  t = term_u_21;
  q_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_32), p_24);
  s_24 = t;
  t = SSL_printnl(q_24, s_24);
  t = term_o_11;
  t_24 = t;
  t = SSL_exit(t_24);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm f_35 = NULL;
  t = term_y_32;
  f_35 = t;
  t = h_2(f_35, t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  ATerm z_32 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_82(t);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = z_32;
      {
        ATerm x_24 = NULL,y_24 = NULL,d_25 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_24 = ATgetFirst((ATermList) t);
            y_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_24;
        t = foldr_2_0(q_82, r_82, t);
        d_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_24, d_25);
        t = r_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      w_35 = ATgetArgument(t, 0);
      x_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(w_35, x_35);
        ;
        LocalPopChoice(h_33);
      }
    else
      {
        t = e_33;
        t = SSL_addr(w_35, x_35);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_25 = NULL,m_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = times_0_0(t);
  m_35 = t;
  s_35 = t;
  t = SSL_explode_term(s_35);
  if(match_cons(t, sym__2))
    {
      ATerm j_33 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_35;
  t = foldr_2_0(r_6, b_7, t);
  k_25 = t;
  t = SSL_TicksToSeconds(k_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym__2))
    {
      b_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_26;
        if((b_26 != t))
          {
            _fail(t);
          }
        t = a_26;
        ;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        {
          ATerm c_36 = NULL,d_36 = NULL;
          t = b_26;
          c_36 = t;
          t = c_26;
          d_36 = t;
          t = a_26;
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_gti(c_36, d_36);
                ;
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
                t = SSL_gtr(c_36, d_36);
              }
            t = (ATerm) ATmakeAppl(sym__2, b_26, c_26);
          }
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_87 (ATerm), ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_26 = NULL,h_26 = NULL,i_36 = NULL;
      f_26 = t;
      t = term_s_23;
      i_36 = t;
      t = h_2(i_36, t);
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_26, term_o_11);
      t = geq_0_0(t);
      t = f_26;
      t = v_87(t);
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  t = run_time_0_0(t);
  j_26 = t;
  t = term_g_23;
  t = whoami_0_0(t);
  k_26 = t;
  t = term_u_21;
  l_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_34), j_26), term_i_11), k_26);
  m_26 = t;
  t = SSL_printnl(l_26, m_26);
  t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_34), j_26), term_i_11), k_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_31;
  p_26 = t;
  t = SSL_exit(p_26);
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm d_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = d_34;
      {
        ATerm k_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_36 = NULL,m_36 = NULL,o_36 = NULL,v_36 = NULL,q_36 = NULL,r_36 = NULL,u_0 = NULL,a_1 = NULL;
            l_36 = t;
            if(match_cons(t, sym_Undefined_1))
              {
                m_36 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            v_36 = t;
            t = l_36;
            o_36 = t;
            t = SSLgetAnnotations(o_36);
            q_36 = t;
            t = m_36;
            r_36 = t;
            a_1 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_36);
            u_0 = t;
            t = SSLsetAnnotations(u_0, q_36);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = k_34;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_36 = NULL;
      t = term_q_34;
      k_36 = t;
      t = h_2(k_36, t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = fetch_1_0(t_7, t);
    }
  t = u_91(t);
  return(t);
}
ATerm w_1 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t_26, ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_26 = ATgetFirst((ATermList) t);
      s_26 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_26 = NULL,z_26 = NULL,x_36 = NULL;
        t = s_26;
        t = g_0(t);
        y_26 = t;
        t = r_26;
        t = f_0(t);
        z_26 = t;
        t = s_26;
        x_36 = t;
        {
          ATerm v_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_26), z_26);
            return(t);
          }
          t = w_1(f_0, v_7, x_36, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_g_23;
      t = g_0(t);
    }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,o_37 = NULL,v_37 = NULL,q_37 = NULL,r_37 = NULL,b_1 = NULL,c_1 = NULL;
  l_37 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  v_37 = t;
  t = l_37;
  o_37 = t;
  t = SSLgetAnnotations(o_37);
  q_37 = t;
  t = m_37;
  r_37 = t;
  c_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_37);
  b_1 = t;
  t = SSLsetAnnotations(b_1, q_37);
  return(t);
}
ATerm a_8 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm l_27 = NULL,d_38 = NULL;
  l_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_27), term_r_34);
  d_38 = t;
  t = f_2(d_38, t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,y_37 = NULL,z_37 = NULL;
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_37 = NULL;
      t = term_y_32;
      k_37 = t;
      t = h_2(k_37, t);
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = fetch_1_0(x_7, t);
    }
  t = term_y_34;
  y_37 = t;
  t = f_2(y_37, t);
  t = term_p_32;
  i_27 = t;
  t = term_q_32;
  j_27 = t;
  t = SSL_table_get(i_27, j_27);
  z_37 = t;
  t = w_1(_id, a_8, z_37, t);
  t = map_1_0(c_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm u_27 (ATerm t)
  {
    ATerm e_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
        n_38 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_38 = ATgetFirst((ATermList) t);
            p_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_2(i_76, _id, n_38, o_38, p_38, t);
        ;
        LocalPopChoice(g_35);
      }
    else
      {
        t = e_35;
        {
          ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
          s_38 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_38 = ATgetFirst((ATermList) t);
              u_38 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_2(_id, u_27, s_38, t_38, u_38, t);
        }
      }
    return(t);
  }
  t = u_27(t);
  return(t);
}
ATerm f_2 (ATerm y_27, ATerm t)
{
  ATerm z_27 = NULL,d_28 = NULL,e_28 = NULL;
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_28 = NULL;
      f_28 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_28;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_35 = ATgetFirst((ATermList) t);
              ATerm k_35 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_28;
        }
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = (ATerm) ATinsert(ATempty, y_27);
    }
  z_27 = t;
  t = term_b_31;
  d_28 = t;
  t = z_27;
  e_28 = t;
  t = SSL_printnl(d_28, e_28);
  t = y_27;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_39 = NULL,y_38 = NULL;
  t = term_y_32;
  y_38 = t;
  t = h_2(y_38, t);
  a_39 = t;
  t = f_2(a_39, t);
  return(t);
}
ATerm g_2 (ATerm d_72 (ATerm), ATerm i_28, ATerm t)
{
  ATerm j_28 = NULL,n_28 = NULL,o_28 = NULL;
  t = d_72(t);
  j_28 = t;
  t = term_u_21;
  n_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_28), j_28);
  o_28 = t;
  t = SSL_printnl(n_28, o_28);
  t = i_28;
  return(t);
}
ATerm map_1_0 (ATerm y_75 (ATerm), ATerm t)
{
  ATerm p_28 (ATerm t)
  {
    ATerm l_35 = t;
    int n_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_35);
      }
    else
      {
        t = l_35;
        {
          ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
          b_39 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_39 = ATgetFirst((ATermList) t);
              d_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_2(y_75, p_28, b_39, c_39, d_39, t);
        }
      }
    return(t);
  }
  t = p_28(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm o_35 = t;
  int p_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_35);
    }
  else
    {
      t = o_35;
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_q_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_28 = NULL,h_39 = NULL;
      x_28 = t;
      h_39 = t;
      t = SSL_is_string(h_39);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = r_35;
      {
        ATerm v_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_8, t);
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = v_35;
            {
              ATerm v_29 = NULL,x_29 = NULL,y_29 = NULL;
              v_29 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_29 = ATgetArgument(t, 0);
                  t = x_29;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_29 = ATgetArgument(t, 0);
                      t = x_29;
                      {
                        ATerm z_35 = t;
                        int a_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_39 = NULL;
                            t_39 = t;
                            t = h_2(t_39, t);
                            ;
                            LocalPopChoice(a_36);
                          }
                        else
                          {
                            t = z_35;
                            {
                              ATerm u_39 = NULL;
                              u_39 = t;
                              t = g_2(e_8, u_39, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_29 = ATgetArgument(t, 0);
                          y_29 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_29;
                      t = eval_config_0_0(t);
                      b_40 = t;
                      t = y_29;
                      t = eval_config_0_0(t);
                      c_40 = t;
                      t = b_40;
                      d_40 = t;
                      t = c_40;
                      e_40 = t;
                      t = SSL_strcat(d_40, e_40);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm h_2 (ATerm i_30, ATerm t)
{
  ATerm j_30 = NULL,m_30 = NULL;
  t = term_m_31;
  j_30 = t;
  t = i_30;
  m_30 = t;
  t = SSL_table_get(j_30, m_30);
  {
    ATerm b_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
        t = eval_config_0_0(t);
        n_30 = t;
        t = term_m_31;
        o_30 = t;
        t = i_30;
        p_30 = t;
        t = n_30;
        q_30 = t;
        t = SSL_table_put(o_30, p_30, q_30);
        t = n_30;
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = b_36;
      }
  }
  return(t);
}
ATerm f_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  t = term_m_31;
  m_40 = t;
  t = term_f_36;
  n_40 = t;
  t = term_g_23;
  o_40 = t;
  t = SSL_table_put(m_40, n_40, o_40);
  t = term_g_36;
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = term_h_36;
  return(t);
}
ATerm i_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL;
  t = term_m_31;
  t_40 = t;
  t = term_f_36;
  u_40 = t;
  t = term_g_23;
  v_40 = t;
  t = SSL_table_put(t_40, u_40, v_40);
  t = term_m_31;
  w_40 = t;
  t = term_j_36;
  x_40 = t;
  t = term_g_23;
  y_40 = t;
  t = SSL_table_put(w_40, x_40, y_40);
  t = term_n_36;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = NULL;
      i_40 = t;
      t = q_1(f_8, g_8, h_8, i_40, t);
      ;
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm p_40 = NULL;
        p_40 = t;
        t = q_1(i_8, j_8, k_8, p_40, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm t)
{
  ATerm j_31 = NULL,f_31 = NULL,g_31 = NULL;
  j_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_31 = ATgetFirst((ATermList) t);
      g_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_2(q_63, r_63, j_31, f_31, g_31, t);
  return(t);
}
ATerm m_2 (ATerm q_63 (ATerm), ATerm r_63 (ATerm), ATerm j_31, ATerm f_31, ATerm g_31, ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL,i_31 = NULL,i_1 = NULL,n_1 = NULL;
  t = SSLgetAnnotations(j_31);
  e_31 = t;
  t = f_31;
  t = q_63(t);
  h_31 = t;
  t = g_31;
  t = r_63(t);
  i_31 = t;
  n_1 = t;
  t = (ATerm) ATinsert(CheckATermList(i_31), h_31);
  i_1 = t;
  t = SSLsetAnnotations(i_1, e_31);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL;
  e_41 = t;
  t = term_m_31;
  f_41 = t;
  t = term_y_32;
  g_41 = t;
  t = e_41;
  h_41 = t;
  t = SSL_table_put(f_41, g_41, h_41);
  t = (ATerm) ATmakeAppl(sym_Program_1, e_41);
  return(t);
}
ATerm n_2 (ATerm s_93 (ATerm), ATerm n_31, ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  ATerm u_36 = t;
  int w_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_36;
      t = s_93(t);
      ;
      LocalPopChoice(w_36);
    }
  else
    {
      t = u_36;
    }
  t = n_31;
  z_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm m_8 (ATerm t)
    {
      ATerm z_36 = t;
      int a_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_37 = t;
          int c_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              ;
              LocalPopChoice(c_37);
            }
          else
            {
              t = b_37;
              t = s_93(t);
              t = Cons_2_0(_id, m_8, t);
            }
          ;
          LocalPopChoice(a_37);
        }
      else
        {
          t = z_36;
          {
            ATerm j_41 = NULL,k_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_41 = ATgetFirst((ATermList) t);
                k_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_41), (ATerm) ATmakeAppl(sym_Undefined_1, j_41));
          }
        }
      return(t);
    }
    t = m_2(l_8, m_8, z_40, a_41, b_41, t);
  }
  return(t);
}
ATerm o_8 (ATerm t)
{
  ATerm y_41 = NULL;
  y_41 = t;
  if(match_string(t, "--help"))
    {
      t = y_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_41;
        }
    }
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
  t = term_m_31;
  z_41 = t;
  t = term_q_34;
  a_42 = t;
  t = term_g_23;
  b_42 = t;
  t = SSL_table_put(z_41, a_42, b_42);
  t = term_d_37;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm r_93 (ATerm), ATerm e_32, ATerm t)
{
  ATerm f_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,o_41 = NULL;
  t = term_p_32;
  f_32 = t;
  t = term_q_32;
  i_32 = t;
  t = (ATerm) ATempty;
  j_32 = t;
  t = SSL_table_put(f_32, i_32, j_32);
  t = e_32;
  o_41 = t;
  {
    ATerm n_8 (ATerm t)
    {
      ATerm f_37 = t;
      int g_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_93(t);
          ;
          LocalPopChoice(g_37);
        }
      else
        {
          t = f_37;
          {
            ATerm h_37 = t;
            int i_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_41 = NULL;
                u_41 = t;
                t = q_1(o_8, p_8, r_8, u_41, t);
                ;
                LocalPopChoice(i_37);
              }
            else
              {
                t = h_37;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = n_2(n_8, o_41, t);
    {
      ATerm j_37 = t;
      int n_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_33 = NULL;
          f_33 = t;
          {
            ATerm p_37 = t;
            int s_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_42 = NULL;
                t = f_33;
                {
                  ATerm t_37 = t;
                  int u_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_42 = NULL;
                      t = term_q_34;
                      l_42 = t;
                      t = h_2(l_42, t);
                      ;
                      LocalPopChoice(u_37);
                    }
                  else
                    {
                      t = t_37;
                      t = fetch_1_0(u_8, t);
                    }
                  t = f_33;
                  t = default_system_usage_0_0(t);
                  t = term_q_31;
                  i_42 = t;
                  t = SSL_exit(i_42);
                }
                ;
                LocalPopChoice(s_37);
              }
            else
              {
                t = p_37;
                {
                  ATerm o_42 = NULL,r_42 = NULL;
                  t = term_f_36;
                  r_42 = t;
                  t = h_2(r_42, t);
                  t = f_33;
                  t = default_system_about_0_0(t);
                  t = term_q_31;
                  o_42 = t;
                  t = SSL_exit(o_42);
                }
              }
          }
          ;
          LocalPopChoice(n_37);
        }
      else
        {
          t = j_37;
          {
            ATerm w_37 = t;
            int x_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_33 = NULL,i_33 = NULL,k_33 = NULL;
                ATerm v_8 (ATerm t)
                {
                  ATerm s_42 = NULL,t_42 = NULL,v_42 = NULL,c_43 = NULL,x_42 = NULL,y_42 = NULL,t_1 = NULL,a_2 = NULL;
                  s_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  c_43 = t;
                  t = s_42;
                  v_42 = t;
                  t = SSLgetAnnotations(v_42);
                  x_42 = t;
                  t = t_42;
                  if(((k_32 != NULL) && (k_32 != t)))
                    _fail(t);
                  else
                    k_32 = t;
                  y_42 = t;
                  a_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_42);
                  t_1 = t;
                  t = SSLsetAnnotations(t_1, x_42);
                  return(t);
                }
                t = fetch_1_0(v_8, t);
                t = term_u_21;
                g_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_32)), term_a_38);
                i_33 = t;
                t = SSL_printnl(g_33, i_33);
                t = (ATerm) ATmakeAppl(sym__2, term_u_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_32)), term_a_38));
                t = default_system_usage_0_0(t);
                t = term_o_11;
                k_33 = t;
                t = SSL_exit(k_33);
                ;
                LocalPopChoice(x_37);
              }
            else
              {
                t = w_37;
              }
          }
        }
      l_32 = t;
      t = term_p_32;
      m_32 = t;
      t = SSL_table_destroy(m_32);
      t = l_32;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,q_33 = NULL,r_33 = NULL,t_33 = NULL,v_33 = NULL,e_43 = NULL;
  e_43 = t;
  t = x_2(w_91, e_43, t);
  n_33 = t;
  t = term_b_38;
  q_33 = t;
  t = SSL_table_create(q_33);
  t = term_b_38;
  r_33 = t;
  t = term_c_38;
  t_33 = t;
  t = n_33;
  v_33 = t;
  t = SSL_table_put(r_33, t_33, v_33);
  t = n_33;
  t = y_91(t);
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_91, t);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm g_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_91(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(h_38);
            }
          else
            {
              t = g_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm z_8 (ATerm t)
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
              int q_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_43 = NULL;
                  g_43 = t;
                  t = q_1(c_9, d_9, e_9, g_43, t);
                  ;
                  LocalPopChoice(q_38);
                }
              else
                {
                  t = m_38;
                  {
                    ATerm r_38 = t;
                    int v_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(v_38);
                      }
                    else
                      {
                        t = r_38;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm o_43 = NULL;
  o_43 = t;
  t = p_1(o_43, t);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = xtc_io_1_0(j_9, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  t = term_m_31;
  k_43 = t;
  t = term_w_38;
  l_43 = t;
  t = term_g_23;
  m_43 = t;
  t = SSL_table_put(k_43, l_43, m_43);
  t = term_x_38;
  return(t);
}
ATerm e_9 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43 = NULL,q_43 = NULL,s_43 = NULL,z_43 = NULL,u_43 = NULL,v_43 = NULL,b_2 = NULL,c_2 = NULL;
          p_43 = t;
          if(match_cons(t, sym_FILE_1))
            {
              q_43 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          z_43 = t;
          t = p_43;
          s_43 = t;
          t = SSLgetAnnotations(s_43);
          u_43 = t;
          t = q_43;
          v_43 = t;
          c_2 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, v_43);
          b_2 = t;
          t = SSLsetAnnotations(b_2, u_43);
          ;
          LocalPopChoice(i_39);
        }
      else
        {
          t = g_39;
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
        }
      LocalPopChoice(f_39);
      t = xtc_transform_file_2_0(k_9, o_9, t);
    }
  else
    {
      t = e_39;
      t = xtc_transform_term_2_0(v_9, d_10, t);
    }
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_44 = NULL,c_44 = NULL,e_44 = NULL,l_44 = NULL,g_44 = NULL,h_44 = NULL,d_2 = NULL,e_2 = NULL;
            b_44 = t;
            if(match_cons(t, sym_FILE_1))
              {
                c_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            l_44 = t;
            t = b_44;
            e_44 = t;
            t = SSLgetAnnotations(e_44);
            g_44 = t;
            t = c_44;
            h_44 = t;
            e_2 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, h_44);
            d_2 = t;
            t = SSLsetAnnotations(d_2, g_44);
            ;
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            if(!(match_cons(t, sym_stdin_0)))
              _fail(t);
          }
        LocalPopChoice(k_39);
        t = xtc_transform_file_2_0(e_10, f_10, t);
      }
    else
      {
        t = j_39;
        t = xtc_transform_term_2_0(i_10, l_10, t);
      }
  }
  return(t);
}
ATerm k_9 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm b_34 = NULL;
  t = term_o_39;
  t = xtc_find_0_0(t);
  b_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_34), term_p_39);
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_n_39;
  return(t);
}
ATerm d_10 (ATerm t)
{
  ATerm c_34 = NULL;
  t = term_o_39;
  t = xtc_find_0_0(t);
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_34), term_p_39);
  return(t);
}
ATerm e_10 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_10 (ATerm t)
{
  t = term_q_39;
  return(t);
}
ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm astratego2text_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_8, a_9, _id, b_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = astratego2text_0_0(t);
  return(t);
}
