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
ATerm term_l_39;
ATerm term_k_39;
ATerm term_v_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_t_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_n_36;
ATerm term_i_36;
ATerm term_z_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_s_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_w_31;
ATerm term_o_31;
ATerm term_w_29;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_j_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_u_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_p_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_o_26;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_m_24;
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_i_23;
ATerm term_r_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_i_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_w_17;
ATerm term_q_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_x_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_m_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_11, term_a_11, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_11, term_u_11, term_w_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_12, term_c_12, term_d_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_12, term_k_12, term_p_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_12, term_u_12, term_v_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_13, term_d_13, term_g_13);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_13, term_j_13, term_l_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_13, term_t_13, term_w_13);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_13, term_m_14, term_p_14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_14, term_z_14, term_a_15);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_15, term_e_15, term_i_15);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_15, term_m_15, term_n_15);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_15, term_r_15, term_s_15);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_15, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_15, term_z_15, term_a_16);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_16, term_f_16, term_g_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_n_16, term_o_16);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_16, term_r_16, term_x_16);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_17, term_e_17, term_f_17);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_17, term_k_17, term_m_17);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_17, term_y_17, term_a_18);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_18, term_d_18, term_h_18);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_q_18, term_r_18, term_x_18);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_18, term_a_19, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_19, term_j_19, term_k_19);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_19, term_o_19, term_p_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_19, term_y_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_20, term_f_20, term_g_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("def", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("using syntax definition: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-sdf", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("asfix-yield", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf2table", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-m", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("meta", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("syn", 0, ATtrue));
  ATprotect(&(term_p_27));
  term_p_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("atree", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("meta-explode", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("stratego-desugar", 0, ATtrue));
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-2", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_34);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-I p|--Include p   include modules from directory p", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--syntax syn        use syntax syn", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__3, term_w_29, term_p_37, term_w_21);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("StrategoRenamed.sdf", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("./", 0, ATtrue));
}
ATerm pass_verbose_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm o_72 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_and_wait_1_0 (ATerm d_71 (ATerm), ATerm);
ATerm assert_1_0 (ATerm z_86 (ATerm), ATerm);
ATerm i_5 (ATerm u_4, ATerm);
ATerm k_5 (ATerm x_4, ATerm y_4, ATerm a_5, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm w_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm FILE_1_0 (ATerm x_68 (ATerm), ATerm);
ATerm guarantee_extension_1_0 (ATerm d_85 (ATerm), ATerm);
ATerm if_keep1_1_0 (ATerm g_89 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm rename_to_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm g_1 (ATerm);
ATerm h_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm get_syntax_definition_0_0 (ATerm);
ATerm w_1 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm find_in_path_0_0 (ATerm);
ATerm find_in_includes_1_0 (ATerm y_69 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm o_2 (ATerm);
ATerm get_parse_table_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm);
ATerm read_from_0_0 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm get_meta_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm get_syntax_0_0 (ATerm);
ATerm a_3 (ATerm);
ATerm c_3 (ATerm);
ATerm basename_1_0 (ATerm b_85 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm parse_module_0_0 (ATerm);
ATerm extend_config_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm union_1_0 (ATerm m_80 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm k_88 (ATerm), ATerm);
ATerm q_13 (ATerm k_13, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
ATerm h_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm xtc_read_0_0 (ATerm);
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm g_5 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm xtc_find_path_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm parse_stratego_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_7 (ATerm);
ATerm need_help_1_0 (ATerm c_92 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm e_69 (ATerm), ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm f_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm);
ATerm _2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm b_8 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm d_8 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm);
ATerm k_8 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_94 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm o_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm parse_options_1_0 (ATerm z_93 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm z_9 (ATerm);
ATerm parse_stratego_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL,p_0 = NULL;
  t = term_v_5;
  {
    ATerm d_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
        {
          ATerm j_10 = t;
          int u_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 = NULL;
              t = eval_config_0_0(t);
              x_0 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), x_0);
              t = x_0;
              ;
              LocalPopChoice(u_10);
            }
          else
            {
              t = j_10;
            }
        }
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = d_10;
        t = term_a_11;
      }
    c_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_0, term_a_11);
    {
      ATerm b_11 = t;
      int c_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(c_0, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(c_11);
        }
      else
        {
          t = b_11;
          t = SSL_subtr(c_0, (ATerm) ATmakeInt(1));
        }
      p_0 = t;
      t = SSL_int_to_string(p_0);
      e_0 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_0), term_v_5);
    }
  }
  return(t);
}
ATerm WriteToFile_1_0 (ATerm o_72 (ATerm), ATerm t)
{
  ATerm r_0 = NULL,s_0 = NULL,t_0 = NULL;
  if(match_cons(t, sym__2))
    {
      r_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_0, term_d_11);
  t = open_stream_0_0(t);
  t_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_0, s_0);
  t = o_72(t);
  t = fclose_0_0(t);
  t = s_0;
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if(match_cons(e_11, sym_Stream_1))
        {
          z_0 = ATgetArgument(e_11, 0);
        }
      else
        _fail(t);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(z_0, a_1);
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_1);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm u_0 = NULL,v_0 = NULL;
  u_0 = t;
  t = xtc_new_file_0_0(t);
  v_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_0, u_0);
  t = WriteToFile_1_0(o_0, t);
  t = SSL_close_file(v_0);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_0);
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(x_90, y_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm f_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  f_2 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      j_2 = ATgetArgument(t, 0);
      {
        ATerm e_1 = NULL;
        t = SSL_int_to_string(j_2);
        e_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_11), e_1), term_f_11);
        t = concat_strings_0_0(t);
      }
    }
  else
    {
      ATerm x_1 = NULL;
      if(match_cons(t, sym_Signal_3))
        {
          j_2 = ATgetArgument(t, 0);
          k_2 = ATgetArgument(t, 1);
          l_2 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSL_int_to_string(k_2);
      x_1 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_2), term_l_11), x_1), term_k_11), j_2);
      t = concat_strings_0_0(t);
    }
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_20), term_b_20), term_s_19), term_l_19), term_c_19), term_y_18), term_i_18), term_b_18), term_q_17), term_g_17), term_c_17), term_p_16), term_h_16), term_d_16), term_x_15), term_t_15), term_p_15), term_j_15), term_b_15), term_r_14), term_x_13), term_m_13), term_h_13), term_x_12), term_s_12), term_h_12), term_z_11), term_s_11);
        {
          ATerm q_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm j_20 = ATgetArgument(t, 0);
                if((r_2 != ATgetArgument(t, 1)))
                  {
                    _fail(ATgetArgument(t, 1));
                  }
                {
                  ATerm k_20 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(q_0, t);
        }
        ;
        LocalPopChoice(p_11);
      }
    else
      {
        t = n_11;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, r_2);
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_3 = NULL,i_2 = NULL;
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            u_3 = ATgetArgument(t, 1);
            {
              ATerm q_20 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_3;
        {
          ATerm r_20 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_20;
            }
          t = signal_from_number_0_0(t);
          t = signal_to_descr_0_0(t);
          i_2 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue))));
          t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, i_2), term_t_20));
        }
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
      }
    t = b_3;
  }
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm d_71 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  a_4 = t;
  t = fork_0_0(t);
  b_4 = t;
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = a_4;
        t = d_71(t);
        ;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = SSL_waitpid(b_4);
        t = warn_ifsignaled_0_0(t);
        if(match_cons(t, sym_WaitStatus_3))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            if(((ATgetType(w_20) != AT_INT) || (ATgetInt((ATermInt) w_20) != 0)))
              _fail(t);
            {
              ATerm a_21 = ATgetArgument(t, 1);
            }
            {
              ATerm b_21 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = a_4;
      }
  }
  return(t);
}
ATerm assert_1_0 (ATerm z_86 (ATerm), ATerm t)
{
  ATerm i_4 = NULL,k_4 = NULL,l_4 = NULL,n_4 = NULL,o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_86(t);
  l_4 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_4, i_4, k_4);
  t = table_push_0_0(t);
  {
    ATerm d_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(l_4, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_21);
      }
    else
      {
        t = d_21;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_4 = ATgetFirst((ATermList) t);
        o_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(l_4, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_4), (ATerm) ATinsert(CheckATermList(n_4), i_4)));
    t = (ATerm) ATmakeAppl(sym__2, i_4, k_4);
  }
  return(t);
}
ATerm i_5 (ATerm u_4, ATerm t)
{
  t = u_4;
  {
    ATerm i_21 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_21;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, u_4, term_d_11);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm k_5 (ATerm x_4, ATerm y_4, ATerm a_5, ATerm t)
{
  t = SSL_open_file(x_4, y_4);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      f_5 = ATgetArgument(t, 1);
      {
        ATerm o_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_5(d_5, t);
            ;
            LocalPopChoice(v_21);
          }
        else
          {
            t = o_21;
            t = k_5(e_5, f_5, d_5, t);
          }
      }
    }
  else
    {
      t = i_5(d_5, t);
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
  ATerm n_5 = NULL;
  t = term_w_21;
  t = new_0_0(t);
  n_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_5, term_x_21);
  t = conc_strings_0_0(t);
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_5 = NULL;
        q_5 = t;
        t = SSL_access(q_5, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
      }
  }
  return(t);
}
ATerm w_0 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm x_5 = NULL;
  t = new_file_0_0(t);
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_5, term_d_11);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, x_5, term_w_21);
  t = assert_1_0(w_0, t);
  t = x_5;
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  b_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm r_3 = NULL,s_3 = NULL,m_4 = NULL,p_4 = NULL;
      t = b_7;
      t = xtc_new_file_0_0(t);
      r_3 = t;
      t = n_0(t);
      s_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATinsert(ATinsert(ATempty, r_3), term_j_22));
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm m_22 = ATgetArgument(t, 0);
                ATerm n_22 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = s_3;
            {
              ATerm y_0 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATempty, r_3), term_j_22);
                return(t);
              }
              t = at_end_1_0(y_0, t);
            }
            ;
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm j_4 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, s_3, (ATerm) ATinsert(ATinsert(ATempty, r_3), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm q_22 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_22) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  j_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_4;
              t = concat_0_0(t);
            }
          }
        m_4 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        p_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_4, m_4);
        {
          ATerm c_1 (ATerm t)
          {
            t = SSL_execvp(p_4, m_4);
            return(t);
          }
          t = fork_and_wait_1_0(c_1, t);
          t = SSL_close_file(r_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, r_3);
        }
      }
    }
  else
    {
      ATerm w_4 = NULL,z_4 = NULL,y_5 = NULL,z_5 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_7;
      t = xtc_new_file_0_0(t);
      w_4 = t;
      t = n_0(t);
      z_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), term_j_22), c_7), term_r_22));
      {
        ATerm s_22 = t;
        int u_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym__2))
              {
                ATerm v_22 = ATgetArgument(t, 0);
                ATerm d_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_4;
            {
              ATerm d_1 (ATerm t)
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), term_j_22), c_7), term_r_22);
                return(t);
              }
              t = at_end_1_0(d_1, t);
            }
            ;
            LocalPopChoice(u_22);
          }
        else
          {
            t = s_22;
            {
              ATerm u_5 = NULL;
              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, z_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_4), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue))), c_7), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)))));
              if(match_cons(t, sym__2))
                {
                  ATerm h_23 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  u_5 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_5;
              t = concat_0_0(t);
            }
          }
        y_5 = t;
        t = m_0(t);
        t = xtc_find_0_0(t);
        z_5 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_5, y_5);
        {
          ATerm f_1 (ATerm t)
          {
            t = SSL_execvp(z_5, y_5);
            return(t);
          }
          t = fork_and_wait_1_0(f_1, t);
          t = SSL_close_file(w_4);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_4);
        }
      }
    }
  return(t);
}
ATerm FILE_1_0 (ATerm x_68 (ATerm), ATerm t)
{
  ATerm f_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL;
  j_7 = t;
  if(match_cons(t, sym_FILE_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_7);
  f_7 = t;
  t = h_7;
  t = x_68(t);
  i_7 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, i_7), f_7);
  return(t);
}
ATerm guarantee_extension_1_0 (ATerm d_85 (ATerm), ATerm t)
{
  ATerm b_6 = NULL,d_6 = NULL;
  t = basename_1_0(_id, t);
  b_6 = t;
  t = term_w_21;
  t = d_85(t);
  d_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_6), term_i_23), b_6);
  t = concat_strings_0_0(t);
  return(t);
}
ATerm if_keep1_1_0 (ATerm g_89 (ATerm), ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_7 = NULL,w_7 = NULL;
      r_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)));
      {
        ATerm l_23 = t;
        int m_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_7 = NULL;
            t = eval_config_0_0(t);
            g_7 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), g_7);
            t = g_7;
            ;
            LocalPopChoice(m_23);
          }
        else
          {
            t = l_23;
          }
        w_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_7, term_a_11);
        t = geq_0_0(t);
        t = r_7;
        t = g_89(t);
      }
      ;
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_7 = NULL,z_7 = NULL;
      x_7 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_8 = NULL;
            t = eval_config_0_0(t);
            a_8 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), a_8);
            t = a_8;
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
          }
        z_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_7, term_c_12);
        t = geq_0_0(t);
        t = x_7;
        t = f_88(t);
      }
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = n_23;
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
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_8;
        t = l_0(t);
        if(!(match_cons(t, sym_stdout_0)))
          _fail(t);
        t = SSL_copy(q_8, (ATerm) ATmakeAppl(sym_stdout_0));
        t = SSL_remove(q_8);
        t = term_y_23;
        ;
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_9 = NULL;
              t = p_8;
              t = l_0(t);
              x_9 = t;
              {
                ATerm c_24 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
                        {
                          ATerm c_10 = NULL;
                          c_10 = t;
                          if((q_8 != t))
                            {
                              _fail(t);
                            }
                          t = c_10;
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_24;
                  }
                t = SSL_rename(q_8, x_9);
                t = (ATerm) ATmakeAppl(sym_FILE_1, x_9);
              }
              ;
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
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
ATerm g_1 (ATerm t)
{
  ATerm y_10 = NULL;
  y_10 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_10), (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax-definition: ", 0, ATtrue))));
  t = y_10;
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_g_24;
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_h_24;
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("creating syntax definition", 0, ATtrue))));
  t = y_8;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_i_24;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm n_24 = t;
    int o_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL;
        t = eval_config_0_0(t);
        i_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), i_12);
        t = i_12;
        ;
        LocalPopChoice(o_24);
      }
    else
      {
        t = n_24;
      }
    t = map_1_0(n_1, t);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm z_8 = NULL;
  z_8 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_8), term_r_24);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_m_24;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_12 = NULL;
        t = eval_config_0_0(t);
        r_12 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), r_12);
        t = r_12;
        ;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
      }
    t = map_1_0(q_1, t);
    t = concat_0_0(t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm a_9 = NULL;
  a_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_9), term_r_24);
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_syntax_definition_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL;
  t = if_verbose6_1_0(g_1, t);
  u_8 = t;
  t = guarantee_extension_1_0(h_1, t);
  v_8 = t;
  t = u_8;
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_8 = NULL;
        t = v_8;
        t = find_in_includes_1_0(i_1, t);
        w_8 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, w_8);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm x_8 = NULL;
          t = if_verbose2_1_0(j_1, t);
          t = guarantee_extension_1_0(k_1, t);
          x_8 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, x_8);
          {
            ATerm g_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                LocalPopChoice(j_25);
                t = xtc_transform_file_2_0(l_1, m_1, t);
              }
            else
              {
                t = g_25;
                t = xtc_transform_term_2_0(o_1, p_1, t);
              }
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_25 = t;
                  int t_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(t_25);
                    }
                  else
                    {
                      t = o_25;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(l_25);
                  t = xtc_transform_file_2_0(r_1, s_1, t);
                }
              else
                {
                  t = k_25;
                  t = xtc_transform_term_2_0(t_1, u_1, t);
                }
              {
                ATerm v_1 (ATerm t)
                {
                  t = v_8;
                  return(t);
                }
                t = rename_to_1_0(v_1, t);
              }
            }
          }
        }
      }
  }
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  t = SSL_explode_string(c_9);
  return(t);
}
ATerm concat_strings_0_0 (ATerm t)
{
  ATerm b_9 = NULL;
  t = map_1_0(w_1, t);
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
    ATerm y_1 (ATerm t)
    {
      ATerm f_9 = NULL,g_9 = NULL;
      f_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_9), term_u_25), f_9);
      t = concat_strings_0_0(t);
      g_9 = t;
      t = SSL_access(g_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      return(t);
    }
    t = fetch_elem_1_0(y_1, t);
  }
  return(t);
}
ATerm find_in_includes_1_0 (ATerm y_69 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  h_9 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)));
  {
    ATerm v_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_13 = NULL;
        t = eval_config_0_0(t);
        e_13 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-I", 0, ATtrue)), e_13);
        t = e_13;
        ;
        LocalPopChoice(w_25);
      }
    else
      {
        t = v_25;
      }
    i_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
    t = find_in_path_0_0(t);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm f_13 = NULL,r_13 = NULL;
        f_13 = t;
        t = y_69(t);
        r_13 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_13), r_13));
        t = f_13;
        return(t);
      }
      t = if_verbose2_1_0(z_1, t);
    }
  }
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm y_13 = NULL;
  y_13 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_13), (ATerm) ATmakeAppl(ATmakeSymbol("get-parse-table: ", 0, ATtrue))));
  t = y_13;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_y_25;
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_z_25;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm m_9 = NULL;
  m_9 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("creating parse table", 0, ATtrue))));
  t = m_9;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, t_14), (ATerm) ATmakeAppl(ATmakeSymbol("using parse table: ", 0, ATtrue))));
  t = t_14;
  return(t);
}
ATerm get_parse_table_0_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL;
  t = if_verbose6_1_0(a_2, t);
  j_9 = t;
  t = guarantee_extension_1_0(b_2, t);
  k_9 = t;
  {
    ATerm f_26 = t;
    int g_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_9 = NULL;
        t = find_in_includes_1_0(c_2, t);
        l_9 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, l_9);
        ;
        LocalPopChoice(g_26);
      }
    else
      {
        t = f_26;
        t = if_verbose2_1_0(d_2, t);
        t = j_9;
        t = get_syntax_definition_0_0(t);
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_26 = t;
              int m_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = FILE_1_0(_id, t);
                  ;
                  LocalPopChoice(m_26);
                }
              else
                {
                  t = l_26;
                  if(!(match_cons(t, sym_stdin_0)))
                    _fail(t);
                }
              LocalPopChoice(j_26);
              {
                ATerm g_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, j_9), term_o_26);
                  return(t);
                }
                t = xtc_transform_file_2_0(e_2, g_2, t);
              }
            }
          else
            {
              t = i_26;
              {
                ATerm m_2 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, j_9), term_o_26);
                  return(t);
                }
                t = xtc_transform_term_2_0(h_2, m_2, t);
              }
            }
          {
            ATerm n_2 (ATerm t)
            {
              t = k_9;
              return(t);
            }
            t = rename_to_1_0(n_2, t);
          }
        }
      }
    t = if_verbose6_1_0(o_2, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_9 = NULL,p_9 = NULL;
      n_9 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_26 = t;
        int s_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL;
            t = eval_config_0_0(t);
            o_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_15);
            t = o_15;
            ;
            LocalPopChoice(s_26);
          }
        else
          {
            t = r_26;
          }
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_9, term_u_11);
        t = geq_0_0(t);
        t = n_9;
        t = e_88(t);
      }
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm u_76 (ATerm), ATerm t)
{
  ATerm q_9 = NULL;
  ATerm p_2 (ATerm t)
  {
    t = u_76(t);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    return(t);
  }
  t = fetch_1_0(p_2, t);
  t = not_null(q_9);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_9 = NULL,y_9 = NULL;
  w_9 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_v_26;
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
ATerm q_2 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_16), (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue))));
  t = i_16;
  return(t);
}
ATerm s_2 (ATerm t)
{
  t = guarantee_extension_1_0(t_2, t);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_w_26;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = guarantee_extension_1_0(v_2, t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  t = term_y_26;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm y_16 = NULL;
  y_16 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, y_16), (ATerm) ATmakeAppl(ATmakeSymbol("get-meta: ", 0, ATtrue))));
  t = y_16;
  return(t);
}
ATerm get_meta_0_0 (ATerm t)
{
  ATerm a_10 = NULL;
  t = if_verbose6_1_0(q_2, t);
  {
    ATerm z_26 = t;
    int b_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = FILE_1_0(s_2, t);
        t = read_from_0_0(t);
        ;
        LocalPopChoice(b_27);
      }
    else
      {
        t = z_26;
        {
          ATerm b_10 = NULL;
          t = FILE_1_0(u_2, t);
          t = read_from_0_0(t);
          b_10 = t;
          t = SSL_explode_term(b_10);
          if(match_cons(t, sym__2))
            {
              a_10 = ATgetArgument(t, 0);
              {
                ATerm c_27 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Meta_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Syntax_1, a_10)));
        }
      }
    t = if_verbose6_1_0(w_2, t);
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm u_17 = NULL;
  u_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_17), (ATerm) ATmakeAppl(ATmakeSymbol("get-syntax: ", 0, ATtrue))));
  t = u_17;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm k_10 = NULL;
  if(match_cons(t, sym_Syntax_1))
    {
      k_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_10;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_18), (ATerm) ATmakeAppl(ATmakeSymbol("using syntax: ", 0, ATtrue))));
  t = n_18;
  return(t);
}
ATerm get_syntax_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  t = if_verbose6_1_0(x_2, t);
  if(match_cons(t, sym_FILE_1))
    {
      e_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_27 = t;
    int e_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)));
        {
          ATerm f_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_18 = NULL;
              t = eval_config_0_0(t);
              k_18 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), k_18);
              t = k_18;
              ;
              LocalPopChoice(j_27);
            }
          else
            {
              t = f_27;
            }
        }
        ;
        LocalPopChoice(e_27);
      }
    else
      {
        t = d_27;
        {
          ATerm k_27 = t;
          int o_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_10 (ATerm f_10, ATerm t)
              {
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" not valid: ", 0, ATtrue))), e_10), (ATerm) ATmakeAppl(ATmakeSymbol(" for module ", 0, ATtrue))), f_10), (ATerm) ATmakeAppl(ATmakeSymbol("Meta data ", 0, ATtrue))));
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_27), e_10), term_q_27), f_10), term_p_27);
                _fail(t);
                return(t);
              }
              ATerm h_10 = NULL,i_10 = NULL;
              t = get_meta_0_0(t);
              i_10 = t;
              if(match_cons(t, sym_Meta_1))
                {
                  h_10 = ATgetArgument(t, 0);
                  {
                    ATerm s_27 = t;
                    int t_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_10;
                        t = fetch_elem_1_0(y_2, t);
                        ;
                        LocalPopChoice(t_27);
                      }
                    else
                      {
                        t = s_27;
                        t = l_10(i_10, t);
                      }
                  }
                }
              else
                {
                  t = l_10(i_10, t);
                }
              ;
              LocalPopChoice(o_27);
            }
          else
            {
              t = k_27;
              t = term_u_27;
            }
        }
      }
    t = if_verbose2_1_0(z_2, t);
  }
  return(t);
}
ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 46)))
    _fail(t);
  return(t);
}
ATerm basename_1_0 (ATerm b_85 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  m_10 = t;
  t = SSL_explode_string(m_10);
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_10 (ATerm t)
        {
          ATerm x_27 = t;
          int y_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, o_10, t);
              ;
              LocalPopChoice(y_27);
            }
          else
            {
              t = x_27;
              {
                ATerm z_27 = t;
                int a_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2_0(a_3, _id, t);
                    ;
                    LocalPopChoice(a_28);
                  }
                else
                  {
                    t = z_27;
                    t = Cons_2_0(c_3, b_85, t);
                    t = (ATerm) ATempty;
                  }
              }
            }
          return(t);
        }
        t = o_10(t);
        ;
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
      }
    n_10 = t;
    t = SSL_implode_string(n_10);
  }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, w_18), (ATerm) ATmakeAppl(ATmakeSymbol("parse-module: ", 0, ATtrue))));
  t = w_18;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_28);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_b_28;
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_c_28);
  return(t);
}
ATerm l_3 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_d_28;
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_e_28;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_28;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_j_28;
  return(t);
}
ATerm parse_module_0_0 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL;
  t = if_verbose6_1_0(d_3, t);
  p_10 = t;
  {
    ATerm e_3 (ATerm t)
    {
      t = basename_1_0(_id, t);
      if(((q_10 != NULL) && (q_10 != t)))
        _fail(t);
      else
        q_10 = t;
      return(t);
    }
    t = FILE_1_0(e_3, t);
    t = get_syntax_0_0(t);
    t = get_parse_table_0_0(t);
    if(match_cons(t, sym_FILE_1))
      {
        r_10 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = p_10;
    {
      ATerm k_28 = t;
      int l_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_28 = t;
          int n_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = FILE_1_0(_id, t);
              ;
              LocalPopChoice(n_28);
            }
          else
            {
              t = m_28;
              if(!(match_cons(t, sym_stdin_0)))
                _fail(t);
            }
          LocalPopChoice(l_28);
          {
            ATerm g_3 (ATerm t)
            {
              ATerm s_10 = NULL;
              t = (ATerm) ATempty;
              t = if_verbose3_1_0(h_3, t);
              s_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(s_10), r_10), term_q_28), term_p_28);
              return(t);
            }
            t = xtc_transform_file_2_0(f_3, g_3, t);
          }
        }
      else
        {
          t = k_28;
          {
            ATerm j_3 (ATerm t)
            {
              ATerm t_10 = NULL;
              t = (ATerm) ATempty;
              t = if_verbose3_1_0(k_3, t);
              t_10 = t;
              t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(t_10), r_10), term_q_28), term_p_28);
              return(t);
            }
            t = xtc_transform_term_2_0(i_3, j_3, t);
          }
        }
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_28 = t;
            int w_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = FILE_1_0(_id, t);
                ;
                LocalPopChoice(w_28);
              }
            else
              {
                t = t_28;
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
              }
            LocalPopChoice(s_28);
            t = xtc_transform_file_2_0(l_3, pass_verbose_0_0, t);
          }
        else
          {
            t = r_28;
            t = xtc_transform_term_2_0(m_3, pass_verbose_0_0, t);
          }
        {
          ATerm n_3 (ATerm t)
          {
            ATerm o_3 (ATerm t)
            {
              t = not_null(q_10);
              t = guarantee_extension_1_0(p_3, t);
              return(t);
            }
            t = copy_to_1_0(o_3, t);
            return(t);
          }
          t = if_keep1_1_0(n_3, t);
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_29 = t;
                int b_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = FILE_1_0(_id, t);
                    ;
                    LocalPopChoice(b_29);
                  }
                else
                  {
                    t = a_29;
                    if(!(match_cons(t, sym_stdin_0)))
                      _fail(t);
                  }
                LocalPopChoice(y_28);
                t = xtc_transform_file_2_0(q_3, pass_verbose_0_0, t);
              }
            else
              {
                t = x_28;
                t = xtc_transform_term_2_0(t_3, pass_verbose_0_0, t);
              }
            {
              ATerm c_29 = t;
              int d_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_29 = t;
                  int f_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = FILE_1_0(_id, t);
                      ;
                      LocalPopChoice(f_29);
                    }
                  else
                    {
                      t = e_29;
                      if(!(match_cons(t, sym_stdin_0)))
                        _fail(t);
                    }
                  LocalPopChoice(d_29);
                  t = xtc_transform_file_2_0(v_3, pass_verbose_0_0, t);
                }
              else
                {
                  t = c_29;
                  t = xtc_transform_term_2_0(w_3, pass_verbose_0_0, t);
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
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL,z_10 = NULL;
  if(match_cons(t, sym__2))
    {
      v_10 = ATgetArgument(t, 0);
      w_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_10;
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_10);
        {
          ATerm j_29 = t;
          int l_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_19 = NULL;
              t = eval_config_0_0(t);
              q_19 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_10, q_19);
              t = q_19;
              ;
              LocalPopChoice(l_29);
            }
          else
            {
              t = j_29;
            }
        }
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATempty;
      }
    x_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
    {
      ATerm m_29 = t;
      int n_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm r_29 = ATgetArgument(t, 0);
              ATerm s_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_10;
          {
            ATerm x_3 (ATerm t)
            {
              t = x_10;
              return(t);
            }
            t = at_end_1_0(x_3, t);
          }
          ;
          LocalPopChoice(n_29);
        }
      else
        {
          t = m_29;
          {
            ATerm z_19 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_10, x_10));
            if(match_cons(t, sym__2))
              {
                ATerm v_29 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_29) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                z_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_19;
            t = concat_0_0(t);
          }
        }
      z_10 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), v_10, z_10);
      t = (ATerm) ATmakeAppl(sym__3, term_w_29, v_10, z_10);
    }
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
    _fail(t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  t = SSL_explode_string(g_11);
  {
    ATerm x_29 = t;
    int y_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_11 (ATerm t)
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2_0(_id, i_11, t);
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              t = Cons_2_0(y_3, z_3, t);
            }
          return(t);
        }
        t = i_11(t);
        ;
        LocalPopChoice(y_29);
      }
    else
      {
        t = x_29;
        t = (ATerm) ATempty;
      }
    h_11 = t;
    t = SSL_implode_string(h_11);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_11 = NULL,o_11 = NULL;
      m_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_20 = NULL;
            t = eval_config_0_0(t);
            o_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_20);
            t = o_20;
            ;
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
          }
        o_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_11, term_j_19);
        t = geq_0_0(t);
        t = m_11;
        t = h_88(t);
      }
      ;
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
    }
  return(t);
}
ATerm if_verbose4_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_11 = NULL,x_11 = NULL;
      v_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_21 = NULL;
            t = eval_config_0_0(t);
            j_21 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_21);
            t = j_21;
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
          }
        x_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_11, term_m_15);
        t = geq_0_0(t);
        t = v_11;
        t = g_88(t);
      }
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
    }
  return(t);
}
ATerm if_verbose6_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm k_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL,a_12 = NULL;
      y_11 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_22 = NULL;
            t = eval_config_0_0(t);
            t_22 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_22);
            t = t_22;
            ;
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
          }
        a_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_12, term_k_12);
        t = geq_0_0(t);
        t = y_11;
        t = i_88(t);
      }
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = k_30;
    }
  return(t);
}
ATerm union_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      e_12 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm g_12 (ATerm t)
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_12;
          ;
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          {
            ATerm s_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_23 = NULL,f_23 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_23 = ATgetFirst((ATermList) t);
                    f_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = f_12;
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm g_23 = NULL;
                    g_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_23, g_23);
                    t = m_80(t);
                    return(t);
                  }
                  t = fetch_1_0(c_4, t);
                  t = f_23;
                  t = g_12(t);
                }
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = s_30;
                t = Cons_2_0(_id, g_12, t);
              }
          }
        }
      return(t);
    }
    t = g_12(t);
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      w_12 = ATgetArgument(t, 0);
      if((w_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm table_append_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__3))
    {
      l_12 = ATgetArgument(t, 0);
      m_12 = ATgetArgument(t, 1);
      n_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_12, m_12);
  {
    ATerm v_30 = t;
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
        t = SSL_table_get(l_12, m_12);
        ;
        LocalPopChoice(y_30);
      }
    else
      {
        t = v_30;
        t = (ATerm) ATempty;
      }
    o_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_12, n_12);
    t = union_1_0(d_4, t);
    q_12 = t;
    t = SSL_table_put(l_12, m_12, q_12);
    t = (ATerm) ATmakeAppl(sym__3, l_12, m_12, n_12);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm k_88 (ATerm), ATerm t)
{
  ATerm y_12 = NULL,z_12 = NULL;
  if(match_cons(t, sym__2))
    {
      z_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm b_13 = NULL,c_13 = NULL;
      if(match_cons(t, sym__2))
        {
          b_13 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, z_12, b_13, c_13);
      t = k_88(t);
      return(t);
    }
    t = map_1_0(e_4, t);
  }
  return(t);
}
ATerm q_13 (ATerm k_13, ATerm t)
{
  t = SSL_fclose(k_13);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL;
  o_13 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_13 = ATgetArgument(t, 0);
      {
        ATerm b_31 = t;
        int c_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_13);
            ;
            LocalPopChoice(c_31);
          }
        else
          {
            t = b_31;
            t = q_13(o_13, t);
          }
      }
    }
  else
    {
      t = q_13(o_13, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  t = SSL_stdin_stream();
  s_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_13);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_13 = NULL;
  t = SSL_stdout_stream();
  u_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_13);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_13 = NULL;
  t = SSL_stderr_stream();
  v_13 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_13);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_14 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      d_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm h_14 = NULL;
  h_14 = t;
  t = SSL_is_string(h_14);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      ATerm e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_25 = NULL,m_25 = NULL;
        d_25 = t;
        t = SSL_explode_term(d_25);
        if(match_cons(t, sym__2))
          {
            ATerm h_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_31) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_31 = ATgetArgument(t, 1);
              if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
                {
                  m_25 = ATgetFirst((ATermList) i_31);
                  {
                    ATerm j_31 = (ATerm) ATgetNext((ATermList) i_31);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_25;
        if(match_cons(t, sym_stderr_0))
          {
            t = m_25;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = m_25;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = m_25;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        {
          ATerm k_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
              t = _2_0(f_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  a_14 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(a_14, b_14);
              c_14 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, c_14);
              ;
              LocalPopChoice(l_31);
            }
          else
            {
              t = k_31;
              {
                ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
                t = _2_0(g_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    e_14 = ATgetArgument(t, 0);
                    f_14 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(e_14, f_14);
                g_14 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, g_14);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_14 = NULL;
      l_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_14, term_o_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
        ATerm n_25 = NULL;
        n_25 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_25), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = n_25;
        _fail(t);
      }
    }
  i_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(k_14);
  j_14 = t;
  t = i_14;
  t = fclose_0_0(t);
  t = j_14;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm p_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL;
      n_14 = t;
      t = SSL_access(n_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R__OK_0)));
      LocalPopChoice(r_31);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = p_31;
      {
        ATerm s_31 = t;
        int t_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_26 = NULL;
            ATerm u_31 = t;
            if((PushChoice() == 0))
              {
                ATerm o_14 = NULL;
                o_14 = t;
                t = SSL_access(o_14, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_31;
              }
            e_26 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, e_26), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue))));
            t = e_26;
            ;
            LocalPopChoice(t_31);
          }
        else
          {
            t = s_31;
            {
              ATerm h_26 = NULL;
              h_26 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, h_26), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue))));
              t = h_26;
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_26), (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue))));
  t = k_26;
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_26), (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue))));
  t = n_26;
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm v_14 = NULL;
  v_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = v_14;
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue))));
  t = w_14;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm y_14 = NULL;
  y_14 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue))));
  t = y_14;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm q_14 = NULL,s_14 = NULL,u_14 = NULL;
  q_14 = t;
  t = if_verbose5_1_0(h_4, t);
  {
    ATerm v_31 = t;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Imported_1, q_14));
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_31;
      }
    s_14 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Repository_0), (ATerm) ATinsert(ATempty, q_14));
    t = s_14;
    t = if_verbose4_1_0(q_4, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(r_4, t);
    u_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_w_31, u_14);
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(s_4, t);
    t = SSL_table_put((ATerm)ATmakeAppl(sym_XTC_0), (ATerm)ATmakeAppl(sym_Imported_1, q_14), (ATerm) ATempty);
    t = (ATerm) ATmakeAppl(sym__3, term_w_31, (ATerm)ATmakeAppl(sym_Imported_1, q_14), (ATerm) ATempty);
    t = if_verbose4_1_0(t_4, t);
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_4 (ATerm t)
            {
              t = filter_1_0(b_84, t);
              return(t);
            }
            t = Cons_2_0(b_84, v_4, t);
            ;
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
            {
              ATerm d_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm b_32 = ATgetFirst((ATermList) t);
                  d_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_15;
              t = filter_1_0(b_84, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm f_15 (ATerm t)
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_85(t);
        t = f_15(t);
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
      }
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm e_32 = t;
  int f_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)));
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_26 = NULL;
            t = eval_config_0_0(t);
            t_26 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue)), t_26);
            t = t_26;
            ;
            LocalPopChoice(h_32);
          }
        else
          {
            t = g_32;
          }
      }
      ;
      LocalPopChoice(f_32);
    }
  else
    {
      t = e_32;
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
ATerm b_5 (ATerm t)
{
  ATerm u_26 = NULL;
  u_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_26), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue))));
  t = u_26;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Import_0));
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm l_32 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
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
ATerm g_5 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, x_26), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue))));
  t = x_26;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm g_15 = NULL;
  t = if_verbose5_1_0(b_5, t);
  g_15 = t;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Repository_0));
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm h_15 = NULL;
          t = xtc_location_0_0(t);
          t = xtc_read_0_0(t);
          h_15 = t;
          t = repeat_1_0(c_5, t);
          t = h_15;
        }
      }
    t = g_15;
    t = if_verbose5_1_0(g_5, t);
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, a_27), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = a_27;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_27), (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue))));
  t = n_27;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm i_28 = NULL;
  t = SSL_table_keys((ATerm) ATmakeAppl(sym_XTC_0));
  t = map_1_0(o_5, t);
  i_28 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_28), (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue))));
  t = i_28;
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), g_28);
  h_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int q_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(h_5, t);
      t = xtc_load_0_0(t);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
            if(match_cons(t, sym__2))
              {
                g_27 = ATgetArgument(t, 0);
                h_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, g_27));
            {
              ATerm j_5 (ATerm t)
              {
                if(match_cons(t, sym__2))
                  {
                    if((h_27 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      i_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(j_5, t);
              t = not_null(i_27);
            }
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            {
              ATerm l_27 = NULL,m_27 = NULL;
              l_27 = t;
              t = SSL_table_get((ATerm)ATmakeAppl(sym_XTC_0), (ATerm) ATmakeAppl(sym_Tool_1, l_27));
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_32 = ATgetFirst((ATermList) t);
                  if(match_cons(t_32, sym__2))
                    {
                      ATerm v_32 = ATgetArgument(t_32, 0);
                      m_27 = ATgetArgument(t_32, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm u_32 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = m_27;
            }
          }
        t = if_verbose5_1_0(l_5, t);
      }
      ;
      LocalPopChoice(q_32);
    }
  else
    {
      t = o_32;
      {
        ATerm l_15 = NULL;
        l_15 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue))), l_15), (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue))));
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_32), l_15), term_w_32);
        t = if_verbose5_1_0(m_5, t);
        _fail(t);
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
  ATerm b_16 = NULL,c_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_28 = NULL;
        t = b_16;
        t = k_0(t);
        o_28 = t;
        {
          ATerm a_33 = t;
          int b_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(b_33);
            }
          else
            {
              t = a_33;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(c_16, o_28);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_16);
        }
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_28 = NULL;
              t = b_16;
              t = k_0(t);
              u_28 = t;
              {
                ATerm e_33 = t;
                if((PushChoice() == 0))
                  {
                    ATerm f_33 = t;
                    int g_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(g_33);
                      }
                    else
                      {
                        t = f_33;
                        {
                          ATerm h_33 = t;
                          int i_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(i_33);
                            }
                          else
                            {
                              t = h_33;
                              {
                                ATerm v_28 = NULL;
                                v_28 = t;
                                if((c_16 != t))
                                  {
                                    _fail(t);
                                  }
                                t = v_28;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_33;
                  }
                t = SSL_copy(c_16, u_28);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_16);
              }
              ;
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              t = b_16;
              t = k_0(t);
              if((c_16 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_16);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
  if(match_cons(t, sym__2))
    {
      k_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_28 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_33 = ATgetArgument(t, 0);
            ATerm m_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_16, l_16);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_33 = ATgetFirst((ATermList) t);
            z_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_28;
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = (ATerm) ATempty;
      }
    m_16 = t;
    t = SSL_table_put(k_16, l_16, m_16);
    t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_86 (ATerm), ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  s_16 = t;
  t = w_86(t);
  t_16 = t;
  {
    ATerm o_33 = t;
    int p_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_16, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_33);
      }
    else
      {
        t = o_33;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_16 = ATgetFirst((ATermList) t);
        u_16 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_16, (ATerm)ATmakeAppl(sym_Scopes_0), u_16);
    t = v_16;
    {
      ATerm p_5 (ATerm t)
      {
        ATerm w_16 = NULL;
        w_16 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_16, w_16);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(p_5, t);
      t = s_16;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_87(t);
      t = s_87(t);
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
      t = s_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
  z_16 = t;
  t = v_86(t);
  a_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, term_s_33);
  {
    ATerm t_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_33 = ATgetArgument(t, 0);
            ATerm w_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(a_17, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = t_33;
        t = (ATerm) ATempty;
      }
    b_17 = t;
    t = SSL_table_put(a_17, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(b_17), (ATerm) ATempty));
    t = z_16;
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm x_33 = t;
  int y_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_17 = NULL;
      l_17 = t;
      t = SSL_remove(l_17);
      ;
      LocalPopChoice(y_33);
    }
  else
    {
      t = x_33;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_g_22;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_90 (ATerm), ATerm t)
{
  ATerm h_17 = NULL;
  t = begin_scope_1_0(r_5, t);
  {
    ATerm s_5 (ATerm t)
    {
      ATerm i_17 = NULL;
      i_17 = t;
      {
        ATerm z_33 = t;
        int a_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(a_34);
          }
        else
          {
            t = z_33;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((h_17 != NULL) && (h_17 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              h_17 = ATgetFirst((ATermList) t);
            {
              ATerm b_34 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(h_17);
        t = map_1_0(t_5, t);
        t = i_17;
        t = end_scope_1_0(w_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(a_90, s_5, t);
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm e_34 = t;
        int f_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_29 = NULL;
            t = eval_config_0_0(t);
            k_29 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), k_29);
            t = k_29;
            ;
            LocalPopChoice(f_34);
          }
        else
          {
            t = e_34;
          }
      }
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      t = term_y_23;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_29 = NULL;
              t = eval_config_0_0(t);
              g_29 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), g_29);
              t = g_29;
              ;
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
            }
          n_17 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, n_17);
        }
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = term_v_26;
      }
    t = b_90(t);
    t = copy_to_1_0(c_6, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_6, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL;
  o_17 = t;
  t = term_w_21;
  t = whoami_0_0(t);
  p_17 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), p_17), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = o_17;
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  if(match_string(t, "-k"))
    {
      t = r_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_17;
    }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL;
  s_17 = t;
  t = SSL_string_to_int(s_17);
  t_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), t_17);
  t = s_17;
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_k_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_6, f_6, g_6, t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  if(match_string(t, "-S"))
    {
      t = v_17;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_17;
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_m_34;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_n_34;
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm x_17 = NULL,z_17 = NULL;
  x_17 = t;
  t = SSL_string_to_int(x_17);
  z_17 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), z_17);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_17);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_o_34;
  return(t);
}
ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_p_34;
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_6, i_6, j_6, t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      {
        ATerm t_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_6, l_6, m_6, t);
            ;
            LocalPopChoice(u_34);
          }
        else
          {
            t = t_34;
            t = Option_3_0(n_6, o_6, p_6, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_18 = NULL,f_18 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_18 = NULL;
      t = term_w_21;
      t = d_0(t);
      g_18 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_34, term_w_34, g_18);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_18 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_18 = ATgetFirst((ATermList) t);
          f_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_18;
      t = a_0(t);
      t = term_w_21;
      t = b_0(t);
      j_18 = t;
      t = (ATerm) ATinsert(CheckATermList(f_18), j_18);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm l_18 = NULL;
  l_18 = t;
  if(match_string(t, "-o"))
    {
      t = l_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_18;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm m_18 = NULL;
  m_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_18);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_18);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, s_6, t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm o_18 = NULL;
  o_18 = t;
  if(match_string(t, "-i"))
    {
      t = o_18;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_18;
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm p_18 = NULL;
  p_18 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), p_18);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_18);
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_6, u_6, v_6, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym__3))
    {
      s_18 = ATgetArgument(t, 0);
      t_18 = ATgetArgument(t, 1);
      u_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_18, t_18);
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
        t = SSL_table_get(s_18, t_18);
        ;
        LocalPopChoice(a_35);
      }
    else
      {
        t = z_34;
        t = (ATerm) ATempty;
      }
    v_18 = t;
    t = SSL_table_put(s_18, t_18, (ATerm) ATinsert(CheckATermList(v_18), u_18));
    t = (ATerm) ATmakeAppl(sym__3, s_18, t_18, u_18);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_19 = NULL;
      t = term_w_21;
      t = j_0(t);
      i_19 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_34, term_w_34, i_19);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm m_19 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_19 = ATgetFirst((ATermList) t);
          f_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_19 = ATgetFirst((ATermList) t);
          h_19 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_19;
      t = h_0(t);
      t = g_19;
      t = i_0(t);
      m_19 = t;
      t = (ATerm) ATinsert(CheckATermList(h_19), m_19);
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm r_19 = NULL;
  r_19 = t;
  if(match_string(t, "-I"))
    {
      t = r_19;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--Include", 0, ATtrue)))
        _fail(t);
      t = r_19;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm t_19 = NULL;
  t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATinsert(ATempty, t_19));
  t = extend_config_0_0(t);
  t = t_19;
  return(t);
}
ATerm y_6 (ATerm t)
{
  t = term_d_35;
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--syntax", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm u_19 = NULL;
  u_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--syntax", 0, ATtrue)), u_19);
  t = u_19;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_e_35;
  return(t);
}
ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-silent", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm v_19 = NULL;
  v_19 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = v_19;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_f_35;
  return(t);
}
ATerm parse_stratego_options_0_0 (ATerm t)
{
  ATerm g_35 = t;
  int h_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ArgOption_3_0(w_6, x_6, y_6, t);
      ;
      LocalPopChoice(h_35);
    }
  else
    {
      t = g_35;
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(z_6, a_7, d_7, t);
            ;
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            t = Option_3_0(e_7, k_7, l_7, t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_19 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_21;
  t = whoami_0_0(t);
  w_19 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_19));
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
        ATerm o_29 = NULL;
        t = eval_config_0_0(t);
        o_29 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_29);
        t = o_29;
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
ATerm foldr_2_0 (ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm t)
{
  ATerm m_35 = t;
  int n_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_82(t);
      ;
      LocalPopChoice(n_35);
    }
  else
    {
      t = m_35;
      {
        ATerm d_20 = NULL,e_20 = NULL,h_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_20 = ATgetFirst((ATermList) t);
            e_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_20;
        t = foldr_2_0(y_82, z_82, t);
        h_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_20, h_20);
        t = z_82(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = term_l_34;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym__2))
    {
      t_29 = ATgetArgument(t, 0);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_35 = t;
    int p_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(t_29, u_29);
        ;
        LocalPopChoice(p_35);
      }
    else
      {
        t = o_35;
        t = SSL_addr(t_29, u_29);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_20 = NULL,p_29 = NULL,q_29 = NULL;
  t = times_0_0(t);
  p_29 = t;
  t = SSL_explode_term(p_29);
  if(match_cons(t, sym__2))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_29;
  t = foldr_2_0(m_7, n_7, t);
  l_20 = t;
  t = SSL_TicksToSeconds(l_20);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  if(match_cons(t, sym__2))
    {
      y_20 = ATgetArgument(t, 0);
      z_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_35 = t;
    int s_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_20;
        if((y_20 != t))
          {
            _fail(t);
          }
        t = x_20;
        ;
        LocalPopChoice(s_35);
      }
    else
      {
        t = r_35;
        t = x_20;
        {
          ATerm t_35 = t;
          int u_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_20, z_20);
              ;
              LocalPopChoice(u_35);
            }
          else
            {
              t = t_35;
              t = SSL_gtr(y_20, z_20);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_20, z_20);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_21 = NULL,e_21 = NULL;
      c_21 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_30 = NULL;
            t = eval_config_0_0(t);
            h_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_30);
            t = h_30;
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
          }
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_21, term_a_11);
        t = geq_0_0(t);
        t = c_21;
        t = d_88(t);
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
ATerm o_7 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL;
  t = run_time_0_0(t);
  g_21 = t;
  t = term_w_21;
  t = whoami_0_0(t);
  h_21 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), g_21), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), h_21));
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_35), g_21), term_k_11), h_21));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm a_36 = t;
  int b_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(b_36);
    }
  else
    {
      t = a_36;
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_92 (ATerm), ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_30 = NULL;
            t = eval_config_0_0(t);
            l_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), l_30);
            t = l_30;
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
          }
      }
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      t = fetch_1_0(p_7, t);
    }
  t = c_92(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_21 = ATgetFirst((ATermList) t);
      l_21 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_21 = NULL,q_21 = NULL;
        t = l_21;
        t = g_0(t);
        p_21 = t;
        t = k_21;
        t = f_0(t);
        q_21 = t;
        t = l_21;
        {
          ATerm q_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(p_21), q_21);
            return(t);
          }
          t = reverse_acc_2_0(f_0, q_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_21;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm e_69 (ATerm), ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL;
  u_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_21);
  r_21 = t;
  t = s_21;
  t = e_69(t);
  t_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, t_21), r_21);
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_7 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_21), term_i_36);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_36 = t;
        int m_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_30 = NULL;
            t = eval_config_0_0(t);
            p_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), p_30);
            t = p_30;
            ;
            LocalPopChoice(m_36);
          }
        else
          {
            t = l_36;
          }
      }
      ;
      LocalPopChoice(k_36);
    }
  else
    {
      t = j_36;
      t = fetch_1_0(s_7, t);
    }
  t = term_n_36;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, t_7, t);
  t = map_1_0(u_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm f_69 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  c_22 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      a_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_22);
  z_21 = t;
  t = a_22;
  t = f_69(t);
  b_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, b_22), z_21);
  return(t);
}
ATerm fetch_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm f_22 (ATerm t)
  {
    ATerm o_36 = t;
    int p_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_76, _id, t);
        ;
        LocalPopChoice(p_36);
      }
    else
      {
        t = o_36;
        t = Cons_2_0(_id, f_22, t);
      }
    return(t);
  }
  t = f_22(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  h_22 = t;
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_22;
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
            t = h_22;
          }
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        t = (ATerm) ATinsert(ATempty, h_22);
      }
    i_22 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), i_22);
    t = h_22;
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
        ATerm t_30 = NULL;
        t = eval_config_0_0(t);
        t_30 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_30);
        t = t_30;
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
        ATerm o_22 = NULL,p_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_22 = ATgetFirst((ATermList) t);
            p_22 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = o_22;
        {
          ATerm v_7 (ATerm t)
          {
            t = p_22;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(v_7, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_76 (ATerm), ATerm t)
{
  ATerm w_22 (ATerm t)
  {
    ATerm y_36 = t;
    int z_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, w_22, t);
        ;
        LocalPopChoice(z_36);
      }
    else
      {
        t = y_36;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_76(t);
      }
    return(t);
  }
  t = w_22(t);
  return(t);
}
ATerm _2_0 (ATerm h_59 (ATerm), ATerm i_59 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL;
  c_23 = t;
  if(match_cons(t, sym__2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  x_22 = t;
  t = y_22;
  t = h_59(t);
  a_23 = t;
  t = z_22;
  t = i_59(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, a_23, b_23), x_22);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  t = SSL_explode_string(p_23);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  t = SSL_explode_string(q_23);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  t = _2_0(y_7, b_8, t);
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL,t_23 = NULL;
        if(match_cons(t, sym__2))
          {
            s_23 = ATgetArgument(t, 0);
            t_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_23;
        {
          ATerm c_8 (ATerm t)
          {
            t = t_23;
            return(t);
          }
          t = at_end_1_0(c_8, t);
        }
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        {
          ATerm w_30 = NULL,x_30 = NULL;
          w_30 = t;
          t = SSL_explode_term(w_30);
          if(match_cons(t, sym__2))
            {
              ATerm c_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_37) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              x_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_30;
          t = concat_0_0(t);
        }
      }
    o_23 = t;
    t = SSL_implode_string(o_23);
  }
  return(t);
}
ATerm map_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm z_23 (ATerm t)
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
        t = Cons_2_0(h_76, z_23, t);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = NULL;
      f_24 = t;
      t = SSL_is_string(f_24);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm j_37 = t;
        int k_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_8, t);
            ;
            LocalPopChoice(k_37);
          }
        else
          {
            t = j_37;
            {
              ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
              j_24 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_24 = ATgetArgument(t, 0);
                  t = k_24;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_24 = ATgetArgument(t, 0);
                      t = k_24;
                      {
                        ATerm l_37 = t;
                        int m_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_24);
                            {
                              ATerm n_37 = t;
                              int o_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_31 = NULL;
                                  t = eval_config_0_0(t);
                                  q_31 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), k_24, q_31);
                                  t = q_31;
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
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, k_24), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = k_24;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_24 = NULL,q_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_24 = ATgetArgument(t, 0);
                          l_24 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_24;
                      t = eval_config_0_0(t);
                      p_24 = t;
                      t = l_24;
                      t = eval_config_0_0(t);
                      q_24 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_24, q_24);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_37;
  return(t);
}
ATerm g_8 (ATerm t)
{
  t = term_r_37;
  return(t);
}
ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_37;
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_t_37;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_8, f_8, g_8, t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      t = Option_3_0(h_8, i_8, j_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL;
  a_25 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_24 = ATgetFirst((ATermList) t);
      x_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_25);
  v_24 = t;
  t = w_24;
  t = w_63(t);
  y_24 = t;
  t = x_24;
  t = x_63(t);
  z_24 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_24), y_24), v_24);
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_25);
  t = (ATerm) ATmakeAppl(sym_Program_1, f_25);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  {
    ATerm w_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_37;
        t = a_94(t);
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = w_37;
      }
    t = e_25;
    {
      ATerm l_8 (ATerm t)
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
                t = a_94(t);
                t = Cons_2_0(_id, l_8, t);
              }
            ;
            LocalPopChoice(a_38);
          }
        else
          {
            t = z_37;
            {
              ATerm h_25 = NULL,i_25 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_25 = ATgetFirst((ATermList) t);
                  i_25 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_25), (ATerm) ATmakeAppl(sym_Undefined_1, h_25));
            }
          }
        return(t);
      }
      t = Cons_2_0(k_8, l_8, t);
    }
  }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm s_25 = NULL;
  s_25 = t;
  if(match_string(t, "--help"))
    {
      t = s_25;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_25;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_25;
        }
    }
  return(t);
}
ATerm o_8 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_38;
  return(t);
}
ATerm r_8 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm s_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = p_25;
  {
    ATerm m_8 (ATerm t)
    {
      ATerm f_38 = t;
      int g_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_93(t);
          ;
          LocalPopChoice(g_38);
        }
      else
        {
          t = f_38;
          {
            ATerm h_38 = t;
            int i_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_8, o_8, r_8, t);
                ;
                LocalPopChoice(i_38);
              }
            else
              {
                t = h_38;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_8, t);
    {
      ATerm j_38 = t;
      int k_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_25 = NULL;
          x_25 = t;
          {
            ATerm l_38 = t;
            int m_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = x_25;
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
                            ATerm i_32 = NULL;
                            t = eval_config_0_0(t);
                            i_32 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_32);
                            t = i_32;
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
                      t = fetch_1_0(s_8, t);
                    }
                  t = x_25;
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
                      ATerm p_32 = NULL;
                      t = eval_config_0_0(t);
                      p_32 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), p_32);
                      t = p_32;
                      ;
                      LocalPopChoice(s_38);
                    }
                  else
                    {
                      t = r_38;
                    }
                  t = x_25;
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
                ATerm t_8 (ATerm t)
                {
                  ATerm o_9 (ATerm t)
                  {
                    if(((q_25 != NULL) && (q_25 != t)))
                      _fail(t);
                    else
                      q_25 = t;
                    return(t);
                  }
                  t = Undefined_1_0(o_9, t);
                  return(t);
                }
                t = fetch_1_0(t_8, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_25)), term_v_38));
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
      r_25 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = r_25;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_92 (ATerm), ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
{
  ATerm a_26 = NULL;
  t = parse_options_1_0(e_92, t);
  a_26 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_26);
  t = a_26;
  t = g_92(t);
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_92, t);
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
              t = h_92(t);
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
ATerm r_9 (ATerm t)
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
                        t = Option_3_0(t_9, u_9, v_9, t);
                        ;
                        LocalPopChoice(h_39);
                      }
                    else
                      {
                        t = g_39;
                        {
                          ATerm i_39 = t;
                          int j_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(j_39);
                            }
                          else
                            {
                              t = i_39;
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
ATerm s_9 (ATerm t)
{
  t = xtc_io_1_0(z_9, t);
  return(t);
}
ATerm t_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_k_39;
  return(t);
}
ATerm v_9 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  t = term_m_39;
  t = xtc_find_path_0_0(t);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_24, (ATerm) ATinsert(ATinsert(ATempty, c_26), term_n_39));
  t = extend_config_0_0(t);
  t = b_26;
  t = parse_module_0_0(t);
  return(t);
}
ATerm parse_stratego_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_9, default_usage_0_0, _id, s_9, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = parse_stratego_0_0(t);
  return(t);
}
