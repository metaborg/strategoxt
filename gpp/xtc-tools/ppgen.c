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
Symbol sym_PlainText_0;
Symbol sym_ParseTree_0;
Symbol sym_AST_0;
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
  sym_PlainText_0 = ATmakeSymbol("PlainText", 0, ATfalse);
  ATprotectSymbol(sym_PlainText_0);
  sym_ParseTree_0 = ATmakeSymbol("ParseTree", 0, ATfalse);
  ATprotectSymbol(sym_ParseTree_0);
  sym_AST_0 = ATmakeSymbol("AST", 0, ATfalse);
  ATprotectSymbol(sym_AST_0);
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
ATerm term_s_39;
ATerm term_j_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_m_38;
ATerm term_h_38;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_g_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_w_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_u_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_t_34;
ATerm term_q_34;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_h_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_y_31;
ATerm term_n_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_k_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_u_27;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_c_24;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_l_22;
ATerm term_u_21;
ATerm term_b_21;
ATerm term_k_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_p_19;
ATerm term_g_19;
ATerm term_a_19;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_m_15;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_w_12;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_t_9;
ATerm term_v_8;
ATerm term_w_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_r_5;
ATerm term_o_5;
ATerm term_n_5;
ATerm term_m_5;
ATerm term_l_5;
ATerm term_k_5;
ATerm term_i_5;
ATerm term_h_5;
ATerm term_e_5;
void init_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_5));
  term_k_5 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_m_5));
  term_m_5 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_n_5));
  term_n_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_5, term_h_5, term_s_5);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_5, term_v_5, term_w_5);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_5, term_z_5, term_a_6);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_6, term_d_6, term_e_6);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_6, term_h_6, term_i_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_6, term_l_6, term_m_6);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_6, term_p_6, term_q_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_6, term_t_6, term_u_6);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_6, term_x_6, term_y_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_7, term_b_7, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_7, term_f_7, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_i_7, term_j_7, term_k_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_7, term_n_7, term_o_7);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_7, term_v_8, term_t_9);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym_Signal_3, term_o_10, term_p_10, term_e_11);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_w_12, term_n_14, term_o_14);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_14, term_v_14, term_m_15);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_16, term_i_17, term_j_17);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_a_19, term_g_19, term_p_19);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_19, term_k_20, term_b_21);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_Signal_3, term_l_22, term_h_23, term_i_23);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_23, term_c_24, term_k_24);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_p_24, term_q_24, term_r_24);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_24, term_w_24, term_x_24);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_25, term_e_25, term_g_25);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_25, term_l_26, term_m_26);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_27, term_a_28, term_b_28);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_28, term_i_28, term_j_28);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_e_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym__2, term_x_30, term_p_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sglr", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-2tA", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf.cons.tbl", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("implode-asfix", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--input-type", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_PlainText_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("sdf-2-pp-table", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-pp-table", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__2, term_p_30, term_f_30);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_e_5, term_y_34);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_34);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym__2, term_d_35, term_n_30);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym__2, term_o_35, term_n_30);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_ParseTree_0);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_z_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-A          Input is parse tree.", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_AST_0);
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_c_36);
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-a          Input is abstract syntax tree.", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_l_37);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym__2, term_p_38, term_n_30);
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_n_30);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(sym__2, term_d_37, term_n_30);
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__3, term_k_37, term_l_37, (ATerm) ATempty);
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm subt_0_0 (ATerm);
ATerm pass_verbose_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm write_in_baf_to_stream_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm m_72 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm write_to_0_0 (ATerm);
ATerm xtc_transform_term_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm);
ATerm close_file_0_0 (ATerm);
ATerm execvp_0_0 (ATerm);
ATerm concat_strings_0_0 (ATerm);
ATerm int_to_string_0_0 (ATerm);
ATerm signal_to_descr_0_0 (ATerm);
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm);
ATerm signal_from_number_0_0 (ATerm);
ATerm n_0 (ATerm);
ATerm warn_ifsignaled_0_0 (ATerm);
ATerm waitpid_0_0 (ATerm);
ATerm fork_0_0 (ATerm);
ATerm fork_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm);
ATerm fork_and_wait_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm call_0_0 (ATerm);
ATerm xtc_find_warning_0_0 (ATerm);
ATerm xtc_command_1_0 (ATerm m_90 (ATerm), ATerm);
ATerm assert_1_0 (ATerm x_86 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm obsolete_1_0 (ATerm b_72 (ATerm), ATerm);
ATerm a_11 (ATerm q_10, ATerm);
ATerm b_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm);
ATerm r_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm t_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm stdin_0_0 (ATerm);
ATerm FILE_1_0 (ATerm w_68 (ATerm), ATerm);
ATerm xtc_transform_2_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm);
ATerm if_verbose3_1_0 (ATerm d_88 (ATerm), ATerm);
ATerm v_0 (ATerm);
ATerm pass_v_verbose_0_0 (ATerm);
ATerm table_keys_0_0 (ATerm);
ATerm table_getlist_0_0 (ATerm);
ATerm if_verbose5_1_0 (ATerm f_88 (ATerm), ATerm);
ATerm error_0_0 (ATerm);
ATerm xtc_find_loc_0_0 (ATerm);
ATerm xtc_find_version_loc_0_0 (ATerm);
ATerm filter_1_0 (ATerm z_83 (ATerm), ATerm);
ATerm repeat_1_0 (ATerm t_85 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm xtc_import_0_0 (ATerm);
ATerm debug_0_0 (ATerm);
ATerm say_1_0 (ATerm y_71 (ATerm), ATerm);
ATerm if_verbose4_1_0 (ATerm e_88 (ATerm), ATerm);
ATerm if_verbose6_1_0 (ATerm g_88 (ATerm), ATerm);
ATerm set_0_0 (ATerm);
ATerm eq_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm);
ATerm union_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm get_0_0 (ATerm);
ATerm table_append_0_0 (ATerm);
ATerm table_putlist_1_0 (ATerm i_88 (ATerm), ATerm);
ATerm file_exists_0_0 (ATerm);
ATerm z_14 (ATerm q_14, ATerm r_14, ATerm);
ATerm a_15 (ATerm u_14, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm read_from_stream_0_0 (ATerm);
ATerm fopen_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm Fst_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm i_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm access_0_0 (ATerm);
ATerm can_read_file_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm read_repository_file_0_0 (ATerm);
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
ATerm xtc_read_0_0 (ATerm);
ATerm getenv_0_0 (ATerm);
ATerm xtc_location_0_0 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm xtc_load_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm xtc_find_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm xtc_sglr_1_0 (ATerm f_91 (ATerm), ATerm);
ATerm h_2 (ATerm);
ATerm xtc_parse_sdf_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm xtc_implode_asfix_0_0 (ATerm);
ATerm pre_process_sdf_0_0 (ATerm);
ATerm get_input_type_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm ppgen_0_0 (ATerm);
ATerm copy_file_0_0 (ATerm);
ATerm stderr_0_0 (ATerm);
ATerm stdout_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm Tl_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm u_86 (ATerm), ATerm);
ATerm remove_file_0_0 (ATerm);
ATerm restore_always_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm xtc_io_1_0 (ATerm z_89 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm string_to_int_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm ppgen_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm ticks_to_seconds_0_0 (ATerm);
ATerm add_0_0 (ATerm);
ATerm foldr_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm);
ATerm crush_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm gt_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm b_88 (ATerm), ATerm);
ATerm v_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm Version_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm need_help_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm table_create_0_0 (ATerm);
ATerm store_options_0_0 (ATerm);
ATerm table_destroy_0_0 (ATerm);
ATerm exit_0_0 (ATerm);
ATerm long_description_1_0 (ATerm c_94 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm reverse_0_0 (ATerm);
ATerm short_description_1_0 (ATerm b_94 (ATerm), ATerm);
ATerm Program_1_0 (ATerm d_69 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm override_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm printnl_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm e_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_93 (ATerm), ATerm);
ATerm is_list_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm override_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm implode_string_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm explode_string_0_0 (ATerm);
ATerm _2_0 (ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_72 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_76 (ATerm), ATerm);
ATerm is_string_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm e_27 (ATerm n_26, ATerm o_26, ATerm);
ATerm j_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm Help_0_0 (ATerm);
ATerm try_1_0 (ATerm a_87 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_get_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_94 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm UndefinedOption_0_0 (ATerm);
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm);
ATerm Nil_0_0 (ATerm);
ATerm set_config_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm parse_options_p__1_0 (ATerm e_94 (ATerm), ATerm);
ATerm table_put_0_0 (ATerm);
ATerm z_29 (ATerm p_29, ATerm);
ATerm parse_options_1_0 (ATerm d_94 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm io_ppgen_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm subt_0_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_7 != NULL) && (q_7 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_7 = ATgetArgument(t, 0);
      if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_5 = t;
    int d_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(not_null(q_7), not_null(r_7));
        ;
        LocalPopChoice(d_5);
      }
    else
      {
        t = c_5;
        t = SSL_subtr(not_null(q_7), not_null(r_7));
      }
  }
  return(t);
}
ATerm pass_verbose_0_0 (ATerm t)
{
  ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL;
  if(((s_7 != NULL) && (s_7 != t)))
    _fail(t);
  else
    s_7 = t;
  if(((t_7 != NULL) && (t_7 != t)))
    _fail(t);
  else
    t_7 = t;
  t = term_e_5;
  {
    ATerm f_5 = t;
    int g_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_5);
      }
    else
      {
        t = f_5;
        t = term_h_5;
      }
    if(((u_7 != NULL) && (u_7 != t)))
      _fail(t);
    else
      u_7 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), term_h_5);
    t = subt_0_0(t);
    t = int_to_string_0_0(t);
    if(((v_7 != NULL) && (v_7 != t)))
      _fail(t);
    else
      v_7 = t;
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_7)), term_e_5);
  }
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_7 = NULL,y_7 = NULL;
  if(((x_7 != NULL) && (x_7 != t)))
    _fail(t);
  else
    x_7 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm z_7 = NULL,a_8 = NULL;
      t = not_null(x_7);
      if(((z_7 != NULL) && (z_7 != t)))
        _fail(t);
      else
        z_7 = t;
      t = term_i_5;
      t = ReadFromFile_0_0(t);
      if(((a_8 != NULL) && (a_8 != t)))
        _fail(t);
      else
        a_8 = t;
    }
  else
    {
      ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            y_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(y_7);
      if(((b_8 != NULL) && (b_8 != t)))
        _fail(t);
      else
        b_8 = t;
      t = not_null(x_7);
      if(((c_8 != NULL) && (c_8 != t)))
        _fail(t);
      else
        c_8 = t;
      t = not_null(b_8);
      t = file_exists_0_0(t);
      t = ReadFromFile_0_0(t);
      if(((d_8 != NULL) && (d_8 != t)))
        _fail(t);
      else
        d_8 = t;
    }
  return(t);
}
ATerm write_in_baf_to_stream_0_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_5 = ATgetArgument(t, 0);
      if(match_cons(j_5, sym_Stream_1))
        {
          if(((e_8 != NULL) && (e_8 != ATgetArgument(j_5, 0))))
            _fail(ATgetArgument(j_5, 0));
          else
            e_8 = ATgetArgument(j_5, 0);
        }
      else
        _fail(t);
      if(((f_8 != NULL) && (f_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(not_null(e_8), not_null(f_8));
  if(((g_8 != NULL) && (g_8 != t)))
    _fail(t);
  else
    g_8 = t;
  if(((h_8 != NULL) && (h_8 != t)))
    _fail(t);
  else
    h_8 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_8));
  return(t);
}
ATerm WriteToFile_1_0 (ATerm m_72 (ATerm), ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_8 != NULL) && (i_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_8 = ATgetArgument(t, 0);
      if(((j_8 != NULL) && (j_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_8);
  if(((k_8 != NULL) && (k_8 != t)))
    _fail(t);
  else
    k_8 = t;
  if(((l_8 != NULL) && (l_8 != t)))
    _fail(t);
  else
    l_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(l_8), term_k_5);
  t = open_stream_0_0(t);
  if(((m_8 != NULL) && (m_8 != t)))
    _fail(t);
  else
    m_8 = t;
  if(((n_8 != NULL) && (n_8 != t)))
    _fail(t);
  else
    n_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_8), not_null(j_8));
  t = m_72(t);
  t = fclose_0_0(t);
  t = not_null(j_8);
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  t = WriteToFile_1_0(write_in_baf_to_stream_0_0, t);
  return(t);
}
ATerm write_to_0_0 (ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
  if(((o_8 != NULL) && (o_8 != t)))
    _fail(t);
  else
    o_8 = t;
  if(((p_8 != NULL) && (p_8 != t)))
    _fail(t);
  else
    p_8 = t;
  t = xtc_new_file_0_0(t);
  if(((q_8 != NULL) && (q_8 != t)))
    _fail(t);
  else
    q_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_8), not_null(o_8));
  t = WriteToBinaryFile_0_0(t);
  t = not_null(q_8);
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_8));
  return(t);
}
ATerm xtc_transform_term_2_0 (ATerm v_90 (ATerm), ATerm w_90 (ATerm), ATerm t)
{
  t = write_to_0_0(t);
  t = xtc_transform_file_2_0(v_90, w_90, t);
  t = read_from_0_0(t);
  return(t);
}
ATerm close_file_0_0 (ATerm t)
{
  ATerm r_8 = NULL;
  if(((r_8 != NULL) && (r_8 != t)))
    _fail(t);
  else
    r_8 = t;
  t = SSL_close_file(not_null(r_8));
  return(t);
}
ATerm execvp_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_8 != NULL) && (s_8 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_8 = ATgetArgument(t, 0);
      if(((t_8 != NULL) && (t_8 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_execvp(not_null(s_8), not_null(t_8));
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
  ATerm u_8 = NULL;
  if(((u_8 != NULL) && (u_8 != t)))
    _fail(t);
  else
    u_8 = t;
  t = SSL_int_to_string(not_null(u_8));
  return(t);
}
ATerm signal_to_descr_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL;
  if(((w_8 != NULL) && (w_8 != t)))
    _fail(t);
  else
    w_8 = t;
  if(match_cons(t, sym_UnknownSignal_1))
    {
      x_8 = ATgetArgument(t, 0);
      {
        ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL;
        t = not_null(x_8);
        if(((a_9 != NULL) && (a_9 != t)))
          _fail(t);
        else
          a_9 = t;
        t = not_null(w_8);
        if(((b_9 != NULL) && (b_9 != t)))
          _fail(t);
        else
          b_9 = t;
        if(((c_9 != NULL) && (c_9 != t)))
          _fail(t);
        else
          c_9 = t;
        t = not_null(a_9);
        t = int_to_string_0_0(t);
        if(((d_9 != NULL) && (d_9 != t)))
          _fail(t);
        else
          d_9 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_5), not_null(d_9)), term_l_5);
        t = concat_strings_0_0(t);
        if(((e_9 != NULL) && (e_9 != t)))
          _fail(t);
        else
          e_9 = t;
      }
    }
  else
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
      if(match_cons(t, sym_Signal_3))
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
      t = not_null(x_8);
      if(((f_9 != NULL) && (f_9 != t)))
        _fail(t);
      else
        f_9 = t;
      t = not_null(y_8);
      if(((g_9 != NULL) && (g_9 != t)))
        _fail(t);
      else
        g_9 = t;
      t = not_null(z_8);
      if(((h_9 != NULL) && (h_9 != t)))
        _fail(t);
      else
        h_9 = t;
      t = not_null(w_8);
      if(((i_9 != NULL) && (i_9 != t)))
        _fail(t);
      else
        i_9 = t;
      if(((j_9 != NULL) && (j_9 != t)))
        _fail(t);
      else
        j_9 = t;
      t = not_null(g_9);
      t = int_to_string_0_0(t);
      if(((k_9 != NULL) && (k_9 != t)))
        _fail(t);
      else
        k_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_9)), term_o_5), not_null(k_9)), term_n_5), not_null(f_9));
      t = concat_strings_0_0(t);
      if(((l_9 != NULL) && (l_9 != t)))
        _fail(t);
      else
        l_9 = t;
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm s_76 (ATerm), ATerm t)
{
  ATerm m_9 = NULL;
  ATerm c_0 (ATerm t)
  {
    t = s_76(t);
    if(((m_9 != NULL) && (m_9 != t)))
      _fail(t);
    else
      m_9 = t;
    return(t);
  }
  t = fetch_1_0(c_0, t);
  t = not_null(m_9);
  return(t);
}
ATerm signal_from_number_0_0 (ATerm t)
{
  ATerm n_9 = NULL;
  if(((n_9 != NULL) && (n_9 != t)))
    _fail(t);
  else
    n_9 = t;
  {
    ATerm p_5 = t;
    int q_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_28), term_c_28), term_u_27), term_j_25), term_y_24), term_s_24), term_l_24), term_j_23), term_u_21), term_x_19), term_k_17), term_q_16), term_p_14), term_h_11), term_n_10), term_p_7), term_l_7), term_h_7), term_d_7), term_z_6), term_v_6), term_r_6), term_n_6), term_j_6), term_f_6), term_b_6), term_x_5), term_t_5);
        {
          ATerm e_0 (ATerm t)
          {
            if(match_cons(t, sym_Signal_3))
              {
                ATerm y_28 = ATgetArgument(t, 0);
                if(((n_9 != NULL) && (n_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_9 = ATgetArgument(t, 1);
                {
                  ATerm z_28 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_elem_1_0(e_0, t);
        }
        ;
        LocalPopChoice(q_5);
      }
    else
      {
        t = p_5;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(n_9));
      }
  }
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  if(match_cons(t, sym_WaitStatus_3))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if(((p_9 != NULL) && (p_9 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        p_9 = ATgetArgument(t, 1);
      {
        ATerm m_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = not_null(p_9);
  {
    ATerm t_29 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != -1)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_29;
      }
    t = signal_from_number_0_0(t);
    t = signal_to_descr_0_0(t);
    if(((q_9 != NULL) && (q_9 != t)))
      _fail(t);
    else
      q_9 = t;
    if(((r_9 != NULL) && (r_9 != t)))
      _fail(t);
    else
      r_9 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_9)), term_v_29));
    t = printnl_0_0(t);
  }
  return(t);
}
ATerm warn_ifsignaled_0_0 (ATerm t)
{
  ATerm o_9 = NULL;
  if(((o_9 != NULL) && (o_9 != t)))
    _fail(t);
  else
    o_9 = t;
  t = try_1_0(n_0, t);
  t = not_null(o_9);
  return(t);
}
ATerm waitpid_0_0 (ATerm t)
{
  ATerm s_9 = NULL;
  if(((s_9 != NULL) && (s_9 != t)))
    _fail(t);
  else
    s_9 = t;
  t = SSL_waitpid(not_null(s_9));
  return(t);
}
ATerm fork_0_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(((u_9 != NULL) && (u_9 != t)))
    _fail(t);
  else
    u_9 = t;
  t = fork_0_0(t);
  if(((v_9 != NULL) && (v_9 != t)))
    _fail(t);
  else
    v_9 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 = NULL;
        if(((w_9 != NULL) && (w_9 != t)))
          _fail(t);
        else
          w_9 = t;
        if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 0)))
          _fail(t);
        t = not_null(u_9);
        t = z_70(t);
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_9), not_null(u_9));
        t = a_71(t);
      }
  }
  return(t);
}
ATerm fork_and_wait_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm x_9 = NULL;
  ATerm o_0 (ATerm t)
  {
    ATerm y_9 = NULL;
    if(match_cons(t, sym__2))
      {
        if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_9 = ATgetArgument(t, 0);
        if(((x_9 != NULL) && (x_9 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          x_9 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(y_9);
    t = waitpid_0_0(t);
    t = warn_ifsignaled_0_0(t);
    if(match_cons(t, sym_WaitStatus_3))
      {
        ATerm a_30 = ATgetArgument(t, 0);
        if(((ATgetType(a_30) != AT_INT) || (ATgetInt((ATermInt) a_30) != 0)))
          _fail(t);
        {
          ATerm b_30 = ATgetArgument(t, 1);
        }
        {
          ATerm c_30 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    t = not_null(x_9);
    return(t);
  }
  t = fork_2_0(b_71, o_0, t);
  return(t);
}
ATerm call_0_0 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_9 = ATgetArgument(t, 0);
      if(((a_10 != NULL) && (a_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(a_10));
      t = execvp_0_0(t);
      return(t);
    }
    t = fork_and_wait_1_0(p_0, t);
  }
  return(t);
}
ATerm xtc_find_warning_0_0 (ATerm t)
{
  t = xtc_find_0_0(t);
  return(t);
}
ATerm xtc_command_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(((b_10 != NULL) && (b_10 != t)))
    _fail(t);
  else
    b_10 = t;
  t = m_90(t);
  t = xtc_find_warning_0_0(t);
  if(((c_10 != NULL) && (c_10 != t)))
    _fail(t);
  else
    c_10 = t;
  t = not_null(b_10);
  if(((d_10 != NULL) && (d_10 != t)))
    _fail(t);
  else
    d_10 = t;
  if(((e_10 != NULL) && (e_10 != t)))
    _fail(t);
  else
    e_10 = t;
  if(((f_10 != NULL) && (f_10 != t)))
    _fail(t);
  else
    f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_10), not_null(f_10));
  t = call_0_0(t);
  t = not_null(d_10);
  return(t);
}
ATerm assert_1_0 (ATerm x_86 (ATerm), ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_10 = ATgetArgument(t, 0);
      if(((h_10 != NULL) && (h_10 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((i_10 != NULL) && (i_10 != t)))
    _fail(t);
  else
    i_10 = t;
  t = x_86(t);
  if(((j_10 != NULL) && (j_10 != t)))
    _fail(t);
  else
    j_10 = t;
  t = (ATerm) ATmakeAppl(sym__3, not_null(j_10), not_null(g_10), not_null(h_10));
  t = table_push_0_0(t);
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), term_f_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((k_10 != NULL) && (k_10 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          k_10 = ATgetFirst((ATermList) t);
        if(((l_10 != NULL) && (l_10 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          l_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_10), term_f_30, (ATerm) ATinsert(CheckATermList(not_null(l_10)), (ATerm) ATinsert(CheckATermList(not_null(k_10)), not_null(g_10))));
    t = table_put_0_0(t);
    t = not_null(i_10);
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm obsolete_1_0 (ATerm b_72 (ATerm), ATerm t)
{
  ATerm m_10 = NULL;
  if(((m_10 != NULL) && (m_10 != t)))
    _fail(t);
  else
    m_10 = t;
  t = b_72(t);
  t = debug_1_0(q_0, t);
  t = not_null(m_10);
  return(t);
}
ATerm a_11 (ATerm q_10, ATerm t)
{
  ATerm r_10 = NULL;
  t = not_null(q_10);
  if(((r_10 != NULL) && (r_10 != t)))
    _fail(t);
  else
    r_10 = t;
  t = not_null(q_10);
  {
    ATerm h_30 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_30 = ATgetArgument(t, 0);
            ATerm j_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_30;
      }
    t = obsolete_1_0(r_0, t);
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_10), term_k_5);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm b_11 (ATerm s_10, ATerm t_10, ATerm u_10, ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL;
  t = not_null(s_10);
  if(((v_10 != NULL) && (v_10 != t)))
    _fail(t);
  else
    v_10 = t;
  t = not_null(t_10);
  if(((w_10 != NULL) && (w_10 != t)))
    _fail(t);
  else
    w_10 = t;
  t = SSL_open_file(not_null(v_10), not_null(w_10));
  return(t);
}
ATerm r_0 (ATerm t)
{
  t = term_k_30;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  if(((x_10 != NULL) && (x_10 != t)))
    _fail(t);
  else
    x_10 = t;
  if(match_cons(t, sym__2))
    {
      y_10 = ATgetArgument(t, 0);
      z_10 = ATgetArgument(t, 1);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_11(not_null(x_10), t);
            ;
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = b_11(not_null(y_10), not_null(z_10), not_null(x_10), t);
          }
      }
    }
  else
    {
      t = a_11(not_null(x_10), t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm s_0 (ATerm t)
{
  t = file_exists_0_0(t);
  t = new_file_0_0(t);
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  if(((c_11 != NULL) && (c_11 != t)))
    _fail(t);
  else
    c_11 = t;
  t = term_n_30;
  t = new_0_0(t);
  if(((d_11 != NULL) && (d_11 != t)))
    _fail(t);
  else
    d_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_11), term_o_30);
  t = conc_strings_0_0(t);
  t = try_1_0(s_0, t);
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL;
  t = new_file_0_0(t);
  if(((f_11 != NULL) && (f_11 != t)))
    _fail(t);
  else
    f_11 = t;
  if(((g_11 != NULL) && (g_11 != t)))
    _fail(t);
  else
    g_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), term_k_5);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(f_11), term_n_30);
  t = assert_1_0(t_0, t);
  t = not_null(g_11);
  return(t);
}
ATerm xtc_transform_file_2_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  if(((i_11 != NULL) && (i_11 != t)))
    _fail(t);
  else
    i_11 = t;
  if(match_cons(t, sym_stdin_0))
    {
      ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
      t = not_null(i_11);
      if(((k_11 != NULL) && (k_11 != t)))
        _fail(t);
      else
        k_11 = t;
      t = xtc_new_file_0_0(t);
      if(((l_11 != NULL) && (l_11 != t)))
        _fail(t);
      else
        l_11 = t;
      if(((m_11 != NULL) && (m_11 != t)))
        _fail(t);
      else
        m_11 = t;
      t = m_0(t);
      if(((n_11 != NULL) && (n_11 != t)))
        _fail(t);
      else
        n_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_11)), term_q_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(l_11);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_11));
    }
  else
    {
      ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          if(((j_11 != NULL) && (j_11 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = not_null(j_11);
      if(((o_11 != NULL) && (o_11 != t)))
        _fail(t);
      else
        o_11 = t;
      t = not_null(i_11);
      if(((p_11 != NULL) && (p_11 != t)))
        _fail(t);
      else
        p_11 = t;
      t = not_null(o_11);
      t = xtc_new_file_0_0(t);
      if(((q_11 != NULL) && (q_11 != t)))
        _fail(t);
      else
        q_11 = t;
      if(((r_11 != NULL) && (r_11 != t)))
        _fail(t);
      else
        r_11 = t;
      t = m_0(t);
      if(((s_11 != NULL) && (s_11 != t)))
        _fail(t);
      else
        s_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_11)), term_q_30), not_null(o_11)), term_r_30));
      t = conc_0_0(t);
      t = xtc_command_1_0(l_0, t);
      t = not_null(q_11);
      t = close_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_11));
    }
  return(t);
}
ATerm stdin_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_stdin_0)))
    _fail(t);
  return(t);
}
ATerm FILE_1_0 (ATerm w_68 (ATerm), ATerm t)
{
  ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(((w_11 != NULL) && (w_11 != t)))
    _fail(t);
  else
    w_11 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((u_11 != NULL) && (u_11 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = SSLgetAnnotations(not_null(w_11));
  if(((t_11 != NULL) && (t_11 != t)))
    _fail(t);
  else
    t_11 = t;
  t = not_null(u_11);
  t = w_68(t);
  if(((v_11 != NULL) && (v_11 != t)))
    _fail(t);
  else
    v_11 = t;
  if(((z_11 != NULL) && (z_11 != t)))
    _fail(t);
  else
    z_11 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(v_11)), not_null(t_11));
  if(((y_11 != NULL) && (y_11 != t)))
    _fail(t);
  else
    y_11 = t;
  return(t);
}
ATerm xtc_transform_2_0 (ATerm o_90 (ATerm), ATerm p_90 (ATerm), ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1_0(_id, t);
          ;
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          t = stdin_0_0(t);
        }
      LocalPopChoice(t_30);
      t = xtc_transform_file_2_0(o_90, p_90, t);
    }
  else
    {
      t = s_30;
      t = xtc_transform_term_2_0(o_90, p_90, t);
    }
  return(t);
}
ATerm if_verbose3_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
    if(((a_12 != NULL) && (a_12 != t)))
      _fail(t);
    else
      a_12 = t;
    if(((b_12 != NULL) && (b_12 != t)))
      _fail(t);
    else
      b_12 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((c_12 != NULL) && (c_12 != t)))
      _fail(t);
    else
      c_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_12), term_z_5);
    t = geq_0_0(t);
    t = not_null(a_12);
    t = d_88(t);
    return(t);
  }
  t = try_1_0(u_0, t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_30);
  return(t);
}
ATerm pass_v_verbose_0_0 (ATerm t)
{
  t = (ATerm) ATempty;
  t = if_verbose3_1_0(v_0, t);
  return(t);
}
ATerm table_keys_0_0 (ATerm t)
{
  ATerm d_12 = NULL;
  if(((d_12 != NULL) && (d_12 != t)))
    _fail(t);
  else
    d_12 = t;
  t = SSL_table_keys(not_null(d_12));
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm e_12 = NULL;
  if(((e_12 != NULL) && (e_12 != t)))
    _fail(t);
  else
    e_12 = t;
  t = table_keys_0_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      ATerm f_12 = NULL,g_12 = NULL,h_12 = NULL;
      if(((f_12 != NULL) && (f_12 != t)))
        _fail(t);
      else
        f_12 = t;
      if(((g_12 != NULL) && (g_12 != t)))
        _fail(t);
      else
        g_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(e_12), not_null(f_12));
      t = table_get_0_0(t);
      if(((h_12 != NULL) && (h_12 != t)))
        _fail(t);
      else
        h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_12), not_null(h_12));
      return(t);
    }
    t = map_1_0(w_0, t);
  }
  return(t);
}
ATerm if_verbose5_1_0 (ATerm f_88 (ATerm), ATerm t)
{
  ATerm x_0 (ATerm t)
  {
    ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
    if(((i_12 != NULL) && (i_12 != t)))
      _fail(t);
    else
      i_12 = t;
    if(((j_12 != NULL) && (j_12 != t)))
      _fail(t);
    else
      j_12 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((k_12 != NULL) && (k_12 != t)))
      _fail(t);
    else
      k_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_12), term_e_25);
    t = geq_0_0(t);
    t = not_null(i_12);
    t = f_88(t);
    return(t);
  }
  t = try_1_0(x_0, t);
  return(t);
}
ATerm error_0_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  if(((l_12 != NULL) && (l_12 != t)))
    _fail(t);
  else
    l_12 = t;
  if(((m_12 != NULL) && (m_12 != t)))
    _fail(t);
  else
    m_12 = t;
  if(((n_12 != NULL) && (n_12 != t)))
    _fail(t);
  else
    n_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, not_null(n_12));
  t = printnl_0_0(t);
  t = not_null(l_12);
  return(t);
}
ATerm xtc_find_loc_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL;
  if(((o_12 != NULL) && (o_12 != t)))
    _fail(t);
  else
    o_12 = t;
  if(((p_12 != NULL) && (p_12 != t)))
    _fail(t);
  else
    p_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATmakeAppl(sym_Tool_1, not_null(o_12)));
  t = table_get_0_0(t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_30 = ATgetFirst((ATermList) t);
      if(match_cons(y_30, sym__2))
        {
          if(((q_12 != NULL) && (q_12 != ATgetArgument(y_30, 0))))
            _fail(ATgetArgument(y_30, 0));
          else
            q_12 = ATgetArgument(y_30, 0);
          if(((r_12 != NULL) && (r_12 != ATgetArgument(y_30, 1))))
            _fail(ATgetArgument(y_30, 1));
          else
            r_12 = ATgetArgument(y_30, 1);
        }
      else
        _fail(t);
      {
        ATerm z_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = not_null(r_12);
  return(t);
}
ATerm xtc_find_version_loc_0_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((s_12 != NULL) && (s_12 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_12 = ATgetArgument(t, 0);
      if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        t_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((u_12 != NULL) && (u_12 != t)))
    _fail(t);
  else
    u_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATmakeAppl(sym_Tool_1, not_null(s_12)));
  t = table_get_0_0(t);
  {
    ATerm y_0 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          if(((t_12 != NULL) && (t_12 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_12 = ATgetArgument(t, 0);
          if(((v_12 != NULL) && (v_12 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      return(t);
    }
    t = fetch_1_0(y_0, t);
    t = not_null(v_12);
  }
  return(t);
}
ATerm filter_1_0 (ATerm z_83 (ATerm), ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm c_31 = t;
        int d_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_0 (ATerm t)
            {
              t = filter_1_0(z_83, t);
              return(t);
            }
            t = Cons_2_0(z_83, z_0, t);
            ;
            LocalPopChoice(d_31);
          }
        else
          {
            t = c_31;
            {
              ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
              if(((x_12 != NULL) && (x_12 != t)))
                _fail(t);
              else
                x_12 = t;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  if(((y_12 != NULL) && (y_12 != ATgetFirst((ATermList) t))))
                    _fail(ATgetFirst((ATermList) t));
                  else
                    y_12 = ATgetFirst((ATermList) t);
                  if(((z_12 != NULL) && (z_12 != (ATerm) ATgetNext((ATermList) t))))
                    _fail((ATerm) ATgetNext((ATermList) t));
                  else
                    z_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = not_null(z_12);
              if(((a_13 != NULL) && (a_13 != t)))
                _fail(t);
              else
                a_13 = t;
              t = filter_1_0(z_83, t);
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_85 (ATerm), ATerm t)
{
  ATerm b_13 (ATerm t)
  {
    ATerm a_1 (ATerm t)
    {
      t = t_85(t);
      t = b_13(t);
      return(t);
    }
    t = try_1_0(a_1, t);
    return(t);
  }
  t = b_13(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_f_31;
  t = table_get_0_0(t);
  t = filter_1_0(xtc_read_0_0, t);
  {
    ATerm g_31 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_31;
      }
  }
  return(t);
}
ATerm xtc_import_0_0 (ATerm t)
{
  ATerm c_13 = NULL;
  if(((c_13 != NULL) && (c_13 != t)))
    _fail(t);
  else
    c_13 = t;
  t = repeat_1_0(b_1, t);
  t = not_null(c_13);
  return(t);
}
ATerm debug_0_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  if(((d_13 != NULL) && (d_13 != t)))
    _fail(t);
  else
    d_13 = t;
  if(((e_13 != NULL) && (e_13 != t)))
    _fail(t);
  else
    e_13 = t;
  if(((f_13 != NULL) && (f_13 != t)))
    _fail(t);
  else
    f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATempty, not_null(f_13)));
  t = printnl_0_0(t);
  t = not_null(d_13);
  return(t);
}
ATerm say_1_0 (ATerm y_71 (ATerm), ATerm t)
{
  ATerm g_13 = NULL;
  if(((g_13 != NULL) && (g_13 != t)))
    _fail(t);
  else
    g_13 = t;
  t = y_71(t);
  t = debug_0_0(t);
  t = not_null(g_13);
  return(t);
}
ATerm if_verbose4_1_0 (ATerm e_88 (ATerm), ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
    if(((h_13 != NULL) && (h_13 != t)))
      _fail(t);
    else
      h_13 = t;
    if(((i_13 != NULL) && (i_13 != t)))
      _fail(t);
    else
      i_13 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((j_13 != NULL) && (j_13 != t)))
      _fail(t);
    else
      j_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_13), term_j_7);
    t = geq_0_0(t);
    t = not_null(h_13);
    t = e_88(t);
    return(t);
  }
  t = try_1_0(c_1, t);
  return(t);
}
ATerm if_verbose6_1_0 (ATerm g_88 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL;
    if(((k_13 != NULL) && (k_13 != t)))
      _fail(t);
    else
      k_13 = t;
    if(((l_13 != NULL) && (l_13 != t)))
      _fail(t);
    else
      l_13 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((m_13 != NULL) && (m_13 != t)))
      _fail(t);
    else
      m_13 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_13), term_d_6);
    t = geq_0_0(t);
    t = not_null(k_13);
    t = g_88(t);
    return(t);
  }
  t = try_1_0(d_1, t);
  return(t);
}
ATerm set_0_0 (ATerm t)
{
  t = table_put_0_0(t);
  return(t);
}
ATerm eq_0_0 (ATerm t)
{
  ATerm n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_13 = ATgetArgument(t, 0);
      if(((n_13 != NULL) && (n_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm n_80 (ATerm), ATerm o_80 (ATerm), ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((o_13 != NULL) && (o_13 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        o_13 = ATgetFirst((ATermList) t);
      if(((p_13 != NULL) && (p_13 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        p_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((q_13 != NULL) && (q_13 != t)))
    _fail(t);
  else
    q_13 = t;
  t = o_80(t);
  {
    ATerm e_1 (ATerm t)
    {
      ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
      if(((r_13 != NULL) && (r_13 != t)))
        _fail(t);
      else
        r_13 = t;
      if(((s_13 != NULL) && (s_13 != t)))
        _fail(t);
      else
        s_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(r_13));
      t = n_80(t);
      if(((t_13 != NULL) && (t_13 != t)))
        _fail(t);
      else
        t_13 = t;
      return(t);
    }
    t = fetch_1_0(e_1, t);
    t = not_null(p_13);
  }
  return(t);
}
ATerm union_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((u_13 != NULL) && (u_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_13 = ATgetArgument(t, 0);
      if(((v_13 != NULL) && (v_13 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((w_13 != NULL) && (w_13 != t)))
    _fail(t);
  else
    w_13 = t;
  t = not_null(u_13);
  {
    ATerm y_13 (ATerm t)
    {
      ATerm h_31 = t;
      int i_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0_0(t);
          t = not_null(v_13);
          ;
          LocalPopChoice(i_31);
        }
      else
        {
          t = h_31;
          {
            ATerm j_31 = t;
            int k_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 (ATerm t)
                {
                  t = not_null(v_13);
                  return(t);
                }
                t = HdMember_p__2_0(k_80, f_1, t);
                t = y_13(t);
                ;
                LocalPopChoice(k_31);
              }
            else
              {
                t = j_31;
                t = Cons_2_0(_id, y_13, t);
              }
          }
        }
      return(t);
    }
    t = y_13(t);
    if(((x_13 != NULL) && (x_13 != t)))
      _fail(t);
    else
      x_13 = t;
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((z_13 != NULL) && (z_13 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_13 = ATgetArgument(t, 0);
      if(((a_14 != NULL) && (a_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_14 = ATgetArgument(t, 1);
      if(((b_14 != NULL) && (b_14 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        b_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((c_14 != NULL) && (c_14 != t)))
    _fail(t);
  else
    c_14 = t;
  if(((d_14 != NULL) && (d_14 != t)))
    _fail(t);
  else
    d_14 = t;
  if(((e_14 != NULL) && (e_14 != t)))
    _fail(t);
  else
    e_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(z_13), not_null(a_14));
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_0_0(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = (ATerm) ATempty;
      }
    if(((f_14 != NULL) && (f_14 != t)))
      _fail(t);
    else
      f_14 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), not_null(b_14));
    t = union_0_0(t);
    if(((g_14 != NULL) && (g_14 != t)))
      _fail(t);
    else
      g_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(z_13), not_null(a_14), not_null(g_14));
    t = set_0_0(t);
    t = not_null(c_14);
  }
  return(t);
}
ATerm table_putlist_1_0 (ATerm i_88 (ATerm), ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((i_14 != NULL) && (i_14 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_14 = ATgetArgument(t, 0);
      if(((h_14 != NULL) && (h_14 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(h_14);
  {
    ATerm g_1 (ATerm t)
    {
      ATerm j_14 = NULL,k_14 = NULL;
      if(match_cons(t, sym__2))
        {
          if(((j_14 != NULL) && (j_14 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_14 = ATgetArgument(t, 0);
          if(((k_14 != NULL) && (k_14 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            k_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__3, not_null(i_14), not_null(j_14), not_null(k_14));
      t = i_88(t);
      return(t);
    }
    t = map_1_0(g_1, t);
  }
  return(t);
}
ATerm file_exists_0_0 (ATerm t)
{
  ATerm l_14 = NULL,m_14 = NULL;
  if(((l_14 != NULL) && (l_14 != t)))
    _fail(t);
  else
    l_14 = t;
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_14), (ATerm) ATinsert(ATempty, term_n_31));
  t = access_0_0(t);
  return(t);
}
ATerm z_14 (ATerm q_14, ATerm r_14, ATerm t)
{
  ATerm s_14 = NULL;
  t = not_null(q_14);
  if(((s_14 != NULL) && (s_14 != t)))
    _fail(t);
  else
    s_14 = t;
  t = SSL_fclose(not_null(s_14));
  return(t);
}
ATerm a_15 (ATerm u_14, ATerm t)
{
  ATerm w_14 = NULL;
  t = not_null(u_14);
  if(((w_14 != NULL) && (w_14 != t)))
    _fail(t);
  else
    w_14 = t;
  t = SSL_fclose(not_null(w_14));
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(((y_14 != NULL) && (y_14 != t)))
    _fail(t);
  else
    y_14 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_14 = ATgetArgument(t, 0);
      {
        ATerm o_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_14(not_null(x_14), not_null(y_14), t);
            ;
            LocalPopChoice(p_31);
          }
        else
          {
            t = o_31;
            t = a_15(not_null(y_14), t);
          }
      }
    }
  else
    {
      t = a_15(not_null(y_14), t);
    }
  return(t);
}
ATerm read_from_stream_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  if(match_cons(t, sym_Stream_1))
    {
      if(((b_15 != NULL) && (b_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(not_null(b_15));
  return(t);
}
ATerm fopen_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((c_15 != NULL) && (c_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_15 = ATgetArgument(t, 0);
      if(((d_15 != NULL) && (d_15 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        d_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_fopen(not_null(c_15), not_null(d_15));
  if(((e_15 != NULL) && (e_15 != t)))
    _fail(t);
  else
    e_15 = t;
  if(((f_15 != NULL) && (f_15 != t)))
    _fail(t);
  else
    f_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(f_15));
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  t = SSL_stdin_stream();
  if(((g_15 != NULL) && (g_15 != t)))
    _fail(t);
  else
    g_15 = t;
  if(((h_15 != NULL) && (h_15 != t)))
    _fail(t);
  else
    h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_15));
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  t = SSL_stdout_stream();
  if(((i_15 != NULL) && (i_15 != t)))
    _fail(t);
  else
    i_15 = t;
  if(((j_15 != NULL) && (j_15 != t)))
    _fail(t);
  else
    j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_15));
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  t = SSL_stderr_stream();
  if(((k_15 != NULL) && (k_15 != t)))
    _fail(t);
  else
    k_15 = t;
  if(((l_15 != NULL) && (l_15 != t)))
    _fail(t);
  else
    l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_15));
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_15 = NULL;
  if(((n_15 != NULL) && (n_15 != t)))
    _fail(t);
  else
    n_15 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = not_null(n_15);
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = not_null(n_15);
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = not_null(n_15);
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm Fst_0_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(((o_15 != NULL) && (o_15 != t)))
    _fail(t);
  else
    o_15 = t;
  if(((p_15 != NULL) && (p_15 != t)))
    _fail(t);
  else
    p_15 = t;
  t = not_null(o_15);
  if(((q_15 != NULL) && (q_15 != t)))
    _fail(t);
  else
    q_15 = t;
  t = SSL_explode_term(not_null(q_15));
  if(match_cons(t, sym__2))
    {
      ATerm q_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            if(((s_15 != NULL) && (s_15 != ATgetFirst((ATermList) r_31))))
              _fail(ATgetFirst((ATermList) r_31));
            else
              s_15 = ATgetFirst((ATermList) r_31);
            if(((r_15 != NULL) && (r_15 != (ATerm) ATgetNext((ATermList) r_31))))
              _fail((ATerm) ATgetNext((ATermList) r_31));
            else
              r_15 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = not_null(s_15);
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm t_15 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = not_null(t_15);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      ATerm t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Fst_0_0(t);
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = u_31;
        {
          ATerm w_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = _2_0(h_1, _id, t);
              t = fopen_0_0(t);
              ;
              LocalPopChoice(x_31);
            }
          else
            {
              t = w_31;
              t = _2_0(is_string_0_0, _id, t);
              t = fopen_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = term_y_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL;
      if(((u_15 != NULL) && (u_15 != t)))
        _fail(t);
      else
        u_15 = t;
      if(((v_15 != NULL) && (v_15 != t)))
        _fail(t);
      else
        v_15 = t;
      t = not_null(u_15);
      if(((w_15 != NULL) && (w_15 != t)))
        _fail(t);
      else
        w_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(w_15), term_b_32);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      t = debug_1_0(i_1, t);
      _fail(t);
    }
  if(((x_15 != NULL) && (x_15 != t)))
    _fail(t);
  else
    x_15 = t;
  t = read_from_stream_0_0(t);
  if(((y_15 != NULL) && (y_15 != t)))
    _fail(t);
  else
    y_15 = t;
  t = not_null(x_15);
  t = fclose_0_0(t);
  t = not_null(y_15);
  return(t);
}
ATerm access_0_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_15 != NULL) && (z_15 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_15 = ATgetArgument(t, 0);
      if(((a_16 != NULL) && (a_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_access(not_null(z_15), not_null(a_16));
  return(t);
}
ATerm can_read_file_0_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL;
  if(((b_16 != NULL) && (b_16 != t)))
    _fail(t);
  else
    b_16 = t;
  if(((c_16 != NULL) && (c_16 != t)))
    _fail(t);
  else
    c_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(c_16), (ATerm) ATinsert(ATempty, term_c_32));
  t = access_0_0(t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  t = term_d_32;
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm read_repository_file_0_0 (ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0_0(t);
      LocalPopChoice(g_32);
      t = ReadFromFile_0_0(t);
    }
  else
    {
      t = f_32;
      {
        ATerm h_32 = t;
        int i_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_32 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = j_32;
              }
            t = debug_1_0(j_1, t);
            ;
            LocalPopChoice(i_32);
          }
        else
          {
            t = h_32;
            t = debug_1_0(k_1, t);
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = debug_1_0(m_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = debug_1_0(o_1, t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = say_1_0(q_1, t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = say_1_0(s_1, t);
  return(t);
}
ATerm s_1 (ATerm t)
{
  t = term_n_32;
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = say_1_0(u_1, t);
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_m_32;
  return(t);
}
ATerm xtc_read_0_0 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  if(((d_16 != NULL) && (d_16 != t)))
    _fail(t);
  else
    d_16 = t;
  t = if_verbose5_1_0(l_1, t);
  {
    ATerm o_32 = t;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_30, (ATerm) ATmakeAppl(sym_Imported_1, not_null(d_16)));
        t = table_get_0_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_32;
      }
    if(((e_16 != NULL) && (e_16 != t)))
      _fail(t);
    else
      e_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, term_x_30, term_p_32, (ATerm) ATinsert(ATempty, not_null(d_16)));
    t = table_put_0_0(t);
    t = not_null(e_16);
    t = if_verbose4_1_0(n_1, t);
    t = read_repository_file_0_0(t);
    t = if_verbose6_1_0(p_1, t);
    if(((f_16 != NULL) && (f_16 != t)))
      _fail(t);
    else
      f_16 = t;
    if(((g_16 != NULL) && (g_16 != t)))
      _fail(t);
    else
      g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_30, not_null(g_16));
    t = table_putlist_1_0(table_append_0_0, t);
    t = if_verbose6_1_0(r_1, t);
    t = (ATerm) ATmakeAppl(sym__3, term_x_30, (ATerm)ATmakeAppl(sym_Imported_1, not_null(d_16)), (ATerm) ATempty);
    t = table_put_0_0(t);
    t = if_verbose4_1_0(t_1, t);
  }
  return(t);
}
ATerm getenv_0_0 (ATerm t)
{
  ATerm h_16 = NULL;
  if(((h_16 != NULL) && (h_16 != t)))
    _fail(t);
  else
    h_16 = t;
  t = SSL_getenv(not_null(h_16));
  return(t);
}
ATerm xtc_location_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_32;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_32;
            t = getenv_0_0(t);
            ;
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = debug_1_0(w_1, t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm x_1 (ATerm t)
{
  t = debug_1_0(y_1, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_x_32;
  return(t);
}
ATerm xtc_load_0_0 (ATerm t)
{
  ATerm i_16 = NULL;
  t = if_verbose5_1_0(v_1, t);
  if(((i_16 != NULL) && (i_16 != t)))
    _fail(t);
  else
    i_16 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_33;
        t = table_get_0_0(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = xtc_location_0_0(t);
        t = xtc_read_0_0(t);
        t = xtc_import_0_0(t);
      }
    t = not_null(i_16);
    t = if_verbose5_1_0(x_1, t);
  }
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = debug_1_0(a_2, t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = debug_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_b_33;
  return(t);
}
ATerm d_2 (ATerm t)
{
  t = term_x_30;
  t = table_getlist_0_0(t);
  t = debug_1_0(e_2, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm xtc_find_0_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = if_verbose5_1_0(z_1, t);
      t = xtc_load_0_0(t);
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = xtc_find_version_loc_0_0(t);
            ;
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            t = xtc_find_loc_0_0(t);
          }
        t = if_verbose5_1_0(b_2, t);
      }
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
        if(((j_16 != NULL) && (j_16 != t)))
          _fail(t);
        else
          j_16 = t;
        if(((k_16 != NULL) && (k_16 != t)))
          _fail(t);
        else
          k_16 = t;
        t = not_null(j_16);
        if(((l_16 != NULL) && (l_16 != t)))
          _fail(t);
        else
          l_16 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_33), not_null(l_16)), term_h_33);
        t = error_0_0(t);
        t = if_verbose5_1_0(d_2, t);
        _fail(t);
      }
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_j_33;
  return(t);
}
ATerm xtc_sglr_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
    if(((m_16 != NULL) && (m_16 != t)))
      _fail(t);
    else
      m_16 = t;
    t = term_n_30;
    t = f_91(t);
    t = xtc_find_0_0(t);
    if(((n_16 != NULL) && (n_16 != t)))
      _fail(t);
    else
      n_16 = t;
    t = not_null(m_16);
    if(((o_16 != NULL) && (o_16 != t)))
      _fail(t);
    else
      o_16 = t;
    t = term_n_30;
    t = pass_v_verbose_0_0(t);
    if(((p_16 != NULL) && (p_16 != t)))
      _fail(t);
    else
      p_16 = t;
    t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(p_16)), not_null(n_16)), term_l_33), term_k_33);
    return(t);
  }
  t = xtc_transform_2_0(f_2, g_2, t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_m_33;
  return(t);
}
ATerm xtc_parse_sdf_0_0 (ATerm t)
{
  t = xtc_sglr_1_0(h_2, t);
  t = xtc_implode_asfix_0_0(t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm xtc_implode_asfix_0_0 (ATerm t)
{
  t = xtc_transform_2_0(i_2, pass_verbose_0_0, t);
  return(t);
}
ATerm pre_process_sdf_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  if(((s_16 != NULL) && (s_16 != t)))
    _fail(t);
  else
    s_16 = t;
  if(match_cons(t, sym__2))
    {
      if(((t_16 != NULL) && (t_16 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_16 = ATgetArgument(t, 0);
      if(((u_16 != NULL) && (u_16 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(t_16);
  if(match_cons(t, sym_AST_0))
    {
      ATerm v_16 = NULL;
      t = not_null(u_16);
      if(((v_16 != NULL) && (v_16 != t)))
        _fail(t);
      else
        v_16 = t;
    }
  else
    {
      if(match_cons(t, sym_ParseTree_0))
        {
          ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
          t = not_null(u_16);
          if(((w_16 != NULL) && (w_16 != t)))
            _fail(t);
          else
            w_16 = t;
          t = not_null(s_16);
          if(((x_16 != NULL) && (x_16 != t)))
            _fail(t);
          else
            x_16 = t;
          t = not_null(w_16);
          t = xtc_implode_asfix_0_0(t);
          if(((y_16 != NULL) && (y_16 != t)))
            _fail(t);
          else
            y_16 = t;
        }
      else
        {
          ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
          if(!(match_cons(t, sym_PlainText_0)))
            _fail(t);
          t = not_null(u_16);
          if(((z_16 != NULL) && (z_16 != t)))
            _fail(t);
          else
            z_16 = t;
          t = not_null(s_16);
          if(((a_17 != NULL) && (a_17 != t)))
            _fail(t);
          else
            a_17 = t;
          t = not_null(z_16);
          t = xtc_parse_sdf_0_0(t);
          if(((b_17 != NULL) && (b_17 != t)))
            _fail(t);
          else
            b_17 = t;
        }
    }
  return(t);
}
ATerm get_input_type_0_0 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      t = term_r_33;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  t = term_s_33;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm ppgen_0_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(((c_17 != NULL) && (c_17 != t)))
    _fail(t);
  else
    c_17 = t;
  t = get_input_type_0_0(t);
  if(((d_17 != NULL) && (d_17 != t)))
    _fail(t);
  else
    d_17 = t;
  t = not_null(c_17);
  if(((e_17 != NULL) && (e_17 != t)))
    _fail(t);
  else
    e_17 = t;
  if(((f_17 != NULL) && (f_17 != t)))
    _fail(t);
  else
    f_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), not_null(f_17));
  t = pre_process_sdf_0_0(t);
  t = xtc_transform_2_0(j_2, pass_verbose_0_0, t);
  t = xtc_transform_2_0(k_2, pass_verbose_0_0, t);
  return(t);
}
ATerm copy_file_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((g_17 != NULL) && (g_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_17 = ATgetArgument(t, 0);
      if(((h_17 != NULL) && (h_17 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_copy(not_null(g_17), not_null(h_17));
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
  ATerm a_18 (ATerm l_17, ATerm m_17, ATerm t)
  {
    ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
    t = not_null(l_17);
    if(((n_17 != NULL) && (n_17 != t)))
      _fail(t);
    else
      n_17 = t;
    t = not_null(m_17);
    if(((o_17 != NULL) && (o_17 != t)))
      _fail(t);
    else
      o_17 = t;
    t = k_0(t);
    if(((p_17 != NULL) && (p_17 != t)))
      _fail(t);
    else
      p_17 = t;
    {
      ATerm u_33 = t;
      int v_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = stdout_0_0(t);
          ;
          LocalPopChoice(v_33);
        }
      else
        {
          t = u_33;
          t = stderr_0_0(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(p_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_17));
    }
    return(t);
  }
  ATerm b_18 (ATerm q_17, ATerm r_17, ATerm t)
  {
    ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
    t = not_null(q_17);
    if(((s_17 != NULL) && (s_17 != t)))
      _fail(t);
    else
      s_17 = t;
    t = not_null(r_17);
    if(((t_17 != NULL) && (t_17 != t)))
      _fail(t);
    else
      t_17 = t;
    t = k_0(t);
    if(((u_17 != NULL) && (u_17 != t)))
      _fail(t);
    else
      u_17 = t;
    {
      ATerm w_33 = t;
      if((PushChoice() == 0))
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = stdout_0_0(t);
              ;
              LocalPopChoice(y_33);
            }
          else
            {
              t = x_33;
              {
                ATerm z_33 = t;
                int a_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = stderr_0_0(t);
                    ;
                    LocalPopChoice(a_34);
                  }
                else
                  {
                    t = z_33;
                    {
                      ATerm v_17 = NULL;
                      if(((v_17 != NULL) && (v_17 != t)))
                        _fail(t);
                      else
                        v_17 = t;
                      if(((s_17 != NULL) && (s_17 != t)))
                        _fail(t);
                      else
                        s_17 = t;
                      t = not_null(v_17);
                    }
                  }
              }
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_33;
        }
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(u_17));
      t = copy_file_0_0(t);
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_17));
    }
    return(t);
  }
  ATerm w_17 = NULL,x_17 = NULL;
  if(((w_17 != NULL) && (w_17 != t)))
    _fail(t);
  else
    w_17 = t;
  if(match_cons(t, sym_FILE_1))
    {
      if(((x_17 != NULL) && (x_17 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_18(not_null(x_17), not_null(w_17), t);
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
              t = b_18(not_null(x_17), not_null(w_17), t);
              ;
              LocalPopChoice(e_34);
            }
          else
            {
              t = d_34;
              {
                ATerm y_17 = NULL,z_17 = NULL;
                t = not_null(x_17);
                if(((y_17 != NULL) && (y_17 != t)))
                  _fail(t);
                else
                  y_17 = t;
                t = not_null(w_17);
                if(((z_17 != NULL) && (z_17 != t)))
                  _fail(t);
                else
                  z_17 = t;
                t = k_0(t);
                if(((y_17 != NULL) && (y_17 != t)))
                  _fail(t);
                else
                  y_17 = t;
                t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(y_17));
              }
            }
        }
      }
  }
  return(t);
}
ATerm Tl_0_0 (ATerm t)
{
  ATerm c_18 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_34 = ATgetFirst((ATermList) t);
      if(((c_18 != NULL) && (c_18 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        c_18 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = not_null(c_18);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((d_18 != NULL) && (d_18 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_18 = ATgetArgument(t, 0);
      if(((e_18 != NULL) && (e_18 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        e_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((f_18 != NULL) && (f_18 != t)))
    _fail(t);
  else
    f_18 = t;
  if(((g_18 != NULL) && (g_18 != t)))
    _fail(t);
  else
    g_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(d_18), not_null(e_18));
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        t = Tl_0_0(t);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        t = (ATerm) ATempty;
      }
    if(((h_18 != NULL) && (h_18 != t)))
      _fail(t);
    else
      h_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(d_18), not_null(e_18), not_null(h_18));
    t = table_put_0_0(t);
    t = not_null(f_18);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_86 (ATerm), ATerm t)
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  if(((i_18 != NULL) && (i_18 != t)))
    _fail(t);
  else
    i_18 = t;
  t = u_86(t);
  if(((j_18 != NULL) && (j_18 != t)))
    _fail(t);
  else
    j_18 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), term_f_30);
        t = table_get_0_0(t);
        ;
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((l_18 != NULL) && (l_18 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          l_18 = ATgetFirst((ATermList) t);
        if(((k_18 != NULL) && (k_18 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          k_18 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, not_null(j_18), term_f_30, not_null(k_18));
    t = table_put_0_0(t);
    t = not_null(l_18);
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
        if(((m_18 != NULL) && (m_18 != t)))
          _fail(t);
        else
          m_18 = t;
        if(((n_18 != NULL) && (n_18 != t)))
          _fail(t);
        else
          n_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(m_18));
        t = table_pop_0_0(t);
        if(((o_18 != NULL) && (o_18 != t)))
          _fail(t);
        else
          o_18 = t;
        return(t);
      }
      t = map_1_0(l_2, t);
      t = not_null(i_18);
    }
  }
  return(t);
}
ATerm remove_file_0_0 (ATerm t)
{
  ATerm p_18 = NULL;
  if(((p_18 != NULL) && (p_18 != t)))
    _fail(t);
  else
    p_18 = t;
  t = SSL_remove(not_null(p_18));
  return(t);
}
ATerm restore_always_2_0 (ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_87(t);
      t = q_87(t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      t = q_87(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL;
  if(((q_18 != NULL) && (q_18 != t)))
    _fail(t);
  else
    q_18 = t;
  t = t_86(t);
  if(((r_18 != NULL) && (r_18 != t)))
    _fail(t);
  else
    r_18 = t;
  if(((s_18 != NULL) && (s_18 != t)))
    _fail(t);
  else
    s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), term_f_30);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
        t = (ATerm) ATempty;
      }
    if(((t_18 != NULL) && (t_18 != t)))
      _fail(t);
    else
      t_18 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(r_18), term_f_30, (ATerm) ATinsert(CheckATermList(not_null(t_18)), (ATerm) ATempty));
    t = table_put_0_0(t);
    t = not_null(q_18);
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = try_1_0(remove_file_0_0, t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = term_p_30;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  t = begin_scope_1_0(m_2, t);
  {
    ATerm n_2 (ATerm t)
    {
      ATerm w_18 = NULL;
      if(((w_18 != NULL) && (w_18 != t)))
        _fail(t);
      else
        w_18 = t;
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_34;
            t = table_get_0_0(t);
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((v_18 != NULL) && (v_18 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              v_18 = ATgetFirst((ATermList) t);
            if(((u_18 != NULL) && (u_18 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              u_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(v_18);
        t = map_1_0(o_2, t);
        t = not_null(w_18);
        t = end_scope_1_0(p_2, t);
      }
      return(t);
    }
    t = restore_always_2_0(y_89, n_2, t);
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm r_34 = t;
  int s_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_34);
    }
  else
    {
      t = r_34;
      t = term_t_34;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm u_34 = t;
    int v_34 = stack_ptr;
    if((PushChoice() == 0))
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
        t = term_r_30;
        t = get_config_0_0(t);
        if(((z_18 != NULL) && (z_18 != t)))
          _fail(t);
        else
          z_18 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(z_18));
        ;
        LocalPopChoice(v_34);
      }
    else
      {
        t = u_34;
        t = term_i_5;
      }
    t = z_89(t);
    t = copy_to_1_0(r_2, t);
    return(t);
  }
  t = xtc_temp_files_1_0(q_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm b_19 = NULL;
  if(((b_19 != NULL) && (b_19 != t)))
    _fail(t);
  else
    b_19 = t;
  if(match_string(t, "-k"))
    {
      t = not_null(b_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = not_null(b_19);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  if(((c_19 != NULL) && (c_19 != t)))
    _fail(t);
  else
    c_19 = t;
  if(((d_19 != NULL) && (d_19 != t)))
    _fail(t);
  else
    d_19 = t;
  t = string_to_int_0_0(t);
  if(((e_19 != NULL) && (e_19 != t)))
    _fail(t);
  else
    e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_34, not_null(e_19));
  t = set_config_0_0(t);
  t = not_null(c_19);
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_x_34;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, u_2, t);
  return(t);
}
ATerm string_to_int_0_0 (ATerm t)
{
  ATerm f_19 = NULL;
  if(((f_19 != NULL) && (f_19 != t)))
    _fail(t);
  else
    f_19 = t;
  t = SSL_string_to_int(not_null(f_19));
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm h_19 = NULL;
  if(((h_19 != NULL) && (h_19 != t)))
    _fail(t);
  else
    h_19 = t;
  if(match_string(t, "-S"))
    {
      t = not_null(h_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = not_null(h_19);
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm i_19 = NULL;
  if(((i_19 != NULL) && (i_19 != t)))
    _fail(t);
  else
    i_19 = t;
  t = term_z_34;
  t = set_config_0_0(t);
  t = term_a_35;
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_b_35;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL;
  if(((j_19 != NULL) && (j_19 != t)))
    _fail(t);
  else
    j_19 = t;
  if(((k_19 != NULL) && (k_19 != t)))
    _fail(t);
  else
    k_19 = t;
  t = string_to_int_0_0(t);
  if(((l_19 != NULL) && (l_19 != t)))
    _fail(t);
  else
    l_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_5, not_null(l_19));
  t = set_config_0_0(t);
  t = not_null(j_19);
  if(((m_19 != NULL) && (m_19 != t)))
    _fail(t);
  else
    m_19 = t;
  if(((n_19 != NULL) && (n_19 != t)))
    _fail(t);
  else
    n_19 = t;
  t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_19));
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_c_35;
  return(t);
}
ATerm b_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm o_19 = NULL;
  if(((o_19 != NULL) && (o_19 != t)))
    _fail(t);
  else
    o_19 = t;
  t = term_e_35;
  t = set_config_0_0(t);
  t = term_f_35;
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_g_35;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_2, w_2, x_2, t);
      ;
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm j_35 = t;
        int k_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_2, z_2, a_3, t);
            ;
            LocalPopChoice(k_35);
          }
        else
          {
            t = j_35;
            t = Option_3_0(b_3, c_3, d_3, t);
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm q_19 = NULL;
  if(((q_19 != NULL) && (q_19 != t)))
    _fail(t);
  else
    q_19 = t;
  if(match_string(t, "-o"))
    {
      t = not_null(q_19);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = not_null(q_19);
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  if(((r_19 != NULL) && (r_19 != t)))
    _fail(t);
  else
    r_19 = t;
  if(((s_19 != NULL) && (s_19 != t)))
    _fail(t);
  else
    s_19 = t;
  if(((t_19 != NULL) && (t_19 != t)))
    _fail(t);
  else
    t_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, not_null(t_19));
  t = set_config_0_0(t);
  t = not_null(r_19);
  if(((u_19 != NULL) && (u_19 != t)))
    _fail(t);
  else
    u_19 = t;
  if(((v_19 != NULL) && (v_19 != t)))
    _fail(t);
  else
    v_19 = t;
  t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_19));
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_n_35;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm w_19 = NULL;
  if(((w_19 != NULL) && (w_19 != t)))
    _fail(t);
  else
    w_19 = t;
  t = term_p_35;
  t = set_config_0_0(t);
  t = term_q_35;
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(t_35);
    }
  else
    {
      t = s_35;
      t = Option_3_0(h_3, i_3, j_3, t);
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
  if(((z_19 != NULL) && (z_19 != t)))
    _fail(t);
  else
    z_19 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(z_19);
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((a_20 != NULL) && (a_20 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            a_20 = ATgetFirst((ATermList) t);
          if(((b_20 != NULL) && (b_20 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(b_20);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((c_20 != NULL) && (c_20 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            c_20 = ATgetFirst((ATermList) t);
          if(((d_20 != NULL) && (d_20 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(a_20);
      if(((e_20 != NULL) && (e_20 != t)))
        _fail(t);
      else
        e_20 = t;
      t = not_null(c_20);
      if(((f_20 != NULL) && (f_20 != t)))
        _fail(t);
      else
        f_20 = t;
      t = not_null(d_20);
      if(((g_20 != NULL) && (g_20 != t)))
        _fail(t);
      else
        g_20 = t;
      t = not_null(z_19);
      if(((h_20 != NULL) && (h_20 != t)))
        _fail(t);
      else
        h_20 = t;
      t = not_null(e_20);
      t = h_0(t);
      t = not_null(h_20);
      if(((i_20 != NULL) && (i_20 != t)))
        _fail(t);
      else
        i_20 = t;
      t = not_null(f_20);
      t = i_0(t);
      if(((j_20 != NULL) && (j_20 != t)))
        _fail(t);
      else
        j_20 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_20)), not_null(j_20));
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm l_20 = NULL;
  if(((l_20 != NULL) && (l_20 != t)))
    _fail(t);
  else
    l_20 = t;
  if(match_string(t, "-i"))
    {
      t = not_null(l_20);
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = not_null(l_20);
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL;
  if(((m_20 != NULL) && (m_20 != t)))
    _fail(t);
  else
    m_20 = t;
  if(((n_20 != NULL) && (n_20 != t)))
    _fail(t);
  else
    n_20 = t;
  if(((o_20 != NULL) && (o_20 != t)))
    _fail(t);
  else
    o_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_30, not_null(o_20));
  t = set_config_0_0(t);
  t = not_null(m_20);
  if(((p_20 != NULL) && (p_20 != t)))
    _fail(t);
  else
    p_20 = t;
  if(((q_20 != NULL) && (q_20 != t)))
    _fail(t);
  else
    q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_20));
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_u_35;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_3, l_3, m_3, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int w_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(w_35);
    }
  else
    {
      t = v_35;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-A", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm r_20 = NULL;
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = term_a_36;
  t = set_config_0_0(t);
  t = not_null(r_20);
  return(t);
}
ATerm p_3 (ATerm t)
{
  t = term_b_36;
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-a", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_20 = NULL;
  if(((s_20 != NULL) && (s_20 != t)))
    _fail(t);
  else
    s_20 = t;
  t = term_d_36;
  t = set_config_0_0(t);
  t = not_null(s_20);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_e_36;
  return(t);
}
ATerm ppgen_options_0_0 (ATerm t)
{
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_3, o_3, p_3, t);
      ;
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Option_3_0(q_3, r_3, s_3, t);
            ;
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            t = io_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
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
  t = term_n_30;
  t = whoami_0_0(t);
  if(((v_20 != NULL) && (v_20 != t)))
    _fail(t);
  else
    v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_36), not_null(v_20)), term_j_36));
  t = printnl_0_0(t);
  t = term_h_5;
  t = exit_0_0(t);
  t = not_null(t_20);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL;
  t = report_run_time_0_0(t);
  if(((w_20 != NULL) && (w_20 != t)))
    _fail(t);
  else
    w_20 = t;
  t = term_n_30;
  t = whoami_0_0(t);
  if(((x_20 != NULL) && (x_20 != t)))
    _fail(t);
  else
    x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATempty, term_l_36), not_null(x_20)));
  t = printnl_0_0(t);
  t = term_h_5;
  t = exit_0_0(t);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_36;
  t = get_config_0_0(t);
  return(t);
}
ATerm ticks_to_seconds_0_0 (ATerm t)
{
  ATerm y_20 = NULL;
  if(((y_20 != NULL) && (y_20 != t)))
    _fail(t);
  else
    y_20 = t;
  t = SSL_TicksToSeconds(not_null(y_20));
  return(t);
}
ATerm add_0_0 (ATerm t)
{
  ATerm z_20 = NULL,a_21 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_20 = ATgetArgument(t, 0);
      if(((a_21 != NULL) && (a_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_36 = t;
    int o_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(not_null(z_20), not_null(a_21));
        ;
        LocalPopChoice(o_36);
      }
    else
      {
        t = n_36;
        t = SSL_addr(not_null(z_20), not_null(a_21));
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm w_82 (ATerm), ATerm x_82 (ATerm), ATerm t)
{
  ATerm p_36 = t;
  int q_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      t = w_82(t);
      ;
      LocalPopChoice(q_36);
    }
  else
    {
      t = p_36;
      {
        ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL;
        if(((c_21 != NULL) && (c_21 != t)))
          _fail(t);
        else
          c_21 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((d_21 != NULL) && (d_21 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              d_21 = ATgetFirst((ATermList) t);
            if(((e_21 != NULL) && (e_21 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              e_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(d_21);
        if(((f_21 != NULL) && (f_21 != t)))
          _fail(t);
        else
          f_21 = t;
        t = not_null(e_21);
        if(((g_21 != NULL) && (g_21 != t)))
          _fail(t);
        else
          g_21 = t;
        t = not_null(c_21);
        if(((h_21 != NULL) && (h_21 != t)))
          _fail(t);
        else
          h_21 = t;
        if(((i_21 != NULL) && (i_21 != t)))
          _fail(t);
        else
          i_21 = t;
        t = not_null(g_21);
        t = foldr_2_0(w_82, x_82, t);
        if(((j_21 != NULL) && (j_21 != t)))
          _fail(t);
        else
          j_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_21), not_null(j_21));
        t = x_82(t);
        if(((k_21 != NULL) && (k_21 != t)))
          _fail(t);
        else
          k_21 = t;
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
  if(((l_21 != NULL) && (l_21 != t)))
    _fail(t);
  else
    l_21 = t;
  if(((m_21 != NULL) && (m_21 != t)))
    _fail(t);
  else
    m_21 = t;
  t = not_null(l_21);
  if(((n_21 != NULL) && (n_21 != t)))
    _fail(t);
  else
    n_21 = t;
  t = SSL_explode_term(not_null(n_21));
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        o_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(m_21);
  if(((p_21 != NULL) && (p_21 != t)))
    _fail(t);
  else
    p_21 = t;
  t = not_null(o_21);
  t = foldr_2_0(u_80, v_80, t);
  if(((q_21 != NULL) && (q_21 != t)))
    _fail(t);
  else
    q_21 = t;
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_y_34;
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  t = times_0_0(t);
  t = crush_2_0(t_3, add_0_0, t);
  t = ticks_to_seconds_0_0(t);
  return(t);
}
ATerm gt_0_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_21 = ATgetArgument(t, 0);
      if(((s_21 != NULL) && (s_21 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        s_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((t_21 != NULL) && (t_21 != t)))
    _fail(t);
  else
    t_21 = t;
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_gti(not_null(r_21), not_null(s_21));
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = SSL_gtr(not_null(r_21), not_null(s_21));
      }
    t = not_null(t_21);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
      if(((w_21 != NULL) && (w_21 != t)))
        _fail(t);
      else
        w_21 = t;
      if(match_cons(t, sym__2))
        {
          if(((x_21 != NULL) && (x_21 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            x_21 = ATgetArgument(t, 0);
          if(((y_21 != NULL) && (y_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            y_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = not_null(x_21);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = not_null(y_21);
      if(((v_21 != NULL) && (v_21 != t)))
        _fail(t);
      else
        v_21 = t;
      t = not_null(w_21);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      t = gt_0_0(t);
    }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_88 (ATerm), ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
    if(((z_21 != NULL) && (z_21 != t)))
      _fail(t);
    else
      z_21 = t;
    if(((a_22 != NULL) && (a_22 != t)))
      _fail(t);
    else
      a_22 = t;
    t = term_e_5;
    t = get_config_0_0(t);
    if(((b_22 != NULL) && (b_22 != t)))
      _fail(t);
    else
      b_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), term_h_5);
    t = geq_0_0(t);
    t = not_null(z_21);
    t = b_88(t);
    return(t);
  }
  t = try_1_0(u_3, t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(((c_22 != NULL) && (c_22 != t)))
    _fail(t);
  else
    c_22 = t;
  t = run_time_0_0(t);
  if(((d_22 != NULL) && (d_22 != t)))
    _fail(t);
  else
    d_22 = t;
  t = not_null(c_22);
  if(((e_22 != NULL) && (e_22 != t)))
    _fail(t);
  else
    e_22 = t;
  t = term_n_30;
  t = whoami_0_0(t);
  if(((f_22 != NULL) && (f_22 != t)))
    _fail(t);
  else
    f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_36), not_null(d_22)), term_n_5), not_null(f_22)));
  t = printnl_0_0(t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = term_y_34;
  t = exit_0_0(t);
  return(t);
}
ATerm Version_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm x_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Help_0_0(t);
      ;
      LocalPopChoice(y_36);
    }
  else
    {
      t = x_36;
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = z_36;
            t = Version_0_0(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_37;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = option_defined_1_0(w_3, t);
    }
  t = g_92(t);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm g_22 = NULL;
  if(((g_22 != NULL) && (g_22 != t)))
    _fail(t);
  else
    g_22 = t;
  t = SSL_table_create(not_null(g_22));
  return(t);
}
ATerm store_options_0_0 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(((h_22 != NULL) && (h_22 != t)))
    _fail(t);
  else
    h_22 = t;
  if(((i_22 != NULL) && (i_22 != t)))
    _fail(t);
  else
    i_22 = t;
  t = term_e_37;
  t = table_create_0_0(t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_37, term_f_37, not_null(h_22));
  t = table_put_0_0(t);
  t = not_null(i_22);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_22 = NULL;
  if(((j_22 != NULL) && (j_22 != t)))
    _fail(t);
  else
    j_22 = t;
  t = SSL_table_destroy(not_null(j_22));
  return(t);
}
ATerm exit_0_0 (ATerm t)
{
  ATerm k_22 = NULL;
  if(((k_22 != NULL) && (k_22 != t)))
    _fail(t);
  else
    k_22 = t;
  t = SSL_exit(not_null(k_22));
  return(t);
}
ATerm long_description_1_0 (ATerm c_94 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL,o_22 = NULL;
  if(((o_22 != NULL) && (o_22 != t)))
    _fail(t);
  else
    o_22 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
        t = not_null(m_22);
        if(((p_22 != NULL) && (p_22 != t)))
          _fail(t);
        else
          p_22 = t;
        t = not_null(n_22);
        if(((q_22 != NULL) && (q_22 != t)))
          _fail(t);
        else
          q_22 = t;
        t = not_null(o_22);
        if(((r_22 != NULL) && (r_22 != t)))
          _fail(t);
        else
          r_22 = t;
        t = not_null(q_22);
        if(((s_22 != NULL) && (s_22 != t)))
          _fail(t);
        else
          s_22 = t;
        if(((t_22 != NULL) && (t_22 != t)))
          _fail(t);
        else
          t_22 = t;
        t = g_0(t);
        if(((u_22 != NULL) && (u_22 != t)))
          _fail(t);
        else
          u_22 = t;
        t = not_null(t_22);
        if(((v_22 != NULL) && (v_22 != t)))
          _fail(t);
        else
          v_22 = t;
        t = not_null(p_22);
        t = f_0(t);
        if(((w_22 != NULL) && (w_22 != t)))
          _fail(t);
        else
          w_22 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(w_22));
        if(((x_22 != NULL) && (x_22 != t)))
          _fail(t);
        else
          x_22 = t;
        t = not_null(s_22);
        {
          ATerm x_3 (ATerm t)
          {
            t = not_null(x_22);
            return(t);
          }
          t = reverse_acc_2_0(f_0, x_3, t);
          if(((y_22 != NULL) && (y_22 != t)))
            _fail(t);
          else
            y_22 = t;
        }
      }
    }
  else
    {
      ATerm z_22 = NULL,a_23 = NULL;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = not_null(o_22);
      if(((z_22 != NULL) && (z_22 != t)))
        _fail(t);
      else
        z_22 = t;
      t = term_n_30;
      t = g_0(t);
      if(((a_23 != NULL) && (a_23 != t)))
        _fail(t);
      else
        a_23 = t;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  t = reverse_acc_2_0(_id, y_3, t);
  return(t);
}
ATerm short_description_1_0 (ATerm b_94 (ATerm), ATerm t)
{
  _fail(t);
  return(t);
}
ATerm Program_1_0 (ATerm d_69 (ATerm), ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,l_23 = NULL;
  if(((e_23 != NULL) && (e_23 != t)))
    _fail(t);
  else
    e_23 = t;
  if(match_cons(t, sym_Program_1))
    {
      if(((c_23 != NULL) && (c_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((f_23 != NULL) && (f_23 != t)))
    _fail(t);
  else
    f_23 = t;
  t = SSLgetAnnotations(not_null(e_23));
  if(((b_23 != NULL) && (b_23 != t)))
    _fail(t);
  else
    b_23 = t;
  t = not_null(c_23);
  t = d_69(t);
  if(((d_23 != NULL) && (d_23 != t)))
    _fail(t);
  else
    d_23 = t;
  if(((l_23 != NULL) && (l_23 != t)))
    _fail(t);
  else
    l_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_23)), not_null(b_23));
  if(((g_23 != NULL) && (g_23 != t)))
    _fail(t);
  else
    g_23 = t;
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm n_23 = NULL,o_23 = NULL;
  if(((n_23 != NULL) && (n_23 != t)))
    _fail(t);
  else
    n_23 = t;
  if(((o_23 != NULL) && (o_23 != t)))
    _fail(t);
  else
    o_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_23)), term_g_37);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_23 = NULL;
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_36;
      t = get_config_0_0(t);
      if(((m_23 != NULL) && (m_23 != t)))
        _fail(t);
      else
        m_23 = t;
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
      {
        ATerm z_3 (ATerm t)
        {
          ATerm a_4 (ATerm t)
          {
            if(((m_23 != NULL) && (m_23 != t)))
              _fail(t);
            else
              m_23 = t;
            return(t);
          }
          t = Program_1_0(a_4, t);
          return(t);
        }
        t = option_defined_1_0(z_3, t);
      }
    }
  {
    ATerm b_4 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        t = not_null(m_23);
        return(t);
      }
      t = short_description_1_0(c_4, t);
      t = echo_0_0(t);
      return(t);
    }
    t = try_1_0(b_4, t);
    t = term_j_37;
    t = echo_0_0(t);
    t = term_m_37;
    t = table_get_0_0(t);
    t = reverse_0_0(t);
    t = map_1_0(d_4, t);
    {
      ATerm e_4 (ATerm t)
      {
        ATerm p_23 = NULL,q_23 = NULL;
        if(((p_23 != NULL) && (p_23 != t)))
          _fail(t);
        else
          p_23 = t;
        {
          ATerm f_4 (ATerm t)
          {
            t = not_null(m_23);
            return(t);
          }
          t = long_description_1_0(f_4, t);
          if(((q_23 != NULL) && (q_23 != t)))
            _fail(t);
          else
            q_23 = t;
          t = (ATerm) ATinsert(CheckATermList(not_null(q_23)), term_n_37);
          t = echo_0_0(t);
        }
        return(t);
      }
      t = try_1_0(e_4, t);
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
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0_0(t);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      t = default_system_usage_0_0(t);
    }
  return(t);
}
ATerm printnl_0_0 (ATerm t)
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
  t = SSL_printnl(not_null(r_23), not_null(s_23));
  t = not_null(t_23);
  return(t);
}
ATerm Undefined_1_0 (ATerm e_69 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  if(((x_23 != NULL) && (x_23 != t)))
    _fail(t);
  else
    x_23 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      if(((v_23 != NULL) && (v_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = SSLgetAnnotations(not_null(x_23));
  if(((u_23 != NULL) && (u_23 != t)))
    _fail(t);
  else
    u_23 = t;
  t = not_null(v_23);
  t = e_69(t);
  if(((w_23 != NULL) && (w_23 != t)))
    _fail(t);
  else
    w_23 = t;
  if(((a_24 != NULL) && (a_24 != t)))
    _fail(t);
  else
    a_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_23)), not_null(u_23));
  if(((z_23 != NULL) && (z_23 != t)))
    _fail(t);
  else
    z_23 = t;
  return(t);
}
ATerm fetch_1_0 (ATerm q_76 (ATerm), ATerm t)
{
  ATerm b_24 (ATerm t)
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(q_76, _id, t);
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = Cons_2_0(_id, b_24, t);
      }
    return(t);
  }
  t = b_24(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_93 (ATerm), ATerm t)
{
  t = fetch_1_0(b_93, t);
  return(t);
}
ATerm is_list_0_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  if(((d_24 != NULL) && (d_24 != t)))
    _fail(t);
  else
    d_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = not_null(d_24);
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((e_24 != NULL) && (e_24 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            e_24 = ATgetFirst((ATermList) t);
          if(((f_24 != NULL) && (f_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(d_24);
    }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,n_24 = NULL;
  if(((g_24 != NULL) && (g_24 != t)))
    _fail(t);
  else
    g_24 = t;
  if(((h_24 != NULL) && (h_24 != t)))
    _fail(t);
  else
    h_24 = t;
  {
    ATerm s_37 = t;
    int t_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0_0(t);
        ;
        LocalPopChoice(t_37);
      }
    else
      {
        t = s_37;
        {
          ATerm i_24 = NULL,j_24 = NULL,m_24 = NULL;
          if(((i_24 != NULL) && (i_24 != t)))
            _fail(t);
          else
            i_24 = t;
          if(((j_24 != NULL) && (j_24 != t)))
            _fail(t);
          else
            j_24 = t;
          t = not_null(i_24);
          if(((m_24 != NULL) && (m_24 != t)))
            _fail(t);
          else
            m_24 = t;
          t = (ATerm) ATinsert(ATempty, not_null(m_24));
        }
      }
    if(((n_24 != NULL) && (n_24 != t)))
      _fail(t);
    else
      n_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_t_34, not_null(n_24));
    t = printnl_0_0(t);
    t = not_null(g_24);
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_36;
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
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_about_0_0(t);
      ;
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      t = default_system_about_0_0(t);
    }
  return(t);
}
ATerm implode_string_0_0 (ATerm t)
{
  ATerm o_24 = NULL;
  if(((o_24 != NULL) && (o_24 != t)))
    _fail(t);
  else
    o_24 = t;
  t = SSL_implode_string(not_null(o_24));
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_37 = t;
  int x_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      ;
      LocalPopChoice(x_37);
    }
  else
    {
      t = w_37;
      {
        ATerm t_24 = NULL,u_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL;
        if(((t_24 != NULL) && (t_24 != t)))
          _fail(t);
        else
          t_24 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((u_24 != NULL) && (u_24 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              u_24 = ATgetFirst((ATermList) t);
            if(((z_24 != NULL) && (z_24 != (ATerm) ATgetNext((ATermList) t))))
              _fail((ATerm) ATgetNext((ATermList) t));
            else
              z_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = not_null(u_24);
        if(((a_25 != NULL) && (a_25 != t)))
          _fail(t);
        else
          a_25 = t;
        t = not_null(z_24);
        if(((b_25 != NULL) && (b_25 != t)))
          _fail(t);
        else
          b_25 = t;
        t = not_null(t_24);
        if(((c_25 != NULL) && (c_25 != t)))
          _fail(t);
        else
          c_25 = t;
        t = not_null(a_25);
        {
          ATerm g_4 (ATerm t)
          {
            t = not_null(b_25);
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(g_4, t);
          if(((f_25 != NULL) && (f_25 != t)))
            _fail(t);
          else
            f_25 = t;
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
  if(((h_25 != NULL) && (h_25 != t)))
    _fail(t);
  else
    h_25 = t;
  if(((i_25 != NULL) && (i_25 != t)))
    _fail(t);
  else
    i_25 = t;
  t = not_null(h_25);
  if(((l_25 != NULL) && (l_25 != t)))
    _fail(t);
  else
    l_25 = t;
  t = SSL_explode_term(not_null(l_25));
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      if(((m_25 != NULL) && (m_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(i_25);
  if(((n_25 != NULL) && (n_25 != t)))
    _fail(t);
  else
    n_25 = t;
  t = not_null(m_25);
  t = concat_0_0(t);
  if(((o_25 != NULL) && (o_25 != t)))
    _fail(t);
  else
    o_25 = t;
  return(t);
}
ATerm at_end_1_0 (ATerm w_76 (ATerm), ATerm t)
{
  ATerm p_25 (ATerm t)
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, p_25, t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        t = Nil_0_0(t);
        t = w_76(t);
      }
    return(t);
  }
  t = p_25(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((q_25 != NULL) && (q_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_25 = ATgetArgument(t, 0);
      if(((r_25 != NULL) && (r_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((s_25 != NULL) && (s_25 != t)))
    _fail(t);
  else
    s_25 = t;
  t = not_null(q_25);
  {
    ATerm h_4 (ATerm t)
    {
      t = not_null(r_25);
      return(t);
    }
    t = at_end_1_0(h_4, t);
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm explode_string_0_0 (ATerm t)
{
  ATerm u_25 = NULL;
  if(((u_25 != NULL) && (u_25 != t)))
    _fail(t);
  else
    u_25 = t;
  t = SSL_explode_string(not_null(u_25));
  return(t);
}
ATerm _2_0 (ATerm i_59 (ATerm), ATerm j_59 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL;
  if(((a_26 != NULL) && (a_26 != t)))
    _fail(t);
  else
    a_26 = t;
  if(match_cons(t, sym__2))
    {
      if(((w_25 != NULL) && (w_25 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_25 = ATgetArgument(t, 0);
      if(((x_25 != NULL) && (x_25 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  if(((b_26 != NULL) && (b_26 != t)))
    _fail(t);
  else
    b_26 = t;
  t = SSLgetAnnotations(not_null(a_26));
  if(((v_25 != NULL) && (v_25 != t)))
    _fail(t);
  else
    v_25 = t;
  t = not_null(w_25);
  t = i_59(t);
  if(((y_25 != NULL) && (y_25 != t)))
    _fail(t);
  else
    y_25 = t;
  t = not_null(x_25);
  t = j_59(t);
  if(((z_25 != NULL) && (z_25 != t)))
    _fail(t);
  else
    z_25 = t;
  if(((d_26 != NULL) && (d_26 != t)))
    _fail(t);
  else
    d_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(y_25), not_null(z_25)), not_null(v_25));
  if(((c_26 != NULL) && (c_26 != t)))
    _fail(t);
  else
    c_26 = t;
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  t = _2_0(explode_string_0_0, explode_string_0_0, t);
  t = conc_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  if(((e_26 != NULL) && (e_26 != t)))
    _fail(t);
  else
    e_26 = t;
  if(((f_26 != NULL) && (f_26 != t)))
    _fail(t);
  else
    f_26 = t;
  t = k_72(t);
  if(((g_26 != NULL) && (g_26 != t)))
    _fail(t);
  else
    g_26 = t;
  t = not_null(f_26);
  if(((h_26 != NULL) && (h_26 != t)))
    _fail(t);
  else
    h_26 = t;
  if(((i_26 != NULL) && (i_26 != t)))
    _fail(t);
  else
    i_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_26)), not_null(g_26)));
  t = printnl_0_0(t);
  t = not_null(e_26);
  return(t);
}
ATerm map_1_0 (ATerm f_76 (ATerm), ATerm t)
{
  ATerm j_26 (ATerm t)
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0_0(t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
        t = Cons_2_0(f_76, j_26, t);
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm is_string_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  if(((k_26 != NULL) && (k_26 != t)))
    _fail(t);
  else
    k_26 = t;
  t = SSL_is_string(not_null(k_26));
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = try_1_0(eval_config_0_0, t);
  return(t);
}
ATerm e_27 (ATerm n_26, ATerm o_26, ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  t = not_null(n_26);
  if(((p_26 != NULL) && (p_26 != t)))
    _fail(t);
  else
    p_26 = t;
  t = not_null(o_26);
  if(((q_26 != NULL) && (q_26 != t)))
    _fail(t);
  else
    q_26 = t;
  t = not_null(p_26);
  {
    ATerm f_38 = t;
    int g_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_38);
      }
    else
      {
        t = f_38;
        t = debug_1_0(j_4, t);
        _fail(t);
      }
    if(((r_26 != NULL) && (r_26 != t)))
      _fail(t);
    else
      r_26 = t;
  }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0_0(t);
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
            t = map_1_0(i_4, t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
            {
              ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
              if(((s_26 != NULL) && (s_26 != t)))
                _fail(t);
              else
                s_26 = t;
              if(match_cons(t, sym_Path_1))
                {
                  t_26 = ATgetArgument(t, 0);
                  {
                    ATerm v_26 = NULL;
                    t = not_null(t_26);
                    if(((v_26 != NULL) && (v_26 != t)))
                      _fail(t);
                    else
                      v_26 = t;
                  }
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      t_26 = ATgetArgument(t, 0);
                      t = e_27(not_null(t_26), not_null(s_26), t);
                    }
                  else
                    {
                      ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            t_26 = ATgetArgument(t, 0);
                          if(((u_26 != NULL) && (u_26 != ATgetArgument(t, 1))))
                            _fail(ATgetArgument(t, 1));
                          else
                            u_26 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = not_null(t_26);
                      if(((w_26 != NULL) && (w_26 != t)))
                        _fail(t);
                      else
                        w_26 = t;
                      t = not_null(u_26);
                      if(((x_26 != NULL) && (x_26 != t)))
                        _fail(t);
                      else
                        x_26 = t;
                      t = not_null(s_26);
                      if(((y_26 != NULL) && (y_26 != t)))
                        _fail(t);
                      else
                        y_26 = t;
                      if(((z_26 != NULL) && (z_26 != t)))
                        _fail(t);
                      else
                        z_26 = t;
                      t = not_null(w_26);
                      t = eval_config_0_0(t);
                      if(((a_27 != NULL) && (a_27 != t)))
                        _fail(t);
                      else
                        a_27 = t;
                      t = not_null(z_26);
                      if(((b_27 != NULL) && (b_27 != t)))
                        _fail(t);
                      else
                        b_27 = t;
                      t = not_null(x_26);
                      t = eval_config_0_0(t);
                      if(((c_27 != NULL) && (c_27 != t)))
                        _fail(t);
                      else
                        c_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), not_null(c_27));
                      t = conc_strings_0_0(t);
                      if(((d_27 != NULL) && (d_27 != t)))
                        _fail(t);
                      else
                        d_27 = t;
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
  ATerm f_27 = NULL;
  if(((f_27 != NULL) && (f_27 != t)))
    _fail(t);
  else
    f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_38, not_null(f_27));
  t = table_get_0_0(t);
  {
    ATerm k_4 (ATerm t)
    {
      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
      t = eval_config_0_0(t);
      if(((g_27 != NULL) && (g_27 != t)))
        _fail(t);
      else
        g_27 = t;
      if(((h_27 != NULL) && (h_27 != t)))
        _fail(t);
      else
        h_27 = t;
      if(((i_27 != NULL) && (i_27 != t)))
        _fail(t);
      else
        i_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_38, not_null(f_27), not_null(i_27));
      t = table_put_0_0(t);
      t = not_null(g_27);
      return(t);
    }
    t = try_1_0(k_4, t);
  }
  return(t);
}
ATerm Help_0_0 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1_0 (ATerm a_87 (ATerm), ATerm t)
{
  ATerm n_38 = t;
  int o_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_87(t);
      ;
      LocalPopChoice(o_38);
    }
  else
    {
      t = n_38;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_q_38;
  t = set_config_0_0(t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm j_27 = NULL;
  if(((j_27 != NULL) && (j_27 != t)))
    _fail(t);
  else
    j_27 = t;
  t = term_q_38;
  t = set_config_0_0(t);
  t = term_s_38;
  t = set_config_0_0(t);
  t = term_t_38;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_4, m_4, n_4, t);
      ;
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      t = Option_3_0(o_4, p_4, q_4, t);
    }
  return(t);
}
ATerm table_get_0_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_27 = ATgetArgument(t, 0);
      if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get(not_null(k_27), not_null(l_27));
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__3))
    {
      if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_27 = ATgetArgument(t, 0);
      if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        n_27 = ATgetArgument(t, 1);
      if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        o_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  if(((p_27 != NULL) && (p_27 != t)))
    _fail(t);
  else
    p_27 = t;
  if(((q_27 != NULL) && (q_27 != t)))
    _fail(t);
  else
    q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(m_27), not_null(n_27));
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = table_get_0_0(t);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        t = (ATerm) ATempty;
      }
    if(((r_27 != NULL) && (r_27 != t)))
      _fail(t);
    else
      r_27 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(m_27), not_null(n_27), (ATerm) ATinsert(CheckATermList(not_null(r_27)), not_null(o_27)));
    t = table_put_0_0(t);
    t = not_null(p_27);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_94 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL;
  if(((s_27 != NULL) && (s_27 != t)))
    _fail(t);
  else
    s_27 = t;
  t = term_n_30;
  t = g_94(t);
  if(((t_27 != NULL) && (t_27 != t)))
    _fail(t);
  else
    t_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, term_l_37, not_null(t_27));
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(((v_27 != NULL) && (v_27 != t)))
    _fail(t);
  else
    v_27 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = not_null(v_27);
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm y_27 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((w_27 != NULL) && (w_27 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            w_27 = ATgetFirst((ATermList) t);
          if(((x_27 != NULL) && (x_27 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(w_27);
      if(((y_27 != NULL) && (y_27 != t)))
        _fail(t);
      else
        y_27 = t;
      t = not_null(x_27);
      if(((d_28 != NULL) && (d_28 != t)))
        _fail(t);
      else
        d_28 = t;
      t = not_null(v_27);
      if(((e_28 != NULL) && (e_28 != t)))
        _fail(t);
      else
        e_28 = t;
      t = not_null(y_27);
      t = a_0(t);
      t = not_null(e_28);
      if(((f_28 != NULL) && (f_28 != t)))
        _fail(t);
      else
        f_28 = t;
      t = term_n_30;
      t = b_0(t);
      if(((g_28 != NULL) && (g_28 != t)))
        _fail(t);
      else
        g_28 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(d_28)), not_null(g_28));
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm l_28 = NULL;
  if(((l_28 != NULL) && (l_28 != t)))
    _fail(t);
  else
    l_28 = t;
  if(match_string(t, "--help"))
    {
      t = not_null(l_28);
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = not_null(l_28);
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = not_null(l_28);
        }
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_z_38;
  t = set_config_0_0(t);
  t = term_a_39;
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_b_39;
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  t = Option_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm UndefinedOption_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((m_28 != NULL) && (m_28 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        m_28 = ATgetFirst((ATermList) t);
      if(((n_28 != NULL) && (n_28 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        n_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(not_null(n_28)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_28)));
  return(t);
}
ATerm Cons_2_0 (ATerm x_63 (ATerm), ATerm y_63 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  if(((t_28 != NULL) && (t_28 != t)))
    _fail(t);
  else
    t_28 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      if(((p_28 != NULL) && (p_28 != ATgetFirst((ATermList) t))))
        _fail(ATgetFirst((ATermList) t));
      else
        p_28 = ATgetFirst((ATermList) t);
      if(((q_28 != NULL) && (q_28 != (ATerm) ATgetNext((ATermList) t))))
        _fail((ATerm) ATgetNext((ATermList) t));
      else
        q_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  if(((u_28 != NULL) && (u_28 != t)))
    _fail(t);
  else
    u_28 = t;
  t = SSLgetAnnotations(not_null(t_28));
  if(((o_28 != NULL) && (o_28 != t)))
    _fail(t);
  else
    o_28 = t;
  t = not_null(p_28);
  t = x_63(t);
  if(((r_28 != NULL) && (r_28 != t)))
    _fail(t);
  else
    r_28 = t;
  t = not_null(q_28);
  t = y_63(t);
  if(((s_28 != NULL) && (s_28 != t)))
    _fail(t);
  else
    s_28 = t;
  if(((w_28 != NULL) && (w_28 != t)))
    _fail(t);
  else
    w_28 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_28)), not_null(r_28)), not_null(o_28));
  if(((v_28 != NULL) && (v_28 != t)))
    _fail(t);
  else
    v_28 = t;
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
  ATerm x_28 = NULL,a_29 = NULL;
  if(match_cons(t, sym__2))
    {
      if(((x_28 != NULL) && (x_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        x_28 = ATgetArgument(t, 0);
      if(((a_29 != NULL) && (a_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_38, not_null(x_28), not_null(a_29));
  t = table_put_0_0(t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(((c_29 != NULL) && (c_29 != t)))
    _fail(t);
  else
    c_29 = t;
  if(((d_29 != NULL) && (d_29 != t)))
    _fail(t);
  else
    d_29 = t;
  if(((e_29 != NULL) && (e_29 != t)))
    _fail(t);
  else
    e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, not_null(e_29));
  t = set_config_0_0(t);
  t = not_null(c_29);
  if(((f_29 != NULL) && (f_29 != t)))
    _fail(t);
  else
    f_29 = t;
  if(((g_29 != NULL) && (g_29 != t)))
    _fail(t);
  else
    g_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_29));
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_94 (ATerm), ATerm t)
{
  ATerm b_29 = NULL;
  if(((b_29 != NULL) && (b_29 != t)))
    _fail(t);
  else
    b_29 = t;
  {
    ATerm u_4 (ATerm t)
    {
      t = term_c_39;
      t = e_94(t);
      return(t);
    }
    t = try_1_0(u_4, t);
    t = not_null(b_29);
    {
      ATerm w_4 (ATerm t)
      {
        ATerm d_39 = t;
        int e_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_39 = t;
            int g_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0_0(t);
                ;
                LocalPopChoice(g_39);
              }
            else
              {
                t = f_39;
                t = e_94(t);
                t = Cons_2_0(_id, w_4, t);
              }
            ;
            LocalPopChoice(e_39);
          }
        else
          {
            t = d_39;
            t = UndefinedOption_0_0(t);
          }
        return(t);
      }
      t = Cons_2_0(v_4, w_4, t);
    }
  }
  return(t);
}
ATerm table_put_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL,l_29 = NULL;
  if(((i_29 != NULL) && (i_29 != t)))
    _fail(t);
  else
    i_29 = t;
  if(match_cons(t, sym__3))
    {
      if(((j_29 != NULL) && (j_29 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_29 = ATgetArgument(t, 0);
      if(((k_29 != NULL) && (k_29 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        k_29 = ATgetArgument(t, 1);
      if(((l_29 != NULL) && (l_29 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        l_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_put(not_null(j_29), not_null(k_29), not_null(l_29));
  t = not_null(i_29);
  return(t);
}
ATerm z_29 (ATerm p_29, ATerm t)
{
  ATerm q_29 = NULL;
  t = not_null(p_29);
  if(((q_29 != NULL) && (q_29 != t)))
    _fail(t);
  else
    q_29 = t;
  t = not_null(p_29);
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_37;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = option_defined_1_0(Help_0_0, t);
      }
    t = not_null(q_29);
    t = system_usage_0_0(t);
    t = term_y_34;
    t = exit_0_0(t);
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,y_29 = NULL;
  if(((n_29 != NULL) && (n_29 != t)))
    _fail(t);
  else
    n_29 = t;
  t = term_j_39;
  t = table_put_0_0(t);
  t = not_null(n_29);
  {
    ATerm x_4 (ATerm t)
    {
      ATerm k_39 = t;
      int l_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_94(t);
          ;
          LocalPopChoice(l_39);
        }
      else
        {
          t = k_39;
          {
            ATerm m_39 = t;
            int n_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(n_39);
              }
            else
              {
                t = m_39;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_4, t);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm o_39 = t;
        int p_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_29 = NULL;
            if(((r_29 != NULL) && (r_29 != t)))
              _fail(t);
            else
              r_29 = t;
            {
              ATerm q_39 = t;
              int r_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_29(not_null(r_29), t);
                  ;
                  LocalPopChoice(r_39);
                }
              else
                {
                  t = q_39;
                  {
                    ATerm s_29 = NULL;
                    t = not_null(r_29);
                    if(((s_29 != NULL) && (s_29 != t)))
                      _fail(t);
                    else
                      s_29 = t;
                    t = term_p_38;
                    t = get_config_0_0(t);
                    t = not_null(s_29);
                    t = system_about_0_0(t);
                    t = term_y_34;
                    t = exit_0_0(t);
                  }
                }
            }
            ;
            LocalPopChoice(p_39);
          }
        else
          {
            t = o_39;
            {
              ATerm z_4 (ATerm t)
              {
                ATerm a_5 (ATerm t)
                {
                  if(((o_29 != NULL) && (o_29 != t)))
                    _fail(t);
                  else
                    o_29 = t;
                  return(t);
                }
                t = Undefined_1_0(a_5, t);
                return(t);
              }
              t = option_defined_1_0(z_4, t);
              t = (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_29)), term_s_39));
              t = printnl_0_0(t);
              t = system_usage_0_0(t);
              t = term_h_5;
              t = exit_0_0(t);
            }
          }
        return(t);
      }
      t = try_1_0(y_4, t);
      if(((y_29 != NULL) && (y_29 != t)))
        _fail(t);
      else
        y_29 = t;
      t = term_k_37;
      t = table_destroy_0_0(t);
      t = not_null(y_29);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_92 (ATerm), ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm), ATerm t)
{
  t = parse_options_1_0(i_92, t);
  t = store_options_0_0(t);
  t = k_92(t);
  {
    ATerm t_39 = t;
    int u_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_92, t);
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
              t = l_92(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_39);
            }
          else
            {
              t = v_39;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm m_92 (ATerm), ATerm n_92 (ATerm), ATerm t)
{
  t = option_wrap_4_0(m_92, default_usage_0_0, _id, n_92, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = xtc_io_1_0(ppgen_0_0, t);
  return(t);
}
ATerm io_ppgen_0_0 (ATerm t)
{
  t = option_wrap_2_0(ppgen_options_0_0, b_5, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_ppgen_0_0(t);
  return(t);
}
