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
Symbol sym_Meta_1;
Symbol sym_Syntax_1;
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
  sym_Meta_1 = ATmakeSymbol("Meta", 1, ATfalse);
  ATprotectSymbol(sym_Meta_1);
  sym_Syntax_1 = ATmakeSymbol("Syntax", 1, ATfalse);
  ATprotectSymbol(sym_Syntax_1);
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
ATerm term_n_39;
ATerm term_m_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_v_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_y_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_z_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_f_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_f_34;
ATerm term_r_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_x_31;
ATerm term_q_31;
ATerm term_b_30;
ATerm term_p_29;
ATerm term_i_29;
ATerm term_c_29;
ATerm term_a_29;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_a_28;
ATerm term_w_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_s_26;
ATerm term_m_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_q_25;
ATerm term_n_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_v_24;
ATerm term_k_24;
ATerm term_u_23;
ATerm term_c_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_n_22;
ATerm term_h_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_u_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_s_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_c_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_s_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_z_5;
void init_constant_terms (void)
{
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_11, term_h_11, term_z_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_d_12, term_g_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_12, term_l_12, term_p_12);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_x_12, term_z_12);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_13, term_h_13, term_j_13);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_13, term_m_13, term_n_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_13, term_t_13, term_w_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_14, term_b_14, term_c_14);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_14, term_t_14, term_a_15);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_15, term_g_15, term_i_15);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_15, term_o_15, term_p_15);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_15, term_t_15, term_u_15);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_15, term_y_15, term_z_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_c_16, term_d_16);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_16, term_i_16, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_16, term_p_16, term_q_16);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_16, term_t_16, term_z_16);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_17, term_d_17, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_17, term_l_17, term_m_17);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_17, term_s_17, term_w_17);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_f_18, term_g_18, term_k_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_18, term_q_18, term_x_18);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_b_19, term_c_19);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_19, term_i_19, term_j_19);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_19, term_m_19, term_o_19);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_19, term_x_19, term_z_19);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_d_20, term_f_20);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_20, term_r_20, term_s_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_34);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym__3, term_b_30, term_r_37, term_h_22);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm d_66 (ATerm), ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm s_64 (ATerm), ATerm);
ATerm assert_1_0 (ATerm o_80 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm m_62 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm o_82 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm n_81 (ATerm), ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm find_in_path_0_0 (ATerm);
ATerm find_in_includes_1_0 (ATerm n_63 (ATerm), ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm m_81 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm j_70 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm basename_1_0 (ATerm q_78 (ATerm), ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm p_81 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm q_81 (ATerm), ATerm);
ATerm union_1_0 (ATerm a_74 (ATerm), ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm z_81 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_77 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm k_79 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm p_83 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm q_83 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_70 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_70 (ATerm), ATerm);
ATerm _2_0 (ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,p_0 = NULL;
  t = term_z_5;
  {
    ATerm p_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm b_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 = NULL;
              t = eval_config_0_0(t);
              v_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), v_0);
              t = v_0;
              ;
              LocalPopChoice(g_11);
            }
          else
            {
              t = b_11;
            }
        }
        ;
        LocalPopChoice(y_10);
      }
    else
      {
        t = p_10;
        t = term_h_11;
      }
    b_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_0, term_h_11);
    {
      ATerm i_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = i_11;
          t = SSL_subtr(b_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      f_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, f_0), term_z_5);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm d_66 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      r_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_0, term_n_11);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, s_0);
  t = d_66(t);
  t = fclose_0_0(t);
  t = s_0;
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL;
  x_0 = t;
  t = xtc_new_file_0_0(t);
  y_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_0, x_0);
  {
    ATerm o_0 (ATerm t)
    {
      ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm o_11 = ATgetArgument(t, 0);
          if(match_cons(o_11, sym_Stream_1))
            {
              z_0 = ATgetArgument(o_11, 0);
            }
          else
            _fail(t);
          b_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSL_write_term_to_stream_baf(z_0, b_1);
      c_1 = t;
      t = (ATerm) ATmakeAppl(sym_Stream_1, c_1);
      return(t);
    }
    t = WriteToFile_1_0(o_0, t);
    t = SSL_close_file(y_0);
    t = (ATerm) ATmakeAppl(sym_FILE_1, y_0);
  }
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(m_84, n_84, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm i_2 = NULL,l_2 = NULL,n_2 = NULL,o_2 = NULL;
  i_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      l_2 = ATgetArgument(t, 0);
      {
        ATerm e_1 = NULL;
        t = SSL_int_to_string(l_2);
        e_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_11), e_1), term_p_11);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm r_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          l_2 = ATgetArgument(t, 0);
          n_2 = ATgetArgument(t, 1);
          o_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(n_2);
      r_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, o_2), term_v_11), r_1), term_u_11), l_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm y_2 = NULL;
  y_2 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), term_h_20), term_a_20), term_v_19), term_k_19), term_f_19), term_y_18), term_l_18), term_z_17), term_p_17), term_j_17), term_b_17), term_r_16), term_k_16), term_e_16), term_a_16), term_w_15), term_q_15), term_k_15), term_c_15), term_d_14), term_y_13), term_p_13), term_k_13), term_a_13), term_q_12), term_j_12), term_a_12);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm v_20 = ATgetArgument(t, 0);
                if((y_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm w_20 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, y_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm g_3 = NULL;
  g_3 = t;
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_3 = NULL,v_1 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            w_3 = ATgetArgument(t, 1);
            {
              ATerm c_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_3;
        {
          ATerm d_21 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_21;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          v_1 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, v_1), term_f_21));
        }
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
      }
    t = g_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm s_64 (ATerm), ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  e_4 = t;
  t = fork_0_0(t);
  f_4 = t;
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = e_4;
        t = s_64(t);
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        t = SSL_waitpid(f_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm k_21 = ATgetArgument(t, 0);
            if(((ATgetType(k_21) != AT_INT) || (ATgetInt((ATermInt) k_21) != 0)))
              _fail(t);
            {
              ATerm m_21 = ATgetArgument(t, 1);
            }
            {
              ATerm n_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = e_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm o_80 (ATerm), ATerm t)
{
  ATerm l_4 = NULL,m_4 = NULL,o_4 = NULL,p_4 = NULL,r_4 = NULL;
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_80(t);
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_4, l_4, m_4);
  t = table_push_0_0(t);
  {
    ATerm p_21 = t;
    int r_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(o_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_21);
      }
    else
      {
        t = p_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_4 = ATgetFirst((ATermList) t);
        r_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(o_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_4), (ATerm) ATinsert(CheckATermList(p_4), l_4)));
    t = (ATerm) ATmakeAppl(sym__2, l_4, m_4);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm p_5 (ATerm w_4, ATerm t)
  {
    t = w_4;
    {
      ATerm u_21 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm x_21 = ATgetArgument(t, 0);
              ATerm y_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = u_21;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, w_4, term_n_11);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm q_5 (ATerm a_5, ATerm c_5, ATerm e_5, ATerm t)
  {
    t = SSL_open_file(a_5, c_5);
    return(t);
  }
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym__2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      {
        ATerm z_21 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_5(l_5, t);
            ;
            LocalPopChoice(g_22);
          }
        else
          {
            t = z_21;
            t = q_5(m_5, n_5, l_5, t);
          }
      }
    }
  else
    {
      t = p_5(l_5, t);
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
  ATerm s_5 = NULL;
  t = term_h_22;
  t = new_0_0(t);
  s_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_5, term_n_22);
  t = conc_strings_0_0(t);
  {
    ATerm o_22 = t;
    int q_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 = NULL;
        x_5 = t;
        t = SSL_access(x_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(q_22);
      }
    else
      {
        t = o_22;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_6 = NULL;
  t = new_file_0_0(t);
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_6, term_n_11);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, d_6, term_h_22);
  {
    ATerm u_0 (ATerm t)
    {
      t = term_t_22;
      return(t);
    }
    t = assert_1_0(u_0, t);
    t = d_6;
  }
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm d_3 = NULL,e_3 = NULL,n_3 = NULL,o_3 = NULL;
      t = c_7;
      t = xtc_new_file_0_0(t);
      d_3 = t;
      t = n_0(t);
      e_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), term_u_22));
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm x_22 = ATgetArgument(t, 0);
                ATerm y_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_3;
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, d_3), term_u_22);
                return(t);
              }
              t = at_end_1_0(w_0, t);
            }
            ;
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm m_3 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, e_3, (ATerm) ATinsert(ATinsert(ATempty, d_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm b_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  m_3 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_3;
              t = concat_0_0(t);
            }
          }
        n_3 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        o_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_3, n_3);
        {
          ATerm a_1 (ATerm t)
          {
            t = SSL_execvp(o_3, n_3);
            return(t);
          }
          t = fork_and_wait_1_0(a_1, t);
          t = SSL_close_file(d_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, d_3);
        }
      }
    }
  else
    {
      ATerm b_4 = NULL,c_4 = NULL,u_4 = NULL,v_4 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
      t = xtc_new_file_0_0(t);
      b_4 = t;
      t = n_0(t);
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_4), term_u_22), d_7), term_c_23));
      {
        ATerm d_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm f_23 = ATgetArgument(t, 0);
                ATerm n_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_4;
            {
              ATerm d_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_4), term_u_22), d_7), term_c_23);
                return(t);
              }
              t = at_end_1_0(d_1, t);
            }
            ;
            LocalPopChoice(e_23);
          }
        else
          {
            t = d_23;
            {
              ATerm t_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), d_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm p_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  t_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_4;
              t = concat_0_0(t);
            }
          }
        u_4 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_4, u_4);
        {
          ATerm f_1 (ATerm t)
          {
            t = SSL_execvp(v_4, u_4);
            return(t);
          }
          t = fork_and_wait_1_0(f_1, t);
          t = SSL_close_file(b_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, b_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm m_62 (ATerm), ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
  m_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      k_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_7);
  j_7 = t;
  t = k_7;
  t = m_62(t);
  l_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, l_7), j_7);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,d_5 = NULL;
  t = basename_1_0(_id, t);
  z_4 = t;
  t = term_h_22;
  t = s_78(t);
  d_5 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_5), term_u_23), z_4);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 = NULL,a_8 = NULL;
      w_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_5 = NULL;
            t = eval_config_0_0(t);
            r_5 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), r_5);
            t = r_5;
            ;
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
          }
        a_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_8, term_h_11);
        t = geq_0_0(t);
        t = w_7;
        t = o_82(t);
      }
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm n_81 (ATerm), ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,d_8 = NULL;
      b_8 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 = NULL;
            t = eval_config_0_0(t);
            b_6 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_6);
            t = b_6;
            ;
            LocalPopChoice(g_24);
          }
        else
          {
            t = f_24;
          }
        d_8 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_8, term_l_12);
        t = geq_0_0(t);
        t = b_8;
        t = n_81(t);
      }
      ;
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
    }
  return(t);
}
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_8 = NULL,q_8 = NULL;
  p_8 = t;
  if(match_cons(t, sym_FILE_1))
    {
      q_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_8;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(q_8, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(q_8);
        t = term_k_24;
        ;
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        {
          ATerm o_24 = t;
          int p_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_6 = NULL;
              t = p_8;
              t = l_0(t);
              j_6 = t;
              {
                ATerm q_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm t_24 = t;
                    int u_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(u_24);
                      }
                    else
                      {
                        t = t_24;
                        {
                          ATerm k_6 = NULL;
                          k_6 = t;
                          if((q_8 != t))
                            {
                              _fail(t);
                            }
                          t = k_6;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_24;
                  }
                t = SSL_rename(q_8, j_6);
                t = (ATerm) ATmakeAppl(sym_FILE_1, j_6);
              }
              ;
              LocalPopChoice(p_24);
            }
          else
            {
              t = o_24;
              t = p_8;
              t = l_0(t);
              if((q_8 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, q_8);
            }
        }
      }
  }
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  ATerm g_1 (ATerm t)
  {
    ATerm l_6 = NULL;
    l_6 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_6), (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue))));
    t = l_6;
    return(t);
  }
  t = if_verbose6_1_0(g_1, t);
  u_8 = t;
  {
    ATerm h_1 (ATerm t)
    {
      t = term_v_24;
      return(t);
    }
    t = guarantee_extension_1_0(h_1, t);
    v_8 = t;
    t = u_8;
    {
      ATerm w_24 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_8 = NULL;
          t = v_8;
          {
            ATerm i_1 (ATerm t)
            {
              t = term_e_25;
              return(t);
            }
            t = find_in_includes_1_0(i_1, t);
            w_8 = t;
            t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
          }
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = w_24;
          {
            ATerm x_8 = NULL;
            ATerm j_1 (ATerm t)
            {
              ATerm y_8 = NULL;
              y_8 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue))));
              t = y_8;
              return(t);
            }
            t = if_verbose2_1_0(j_1, t);
            {
              ATerm k_1 (ATerm t)
              {
                t = term_f_25;
                return(t);
              }
              t = guarantee_extension_1_0(k_1, t);
              x_8 = t;
              t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
              {
                ATerm g_25 = t;
                int k_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    LocalPopChoice(k_25);
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = term_n_25;
                        return(t);
                      }
                      ATerm m_1 (ATerm t)
                      {
                        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
                        {
                          ATerm o_25 = t;
                          int p_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_7 = NULL;
                              t = eval_config_0_0(t);
                              p_7 = t;
                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), p_7);
                              t = p_7;
                              ;
                              LocalPopChoice(p_25);
                            }
                          else
                            {
                              t = o_25;
                            }
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm z_8 = NULL;
                              z_8 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, z_8), term_q_25);
                              return(t);
                            }
                            t = map_1_0(n_1, t);
                            t = concat_0_0(t);
                          }
                        }
                        return(t);
                      }
                      t = xtc_transform_file_2_0(l_1, m_1, t);
                    }
                  }
                else
                  {
                    t = g_25;
                    {
                      ATerm o_1 (ATerm t)
                      {
                        t = term_n_25;
                        return(t);
                      }
                      ATerm p_1 (ATerm t)
                      {
                        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
                        {
                          ATerm r_25 = t;
                          int s_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_8 = NULL;
                              t = eval_config_0_0(t);
                              e_8 = t;
                              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), e_8);
                              t = e_8;
                              ;
                              LocalPopChoice(s_25);
                            }
                          else
                            {
                              t = r_25;
                            }
                          {
                            ATerm q_1 (ATerm t)
                            {
                              ATerm a_9 = NULL;
                              a_9 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, a_9), term_q_25);
                              return(t);
                            }
                            t = map_1_0(q_1, t);
                            t = concat_0_0(t);
                          }
                        }
                        return(t);
                      }
                      t = xtc_transform_term_2_0(o_1, p_1, t);
                    }
                  }
                {
                  ATerm u_25 = t;
                  int y_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_25 = t;
                      int a_26 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = FILE_1_0(_id, t);
                          ;
                          LocalPopChoice(a_26);
                        }
                      else
                        {
                          t = z_25;
                          if(!(match_cons(t, sym_stdin_0)))
                            _fail(t);
                        }
                      LocalPopChoice(y_25);
                      {
                        ATerm s_1 (ATerm t)
                        {
                          t = term_b_26;
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = xtc_transform_file_2_0(s_1, t_1, t);
                      }
                    }
                  else
                    {
                      t = u_25;
                      {
                        ATerm u_1 (ATerm t)
                        {
                          t = term_b_26;
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = xtc_transform_term_2_0(u_1, w_1, t);
                      }
                    }
                  {
                    ATerm x_1 (ATerm t)
                    {
                      t = v_8;
                      return(t);
                    }
                    t = rename_to_1_0(x_1, t);
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
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm c_9 = NULL;
    c_9 = t;
    t = SSL_explode_string(c_9);
    return(t);
  }
  t = map_1_0(y_1, t);
  t = concat_0_0(t);
  b_9 = t;
  t = SSL_implode_string(b_9);
  return(t);
}
ATerm find_in_path_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  if(match_cons(t, sym__2))
    {
      d_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm f_9 = NULL,g_9 = NULL;
      f_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_9), term_c_26), f_9);
      t = concat_strings_0_0(t);
      g_9 = t;
      t = SSL_access(g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      return(t);
    }
    t = fetch_elem_1_0(z_1, t);
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm n_63 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL;
  h_9 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL;
        t = eval_config_0_0(t);
        s_9 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), s_9);
        t = s_9;
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
      }
    j_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, j_9);
    t = find_in_path_0_0(t);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm t_9 = NULL,c_10 = NULL;
        t_9 = t;
        t = n_63(t);
        c_10 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_9), c_10));
        t = t_9;
        return(t);
      }
      t = if_verbose2_1_0(a_2, t);
    }
  }
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm e_10 = NULL;
    e_10 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_10), (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue))));
    t = e_10;
    return(t);
  }
  t = if_verbose6_1_0(b_2, t);
  k_9 = t;
  {
    ATerm c_2 (ATerm t)
    {
      t = term_m_26;
      return(t);
    }
    t = guarantee_extension_1_0(c_2, t);
    l_9 = t;
    {
      ATerm n_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_9 = NULL;
          ATerm d_2 (ATerm t)
          {
            t = term_s_26;
            return(t);
          }
          t = find_in_includes_1_0(d_2, t);
          m_9 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, m_9);
          ;
          LocalPopChoice(r_26);
        }
      else
        {
          t = n_26;
          {
            ATerm e_2 (ATerm t)
            {
              ATerm n_9 = NULL;
              n_9 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue))));
              t = n_9;
              return(t);
            }
            t = if_verbose2_1_0(e_2, t);
            t = k_9;
            t = get_syntax_definition_0_0(t);
            {
              ATerm t_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_26 = t;
                  int w_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(w_26);
                    }
                  else
                    {
                      t = v_26;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(u_26);
                  {
                    ATerm f_2 (ATerm t)
                    {
                      t = term_x_26;
                      return(t);
                    }
                    ATerm g_2 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATinsert(ATempty, k_9), term_y_26);
                      return(t);
                    }
                    t = xtc_transform_file_2_0(f_2, g_2, t);
                  }
                }
              else
                {
                  t = t_26;
                  {
                    ATerm h_2 (ATerm t)
                    {
                      t = term_x_26;
                      return(t);
                    }
                    ATerm j_2 (ATerm t)
                    {
                      t = (ATerm) ATinsert(ATinsert(ATempty, k_9), term_y_26);
                      return(t);
                    }
                    t = xtc_transform_term_2_0(h_2, j_2, t);
                  }
                }
              {
                ATerm k_2 (ATerm t)
                {
                  t = l_9;
                  return(t);
                }
                t = rename_to_1_0(k_2, t);
              }
            }
          }
        }
      {
        ATerm m_2 (ATerm t)
        {
          ATerm h_10 = NULL;
          h_10 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_10), (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue))));
          t = h_10;
          return(t);
        }
        t = if_verbose6_1_0(m_2, t);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 = NULL,q_9 = NULL;
      o_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_11 = NULL;
            t = eval_config_0_0(t);
            q_11 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), q_11);
            t = q_11;
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
          }
        q_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_9, term_d_12);
        t = geq_0_0(t);
        t = o_9;
        t = m_81(t);
      }
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  ATerm r_9 = NULL;
  ATerm p_2 (ATerm t)
  {
    t = j_70(t);
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    return(t);
  }
  t = fetch_1_0(p_2, t);
  t = not_null(r_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  x_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = x_9;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          y_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(y_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  ATerm q_2 (ATerm t)
  {
    ATerm h_12 = NULL;
    h_12 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_12), (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue))));
    t = h_12;
    return(t);
  }
  t = if_verbose6_1_0(q_2, t);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            t = term_f_27;
            return(t);
          }
          t = guarantee_extension_1_0(s_2, t);
          return(t);
        }
        t = FILE_1_0(r_2, t);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm b_10 = NULL;
          ATerm t_2 (ATerm t)
          {
            ATerm u_2 (ATerm t)
            {
              t = term_g_27;
              return(t);
            }
            t = guarantee_extension_1_0(u_2, t);
            return(t);
          }
          t = FILE_1_0(t_2, t);
          t = read_from_0_0(t);
          b_10 = t;
          t = SSL_explode_term(b_10);
          if(match_cons(t, sym__2))
            {
              a_10 = ATgetArgument(t, 0);
              {
                ATerm h_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, a_10)));
        }
      }
    {
      ATerm v_2 (ATerm t)
      {
        ATerm y_12 = NULL;
        y_12 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_12), (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue))));
        t = y_12;
        return(t);
      }
      t = if_verbose6_1_0(v_2, t);
    }
  }
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm w_2 (ATerm t)
  {
    ATerm i_13 = NULL;
    i_13 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_13), (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue))));
    t = i_13;
    return(t);
  }
  t = if_verbose6_1_0(w_2, t);
  if(match_cons(t, sym_FILE_1))
    {
      i_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_27 = t;
    int m_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)));
        {
          ATerm n_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_14 = NULL;
              t = eval_config_0_0(t);
              e_14 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), e_14);
              t = e_14;
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = n_27;
            }
        }
        ;
        LocalPopChoice(m_27);
      }
    else
      {
        t = l_27;
        {
          ATerm p_27 = t;
          int r_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_10 (ATerm k_10, ATerm t)
              {
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), i_10), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), k_10), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_27), i_10), term_t_27), k_10), term_s_27);
                _fail(t);
                return(t);
              }
              ATerm n_10 = NULL,o_10 = NULL;
              t = get_meta_0_0(t);
              o_10 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  n_10 = ATgetArgument(t, 0);
                  {
                    ATerm y_27 = t;
                    int z_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_10;
                        {
                          ATerm x_2 (ATerm t)
                          {
                            ATerm q_10 = NULL;
                            if(match_cons(t, sym_Syntax_1))
                              {
                                q_10 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = q_10;
                            return(t);
                          }
                          t = fetch_elem_1_0(x_2, t);
                        }
                        ;
                        LocalPopChoice(z_27);
                      }
                    else
                      {
                        t = y_27;
                        t = r_10(o_10, t);
                      }
                  }
                }
              else
                {
                  t = r_10(o_10, t);
                }
              ;
              LocalPopChoice(r_27);
            }
          else
            {
              t = p_27;
              t = term_a_28;
            }
        }
      }
    {
      ATerm z_2 (ATerm t)
      {
        ATerm g_14 = NULL;
        g_14 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_14), (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue))));
        t = g_14;
        return(t);
      }
      t = if_verbose2_1_0(z_2, t);
    }
  }
  return(t);
}
ATerm basename_1_0 (ATerm q_78 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  t = SSL_explode_string(s_10);
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_10 (ATerm t)
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, u_10, t);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm g_28 = t;
                int i_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_3 (ATerm t)
                    {
                      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                        _fail(t);
                      return(t);
                    }
                    t = Cons_2_0(a_3, _id, t);
                    ;
                    LocalPopChoice(i_28);
                  }
                else
                  {
                    t = g_28;
                    {
                      ATerm b_3 (ATerm t)
                      {
                        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
                          _fail(t);
                        return(t);
                      }
                      t = Cons_2_0(b_3, q_78, t);
                      t = (ATerm) ATempty;
                    }
                  }
              }
            }
          return(t);
        }
        t = u_10(t);
        ;
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
      }
    t_10 = t;
    t = SSL_implode_string(t_10);
  }
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  ATerm c_3 (ATerm t)
  {
    ATerm e_15 = NULL;
    e_15 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_15), (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue))));
    t = e_15;
    return(t);
  }
  t = if_verbose6_1_0(c_3, t);
  v_10 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = basename_1_0(_id, t);
      if(((w_10 != NULL) && (w_10 != t)))
        _fail(t);
      else
        w_10 = t;
      return(t);
    }
    t = FILE_1_0(f_3, t);
    t = get_syntax_0_0(t);
    t = get_parse_table_0_0(t);
    if(match_cons(t, sym_FILE_1))
      {
        x_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = v_10;
    {
      ATerm j_28 = t;
      int k_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(k_28);
          {
            ATerm h_3 (ATerm t)
            {
              t = term_s_28;
              return(t);
            }
            ATerm i_3 (ATerm t)
            {
              ATerm z_10 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm j_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_t_28);
                  return(t);
                }
                t = if_verbose3_1_0(j_3, t);
                z_10 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(z_10), x_10), term_v_28), term_u_28);
              }
              return(t);
            }
            t = xtc_transform_file_2_0(h_3, i_3, t);
          }
        }
      else
        {
          t = j_28;
          {
            ATerm k_3 (ATerm t)
            {
              t = term_s_28;
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm a_11 = NULL;
              t = (ATerm) ATempty;
              {
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, term_t_28);
                  return(t);
                }
                t = if_verbose3_1_0(p_3, t);
                a_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(a_11), x_10), term_v_28), term_u_28);
              }
              return(t);
            }
            t = xtc_transform_term_2_0(k_3, l_3, t);
          }
        }
      {
        ATerm w_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_28 = t;
            int z_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(z_28);
              }
            else
              {
                t = y_28;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(x_28);
            {
              ATerm q_3 (ATerm t)
              {
                t = term_a_29;
                return(t);
              }
              t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
            }
          }
        else
          {
            t = w_28;
            {
              ATerm r_3 (ATerm t)
              {
                t = term_a_29;
                return(t);
              }
              t = xtc_transform_term_2_0(r_3, pass_verbose_0_0, t);
            }
          }
        {
          ATerm s_3 (ATerm t)
          {
            ATerm t_3 (ATerm t)
            {
              t = not_null(w_10);
              {
                ATerm u_3 (ATerm t)
                {
                  t = term_c_29;
                  return(t);
                }
                t = guarantee_extension_1_0(u_3, t);
              }
              return(t);
            }
            t = copy_to_1_0(t_3, t);
            return(t);
          }
          t = if_keep1_1_0(s_3, t);
          {
            ATerm d_29 = t;
            int e_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_29 = t;
                int h_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(h_29);
                  }
                else
                  {
                    t = g_29;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(e_29);
                {
                  ATerm v_3 (ATerm t)
                  {
                    t = term_i_29;
                    return(t);
                  }
                  t = xtc_transform_file_2_0(v_3, pass_verbose_0_0, t);
                }
              }
            else
              {
                t = d_29;
                {
                  ATerm x_3 (ATerm t)
                  {
                    t = term_i_29;
                    return(t);
                  }
                  t = xtc_transform_term_2_0(x_3, pass_verbose_0_0, t);
                }
              }
            {
              ATerm k_29 = t;
              int l_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_29 = t;
                  int o_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(o_29);
                    }
                  else
                    {
                      t = m_29;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(l_29);
                  {
                    ATerm y_3 (ATerm t)
                    {
                      t = term_p_29;
                      return(t);
                    }
                    t = xtc_transform_file_2_0(y_3, pass_verbose_0_0, t);
                  }
                }
              else
                {
                  t = k_29;
                  {
                    ATerm z_3 (ATerm t)
                    {
                      t = term_p_29;
                      return(t);
                    }
                    t = xtc_transform_term_2_0(z_3, pass_verbose_0_0, t);
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
ATerm extend_config_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL;
  if(match_cons(t, sym__2))
    {
      c_11 = ATgetArgument(t, 0);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_11);
        {
          ATerm u_29 = t;
          int v_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_15 = NULL;
              t = eval_config_0_0(t);
              v_15 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_11, v_15);
              t = v_15;
              ;
              LocalPopChoice(v_29);
            }
          else
            {
              t = u_29;
            }
        }
        ;
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = (ATerm) ATempty;
      }
    e_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_11, e_11);
    {
      ATerm w_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm y_29 = ATgetArgument(t, 0);
              ATerm z_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_11;
          {
            ATerm a_4 (ATerm t)
            {
              t = e_11;
              return(t);
            }
            t = at_end_1_0(a_4, t);
          }
          ;
          LocalPopChoice(x_29);
        }
      else
        {
          t = w_29;
          {
            ATerm a_17 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, d_11, e_11));
            if(match_cons(t, sym__2))
              {
                ATerm a_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_30) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                a_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_17;
            t = concat_0_0(t);
          }
        }
      f_11 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_11, f_11);
      t = (ATerm) ATmakeAppl(sym__3, term_b_30, c_11, f_11);
    }
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  t = SSL_explode_string(j_11);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_11 (ATerm t)
        {
          ATerm e_30 = t;
          int f_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, l_11, t);
              ;
              LocalPopChoice(f_30);
            }
          else
            {
              t = e_30;
              {
                ATerm d_4 (ATerm t)
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  return(t);
                }
                ATerm g_4 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2_0(d_4, g_4, t);
              }
            }
          return(t);
        }
        t = l_11(t);
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATempty;
      }
    k_11 = t;
    t = SSL_implode_string(k_11);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm g_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_11 = NULL,t_11 = NULL;
      r_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_17 = NULL;
            t = eval_config_0_0(t);
            f_17 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), f_17);
            t = f_17;
            ;
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
          }
        t_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_11, term_m_19);
        t = geq_0_0(t);
        t = r_11;
        t = p_81(t);
      }
      ;
      LocalPopChoice(i_30);
    }
  else
    {
      t = g_30;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_12 = NULL,e_12 = NULL;
      c_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_18 = NULL;
            t = eval_config_0_0(t);
            b_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_18);
            t = b_18;
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
          }
        e_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, term_t_15);
        t = geq_0_0(t);
        t = c_12;
        t = o_81(t);
      }
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm q_81 (ATerm), ATerm t)
{
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_12 = NULL,i_12 = NULL;
      f_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_30 = t;
        int s_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_18 = NULL;
            t = eval_config_0_0(t);
            r_18 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), r_18);
            t = r_18;
            ;
            LocalPopChoice(s_30);
          }
        else
          {
            t = r_30;
          }
        i_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_12, term_x_12);
        t = geq_0_0(t);
        t = f_12;
        t = q_81(t);
      }
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
    }
  return(t);
}
ATerm union_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12;
  {
    ATerm o_12 (ATerm t)
    {
      ATerm t_30 = t;
      int u_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_12;
          ;
          LocalPopChoice(u_30);
        }
      else
        {
          t = t_30;
          {
            ATerm v_30 = t;
            int w_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_18 = NULL,t_18 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_18 = ATgetFirst((ATermList) t);
                    t_18 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_12;
                {
                  ATerm h_4 (ATerm t)
                  {
                    ATerm v_18 = NULL;
                    v_18 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_18, v_18);
                    t = a_74(t);
                    return(t);
                  }
                  t = fetch_1_0(h_4, t);
                  t = t_18;
                  t = o_12(t);
                }
                ;
                LocalPopChoice(w_30);
              }
            else
              {
                t = v_30;
                t = Cons_2_0(_id, o_12, t);
              }
          }
        }
      return(t);
    }
    t = o_12(t);
  }
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__3))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
      t_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_31 = ATgetArgument(t, 0);
            ATerm b_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(r_12, s_12);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATempty;
      }
    u_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_12, t_12);
    {
      ATerm i_4 (ATerm t)
      {
        ATerm b_13 = NULL;
        if(match_cons(t, sym__2))
          {
            b_13 = ATgetArgument(t, 0);
            if((b_13 != ATgetArgument(t, 1)))
              {
                _fail(ATgetArgument(t, 1));
              }
          }
        else
          _fail(t);
        return(t);
      }
      t = union_1_0(i_4, t);
      v_12 = t;
      t = SSL_table_put(r_12, s_12, v_12);
      t = (ATerm) ATmakeAppl(sym__3, r_12, s_12, t_12);
    }
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm z_81 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      e_13 = ATgetArgument(t, 0);
      d_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_13;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL;
      if(match_cons(t, sym__2))
        {
          f_13 = ATgetArgument(t, 0);
          g_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, e_13, f_13, g_13);
      t = z_81(t);
      return(t);
    }
    t = map_1_0(j_4, t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_13 (ATerm o_13, ATerm t)
  {
    t = SSL_fclose(o_13);
    return(t);
  }
  ATerm r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_13 = ATgetArgument(t, 0);
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_13);
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            t = u_13(s_13, t);
          }
      }
    }
  else
    {
      t = u_13(s_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_stdin_stream();
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_13 = NULL;
  t = SSL_stdout_stream();
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_13 = NULL;
  t = SSL_stderr_stream();
  z_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_13);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_31 = ATgetArgument(t, 0);
      ATerm g_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,u_19 = NULL;
        n_19 = t;
        t = SSL_explode_term(n_19);
        if(match_cons(t, sym__2))
          {
            ATerm j_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_31 = ATgetArgument(t, 1);
              if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
                {
                  u_19 = ATgetFirst((ATermList) k_31);
                  {
                    ATerm l_31 = (ATerm) ATgetNext((ATermList) k_31);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_19;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_19;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_19;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_19;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm m_31 = t;
          int n_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
              ATerm k_4 (ATerm t)
              {
                ATerm k_14 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    k_14 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_14;
                return(t);
              }
              t = _2_0(k_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  h_14 = ATgetArgument(t, 0);
                  i_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(h_14, i_14);
              j_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, j_14);
              ;
              LocalPopChoice(n_31);
            }
          else
            {
              t = m_31;
              {
                ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
                ATerm n_4 (ATerm t)
                {
                  ATerm o_14 = NULL;
                  o_14 = t;
                  t = SSL_is_string(o_14);
                  return(t);
                }
                t = _2_0(n_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    l_14 = ATgetArgument(t, 0);
                    m_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(l_14, m_14);
                n_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_14 = NULL;
      s_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_14, term_q_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      {
        ATerm y_19 = NULL;
        y_19 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = y_19;
        _fail(t);
      }
    }
  p_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(r_14);
  q_14 = t;
  t = p_14;
  t = fclose_0_0(t);
  t = q_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 = NULL;
      u_14 = t;
      t = SSL_access(u_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(s_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = r_31;
      {
        ATerm t_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_20 = NULL;
            ATerm v_31 = t;
            if((PushChoice() == 0))
              {
                ATerm v_14 = NULL;
                v_14 = t;
                t = SSL_access(v_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_31;
              }
            b_20 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = b_20;
            ;
            LocalPopChoice(u_31);
          }
        else
          {
            t = t_31;
            {
              ATerm e_20 = NULL;
              e_20 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_20), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = e_20;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm n_20 = NULL;
      n_20 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_20), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
      t = n_20;
      return(t);
    }
    t = if_verbose5_1_0(q_4, t);
    {
      ATerm w_31 = t;
      if((PushChoice() == 0))
        {
          t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, w_14));
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_31;
        }
      x_14 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, w_14));
      t = x_14;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm b_21 = NULL;
          b_21 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, b_21), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
          t = b_21;
          return(t);
        }
        t = if_verbose4_1_0(s_4, t);
        t = read_repository_file_0_0(t);
        {
          ATerm x_4 (ATerm t)
          {
            ATerm z_14 = NULL;
            z_14 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
            t = z_14;
            return(t);
          }
          t = if_verbose6_1_0(x_4, t);
          y_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_31, y_14);
          t = table_putlist_1_0(table_append_0_0, t);
          {
            ATerm y_4 (ATerm t)
            {
              ATerm b_15 = NULL;
              b_15 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
              t = b_15;
              return(t);
            }
            t = if_verbose6_1_0(y_4, t);
            t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, w_14), (ATerm) ATempty);
            t = (ATerm) ATmakeAppl(sym__3, term_x_31, (ATerm)ATmakeAppl(sym_Imported_1, w_14), (ATerm) ATempty);
            {
              ATerm b_5 (ATerm t)
              {
                ATerm d_15 = NULL;
                d_15 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
                t = d_15;
                return(t);
              }
              t = if_verbose4_1_0(b_5, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm filter_1_0 (ATerm q_77 (ATerm), ATerm t)
{
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
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
            ATerm f_5 (ATerm t)
            {
              t = filter_1_0(q_77, t);
              return(t);
            }
            t = Cons_2_0(q_77, f_5, t);
            ;
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm h_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm c_32 = ATgetFirst((ATermList) t);
                  h_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_15;
              t = filter_1_0(q_77, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm k_79 (ATerm), ATerm t)
{
  ATerm j_15 (ATerm t)
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_79(t);
        t = j_15(t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
      }
    return(t);
  }
  t = j_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_23 = NULL;
            t = eval_config_0_0(t);
            o_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), o_23);
            t = o_23;
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
          }
      }
      ;
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      {
        ATerm j_32 = t;
        int k_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_getenv((ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue)));
            ;
            LocalPopChoice(k_32);
          }
        else
          {
            t = j_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm g_5 (ATerm t)
  {
    ATerm q_23 = NULL;
    q_23 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
    t = q_23;
    return(t);
  }
  t = if_verbose5_1_0(g_5, t);
  l_15 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm n_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          n_15 = t;
          {
            ATerm h_5 (ATerm t)
            {
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
              t = filter_1_0(xtc_read_0_0, t);
              {
                ATerm n_32 = t;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_32;
                  }
              }
              return(t);
            }
            t = repeat_1_0(h_5, t);
            t = n_15;
          }
        }
      }
    t = l_15;
    {
      ATerm i_5 (ATerm t)
      {
        ATerm e_24 = NULL;
        e_24 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_24), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
        t = e_24;
        return(t);
      }
      t = if_verbose5_1_0(i_5, t);
    }
  }
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_5 (ATerm t)
      {
        ATerm h_25 = NULL;
        h_25 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_25), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
        t = h_25;
        return(t);
      }
      t = if_verbose5_1_0(j_5, t);
      t = xtc_load_0_0(t);
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL;
            if(match_cons(t, sym__2))
              {
                j_26 = ATgetArgument(t, 0);
                k_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, j_26));
            {
              ATerm k_5 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((k_26 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((l_26 != NULL) && (l_26 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      l_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(k_5, t);
              t = not_null(l_26);
            }
            ;
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm o_26 = NULL,p_26 = NULL;
              o_26 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, o_26));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm s_32 = ATgetFirst((ATermList) t);
                  if(match_cons(s_32, sym__2))
                    {
                      ATerm u_32 = ATgetArgument(s_32, 0);
                      p_26 = ATgetArgument(s_32, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm t_32 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = p_26;
            }
          }
        {
          ATerm o_5 (ATerm t)
          {
            ATerm q_26 = NULL;
            q_26 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_26), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
            t = q_26;
            return(t);
          }
          t = if_verbose5_1_0(o_5, t);
        }
      }
      ;
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm r_15 = NULL;
        r_15 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), r_15), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_32), r_15), term_v_32);
        {
          ATerm t_5 (ATerm t)
          {
            ATerm k_27 = NULL;
            t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
            {
              ATerm u_5 (ATerm t)
              {
                ATerm i_27 = NULL,j_27 = NULL;
                i_27 = t;
                t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), i_27);
                j_27 = t;
                t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
                return(t);
              }
              t = map_1_0(u_5, t);
              k_27 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_27), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
              t = k_27;
            }
            return(t);
          }
          t = if_verbose5_1_0(t_5, t);
          _fail(t);
        }
      }
    }
  return(t);
}
ATerm xtc_find_path_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  t = get_path_0_0(t);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  f_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      g_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL;
        t = f_16;
        t = k_0(t);
        q_27 = t;
        {
          ATerm z_32 = t;
          int a_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(a_33);
            }
          else
            {
              t = z_32;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(g_16, q_27);
          t = (ATerm) ATmakeAppl(sym_FILE_1, g_16);
        }
        ;
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_27 = NULL;
              t = f_16;
              t = k_0(t);
              u_27 = t;
              {
                ATerm d_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm e_33 = t;
                    int f_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(f_33);
                      }
                    else
                      {
                        t = e_33;
                        {
                          ATerm g_33 = t;
                          int h_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(h_33);
                            }
                          else
                            {
                              t = g_33;
                              {
                                ATerm v_27 = NULL;
                                v_27 = t;
                                if((g_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = v_27;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_33;
                  }
                t = SSL_copy(g_16, u_27);
                t = (ATerm) ATmakeAppl(sym_FILE_1, g_16);
              }
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = f_16;
              t = k_0(t);
              if((g_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, g_16);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_27 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_33 = ATgetArgument(t, 0);
            ATerm l_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_16, n_16);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_33 = ATgetFirst((ATermList) t);
            x_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_27;
        ;
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = (ATerm) ATempty;
      }
    o_16 = t;
    t = SSL_table_put(m_16, n_16, o_16);
    t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm l_80 (ATerm), ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  u_16 = t;
  t = l_80(t);
  v_16 = t;
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(v_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_16 = ATgetFirst((ATermList) t);
        w_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(v_16, (ATerm)ATmakeAppl(sym_Scopes_0), w_16);
    t = x_16;
    {
      ATerm v_5 (ATerm t)
      {
        ATerm y_16 = NULL;
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_16, y_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(v_5, t);
      t = u_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm g_81 (ATerm), ATerm h_81 (ATerm), ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_81(t);
      t = h_81(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      t = h_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm e_17 = NULL,g_17 = NULL,h_17 = NULL;
  e_17 = t;
  t = k_80(t);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_17, term_r_33);
  {
    ATerm s_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_33 = ATgetArgument(t, 0);
            ATerm v_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_17, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_33);
      }
    else
      {
        t = s_33;
        t = (ATerm) ATempty;
      }
    h_17 = t;
    t = SSL_table_put(g_17, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_17), (ATerm) ATempty));
    t = e_17;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm p_83 (ATerm), ATerm t)
{
  ATerm n_17 = NULL;
  ATerm w_5 (ATerm t)
  {
    t = term_t_22;
    return(t);
  }
  t = begin_scope_1_0(w_5, t);
  {
    ATerm y_5 (ATerm t)
    {
      ATerm o_17 = NULL;
      o_17 = t;
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((n_17 != NULL) && (n_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              n_17 = ATgetFirst((ATermList) t);
            {
              ATerm y_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(n_17);
        {
          ATerm a_6 (ATerm t)
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_17 = NULL;
                r_17 = t;
                t = SSL_remove(r_17);
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
              }
            return(t);
          }
          t = map_1_0(a_6, t);
          t = o_17;
          {
            ATerm c_6 (ATerm t)
            {
              t = term_t_22;
              return(t);
            }
            t = end_scope_1_0(c_6, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(p_83, y_5, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm q_83 (ATerm), ATerm t)
{
  ATerm e_6 (ATerm t)
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_17 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm d_34 = t;
          int e_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_28 = NULL;
              t = eval_config_0_0(t);
              d_28 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), d_28);
              t = d_28;
              ;
              LocalPopChoice(e_34);
            }
          else
            {
              t = d_34;
            }
          t_17 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, t_17);
        }
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = term_f_34;
      }
    t = q_83(t);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm g_34 = t;
        int h_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm i_34 = t;
              int j_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_28 = NULL;
                  t = eval_config_0_0(t);
                  h_28 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_28);
                  t = h_28;
                  ;
                  LocalPopChoice(j_34);
                }
              else
                {
                  t = i_34;
                }
            }
            ;
            LocalPopChoice(h_34);
          }
        else
          {
            t = g_34;
            t = term_k_24;
          }
        return(t);
      }
      t = copy_to_1_0(f_6, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(e_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  u_17 = t;
  t = term_h_22;
  t = whoami_0_0(t);
  v_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), v_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = u_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm g_6 (ATerm t)
  {
    ATerm x_17 = NULL;
    x_17 = t;
    if(match_string(t, "-k"))
      {
        t = x_17;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = x_17;
      }
    return(t);
  }
  ATerm h_6 (ATerm t)
  {
    ATerm y_17 = NULL,a_18 = NULL;
    y_17 = t;
    t = SSL_string_to_int(y_17);
    a_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_18);
    t = y_17;
    return(t);
  }
  ATerm i_6 (ATerm t)
  {
    t = term_k_34;
    return(t);
  }
  t = ArgOption_3_0(g_6, h_6, i_6, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_6 (ATerm t)
      {
        ATerm c_18 = NULL;
        c_18 = t;
        if(match_string(t, "-S"))
          {
            t = c_18;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_18;
          }
        return(t);
      }
      ATerm n_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_34;
        return(t);
      }
      ATerm o_6 (ATerm t)
      {
        t = term_p_34;
        return(t);
      }
      t = Option_3_0(m_6, n_6, o_6, t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      {
        ATerm q_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_6 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_6 (ATerm t)
            {
              ATerm d_18 = NULL,e_18 = NULL;
              d_18 = t;
              t = SSL_string_to_int(d_18);
              e_18 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_18);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_18);
              return(t);
            }
            ATerm r_6 (ATerm t)
            {
              t = term_s_34;
              return(t);
            }
            t = ArgOption_3_0(p_6, q_6, r_6, t);
            ;
            LocalPopChoice(r_34);
          }
        else
          {
            t = q_34;
            {
              ATerm s_6 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_6 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_t_34;
                return(t);
              }
              ATerm u_6 (ATerm t)
              {
                t = term_u_34;
                return(t);
              }
              t = Option_3_0(s_6, t_6, u_6, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_18 = NULL,i_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_18 = NULL;
      t = term_h_22;
      t = d_0(t);
      j_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_34, term_w_34, j_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_18 = ATgetFirst((ATermList) t);
          i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_18;
      t = a_0(t);
      t = term_h_22;
      t = c_0(t);
      m_18 = t;
      t = (ATerm) ATinsert(CheckATermList(i_18), m_18);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm v_6 (ATerm t)
  {
    ATerm o_18 = NULL;
    o_18 = t;
    if(match_string(t, "-o"))
      {
        t = o_18;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = o_18;
      }
    return(t);
  }
  ATerm w_6 (ATerm t)
  {
    ATerm p_18 = NULL;
    p_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), p_18);
    t = (ATerm) ATmakeAppl(sym_Output_1, p_18);
    return(t);
  }
  ATerm x_6 (ATerm t)
  {
    t = term_x_34;
    return(t);
  }
  t = ArgOption_3_0(v_6, w_6, x_6, t);
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm y_6 (ATerm t)
  {
    ATerm u_18 = NULL;
    u_18 = t;
    if(match_string(t, "-i"))
      {
        t = u_18;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_18;
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    ATerm w_18 = NULL;
    w_18 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), w_18);
    t = (ATerm) ATmakeAppl(sym_Input_1, w_18);
    return(t);
  }
  ATerm a_7 (ATerm t)
  {
    t = term_y_34;
    return(t);
  }
  t = ArgOption_3_0(y_6, z_6, a_7, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_18 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__3))
    {
      z_18 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
      e_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_18, d_19);
  {
    ATerm z_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_35 = ATgetArgument(t, 0);
            ATerm c_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_18, d_19);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
    g_19 = t;
    t = SSL_table_put(z_18, d_19, (ATerm) ATinsert(CheckATermList(g_19), e_19));
    t = (ATerm) ATmakeAppl(sym__3, z_18, d_19, e_19);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_19 = NULL;
      t = term_h_22;
      t = j_0(t);
      t_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_34, term_w_34, t_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm g_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_19 = ATgetFirst((ATermList) t);
          q_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_19 = ATgetFirst((ATermList) t);
          s_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_19;
      t = h_0(t);
      t = r_19;
      t = i_0(t);
      g_20 = t;
      t = (ATerm) ATinsert(CheckATermList(s_19), g_20);
    }
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm i_20 = NULL;
        i_20 = t;
        if(match_string(t, "-I"))
          {
            t = i_20;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
              _fail(t);
            t = i_20;
          }
        return(t);
      }
      ATerm e_7 (ATerm t)
      {
        ATerm j_20 = NULL;
        j_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATempty, j_20));
        t = extend_config_0_0(t);
        t = j_20;
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        t = term_f_35;
        return(t);
      }
      t = ArgOption_3_0(b_7, e_7, f_7, t);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm h_7 (ATerm t)
            {
              ATerm k_20 = NULL;
              k_20 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), k_20);
              t = k_20;
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              t = term_i_35;
              return(t);
            }
            t = ArgOption_3_0(g_7, h_7, i_7, t);
            ;
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm n_7 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm o_7 (ATerm t)
              {
                ATerm l_20 = NULL;
                l_20 = t;
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
                t = l_20;
                return(t);
              }
              ATerm q_7 (ATerm t)
              {
                t = term_j_35;
                return(t);
              }
              t = Option_3_0(n_7, o_7, q_7, t);
            }
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_20 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_22;
  t = whoami_0_0(t);
  m_20 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_20));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_28 = NULL;
        t = eval_config_0_0(t);
        l_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_28);
        t = l_28;
        ;
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_76 (ATerm), ATerm o_76 (ATerm), ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_76(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm p_20 = NULL,q_20 = NULL,t_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_20 = ATgetFirst((ATermList) t);
            q_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_20;
        t = foldr_2_0(n_76, o_76, t);
        t_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_20, t_20);
        t = o_76(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_20 = NULL,m_28 = NULL,n_28 = NULL;
  t = times_0_0(t);
  m_28 = t;
  t = SSL_explode_term(m_28);
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_28;
  {
    ATerm r_7 (ATerm t)
    {
      t = term_n_34;
      return(t);
    }
    ATerm s_7 (ATerm t)
    {
      ATerm q_28 = NULL,r_28 = NULL;
      if(match_cons(t, sym__2))
        {
          q_28 = ATgetArgument(t, 0);
          r_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(q_28, r_28);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            t = SSL_addr(q_28, r_28);
          }
      }
      return(t);
    }
    t = foldr_2_0(r_7, s_7, t);
    x_20 = t;
    t = SSL_TicksToSeconds(x_20);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,l_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_21;
        if((j_21 != t))
          {
            _fail(t);
          }
        t = i_21;
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = i_21;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_21, l_21);
              ;
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = SSL_gtr(j_21, l_21);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_21, l_21);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL,q_21 = NULL;
      o_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_29 = NULL;
            t = eval_config_0_0(t);
            b_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_29);
            t = b_29;
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
          }
        q_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_21, term_h_11);
        t = geq_0_0(t);
        t = o_21;
        t = l_81(t);
      }
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL;
    t = run_time_0_0(t);
    s_21 = t;
    t = term_h_22;
    t = whoami_0_0(t);
    t_21 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), s_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), t_21));
    t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_35), s_21), term_u_11), t_21));
    return(t);
  }
  t = if_verbose1_1_0(t_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm r_85 (ATerm), ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_29 = NULL;
            t = eval_config_0_0(t);
            f_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), f_29);
            t = f_29;
            ;
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
          }
      }
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm u_7 (ATerm t)
        {
          ATerm e_36 = t;
          int f_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(f_36);
            }
          else
            {
              t = e_36;
              {
                ATerm g_36 = t;
                int h_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(h_36);
                  }
                else
                  {
                    t = g_36;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(u_7, t);
      }
    }
  t = r_85(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_21 = NULL,w_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_21 = ATgetFirst((ATermList) t);
      w_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_22 = NULL,b_22 = NULL;
        t = w_21;
        t = g_0(t);
        a_22 = t;
        t = v_21;
        t = e_0(t);
        b_22 = t;
        t = w_21;
        {
          ATerm v_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(a_22), b_22);
            return(t);
          }
          t = reverse_acc_2_0(e_0, v_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_22;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm t_62 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  f_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  c_22 = t;
  t = d_22;
  t = t_62(t);
  e_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, e_22), c_22);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm i_36 = t;
  int j_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm k_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_29 = NULL;
            t = eval_config_0_0(t);
            j_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_29);
            t = j_29;
            ;
            LocalPopChoice(l_36);
          }
        else
          {
            t = k_36;
          }
      }
      ;
      LocalPopChoice(j_36);
    }
  else
    {
      t = i_36;
      {
        ATerm x_7 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(x_7, t);
      }
    }
  t = term_m_36;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm y_7 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, y_7, t);
    {
      ATerm z_7 (ATerm t)
      {
        ATerm i_22 = NULL;
        i_22 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_22), term_n_36);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(z_7, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm u_62 (ATerm), ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  m_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_22);
  j_22 = t;
  t = k_22;
  t = u_62(t);
  l_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, l_22), j_22);
  return(t);
}
ATerm fetch_1_0 (ATerm h_70 (ATerm), ATerm t)
{
  ATerm p_22 (ATerm t)
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_70, _id, t);
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = Cons_2_0(_id, p_22, t);
      }
    return(t);
  }
  t = p_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_22;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_36 = ATgetFirst((ATermList) t);
                ATerm t_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_22;
          }
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        t = (ATerm) ATinsert(ATempty, r_22);
      }
    s_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_22);
    t = r_22;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_29 = NULL;
        t = eval_config_0_0(t);
        n_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_29);
        t = n_29;
        ;
        LocalPopChoice(v_36);
      }
    else
      {
        t = u_36;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
      {
        ATerm z_22 = NULL,a_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_22 = ATgetFirst((ATermList) t);
            a_23 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_22;
        {
          ATerm c_8 (ATerm t)
          {
            t = a_23;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(c_8, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_70 (ATerm), ATerm t)
{
  ATerm g_23 (ATerm t)
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_23, t);
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_70(t);
      }
    return(t);
  }
  t = g_23(t);
  return(t);
}
ATerm _2_0 (ATerm c_56 (ATerm), ATerm d_56 (ATerm), ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      j_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_23);
  h_23 = t;
  t = i_23;
  t = c_56(t);
  k_23 = t;
  t = j_23;
  t = d_56(t);
  l_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_23, l_23), h_23);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm f_8 (ATerm t)
  {
    ATerm s_23 = NULL;
    s_23 = t;
    t = SSL_explode_string(s_23);
    return(t);
  }
  ATerm g_8 (ATerm t)
  {
    ATerm t_23 = NULL;
    t_23 = t;
    t = SSL_explode_string(t_23);
    return(t);
  }
  t = _2_0(f_8, g_8, t);
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL,w_23 = NULL;
        if(match_cons(t, sym__2))
          {
            v_23 = ATgetArgument(t, 0);
            w_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_23;
        {
          ATerm h_8 (ATerm t)
          {
            t = w_23;
            return(t);
          }
          t = at_end_1_0(h_8, t);
        }
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        {
          ATerm q_29 = NULL,r_29 = NULL;
          q_29 = t;
          t = SSL_explode_term(q_29);
          if(match_cons(t, sym__2))
            {
              ATerm c_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_29;
          t = concat_0_0(t);
        }
      }
    r_23 = t;
    t = SSL_implode_string(r_23);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_69 (ATerm), ATerm t)
{
  ATerm b_24 (ATerm t)
  {
    ATerm d_37 = t;
    int e_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_37);
      }
    else
      {
        t = d_37;
        t = Cons_2_0(w_69, b_24, t);
      }
    return(t);
  }
  t = b_24(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_24 = NULL;
      h_24 = t;
      t = SSL_is_string(h_24);
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
            ATerm i_8 (ATerm t)
            {
              ATerm j_37 = t;
              int k_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(k_37);
                }
              else
                {
                  t = j_37;
                }
              return(t);
            }
            t = map_1_0(i_8, t);
            ;
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            {
              ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
              l_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_24 = ATgetArgument(t, 0);
                  t = m_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_24 = ATgetArgument(t, 0);
                      t = m_24;
                      {
                        ATerm l_37 = t;
                        int m_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_24);
                            {
                              ATerm n_37 = t;
                              int o_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_30 = NULL;
                                  t = eval_config_0_0(t);
                                  h_30 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_24, h_30);
                                  t = h_30;
                                  ;
                                  LocalPopChoice(o_37);
                                }
                              else
                                {
                                  t = n_37;
                                }
                            }
                            ;
                            LocalPopChoice(m_37);
                          }
                        else
                          {
                            t = l_37;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_24), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_24;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_24 = NULL,s_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_24 = ATgetArgument(t, 0);
                          n_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_24;
                      t = eval_config_0_0(t);
                      r_24 = t;
                      t = n_24;
                      t = eval_config_0_0(t);
                      s_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_24, s_24);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_8 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm k_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_s_37;
        return(t);
      }
      ATerm l_8 (ATerm t)
      {
        t = term_t_37;
        return(t);
      }
      t = Option_3_0(j_8, k_8, l_8, t);
      ;
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm m_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_8 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_u_37;
          return(t);
        }
        ATerm o_8 (ATerm t)
        {
          t = term_v_37;
          return(t);
        }
        t = Option_3_0(m_8, n_8, o_8, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_57 (ATerm), ATerm m_57 (ATerm), ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL;
  c_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_24 = ATgetFirst((ATermList) t);
      z_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_25);
  x_24 = t;
  t = y_24;
  t = l_57(t);
  a_25 = t;
  t = z_24;
  t = m_57(t);
  b_25 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(b_25), a_25), x_24);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_87 (ATerm), ATerm t)
{
  ATerm i_25 = NULL;
  i_25 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_37;
        t = p_87(t);
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
      }
    t = i_25;
    {
      ATerm r_8 (ATerm t)
      {
        ATerm j_25 = NULL;
        j_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), j_25);
        t = (ATerm) ATmakeAppl(sym_Program_1, j_25);
        return(t);
      }
      ATerm s_8 (ATerm t)
      {
        ATerm z_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_38 = t;
            int c_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_38);
              }
            else
              {
                t = b_38;
                t = p_87(t);
                t = Cons_2_0(_id, s_8, t);
              }
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            {
              ATerm l_25 = NULL,m_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_25 = ATgetFirst((ATermList) t);
                  m_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(m_25), (ATerm) ATmakeAppl(sym_Undefined_1, l_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(r_8, s_8, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm o_87 (ATerm), ATerm t)
{
  ATerm t_25 = NULL,v_25 = NULL,w_25 = NULL;
  t_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_25;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm d_38 = t;
      int e_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_87(t);
          ;
          LocalPopChoice(e_38);
        }
      else
        {
          t = d_38;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_9 (ATerm t)
                {
                  ATerm x_25 = NULL;
                  x_25 = t;
                  if(match_string(t, "--help"))
                    {
                      t = x_25;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = x_25;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = x_25;
                        }
                    }
                  return(t);
                }
                ATerm p_9 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_h_38;
                  return(t);
                }
                ATerm u_9 (ATerm t)
                {
                  t = term_i_38;
                  return(t);
                }
                t = Option_3_0(i_9, p_9, u_9, t);
                ;
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_8, t);
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_26 = NULL;
          d_26 = t;
          {
            ATerm l_38 = t;
            int m_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_26;
                {
                  ATerm n_38 = t;
                  int o_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm p_38 = t;
                        int q_38 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_30 = NULL;
                            t = eval_config_0_0(t);
                            y_30 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), y_30);
                            t = y_30;
                            ;
                            LocalPopChoice(q_38);
                          }
                        else
                          {
                            t = p_38;
                          }
                      }
                      ;
                      LocalPopChoice(o_38);
                    }
                  else
                    {
                      t = n_38;
                      {
                        ATerm v_9 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(v_9, t);
                      }
                    }
                  t = d_26;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_38);
              }
            else
              {
                t = l_38;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm r_38 = t;
                  int s_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_31 = NULL;
                      t = eval_config_0_0(t);
                      e_31 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), e_31);
                      t = e_31;
                      ;
                      LocalPopChoice(s_38);
                    }
                  else
                    {
                      t = r_38;
                    }
                  t = d_26;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_38);
        }
      else
        {
          t = j_38;
          {
            ATerm t_38 = t;
            int u_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_9 (ATerm t)
                {
                  ATerm z_9 (ATerm t)
                  {
                    if(((v_25 != NULL) && (v_25 != t)))
                      _fail(t);
                    else
                      v_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(z_9, t);
                  return(t);
                }
                t = fetch_1_0(w_9, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_e_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_25)), term_v_38));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(u_38);
              }
            else
              {
                t = t_38;
              }
          }
        }
      w_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm t)
{
  ATerm g_26 = NULL;
  t = parse_options_1_0(t_85, t);
  g_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), g_26);
  t = g_26;
  t = v_85(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_85, t);
        ;
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        {
          ATerm y_38 = t;
          int z_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_85(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_38);
            }
          else
            {
              t = y_38;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  ATerm d_10 (ATerm t)
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = parse_stratego_options_0_0(t);
        ;
        LocalPopChoice(b_39);
      }
    else
      {
        t = a_39;
        {
          ATerm c_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(d_39);
            }
          else
            {
              t = c_39;
              {
                ATerm e_39 = t;
                int f_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(f_39);
                  }
                else
                  {
                    t = e_39;
                    {
                      ATerm g_39 = t;
                      int h_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_10 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm j_10 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_i_39;
                            return(t);
                          }
                          ATerm l_10 (ATerm t)
                          {
                            t = term_j_39;
                            return(t);
                          }
                          t = Option_3_0(g_10, j_10, l_10, t);
                          ;
                          LocalPopChoice(h_39);
                        }
                      else
                        {
                          t = g_39;
                          {
                            ATerm k_39 = t;
                            int l_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(l_39);
                              }
                            else
                              {
                                t = k_39;
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
  ATerm f_10 (ATerm t)
  {
    ATerm m_10 (ATerm t)
    {
      ATerm h_26 = NULL,i_26 = NULL;
      h_26 = t;
      t = term_m_39;
      t = xtc_find_path_0_0(t);
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, i_26), term_n_39));
      t = extend_config_0_0(t);
      t = h_26;
      t = parse_module_0_0(t);
      return(t);
    }
    t = xtc_io_1_0(m_10, t);
    return(t);
  }
  t = option_wrap_4_0(d_10, default_usage_0_0, _id, f_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
